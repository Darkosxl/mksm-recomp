#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BD[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
};

void unit_00BD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F4000;
    case 2u: goto L_003F4028;
    case 3u: goto L_003F405C;
    case 4u: goto L_003F4060;
    case 5u: goto L_003F406C;
    case 6u: goto L_003F40BC;
    case 7u: goto L_003F40F8;
    case 8u: goto L_003F412C;
    case 9u: goto L_003F4150;
    case 10u: goto L_003F4160;
    case 11u: goto L_003F416C;
    case 12u: goto L_003F4188;
    case 13u: goto L_003F41B8;
    case 14u: goto L_003F4220;
    case 15u: goto L_003F4230;
    case 16u: goto L_003F4244;
    case 17u: goto L_003F4270;
    case 18u: goto L_003F43A8;
    case 19u: goto L_003F44C8;
    case 20u: goto L_003F4530;
    case 21u: goto L_003F4578;
    case 22u: goto L_003F458C;
    case 23u: goto L_003F45AC;
    case 24u: goto L_003F45E0;
    case 25u: goto L_003F4650;
    case 26u: goto L_003F471C;
    case 27u: goto L_003F4758;
    case 28u: goto L_003F476C;
    case 29u: goto L_003F478C;
    case 30u: goto L_003F479C;
    case 31u: goto L_003F47A4;
    case 32u: goto L_003F47F0;
    case 33u: goto L_003F4820;
    case 34u: goto L_003F4828;
    case 35u: goto L_003F4870;
    case 36u: goto L_003F48C4;
    case 37u: goto L_003F4908;
    case 38u: goto L_003F4948;
    case 39u: goto L_003F49B8;
    case 40u: goto L_003F49C8;
    case 41u: goto L_003F49D0;
    case 42u: goto L_003F4A20;
    case 43u: goto L_003F4A34;
    case 44u: goto L_003F4B40;
    case 45u: goto L_003F4B74;
    case 46u: goto L_003F4C0C;
    case 47u: goto L_003F4C28;
    case 48u: goto L_003F4C48;
    case 49u: goto L_003F4C60;
    case 50u: goto L_003F4CA8;
    case 51u: goto L_003F4CBC;
    case 52u: goto L_003F4CD0;
    case 53u: goto L_003F4CE4;
    case 54u: goto L_003F4CF4;
    case 55u: goto L_003F4D1C;
    case 56u: goto L_003F4D68;
    case 57u: goto L_003F4DE8;
    case 58u: goto L_003F4F00;
    case 59u: goto L_003F4F50;
    case 60u: goto L_003F526C;
    case 61u: goto L_003F52C8;
    case 62u: goto L_003F5398;
    case 63u: goto L_003F53D0;
    case 64u: goto L_003F5408;
    case 65u: goto L_003F5458;
    case 66u: goto L_003F5478;
    case 67u: goto L_003F549C;
    case 68u: goto L_003F54AC;
    case 69u: goto L_003F54B8;
    case 70u: goto L_003F54D0;
    case 71u: goto L_003F5500;
    case 72u: goto L_003F5560;
    case 73u: goto L_003F55B0;
    case 74u: goto L_003F55E8;
    case 75u: goto L_003F5630;
    case 76u: goto L_003F565C;
    case 77u: goto L_003F56E0;
    case 78u: goto L_003F56F4;
    case 79u: goto L_003F5700;
    case 80u: goto L_003F5784;
    case 81u: goto L_003F57A8;
    case 82u: goto L_003F57F0;
    case 83u: goto L_003F5848;
    case 84u: goto L_003F5868;
    case 85u: goto L_003F58D0;
    case 86u: goto L_003F58F0;
    case 87u: goto L_003F5934;
    case 88u: goto L_003F5968;
    case 89u: goto L_003F59B8;
    case 90u: goto L_003F59FC;
    case 91u: goto L_003F5A0C;
    case 92u: goto L_003F5B64;
    case 93u: goto L_003F5B78;
    case 94u: goto L_003F5BC0;
    case 95u: goto L_003F5C00;
    case 96u: goto L_003F5C70;
    case 97u: goto L_003F5D08;
    case 98u: goto L_003F5D30;
    case 99u: goto L_003F5D70;
    case 100u: goto L_003F5D8C;
    case 101u: goto L_003F5DC4;
    case 102u: goto L_003F5E74;
    case 103u: goto L_003F5EB8;
    case 104u: goto L_003F5F0C;
    case 105u: goto L_003F5F38;
    case 106u: goto L_003F6008;
    case 107u: goto L_003F6090;
    case 108u: goto L_003F60B0;
    case 109u: goto L_003F60BC;
    case 110u: goto L_003F60D0;
    case 111u: goto L_003F60E0;
    case 112u: goto L_003F6174;
    case 113u: goto L_003F61A8;
    case 114u: goto L_003F620C;
    case 115u: goto L_003F6268;
    case 116u: goto L_003F62B0;
    case 117u: goto L_003F62BC;
    case 118u: goto L_003F62D0;
    case 119u: goto L_003F6308;
    case 120u: goto L_003F636C;
    case 121u: goto L_003F6398;
    case 122u: goto L_003F63C0;
    case 123u: goto L_003F63E8;
    case 124u: goto L_003F6418;
    case 125u: goto L_003F6460;
    case 126u: goto L_003F64D0;
    case 127u: goto L_003F6508;
    case 128u: goto L_003F6548;
    case 129u: goto L_003F6590;
    case 130u: goto L_003F65F8;
    case 131u: goto L_003F6608;
    case 132u: goto L_003F6638;
    case 133u: goto L_003F6668;
    case 134u: goto L_003F66C8;
    case 135u: goto L_003F6704;
    case 136u: goto L_003F6750;
    case 137u: goto L_003F67D8;
    case 138u: goto L_003F67E0;
    case 139u: goto L_003F67E8;
    case 140u: goto L_003F6820;
    case 141u: goto L_003F6850;
    case 142u: goto L_003F6894;
    case 143u: goto L_003F68B0;
    case 144u: goto L_003F68B8;
    case 145u: goto L_003F6958;
    case 146u: goto L_003F69A8;
    case 147u: goto L_003F69D8;
    case 148u: goto L_003F6A08;
    case 149u: goto L_003F6A64;
    case 150u: goto L_003F6B10;
    case 151u: goto L_003F6B30;
    case 152u: goto L_003F6B48;
    case 153u: goto L_003F6B9C;
    case 154u: goto L_003F6BA8;
    case 155u: goto L_003F6BD8;
    case 156u: goto L_003F6BF8;
    case 157u: goto L_003F6C28;
    case 158u: goto L_003F6C78;
    case 159u: goto L_003F6CB0;
    case 160u: goto L_003F6D88;
    case 161u: goto L_003F6E00;
    case 162u: goto L_003F6E1C;
    case 163u: goto L_003F6E2C;
    case 164u: goto L_003F6E5C;
    case 165u: goto L_003F6E74;
    case 166u: goto L_003F6EFC;
    case 167u: goto L_003F6F74;
    case 168u: goto L_003F6F84;
    case 169u: goto L_003F6F94;
    case 170u: goto L_003F6F9C;
    case 171u: goto L_003F6FB4;
    case 172u: goto L_003F6FF8;
    case 173u: goto L_003F7000;
    case 174u: goto L_003F705C;
    case 175u: goto L_003F7088;
    case 176u: goto L_003F7104;
    case 177u: goto L_003F7118;
    case 178u: goto L_003F7168;
    case 179u: goto L_003F72B0;
    case 180u: goto L_003F72BC;
    case 181u: goto L_003F7310;
    case 182u: goto L_003F7348;
    case 183u: goto L_003F73B0;
    case 184u: goto L_003F73C8;
    case 185u: goto L_003F73F0;
    case 186u: goto L_003F7468;
    case 187u: goto L_003F74C4;
    case 188u: goto L_003F74CC;
    case 189u: goto L_003F74E0;
    case 190u: goto L_003F74E8;
    case 191u: goto L_003F7500;
    case 192u: goto L_003F7530;
    case 193u: goto L_003F7544;
    case 194u: goto L_003F7554;
    case 195u: goto L_003F756C;
    case 196u: goto L_003F757C;
    case 197u: goto L_003F75A0;
    case 198u: goto L_003F75D8;
    case 199u: goto L_003F75E8;
    case 200u: goto L_003F7630;
    case 201u: goto L_003F7650;
    case 202u: goto L_003F76A4;
    case 203u: goto L_003F76B4;
    case 204u: goto L_003F76C4;
    case 205u: goto L_003F7770;
    case 206u: goto L_003F7784;
    case 207u: goto L_003F77D0;
    case 208u: goto L_003F77F0;
    case 209u: goto L_003F7840;
    case 210u: goto L_003F7850;
    case 211u: goto L_003F7860;
    case 212u: goto L_003F78C8;
    case 213u: goto L_003F78D8;
    case 214u: goto L_003F78E4;
    case 215u: goto L_003F7930;
    case 216u: goto L_003F7A20;
    case 217u: goto L_003F7A3C;
    case 218u: goto L_003F7AF0;
    case 219u: goto L_003F7B40;
    case 220u: goto L_003F7B54;
    case 221u: goto L_003F7B70;
    case 222u: goto L_003F7C08;
    case 223u: goto L_003F7C18;
    case 224u: goto L_003F7C3C;
    case 225u: goto L_003F7C5C;
    case 226u: goto L_003F7C6C;
    case 227u: goto L_003F7C90;
    case 228u: goto L_003F7CB8;
    case 229u: goto L_003F7CDC;
    case 230u: goto L_003F7D04;
    case 231u: goto L_003F7D14;
    case 232u: goto L_003F7D34;
    case 233u: goto L_003F7D48;
    case 234u: goto L_003F7D6C;
    case 235u: goto L_003F7DB8;
    case 236u: goto L_003F7DF8;
    case 237u: goto L_003F7E18;
    case 238u: goto L_003F7E78;
    case 239u: goto L_003F7ECC;
    case 240u: goto L_003F7EF8;
    case 241u: goto L_003F7F6C;
    case 242u: goto L_003F7F8C;
    case 243u: goto L_003F7F9C;
    case 244u: goto L_003F7FAC;
    case 245u: goto L_003F7FD0;
    case 246u: goto L_003F7FF8;
    default: bad_entry(c, 0x003F4000u); return;
    }
