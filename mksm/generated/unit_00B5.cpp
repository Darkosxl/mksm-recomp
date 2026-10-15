#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B5[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D4000;
    case 2u: goto L_003D4010;
    case 3u: goto L_003D4030;
    case 4u: goto L_003D4054;
    case 5u: goto L_003D40A0;
    case 6u: goto L_003D4108;
    case 7u: goto L_003D4124;
    case 8u: goto L_003D417C;
    case 9u: goto L_003D41A8;
    case 10u: goto L_003D41EC;
    case 11u: goto L_003D4224;
    case 12u: goto L_003D42E0;
    case 13u: goto L_003D43AC;
    case 14u: goto L_003D447C;
    case 15u: goto L_003D4498;
    case 16u: goto L_003D44BC;
    case 17u: goto L_003D44DC;
    case 18u: goto L_003D4500;
    case 19u: goto L_003D45D8;
    case 20u: goto L_003D4708;
    case 21u: goto L_003D47F4;
    case 22u: goto L_003D481C;
    case 23u: goto L_003D4834;
    case 24u: goto L_003D4840;
    case 25u: goto L_003D4878;
    case 26u: goto L_003D4894;
    case 27u: goto L_003D48A0;
    case 28u: goto L_003D48D0;
    case 29u: goto L_003D48F0;
    case 30u: goto L_003D4920;
    case 31u: goto L_003D4940;
    case 32u: goto L_003D4988;
    case 33u: goto L_003D498C;
    case 34u: goto L_003D49C0;
    case 35u: goto L_003D49EC;
    case 36u: goto L_003D4A8C;
    case 37u: goto L_003D4B00;
    case 38u: goto L_003D4B08;
    case 39u: goto L_003D4B44;
    case 40u: goto L_003D4B48;
    case 41u: goto L_003D4B7C;
    case 42u: goto L_003D4B88;
    case 43u: goto L_003D4BA8;
    case 44u: goto L_003D4BB8;
    case 45u: goto L_003D4BBC;
    case 46u: goto L_003D4BF4;
    case 47u: goto L_003D4C08;
    case 48u: goto L_003D4C50;
    case 49u: goto L_003D4C90;
    case 50u: goto L_003D4CCC;
    case 51u: goto L_003D4D10;
    case 52u: goto L_003D4D80;
    case 53u: goto L_003D4D8C;
    case 54u: goto L_003D4DC8;
    case 55u: goto L_003D4DD0;
    case 56u: goto L_003D4DEC;
    case 57u: goto L_003D4DF8;
    case 58u: goto L_003D4E34;
    case 59u: goto L_003D4E40;
    case 60u: goto L_003D4E54;
    case 61u: goto L_003D4E60;
    case 62u: goto L_003D4EC0;
    case 63u: goto L_003D4F0C;
    case 64u: goto L_003D4F30;
    case 65u: goto L_003D4F6C;
    case 66u: goto L_003D4F80;
    case 67u: goto L_003D4FB4;
    case 68u: goto L_003D4FE8;
    case 69u: goto L_003D501C;
    case 70u: goto L_003D5068;
    case 71u: goto L_003D50A4;
    case 72u: goto L_003D50C0;
    case 73u: goto L_003D5154;
    case 74u: goto L_003D5200;
    case 75u: goto L_003D5260;
    case 76u: goto L_003D52C0;
    case 77u: goto L_003D52D4;
    case 78u: goto L_003D5310;
    case 79u: goto L_003D5360;
    case 80u: goto L_003D53C4;
    case 81u: goto L_003D5420;
    case 82u: goto L_003D5498;
    case 83u: goto L_003D54C4;
    case 84u: goto L_003D55AC;
    case 85u: goto L_003D56D0;
    case 86u: goto L_003D56E4;
    case 87u: goto L_003D5748;
    case 88u: goto L_003D5820;
    case 89u: goto L_003D5834;
    case 90u: goto L_003D5870;
    case 91u: goto L_003D58D0;
    case 92u: goto L_003D58E4;
    case 93u: goto L_003D5920;
    case 94u: goto L_003D5950;
    case 95u: goto L_003D598C;
    case 96u: goto L_003D59A8;
    case 97u: goto L_003D5A78;
    case 98u: goto L_003D5AD4;
    case 99u: goto L_003D5B20;
    case 100u: goto L_003D5B7C;
    case 101u: goto L_003D5BB0;
    case 102u: goto L_003D5C4C;
    case 103u: goto L_003D5CA4;
    case 104u: goto L_003D5CE8;
    case 105u: goto L_003D5DAC;
    case 106u: goto L_003D5DC4;
    case 107u: goto L_003D5DF0;
    case 108u: goto L_003D5E60;
    case 109u: goto L_003D5EB8;
    case 110u: goto L_003D5F50;
    case 111u: goto L_003D5F90;
    case 112u: goto L_003D6038;
    case 113u: goto L_003D60C4;
    case 114u: goto L_003D6120;
    case 115u: goto L_003D6190;
    case 116u: goto L_003D61C0;
    case 117u: goto L_003D6284;
    case 118u: goto L_003D62C4;
    case 119u: goto L_003D63E0;
    case 120u: goto L_003D6458;
    case 121u: goto L_003D64C4;
    case 122u: goto L_003D64FC;
    case 123u: goto L_003D6514;
    case 124u: goto L_003D654C;
    case 125u: goto L_003D65C8;
    case 126u: goto L_003D65E4;
    case 127u: goto L_003D6618;
    case 128u: goto L_003D6690;
    case 129u: goto L_003D66C0;
    case 130u: goto L_003D6754;
    case 131u: goto L_003D6794;
    case 132u: goto L_003D6814;
    case 133u: goto L_003D68B8;
    case 134u: goto L_003D691C;
    case 135u: goto L_003D6958;
    case 136u: goto L_003D69B8;
    case 137u: goto L_003D69E8;
    case 138u: goto L_003D6A08;
    case 139u: goto L_003D6A30;
    case 140u: goto L_003D6A54;
    case 141u: goto L_003D6A70;
    case 142u: goto L_003D6AA8;
    case 143u: goto L_003D6B1C;
    case 144u: goto L_003D6B40;
    case 145u: goto L_003D6B88;
    case 146u: goto L_003D6C14;
    case 147u: goto L_003D6C48;
    case 148u: goto L_003D6CC0;
    case 149u: goto L_003D6CF0;
    case 150u: goto L_003D6D04;
    case 151u: goto L_003D6D20;
    case 152u: goto L_003D6D40;
    case 153u: goto L_003D6DA8;
    case 154u: goto L_003D6DF8;
    case 155u: goto L_003D6E10;
    case 156u: goto L_003D6E2C;
    case 157u: goto L_003D6E88;
    case 158u: goto L_003D6E98;
    case 159u: goto L_003D6EA8;
    case 160u: goto L_003D6EB8;
    case 161u: goto L_003D6EC8;
    case 162u: goto L_003D6ED0;
    case 163u: goto L_003D6F1C;
    case 164u: goto L_003D6F50;
    case 165u: goto L_003D6F88;
    case 166u: goto L_003D6FB4;
    case 167u: goto L_003D6FD8;
    case 168u: goto L_003D7008;
    case 169u: goto L_003D7030;
    case 170u: goto L_003D7050;
    case 171u: goto L_003D7080;
    case 172u: goto L_003D70A8;
    case 173u: goto L_003D70C8;
    case 174u: goto L_003D7140;
    case 175u: goto L_003D7158;
    case 176u: goto L_003D7168;
    case 177u: goto L_003D71A4;
    case 178u: goto L_003D71B4;
    case 179u: goto L_003D71C8;
    case 180u: goto L_003D71D8;
    case 181u: goto L_003D71E8;
    case 182u: goto L_003D71F8;
    case 183u: goto L_003D7208;
    case 184u: goto L_003D7278;
    case 185u: goto L_003D7280;
    case 186u: goto L_003D7290;
    case 187u: goto L_003D72A4;
    case 188u: goto L_003D72B0;
    case 189u: goto L_003D72C4;
    case 190u: goto L_003D72D0;
    case 191u: goto L_003D7358;
    case 192u: goto L_003D7360;
    case 193u: goto L_003D7368;
    case 194u: goto L_003D7370;
    case 195u: goto L_003D75DC;
    case 196u: goto L_003D7710;
    case 197u: goto L_003D7764;
    case 198u: goto L_003D7840;
    case 199u: goto L_003D7884;
    case 200u: goto L_003D7894;
    case 201u: goto L_003D78B8;
    case 202u: goto L_003D7908;
    case 203u: goto L_003D79D0;
    case 204u: goto L_003D79E0;
    case 205u: goto L_003D7A1C;
    case 206u: goto L_003D7A28;
    case 207u: goto L_003D7A80;
    case 208u: goto L_003D7B00;
    case 209u: goto L_003D7B9C;
    case 210u: goto L_003D7BA8;
    case 211u: goto L_003D7C1C;
    case 212u: goto L_003D7C30;
    case 213u: goto L_003D7C8C;
    case 214u: goto L_003D7CC8;
    case 215u: goto L_003D7CDC;
    case 216u: goto L_003D7CEC;
    case 217u: goto L_003D7D1C;
    case 218u: goto L_003D7D48;
    case 219u: goto L_003D7D50;
    case 220u: goto L_003D7EF8;
    case 221u: goto L_003D7F08;
    case 222u: goto L_003D7F14;
    default: bad_entry(c, 0x003D4000u); return;
    }
