#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0082[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
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
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0,
    0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0,
    0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0,
    0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0082(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00308000;
    case 2u: goto L_00308010;
    case 3u: goto L_00308058;
    case 4u: goto L_00308068;
    case 5u: goto L_00308074;
    case 6u: goto L_00308120;
    case 7u: goto L_00308138;
    case 8u: goto L_00308144;
    case 9u: goto L_00308150;
    case 10u: goto L_0030815C;
    case 11u: goto L_00308190;
    case 12u: goto L_003081A8;
    case 13u: goto L_003081C0;
    case 14u: goto L_0030820C;
    case 15u: goto L_00308228;
    case 16u: goto L_00308250;
    case 17u: goto L_003082C8;
    case 18u: goto L_003082E0;
    case 19u: goto L_003082F8;
    case 20u: goto L_00308344;
    case 21u: goto L_00308360;
    case 22u: goto L_00308388;
    case 23u: goto L_00308400;
    case 24u: goto L_00308418;
    case 25u: goto L_00308430;
    case 26u: goto L_0030847C;
    case 27u: goto L_00308498;
    case 28u: goto L_003084C0;
    case 29u: goto L_00308538;
    case 30u: goto L_00308550;
    case 31u: goto L_00308568;
    case 32u: goto L_003085B4;
    case 33u: goto L_003085D0;
    case 34u: goto L_003085F8;
    case 35u: goto L_00308668;
    case 36u: goto L_003086F0;
    case 37u: goto L_00309180;
    case 38u: goto L_00309228;
    case 39u: goto L_00309CD0;
    case 40u: goto L_00309D10;
    case 41u: goto L_00309D30;
    case 42u: goto L_00309D60;
    case 43u: goto L_00309D70;
    case 44u: goto L_00309D98;
    case 45u: goto L_00309DA8;
    case 46u: goto L_00309DE8;
    case 47u: goto L_00309E30;
    case 48u: goto L_00309E50;
    case 49u: goto L_00309E68;
    case 50u: goto L_00309E88;
    case 51u: goto L_00309EB0;
    case 52u: goto L_00309EC8;
    case 53u: goto L_00309F30;
    case 54u: goto L_00309F70;
    case 55u: goto L_00309F80;
    case 56u: goto L_00309F8C;
    case 57u: goto L_00309F98;
    case 58u: goto L_00309FA4;
    case 59u: goto L_0030A020;
    case 60u: goto L_0030A03C;
    case 61u: goto L_0030A054;
    case 62u: goto L_0030A068;
    case 63u: goto L_0030A078;
    case 64u: goto L_0030A08C;
    case 65u: goto L_0030A0C0;
    case 66u: goto L_0030A0CC;
    case 67u: goto L_0030A0E8;
    case 68u: goto L_0030A160;
    case 69u: goto L_0030A178;
    case 70u: goto L_0030A198;
    case 71u: goto L_0030A1A4;
    case 72u: goto L_0030A1B0;
    case 73u: goto L_0030A1BC;
    case 74u: goto L_0030A1C8;
    case 75u: goto L_0030A220;
    case 76u: goto L_0030A238;
    case 77u: goto L_0030A250;
    case 78u: goto L_0030A268;
    case 79u: goto L_0030A290;
    case 80u: goto L_0030A2AC;
    case 81u: goto L_0030A308;
    case 82u: goto L_0030A310;
    case 83u: goto L_0030A328;
    case 84u: goto L_0030A330;
    case 85u: goto L_0030A350;
    case 86u: goto L_0030A364;
    case 87u: goto L_0030A374;
    case 88u: goto L_0030A388;
    case 89u: goto L_0030A3B8;
    case 90u: goto L_0030A3C0;
    case 91u: goto L_0030A3DC;
    case 92u: goto L_0030A404;
    case 93u: goto L_0030A460;
    case 94u: goto L_0030A4B0;
    case 95u: goto L_0030A4C0;
    case 96u: goto L_0030A4D0;
    case 97u: goto L_0030A4E0;
    case 98u: goto L_0030A4FC;
    case 99u: goto L_0030A514;
    case 100u: goto L_0030A524;
    case 101u: goto L_0030A548;
    case 102u: goto L_0030A580;
    case 103u: goto L_0030A598;
    case 104u: goto L_0030A5C4;
    case 105u: goto L_0030A5D0;
    case 106u: goto L_0030A5E0;
    case 107u: goto L_0030A610;
    case 108u: goto L_0030A628;
    case 109u: goto L_0030A640;
    case 110u: goto L_0030A660;
    case 111u: goto L_0030A670;
    case 112u: goto L_0030A690;
    case 113u: goto L_0030A6A8;
    case 114u: goto L_0030A6E8;
    case 115u: goto L_0030A6F0;
    case 116u: goto L_0030A700;
    case 117u: goto L_0030A72C;
    case 118u: goto L_0030A744;
    case 119u: goto L_0030A75C;
    case 120u: goto L_0030A7A0;
    case 121u: goto L_0030A7EC;
    case 122u: goto L_0030A7FC;
    case 123u: goto L_0030A80C;
    case 124u: goto L_0030A820;
    case 125u: goto L_0030A840;
    case 126u: goto L_0030A854;
    case 127u: goto L_0030A894;
    case 128u: goto L_0030A8A0;
    case 129u: goto L_0030A8B0;
    case 130u: goto L_0030A8DC;
    case 131u: goto L_0030A8F4;
    case 132u: goto L_0030A90C;
    case 133u: goto L_0030A950;
    case 134u: goto L_0030A9A4;
    case 135u: goto L_0030A9C0;
    case 136u: goto L_0030A9E0;
    case 137u: goto L_0030A9F8;
    case 138u: goto L_0030AA04;
    case 139u: goto L_0030AA2C;
    case 140u: goto L_0030AA44;
    case 141u: goto L_0030AA64;
    case 142u: goto L_0030AA78;
    case 143u: goto L_0030AA84;
    case 144u: goto L_0030AA90;
    case 145u: goto L_0030AAB8;
    case 146u: goto L_0030AAC0;
    case 147u: goto L_0030AAD0;
    case 148u: goto L_0030AAFC;
    case 149u: goto L_0030AB14;
    case 150u: goto L_0030AB2C;
    case 151u: goto L_0030AB68;
    case 152u: goto L_0030ABB8;
    case 153u: goto L_0030ABC8;
    case 154u: goto L_0030ABF0;
    case 155u: goto L_0030AC10;
    case 156u: goto L_0030AC28;
    case 157u: goto L_0030AC44;
    case 158u: goto L_0030AC5C;
    case 159u: goto L_0030AC6C;
    case 160u: goto L_0030AC90;
    case 161u: goto L_0030ACBC;
    case 162u: goto L_0030ACD0;
    case 163u: goto L_0030ACEC;
    case 164u: goto L_0030AD04;
    case 165u: goto L_0030AD24;
    case 166u: goto L_0030AD38;
    case 167u: goto L_0030AD44;
    case 168u: goto L_0030AD6C;
    case 169u: goto L_0030AD84;
    case 170u: goto L_0030ADA4;
    case 171u: goto L_0030ADB4;
    case 172u: goto L_0030ADC0;
    case 173u: goto L_0030ADCC;
    case 174u: goto L_0030ADEC;
    case 175u: goto L_0030AE0C;
    case 176u: goto L_0030AE20;
    case 177u: goto L_0030AE2C;
    case 178u: goto L_0030AE54;
    case 179u: goto L_0030AE6C;
    case 180u: goto L_0030AE8C;
    case 181u: goto L_0030AE9C;
    case 182u: goto L_0030AEA8;
    case 183u: goto L_0030AEB4;
    case 184u: goto L_0030AED4;
    case 185u: goto L_0030AEF4;
    case 186u: goto L_0030AF08;
    case 187u: goto L_0030AF14;
    case 188u: goto L_0030AF3C;
    case 189u: goto L_0030AF54;
    case 190u: goto L_0030AF74;
    case 191u: goto L_0030AF84;
    case 192u: goto L_0030AF90;
    case 193u: goto L_0030AF9C;
    case 194u: goto L_0030AFBC;
    case 195u: goto L_0030AFDC;
    case 196u: goto L_0030AFF0;
    case 197u: goto L_0030AFFC;
    case 198u: goto L_0030B024;
    case 199u: goto L_0030B03C;
    case 200u: goto L_0030B05C;
    case 201u: goto L_0030B068;
    case 202u: goto L_0030B074;
    case 203u: goto L_0030B084;
    case 204u: goto L_0030B090;
    case 205u: goto L_0030B0B0;
    case 206u: goto L_0030B0C8;
    case 207u: goto L_0030B110;
    case 208u: goto L_0030B118;
    case 209u: goto L_0030B128;
    case 210u: goto L_0030B154;
    case 211u: goto L_0030B170;
    case 212u: goto L_0030B188;
    case 213u: goto L_0030B1A8;
    case 214u: goto L_0030B1B8;
    case 215u: goto L_0030B1D0;
    case 216u: goto L_0030B238;
    case 217u: goto L_0030B254;
    case 218u: goto L_0030B284;
    case 219u: goto L_0030B288;
    case 220u: goto L_0030B294;
    case 221u: goto L_0030B2BC;
    case 222u: goto L_0030B2D4;
    case 223u: goto L_0030B2F4;
    case 224u: goto L_0030B304;
    case 225u: goto L_0030B310;
    case 226u: goto L_0030B31C;
    case 227u: goto L_0030B348;
    case 228u: goto L_0030B350;
    case 229u: goto L_0030B360;
    case 230u: goto L_0030B38C;
    case 231u: goto L_0030B3A8;
    case 232u: goto L_0030B3C0;
    case 233u: goto L_0030B418;
    case 234u: goto L_0030B490;
    case 235u: goto L_0030B4A0;
    case 236u: goto L_0030B4B0;
    case 237u: goto L_0030B4CC;
    case 238u: goto L_0030B4E4;
    case 239u: goto L_0030B4F4;
    case 240u: goto L_0030B518;
    case 241u: goto L_0030B534;
    case 242u: goto L_0030B558;
    case 243u: goto L_0030B574;
    case 244u: goto L_0030B590;
    case 245u: goto L_0030B5A8;
    case 246u: goto L_0030B5B4;
    case 247u: goto L_0030B5DC;
    case 248u: goto L_0030B5F4;
    case 249u: goto L_0030B614;
    case 250u: goto L_0030B620;
    case 251u: goto L_0030B62C;
    case 252u: goto L_0030B640;
    case 253u: goto L_0030B6A0;
    case 254u: goto L_0030B6E0;
    case 255u: goto L_0030B6F8;
    case 256u: goto L_0030B710;
    case 257u: goto L_0030B768;
    case 258u: goto L_0030B770;
    case 259u: goto L_0030B780;
    case 260u: goto L_0030B7AC;
    case 261u: goto L_0030B7C4;
    case 262u: goto L_0030B7E8;
    case 263u: goto L_0030B840;
    case 264u: goto L_0030B850;
    case 265u: goto L_0030B868;
    case 266u: goto L_0030B898;
    case 267u: goto L_0030B8E8;
    case 268u: goto L_0030B8F0;
    case 269u: goto L_0030B908;
    case 270u: goto L_0030B910;
    case 271u: goto L_0030B92C;
    case 272u: goto L_0030B940;
    case 273u: goto L_0030B950;
    case 274u: goto L_0030B960;
    case 275u: goto L_0030B990;
    case 276u: goto L_0030B998;
    case 277u: goto L_0030B9B0;
    case 278u: goto L_0030B9E8;
    case 279u: goto L_0030BA14;
    case 280u: goto L_0030BA30;
    case 281u: goto L_0030BA40;
    case 282u: goto L_0030BA58;
    case 283u: goto L_0030BA80;
    case 284u: goto L_0030BAB4;
    case 285u: goto L_0030BAC0;
    case 286u: goto L_0030BAD0;
    case 287u: goto L_0030BAE8;
    case 288u: goto L_0030BB08;
    case 289u: goto L_0030BB18;
    case 290u: goto L_0030BB28;
    case 291u: goto L_0030BB40;
    case 292u: goto L_0030BB50;
    case 293u: goto L_0030BB68;
    case 294u: goto L_0030BB98;
    case 295u: goto L_0030BBCC;
    case 296u: goto L_0030BBE0;
    case 297u: goto L_0030BBFC;
    case 298u: goto L_0030BC14;
    case 299u: goto L_0030BC24;
    case 300u: goto L_0030BC48;
    case 301u: goto L_0030BC80;
    case 302u: goto L_0030BCD0;
    case 303u: goto L_0030BCF0;
    case 304u: goto L_0030BD28;
    case 305u: goto L_0030BD50;
    case 306u: goto L_0030BD60;
    case 307u: goto L_0030BD80;
    case 308u: goto L_0030BDA8;
    case 309u: goto L_0030BDCC;
    case 310u: goto L_0030BDD8;
    case 311u: goto L_0030BDE4;
    case 312u: goto L_0030BE60;
    case 313u: goto L_0030BE7C;
    case 314u: goto L_0030BE98;
    case 315u: goto L_0030BEA8;
    case 316u: goto L_0030BEB8;
    case 317u: goto L_0030BEDC;
    case 318u: goto L_0030BEF0;
    case 319u: goto L_0030BEFC;
    case 320u: goto L_0030BF28;
    case 321u: goto L_0030BF60;
    case 322u: goto L_0030BF6C;
    case 323u: goto L_0030BF94;
    case 324u: goto L_0030BFAC;
    case 325u: goto L_0030BFE0;
    default: bad_entry(c, 0x00308000u); return;
    }