L_003F4000:
    set32(c.r[8], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_div(c, 2u, c.f[0], c.f[3]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[10].d[0]; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003F404C; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_003F4028:
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4028u | kUnwind; return; } goto L_003F4028; } }
L_003F404C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3FF8u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 201u, depth); } }
L_003F405C:
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003F4060:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3E50u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 194u, depth); } }
L_003F406C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 20104u);
    c.f[0] = ld32((c.r[2].w[0] + 516u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 516u), c.f[20]);  goto L_003F4088; }
L_003F4088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_003F40C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 4296u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40BCu); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 134u, depth + 1u); else { c.pc = 0x003F9920u; return; } if (c.pc != 0x003F40BCu) [[unlikely]] return; }
L_003F40BC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003F40C0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F40F8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F412Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F412Cu) [[unlikely]] return; }
L_003F412C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] - 22720u);  if (t) { goto L_003F4160; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 4272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4150u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F4150u) [[unlikely]] return; }
L_003F4150:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4160u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F4160u) [[unlikely]] return; }
L_003F4160:
    set32(c.r[17], c.r[21].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F416Cu); set32(c.r[4], ld32((c.r[17].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F416Cu) [[unlikely]] return; }
L_003F416C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F41FC; } }
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 3;
L_003F4188:
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    c.f[2] = c.r[19].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003F41DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_003F41DC; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003F41B8:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F41B8u | kUnwind; return; } goto L_003F41B8; } }
L_003F41DC:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 504u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4188u | kUnwind; return; } goto L_003F4188; } }
L_003F41FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4220u); st32((c.r[3].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F4220u) [[unlikely]] return; }
L_003F4220:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4230u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003F4230u) [[unlikely]] return; }
L_003F4230:
    set32(c.r[3], c.r[21].w[0] - 22720u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 2200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003F4244u) [[unlikely]] return; }
L_003F4244:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4270:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[9], c.r[18].w[0] + 4u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 8u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[18].w[0] + 12u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[20] = 0u;
    c.budget -= 19;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 152u), c.f[21]);  if (t) { goto L_003F42E4; } }
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[20] = fp::sqrt(c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F43D0; } }
L_003F42E4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003F4314; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[1] = fp::mul(c.f[1], c.f[1]);  if (t) { goto L_003F4348; } }
L_003F4314:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003F435C; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 11;
L_003F4348:
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::sqrt(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F43D0; } }
L_003F435C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F43D0; } }
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[18].w[0] + 16u);
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[16], c.r[19].w[0] - 5u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    set32(c.r[2], 0u - 1u);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.f[20] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_003F43C4; } }
    c.budget -= 1;
L_003F43A8:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F43A8u | kUnwind; return; } goto L_003F43A8; } }
L_003F43C4:
    c.f[20] = fp::sqrt(c.f[20]);
    c.budget -= 3;
L_003F43D0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[10].w[0] - 20104u);  if (t) { goto L_003F43FC; } }
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F43F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[2].w[0]);  if (t) { goto L_003F43F8; } }
L_003F43F4:
    st32((c.r[8].w[0]), 0u);
    c.budget -= 1;
L_003F43F8:
    set32(c.r[2], c.r[10].w[0] - 20104u);
    c.budget -= 1;
L_003F43FC:
    c.f[0] = ld32((c.r[2].w[0] + 516u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 516u), c.f[20]);  goto L_003F4410; }
L_003F4410:
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.f[0] = ld32((c.r[3].w[0] + 1624u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F44EC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.f[20] = c.f[20] ^ fp::kSign;  goto L_003F4430; }
L_003F4430:
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], 0u + 2u);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; st32((c.r[9].w[0]), c.f[1]);  if (t) { goto L_003F461C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003F4470; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_003F461C; } }
L_003F4470:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003F4498; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { goto L_003F461C; } }
L_003F4498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003F4620; } }
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[17], c.r[18].w[0] + 16u);
    set32(c.r[16], c.r[19].w[0] - 5u);
    set32(c.r[2], 0u - 1u);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[5].w[0]), c.f[1]);  if (t) { goto L_003F461C; } }
L_003F44C8:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] - 1u);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F44C8u | kUnwind; return; } goto L_003F44C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003F4620; } }
L_003F44EC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F4554; } }
    c.f[1] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[19].w[0] - 1u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::sqrt(c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F461C; } }
    c.budget -= 1;
L_003F4530:
    st32((c.r[17].w[0]), c.f[1]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4530u | kUnwind; return; } goto L_003F4530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003F4620; } }
L_003F4554:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.f[20] = c.f[20] ^ fp::kSign;  goto L_003F455C; }
L_003F455C:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] - 1u);  if (t) { goto L_003F461C; } }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], 0u - 1u);
    c.budget -= 4;
L_003F4578:
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = c.f[20];
    c.f[14] = ld32((c.r[22].w[0] + 1620u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F458Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9640u; return; } if (c.pc != 0x003F458Cu) [[unlikely]] return; }
L_003F458C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = c.f[0];  if (t) { goto L_003F45A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[1]);  if (t) { goto L_003F4610; } }
L_003F45A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F45ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 126u, depth + 1u); else { c.pc = 0x003F9790u; return; } if (c.pc != 0x003F45ACu) [[unlikely]] return; }
L_003F45AC:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[19].w[0] - 1u);  if (t) { goto L_003F45D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.budget -= 2;
L_003F45D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[20].d[0]; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F45FC; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F45E0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F45E0u | kUnwind; return; } goto L_003F45E0; } }
L_003F45FC:
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], ld32((c.r[21].w[0] + 532u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 532u), c.r[2].w[0]);  if (t) { goto L_003F461C; } }
L_003F4610:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[20].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4578u | kUnwind; return; } goto L_003F4578; } }
L_003F461C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003F4620:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F4650:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 20104u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[2], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 764u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 2200u)));
    st32((c.r[4].w[0] + 764u), c.r[2].w[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4724; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] - 20208u);
    set32(c.r[4], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[23].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003F4714; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_003F4720; } }
L_003F4714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F471Cu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F471Cu) [[unlikely]] return; }
L_003F471C:
    st32((c.r[23].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_003F4720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F4724:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2240u)));
    c.budget -= 4;
    if (c.r[23].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[23].w[0] + 8u);  goto L_003F47A8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4208u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4758u); set32(c.r[6], ld32((c.r[23].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F4758u) [[unlikely]] return; }
L_003F4758:
    set32(c.r[6], ld32((c.r[16].w[0] + 2316u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F476Cu); set32(c.r[5], c.r[5].w[0] - 4168u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F476Cu) [[unlikely]] return; }
L_003F476C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[5].w[0] - 20104u);
    set32(c.r[6], ld32((c.r[2].w[0] + 780u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));  if (t) { goto L_003F4790; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F478Cu); set32(c.r[5], c.r[5].w[0] - 4128u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F478Cu) [[unlikely]] return; }
L_003F478C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 1;
L_003F4790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F479Cu); set32(c.r[5], c.r[5].w[0] - 4104u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F479Cu) [[unlikely]] return; }
L_003F479C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47A4u); set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00BB(c, 29u, depth + 1u); else { c.pc = 0x003EC4E8u; return; } if (c.pc != 0x003F47A4u) [[unlikely]] return; }
L_003F47A4:
    set32(c.r[5], c.r[23].w[0] + 8u);
    c.budget -= 1;
L_003F47A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003F48E0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003F4854; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 2428u)));  if (t) { goto L_003F4894; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003F4894; } }
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003F47F0:
    set32(c.r[3], ld32((c.r[30].w[0] + 2432u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[17], ld32((c.r[30].w[0] + 504u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003F4840; } }
    set32(c.r[22], 0u - 1u);
    c.budget -= 1;
L_003F4820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4828u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 161u, depth + 1u); else { c.pc = 0x003F9D18u; return; } if (c.pc != 0x003F4828u) [[unlikely]] return; }
L_003F4828:
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[22].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4820u | kUnwind; return; } goto L_003F4820; } }
L_003F4840:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F47F0u | kUnwind; return; } goto L_003F47F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[23].w[0] + 60u)));  if (t) { goto L_003F4898; } }
L_003F4854:
    set32(c.r[2], ld32((c.r[23].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[23].w[0] + 60u)));  goto L_003F4898; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003F4894; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003F4870:
    set32(c.r[2], ld32((c.r[5].w[0] + 2432u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4870u | kUnwind; return; } goto L_003F4870; } }
L_003F4894:
    set32(c.r[7], ld32((c.r[23].w[0] + 60u)));
    c.budget -= 1;
L_003F4898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] >> 12);
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 2432u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[8], ld32((c.r[23].w[0] + 12u)));
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F48C4u); set32(c.r[9], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_00BD(c, 56u, depth + 1u); else { c.pc = 0x003F4D68u; return; } if (c.pc != 0x003F48C4u) [[unlikely]] return; }
L_003F48C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003F48DC; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 60u)));  goto L_003F4A38; }
L_003F48DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F48E0:
    set32(c.r[2], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] - 22720u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 2428u)));  if (t) { goto L_003F4978; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003F4978; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 2;
L_003F4908:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[21], c.r[19].w[0] + 4u);  if (t) { goto L_003F496C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 2432u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 504u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[6].d[0]; set32(c.r[16], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003F496C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003F4948:
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4948u | kUnwind; return; } goto L_003F4948; } }
L_003F496C:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4908u | kUnwind; return; } goto L_003F4908; } }
L_003F4978:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2432u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_003F49F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[20], c.r[2].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; set32(c.r[18], ld32((c.r[4].w[0] + 2428u)));  if (t) { goto L_003F49F0; } }
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], 0u - 1u);
    set32(c.r[17], ld32((c.r[22].w[0] + 504u)));
    c.budget -= 3;