L_003D4000:
    ld128((c.r[21].w[0] + 48u) & ~15u, c.vu0.vf[31]);
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F98u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 293u, depth); } }
L_003D4010:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    vcallms(c, 376u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4030u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D4030u) [[unlikely]] return; }
L_003D4030:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4010u | kUnwind; return; } goto L_003D4010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FA0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 295u, depth); } }
L_003D4054:
    vu0_wait(c);
    st128((c.r[22].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    st128((c.r[22].w[0] + 32u) & ~15u, c.vu0.vf[27]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    c.vu0.vf[16] = c.r[3];
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    vcallms(c, 560u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D40A0u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D40A0u) [[unlikely]] return; }
L_003D40A0:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 294u, depth); } }
    vu0_wait(c);
    st128((c.r[22].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    st128((c.r[22].w[0] + 32u) & ~15u, c.vu0.vf[27]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    c.vu0.vf[16] = c.r[4];
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    vcallms(c, 560u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4108u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D4108u) [[unlikely]] return; }
L_003D4108:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 294u, depth); } }
L_003D4124:
    c.f[8] = ld32((c.r[16].w[0] + 8u));
    c.f[7] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.f[8]);
    set32(c.r[3], c.f[7]);
    set32(c.r[4], c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    ld128((c.r[17].w[0] + 96u) & ~15u, c.vu0.vf[24]);
    ld128((c.r[17].w[0] + 112u) & ~15u, c.vu0.vf[25]);
    c.vu0.vf[16] = c.r[2];
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    c.vu0.vf[15] = c.r[3];
    c.vu0.vf[14] = c.r[4];
    vcallms(c, 1280u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D417Cu); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D417Cu) [[unlikely]] return; }
L_003D417C:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    vu0_wait(c);
    vcallms(c, 2000u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    st128((c.r[17].w[0] + 112u) & ~15u, c.vu0.vf[25]);
    set32(c.r[16], c.r[16].w[0] + 24u);
    set32(c.r[17], c.r[17].w[0] + 128u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 12u);  if (t) { goto L_003D4210; } }
L_003D41A8:
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.f[7]);
    set32(c.r[3], c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    c.vu0.vf[16] = c.r[2];
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    c.vu0.vf[14] = c.r[3];
    vcallms(c, 1680u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D41ECu); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D41ECu) [[unlikely]] return; }
L_003D41EC:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    vu0_wait(c);
    vcallms(c, 2160u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 9;
L_003D4210:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FD0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 296u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 294u, depth); } }
L_003D4224:
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[24]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[25]);
    vu::mula(c.vu0, 14u, 27u, 24u);
    vu::madd(c.vu0, 14u, 16u, 30u, 25u);
    vu::addabc(c.vu0, 8u, 16u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 8u, 16u, 17u, c.vu0.vf[16].w[2]);
    c.r[8] = c.vu0.vf[16];
    c.f[1] = c.r[8].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[4] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4294; } }
    fpu_div(c, 0u, c.f[5], c.f[0]);
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[1]);
    c.budget -= 6;
L_003D4294:
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mul(c.vu0, 14u, 5u, 24u, 5u);
    vu::mul(c.vu0, 14u, 6u, 25u, 6u);
    vu::add(c.vu0, 14u, 27u, 27u, 5u);
    vu::add(c.vu0, 14u, 30u, 30u, 6u);
    st32((c.r[18].w[0]), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 9u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4224u | kUnwind; return; } goto L_003D4224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FA0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 295u, depth); } }
L_003D42E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[24]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[25]);
    vu::mula(c.vu0, 14u, 27u, 24u);
    vu::madd(c.vu0, 14u, 16u, 30u, 25u);
    vu::addabc(c.vu0, 8u, 16u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 8u, 16u, 17u, c.vu0.vf[16].w[2]);
    c.r[8] = c.vu0.vf[16];
    c.f[3] = c.r[8].w[0];
    c.f[4] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[5] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[6] = 0u;
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[2]));
    c.budget -= 22;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[17].w[0] + 12u));  goto L_003D435C; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[6]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));  goto L_003D4390; }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_003D435C:
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mul(c.vu0, 14u, 5u, 24u, 5u);
    vu::mul(c.vu0, 14u, 6u, 25u, 6u);
    vu::add(c.vu0, 14u, 27u, 27u, 5u);
    vu::add(c.vu0, 14u, 30u, 30u, 6u);
    st32((c.r[18].w[0]), c.f[1]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 13;
L_003D4390:
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D42E0u | kUnwind; return; } goto L_003D42E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 294u, depth); } }
L_003D43AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[24]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[25]);
    vu::mula(c.vu0, 14u, 27u, 24u);
    vu::madd(c.vu0, 14u, 16u, 30u, 25u);
    vu::addabc(c.vu0, 8u, 16u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 8u, 16u, 17u, c.vu0.vf[16].w[2]);
    c.r[8] = c.vu0.vf[16];
    c.f[3] = c.r[8].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 20;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 8u));  goto L_003D4410; }
    fpu_div(c, 0u, c.f[4], c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003D4430; } }
L_003D4410:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4430; } }
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 4;
L_003D4430:
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mul(c.vu0, 14u, 5u, 24u, 5u);
    vu::mul(c.vu0, 14u, 6u, 25u, 6u);
    vu::add(c.vu0, 14u, 27u, 27u, 5u);
    vu::add(c.vu0, 14u, 30u, 30u, 6u);
    st32((c.r[18].w[0]), c.f[1]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D43ACu | kUnwind; return; } goto L_003D43AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 294u, depth); } }
L_003D447C:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[20]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    vcallms(c, 1176u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4498u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D4498u) [[unlikely]] return; }
L_003D4498:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D447Cu | kUnwind; return; } goto L_003D447C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FA0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 295u, depth); } }
L_003D44BC:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    vcallms(c, 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44DCu); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D44DCu) [[unlikely]] return; }
L_003D44DC:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 13u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D44BCu | kUnwind; return; } goto L_003D44BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FA0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 295u, depth); } }
L_003D4500:
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    vu::mula(c.vu0, 14u, 26u, 18u);
    vu::msuba(c.vu0, 14u, 29u, 18u);
    vu::madda(c.vu0, 14u, 27u, 19u);
    vu::madd(c.vu0, 14u, 16u, 30u, 20u);
    vu::addabc(c.vu0, 8u, 16u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 8u, 16u, 17u, c.vu0.vf[16].w[2]);
    c.r[8] = c.vu0.vf[16];
    c.f[1] = c.r[8].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[4] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D457C; } }
    fpu_div(c, 0u, c.f[5], c.f[0]);
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.budget -= 6;
L_003D457C:
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mulbc(c.vu0, 14u, 2u, 18u, c.vu0.vf[5].w[3]);
    vu::mulbc(c.vu0, 14u, 3u, 18u, c.vu0.vf[6].w[3]);
    vu::mul(c.vu0, 14u, 4u, 19u, 5u);
    vu::mul(c.vu0, 14u, 5u, 20u, 6u);
    vu::add(c.vu0, 14u, 26u, 26u, 2u);
    vu::sub(c.vu0, 14u, 29u, 29u, 3u);
    vu::add(c.vu0, 14u, 27u, 27u, 4u);
    vu::add(c.vu0, 14u, 30u, 30u, 5u);
    st32((c.r[18].w[0]), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 6u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4500u | kUnwind; return; } goto L_003D4500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FA0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 295u, depth); } }
L_003D45D8:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    vu::mula(c.vu0, 14u, 26u, 18u);
    vu::msuba(c.vu0, 14u, 29u, 18u);
    vu::madda(c.vu0, 14u, 27u, 19u);
    vu::madd(c.vu0, 14u, 16u, 30u, 20u);
    vu::addabc(c.vu0, 8u, 16u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 8u, 16u, 17u, c.vu0.vf[16].w[2]);
    c.r[8] = c.vu0.vf[16];
    c.f[4] = c.r[8].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[5] = 0u;
    c.f[4] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 24;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 12u));  goto L_003D4680; }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mulbc(c.vu0, 14u, 2u, 18u, c.vu0.vf[5].w[3]);
    vu::mulbc(c.vu0, 14u, 3u, 18u, c.vu0.vf[6].w[3]);
    vu::mul(c.vu0, 14u, 4u, 19u, 5u);
    vu::mul(c.vu0, 14u, 5u, 20u, 6u);
    vu::add(c.vu0, 14u, 26u, 26u, 2u);
    vu::sub(c.vu0, 14u, 29u, 29u, 3u);
    vu::add(c.vu0, 14u, 27u, 27u, 4u);
    vu::add(c.vu0, 14u, 30u, 30u, 5u);
    st32((c.r[18].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 18;
L_003D4680:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[5]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[16].w[0] + 12u);  goto L_003D46EC; }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mulbc(c.vu0, 14u, 2u, 18u, c.vu0.vf[5].w[3]);
    vu::mulbc(c.vu0, 14u, 3u, 18u, c.vu0.vf[6].w[3]);
    vu::mul(c.vu0, 14u, 4u, 19u, 5u);
    vu::mul(c.vu0, 14u, 5u, 20u, 6u);
    vu::add(c.vu0, 14u, 26u, 26u, 2u);
    vu::sub(c.vu0, 14u, 29u, 29u, 3u);
    vu::add(c.vu0, 14u, 27u, 27u, 4u);
    vu::add(c.vu0, 14u, 30u, 30u, 5u);
    st32((c.r[18].w[0]), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 18;
L_003D46EC:
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D45D8u | kUnwind; return; } goto L_003D45D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3FA0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 295u, depth); } }
L_003D4708:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    vu::mula(c.vu0, 14u, 26u, 18u);
    vu::msuba(c.vu0, 14u, 29u, 18u);
    vu::madda(c.vu0, 14u, 27u, 19u);
    vu::madd(c.vu0, 14u, 16u, 30u, 20u);
    vu::addabc(c.vu0, 8u, 16u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 8u, 16u, 17u, c.vu0.vf[16].w[2]);
    c.r[8] = c.vu0.vf[16];
    c.f[3] = c.r[8].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 23;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 8u));  goto L_003D4778; }
    fpu_div(c, 0u, c.f[4], c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003D4798; } }