L_00308000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00308010:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 336u), c.f[20]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 344u), c.f[21]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308058u);  if (depth < kMaxDepth) unit_0062(c, 8u, depth + 1u); else { c.pc = 0x002880B0u; return; } if (c.pc != 0x00308058u) [[unlikely]] return; }
L_00308058:
    c.f[20] = 0u;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308068u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00308068u) [[unlikely]] return; }
L_00308068:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308074u);  if (depth < kMaxDepth) unit_0066(c, 197u, depth + 1u); else { c.pc = 0x00299FB0u; return; } if (c.pc != 0x00308074u) [[unlikely]] return; }
L_00308074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[17], c.r[3].w[0] - 19088u);
    c.f[0] = ld32((c.r[18].w[0] + 13380u));
    set32(c.r[4], 0u + 11u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], 0u - 1u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[9], 0u + 30u);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[29].w[0] + 136u), c.r[6].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 200u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[29].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[29].w[0] + 132u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    st16((c.r[29].w[0] + 144u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 146u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308120u);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x003268F0u; return; } if (c.pc != 0x00308120u) [[unlikely]] return; }
L_00308120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 6540u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308138u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x00308138u) [[unlikely]] return; }
L_00308138:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308144u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x00308144u) [[unlikely]] return; }
L_00308144:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308150u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x00308150u) [[unlikely]] return; }
L_00308150:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030815Cu);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x0030815Cu) [[unlikely]] return; }
L_0030815C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24048u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308284; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[21] = c.r[1].w[0];
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[21], 0u + 4u);
    set32(c.r[23], 0u + 2u);
    set32(c.r[22], 0u + 13248u);
    c.budget -= 9;
L_00308190:
    set32(c.r[2], ld32((c.r[30].w[0] + 24032u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081A8u);  if (depth < kMaxDepth) unit_008A(c, 139u, depth + 1u); else { c.pc = 0x0032A118u; return; } if (c.pc != 0x003081A8u) [[unlikely]] return; }
L_003081A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081C0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x003081C0u) [[unlikely]] return; }
L_003081C0:
    c.f[3] = ld32((c.r[19].w[0] + 13376u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.f[1] = ld32((c.r[19].w[0] + 13384u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.r[21].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[21].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030820Cu);  if (depth < kMaxDepth) unit_0089(c, 237u, depth + 1u); else { c.pc = 0x00326BC0u; return; } if (c.pc != 0x0030820Cu) [[unlikely]] return; }
L_0030820C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00308250; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 6540u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308228u);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x0029D098u; return; } if (c.pc != 0x00308228u) [[unlikely]] return; }
L_00308228:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6538u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 6538u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308250u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x00308250u) [[unlikely]] return; }
L_00308250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24048u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308190u | kUnwind; return; } goto L_00308190; } }
L_00308284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 24052u)));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003083BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[20], c.r[2].w[0] + 14208u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[19], c.r[2].w[0] - 19088u);
    set32(c.r[21], 0u + 4u);
    set32(c.r[23], 0u + 2u);
    set32(c.r[22], 0u + 13248u);
    c.budget -= 11;
L_003082C8:
    set32(c.r[2], ld32((c.r[30].w[0] + 24036u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082E0u);  if (depth < kMaxDepth) unit_008A(c, 139u, depth + 1u); else { c.pc = 0x0032A118u; return; } if (c.pc != 0x003082E0u) [[unlikely]] return; }
L_003082E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082F8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x003082F8u) [[unlikely]] return; }
L_003082F8:
    c.f[3] = ld32((c.r[20].w[0] + 13376u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.f[1] = ld32((c.r[20].w[0] + 13384u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.r[21].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[21].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308344u);  if (depth < kMaxDepth) unit_0089(c, 237u, depth + 1u); else { c.pc = 0x00326BC0u; return; } if (c.pc != 0x00308344u) [[unlikely]] return; }
L_00308344:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00308388; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 6540u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308360u);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x0029D098u; return; } if (c.pc != 0x00308360u) [[unlikely]] return; }
L_00308360:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6538u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 6538u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308388u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x00308388u) [[unlikely]] return; }
L_00308388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24052u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003082C8u | kUnwind; return; } goto L_003082C8; } }
L_003083BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 24056u)));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003084F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[20], c.r[2].w[0] + 14208u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[19], c.r[2].w[0] - 19088u);
    set32(c.r[21], 0u + 4u);
    set32(c.r[23], 0u + 2u);
    set32(c.r[22], 0u + 13248u);
    c.budget -= 11;
L_00308400:
    set32(c.r[2], ld32((c.r[30].w[0] + 24040u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308418u);  if (depth < kMaxDepth) unit_008A(c, 139u, depth + 1u); else { c.pc = 0x0032A118u; return; } if (c.pc != 0x00308418u) [[unlikely]] return; }
L_00308418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308430u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00308430u) [[unlikely]] return; }
L_00308430:
    c.f[3] = ld32((c.r[20].w[0] + 13376u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.f[1] = ld32((c.r[20].w[0] + 13384u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.r[21].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[21].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030847Cu);  if (depth < kMaxDepth) unit_0089(c, 237u, depth + 1u); else { c.pc = 0x00326BC0u; return; } if (c.pc != 0x0030847Cu) [[unlikely]] return; }
L_0030847C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003084C0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 6540u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308498u);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x0029D098u; return; } if (c.pc != 0x00308498u) [[unlikely]] return; }
L_00308498:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6538u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 6538u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084C0u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x003084C0u) [[unlikely]] return; }
L_003084C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24056u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308400u | kUnwind; return; } goto L_00308400; } }
L_003084F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 24060u)));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0030862C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[20], c.r[2].w[0] + 14208u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[19], c.r[2].w[0] - 19088u);
    set32(c.r[21], 0u + 4u);
    set32(c.r[23], 0u + 2u);
    set32(c.r[22], 0u + 13248u);
    c.budget -= 11;
L_00308538:
    set32(c.r[2], ld32((c.r[30].w[0] + 24044u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308550u);  if (depth < kMaxDepth) unit_008A(c, 139u, depth + 1u); else { c.pc = 0x0032A118u; return; } if (c.pc != 0x00308550u) [[unlikely]] return; }
L_00308550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308568u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00308568u) [[unlikely]] return; }
L_00308568:
    c.f[3] = ld32((c.r[20].w[0] + 13376u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.f[1] = ld32((c.r[20].w[0] + 13384u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.r[21].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[21].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085B4u);  if (depth < kMaxDepth) unit_0089(c, 237u, depth + 1u); else { c.pc = 0x00326BC0u; return; } if (c.pc != 0x003085B4u) [[unlikely]] return; }
L_003085B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003085F8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 6540u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085D0u);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x0029D098u; return; } if (c.pc != 0x003085D0u) [[unlikely]] return; }
L_003085D0:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6538u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 6538u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085F8u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x003085F8u) [[unlikely]] return; }
L_003085F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24060u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308538u | kUnwind; return; } goto L_00308538; } }
L_0030862C:
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 344u));
    c.f[20] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00308668:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[2], ld32((c.r[20].w[0] + 488u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309150; } }
    set32(c.r[22], c.r[2].w[0] + 24u);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308724; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003086F0; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308724; } }
    c.budget -= 1;
L_003086F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308724; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003086F0u | kUnwind; return; } goto L_003086F0; } }
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_00308724:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0030874C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[20].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 8;
L_0030874C:
    set32(c.r[7], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_00308760; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_00308760:
    set32(c.r[4], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.f[3] = ld32((c.r[20].w[0] + 240u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.f[2] = 0u;
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[2]));
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003087CC; } }
    fpu_div(c, 0u, c.f[3], c.f[1]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.budget -= 4;
L_003087CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[22].w[0] + 16u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.f[6] = fp::sub(c.f[0], c.f[5]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030886C; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 136u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308878; } }
L_0030886C:
    st32((c.r[20].w[0] + 136u), c.f[2]);
    st32((c.r[20].w[0] + 128u), c.f[2]);
    st32((c.r[20].w[0] + 132u), c.f[2]);
    c.budget -= 3;