L_003F49B8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[21].d[0]; set32(c.r[16], c.r[20].w[0] - 1u);  if (t) { goto L_003F49E4; } }
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_003F49C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F49D0u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 161u, depth + 1u); else { c.pc = 0x003F9D18u; return; } if (c.pc != 0x003F49D0u) [[unlikely]] return; }
L_003F49D0:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[19].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F49C8u | kUnwind; return; } goto L_003F49C8; } }
L_003F49E4:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[21].d[0]) { set32(c.r[17], ld32((c.r[22].w[0] + 504u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F49B8u | kUnwind; return; } goto L_003F49B8; }
L_003F49F0:
    set32(c.r[7], ld32((c.r[23].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[9], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 2432u)));
    set32(c.r[7], c.r[7].w[0] >> 12);
    set32(c.r[4], ld32((c.r[2].w[0] + 504u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[8], ld32((c.r[23].w[0] + 12u)));
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A20u); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F57F0u; return; } if (c.pc != 0x003F4A20u) [[unlikely]] return; }
L_003F4A20:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 60u)));  goto L_003F4A38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A34u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 129u, depth + 1u); else { c.pc = 0x003F9818u; return; } if (c.pc != 0x003F4A34u) [[unlikely]] return; }
L_003F4A34:
    set32(c.r[2], ld32((c.r[23].w[0] + 60u)));
    c.budget -= 1;
L_003F4A38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    set32(c.r[4], c.r[5].w[0] - 22720u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[23].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4AC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[4].w[0] + 1588u));  if (t) { goto L_003F4A8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4AAC; } }
L_003F4A8C:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.f[1] = c.f[1] ^ fp::kSign;
    set32(c.r[3], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
L_003F4AAC:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_003F4AC0; } }
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[23].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003F4AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F4AC4:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4B08; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] - 22720u);  goto L_003F4B0C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 436u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] - 22720u);  goto L_003F4B0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 3908u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4C80; } }
L_003F4B08:
    set32(c.r[3], c.r[5].w[0] - 22720u);
    c.budget -= 1;
L_003F4B0C:
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    st32((c.r[3].w[0] + 364u), 0u);
    st32((c.r[3].w[0] + 2480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4C70; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003F4C70; } }
    c.f[20] = 0u;
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
L_003F4B40:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4C60; } }
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[17], c.r[5].w[0] - 20104u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B74u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F4B74u) [[unlikely]] return; }
L_003F4B74:
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[2] ^ fp::kSign;  goto L_003F4B88; }
L_003F4B88:
    c.f[0] = ld32((c.r[17].w[0] + 560u));
    c.f[3] = c.f[2];
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    set32(c.r[2], ld32((c.r[17].w[0] + 556u)));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    st32((c.r[29].w[0] + 4u), c.f[2]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 556u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 560u), c.f[0]);  if (t) { goto L_003F4BE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[17].w[0] + 564u), c.f[3]);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.f[0] = ld32((c.r[2].w[0] + 2332u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4BFC; } }
    c.f[0] = ld32((c.r[2].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 2332u), c.f[3]);  if (t) { goto L_003F4BF0; } }
L_003F4BE4:
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = ld32((c.r[20].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
L_003F4BF0:
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[18], 0u + 1u);  goto L_003F4BFC; }
L_003F4BFC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0])));  goto L_003F4C64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003F4C0Cu) [[unlikely]] return; }
L_003F4C0C:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C28u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F4C28u) [[unlikely]] return; }
L_003F4C28:
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[23].w[0] + 56u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[20].w[0] + 2316u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C48u); set32(c.r[5], c.r[22].w[0] - 4080u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F4C48u) [[unlikely]] return; }
L_003F4C48:
    set32(c.r[4], c.r[21].w[0] - 3976u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003F4C60u) [[unlikely]] return; }
L_003F4C60:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003F4C64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4B40u | kUnwind; return; } goto L_003F4B40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F4C70:
    set32(c.r[3], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2480u)));
    st32((c.r[3].w[0] + 364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 4;
L_003F4C80:
    set32(c.r[18], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F4D20; } }
    c.f[12] = ld32((c.r[23].w[0] + 8u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 3968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CA8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F4CA8u) [[unlikely]] return; }
L_003F4CA8:
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[23].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F4CBCu) [[unlikely]] return; }
L_003F4CBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F4D04; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 2;
L_003F4CD0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CE4u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F4CE4u) [[unlikely]] return; }
L_003F4CE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CF4u); set32(c.r[5], c.r[18].w[0] - 3920u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F4CF4u) [[unlikely]] return; }
L_003F4CF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[23].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4CD0u | kUnwind; return; } goto L_003F4CD0; }
L_003F4D04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[5], c.r[5].w[0] - 3912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D1Cu); set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F4D1Cu) [[unlikely]] return; }
L_003F4D1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F4D20:
    set32(c.r[3], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2240u)));
    c.budget -= 4;
    { const bool t = c.r[23].d[0] != c.r[2].d[0]; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003F4D38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_003F4D38:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F4D68:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003F4E14; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 2u);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DE8u); st32((c.r[17].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F4DE8u) [[unlikely]] return; }
L_003F4DE8:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), 0u);  if (t) { goto L_003F534C; } }
L_003F4E14:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003F4FC8; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F00u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F4F00u) [[unlikely]] return; }
L_003F4F00:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[6], 0u + 1u);
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[5], 0u - 1u);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[3], c.r[16].w[0] + 8u);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], 0u + 2u);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.f[6] = ld32((c.r[2].w[0] - 21120u));
    c.budget -= 20;
L_003F4F50:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_003F4FB8; }
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[1]));
    c.budget -= 17;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.r[6].w[0]);  goto L_003F534C; }
    c.f[0] = c.f[6] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.r[6].w[0]);  goto L_003F534C; }
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_003F4FB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4F50u | kUnwind; return; } goto L_003F4F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0])));  if (t) { goto L_003F5350; } }
L_003F4FC8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_003F5350; }
    set32(c.r[10], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[9] = ld32((c.r[10].w[0] + 12u));
    c.f[10] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[9].w[0] + 12u));
    c.f[9] = fp::sub(c.f[9], c.f[0]);
    c.f[3] = ld32((c.r[9].w[0] + 8u));
    c.f[10] = fp::sub(c.f[10], c.f[4]);
    c.f[6] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.f[7] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[11] = fp::mul(c.f[9], c.f[3]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    c.f[8] = fp::mul(c.f[10], c.f[2]);
    c.f[4] = ld32((c.r[9].w[0] + 4u));
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[9] = fp::mul(c.f[9], c.f[10]);
    c.f[8] = fp::sub(c.f[8], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.f[5] = fp::sub(c.f[5], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[9]);
    c.f[4] = fp::sub(c.f[4], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[9] = ld32((c.r[10].w[0] + 12u));
    c.f[10] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[9].w[0] + 12u));
    c.f[9] = fp::sub(c.f[9], c.f[0]);
    c.f[3] = ld32((c.r[9].w[0] + 8u));
    c.f[10] = fp::sub(c.f[10], c.f[4]);
    c.f[6] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[11] = fp::mul(c.f[9], c.f[3]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[8] = fp::mul(c.f[10], c.f[2]);
    c.f[4] = ld32((c.r[9].w[0]));
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[9] = fp::mul(c.f[9], c.f[10]);
    c.f[8] = fp::sub(c.f[8], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.f[5] = fp::sub(c.f[5], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[9]);
    c.f[4] = fp::sub(c.f[4], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[9] = ld32((c.r[10].w[0] + 12u));
    c.f[10] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[9].w[0] + 12u));
    c.f[9] = fp::sub(c.f[9], c.f[0]);
    c.f[3] = ld32((c.r[9].w[0] + 4u));
    c.f[10] = fp::sub(c.f[10], c.f[4]);
    c.f[6] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[11] = fp::mul(c.f[9], c.f[3]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[8] = fp::mul(c.f[10], c.f[2]);
    c.f[4] = ld32((c.r[9].w[0]));
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[9] = fp::mul(c.f[9], c.f[10]);
    c.f[8] = fp::sub(c.f[8], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.f[5] = fp::sub(c.f[5], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[9]);
    c.f[4] = fp::sub(c.f[4], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[10] = ld32((c.r[2].w[0] + 4u));
    c.f[9] = ld32((c.r[10].w[0] + 8u));
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    c.f[10] = fp::sub(c.f[10], c.f[4]);
    c.f[3] = ld32((c.r[9].w[0] + 4u));
    c.f[9] = fp::sub(c.f[9], c.f[0]);
    c.f[6] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[11] = fp::mul(c.f[9], c.f[3]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[8] = fp::mul(c.f[10], c.f[2]);
    c.f[4] = ld32((c.r[9].w[0]));
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[8] = fp::sub(c.f[8], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[11]);
    c.f[9] = fp::mul(c.f[9], c.f[10]);
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.f[5] = fp::sub(c.f[5], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[9]);
    c.f[4] = fp::sub(c.f[4], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 167;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F526Cu); st32((c.r[17].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F526Cu) [[unlikely]] return; }
L_003F526C:
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[5], 0u - 1u);
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[5] = fp::mul(c.f[5], c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], 0u + 3u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.f[6] = ld32((c.r[2].w[0] - 21120u));
    c.budget -= 23;
L_003F52C8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_003F5344; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[5] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[1]));
    c.budget -= 21;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.r[6].w[0]);  goto L_003F534C; }
    c.f[0] = c.f[6] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_003F5344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[6].w[0]);  if (t) { goto L_003F534C; } }
L_003F5344:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F52C8u | kUnwind; return; } goto L_003F52C8; } }
L_003F534C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003F5350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F5374; } }
    set32(c.r[2], c.r[2].w[0] - 20104u);
    set32(c.r[3], ld32((c.r[2].w[0] + 524u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 532u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 524u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 532u), c.r[4].w[0]);
    c.budget -= 7;
L_003F5374:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F5398:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = 0u;
    set32(c.r[3], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[6].w[0] - 22720u);  if (t) { goto L_003F53F4; } }
    c.budget -= 1;