L_003D4778:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4798; } }
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 4;
L_003D4798:
    set32(c.r[8], c.f[2]);
    c.vu0.vf[16] = c.r[8];
    c.f[1] = ld32((c.r[18].w[0]));
    vu::mulbc(c.vu0, 15u, 5u, 28u, c.vu0.vf[16].w[0]);
    vu::mulbc(c.vu0, 15u, 6u, 31u, c.vu0.vf[16].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mulbc(c.vu0, 14u, 2u, 18u, c.vu0.vf[5].w[3]);
    vu::mulbc(c.vu0, 14u, 3u, 18u, c.vu0.vf[6].w[3]);
    vu::mul(c.vu0, 14u, 4u, 19u, 5u);
    vu::mul(c.vu0, 14u, 5u, 20u, 6u);
    vu::add(c.vu0, 14u, 26u, 26u, 2u);
    vu::sub(c.vu0, 14u, 29u, 29u, 3u);
    vu::add(c.vu0, 14u, 27u, 27u, 4u);
    vu::add(c.vu0, 14u, 30u, 30u, 5u);
    st32((c.r[18].w[0]), c.f[1]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4708u | kUnwind; return; } goto L_003D4708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 294u, depth); } }
L_003D47F4:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[21] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[20] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    vu0_wait(c);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[17]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F98u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 293u, depth); } }
L_003D481C:
    st32((c.r[19].w[0] + 4u), c.f[20]);
    st32((c.r[19].w[0] + 8u), c.f[21]);
    vu0_wait(c);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[17]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F98u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 293u, depth); } }
L_003D4834:
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4840u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D4840u) [[unlikely]] return; }
L_003D4840:
    set32(c.r[20], c.r[7].w[0] - 22976u);
    vu0_wait(c);
    st128((c.r[22].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    st128((c.r[22].w[0] + 32u) & ~15u, c.vu0.vf[27]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] + 8u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[6]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4878u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[12]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D4878u) [[unlikely]] return; }
L_003D4878:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[6]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[12]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F98u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 293u, depth); } }
L_003D4894:
    vu0_wait(c);
    c.r[8] = c.vu0.vf[15];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48A0u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 57u, depth + 1u); else { c.pc = 0x003D4DF8u; return; } if (c.pc != 0x003D48A0u) [[unlikely]] return; }
L_003D48A0:
    vu0_wait(c);
    st128((c.r[22].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    st128((c.r[22].w[0] + 32u) & ~15u, c.vu0.vf[27]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    c.budget -= 7;
    { const bool t = c.r[23].d[0] != 0ull; c.r[3].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_003D4914; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
L_003D48D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_003D48EC; } }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[6].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003D4974; }
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D48D0u | kUnwind; return; } goto L_003D48D0; } }
L_003D48EC:
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 1;
L_003D48F0:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 7;
    if (c.r[2].d[0] == c.r[5].d[0]) { ld128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D48F0u | kUnwind; return; } goto L_003D48F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D48D0u | kUnwind; return; } goto L_003D48D0; } }
L_003D4914:
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], 0u + 3u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
L_003D4920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003D493C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003D4974; } }
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4920u | kUnwind; return; } goto L_003D4920; } }
L_003D493C:
    ld128((c.r[3].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    c.budget -= 1;
L_003D4940:
    ld128((c.r[3].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 3u, 3u, 1u);
    vu::add(c.vu0, 15u, 4u, 4u, 2u);
    st128((c.r[3].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    if (c.r[2].d[0] == c.r[4].d[0]) { ld128((c.r[3].w[0] + 80u) & ~15u, c.vu0.vf[3]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4940u | kUnwind; return; } goto L_003D4940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4920u | kUnwind; return; } goto L_003D4920; } }
L_003D4974:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[10], c.r[4].w[0] - 22992u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003D49C0; } }
    c.budget -= 1;
L_003D4988:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 1;
L_003D498C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D498Cu | kUnwind; return; } goto L_003D498C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[12].w[0] + 24624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003D4000u < 16384u) { entry = entries_00B5[(t - 0x003D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003D49C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[27]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[28]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[31]);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4988u | kUnwind; return; } goto L_003D4988; } }
L_003D49EC:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[6].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[6].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[14];
    vu0_wait(c);
    c.r[9] = c.vu0.vf[15];
    vcallms(c, 96u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    set32(c.r[10], c.r[6].w[0] + 48u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D498Cu | kUnwind; return; } goto L_003D498C; } }
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[6].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[6].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[14];
    vu0_wait(c);
    c.r[9] = c.vu0.vf[15];
    vcallms(c, 96u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    set32(c.r[10], c.r[6].w[0] + 48u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D498Cu | kUnwind; return; } goto L_003D498C; } }
L_003D4A8C:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[6].w[0] + 64u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[6].w[0] + 80u) & ~15u, c.vu0.vf[23]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[14];
    vu0_wait(c);
    c.r[9] = c.vu0.vf[15];
    vcallms(c, 96u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    set32(c.r[10], c.r[6].w[0] + 48u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[19]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[20]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[14];
    vcallms(c, 56u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    set32(c.r[7], c.r[2].w[0] + 16u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D49C0u | kUnwind; return; } goto L_003D49C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D498Cu | kUnwind; return; } goto L_003D498C; } }
L_003D4B00:
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_003D4B08:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[14];
    vcallms(c, 0u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4B08u | kUnwind; return; } goto L_003D4B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D498Cu | kUnwind; return; } goto L_003D498C; } }
L_003D4B44:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_003D4B48:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[19]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[20]);
    vu0_wait(c);
    c.r[8] = c.vu0.vf[14];
    vcallms(c, 56u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    set32(c.r[7], c.r[6].w[0] + 16u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4B48u | kUnwind; return; } goto L_003D4B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D498Cu | kUnwind; return; } goto L_003D498C; } }
L_003D4B7C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4988u | kUnwind; return; } goto L_003D4988; } }
L_003D4B88:
    vu0_wait(c);
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[15]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[14]);
    set32(c.r[23], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3F60u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 292u, depth); } }
L_003D4BA8:
    set32(c.r[7], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003D4BF4; } }
    c.budget -= 1;
L_003D4BB8:
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 1;
L_003D4BBC:
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[9].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BBCu | kUnwind; return; } goto L_003D4BBC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] + 24656u);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003D4000u < 16384u) { entry = entries_00B5[(t - 0x003D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003D4BF4:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[10], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BB8u | kUnwind; return; } goto L_003D4BB8; } }
L_003D4C08:
    c.f[1] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 96u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BB8u | kUnwind; return; } goto L_003D4BB8; } }
L_003D4C50:
    c.f[1] = ld32((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[9].d[0]; set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4C50u | kUnwind; return; } goto L_003D4C50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld8((c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BBCu | kUnwind; return; } goto L_003D4BBC; } }
    c.budget -= 1;
L_003D4C90:
    c.f[1] = ld32((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[9].d[0]; set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4C90u | kUnwind; return; } goto L_003D4C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld8((c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BBCu | kUnwind; return; } goto L_003D4BBC; } }
L_003D4CCC:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { goto L_003D4D74; } }
L_003D4D10:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 12u);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 124u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.budget -= 25;
L_003D4D74:
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BB8u | kUnwind; return; } goto L_003D4BB8; } }
L_003D4D80:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4BB8u | kUnwind; return; } goto L_003D4BB8; } }
L_003D4D8C:
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
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003D4DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22768u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4DECu); set32(c.r[5], c.r[5].w[0] - 20112u);  if (depth < kMaxDepth) unit_00C3(c, 172u, depth + 1u); else { c.pc = 0x0040E228u; return; } if (c.pc != 0x003D4DECu) [[unlikely]] return; }
L_003D4DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D4DF8:
    c.f[1] = c.r[8].w[0];
    mmi::pexew(c.r[9], c.r[8]);
    mmi::prot3w(c.r[8], c.r[8]);
    c.f[4] = ld32((c.r[10].w[0]));
    c.f[5] = ld32((c.r[10].w[0] + 4u));
    c.f[6] = ld32((c.r[10].w[0] + 8u));
    c.f[3] = c.r[9].w[0];
    c.f[2] = c.r[8].w[0];
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.f[5] = fp::add(c.f[5], c.f[2]);
    c.f[6] = fp::add(c.f[6], c.f[3]);
    st32((c.r[10].w[0]), c.f[4]);
    st32((c.r[10].w[0] + 4u), c.f[5]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[10].w[0] + 8u), c.f[6]);  c.pc = t; return; }