L_00308878:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003090E0; } }
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], c.r[29].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], c.r[29].w[0] + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 8u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[29].w[0]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[24], c.f[3]);
    st32((c.r[29].w[0] + 12u), c.r[24].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.r[21].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[3]);
    st32((c.r[29].w[0] + 20u), c.r[25].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[3]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[24].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[3]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 63;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308990; } }
    set32(c.r[2], c.r[5].w[0] + 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00308990:
    set32(c.r[2], c.r[21].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003089A8; } }
    set32(c.r[2], c.r[4].w[0] + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003089A8:
    set32(c.r[2], c.r[25].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003089C0; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_003089C0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[24].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003089DC; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003089DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[21].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003089F8; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003089F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[25].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308A14; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00308A14:
    set32(c.r[9], ld32((c.r[29].w[0])));
    set32(c.r[11], 0u + 2048u);
    set32(c.r[19], ld32((c.r[29].w[0] + 4u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[15], c.r[9].w[0] + 2048u);
    set32(c.r[13], c.r[11].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[24].w[0] - c.r[15].w[0]);
    set32(c.r[14], c.r[7].w[0] + 2048u);
    set32(c.r[5], c.r[10].w[0] - c.r[13].w[0]);
    set32(c.r[6], c.r[25].w[0] - c.r[14].w[0]);
    set32(c.r[2], c.r[9].w[0] + 6144u);
    c.r[4].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 6144u);
    set32(c.r[3], c.r[13].w[0] + 4096u);
    if (c.r[4].d[0] == 0) c.r[15].d[0] = c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[13].d[0] = c.r[3].d[0];
    if (c.r[6].d[0] == 0) c.r[14].d[0] = c.r[7].d[0];
    set32(c.r[2], 0u - 2048u);
    set32(c.r[8], c.r[25].w[0] - c.r[14].w[0]);
    set32(c.r[3], c.r[24].w[0] - c.r[15].w[0]);
    set32(c.r[5], c.r[10].w[0] - c.r[13].w[0]);
    c.r[8].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[24].w[0] - c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[9], c.r[9].w[0] - c.r[24].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[15].w[0] - 4096u);
    set32(c.r[6], c.r[13].w[0] - 4096u);
    set32(c.r[7], c.r[14].w[0] - 4096u);
    set32(c.r[23], c.r[10].w[0] - c.r[19].w[0]);
    if (c.r[3].d[0] == 0) c.r[15].d[0] = c.r[5].d[0];
    if (c.r[2].d[0] == 0) c.r[13].d[0] = c.r[6].d[0];
    if (c.r[8].d[0] == 0) c.r[14].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[12].d[0] = c.r[9].d[0];
    set32(c.r[16], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[24], c.r[24].w[0] + 2048u);
    set32(c.r[25], c.r[25].w[0] + 2048u);
    c.budget -= 44;
    { const bool t = c.r[23].sd[0] < 0;  if (t) { goto L_00308AD0; } }
    set32(c.r[10], c.r[12].w[0] + c.r[23].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308AD8; } }
L_00308AD0:
    set32(c.r[2], c.r[19].w[0] - c.r[21].w[0]);
    set32(c.r[10], c.r[12].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00308AD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] - c.r[15].w[0]);
    set32(c.r[2], c.r[15].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] - c.r[13].w[0]);
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00308B14; } }
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308B1C; } }
L_00308B14:
    set32(c.r[2], c.r[13].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00308B1C:
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] - c.r[14].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308B34; } }
    set32(c.r[2], c.r[14].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_00308B34:
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00308B68; } }
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308B7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308B90; } }
L_00308B68:
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308B90; } }
L_00308B7C:
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[7].w[0]), c.r[15].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[2].w[0]), c.r[13].w[0]);
    st32((c.r[30].w[0]), c.r[14].w[0]);
    c.budget -= 5;
L_00308B90:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[8], c.r[24].w[0] - 4096u);
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[7], c.r[16].w[0] - 4096u);
    set32(c.r[5], ld32((c.r[30].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[25].w[0] - c.r[5].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[24].w[0] - c.r[10].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[6], c.r[25].w[0] - 4096u);
    c.r[4].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[25].d[0] = c.r[6].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[24].d[0] = c.r[8].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u - 2048u);
    set32(c.r[8], c.r[24].w[0] - c.r[10].w[0]);
    c.r[14].d[0] = c.r[10].d[0] + 0ull;
    c.r[13].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[25].w[0] - c.r[5].w[0]);
    set32(c.r[10], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[16].w[0] - c.r[9].w[0]);
    set32(c.r[15], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[14].w[0] - c.r[11].w[0]);
    c.r[7].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[24].w[0] + 4096u);
    set32(c.r[4], c.r[16].w[0] + 4096u);
    set32(c.r[6], c.r[25].w[0] + 4096u);
    set32(c.r[12], c.r[15].w[0] - c.r[13].w[0]);
    if (c.r[8].d[0] == 0) c.r[24].d[0] = c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    if (c.r[5].d[0] == 0) c.r[25].d[0] = c.r[6].d[0];
    if (c.r[7].d[0] == 0) c.r[10].d[0] = c.r[11].d[0];
    c.budget -= 45;
    { const bool t = c.r[12].sd[0] < 0;  if (t) { goto L_00308C50; } }
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308C58; } }
L_00308C50:
    set32(c.r[2], c.r[13].w[0] - c.r[15].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00308C58:
    set32(c.r[4], c.r[24].w[0] - c.r[14].w[0]);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[14].w[0] - c.r[24].w[0]);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[16].w[0] - c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308C7C; } }
    set32(c.r[2], c.r[13].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_00308C7C:
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[25].w[0] - c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308C90; } }
    set32(c.r[2], c.r[19].w[0] - c.r[25].w[0]);
    c.budget -= 1;
L_00308C90:
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00308CC0; } }
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308CD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308CEC; } }
L_00308CC0:
    set32(c.r[2], c.r[19].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308CEC; } }
L_00308CD4:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[5].w[0]), c.r[24].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[6].w[0]), c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[7].w[0]), c.r[25].w[0]);
    c.budget -= 6;
L_00308CEC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00308D14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308D14; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308D34; } }
L_00308D14:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308D34; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308D34; } }
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00308D34:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00308D5C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308D5C; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308D7C; } }
L_00308D5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308D7C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308D7C; } }
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_00308D7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00308DA4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308DA4; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308DC4; } }
L_00308DA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308DC4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308DC4; } }
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00308DC4:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[12].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308E0C; } }
    set32(c.r[2], c.r[5].w[0] - 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00308E0C:
    c.r[2].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308E20; } }
    set32(c.r[2], c.r[6].w[0] - 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00308E20:
    c.r[2].d[0] = c.r[7].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308E34; } }
    set32(c.r[2], c.r[7].w[0] - 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00308E34:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308E4C; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00308E4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308E64; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00308E64:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308E7C; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00308E7C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00308EA4; } }
    set32(c.r[11], c.r[2].w[0] + 2048u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[10], c.r[3].w[0] + 2048u);
    set32(c.r[9], c.r[2].w[0] + 2048u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308EB8; } }
L_00308EA4:
    set32(c.r[11], c.r[2].w[0] - 2048u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[10], c.r[3].w[0] - 2048u);
    set32(c.r[9], c.r[2].w[0] - 2048u);
    c.budget -= 5;
L_00308EB8:
    c.r[4].d[0] = c.r[10].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[2], c.r[10].w[0] - 4096u);
    if (c.r[4].d[0] == 0) c.r[10].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[11].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[3], c.r[11].w[0] - 4096u);
    c.r[4].d[0] = c.r[9].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[5].d[0] == 0) c.r[11].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[9].w[0] - 4096u);
    if (c.r[4].d[0] == 0) c.r[9].d[0] = c.r[2].d[0];
    set32(c.r[3], 0u - 2048u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[10].w[0] + 4096u);
    c.r[6].d[0] = c.r[3].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[10].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[9].w[0] + 4096u);
    set32(c.r[8], c.r[11].w[0] + 4096u);
    if (c.r[3].d[0] == 0) c.r[9].d[0] = c.r[2].d[0];
    if (c.r[6].d[0] == 0) c.r[11].d[0] = c.r[8].d[0];
    set32(c.r[4], ld32((c.r[12].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 23;
    { const bool t = c.r[10].sd[0] >= 0; c.r[3].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00308F18; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00308F18:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[11].sd[0] >= 0; c.r[2].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00308F28; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00308F28:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[4].sd[0] < 0) { set32(c.r[4], 0u - c.r[4].w[0]);  goto L_00308F34; }
L_00308F34:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[5], 0u - c.r[5].w[0]);  goto L_00308F3C; }
L_00308F3C:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[6], 0u - c.r[6].w[0]);  goto L_00308F44; }
L_00308F44:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0; c.r[3].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00308F54; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00308F54:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308F74; } }
    st32((c.r[12].w[0]), c.r[11].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 3;
L_00308F74:
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.r[2].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;
    c.f[0] = fp::cvt_w_s(c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 35;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030900C; } }
    set32(c.r[2], c.r[4].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030901C; } }
L_0030900C:
    c.r[2].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309020; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    c.budget -= 1;
L_0030901C:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00309020:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030903C; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030904C; } }
L_0030903C:
    c.r[2].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309050; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    c.budget -= 1;
L_0030904C:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00309050:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030906C; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030907C; } }
L_0030906C:
    c.r[2].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309080; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    c.budget -= 1;
L_0030907C:
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00309080:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.f[4] = ld32((c.r[29].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[20].w[0] + 144u), c.f[4]);
    st32((c.r[20].w[0] + 148u), c.f[3]);
    st32((c.r[20].w[0] + 152u), c.f[2]);
    c.budget -= 24;
L_003090E0:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309144; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 180u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 184u), c.f[2]);
    c.budget -= 20;
L_00309144:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_00309150:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309180:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[7], ld32((c.r[2].w[0] + 24216u)));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.budget -= 15;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00309CA0; } }
    set32(c.r[23], c.r[20].w[0] + 224u);
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[8], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003091F8; } }
    c.r[2].d[0] = c.r[7].d[0] ^ 2ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[6].d[0];
    c.budget -= 2;
L_003091F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 2u)));
    c.r[7].d[0] = ld16((c.r[23].w[0] + 2u));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309260; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309258; } }
L_00309228:
    set32(c.r[2], c.r[7].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309260; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309228u | kUnwind; return; } goto L_00309228; } }