L_003F53D0:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F53D0u | kUnwind; return; } goto L_003F53D0; } }
    set32(c.r[16], c.r[6].w[0] - 22720u);
    c.budget -= 1;
L_003F53F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[20];  if (t) { goto L_003F5440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5408u);  if (depth < kMaxDepth) unit_00BE(c, 157u, depth + 1u); else { c.pc = 0x003F9C80u; return; } if (c.pc != 0x003F5408u) [[unlikely]] return; }
L_003F5408:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 368u));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[0] = c.f[20];
    c.budget -= 14;
L_003F5440:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5458:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5478u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F5478u) [[unlikely]] return; }
L_003F5478:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] - 22720u);  if (t) { goto L_003F54AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 4272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F549Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F549Cu) [[unlikely]] return; }
L_003F549C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F54ACu) [[unlikely]] return; }
L_003F54AC:
    set32(c.r[16], c.r[16].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54B8u); set32(c.r[4], ld32((c.r[16].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F54B8u) [[unlikely]] return; }
L_003F54B8:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F5544; } }
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_003F54D0:
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[8].w[0] + c.r[2].w[0]);
    c.f[2] = c.r[18].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003F5524; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_003F5524; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003F5500:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5500u | kUnwind; return; } goto L_003F5500; } }
L_003F5524:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 504u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F54D0u | kUnwind; return; } goto L_003F54D0; } }
L_003F5544:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F5560:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F55CC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003F55CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 2;
L_003F55B0:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F55B0u | kUnwind; return; } goto L_003F55B0; } }
L_003F55CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F5604; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003F5604; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_003F55E8:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F55E8u | kUnwind; return; } goto L_003F55E8; } }
L_003F5604:
    c.f[20] = 0u;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = c.f[20];  if (t) { goto L_003F5694; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 8u);  if (t) { goto L_003F5694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[17], c.r[2].w[0] - 20104u);
    c.budget -= 4;
L_003F5630:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003F568C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F565Cu); set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F565Cu) [[unlikely]] return; }
L_003F565C:
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003F5688; } }
L_003F5678:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[0];  goto L_003F5688; }
L_003F5688:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F568C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5630u | kUnwind; return; } goto L_003F5630; } }
L_003F5694:
    st32((c.r[20].w[0]), c.f[20]);
    c.f[0] = c.f[21];
    c.f[20] = c.f[20] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[21].w[0]), c.f[21]);  if (t) { goto L_003F56B4; } }
    c.f[0] = c.f[20];
    c.budget -= 1;
L_003F56B4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F56E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F56F4u) [[unlikely]] return; }
L_003F56F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F5700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[7], c.r[3].w[0] - 20208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 2200u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 24;
    { const bool t = c.r[6].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F577C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[7].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003F5788; } }
L_003F577C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5784u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F5784u) [[unlikely]] return; }
L_003F5784:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F5788:
    set32(c.r[2], c.r[18].w[0] - 22720u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F57D0; } }
    c.budget -= 1;
L_003F57A8:
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F57A8u | kUnwind; return; } goto L_003F57A8; } }
L_003F57D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F57F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5848u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 193u, depth + 1u); else { c.pc = 0x003F3DF0u; return; } if (c.pc != 0x003F5848u) [[unlikely]] return; }
L_003F5848:
    set32(c.r[5], c.r[16].w[0] - 2u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[9], c.r[29].w[0] + 4u);  if (t) { goto L_003F589C; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    c.f[1] = 0u;
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
L_003F5868:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003F5890; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003F5890:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5868u | kUnwind; return; } goto L_003F5868; } }
L_003F589C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F58D8; } }
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 532u)));
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F58D0u); st32((c.r[3].w[0] + 532u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 187u, depth + 1u); else { c.pc = 0x003F3B90u; return; } if (c.pc != 0x003F58D0u) [[unlikely]] return; }
L_003F58D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003F5910; } }
L_003F58D8:
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F58F0u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 187u, depth + 1u); else { c.pc = 0x003F3B90u; return; } if (c.pc != 0x003F58F0u) [[unlikely]] return; }
L_003F58F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F591C; } }
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 532u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 532u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
L_003F5910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F591C; } }
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F591C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5934u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F5934u) [[unlikely]] return; }
L_003F5934:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_003F5990; } }
    c.budget -= 1;
L_003F5968:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[2] = ld32((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[1] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st32((c.r[19].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5968u | kUnwind; return; } goto L_003F5968; } }
L_003F5990:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F59B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[29].w[0]), 0u);
    c.f[20] = 0u;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_003F5A14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59FCu); set32(c.r[5], c.r[5].w[0] - 3848u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F59FCu) [[unlikely]] return; }
L_003F59FC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F5A0Cu) [[unlikely]] return; }
L_003F5A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_003F5BA8; } }
L_003F5A14:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003F5A88; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[4].w[0] - 21076u)));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[4] = 0u;
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[4]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_003F5A7C; } }
    c.f[0] = c.f[20] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F5B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_003F5BA8; } }
L_003F5A7C:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5B34; } }
L_003F5A88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F5B48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[6] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[9] = fp::mul(c.f[6], c.f[4]);
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[6] = fp::mul(c.f[6], c.f[2]);
    c.f[2] = fp::mul(c.f[8], c.f[2]);
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[4] = fp::sub(c.f[4], c.f[2]);
    set32(c.r[2], ld32((c.r[5].w[0] - 21076u)));
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[9]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[7] = fp::mul(c.f[7], c.f[3]);
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[2] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[20] = fp::add(c.f[1], c.f[5]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[6] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_003F5B30; } }
    c.f[0] = c.f[20] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F5B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_003F5BA8; } }
L_003F5B30:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[6]));
    c.budget -= 1;
L_003F5B34:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F5BA4; } }
L_003F5B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_003F5BA4; } }
L_003F5B48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B64u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 193u, depth + 1u); else { c.pc = 0x003F3DF0u; return; } if (c.pc != 0x003F5B64u) [[unlikely]] return; }
L_003F5B64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] - 1u);  if (t) { goto L_003F5B98; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_003F5B78:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5B78u | kUnwind; return; } goto L_003F5B78; } }
L_003F5B98:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[20] = c.f[20] ^ fp::kSign;  goto L_003F5BA4; }
L_003F5BA4:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_003F5BA8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F5BC0:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = ld32((c.r[2].w[0] - 3772u));
    c.f[3] = c.f[13];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] <= 0; c.r[14].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F5CFC; } }
    set32(c.r[13], c.r[14].w[0] - 22720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[2].w[0] - 3768u));
    set32(c.r[12], c.r[6].w[0] - 1u);
    set32(c.r[15], ld32((c.r[13].w[0] + 404u)));
    c.f[4] = c.f[12];
    c.r[24].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 7;
L_003F5C00:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { set32(c.r[2], ld32((c.r[13].w[0] + 48u)));  goto L_003F5C1C; }
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[12].d[0]) { set32(c.r[2], ld32((c.r[13].w[0] + 48u)));  goto L_003F5C1C; }
    set32(c.r[10], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[3];  if (t) { goto L_003F5CD8; } }
L_003F5C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[13].w[0] + 504u)));  goto L_003F5C3C; }
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[12].d[0]) { set32(c.r[3], ld32((c.r[13].w[0] + 504u)));  goto L_003F5C3C; }
    c.f[0] = fp::add(c.f[12], c.f[12]);
    set32(c.r[10], c.r[8].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[12]);  if (t) { goto L_003F5CD8; } }
L_003F5C3C:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = c.f[4];
    c.f[1] = c.f[5];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], c.r[8].w[0] + 1u);  if (t) { goto L_003F5CAC; } }
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[11], c.r[24].w[0] - 22720u);
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 4;
L_003F5C70:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[0];  goto L_003F5C84; }
L_003F5C84:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = c.f[0];  goto L_003F5C94; }
L_003F5C94:
    set32(c.r[2], ld32((c.r[11].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5C70u | kUnwind; return; } goto L_003F5C70; } }
L_003F5CAC:
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = c.f[0];  goto L_003F5CC0; }
L_003F5CC0:
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[2];  if (t) { goto L_003F5CD8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_003F5CD8:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[13] = fp::add(c.f[13], c.f[0]);  if (t) { goto L_003F5CEC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003F5CEC:
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5C00u | kUnwind; return; } goto L_003F5C00; } }
L_003F5CFC:
    set32(c.r[2], c.r[14].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D08u); set32(c.r[4], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F95F0u; return; } if (c.pc != 0x003F5D08u) [[unlikely]] return; }
L_003F5D08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003F5D24; }
L_003F5D24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F5D30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 21104u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 3760u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] - 1616u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D70u); st32((c.r[29].w[0] + 96u), c.f[20]);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F5D70u) [[unlikely]] return; }
L_003F5D70:
    set32(c.r[2], ld32((c.r[16].w[0] + 408u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F5DC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    c.f[12] = ld32((c.r[16].w[0] + 1604u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D8Cu); c.f[13] = ld32((c.r[16].w[0] + 1612u));  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F95F0u; return; } if (c.pc != 0x003F5D8Cu) [[unlikely]] return; }
L_003F5D8C:
    c.f[2] = c.f[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 1600u), c.f[2]);  if (t) { goto L_003F5DB0; } }
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 1600u), c.f[0]);
    c.budget -= 5;
L_003F5DB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[17].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F5DC4u) [[unlikely]] return; }
L_003F5DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F5DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F810000u);
    c.r[1].d[0] = c.r[1].d[0] | 18350ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], c.r[2].w[0] - 22720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = ld32((c.r[6].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 1620u));
    c.f[3] = ld32((c.r[6].w[0] + 1604u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 364u)));
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[6].w[0] + 1628u), c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 1624u), c.f[1]);
    st32((c.r[6].w[0] + 1588u), c.f[2]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 1632u), c.f[0]);  if (t) { goto L_003F5E30; } }
    c.f[0] = ld32((c.r[6].w[0] + 368u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[6].w[0] + 1588u), c.f[0]);
    c.budget -= 3;