L_003D4E34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E54u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B5(c, 54u, depth + 1u); else { c.pc = 0x003D4DC8u; return; } if (c.pc != 0x003D4E54u) [[unlikely]] return; }
L_003D4E54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D4E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 13;
    if (c.r[6].d[0] == 0ull) { ld128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);  goto L_003D4EC4; }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D4EC0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4EC0u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D4EC0u) [[unlikely]] return; }
L_003D4EC0:
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 1;
L_003D4EC4:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F0Cu); st32((c.r[16].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 158u, depth + 1u); else { c.pc = 0x003D6E98u; return; } if (c.pc != 0x003D4F0Cu) [[unlikely]] return; }
L_003D4F0C:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[6], 0u + 4864u);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D4F50; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 1;
L_003D4F30:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_003D4F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D4F54; } }
L_003D4F44:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4F30u | kUnwind; return; } goto L_003D4F30; } }
L_003D4F50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4F54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003D4F70; }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F6Cu); set32(c.r[5], 0u + 4864u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x003D4F6Cu) [[unlikely]] return; }
L_003D4F6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003D4F70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D4F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29056u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 4864u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4FB4u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00395C58u; return; } if (c.pc != 0x003D4FB4u) [[unlikely]] return; }
L_003D4FB4:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D4FE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003D4FE8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4FE8u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D4FE8u) [[unlikely]] return; }
L_003D4FE8:
    set32(c.r[6], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[17].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_003D501C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D501Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D501Cu) [[unlikely]] return; }
L_003D501C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D506C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5068u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5068u) [[unlikely]] return; }
L_003D5068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 1;
L_003D506C:
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] - 6904u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003D50A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 42u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D50A4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D50A4u) [[unlikely]] return; }
L_003D50A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D50C0:
    set32(c.r[29], c.r[29].w[0] - 1408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 1328u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1360u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1916u)));
    st128((c.r[29].w[0] + 1344u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 1916u);
    st128((c.r[29].w[0] + 1312u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1296u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 1280u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 1264u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 1248u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 1232u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 1216u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1400u), c.f[23]);
    st32((c.r[29].w[0] + 1392u), c.f[22]);
    st32((c.r[29].w[0] + 1384u), c.f[21]);
    st32((c.r[29].w[0] + 1376u), c.f[20]);
    st32((c.r[29].w[0] + 1136u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D514C; } }
    set32(c.r[2], c.r[2].w[0] + 24736u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003D514C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5154u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x003D5154u) [[unlikely]] return; }
L_003D5154:
    set32(c.r[3], c.r[29].w[0] + 496u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    st32((c.r[29].w[0] + 1204u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 1208u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 1212u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[7], c.r[29].w[0] + 512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[30], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[4].w[0] + 24836u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 16u), c.f[2]);
    set32(c.r[3], c.r[3].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[29].w[0] + 52u), c.f[1]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[3], 0u + 7u);
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 43;
L_003D5200:
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5200u | kUnwind; return; } goto L_003D5200; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[8].w[0] + 24836u));
    set32(c.r[2], c.r[3].w[0] - 20416u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[29].w[0] + 496u), c.r[7].w[0]);
    set32(c.r[2], 0u + 7u);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 500u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 17;
L_003D5260:
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5260u | kUnwind; return; } goto L_003D5260; } }
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.f[0] = ld32((c.r[8].w[0] + 24836u));
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    st32((c.r[29].w[0] + 500u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1204u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 1208u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52C0u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D52C0u) [[unlikely]] return; }
L_003D52C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 1136u)));  if (t) { goto L_003D5330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52D4u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 299u, depth + 1u); else { c.pc = 0x0046F890u; return; } if (c.pc != 0x003D52D4u) [[unlikely]] return; }
L_003D52D4:
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mul(c.vu0, 14u, 1u, 1u, 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4] = c.vu0.vf[1];
    c.f[2] = c.r[4].w[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 1136u)));  if (t) { goto L_003D5330; } }
L_003D5310:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5310u | kUnwind; return; } goto L_003D5310; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 1136u)));
    c.budget -= 1;
L_003D5330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 1140u), 0u);  if (t) { goto L_003D5B9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[23] = c.f[0];
    c.f[22] = ld32((c.r[2].w[0] + 24836u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 5;
L_003D5360:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 1916u)));
    set32(c.r[3], c.r[3].w[0] + 1916u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D53A8; } }
    set32(c.r[2], c.r[2].w[0] + 24760u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003D53A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1208u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D53C4u); set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D53C4u) [[unlikely]] return; }
L_003D53C4:
    set32(c.r[3], c.r[18].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8208u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[17], c.r[4].w[0] + 2u);
    st32((c.r[29].w[0] + 952u), c.r[5].w[0]);
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[3], 0u - 16u);
    set32(c.r[2], c.r[2].w[0] + 15u);
    st32((c.r[29].w[0] + 944u), 0u);
    st32((c.r[29].w[0] + 948u), 0u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_003D5428; }
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5420u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5420u) [[unlikely]] return; }
L_003D5420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003D543C; } }
L_003D5428:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_003D543C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] | c.r[4].d[0];
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st32((c.r[29].w[0] + 952u), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 2u);
    st32((c.r[29].w[0] + 956u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 948u), c.r[3].w[0]);
    set32(c.r[20], c.r[29].w[0] + 1056u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1140u)));
    set32(c.r[21], c.r[29].w[0] + 1072u);
    st32((c.r[29].w[0] + 960u), c.r[17].w[0]);
    set32(c.r[22], c.r[29].w[0] + 976u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st128((c.r[29].w[0] + 1184u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 944u), c.r[5].w[0]);
    set32(c.r[23], c.r[29].w[0] + 896u);
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0] + 1200u), c.r[3].w[0]);  if (t) { goto L_003D54D4; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
L_003D5498:
    set32(c.r[7], c.r[16].w[0] << 6);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 944u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D54C4u); set32(c.r[17], c.r[17].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D54C4u) [[unlikely]] return; }
L_003D54C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5498u | kUnwind; return; } goto L_003D5498; }
L_003D54D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 1916u)));
    set32(c.r[3], c.r[3].w[0] + 1916u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D5520; } }
    set32(c.r[2], c.r[2].w[0] + 24784u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003D5520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], 0u - 16u);
    st32((c.r[29].w[0] + 1056u), 0u);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 1064u), 0u);
    st32((c.r[29].w[0] + 1068u), 0u);
    set32(c.r[5], c.f[23]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.vu0.vf[1] = c.r[5];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[3]);
    set32(c.r[16], c.r[2].w[0] + 2u);
    st128((c.r[29].w[0] + 1008u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 1024u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] << 4);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[29].w[0] + 1072u), 0u);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 1076u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 30;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_003D55B4; }
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D55ACu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D55ACu) [[unlikely]] return; }
L_003D55AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003D55C8; } }
L_003D55B4:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
L_003D55C8:
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = c.r[16].d[0] | c.r[5].d[0];
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.vu0.vf[3]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 1168u) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], ld32((c.r[29].w[0] + 944u)));
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    st128((c.r[29].w[0] + 1152u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 992u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 1080u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 1076u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1088u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 1048u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 1052u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 1084u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 1044u), c.f[1]);
    set32(c.r[16], c.r[3].w[0] + 1916u);
    st32((c.r[29].w[0] + 1072u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 1040u), c.f[21]);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.f[0]);
    ld128((c.r[3].w[0] + 224u) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[2] = c.r[2];
    vu::addbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[2].w[0]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 1008u) & ~15u, c.vu0.vf[2]);
    st128((c.r[29].w[0] + 1024u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    c.budget -= 66;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D56D0u); st128((c.r[29].w[0] + 1024u) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D6F50u; return; } if (c.pc != 0x003D56D0u) [[unlikely]] return; }
L_003D56D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1072u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D56E4u); st32((c.r[29].w[0] + 932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DC(c, 27u, depth + 1u); else { c.pc = 0x004707E8u; return; } if (c.pc != 0x003D56E4u) [[unlikely]] return; }
L_003D56E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1916u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D5728; } }
    set32(c.r[2], c.r[2].w[0] + 24800u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003D5728:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 1136u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5748u); set32(c.r[6], ld32((c.r[29].w[0] + 1072u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5748u) [[unlikely]] return; }
L_003D5748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 1916u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D5788; } }
    set32(c.r[2], c.r[2].w[0] + 24816u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003D5788:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[2], ld32((c.r[29].w[0] + 1140u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003D5898; } }
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.vu0.vf[3] = c.r[3];
    vu::addbc(c.vu0, 15u, 3u, 0u, c.vu0.vf[3].w[0]);
    vu::abs(c.vu0, 15u, 2u, 1u);
    st128((c.r[29].w[0] + 1104u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 3u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st128((c.r[29].w[0] + 1120u) & ~15u, c.vu0.vf[3]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0] + 1104u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003D588C; } }
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1204u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5820u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5820u) [[unlikely]] return; }
L_003D5820:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; ld128((c.r[29].w[0] + 896u) & ~15u, c.r[2]);  if (t) { goto L_003D5890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5834u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 299u, depth + 1u); else { c.pc = 0x0046F890u; return; } if (c.pc != 0x003D5834u) [[unlikely]] return; }
L_003D5834:
    ld128((c.r[29].w[0] + 896u) & ~15u, c.vu0.vf[1]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mul(c.vu0, 14u, 1u, 1u, 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4] = c.vu0.vf[1];
    c.f[2] = c.r[4].w[0];
    c.budget -= 15;
    if (c.r[2].sd[0] < 0) { ld128((c.r[29].w[0] + 896u) & ~15u, c.r[2]);  goto L_003D5890; }
L_003D5870:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5870u | kUnwind; return; } goto L_003D5870; } }
L_003D588C:
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[2]);
    c.budget -= 1;