L_00309258:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 2;
L_00309260:
    set32(c.r[2], c.r[9].w[0] - 1u);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00309274; } }
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_00309274:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0030929C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 2u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_0030929C:
    set32(c.r[7], c.r[9].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_003092B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 2u)));
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_003092B0:
    set32(c.r[4], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[9].w[0] << 1);
    c.f[3] = ld32((c.r[20].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[8].w[0] - c.r[5].w[0]);
    c.f[2] = 0u;
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[2]));
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030931C; } }
    fpu_div(c, 0u, c.f[3], c.f[1]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.budget -= 4;
L_0030931C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[23].w[0] + 16u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.f[6] = fp::sub(c.f[0], c.f[5]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003093BC; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003093C8; } }
L_003093BC:
    st32((c.r[20].w[0] + 20u), c.f[2]);
    st32((c.r[20].w[0] + 12u), c.f[2]);
    st32((c.r[20].w[0] + 16u), c.f[2]);
    c.budget -= 3;
L_003093C8:
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309C30; } }
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], c.r[29].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], c.r[29].w[0] + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 8u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[29].w[0]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[24], c.f[3]);
    st32((c.r[29].w[0] + 12u), c.r[24].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.r[21].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[3]);
    st32((c.r[29].w[0] + 20u), c.r[25].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[3]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[24].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[3]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 63;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003094E0; } }
    set32(c.r[2], c.r[5].w[0] + 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003094E0:
    set32(c.r[2], c.r[21].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003094F8; } }
    set32(c.r[2], c.r[4].w[0] + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003094F8:
    set32(c.r[2], c.r[25].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309510; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00309510:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[24].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030952C; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0030952C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[21].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309548; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00309548:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[25].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309564; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00309564:
    set32(c.r[9], ld32((c.r[29].w[0])));
    set32(c.r[11], 0u + 2048u);
    set32(c.r[19], ld32((c.r[29].w[0] + 4u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[15], c.r[9].w[0] + 2048u);
    set32(c.r[13], c.r[11].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[24].w[0] - c.r[15].w[0]);
    set32(c.r[14], c.r[7].w[0] + 2048u);
    set32(c.r[5], c.r[10].w[0] - c.r[13].w[0]);
    set32(c.r[6], c.r[25].w[0] - c.r[14].w[0]);
    set32(c.r[2], c.r[9].w[0] + 6144u);
    c.r[4].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 6144u);
    set32(c.r[3], c.r[13].w[0] + 4096u);
    if (c.r[4].d[0] == 0) c.r[15].d[0] = c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[13].d[0] = c.r[3].d[0];
    if (c.r[6].d[0] == 0) c.r[14].d[0] = c.r[7].d[0];
    set32(c.r[2], 0u - 2048u);
    set32(c.r[8], c.r[25].w[0] - c.r[14].w[0]);
    set32(c.r[3], c.r[24].w[0] - c.r[15].w[0]);
    set32(c.r[5], c.r[10].w[0] - c.r[13].w[0]);
    c.r[8].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[24].w[0] - c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[9], c.r[9].w[0] - c.r[24].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[15].w[0] - 4096u);
    set32(c.r[6], c.r[13].w[0] - 4096u);
    set32(c.r[7], c.r[14].w[0] - 4096u);
    set32(c.r[22], c.r[10].w[0] - c.r[19].w[0]);
    if (c.r[3].d[0] == 0) c.r[15].d[0] = c.r[5].d[0];
    if (c.r[2].d[0] == 0) c.r[13].d[0] = c.r[6].d[0];
    if (c.r[8].d[0] == 0) c.r[14].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[12].d[0] = c.r[9].d[0];
    set32(c.r[16], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[24], c.r[24].w[0] + 2048u);
    set32(c.r[25], c.r[25].w[0] + 2048u);
    c.budget -= 44;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_00309620; } }
    set32(c.r[10], c.r[12].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309628; } }
L_00309620:
    set32(c.r[2], c.r[19].w[0] - c.r[21].w[0]);
    set32(c.r[10], c.r[12].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00309628:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] - c.r[15].w[0]);
    set32(c.r[2], c.r[15].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] - c.r[13].w[0]);
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00309664; } }
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030966C; } }
L_00309664:
    set32(c.r[2], c.r[13].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0030966C:
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] - c.r[14].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00309684; } }
    set32(c.r[2], c.r[14].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_00309684:
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003096B8; } }
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003096CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003096E0; } }
L_003096B8:
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003096E0; } }
L_003096CC:
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[7].w[0]), c.r[15].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[2].w[0]), c.r[13].w[0]);
    st32((c.r[30].w[0]), c.r[14].w[0]);
    c.budget -= 5;
L_003096E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[8], c.r[24].w[0] - 4096u);
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[7], c.r[16].w[0] - 4096u);
    set32(c.r[5], ld32((c.r[30].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[25].w[0] - c.r[5].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[24].w[0] - c.r[10].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[6], c.r[25].w[0] - 4096u);
    c.r[4].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[25].d[0] = c.r[6].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[24].d[0] = c.r[8].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u - 2048u);
    set32(c.r[8], c.r[24].w[0] - c.r[10].w[0]);
    c.r[14].d[0] = c.r[10].d[0] + 0ull;
    c.r[13].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[25].w[0] - c.r[5].w[0]);
    set32(c.r[10], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[16].w[0] - c.r[9].w[0]);
    set32(c.r[15], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[14].w[0] - c.r[11].w[0]);
    c.r[7].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[24].w[0] + 4096u);
    set32(c.r[4], c.r[16].w[0] + 4096u);
    set32(c.r[6], c.r[25].w[0] + 4096u);
    set32(c.r[12], c.r[15].w[0] - c.r[13].w[0]);
    if (c.r[8].d[0] == 0) c.r[24].d[0] = c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    if (c.r[5].d[0] == 0) c.r[25].d[0] = c.r[6].d[0];
    if (c.r[7].d[0] == 0) c.r[10].d[0] = c.r[11].d[0];
    c.budget -= 45;
    { const bool t = c.r[12].sd[0] < 0;  if (t) { goto L_003097A0; } }
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003097A8; } }
L_003097A0:
    set32(c.r[2], c.r[13].w[0] - c.r[15].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003097A8:
    set32(c.r[4], c.r[24].w[0] - c.r[14].w[0]);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[14].w[0] - c.r[24].w[0]);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[16].w[0] - c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003097CC; } }
    set32(c.r[2], c.r[13].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_003097CC:
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[25].w[0] - c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003097E0; } }
    set32(c.r[2], c.r[19].w[0] - c.r[25].w[0]);
    c.budget -= 1;
L_003097E0:
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00309810; } }
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030983C; } }
L_00309810:
    set32(c.r[2], c.r[19].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030983C; } }
L_00309824:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[5].w[0]), c.r[24].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[6].w[0]), c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[7].w[0]), c.r[25].w[0]);
    c.budget -= 6;
L_0030983C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00309864; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00309864; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309884; } }
L_00309864:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00309884; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00309884; } }
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00309884:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003098AC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003098AC; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003098CC; } }
L_003098AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003098CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003098CC; } }
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_003098CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003098F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003098F4; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309914; } }
L_003098F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00309914; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00309914; } }
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00309914:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[12].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030995C; } }
    set32(c.r[2], c.r[5].w[0] - 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0030995C:
    c.r[2].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309970; } }
    set32(c.r[2], c.r[6].w[0] - 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00309970:
    c.r[2].d[0] = c.r[7].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309984; } }
    set32(c.r[2], c.r[7].w[0] - 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00309984:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030999C; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0030999C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003099B4; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003099B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < -2047ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003099CC; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_003099CC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003099F4; } }
    set32(c.r[11], c.r[2].w[0] + 2048u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[10], c.r[3].w[0] + 2048u);
    set32(c.r[9], c.r[2].w[0] + 2048u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309A08; } }
L_003099F4:
    set32(c.r[11], c.r[2].w[0] - 2048u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[10], c.r[3].w[0] - 2048u);
    set32(c.r[9], c.r[2].w[0] - 2048u);
    c.budget -= 5;
L_00309A08:
    c.r[4].d[0] = c.r[10].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[2], c.r[10].w[0] - 4096u);
    if (c.r[4].d[0] == 0) c.r[10].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[11].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[3], c.r[11].w[0] - 4096u);
    c.r[4].d[0] = c.r[9].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[5].d[0] == 0) c.r[11].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[9].w[0] - 4096u);
    if (c.r[4].d[0] == 0) c.r[9].d[0] = c.r[2].d[0];
    set32(c.r[3], 0u - 2048u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[10].w[0] + 4096u);
    c.r[6].d[0] = c.r[3].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[10].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[9].w[0] + 4096u);
    set32(c.r[8], c.r[11].w[0] + 4096u);
    if (c.r[3].d[0] == 0) c.r[9].d[0] = c.r[2].d[0];
    if (c.r[6].d[0] == 0) c.r[11].d[0] = c.r[8].d[0];
    set32(c.r[4], ld32((c.r[12].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 23;
    { const bool t = c.r[10].sd[0] >= 0; c.r[3].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00309A68; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00309A68:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[11].sd[0] >= 0; c.r[2].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00309A78; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00309A78:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[4].sd[0] < 0) { set32(c.r[4], 0u - c.r[4].w[0]);  goto L_00309A84; }
L_00309A84:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[5], 0u - c.r[5].w[0]);  goto L_00309A8C; }
L_00309A8C:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[6], 0u - c.r[6].w[0]);  goto L_00309A94; }
L_00309A94:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0; c.r[3].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00309AA4; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00309AA4:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309AC4; } }
    st32((c.r[12].w[0]), c.r[11].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 3;
L_00309AC4:
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.r[2].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;
    c.f[0] = fp::cvt_w_s(c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 35;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309B5C; } }
    set32(c.r[2], c.r[4].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309B6C; } }
L_00309B5C:
    c.r[2].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309B70; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    c.budget -= 1;
L_00309B6C:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00309B70:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309B8C; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309B9C; } }
L_00309B8C:
    c.r[2].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309BA0; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    c.budget -= 1;
L_00309B9C:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00309BA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309BBC; } }
    set32(c.r[2], c.r[3].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309BCC; } }
L_00309BBC:
    c.r[2].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309BD0; } }
    set32(c.r[2], c.r[3].w[0] + 4096u);
    c.budget -= 1;
L_00309BCC:
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00309BD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.f[4] = ld32((c.r[29].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[20].w[0] + 24u), c.f[4]);
    st32((c.r[20].w[0] + 28u), c.f[3]);
    st32((c.r[20].w[0] + 32u), c.f[2]);
    c.budget -= 24;
L_00309C30:
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309C94; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 44u), c.f[2]);
    c.budget -= 20;
L_00309C94:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00309CA0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309CD0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309CE8; } }
    set32(c.r[2], c.r[5].w[0] + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309CEC; } }
L_00309CE8:
    set32(c.r[2], c.r[5].w[0] - 4096u);
    c.budget -= 1;