L_003F5E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] - 3276u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F5E74; } }
    c.f[0] = ld32((c.r[6].w[0] + 1588u));
    set32(c.r[2], ld32((c.r[6].w[0] + 364u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 40u), c.f[0]);  if (t) { goto L_003F5E74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[6].w[0] + 40u);
    set32(c.r[4], c.r[4].w[0] - 3728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F5E74u) [[unlikely]] return; }
L_003F5E74:
    set32(c.r[6], c.r[19].w[0] - 22720u);
    c.f[0] = ld32((c.r[20].w[0] - 3276u));
    c.f[1] = ld32((c.r[6].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[6].w[0] + 1600u));  goto L_003F5EC0; }
    c.f[0] = ld32((c.r[6].w[0] + 1588u));
    set32(c.r[2], ld32((c.r[6].w[0] + 364u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 44u), c.f[0]);  if (t) { goto L_003F5EBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[6].w[0] + 44u);
    set32(c.r[4], c.r[4].w[0] - 3696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F5EB8u) [[unlikely]] return; }
L_003F5EB8:
    set32(c.r[6], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F5EBC:
    c.f[0] = ld32((c.r[6].w[0] + 1600u));
    c.budget -= 1;
L_003F5EC0:
    c.f[2] = ld32((c.r[6].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 132u));
    set32(c.r[2], ld32((c.r[6].w[0] + 364u)));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[6].w[0] + 132u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 128u), c.f[2]);  if (t) { goto L_003F5F38; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F5EFC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[19].w[0] - 22720u);  goto L_003F5F10; }
L_003F5EFC:
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[4], c.r[4].w[0] - 3664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F5F0Cu) [[unlikely]] return; }
L_003F5F0C:
    set32(c.r[6], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F5F10:
    set32(c.r[2], ld32((c.r[6].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] - 22720u);  if (t) { goto L_003F5F3C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F5F3C; } }
    set32(c.r[6], c.r[6].w[0] + 132u);
    set32(c.r[4], c.r[4].w[0] - 3632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F5F38u) [[unlikely]] return; }
L_003F5F38:
    set32(c.r[16], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F5F3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[6] = c.f[0];  goto L_003F5F58; }
L_003F5F58:
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[6] = c.f[0];  goto L_003F5F6C; }
L_003F5F6C:
    c.f[2] = ld32((c.r[16].w[0] + 504u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[4] = ld32((c.r[16].w[0] + 1616u));
    c.f[6] = fp::mul(c.f[6], c.f[6]);
    c.f[0] = fp::sqrt(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[5] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 1600u));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1652u), c.f[0]);  if (t) { goto L_003F5FC0; } }
    st32((c.r[16].w[0] + 1652u), c.f[2]);
    c.budget -= 1;
L_003F5FC0:
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[2] = ld32((c.r[16].w[0] + 1600u));
    c.f[3] = ld32((c.r[16].w[0] + 1652u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 1652u), c.f[2]);  goto L_003F5FEC; }
L_003F5FEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F6008; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6008u); set32(c.r[6], c.r[16].w[0] + 1652u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6008u) [[unlikely]] return; }
L_003F6008:
    c.f[2] = ld32((c.r[16].w[0] + 1652u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[1].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 2324u));
    c.f[0] = ld32((c.r[20].w[0] - 3276u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1648u), c.f[2]);  if (t) { goto L_003F6070; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] - 22720u);  if (t) { goto L_003F6074; } }
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1600u));
    c.f[0] = fp::sqrt(c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 500u), c.r[2].w[0]);  if (t) { goto L_003F6074; } }
    st32((c.r[16].w[0] + 1648u), c.f[0]);
    c.budget -= 1;
L_003F6070:
    set32(c.r[18], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F6074:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F6090; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6090u); set32(c.r[6], c.r[18].w[0] + 1648u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6090u) [[unlikely]] return; }
L_003F6090:
    c.f[12] = ld32((c.r[18].w[0] + 2324u));
    c.f[0] = ld32((c.r[18].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F60E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60B0u); set32(c.r[16], c.r[16].w[0] - 3568u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F60B0u) [[unlikely]] return; }
L_003F60B0:
    c.f[12] = ld32((c.r[18].w[0] + 1600u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60BCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F60BCu) [[unlikely]] return; }
L_003F60BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60D0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F60D0u) [[unlikely]] return; }
L_003F60D0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F60E0u) [[unlikely]] return; }
L_003F60E0:
    c.f[1] = ld32((c.r[18].w[0] + 140u));
    c.f[0] = ld32((c.r[20].w[0] - 3276u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[19].w[0] - 22720u);  if (t) { goto L_003F6178; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 504u)));  goto L_003F610C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 1600u));  if (t) { goto L_003F6130; } }
L_003F610C:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[18].w[0] + 128u));  if (t) { goto L_003F6120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 140u), c.f[0]);  if (t) { goto L_003F6134; } }
L_003F6120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 4;
L_003F6130:
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.budget -= 1;
L_003F6134:
    set32(c.r[3], c.r[19].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F6160; } }
    c.f[0] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[3].w[0] + 140u), c.f[1]);  goto L_003F6160; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003F6160:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 3472u);
    set32(c.r[6], c.r[6].w[0] - 22580u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6174u) [[unlikely]] return; }
L_003F6174:
    set32(c.r[16], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F6178:
    c.f[20] = ld32((c.r[20].w[0] - 3276u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F61A8; } }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    set32(c.r[4], c.r[4].w[0] - 3448u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61A8u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F61A8u) [[unlikely]] return; }
L_003F61A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[19].w[0] - 22720u);  if (t) { goto L_003F6210; } }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = fp::add(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 12u), c.f[3]);  if (t) { goto L_003F61F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 12u), c.f[0]);  goto L_003F61F4; }
L_003F61F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 3424u);
    set32(c.r[6], c.r[6].w[0] - 22708u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F620Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F620Cu) [[unlikely]] return; }
L_003F620C:
    set32(c.r[18], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F6210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 1660u), c.f[1]);  if (t) { goto L_003F6238; } }
    st32((c.r[18].w[0] + 1660u), c.f[0]);
    c.budget -= 1;
L_003F6238:
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    c.f[1] = ld32((c.r[18].w[0] + 1660u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[18].w[0] + 1660u), c.f[0]);  goto L_003F6254; }
L_003F6254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6268u); set32(c.r[6], c.r[18].w[0] + 1660u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6268u) [[unlikely]] return; }
L_003F6268:
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34C00000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = ld32((c.r[18].w[0] + 140u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003F62D4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003F62D4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003F62D4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62B0u); set32(c.r[16], c.r[16].w[0] - 3392u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F62B0u) [[unlikely]] return; }
L_003F62B0:
    c.f[12] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62BCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F62BCu) [[unlikely]] return; }
L_003F62BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62D0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F62D0u) [[unlikely]] return; }
L_003F62D0:
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003F62D4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] + 1600u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[1] = c.f[0] ^ fp::kSign;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[2].w[0] + 2336u), c.f[0]);
    st32((c.r[2].w[0] + 2340u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F6308:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = 0u;
    set32(c.r[8], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[8].d[0] & 8192ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F6374; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[8], c.r[8].w[0] >> 12);
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[10], c.r[17].w[0] + 8u);
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F636Cu); set32(c.r[9], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 125u, depth + 1u); else { c.pc = 0x003F6460u; return; } if (c.pc != 0x003F636Cu) [[unlikely]] return; }
L_003F636C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003F6418; } }
L_003F6374:
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2312u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[20].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F6390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_003F639C; } }
L_003F6390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6398u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003F6398u) [[unlikely]] return; }
L_003F6398:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F639C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] - 22720u);  if (t) { goto L_003F63FC; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003F63FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[19], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003F63C0:
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ c.r[17].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 504u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 12u)));
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F63E8u); set32(c.r[10], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00BD(c, 125u, depth + 1u); else { c.pc = 0x003F6460u; return; } if (c.pc != 0x003F63E8u) [[unlikely]] return; }
L_003F63E8:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F63C0u | kUnwind; return; } goto L_003F63C0; } }
    set32(c.r[4], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003F63FC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2312u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  goto L_003F641C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6418u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003F6418u) [[unlikely]] return; }
L_003F6418:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003F641C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003F6438; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[20] = c.f[20] ^ fp::kSign;  goto L_003F6438; }
L_003F6438:
    c.f[0] = c.f[20];
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F6460:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    set32(c.r[22], ld32((c.r[2].w[0] + 2432u)));
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 22;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 2428u)));  if (t) { goto L_003F65D0; } }
    set32(c.r[11], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[18], c.r[21].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { goto L_003F65D0; } }
    set32(c.r[14], 0u - 1u);
    c.r[13].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_003F64D0:
    c.budget -= 2;
    if (c.r[11].d[0] == c.r[7].d[0]) { set32(c.r[11], ld32((c.r[6].w[0])));  goto L_003F65C8; }
    st32((c.r[13].w[0]), c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F6534; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[14].d[0]) { set32(c.r[11], ld32((c.r[6].w[0])));  goto L_003F65C8; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_003F6508:
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6508u | kUnwind; return; } goto L_003F6508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[6].w[0])));  if (t) { goto L_003F65C8; } }
L_003F6534:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[14].d[0]; c.f[3] = ld32((c.r[10].w[0]));  if (t) { goto L_003F6568; } }
    set32(c.r[12], 0u - 1u);
    c.budget -= 2;
L_003F6548:
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0]; c.f[3] = fp::add(c.f[3], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6548u | kUnwind; return; } goto L_003F6548; } }
L_003F6568:
    c.f[0] = ld32((c.r[2].w[0] + 1660u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F66A0; } }
    set32(c.r[8], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[14].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F65C4; } }
    set32(c.r[11], 0u - 1u);
    c.budget -= 1;