L_003D5890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);  if (t) { goto L_003D593C; } }
L_003D5898:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 500u), 0u);
    st32((c.r[29].w[0] + 480u), c.f[22]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1204u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 1208u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D58D0u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D58D0u) [[unlikely]] return; }
L_003D58D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003D5A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D58E4u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 299u, depth + 1u); else { c.pc = 0x0046F890u; return; } if (c.pc != 0x003D58E4u) [[unlikely]] return; }
L_003D58E4:
    ld128((c.r[29].w[0] + 896u) & ~15u, c.vu0.vf[1]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mul(c.vu0, 14u, 1u, 1u, 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5] = c.vu0.vf[1];
    c.f[2] = c.r[5].w[0];
    c.budget -= 15;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_003D5940; }
L_003D5920:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5920u | kUnwind; return; } goto L_003D5920; } }
L_003D593C:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_003D5940:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[29].w[0] + 80u);  if (t) { goto L_003D5A04; } }
    set32(c.r[17], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 2;
L_003D5950:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[2] = c.r[3];
    c.f[1] = ld32((c.r[29].w[0] + 928u));
    vu::mulabc(c.vu0, 15u, 3u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[0]);
    vu::maddbc(c.vu0, 15u, 2u, 1u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D598Cu); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 108u, depth + 1u); else { c.pc = 0x003D5E60u; return; } if (c.pc != 0x003D598Cu) [[unlikely]] return; }
L_003D598C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003D5A20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003D59F8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D59A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[4].w[0] + 48u);
    ld128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D59A8u | kUnwind; return; } goto L_003D59A8; } }
L_003D59F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5950u | kUnwind; return; } goto L_003D5950; } }
L_003D5A04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 1;
L_003D5A08:
    ld128((c.r[29].w[0] + 896u) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[29].w[0] + 928u));
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_003D5A2C; } }
L_003D5A20:
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[2]);
    c.f[21] = fp::sub(c.f[21], c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 3;
L_003D5A2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1088u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u - 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1084u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[6].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 8208u)));  if (t) { goto L_003D5A80; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 32u)));  goto L_003D5A68; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 16u)));  goto L_003D5A84; }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 1;
L_003D5A68:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5A78u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5A78u) [[unlikely]] return; }
L_003D5A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 1080u)));  if (t) { goto L_003D5A9C; } }
L_003D5A80:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_003D5A84:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 1080u)));
    c.budget -= 6;
L_003D5A9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 960u)));  if (t) { goto L_003D5AD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[8], ld32((c.r[5].w[0] + 8208u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1072u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5AD4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5AD4u) [[unlikely]] return; }
L_003D5AD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 960u)));
    c.budget -= 1;
L_003D5AD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u - 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[6].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8208u)));  if (t) { goto L_003D5B28; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 32u)));  goto L_003D5B10; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 16u)));  goto L_003D5B2C; }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 1;
L_003D5B10:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5B20u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5B20u) [[unlikely]] return; }
L_003D5B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 952u)));  if (t) { goto L_003D5B44; } }
L_003D5B28:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_003D5B2C:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 952u)));
    c.budget -= 6;
L_003D5B44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 1200u)));  if (t) { goto L_003D5B80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 944u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5B7Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5B7Cu) [[unlikely]] return; }
L_003D5B7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 1200u)));
    c.budget -= 1;
L_003D5B80:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 1140u), c.r[3].w[0]);  if (t) { goto L_003D5B9C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5360u | kUnwind; return; } goto L_003D5360; } }
L_003D5B9C:
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1204u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5BB0u); st128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00A3(c, 90u, depth + 1u); else { c.pc = 0x0038DC48u; return; } if (c.pc != 0x003D5BB0u) [[unlikely]] return; }
L_003D5BB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] + 1916u);
    set32(c.r[4], ld32((c.r[5].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D5BF4; } }
    set32(c.r[2], c.r[2].w[0] + 24832u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003D5BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 1212u)));
    set32(c.r[18], c.r[2].w[0] - 20416u);
    st32((c.r[29].w[0] + 484u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_003D5C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 496u)));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C4Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5C4Cu) [[unlikely]] return; }
L_003D5C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[17], c.r[2].w[0] - 32488u);
    st32((c.r[29].w[0] + 68u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[16].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 484u), c.r[17].w[0]);  if (t) { goto L_003D5CA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[4].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CA4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5CA4u) [[unlikely]] return; }
L_003D5CA4:
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 1360u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1344u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1328u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1312u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1296u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1280u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1264u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1248u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1232u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1216u));
    c.f[23] = ld32((c.r[29].w[0] + 1400u));
    c.f[22] = ld32((c.r[29].w[0] + 1392u));
    c.f[21] = ld32((c.r[29].w[0] + 1384u));
    c.f[20] = ld32((c.r[29].w[0] + 1376u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1408u);  c.pc = t; return; }
L_003D5CE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    vu::sub(c.vu0, 15u, 2u, 0u, 0u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 4u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[4].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[16].w[0] + 36u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 39;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D5D88; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003D5D88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003D5E04; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DACu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5DACu) [[unlikely]] return; }
L_003D5DAC:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DC4u); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5DC4u) [[unlikely]] return; }
L_003D5DC4:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  goto L_003D5DDC; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
L_003D5DDC:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DF0u); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5DF0u) [[unlikely]] return; }
L_003D5DF0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 12u));  goto L_003D5E08; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_003D5E04:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003D5E08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  goto L_003D5E4C; }
    c.f[0] = c.f[1] ^ fp::kSign;
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[2] = c.r[2];
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 3u, c.vu0.vf[2].w[0]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 10;
L_003D5E4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5E60:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[22] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[20], 0u - 1u);  if (t) { goto L_003D6008; } }
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
L_003D5EB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[19].w[0] + 76u));
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 2u, 1u);
    vu::opmsub(c.vu0, 2u, 1u, 2u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.r[2] = c.vu0.vf[1];
    c.f[21] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::mul(c.f[20], c.f[20]);  if (t) { goto L_003D5F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  if (t) { goto L_003D5F2C; } }
L_003D5F28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D5F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003D5F50; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F50u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5F50u) [[unlikely]] return; }
L_003D5F50:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D5F6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003D5F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D5F90; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F90u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5F90u) [[unlikely]] return; }
L_003D5F90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 3u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 1u, c.vu0.vf[3].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.r[2] = c.vu0.vf[3];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003D5FF4; } }
    c.f[22] = c.f[1];
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003D5FF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5EB8u | kUnwind; return; } goto L_003D5EB8; } }
L_003D6008:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003D6038:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 48u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 320u), c.f[22]);
    st32((c.r[29].w[0] + 312u), c.f[21]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 8208u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D60CC; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60C4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D60C4u) [[unlikely]] return; }
L_003D60C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003D60E4; } }
L_003D60CC:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
L_003D60E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[21], c.r[20].w[0] + 80u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_003D6174; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6120:
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6120u | kUnwind; return; } goto L_003D6120; } }
L_003D6174:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003D643C; } }
    set32(c.r[23], 0u + 48u);
    c.r[30].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
L_003D6190:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[5], c.r[18].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[22], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[22] = c.r[1].w[0];
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 132u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_003D633C; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D61C0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D61DC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003D61DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D61F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003D61F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003D632C; } }
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[4]);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 1u, 2u, 1u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    c.r[6] = c.vu0.vf[3];
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[21] = c.r[6].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::mul(c.f[20], c.f[20]);  if (t) { goto L_003D6260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  if (t) { goto L_003D6264; } }
L_003D6260:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 48u);  if (t) { goto L_003D6284; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6284u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6284u) [[unlikely]] return; }
L_003D6284:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D62A0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003D62A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D62C4; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D62C4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D62C4u) [[unlikely]] return; }
L_003D62C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 3u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 1u, c.vu0.vf[3].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.r[3] = c.vu0.vf[3];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003D6328; } }
    c.f[22] = c.f[0];
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003D6328:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003D632C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[23].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D61C0u | kUnwind; return; } goto L_003D61C0; } }
L_003D633C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003D63CC; } }
    mmi::mult(c, 0, c.r[22].w[0], c.r[23].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[23].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003D642C; } }
L_003D63CC:
    mmi::mult(c, 0, c.r[18].w[0], c.r[23].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D63E0u); set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B5(c, 170u, depth + 1u); else { c.pc = 0x003D7050u; return; } if (c.pc != 0x003D63E0u) [[unlikely]] return; }