L_00309CEC:
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 23016u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[2].w[0] - 31872u), 0u);
    st32((c.r[5].w[0] - 31876u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 18704u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31920u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], 0u + 48u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D60u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x00309D60u) [[unlikely]] return; }
L_00309D60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309D98; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D98u);  if (depth < kMaxDepth) unit_0082(c, 35u, depth + 1u); else { c.pc = 0x00308668u; return; } if (c.pc != 0x00309D98u) [[unlikely]] return; }
L_00309D98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 31876u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] - 31876u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[5].w[0] - 31872u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309DE8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E30u);  if (depth < kMaxDepth) unit_0043(c, 170u, depth + 1u); else { c.pc = 0x0020E830u; return; } if (c.pc != 0x00309E30u) [[unlikely]] return; }
L_00309E30:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_00309EF4; } }
    set32(c.r[30], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[23], c.r[2].w[0] + 27020u);
    set32(c.r[20], c.r[3].w[0] + c.r[23].w[0]);
    c.budget -= 5;
L_00309E50:
    set32(c.r[18], ld32((c.r[20].w[0])));
    set32(c.r[19], 0u + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309E6C; } }
    c.budget -= 1;
L_00309E68:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00309E6C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309E94; } }
    set32(c.r[4], c.r[22].w[0] - 5800u);
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E88u);  if (depth < kMaxDepth) unit_0043(c, 183u, depth + 1u); else { c.pc = 0x0020E9B0u; return; } if (c.pc != 0x00309E88u) [[unlikely]] return; }
L_00309E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309E68u | kUnwind; return; } goto L_00309E68; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309E94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00309EF4; } }
    set32(c.r[16], c.r[22].w[0] - 5800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EB0u);  if (depth < kMaxDepth) unit_0043(c, 168u, depth + 1u); else { c.pc = 0x0020E810u; return; } if (c.pc != 0x00309EB0u) [[unlikely]] return; }
L_00309EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309EE0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EC8u);  if (depth < kMaxDepth) unit_0043(c, 198u, depth + 1u); else { c.pc = 0x0020EC70u; return; } if (c.pc != 0x00309EC8u) [[unlikely]] return; }
L_00309EC8:
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309EE8; } }
L_00309EE0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00309EE8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309E50u | kUnwind; return; } goto L_00309E50; } }
L_00309EF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 24536u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] << 16);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F70u);  if (depth < kMaxDepth) unit_007D(c, 225u, depth + 1u); else { c.pc = 0x002F7208u; return; } if (c.pc != 0x00309F70u) [[unlikely]] return; }
L_00309F70:
    set32(c.r[17], c.r[18].w[0] + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F80u);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AFA08u; return; } if (c.pc != 0x00309F80u) [[unlikely]] return; }
L_00309F80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F8Cu);  if (depth < kMaxDepth) unit_0088(c, 164u, depth + 1u); else { c.pc = 0x00321BC8u; return; } if (c.pc != 0x00309F8Cu) [[unlikely]] return; }
L_00309F8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F98u);  if (depth < kMaxDepth) unit_0088(c, 158u, depth + 1u); else { c.pc = 0x00321B10u; return; } if (c.pc != 0x00309F98u) [[unlikely]] return; }
L_00309F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FA4u);  if (depth < kMaxDepth) unit_0058(c, 57u, depth + 1u); else { c.pc = 0x002608F0u; return; } if (c.pc != 0x00309FA4u) [[unlikely]] return; }
L_00309FA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00309FFC; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309FCC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00309FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A03C; } }
L_00309FCC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030A00C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030A028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A03C; } }
L_00309FEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A014; } }
L_00309FFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A014; } }
L_0030A00C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 2;
L_0030A014:
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A020u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030A020u) [[unlikely]] return; }
L_0030A020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A03C; } }
L_0030A028:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A03Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030A03Cu) [[unlikely]] return; }
L_0030A03C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 5800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A054u);  if (depth < kMaxDepth) unit_0043(c, 189u, depth + 1u); else { c.pc = 0x0020EAE0u; return; } if (c.pc != 0x0030A054u) [[unlikely]] return; }
L_0030A054:
    set32(c.r[6], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A068u);  if (depth < kMaxDepth) unit_0043(c, 193u, depth + 1u); else { c.pc = 0x0020EB98u; return; } if (c.pc != 0x0030A068u) [[unlikely]] return; }
L_0030A068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A078u);  if (depth < kMaxDepth) unit_0043(c, 184u, depth + 1u); else { c.pc = 0x0020E9F8u; return; } if (c.pc != 0x0030A078u) [[unlikely]] return; }
L_0030A078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A08Cu);  if (depth < kMaxDepth) unit_0043(c, 199u, depth + 1u); else { c.pc = 0x0020EC90u; return; } if (c.pc != 0x0030A08Cu) [[unlikely]] return; }
L_0030A08C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 368u)));
    set32(c.r[2], c.r[2].w[0] + 20640u);
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A0C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A0C0u) [[unlikely]] return; }
L_0030A0C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A0CCu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x0030A0CCu) [[unlikely]] return; }
L_0030A0CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A0E8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 48u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27016u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0030A2F0; } }
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[30], c.r[20].w[0] + 10u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 4;
L_0030A160:
    set32(c.r[5], c.r[20].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[3].w[0] - 5800u);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A178u);  if (depth < kMaxDepth) unit_0043(c, 198u, depth + 1u); else { c.pc = 0x0020EC70u; return; } if (c.pc != 0x0030A178u) [[unlikely]] return; }
L_0030A178:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_0030A2DC; } }
    set32(c.r[4], c.r[18].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A198u);  if (depth < kMaxDepth) unit_007D(c, 225u, depth + 1u); else { c.pc = 0x002F7208u; return; } if (c.pc != 0x0030A198u) [[unlikely]] return; }
L_0030A198:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1A4u);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AFA08u; return; } if (c.pc != 0x0030A1A4u) [[unlikely]] return; }
L_0030A1A4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1B0u);  if (depth < kMaxDepth) unit_0088(c, 164u, depth + 1u); else { c.pc = 0x00321BC8u; return; } if (c.pc != 0x0030A1B0u) [[unlikely]] return; }
L_0030A1B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1BCu);  if (depth < kMaxDepth) unit_0088(c, 158u, depth + 1u); else { c.pc = 0x00321B10u; return; } if (c.pc != 0x0030A1BCu) [[unlikely]] return; }
L_0030A1BC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1C8u);  if (depth < kMaxDepth) unit_0058(c, 57u, depth + 1u); else { c.pc = 0x002608F0u; return; } if (c.pc != 0x0030A1C8u) [[unlikely]] return; }
L_0030A1C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0030A228; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030A1F0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0030A210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A268; } }
L_0030A1F0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_0030A240; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0030A258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A268; } }
L_0030A210:
    set32(c.r[4], c.r[22].w[0] - 22920u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A220u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030A220u) [[unlikely]] return; }
L_0030A220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A268; } }
L_0030A228:
    set32(c.r[4], c.r[22].w[0] - 22920u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A238u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030A238u) [[unlikely]] return; }
L_0030A238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A268; } }
L_0030A240:
    set32(c.r[4], c.r[22].w[0] - 22920u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A250u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030A250u) [[unlikely]] return; }
L_0030A250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A268; } }
L_0030A258:
    set32(c.r[4], c.r[22].w[0] - 22920u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A268u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030A268u) [[unlikely]] return; }
L_0030A268:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 27020u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 48u);
    mmi::madd(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030A2B8; } }
    c.budget -= 1;
L_0030A290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] - 5800u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A2ACu);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020EC50u; return; } if (c.pc != 0x0030A2ACu) [[unlikely]] return; }
L_0030A2AC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A290u | kUnwind; return; } goto L_0030A290; } }
L_0030A2B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + 27020u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 48u);
    mmi::madd(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A2E0; } }
L_0030A2DC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030A2E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A160u | kUnwind; return; } goto L_0030A160; } }
L_0030A2F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[17], c.r[2].w[0] - 5800u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A308u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030A308u) [[unlikely]] return; }
L_0030A308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A310u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0030A310u) [[unlikely]] return; }
L_0030A310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0030A330; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A328u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x0030A328u) [[unlikely]] return; }
L_0030A328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A330u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x0030A330u) [[unlikely]] return; }
L_0030A330:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 20640u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A350u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x0030A350u) [[unlikely]] return; }
L_0030A350:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A364u);  if (depth < kMaxDepth) unit_0033(c, 242u, depth + 1u); else { c.pc = 0x001CF0C8u; return; } if (c.pc != 0x0030A364u) [[unlikely]] return; }
L_0030A364:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0030A374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A374u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x0030A374u) [[unlikely]] return; }
L_0030A374:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A388u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x0030A388u) [[unlikely]] return; }
L_0030A388:
    set32(c.r[2], 0u + 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 27016u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A3B8u);  if (depth < kMaxDepth) unit_0043(c, 199u, depth + 1u); else { c.pc = 0x0020EC90u; return; } if (c.pc != 0x0030A3B8u) [[unlikely]] return; }
L_0030A3B8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030A3E8; } }
L_0030A3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] - 5800u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A3DCu);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020EC50u; return; } if (c.pc != 0x0030A3DCu) [[unlikely]] return; }
L_0030A3DC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A3C0u | kUnwind; return; } goto L_0030A3C0; } }
L_0030A3E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A418; } }
    set32(c.r[4], c.r[21].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A404u);  if (depth < kMaxDepth) unit_007D(c, 228u, depth + 1u); else { c.pc = 0x002F7258u; return; } if (c.pc != 0x0030A404u) [[unlikely]] return; }
L_0030A404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A42C; } }
L_0030A418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 14664u);
    st32((c.r[2].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 232u), c.r[21].w[0]);
    c.budget -= 5;
L_0030A42C:
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
L_0030A460:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[17].w[0] - 5800u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4B0u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030A4B0u) [[unlikely]] return; }
L_0030A4B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4C0u);  if (depth < kMaxDepth) unit_0043(c, 170u, depth + 1u); else { c.pc = 0x0020E830u; return; } if (c.pc != 0x0030A4C0u) [[unlikely]] return; }
L_0030A4C0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4D0u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030A4D0u) [[unlikely]] return; }
L_0030A4D0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A528; } }
L_0030A4E0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A504; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4FCu);  if (depth < kMaxDepth) unit_0043(c, 184u, depth + 1u); else { c.pc = 0x0020E9F8u; return; } if (c.pc != 0x0030A4FCu) [[unlikely]] return; }
L_0030A4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A524; } }
L_0030A504:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A514u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030A514u) [[unlikely]] return; }
L_0030A514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A524u);  if (depth < kMaxDepth) unit_0043(c, 191u, depth + 1u); else { c.pc = 0x0020EB40u; return; } if (c.pc != 0x0030A524u) [[unlikely]] return; }
L_0030A524:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030A528:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A554; } }
    set32(c.r[16], c.r[21].w[0] - 5800u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A548u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030A548u) [[unlikely]] return; }