L_003F6590:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[9].w[0]));
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[11].d[0]; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6590u | kUnwind; return; } goto L_003F6590; } }
L_003F65C4:
    set32(c.r[11], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_003F65C8:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F64D0u | kUnwind; return; } goto L_003F64D0; } }
L_003F65D0:
    set32(c.r[17], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[17].d[0]; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F6608; } }
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 3200u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65F8u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F65F8u) [[unlikely]] return; }
L_003F65F8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F6608u) [[unlikely]] return; }
L_003F6608:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[23].w[0] - 22720u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F66B8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[4], c.r[21].w[0] << 2);  if (t) { goto L_003F6654; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[19], c.r[21].w[0] - 1u);
    c.budget -= 3;
L_003F6638:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[2].w[0] - 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6638u | kUnwind; return; } goto L_003F6638; } }
L_003F6654:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] + c.r[22].w[0]);  goto L_003F6688; }
    c.budget -= 1;
L_003F6668:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6668u | kUnwind; return; } goto L_003F6668; } }
    set32(c.r[2], c.r[4].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_003F6688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 4u), c.f[0]);  if (t) { goto L_003F66E4; } }
L_003F66A0:
    set32(c.r[3], c.r[30].w[0] - 20104u);
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[3].w[0] + 568u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 568u), c.r[2].w[0]);  if (t) { goto L_003F6720; } }
L_003F66B8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F66E4; } }
    c.budget -= 1;
L_003F66C8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F66C8u | kUnwind; return; } goto L_003F66C8; } }
L_003F66E4:
    set32(c.r[3], c.r[30].w[0] - 20104u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 188u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6704u); st32((c.r[3].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x003F59B8u; return; } if (c.pc != 0x003F6704u) [[unlikely]] return; }
L_003F6704:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = c.f[0];  if (t) { goto L_003F6714; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_003F6714:
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.f[0] = ld32((c.r[2].w[0] + 480u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 3;
L_003F6720:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F6750:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.f[0] = ld32((c.r[2].w[0] - 3128u));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.f[0]);  if (t) { goto L_003F67D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67D8u); st32((c.r[3].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F67D8u) [[unlikely]] return; }
L_003F67D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003F67E0u) [[unlikely]] return; }
L_003F67E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x003F67E8u) [[unlikely]] return; }
L_003F67E8:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 2392u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F6908; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_003F6820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003F68F4; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003F68F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[20] = 0u;
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[19], c.r[3].w[0] - 20104u);
    c.budget -= 7;
L_003F6850:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[22].w[0] + 2392u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003F68E8; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003F6878; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003F68E8; }
L_003F6878:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6894u); st32((c.r[19].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F6894u) [[unlikely]] return; }
L_003F6894:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003F68E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003F68B0u) [[unlikely]] return; }
L_003F68B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x003F68B8u) [[unlikely]] return; }
L_003F68B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0] + 4u));  if (t) { goto L_003F68E4; } }
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[21], 0u + 1u);  if (t) { goto L_003F68E4; } }
    st32((c.r[29].w[0]), c.f[1]);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F68E4:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003F68E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6850u | kUnwind; return; } goto L_003F6850; } }
L_003F68F0:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003F68F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6820u | kUnwind; return; } goto L_003F6820; }
L_003F6908:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003F6918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6924; } }
L_003F6918:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 3;
L_003F6924:
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
L_003F6958:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[17], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F69A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69A8u); set32(c.r[5], c.r[5].w[0] - 3120u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F69A8u) [[unlikely]] return; }
L_003F69A8:
    c.f[0] = 0u;
    st32((c.r[17].w[0] + 2384u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 2388u), c.f[0]);  if (t) { goto L_003F6AE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F6AE4; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
L_003F69D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003F6AD0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F6A00; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003F6AD0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F6A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6A08u); set32(c.r[17], c.r[22].w[0] - 22720u);  if (depth < kMaxDepth) unit_00BD(c, 119u, depth + 1u); else { c.pc = 0x003F6308u; return; } if (c.pc != 0x003F6A08u) [[unlikely]] return; }
L_003F6A08:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[20] = c.f[0];
    st32((c.r[16].w[0] + 16u), c.f[20]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] >> 17);  if (t) { goto L_003F6A48; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 340u)));  goto L_003F6A8C; }
    c.f[0] = ld32((c.r[17].w[0] + 2384u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2384u), c.f[0]);  if (t) { goto L_003F6A88; } }
L_003F6A48:
    c.f[0] = ld32((c.r[17].w[0] + 2384u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 2196u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6A64u); st32((c.r[17].w[0] + 2384u), c.f[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F6A64u) [[unlikely]] return; }
L_003F6A64:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 504u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 2388u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 2388u), c.f[1]);
    c.budget -= 9;
L_003F6A88:
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    c.budget -= 1;
L_003F6A8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003F6AD0; }
    set32(c.r[2], c.r[19].w[0] - 20104u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 32u), c.f[0]);  if (t) { goto L_003F6AB8; } }
    st32((c.r[2].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_003F6AB8:
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 40u), c.f[20]);  goto L_003F6ACC; }
L_003F6ACC:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003F6AD0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  goto L_003F6AE8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F69D8u | kUnwind; return; } goto L_003F69D8; }
L_003F6AE4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003F6AE8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F6B10:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F6C6C; } }
    c.f[3] = 0u;
    set32(c.r[12], 0u - 1u);
    set32(c.r[10], c.r[4].w[0] - 1u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 6;
L_003F6B30:
    c.f[2] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[12].d[0]; set32(c.r[6], ld32((c.r[2].w[0])));  if (t) { goto L_003F6B64; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6B48:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6B48u | kUnwind; return; } goto L_003F6B48; } }
L_003F6B64:
    set32(c.r[2], c.r[13].w[0] - 20104u);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 516u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 516u), c.f[2]);  goto L_003F6B84; }
L_003F6B84:
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003F6B9C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F6B9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[12].d[0]; set32(c.r[8], c.r[7].w[0] + 1u);  if (t) { goto L_003F6BC4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6BA8:
    set32(c.r[6], c.r[6].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6BA8u | kUnwind; return; } goto L_003F6BA8; } }
L_003F6BC4:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F6C5C; } }
    set32(c.r[11], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_003F6BD8:
    set32(c.r[9], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = 0u;
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[11].d[0]; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003F6C1C; } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 2;
L_003F6BF8:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6BF8u | kUnwind; return; } goto L_003F6BF8; } }
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_003F6C1C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[11].d[0]) { c.r[3].d[0] = c.r[9].d[0] + 0ull;  goto L_003F6C50; }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_003F6C28:
    set32(c.r[6], c.r[6].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6C28u | kUnwind; return; } goto L_003F6C28; } }
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_003F6C50:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6BD8u | kUnwind; return; } goto L_003F6BD8; } }
L_003F6C5C:
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6B30u | kUnwind; return; } goto L_003F6B30; } }
L_003F6C6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003F6C78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_003F6C84; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_003F6C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[7].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F6D80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] - 3056u));
    c.f[4] = ld32((c.r[2].w[0] - 3060u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[2] = 0u;
    c.budget -= 6;
L_003F6CB0:
    set32(c.r[2], ld32((c.r[7].w[0] + 1576u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[7].w[0] + 1572u)));  goto L_003F6D10; }
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[8].d[0] = 0ull + 0ull;  goto L_003F6CE0; }
L_003F6CE0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 1572u)));  goto L_003F6D10; }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = ld32((c.r[5].w[0]));  if (t) { goto L_003F6D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_003F6D08; } }
L_003F6D04:
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 1;
L_003F6D08:
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 1572u)));
    c.budget -= 2;
L_003F6D10:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[7].w[0] + 504u)));  goto L_003F6D6C; }
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[8].d[0] = 0ull + 0ull;  goto L_003F6D3C; }
L_003F6D3C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 504u)));  goto L_003F6D6C; }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = ld32((c.r[5].w[0]));  if (t) { goto L_003F6D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_003F6D64; } }
L_003F6D60:
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 1;
L_003F6D64:
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 504u)));
    c.budget -= 2;
L_003F6D6C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6CB0u | kUnwind; return; } goto L_003F6CB0; } }
L_003F6D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_003F6D88:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 524u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F6E7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 516u)));
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 528u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 524u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E00u); set32(c.r[5], c.r[5].w[0] << 2);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F6E00u) [[unlikely]] return; }
L_003F6E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 516u), c.r[2].w[0]);  if (t) { goto L_003F6E2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E1Cu); set32(c.r[5], c.r[5].w[0] - 3048u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F6E1Cu) [[unlikely]] return; }
L_003F6E1C:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F6E2Cu) [[unlikely]] return; }
L_003F6E2C:
    c.f[0] = ld32((c.r[16].w[0] + 2324u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 520u), c.r[2].w[0]);  if (t) { goto L_003F6EFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 524u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E5Cu); set32(c.r[6], ld32((c.r[16].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F5BC0u; return; } if (c.pc != 0x003F6E5Cu) [[unlikely]] return; }
L_003F6E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 2324u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 2992u);
    set32(c.r[6], c.r[16].w[0] + 2324u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6E74u) [[unlikely]] return; }
L_003F6E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] - 22720u);  if (t) { goto L_003F6F00; } }
L_003F6E7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F6EE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2308u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F6EEC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1616u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 2324u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[4].w[0] - 2992u);  if (t) { goto L_003F6EF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 2324u), c.f[0]);  if (t) { goto L_003F6EE4; } }
    st32((c.r[16].w[0] + 2324u), c.f[1]);
    c.budget -= 1;
L_003F6EE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003F6EE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F6EEC:
    set32(c.r[4], c.r[4].w[0] - 2992u);
    c.budget -= 1;
L_003F6EF0:
    set32(c.r[6], c.r[6].w[0] - 20396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6EFCu) [[unlikely]] return; }