L_003D63E0:
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[30].w[0] + 4u), c.r[4].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 19;
L_003D642C:
    set32(c.r[18], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0; mmi::mult(c, 0, c.r[18].w[0], c.r[23].w[0]); c.r[4].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6190u | kUnwind; return; } goto L_003D6190; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003D643C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003D65A8; } }
    c.f[20] = 0u;
    set32(c.r[23], 0u + 48u);
    set32(c.r[22], 0u + 1u);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_003D6458:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D6474; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 1;
L_003D6474:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D64D0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    ld128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[6] = c.vu0.vf[2];
    c.f[0] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003D64D4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64C4u); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D64C4u) [[unlikely]] return; }
L_003D64C4:
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_003D64D0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003D64D4:
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D64F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003D6598; } }
L_003D64F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 108u, depth + 1u); else { c.pc = 0x003D5E60u; return; } if (c.pc != 0x003D64FCu) [[unlikely]] return; }
L_003D64FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003D6598; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6514u); set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B5(c, 167u, depth + 1u); else { c.pc = 0x003D6FD8u; return; } if (c.pc != 0x003D6514u) [[unlikely]] return; }
L_003D6514:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[4].w[0] + c.r[17].w[0]);  if (t) { goto L_003D654C; } }
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    if (c.r[6].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D654Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003D654Cu) [[unlikely]] return; }
L_003D654C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[21].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 19;
L_003D6598:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6458u | kUnwind; return; } goto L_003D6458; } }
L_003D65A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_003D6678; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 108u, depth + 1u); else { c.pc = 0x003D5E60u; return; } if (c.pc != 0x003D65C8u) [[unlikely]] return; }
L_003D65C8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 48u);  if (t) { goto L_003D663C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 167u, depth + 1u); else { c.pc = 0x003D6FD8u; return; } if (c.pc != 0x003D65E4u) [[unlikely]] return; }
L_003D65E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_003D661C; }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[6], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6618u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003D6618u) [[unlikely]] return; }
L_003D6618:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_003D661C:
    set32(c.r[4], 0u + 48u);
    set32(c.r[5], ld32((c.r[21].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_003D664C; } }
L_003D663C:
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003D664C:
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 11;
L_003D6678:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[19], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003D6874; } }
    c.r[23].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], c.r[19].w[0] - 1u);
    c.budget -= 2;
L_003D6690:
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] < 0; c.r[18].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003D67F8; } }
    set32(c.r[6], 0u + 48u);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[6].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[22] = c.r[1].w[0];
    c.budget -= 9;
L_003D66C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    c.f[1] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[5], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[21] = c.r[2].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[21] = fp::mul(c.f[21], c.f[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::mul(c.f[20], c.f[20]);  if (t) { goto L_003D6730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  if (t) { goto L_003D6734; } }
L_003D6730:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 48u);  if (t) { goto L_003D6754; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6754u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6754u) [[unlikely]] return; }
L_003D6754:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D6770; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003D6770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D6794; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6794u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6794u) [[unlikely]] return; }
L_003D6794:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.r[5] = c.vu0.vf[3];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 21;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003D67F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_003D67F8; } }
L_003D67F0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D66C0u | kUnwind; return; } goto L_003D66C0; } }
L_003D67F8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[6], 0u + 48u);  if (t) { goto L_003D6864; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6814u); set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B5(c, 170u, depth + 1u); else { c.pc = 0x003D7050u; return; } if (c.pc != 0x003D6814u) [[unlikely]] return; }
L_003D6814:
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], 0u + 48u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[23].w[0] + 4u), c.r[4].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 20;
L_003D6864:
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[21], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6690u | kUnwind; return; } goto L_003D6690; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003D6874:
    set32(c.r[2], 0u + 48u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8208u)));  if (t) { goto L_003D68C0; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 32u)));  goto L_003D68A8; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 16u)));  goto L_003D68C4; }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 1;
L_003D68A8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D68B8u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D68B8u) [[unlikely]] return; }
L_003D68B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003D68DC; } }
L_003D68C0:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_003D68C4:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
L_003D68DC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003D691C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[5].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D691Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D691Cu) [[unlikely]] return; }
L_003D691C:
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
    c.f[22] = ld32((c.r[29].w[0] + 320u));
    c.f[21] = ld32((c.r[29].w[0] + 312u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003D6958:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 336u), c.f[20]);
    c.f[0] = ld32((c.r[23].w[0]));
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 21;
    { const bool t = c.r[22].sd[0] <= 0; st32((c.r[29].w[0] + 36u), c.f[0]);  if (t) { goto L_003D6D74; } }
    set32(c.r[30], 0u + 48u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[30].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
L_003D69B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[21], c.r[19].w[0] + 1u);  if (t) { goto L_003D6A04; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_003D69E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[7], 0u + 4864u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003D6AE0; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D69E8u | kUnwind; return; } goto L_003D69E8; } }
L_003D6A04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], 0u + 4864u);  if (t) { goto L_003D6AB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[8], c.r[18].w[0] + 92u);  if (t) { goto L_003D6A50; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_003D6A30:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[9].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003D6AD8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6A30u | kUnwind; return; } goto L_003D6A30; } }
L_003D6A50:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6A54:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003D6AB8; } }
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 3;
L_003D6A70:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003D6AA8; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[7], ld32((c.r[18].w[0] + 80u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[7], c.r[7].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6AA8u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6AA8u) [[unlikely]] return; }
L_003D6AA8:
    set32(c.r[17], c.r[17].w[0] - 48u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[10], ld32((c.r[18].w[0] + 80u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6A70u | kUnwind; return; } goto L_003D6A70; } }
L_003D6AB8:
    mmi::mult(c, 0, c.r[19].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D6AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 32u)));  if (t) { goto L_003D6AE8; } }
L_003D6AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6A54u | kUnwind; return; } goto L_003D6A54; } }
L_003D6AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6A08u | kUnwind; return; } goto L_003D6A08; } }
L_003D6AE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_003D6D64; } }
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = c.r[21].d[0] + 0ull;  goto L_003D6D68; }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B1Cu); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6B1Cu) [[unlikely]] return; }
L_003D6B1C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[19].d[0] = c.r[21].d[0] + 0ull;  goto L_003D6D68; }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B40u); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6B40u) [[unlikely]] return; }
L_003D6B40:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::mult(c, 0, c.r[19].w[0], c.r[30].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_003D6D64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B88u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6B88u) [[unlikely]] return; }
L_003D6B88:
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[3]);
    c.f[0] = ld32((c.r[23].w[0] + 4u));
    vu::sub(c.vu0, 15u, 3u, 3u, 2u);
    c.f[3] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 4u, 3u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 2u, c.vu0.vf[4].w[2]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.r[2] = c.vu0.vf[4];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[1] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[3]);
    c.f[20] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 40u), c.f[2]);  if (t) { goto L_003D6D64; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C14u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6C14u) [[unlikely]] return; }
L_003D6C14:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    vu::sub(c.vu0, 15u, 2u, 2u, 3u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 2u, 1u);
    vu::opmsub(c.vu0, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C48u); st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00C2(c, 204u, depth + 1u); else { c.pc = 0x0040A810u; return; } if (c.pc != 0x003D6C48u) [[unlikely]] return; }
L_003D6C48:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 5u, 0u, 0u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 4u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[4].w[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[4]);
    c.r[3] = c.vu0.vf[4];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 44u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    set32(c.r[16], c.r[2].w[0] - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[5]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    fpu_div(c, 0u, c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    set32(c.r[7], c.f[0]);
    c.vu0.vf[1] = c.r[7];
    st32((c.r[29].w[0] + 32u), c.f[0]);
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 28;
    { const bool t = c.r[16].sd[0] < 0; st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003D6CFC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 2;
L_003D6CC0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003D6CF0; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6CF0u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6CF0u) [[unlikely]] return; }
L_003D6CF0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[18].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6CC0u | kUnwind; return; } goto L_003D6CC0; }
L_003D6CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x003D6D04u) [[unlikely]] return; }
L_003D6D04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 60u)));  goto L_003D6D24; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 60u)));  goto L_003D6D24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003D6D20u) [[unlikely]] return; }
L_003D6D20:
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003D6D24:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D40u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6D40u) [[unlikely]] return; }
L_003D6D40:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[3] = c.r[2];
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mulbc(c.vu0, 15u, 3u, 1u, c.vu0.vf[3].w[0]);
    vu::add(c.vu0, 15u, 2u, 2u, 3u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 9;
L_003D6D64:
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003D6D68:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::mult(c, 0, c.r[19].w[0], c.r[30].w[0]); c.r[4].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D69B8u | kUnwind; return; } goto L_003D69B8; }
L_003D6D74:
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
    c.f[20] = ld32((c.r[29].w[0] + 336u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003D6DA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 29056u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[16].w[0] + 80u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], c.r[16].w[0] + 92u);
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DF8u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00B5(c, 61u, depth + 1u); else { c.pc = 0x003D4E60u; return; } if (c.pc != 0x003D6DF8u) [[unlikely]] return; }
L_003D6DF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E2Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x003D6E2Cu) [[unlikely]] return; }
L_003D6E2C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    st32((c.r[17].w[0] + 60u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D6E88:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 80u);  c.pc = t; return; }
L_003D6E98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6EA8u); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A3(c, 90u, depth + 1u); else { c.pc = 0x0038DC48u; return; } if (c.pc != 0x003D6EA8u) [[unlikely]] return; }
L_003D6EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D6EB8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);  c.pc = t; return; }
L_003D6EC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_003D6ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 92u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st32((c.r[29].w[0]), c.r[5].w[0]);  if (t) { goto L_003D6F1C; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003D6F1Cu) [[unlikely]] return; }
L_003D6F1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D6F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[16].sd[0] < 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D6FBC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 2;
L_003D6F88:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6FB4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6FB4u) [[unlikely]] return; }
L_003D6FB4:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6F88u | kUnwind; return; } goto L_003D6F88; }
L_003D6FBC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D6FD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] < 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D7038; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 2;
L_003D7008:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7030u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7030u) [[unlikely]] return; }
L_003D7030:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7008u | kUnwind; return; } goto L_003D7008; }
L_003D7038:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D7050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] < 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D70B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 2;
L_003D7080:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70A8u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D70A8u) [[unlikely]] return; }
L_003D70A8:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7080u | kUnwind; return; } goto L_003D7080; }
L_003D70B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D70C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003D7158; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003D7148; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1024u)));
    set32(c.r[3], c.r[3].w[0] + 25048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 80u);
    set32(c.r[12], 0u + 9u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22960u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 29032u);
    set32(c.r[7], c.r[7].w[0] + 29128u);
    set32(c.r[8], c.r[8].w[0] + 29160u);
    set32(c.r[9], c.r[9].w[0] + 29192u);
    set32(c.r[10], c.r[10].w[0] + 29304u);
    set32(c.r[11], c.r[11].w[0] - 17024u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7140u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003D7140u) [[unlikely]] return; }