L_0030A548:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A4E0u | kUnwind; return; } goto L_0030A4E0; } }
L_0030A554:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0030A648; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[20].d[0];  if (t) { goto L_0030A768; } }
    set32(c.r[18], c.r[21].w[0] - 5800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A580u);  if (depth < kMaxDepth) unit_0043(c, 188u, depth + 1u); else { c.pc = 0x0020EA98u; return; } if (c.pc != 0x0030A580u) [[unlikely]] return; }
L_0030A580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A764; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A598u);  if (depth < kMaxDepth) unit_0082(c, 46u, depth + 1u); else { c.pc = 0x00309DE8u; return; } if (c.pc != 0x0030A598u) [[unlikely]] return; }
L_0030A598:
    set32(c.r[6], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27016u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A5C4u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030A5C4u) [[unlikely]] return; }
L_0030A5C4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0030A5F0; } }
    c.budget -= 1;
L_0030A5D0:
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[21].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A5E0u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030A5E0u) [[unlikely]] return; }
L_0030A5E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A5D0u | kUnwind; return; } goto L_0030A5D0; } }
L_0030A5F0:
    set32(c.r[16], c.r[21].w[0] - 5800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A610u);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030A610u) [[unlikely]] return; }
L_0030A610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A628u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030A628u) [[unlikely]] return; }
L_0030A628:
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A640u);  if (depth < kMaxDepth) unit_0082(c, 67u, depth + 1u); else { c.pc = 0x0030A0E8u; return; } if (c.pc != 0x0030A640u) [[unlikely]] return; }
L_0030A640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A768; } }
L_0030A648:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[23].d[0];  if (t) { goto L_0030A768; } }
    set32(c.r[4], c.r[21].w[0] - 5800u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A660u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030A660u) [[unlikely]] return; }
L_0030A660:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A674; } }
    c.budget -= 1;
L_0030A670:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0030A674:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A698; } }
    set32(c.r[4], c.r[21].w[0] - 5800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A690u);  if (depth < kMaxDepth) unit_0043(c, 188u, depth + 1u); else { c.pc = 0x0020EA98u; return; } if (c.pc != 0x0030A690u) [[unlikely]] return; }
L_0030A690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A670u | kUnwind; return; } goto L_0030A670; } }
L_0030A698:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6A8u);  if (depth < kMaxDepth) unit_0082(c, 46u, depth + 1u); else { c.pc = 0x00309DE8u; return; } if (c.pc != 0x0030A6A8u) [[unlikely]] return; }
L_0030A6A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[23].d[0];  if (t) { goto L_0030A764; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[30].d[0];  if (t) { goto L_0030A764; } }
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27016u);
    set32(c.r[4], c.r[21].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6E8u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030A6E8u) [[unlikely]] return; }
L_0030A6E8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0030A710; } }
L_0030A6F0:
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[21].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A700u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030A700u) [[unlikely]] return; }
L_0030A700:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A6F0u | kUnwind; return; } goto L_0030A6F0; } }
L_0030A710:
    set32(c.r[16], c.r[21].w[0] - 5800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A72Cu);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030A72Cu) [[unlikely]] return; }
L_0030A72C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A744u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030A744u) [[unlikely]] return; }
L_0030A744:
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A75Cu);  if (depth < kMaxDepth) unit_0082(c, 67u, depth + 1u); else { c.pc = 0x0030A0E8u; return; } if (c.pc != 0x0030A75Cu) [[unlikely]] return; }
L_0030A75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A768; } }
L_0030A764:
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_0030A768:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
L_0030A7A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[17].w[0] - 5800u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7ECu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030A7ECu) [[unlikely]] return; }
L_0030A7EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7FCu);  if (depth < kMaxDepth) unit_0043(c, 170u, depth + 1u); else { c.pc = 0x0020E830u; return; } if (c.pc != 0x0030A7FCu) [[unlikely]] return; }
L_0030A7FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A80Cu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030A80Cu) [[unlikely]] return; }
L_0030A80C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A824; } }
    c.budget -= 1;
L_0030A820:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030A824:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A848; } }
    set32(c.r[4], c.r[20].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A840u);  if (depth < kMaxDepth) unit_0043(c, 188u, depth + 1u); else { c.pc = 0x0020EA98u; return; } if (c.pc != 0x0030A840u) [[unlikely]] return; }
L_0030A840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A820u | kUnwind; return; } goto L_0030A820; } }
L_0030A848:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A854u);  if (depth < kMaxDepth) unit_0082(c, 46u, depth + 1u); else { c.pc = 0x00309DE8u; return; } if (c.pc != 0x0030A854u) [[unlikely]] return; }
L_0030A854:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[23].d[0];  if (t) { goto L_0030A918; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[22].d[0];  if (t) { goto L_0030A918; } }
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27016u);
    set32(c.r[4], c.r[20].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A894u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030A894u) [[unlikely]] return; }
L_0030A894:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030A8C0; } }
    c.budget -= 1;
L_0030A8A0:
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[20].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8B0u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030A8B0u) [[unlikely]] return; }
L_0030A8B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A8A0u | kUnwind; return; } goto L_0030A8A0; } }
L_0030A8C0:
    set32(c.r[16], c.r[20].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8DCu);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030A8DCu) [[unlikely]] return; }
L_0030A8DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8F4u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030A8F4u) [[unlikely]] return; }
L_0030A8F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A90Cu);  if (depth < kMaxDepth) unit_0082(c, 67u, depth + 1u); else { c.pc = 0x0030A0E8u; return; } if (c.pc != 0x0030A90Cu) [[unlikely]] return; }
L_0030A90C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A91C; } }
L_0030A918:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030A91C:
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
L_0030A950:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[2].w[0] - 5800u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9A4u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030A9A4u) [[unlikely]] return; }
L_0030A9A4:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AA64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9C0u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030A9C0u) [[unlikely]] return; }
L_0030A9C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030AA64; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9E0u);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030A9E0u) [[unlikely]] return; }
L_0030A9E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0030A9F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA04u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030AA04u) [[unlikely]] return; }
L_0030AA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AA44; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030AA44; } }
    set32(c.r[17], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA2Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030AA2Cu) [[unlikely]] return; }
L_0030AA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AA44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA44u);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030AA44u) [[unlikely]] return; }
L_0030AA44:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A9F8u | kUnwind; return; } goto L_0030A9F8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA64u);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030AA64u) [[unlikely]] return; }
L_0030AA64:
    set32(c.r[16], c.r[20].w[0] + 2u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA78u);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030AA78u) [[unlikely]] return; }
L_0030AA78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA84u);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030AA84u) [[unlikely]] return; }
L_0030AA84:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA90u);  if (depth < kMaxDepth) unit_0082(c, 46u, depth + 1u); else { c.pc = 0x00309DE8u; return; } if (c.pc != 0x0030AA90u) [[unlikely]] return; }
L_0030AA90:
    set32(c.r[3], 0u + 48u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[30].w[0] + 27016u);
    set32(c.r[4], c.r[22].w[0] - 5800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAB8u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030AAB8u) [[unlikely]] return; }
L_0030AAB8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0030AAE0; } }
L_0030AAC0:
    set32(c.r[5], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[22].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAD0u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030AAD0u) [[unlikely]] return; }
L_0030AAD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AAC0u | kUnwind; return; } goto L_0030AAC0; } }
L_0030AAE0:
    set32(c.r[16], c.r[22].w[0] - 5800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAFCu);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030AAFCu) [[unlikely]] return; }
L_0030AAFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB14u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030AB14u) [[unlikely]] return; }
L_0030AB14:
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB2Cu);  if (depth < kMaxDepth) unit_0082(c, 67u, depth + 1u); else { c.pc = 0x0030A0E8u; return; } if (c.pc != 0x0030AB2Cu) [[unlikely]] return; }
L_0030AB2C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
L_0030AB68:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[17], c.r[2].w[0] - 5800u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABB8u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030ABB8u) [[unlikely]] return; }
L_0030ABB8:
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABC8u);  if (depth < kMaxDepth) unit_0043(c, 170u, depth + 1u); else { c.pc = 0x0020E830u; return; } if (c.pc != 0x0030ABC8u) [[unlikely]] return; }
L_0030ABC8:
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B3E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0030ABF0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[30].w[0] - 5800u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC10u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030AC10u) [[unlikely]] return; }
L_0030AC10:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AC70; } }
    c.budget -= 1;
L_0030AC28:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030AC4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC44u);  if (depth < kMaxDepth) unit_0043(c, 184u, depth + 1u); else { c.pc = 0x0020E9F8u; return; } if (c.pc != 0x0030AC44u) [[unlikely]] return; }
L_0030AC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AC6C; } }
L_0030AC4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC5Cu);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030AC5Cu) [[unlikely]] return; }
L_0030AC5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC6Cu);  if (depth < kMaxDepth) unit_0043(c, 191u, depth + 1u); else { c.pc = 0x0020EB40u; return; } if (c.pc != 0x0030AC6Cu) [[unlikely]] return; }
L_0030AC6C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030AC70:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AC98; } }
    set32(c.r[16], c.r[30].w[0] - 5800u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC90u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030AC90u) [[unlikely]] return; }
L_0030AC90:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AC28u | kUnwind; return; } goto L_0030AC28; } }
L_0030AC98:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030ACC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACBCu);  if (depth < kMaxDepth) unit_0033(c, 257u, depth + 1u); else { c.pc = 0x001CF518u; return; } if (c.pc != 0x0030ACBCu) [[unlikely]] return; }
L_0030ACBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B3C0; } }
L_0030ACC4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACD0u);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x001CFEB8u; return; } if (c.pc != 0x0030ACD0u) [[unlikely]] return; }
L_0030ACD0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030B074; } }
    set32(c.r[16], c.r[30].w[0] - 5800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACECu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030ACECu) [[unlikely]] return; }
L_0030ACEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0030ADA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD04u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030AD04u) [[unlikely]] return; }
L_0030AD04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030ADA4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD24u);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030AD24u) [[unlikely]] return; }
L_0030AD24:
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0030AD38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD44u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030AD44u) [[unlikely]] return; }
L_0030AD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AD84; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030AD84; } }
    set32(c.r[17], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD6Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030AD6Cu) [[unlikely]] return; }
L_0030AD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AD84; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD84u);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030AD84u) [[unlikely]] return; }
L_0030AD84:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD38u | kUnwind; return; } goto L_0030AD38; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADA4u);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030ADA4u) [[unlikely]] return; }
L_0030ADA4:
    set32(c.r[4], 0u + 2u);
    set32(c.r[16], c.r[30].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADB4u);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030ADB4u) [[unlikely]] return; }