L_003F6EFC:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003F6F00:
    set32(c.r[2], ld32((c.r[3].w[0] + 2308u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F6F94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1616u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = ld32((c.r[3].w[0] + 2324u));  if (t) { goto L_003F6F54; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[20].w[0] - 22720u);  if (t) { goto L_003F6F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6F94; } }
L_003F6F54:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[20].w[0] - 22720u);  if (t) { goto L_003F6F94; } }
L_003F6F64:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = ld32((c.r[17].w[0] + 2324u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F74u); set32(c.r[16], c.r[16].w[0] - 2984u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F6F74u) [[unlikely]] return; }
L_003F6F74:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F84u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F6F84u) [[unlikely]] return; }
L_003F6F84:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F6F94u) [[unlikely]] return; }
L_003F6F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F9Cu);  if (depth < kMaxDepth) unit_00BE(c, 157u, depth + 1u); else { c.pc = 0x003F9C80u; return; } if (c.pc != 0x003F6F9Cu) [[unlikely]] return; }
L_003F6F9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2832u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003F6FB4u) [[unlikely]] return; }
L_003F6FB4:
    set32(c.r[2], c.r[20].w[0] - 22720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 2324u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 512u)));
    c.f[21] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 524u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[17], ld32((c.r[2].w[0] + 516u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.f[20] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003F702C; } }
    set32(c.r[19], 0u - 1u);
    c.budget -= 2;
L_003F6FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7000u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 157u, depth + 1u); else { c.pc = 0x003F9C80u; return; } if (c.pc != 0x003F7000u) [[unlikely]] return; }
L_003F7000:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[19].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6FF8u | kUnwind; return; } goto L_003F6FF8; } }
L_003F702C:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F705C; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 516u)));
    c.f[0] = ld32((c.r[2].w[0] - 2816u));
    set32(c.r[4], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 512u)));
    st32((c.r[3].w[0] + 2460u), c.f[0]);
    st32((c.r[3].w[0] + 2468u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F705Cu); st32((c.r[3].w[0] + 2464u), c.f[0]);  if (depth < kMaxDepth) unit_00BE(c, 165u, depth + 1u); else { c.pc = 0x003F9E88u; return; } if (c.pc != 0x003F705Cu) [[unlikely]] return; }
L_003F705C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F7088:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2644u));
    set32(c.r[2], ld32((c.r[16].w[0] + 1568u)));
    st32((c.r[16].w[0] + 1616u), c.f[0]);
    st32((c.r[16].w[0] + 2332u), 0u);
    st32((c.r[16].w[0] + 1604u), 0u);
    st32((c.r[16].w[0] + 1612u), 0u);
    st32((c.r[16].w[0] + 2340u), 0u);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2404u), 0u);  if (t) { goto L_003F70FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 2400u), c.r[2].w[0]);
    c.budget -= 2;
L_003F70FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7104u); set32(c.r[4], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003F7104u) [[unlikely]] return; }
L_003F7104:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F72F0; } }
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F7118:
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F712C; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F712C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 504u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[7].w[0] << 2);
    set32(c.r[11], c.r[19].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[7].w[0] + 1u);  if (t) { goto L_003F71C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], c.r[2].w[0] - 22720u);
    set32(c.r[9], ld32((c.r[10].w[0] + 68u)));
    c.budget -= 4;
L_003F7168:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[9].d[0]; set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_003F71A8; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);  if (t) { goto L_003F7194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F71A8; } }
L_003F7194:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[18].d[0] = c.r[4].d[0] + 0ull;  goto L_003F71A8; }
L_003F71A8:
    set32(c.r[2], ld32((c.r[10].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7168u | kUnwind; return; } goto L_003F7168; } }
L_003F71C0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[11].d[0]; set32(c.r[3], c.r[23].w[0] - 22720u);  if (t) { goto L_003F71E4; } }
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[21].w[0] + 1636u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[21].w[0] + 1608u), c.f[1]);
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 7;
L_003F71E4:
    set32(c.r[2], ld32((c.r[3].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);  if (t) { goto L_003F7200; } }
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[11].d[0]) { set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);  goto L_003F7204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[3].w[0] + 1616u));  if (t) { goto L_003F7284; } }
L_003F7200:
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_003F7204:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = c.f[1];  if (t) { goto L_003F7224; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_003F7224:
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003F7258; } }
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[0];  goto L_003F7248; }
L_003F7248:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = c.f[2];  goto L_003F7258; }
L_003F7258:
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.f[1] = ld32((c.r[2].w[0] + 1616u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 1616u), c.f[2]);  goto L_003F7284; }
L_003F7284:
    set32(c.r[16], c.r[23].w[0] - 22720u);
    c.f[0] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 1604u), c.f[3]);  goto L_003F729C; }
L_003F729C:
    c.f[0] = ld32((c.r[16].w[0] + 1612u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72B0u); st32((c.r[16].w[0] + 1612u), c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003F72B0u) [[unlikely]] return; }
L_003F72B0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72BCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003F72BCu) [[unlikely]] return; }
L_003F72BC:
    c.f[0] = ld32((c.r[16].w[0] + 1612u));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = c.r[7].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1644u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7118u | kUnwind; return; } goto L_003F7118; } }
L_003F72F0:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[29].w[0])));  if (t) { goto L_003F7310; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7310u); set32(c.r[5], c.r[5].w[0] - 2696u);  if (depth < kMaxDepth) unit_00BE(c, 141u, depth + 1u); else { c.pc = 0x003F9A10u; return; } if (c.pc != 0x003F7310u) [[unlikely]] return; }
L_003F7310:
    set32(c.r[2], ld32((c.r[29].w[0])));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F7348:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[21] = ld32((c.r[3].w[0] - 2336u));
    set32(c.r[4], ld32((c.r[21].w[0])));
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73B0u); c.f[20] = ld32((c.r[2].w[0] - 2340u));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F73B0u) [[unlikely]] return; }
L_003F73B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 20u), 0u);  if (t) { goto L_003F757C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73C8u); set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F73C8u) [[unlikely]] return; }
L_003F73C8:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F7438; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F74BC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003F74BC; } }
    c.budget -= 1;
L_003F73F0:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F740C; } }
    c.f[20] = c.f[0];
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F740C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003F7428; }
    c.f[21] = c.f[0];
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_003F7428:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F73F0u | kUnwind; return; } goto L_003F73F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F74BC; } }
L_003F7438:
    set32(c.r[16], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F74BC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 2;
L_003F7468:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 504u)));  goto L_003F74A4; }
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F748C; } }
    c.f[20] = c.f[0];
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F748C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[4].w[0] + 504u)));  if (t) { goto L_003F74A4; } }
    c.f[21] = c.f[0];
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F74A4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7468u | kUnwind; return; } goto L_003F7468; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F74BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74C4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 273u, depth + 1u); else { c.pc = 0x003EEFA0u; return; } if (c.pc != 0x003F74C4u) [[unlikely]] return; }
L_003F74C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74CCu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F74CCu) [[unlikely]] return; }
L_003F74CC:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F74E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74E0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 273u, depth + 1u); else { c.pc = 0x003EEFA0u; return; } if (c.pc != 0x003F74E0u) [[unlikely]] return; }
L_003F74E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74E8u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F74E8u) [[unlikely]] return; }
L_003F74E8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F757C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7500u); set32(c.r[4], c.r[4].w[0] - 2640u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003F7500u) [[unlikely]] return; }
L_003F7500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[3].w[0] - 19340u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003F755C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7530u); set32(c.r[16], c.r[16].w[0] - 2608u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F7530u) [[unlikely]] return; }
L_003F7530:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7544u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F7544u) [[unlikely]] return; }
L_003F7544:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7554u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F7554u) [[unlikely]] return; }
L_003F7554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[22].w[0] + 1u);  if (t) { goto L_003F7580; } }
L_003F755C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F756Cu); set32(c.r[5], c.r[5].w[0] - 2504u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F756Cu) [[unlikely]] return; }
L_003F756C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F757Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F757Cu) [[unlikely]] return; }
L_003F757C:
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_003F7580:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003F78FC; } }
    c.f[21] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
L_003F75A0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), 0u);
    c.f[20] = ld32((c.r[4].w[0] - 2340u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003F76FC; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 8u);  if (t) { goto L_003F76FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[30], c.r[4].w[0] - 20104u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.budget -= 5;
L_003F75D8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75E8u); set32(c.r[23], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003F75E8u) [[unlikely]] return; }
L_003F75E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003F76F4; }
    set32(c.r[2], ld32((c.r[30].w[0] + 188u)));
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[22].w[0] + 2428u)));
    st32((c.r[30].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], ld32((c.r[22].w[0] + 2432u)));  if (t) { goto L_003F7688; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[3].w[0] + 8u);  if (t) { goto L_003F7688; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[11], 0u - 1u);  if (t) { goto L_003F7688; } }
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_003F7630:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[11].d[0]; set32(c.r[8], c.r[9].w[0] + 4u);  if (t) { goto L_003F7674; } }
    set32(c.r[10], 0u - 1u);
    c.budget -= 1;