L_003D7140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003D715C; } }
L_003D7148:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7158u); set32(c.r[4], c.r[4].w[0] - 22960u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003D7158u) [[unlikely]] return; }
L_003D7158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D715C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D7168:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 42u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 112u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71A4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D71A4u) [[unlikely]] return; }
L_003D71A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D6DA8u; return; } if (c.pc != 0x003D71B4u) [[unlikely]] return; }
L_003D71B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D71C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71D8u);  if (depth < kMaxDepth) unit_00B5(c, 155u, depth + 1u); else { c.pc = 0x003D6E10u; return; } if (c.pc != 0x003D71D8u) [[unlikely]] return; }
L_003D71D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D71E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71F8u);  if (depth < kMaxDepth) unit_00B5(c, 61u, depth + 1u); else { c.pc = 0x003D4E60u; return; } if (c.pc != 0x003D71F8u) [[unlikely]] return; }
L_003D71F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D7208:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_003D7270; } }
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 24;
L_003D7270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D7278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D7280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22960u);  c.pc = t; return; }
L_003D7290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72A4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B5(c, 173u, depth + 1u); else { c.pc = 0x003D70C8u; return; } if (c.pc != 0x003D72A4u) [[unlikely]] return; }
L_003D72A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D72B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72C4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B5(c, 173u, depth + 1u); else { c.pc = 0x003D70C8u; return; } if (c.pc != 0x003D72C4u) [[unlikely]] return; }
L_003D72C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D72D0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D7360; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7358; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40860000u);
    c.r[1].d[0] = c.r[1].d[0] | 2706ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[13], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[13]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.f[1]);  c.pc = t; return; }
L_003D7358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003D7360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D7368:
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 2;
L_003D7370:
    set32(c.r[29], c.r[29].w[0] - 656u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 624u), c.f[22]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[23]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 632u), c.f[23]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    c.f[23] = c.f[13];
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 448u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 640u), c.f[24]);
    st32((c.r[29].w[0] + 616u), c.f[21]);
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 608u), c.f[20]);  if (t) { goto L_003D73E4; } }
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[7]);  goto L_003D73EC; }
L_003D73E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D7ABC; } }
L_003D73EC:
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 15u, 2u, 8u, 7u);
    vu::sub(c.vu0, 15u, 3u, 6u, 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[1].d[0] = c.r[1].d[0] | 50604ull;
    c.f[0] = c.r[1].w[0];
    vu::opmula(c.vu0, 2u, 3u);
    vu::opmsub(c.vu0, 5u, 3u, 2u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 1u, 5u, 5u);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 4u, c.vu0.vf[1].w[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[3]);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    c.r[2] = c.vu0.vf[1];
    c.f[24] = c.r[2].w[0];
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); vu::move(c.vu0, 15u, 3u, 6u);  if (t) { goto L_003D75E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[0] = c.r[1].w[0];
    vu::add(c.vu0, 15u, 3u, 3u, 7u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[3], c.f[0]);
    vu::move(c.vu0, 15u, 2u, 3u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    vu::add(c.vu0, 15u, 2u, 2u, 8u);
    c.vu0.vf[1] = c.r[3];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[22];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[17] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[6] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[17], c.f[0]);
    c.f[8] = ld32((c.r[17].w[0] + 8u));
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[9] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = fp::mul(c.f[6], c.f[3]);
    c.f[20] = fp::mul(c.f[5], c.f[8]);
    c.f[13] = ld32((c.r[18].w[0] + 8u));
    c.f[18] = fp::mul(c.f[5], c.f[5]);
    c.f[11] = ld32((c.r[18].w[0]));
    c.f[5] = fp::mul(c.f[5], c.f[9]);
    c.f[14] = ld32((c.r[18].w[0] + 4u));
    c.f[4] = fp::mul(c.f[0], c.f[17]);
    c.f[16] = ld32((c.r[19].w[0] + 8u));
    c.f[7] = fp::mul(c.f[1], c.f[3]);
    c.f[15] = ld32((c.r[19].w[0]));
    c.f[21] = fp::mul(c.f[9], c.f[8]);
    c.f[19] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[10] = fp::mul(c.f[9], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[8] = fp::mul(c.f[8], c.f[8]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[17]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[9] = fp::mul(c.f[11], c.f[13]);
    c.f[5] = fp::mul(c.f[11], c.f[11]);
    c.f[1] = fp::add(c.f[1], c.f[10]);
    c.f[6] = fp::add(c.f[6], c.f[8]);
    c.f[11] = fp::mul(c.f[11], c.f[14]);
    c.f[2] = fp::add(c.f[2], c.f[18]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[10] = fp::mul(c.f[14], c.f[13]);
    c.f[8] = fp::mul(c.f[14], c.f[14]);
    c.f[7] = fp::add(c.f[7], c.f[21]);
    c.f[13] = fp::mul(c.f[13], c.f[13]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[4] = fp::add(c.f[4], c.f[11]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[9] = fp::mul(c.f[15], c.f[16]);
    c.f[5] = fp::mul(c.f[15], c.f[15]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[11] = fp::mul(c.f[19], c.f[16]);
    fpu_div(c, 3u, c.f[22], c.f[3]);
    c.f[6] = fp::add(c.f[6], c.f[13]);
    c.f[7] = fp::add(c.f[7], c.f[10]);
    c.f[8] = fp::mul(c.f[19], c.f[19]);
    c.f[16] = fp::mul(c.f[16], c.f[16]);
    c.f[15] = fp::mul(c.f[15], c.f[19]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[6] = fp::add(c.f[6], c.f[16]);
    c.f[4] = fp::add(c.f[4], c.f[15]);
    c.f[7] = fp::add(c.f[7], c.f[11]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[6] = fp::mul(c.f[3], c.f[6]);
    c.f[7] = fp::mul(c.f[3], c.f[7]);
    c.f[4] = fp::mul(c.f[3], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = fp::add(c.f[2], c.f[1]);
    c.f[4] = c.f[4] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[7] = c.f[7] ^ fp::kSign;
    st32((c.r[29].w[0] + 56u), c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[7]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    c.budget -= 100;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75DCu); st32((c.r[29].w[0] + 52u), c.f[7]);  if (depth < kMaxDepth) unit_00B6(c, 76u, depth + 1u); else { c.pc = 0x003D8E48u; return; } if (c.pc != 0x003D75DCu) [[unlikely]] return; }
L_003D75DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7A80; } }
L_003D75E4:
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D769C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[0] = c.r[1].w[0];
    vu::add(c.vu0, 15u, 3u, 3u, 7u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[5], c.f[0]);
    vu::move(c.vu0, 15u, 2u, 3u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    vu::add(c.vu0, 15u, 2u, 2u, 8u);
    c.vu0.vf[1] = c.r[5];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.f[6] = c.f[22] ^ fp::kSign;
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[4] = fp::mul(c.f[2], c.f[2]);
    c.f[3] = fp::mul(c.f[1], c.f[1]);
    c.f[5] = fp::mul(c.f[0], c.f[0]);
    c.f[7] = fp::mul(c.f[1], c.f[0]);
    c.f[8] = fp::add(c.f[3], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[7] = fp::mul(c.f[6], c.f[7]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[6] = fp::mul(c.f[6], c.f[1]);
    c.f[3] = fp::mul(c.f[22], c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[7]);
    c.f[4] = fp::mul(c.f[22], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[8] = fp::mul(c.f[22], c.f[8]);
    st32((c.r[29].w[0] + 20u), c.f[6]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[8]);
    st32((c.r[29].w[0] + 32u), c.f[6]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 40u), c.f[7]);  if (t) { goto L_003D7A80; } }
L_003D769C:
    vu::mul(c.vu0, 14u, 2u, 5u, 5u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[2].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[2].w[0]);
    vu::mulbc(c.vu0, 14u, 5u, 5u, c.vu0.q);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] | 6ull;
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.f[20] = c.f[23] ^ fp::kSign;
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 5u);
    vu::sub(c.vu0, 15u, 5u, 0u, 0u);
    set32(c.r[21], c.r[29].w[0] + 80u);
    set32(c.r[20], c.r[29].w[0] + 304u);
    set32(c.r[30], c.r[29].w[0] + 316u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 29;
L_003D7710:
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7710u | kUnwind; return; } goto L_003D7710; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_003D7768; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 432u) & ~15u, c.vu0.vf[5]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7764u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003D7764u) [[unlikely]] return; }
L_003D7764:
    ld128((c.r[29].w[0] + 432u) & ~15u, c.vu0.vf[5]);
    c.budget -= 1;
L_003D7768:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.r[2]);
    st32((c.r[22].w[0] + 4u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = fp::mul(c.f[23], c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    ld128((c.r[17].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.f[0]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    c.vu0.vf[3] = c.r[5];
    set32(c.r[2], c.f[1]);
    c.vu0.vf[4] = c.r[2];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[4].w[0]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[18].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[4].w[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[19].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[19].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    st128((c.r[2].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    c.budget -= 54;
L_003D7840:
    ld128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[4].w[0]);
    st128((c.r[2].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.vu0.vf[5]);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.vu0.vf[5]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7884u); st128((c.r[29].w[0] + 272u) & ~15u, c.vu0.vf[5]);  if (depth < kMaxDepth) unit_00C2(c, 150u, depth + 1u); else { c.pc = 0x004099F0u; return; } if (c.pc != 0x003D7884u) [[unlikely]] return; }
L_003D7884:
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7894u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00C2(c, 139u, depth + 1u); else { c.pc = 0x00409750u; return; } if (c.pc != 0x003D7894u) [[unlikely]] return; }
L_003D7894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 304u), c.r[30].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
L_003D78B8:
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D78B8u | kUnwind; return; } goto L_003D78B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_003D7908; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7908u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003D7908u) [[unlikely]] return; }
L_003D7908:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[10], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[8], 0u + 5u);
    set32(c.r[9], 0u + 3u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[6], 0u + 8u);
    st32((c.r[3].w[0] + 4u), c.r[10].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 60u);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[3].w[0] + 72u), c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 72u);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 84u), c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] + 84u);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79D0u); set32(c.r[5], ld32((c.r[29].w[0] + 304u)));  if (depth < kMaxDepth) unit_00C2(c, 144u, depth + 1u); else { c.pc = 0x00409870u; return; } if (c.pc != 0x003D79D0u) [[unlikely]] return; }