L_0030ADB4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADC0u);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030ADC0u) [[unlikely]] return; }
L_0030ADC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADCCu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030ADCCu) [[unlikely]] return; }
L_0030ADCC:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AE8C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADECu);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030ADECu) [[unlikely]] return; }
L_0030ADEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030AE8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE0Cu);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030AE0Cu) [[unlikely]] return; }
L_0030AE0C:
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0030AE20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE2Cu);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030AE2Cu) [[unlikely]] return; }
L_0030AE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AE6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030AE6C; } }
    set32(c.r[17], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE54u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030AE54u) [[unlikely]] return; }
L_0030AE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AE6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE6Cu);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030AE6Cu) [[unlikely]] return; }
L_0030AE6C:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AE20u | kUnwind; return; } goto L_0030AE20; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE8Cu);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030AE8Cu) [[unlikely]] return; }
L_0030AE8C:
    set32(c.r[4], 0u + 3u);
    set32(c.r[16], c.r[30].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE9Cu);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030AE9Cu) [[unlikely]] return; }
L_0030AE9C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEA8u);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030AEA8u) [[unlikely]] return; }
L_0030AEA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEB4u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030AEB4u) [[unlikely]] return; }
L_0030AEB4:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AF74; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AED4u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030AED4u) [[unlikely]] return; }
L_0030AED4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030AF74; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEF4u);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030AEF4u) [[unlikely]] return; }
L_0030AEF4:
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0030AF08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF14u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030AF14u) [[unlikely]] return; }
L_0030AF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AF54; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030AF54; } }
    set32(c.r[17], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF3Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030AF3Cu) [[unlikely]] return; }
L_0030AF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AF54; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF54u);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030AF54u) [[unlikely]] return; }
L_0030AF54:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AF08u | kUnwind; return; } goto L_0030AF08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF74u);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030AF74u) [[unlikely]] return; }
L_0030AF74:
    set32(c.r[4], 0u + 4u);
    set32(c.r[16], c.r[30].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF84u);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030AF84u) [[unlikely]] return; }
L_0030AF84:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF90u);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030AF90u) [[unlikely]] return; }
L_0030AF90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF9Cu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030AF9Cu) [[unlikely]] return; }
L_0030AF9C:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B05C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFBCu);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030AFBCu) [[unlikely]] return; }
L_0030AFBC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030B05C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFDCu);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030AFDCu) [[unlikely]] return; }
L_0030AFDC:
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0030AFF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFFCu);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030AFFCu) [[unlikely]] return; }
L_0030AFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B03C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030B03C; } }
    set32(c.r[17], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B024u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030B024u) [[unlikely]] return; }
L_0030B024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B03C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B03Cu);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030B03Cu) [[unlikely]] return; }
L_0030B03C:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AFF0u | kUnwind; return; } goto L_0030AFF0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B05Cu);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030B05Cu) [[unlikely]] return; }
L_0030B05C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B068u);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030B068u) [[unlikely]] return; }
L_0030B068:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B074u);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030B074u) [[unlikely]] return; }
L_0030B074:
    set32(c.r[4], c.r[30].w[0] - 5800u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B084u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030B084u) [[unlikely]] return; }
L_0030B084:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B094; } }
L_0030B090:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030B094:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B0B8; } }
    set32(c.r[4], c.r[30].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0B0u);  if (depth < kMaxDepth) unit_0043(c, 188u, depth + 1u); else { c.pc = 0x0020EA98u; return; } if (c.pc != 0x0030B0B0u) [[unlikely]] return; }
L_0030B0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B090u | kUnwind; return; } goto L_0030B090; } }
L_0030B0B8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0C8u);  if (depth < kMaxDepth) unit_0082(c, 46u, depth + 1u); else { c.pc = 0x00309DE8u; return; } if (c.pc != 0x0030B0C8u) [[unlikely]] return; }
L_0030B0C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0030B190; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0030B190; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[3].w[0] + 27020u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[30].w[0] - 5800u);
    mmi::madd(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B110u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030B110u) [[unlikely]] return; }
L_0030B110:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030B138; } }
L_0030B118:
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[30].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B128u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030B128u) [[unlikely]] return; }
L_0030B128:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B118u | kUnwind; return; } goto L_0030B118; } }
L_0030B138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B154u);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030B154u) [[unlikely]] return; }
L_0030B154:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B170u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030B170u) [[unlikely]] return; }
L_0030B170:
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B188u);  if (depth < kMaxDepth) unit_0082(c, 67u, depth + 1u); else { c.pc = 0x0030A0E8u; return; } if (c.pc != 0x0030B188u) [[unlikely]] return; }
L_0030B188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B3C0; } }
L_0030B190:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0030B218; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0030B1A8:
    set32(c.r[4], c.r[30].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B1B8u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030B1B8u) [[unlikely]] return; }
L_0030B1B8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0030B1F8; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0030B1D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0030B1E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B1FC; } }
L_0030B1E8:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B1D0u | kUnwind; return; } goto L_0030B1D0; } }
L_0030B1F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030B1FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B218; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B1A8u | kUnwind; return; } goto L_0030B1A8; } }
L_0030B218:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0030B3C0; } }
    set32(c.r[16], c.r[30].w[0] - 5800u);
    set32(c.r[21], c.r[19].w[0] + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B238u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030B238u) [[unlikely]] return; }
L_0030B238:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B2F4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B254u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030B254u) [[unlikely]] return; }
L_0030B254:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0030B2F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B284u);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030B284u) [[unlikely]] return; }
L_0030B284:
    c.budget -= 1;
L_0030B288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B294u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030B294u) [[unlikely]] return; }
L_0030B294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B2D4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030B2D4; } }
    set32(c.r[17], c.r[22].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2BCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030B2BCu) [[unlikely]] return; }
L_0030B2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B2D4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2D4u);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030B2D4u) [[unlikely]] return; }
L_0030B2D4:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B288u | kUnwind; return; } goto L_0030B288; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2F4u);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030B2F4u) [[unlikely]] return; }
L_0030B2F4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B304u);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030B304u) [[unlikely]] return; }
L_0030B304:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B310u);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030B310u) [[unlikely]] return; }
L_0030B310:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B31Cu);  if (depth < kMaxDepth) unit_0082(c, 46u, depth + 1u); else { c.pc = 0x00309DE8u; return; } if (c.pc != 0x0030B31Cu) [[unlikely]] return; }
L_0030B31C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[30].w[0] - 5800u);
    set32(c.r[2], c.r[2].w[0] + 27020u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B348u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030B348u) [[unlikely]] return; }
L_0030B348:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0030B370; } }
L_0030B350:
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[30].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B360u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030B360u) [[unlikely]] return; }
L_0030B360:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B350u | kUnwind; return; } goto L_0030B350; } }
L_0030B370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B38Cu);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030B38Cu) [[unlikely]] return; }
L_0030B38C:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3A8u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030B3A8u) [[unlikely]] return; }
L_0030B3A8:
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3C0u);  if (depth < kMaxDepth) unit_0082(c, 67u, depth + 1u); else { c.pc = 0x0030A0E8u; return; } if (c.pc != 0x0030B3C0u) [[unlikely]] return; }
L_0030B3C0:
    set32(c.r[16], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ABF0u | kUnwind; return; } goto L_0030ABF0; } }
L_0030B3E0:
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
L_0030B418:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[5], c.r[2].w[0] - 31848u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 31848u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0030B66C; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[16].w[0] - 5800u);
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B490u);  if (depth < kMaxDepth) unit_0043(c, 198u, depth + 1u); else { c.pc = 0x0020EC70u; return; } if (c.pc != 0x0030B490u) [[unlikely]] return; }
L_0030B490:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4A0u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030B4A0u) [[unlikely]] return; }
L_0030B4A0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B4F8; } }
    c.budget -= 1;
L_0030B4B0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030B4D4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4CCu);  if (depth < kMaxDepth) unit_0043(c, 184u, depth + 1u); else { c.pc = 0x0020E9F8u; return; } if (c.pc != 0x0030B4CCu) [[unlikely]] return; }
L_0030B4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B4F4; } }
L_0030B4D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4E4u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030B4E4u) [[unlikely]] return; }
L_0030B4E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4F4u);  if (depth < kMaxDepth) unit_0043(c, 191u, depth + 1u); else { c.pc = 0x0020EB40u; return; } if (c.pc != 0x0030B4F4u) [[unlikely]] return; }
L_0030B4F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030B4F8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B524; } }
    set32(c.r[17], c.r[16].w[0] - 5800u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B518u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030B518u) [[unlikely]] return; }
L_0030B518:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B4B0u | kUnwind; return; } goto L_0030B4B0; } }
L_0030B524:
    set32(c.r[16], c.r[16].w[0] - 5800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B534u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030B534u) [[unlikely]] return; }
L_0030B534:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0030B640; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[17].d[0];  if (t) { goto L_0030B62C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], c.r[19].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B558u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030B558u) [[unlikely]] return; }
L_0030B558:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B614; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B574u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030B574u) [[unlikely]] return; }
L_0030B574:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_0030B614; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B590u);  if (depth < kMaxDepth) unit_0018(c, 350u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x0030B590u) [[unlikely]] return; }
L_0030B590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0030B5A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5B4u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030B5B4u) [[unlikely]] return; }
L_0030B5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B5F4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030B5F4; } }
    set32(c.r[17], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5DCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030B5DCu) [[unlikely]] return; }
L_0030B5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B5F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5F4u);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030B5F4u) [[unlikely]] return; }
L_0030B5F4:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B5A8u | kUnwind; return; } goto L_0030B5A8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B614u);  if (depth < kMaxDepth) unit_0082(c, 53u, depth + 1u); else { c.pc = 0x00309F30u; return; } if (c.pc != 0x0030B614u) [[unlikely]] return; }
L_0030B614:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B620u);  if (depth < kMaxDepth) unit_0008(c, 6u, depth + 1u); else { c.pc = 0x001200A0u; return; } if (c.pc != 0x0030B620u) [[unlikely]] return; }
L_0030B620:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B62Cu);  if (depth < kMaxDepth) unit_0033(c, 42u, depth + 1u); else { c.pc = 0x001CC8F0u; return; } if (c.pc != 0x0030B62Cu) [[unlikely]] return; }
L_0030B62C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B640u);  if (depth < kMaxDepth) unit_0082(c, 93u, depth + 1u); else { c.pc = 0x0030A460u; return; } if (c.pc != 0x0030B640u) [[unlikely]] return; }
L_0030B640:
    set32(c.r[5], c.r[30].w[0] - 31848u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
L_0030B66C:
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
L_0030B6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0030B6F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030B6F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 31864u);
    set32(c.r[2], c.r[2].w[0] - 16320u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6E0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0030B6E0u) [[unlikely]] return; }