L_003F7650:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[10].d[0]; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7650u | kUnwind; return; } goto L_003F7650; } }
L_003F7674:
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F7688; } }
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[17].d[0]) { st32((c.r[7].w[0]), c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7630u | kUnwind; return; } goto L_003F7630; }
L_003F7688:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F76B4; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[3].w[0] - 3272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76A4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F76A4u) [[unlikely]] return; }
L_003F76A4:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F76B4u) [[unlikely]] return; }
L_003F76B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x003F59B8u; return; } if (c.pc != 0x003F76C4u) [[unlikely]] return; }
L_003F76C4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[0] ^ fp::kSign;  goto L_003F76D4; }
L_003F76D4:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003F76F0; } }
    c.f[20] = c.f[0];
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 3;
L_003F76F0:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003F76F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[23].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F75D8u | kUnwind; return; } goto L_003F75D8; } }
L_003F76FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003F7710; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F78A8; } }
L_003F7710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[4].w[0] + 760u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 20104u);
    st32((c.r[4].w[0] + 760u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[20], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F78A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[19], c.r[2].w[0] - 22720u);
    set32(c.r[23], c.r[3].w[0] - 20104u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 6;
L_003F7770:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 504u)));  goto L_003F7890; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7784u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003F7784u) [[unlikely]] return; }
L_003F7784:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 504u)));  goto L_003F7890; }
    set32(c.r[2], ld32((c.r[23].w[0] + 188u)));
    c.r[22].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 2428u)));
    st32((c.r[23].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], ld32((c.r[19].w[0] + 2432u)));  if (t) { goto L_003F7828; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[3].w[0] + 8u);  if (t) { goto L_003F7828; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[11], 0u - 1u);  if (t) { goto L_003F7828; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_003F77D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[11].d[0]; set32(c.r[8], c.r[9].w[0] + 4u);  if (t) { goto L_003F7814; } }
    set32(c.r[10], 0u - 1u);
    c.budget -= 1;
L_003F77F0:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[10].d[0]; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F77F0u | kUnwind; return; } goto L_003F77F0; } }
L_003F7814:
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F7828; } }
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[17].d[0]) { st32((c.r[7].w[0]), c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F77D0u | kUnwind; return; } goto L_003F77D0; }
L_003F7828:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[30].w[0] - 3272u);  if (t) { goto L_003F7850; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7840u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F7840u) [[unlikely]] return; }
L_003F7840:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7850u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F7850u) [[unlikely]] return; }
L_003F7850:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7860u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x003F59B8u; return; } if (c.pc != 0x003F7860u) [[unlikely]] return; }
L_003F7860:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[0] ^ fp::kSign;  goto L_003F7870; }
L_003F7870:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003F788C; } }
    c.f[20] = c.f[0];
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 3;
L_003F788C:
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 1;
L_003F7890:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7770u | kUnwind; return; } goto L_003F7770; }
L_003F78A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003F78A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003F78DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[5], c.r[2].w[0] - 2408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78C8u); set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F78C8u) [[unlikely]] return; }
L_003F78C8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F78D8u) [[unlikely]] return; }
L_003F78D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003F78DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78E4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003F78E4u) [[unlikely]] return; }
L_003F78E4:
    set32(c.r[17], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F75A0u | kUnwind; return; } goto L_003F75A0; }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003F78FC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F7930:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 128u), c.f[20]);  if (t) { goto L_003F79E4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F7978; } }
    set32(c.r[3], c.r[21].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2328u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[3].w[0] + 1600u));  goto L_003F799C; }
L_003F7978:
    set32(c.r[2], c.r[21].w[0] - 22720u);
    c.f[1] = ld32((c.r[2].w[0] + 1600u));
    c.f[0] = ld32((c.r[2].w[0] + 2332u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003F79A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_003F79A4; } }
L_003F799C:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_003F79A0:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 1;
L_003F79A4:
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] - 22720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 2332u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F79E4; } }
    c.f[0] = ld32((c.r[3].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 7;
L_003F79E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003F7AC8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F7A6C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.f[20] = ld32((c.r[2].w[0] - 2328u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F7A5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 8u);  if (t) { goto L_003F7A5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 20104u);
    c.budget -= 3;
L_003F7A20:
    set32(c.r[2], ld32((c.r[17].w[0] + 204u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A3Cu); set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F7A3Cu) [[unlikely]] return; }
L_003F7A3C:
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_003F7A50; }
L_003F7A50:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7A20u | kUnwind; return; } goto L_003F7A20; } }
L_003F7A5C:
    set32(c.r[2], c.r[21].w[0] - 22720u);
    c.f[0] = ld32((c.r[2].w[0] + 1600u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_003F7A88; } }
L_003F7A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 1600u));
    c.f[0] = ld32((c.r[3].w[0] + 2340u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
L_003F7A88:
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], c.r[21].w[0] - 22720u);
    c.f[0] = ld32((c.r[20].w[0] - 2332u));
    c.f[2] = ld32((c.r[2].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003F7AC8; } }
    c.f[0] = ld32((c.r[2].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[1]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 8;
L_003F7AC8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F7AF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[17].w[0] + 508u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.f[20] = 0u;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F7B40u) [[unlikely]] return; }
L_003F7B40:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B54u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 203u, depth + 1u); else { c.pc = 0x0020B678u; return; } if (c.pc != 0x003F7B54u) [[unlikely]] return; }
L_003F7B54:
    set32(c.r[2], ld32((c.r[17].w[0] + 508u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003F7BC4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.f[20];
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 1584u)));
    c.budget -= 4;
L_003F7B70:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[4].w[0] + 508u)));  goto L_003F7BB4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 1580u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_003F7BB0; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_003F7BB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 508u)));
    c.budget -= 1;
L_003F7BB4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 1584u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7B70u | kUnwind; return; } goto L_003F7B70; }
L_003F7BC4:
    set32(c.r[17], c.r[21].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F7BEC; } }
    set32(c.r[3], c.r[19].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[4].d[0];
    c.budget -= 6;
L_003F7BEC:
    set32(c.r[7], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[7].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F7C18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 2272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C08u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F7C08u) [[unlikely]] return; }
L_003F7C08:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F7C18u) [[unlikely]] return; }
L_003F7C18:
    set32(c.r[7], ld32((c.r[22].w[0] + 8208u)));
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C3Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7C3Cu) [[unlikely]] return; }
L_003F7C3C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 508u)));  goto L_003F7C70; }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C5Cu); set32(c.r[5], c.r[5].w[0] - 2184u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F7C5Cu) [[unlikely]] return; }
L_003F7C5C:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F7C6Cu) [[unlikely]] return; }
L_003F7C6C:
    set32(c.r[5], ld32((c.r[17].w[0] + 508u)));
    c.budget -= 1;
L_003F7C70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 516u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C90u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 151u, depth + 1u); else { c.pc = 0x003F9B00u; return; } if (c.pc != 0x003F7C90u) [[unlikely]] return; }
L_003F7C90:
    set32(c.r[16], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 508u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 1584u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CB8u); c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 151u, depth + 1u); else { c.pc = 0x003F9B00u; return; } if (c.pc != 0x003F7CB8u) [[unlikely]] return; }
L_003F7CB8:
    set32(c.r[5], ld32((c.r[17].w[0] + 508u)));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 1580u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], 0u + 1u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CDCu); c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 151u, depth + 1u); else { c.pc = 0x003F9B00u; return; } if (c.pc != 0x003F7CDCu) [[unlikely]] return; }
L_003F7CDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[21].w[0] - 22720u);  if (t) { goto L_003F7D38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 492u)));  goto L_003F7D18; }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D04u); set32(c.r[5], c.r[5].w[0] - 2128u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F7D04u) [[unlikely]] return; }
L_003F7D04:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F7D14u) [[unlikely]] return; }
L_003F7D14:
    set32(c.r[6], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 1;
L_003F7D18:
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 508u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D34u); c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 151u, depth + 1u); else { c.pc = 0x003F9B00u; return; } if (c.pc != 0x003F7D34u) [[unlikely]] return; }
L_003F7D34:
    set32(c.r[16], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003F7D38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 508u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D48u); set32(c.r[5], c.r[5].w[0] + 1u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003F7D48u) [[unlikely]] return; }
L_003F7D48:
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[22].w[0] + 8208u)));  if (t) { goto L_003F7D6C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D6Cu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7D6Cu) [[unlikely]] return; }
L_003F7D6C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[16].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 516u), c.r[20].w[0]);  if (t) { goto L_003F7ECC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F7EC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] - 2u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_003F7DD4; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 3;
L_003F7DB8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7DB8u | kUnwind; return; } goto L_003F7DB8; } }
L_003F7DD4:
    set32(c.r[3], c.r[21].w[0] - 22720u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 512u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[21].w[0] - 22720u);  goto L_003F7E60; }
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], 0u - 1u);
    set32(c.r[2], ld32((c.r[9].w[0] + 504u)));
    c.budget -= 3;
L_003F7DF8:
    c.f[3] = 0u;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { goto L_003F7E40; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 4;
L_003F7E18:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[2] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[2]);
    st32((c.r[2].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7E18u | kUnwind; return; } goto L_003F7E18; } }
L_003F7E40:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    st32((c.r[6].w[0]), c.f[3]);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_003F7E54; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_003F7E54:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[8].d[0]) { set32(c.r[2], ld32((c.r[9].w[0] + 504u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7DF8u | kUnwind; return; } goto L_003F7DF8; }
    set32(c.r[4], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003F7E60:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F7E98; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F7E78:
    c.f[1] = ld32((c.r[3].w[0] + 512u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7E78u | kUnwind; return; } goto L_003F7E78; } }
L_003F7E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], c.r[21].w[0] - 22720u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_003F7ECC; } }
L_003F7EC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7ECCu); set32(c.r[4], ld32((c.r[16].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BE(c, 165u, depth + 1u); else { c.pc = 0x003F9E88u; return; } if (c.pc != 0x003F7ECCu) [[unlikely]] return; }
L_003F7ECC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F7EF8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[17], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F7FB8; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8208u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], ld32((c.r[17].w[0] + 516u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7F6Cu) [[unlikely]] return; }
L_003F7F6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_003F7FA0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 3904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F8Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F7F8Cu) [[unlikely]] return; }
L_003F7F8C:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F7F9Cu) [[unlikely]] return; }
L_003F7F9C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003F7FA0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x003F7FACu) [[unlikely]] return; }
L_003F7FAC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 516u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 3;
L_003F7FB8:
    set32(c.r[2], c.r[22].w[0] - 22720u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FD0u); set32(c.r[5], ld32((c.r[2].w[0] + 512u)));  if (depth < kMaxDepth) unit_00BD(c, 246u, depth + 1u); else { c.pc = 0x003F7FF8u; return; } if (c.pc != 0x003F7FD0u) [[unlikely]] return; }
L_003F7FD0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F7FF8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_00BE(c, 1u, depth);
}

}