L_003D79D0:
    set32(c.r[5], ld32((c.r[29].w[0] + 416u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79E0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00B6(c, 90u, depth + 1u); else { c.pc = 0x003D9F50u; return; } if (c.pc != 0x003D79E0u) [[unlikely]] return; }
L_003D79E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003D7A1C; } }
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A1Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7A1Cu) [[unlikely]] return; }
L_003D7A1C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C2(c, 151u, depth + 1u); else { c.pc = 0x00409A20u; return; } if (c.pc != 0x003D7A28u) [[unlikely]] return; }
L_003D7A28:
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[5]);
    c.r[6].d[0] = c.r[7].d[0] & c.r[16].d[0];
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    st128((c.r[29].w[0]) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_003D7A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[17].d[0];
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A80u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7A80u) [[unlikely]] return; }
L_003D7A80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[4]);
    c.f[0] = fp::mul(c.f[24], c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0]) & ~15u, c.r[6]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    st32((c.r[23].w[0] + 4u), c.f[22]);
    st128((c.r[23].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[23].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[23].w[0]), c.f[0]);
    st128((c.r[23].w[0] + 64u) & ~15u, c.r[5]);
    st128((c.r[23].w[0] + 16u) & ~15u, c.r[6]);
    c.budget -= 15;
L_003D7ABC:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 448u));
    c.f[24] = ld32((c.r[29].w[0] + 640u));
    c.f[23] = ld32((c.r[29].w[0] + 632u));
    c.f[22] = ld32((c.r[29].w[0] + 624u));
    c.f[21] = ld32((c.r[29].w[0] + 616u));
    c.f[20] = ld32((c.r[29].w[0] + 608u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_003D7B00:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7B9C; } }
    c.f[1] = ld32((c.r[4].w[0]));
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[4] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[6] = c.r[1].w[0];
    c.f[5] = fp::mul(c.f[2], c.f[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[2] = fp::add(c.f[4], c.f[0]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.f[3] = fp::mul(c.f[12], c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[12]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[4] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[5].w[0] + 72u), c.f[2]);
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 52u), c.f[4]);  c.pc = t; return; }
L_003D7B9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003D7BA8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D7D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[17].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 4u), 0u);  if (t) { goto L_003D7C1C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C1Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003D7C1Cu) [[unlikely]] return; }
L_003D7C1C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D7C74; } }
    c.budget -= 1;
L_003D7C30:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[7].w[0] << 4);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7C30u | kUnwind; return; } goto L_003D7C30; } }
L_003D7C74:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 174u, depth + 1u); else { c.pc = 0x003DB010u; return; } if (c.pc != 0x003D7C8Cu) [[unlikely]] return; }
L_003D7C8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D7CD0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003D7CC8; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CC8u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7CC8u) [[unlikely]] return; }
L_003D7CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D7D20; } }
L_003D7CD0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CDCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 90u, depth + 1u); else { c.pc = 0x003D9F50u; return; } if (c.pc != 0x003D7CDCu) [[unlikely]] return; }
L_003D7CDC:
    st32((c.r[20].w[0] + 4u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C2(c, 151u, depth + 1u); else { c.pc = 0x00409A20u; return; } if (c.pc != 0x003D7CECu) [[unlikely]] return; }
L_003D7CEC:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003D7D1C; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D1Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7D1Cu) [[unlikely]] return; }
L_003D7D1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7D20:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D7D48:
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_003D7D50:
    set32(c.r[29], c.r[29].w[0] - 672u);
    c.f[2] = 0u;
    st32((c.r[29].w[0] + 640u), c.f[24]);
    c.f[24] = c.f[13];
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[2]));
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 624u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 448u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 664u), c.f[27]);
    st32((c.r[29].w[0] + 656u), c.f[26]);
    st32((c.r[29].w[0] + 648u), c.f[25]);
    st32((c.r[29].w[0] + 632u), c.f[23]);
    st32((c.r[29].w[0] + 616u), c.f[21]);
    st32((c.r[29].w[0] + 608u), c.f[20]);
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 400u), c.r[6].w[0]);  if (t) { goto L_003D7DCC; } }
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);  goto L_003D7DD4; }
L_003D7DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00B6(c, 19u, depth); } }
L_003D7DD4:
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 3u, 3u, 2u);
    vu::mul(c.vu0, 14u, 1u, 3u, 3u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 4u, c.vu0.vf[1].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    c.r[2] = c.vu0.vf[1];
    c.f[21] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[21]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7F44; } }
    vu::mul(c.vu0, 14u, 2u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[2].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[2].w[0]);
    vu::mulbc(c.vu0, 14u, 3u, 3u, c.vu0.q);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    st32((c.r[29].w[0] + 108u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[3]);
    vu::mul(c.vu0, 14u, 1u, 4u, 3u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65368ull;
    c.f[0] = c.r[1].w[0];
    c.r[4] = c.vu0.vf[1];
    c.f[12] = c.r[4].w[0];
    c.f[1] = c.f[12] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);  if (t) { goto L_003D7F1C; } }
    vu::opmula(c.vu0, 3u, 4u);
    vu::opmsub(c.vu0, 1u, 4u, 3u);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003D7EEC; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[3];  goto L_003D7EEC; }
L_003D7EEC:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7EF8u); st128((c.r[29].w[0] + 432u) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x003D7EF8u) [[unlikely]] return; }
L_003D7EF8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F08u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00C2(c, 180u, depth + 1u); else { c.pc = 0x0040A3F0u; return; } if (c.pc != 0x003D7F08u) [[unlikely]] return; }
L_003D7F08:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F14u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C2(c, 186u, depth + 1u); else { c.pc = 0x0040A480u; return; } if (c.pc != 0x003D7F14u) [[unlikely]] return; }
L_003D7F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7F70; } }
L_003D7F1C:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003D7F70; } }
L_003D7F44:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 11;
L_003D7F70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[25] = c.r[1].w[0];
    set32(c.r[21], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40860000u);
    c.r[1].d[0] = c.r[1].d[0] | 2706ull;
    c.f[0] = c.r[1].w[0];
    c.r[30].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], c.f[25]);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.vu0.vf[1] = c.r[2];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[20] = c.r[1].w[0];
    st128((c.r[29].w[0] + 416u) & ~15u, c.vu0.vf[1]);
    c.f[27] = fp::mul(c.f[21], c.f[25]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[20] = fp::mul(c.f[22], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[1].w[0];
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[1] = fp::mul(c.f[27], c.f[21]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.vu0.vf[3]);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    vu::move(c.vu0, 15u, 2u, 1u);
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[3].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[25]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.f[23] = fp::mul(c.f[0], c.f[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    c.f[20] = fp::mul(c.f[20], c.f[21]);
    st32((c.r[29].w[0] + 80u), 0u);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.budget -= 36;
    [[clang::musttail]] return unit_00B6(c, 1u, depth);
}

}