L_0030B6E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16336u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6F8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0030B6F8u) [[unlikely]] return; }
L_0030B6F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B710:
    set32(c.r[3], 0u + 48u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 27016u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B768u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030B768u) [[unlikely]] return; }
L_0030B768:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030B790; } }
L_0030B770:
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[20].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B780u);  if (depth < kMaxDepth) unit_0043(c, 180u, depth + 1u); else { c.pc = 0x0020E938u; return; } if (c.pc != 0x0030B780u) [[unlikely]] return; }
L_0030B780:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B770u | kUnwind; return; } goto L_0030B770; } }
L_0030B790:
    set32(c.r[16], c.r[20].w[0] - 5800u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7ACu);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020EC28u; return; } if (c.pc != 0x0030B7ACu) [[unlikely]] return; }
L_0030B7AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7C4u);  if (depth < kMaxDepth) unit_0043(c, 162u, depth + 1u); else { c.pc = 0x0020E688u; return; } if (c.pc != 0x0030B7C4u) [[unlikely]] return; }
L_0030B7C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B7E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 48u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + 27016u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] - 5800u);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B840u);  if (depth < kMaxDepth) unit_0043(c, 199u, depth + 1u); else { c.pc = 0x0020EC90u; return; } if (c.pc != 0x0030B840u) [[unlikely]] return; }
L_0030B840:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030B874; } }
    c.budget -= 1;
L_0030B850:
    set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[20].w[0] - 5800u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B868u);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020EC50u; return; } if (c.pc != 0x0030B868u) [[unlikely]] return; }
L_0030B868:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B850u | kUnwind; return; } goto L_0030B850; } }
L_0030B874:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B898:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[2].w[0] - 5800u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8E8u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030B8E8u) [[unlikely]] return; }
L_0030B8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8F0u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0030B8F0u) [[unlikely]] return; }
L_0030B8F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0030B910; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B908u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x0030B908u) [[unlikely]] return; }
L_0030B908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B910u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x0030B910u) [[unlikely]] return; }
L_0030B910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20640u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B92Cu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x0030B92Cu) [[unlikely]] return; }
L_0030B92C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B940u);  if (depth < kMaxDepth) unit_0033(c, 242u, depth + 1u); else { c.pc = 0x001CF0C8u; return; } if (c.pc != 0x0030B940u) [[unlikely]] return; }
L_0030B940:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0030B950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B950u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x0030B950u) [[unlikely]] return; }
L_0030B950:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0030B960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B960u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x0030B960u) [[unlikely]] return; }
L_0030B960:
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27016u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B990u);  if (depth < kMaxDepth) unit_0043(c, 199u, depth + 1u); else { c.pc = 0x0020EC90u; return; } if (c.pc != 0x0030B990u) [[unlikely]] return; }
L_0030B990:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030B9BC; } }
L_0030B998:
    set32(c.r[5], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[22].w[0] - 5800u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9B0u);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020EC50u; return; } if (c.pc != 0x0030B9B0u) [[unlikely]] return; }
L_0030B9B0:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B998u | kUnwind; return; } goto L_0030B998; } }
L_0030B9BC:
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
L_0030B9E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[18], c.r[2].w[0] - 5800u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA14u);  if (depth < kMaxDepth) unit_0043(c, 170u, depth + 1u); else { c.pc = 0x0020E830u; return; } if (c.pc != 0x0030BA14u) [[unlikely]] return; }
L_0030BA14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[2].w[0] - 31848u);
    st32((c.r[2].w[0] - 31848u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030BA64; } }
L_0030BA30:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA40u);  if (depth < kMaxDepth) unit_0043(c, 179u, depth + 1u); else { c.pc = 0x0020E910u; return; } if (c.pc != 0x0030BA40u) [[unlikely]] return; }
L_0030BA40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA58u);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020EC50u; return; } if (c.pc != 0x0030BA58u) [[unlikely]] return; }
L_0030BA58:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BA30u | kUnwind; return; } goto L_0030BA30; } }
L_0030BA64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BA80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] - 5800u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAB4u);  if (depth < kMaxDepth) unit_0043(c, 170u, depth + 1u); else { c.pc = 0x0020E830u; return; } if (c.pc != 0x0030BAB4u) [[unlikely]] return; }
L_0030BAB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030BAF4; } }
L_0030BAC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAD0u);  if (depth < kMaxDepth) unit_0043(c, 179u, depth + 1u); else { c.pc = 0x0020E910u; return; } if (c.pc != 0x0030BAD0u) [[unlikely]] return; }
L_0030BAD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAE8u);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020EC50u; return; } if (c.pc != 0x0030BAE8u) [[unlikely]] return; }
L_0030BAE8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BAC0u | kUnwind; return; } goto L_0030BAC0; } }
L_0030BAF4:
    set32(c.r[18], c.r[19].w[0] - 5800u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB08u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030BB08u) [[unlikely]] return; }
L_0030BB08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0030BB74; } }
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_0030BB18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB28u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030BB28u) [[unlikely]] return; }
L_0030BB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0030BB40; } }
    set32(c.r[4], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB40u);  if (depth < kMaxDepth) unit_007D(c, 225u, depth + 1u); else { c.pc = 0x002F7208u; return; } if (c.pc != 0x0030BB40u) [[unlikely]] return; }
L_0030BB40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB50u);  if (depth < kMaxDepth) unit_0043(c, 184u, depth + 1u); else { c.pc = 0x0020E9F8u; return; } if (c.pc != 0x0030BB50u) [[unlikely]] return; }
L_0030BB50:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB68u);  if (depth < kMaxDepth) unit_0043(c, 199u, depth + 1u); else { c.pc = 0x0020EC90u; return; } if (c.pc != 0x0030BB68u) [[unlikely]] return; }
L_0030BB68:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BB18u | kUnwind; return; } goto L_0030BB18; } }
L_0030BB74:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BB98:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[16].w[0] - 5800u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBCCu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030BBCCu) [[unlikely]] return; }
L_0030BBCC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BC28; } }
    c.budget -= 1;
L_0030BBE0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030BC04; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBFCu);  if (depth < kMaxDepth) unit_0043(c, 184u, depth + 1u); else { c.pc = 0x0020E9F8u; return; } if (c.pc != 0x0030BBFCu) [[unlikely]] return; }
L_0030BBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BC24; } }
L_0030BC04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC14u);  if (depth < kMaxDepth) unit_0043(c, 185u, depth + 1u); else { c.pc = 0x0020EA20u; return; } if (c.pc != 0x0030BC14u) [[unlikely]] return; }
L_0030BC14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC24u);  if (depth < kMaxDepth) unit_0043(c, 191u, depth + 1u); else { c.pc = 0x0020EB40u; return; } if (c.pc != 0x0030BC24u) [[unlikely]] return; }
L_0030BC24:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030BC28:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BC54; } }
    set32(c.r[16], c.r[18].w[0] - 5800u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC48u);  if (depth < kMaxDepth) unit_0043(c, 200u, depth + 1u); else { c.pc = 0x0020ECB0u; return; } if (c.pc != 0x0030BC48u) [[unlikely]] return; }
L_0030BC48:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BBE0u | kUnwind; return; } goto L_0030BBE0; } }
L_0030BC54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BC80:
    set32(c.r[3], 0u + 48u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27016u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BCD4; } }
    c.budget -= 1;
L_0030BCD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030BCD4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BCFC; } }
    set32(c.r[4], c.r[20].w[0] - 5800u);
    set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCF0u);  if (depth < kMaxDepth) unit_0043(c, 183u, depth + 1u); else { c.pc = 0x0020E9B0u; return; } if (c.pc != 0x0030BCF0u) [[unlikely]] return; }
L_0030BCF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BCD0u | kUnwind; return; } goto L_0030BCD0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030BCFC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BD28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[16].w[0] - 5800u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD50u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030BD50u) [[unlikely]] return; }
L_0030BD50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BD64; } }
    c.budget -= 1;
L_0030BD60:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030BD64:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BD88; } }
    set32(c.r[4], c.r[16].w[0] - 5800u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD80u);  if (depth < kMaxDepth) unit_0043(c, 188u, depth + 1u); else { c.pc = 0x0020EA98u; return; } if (c.pc != 0x0030BD80u) [[unlikely]] return; }
L_0030BD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BD60u | kUnwind; return; } goto L_0030BD60; } }
L_0030BD88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BDA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDCCu);  if (depth < kMaxDepth) unit_0088(c, 164u, depth + 1u); else { c.pc = 0x00321BC8u; return; } if (c.pc != 0x0030BDCCu) [[unlikely]] return; }
L_0030BDCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDD8u);  if (depth < kMaxDepth) unit_0088(c, 158u, depth + 1u); else { c.pc = 0x00321B10u; return; } if (c.pc != 0x0030BDD8u) [[unlikely]] return; }
L_0030BDD8:
    set32(c.r[4], c.r[17].w[0] + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDE4u);  if (depth < kMaxDepth) unit_0058(c, 57u, depth + 1u); else { c.pc = 0x002608F0u; return; } if (c.pc != 0x0030BDE4u) [[unlikely]] return; }
L_0030BDE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030BE3C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BE0C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0030BE2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BE7C; } }
L_0030BE0C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030BE4C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030BE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BE7C; } }
L_0030BE2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BE54; } }
L_0030BE3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BE54; } }
L_0030BE4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 2;
L_0030BE54:
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE60u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030BE60u) [[unlikely]] return; }
L_0030BE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BE7C; } }
L_0030BE68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE7Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x0030BE7Cu) [[unlikely]] return; }
L_0030BE7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BE98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEA8u);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AFA08u; return; } if (c.pc != 0x0030BEA8u) [[unlikely]] return; }
L_0030BEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BEB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEDCu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x0030BEDCu) [[unlikely]] return; }
L_0030BEDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BF0C; } }
    c.budget -= 1;
L_0030BEF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEFCu);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x0030BEFCu) [[unlikely]] return; }
L_0030BEFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BEF0u | kUnwind; return; } goto L_0030BEF0; } }
L_0030BF0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BF28:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 14;
L_0030BF60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF6Cu);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0030BF6Cu) [[unlikely]] return; }
L_0030BF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BFAC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0030BFAC; } }
    set32(c.r[17], c.r[19].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF94u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0030BF94u) [[unlikely]] return; }
L_0030BF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BFAC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFACu);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0030BFACu) [[unlikely]] return; }
L_0030BFAC:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BF60u | kUnwind; return; } goto L_0030BF60; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BFE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] - 5800u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.budget -= 8;
    [[clang::musttail]] return unit_0083(c, 1u, depth);
}

}
