#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC00C;
    case 3u: goto L_002BC03C;
    case 4u: goto L_002BC0B0;
    case 5u: goto L_002BC0BC;
    case 6u: goto L_002BC0F8;
    case 7u: goto L_002BC128;
    case 8u: goto L_002BC17C;
    case 9u: goto L_002BC1C8;
    case 10u: goto L_002BC1E0;
    case 11u: goto L_002BC2F0;
    case 12u: goto L_002BC318;
    case 13u: goto L_002BC40C;
    case 14u: goto L_002BC42C;
    case 15u: goto L_002BC44C;
    case 16u: goto L_002BC470;
    case 17u: goto L_002BC48C;
    case 18u: goto L_002BC4A8;
    case 19u: goto L_002BC4F8;
    case 20u: goto L_002BC544;
    case 21u: goto L_002BC568;
    case 22u: goto L_002BC5B4;
    case 23u: goto L_002BC5D0;
    case 24u: goto L_002BC674;
    case 25u: goto L_002BC6A4;
    case 26u: goto L_002BC700;
    case 27u: goto L_002BC74C;
    case 28u: goto L_002BC798;
    case 29u: goto L_002BC7B0;
    case 30u: goto L_002BC7C0;
    case 31u: goto L_002BC7D0;
    case 32u: goto L_002BC7E8;
    case 33u: goto L_002BC800;
    case 34u: goto L_002BC818;
    case 35u: goto L_002BC830;
    case 36u: goto L_002BC848;
    case 37u: goto L_002BC860;
    case 38u: goto L_002BC880;
    case 39u: goto L_002BC898;
    case 40u: goto L_002BC8B0;
    case 41u: goto L_002BC8C8;
    case 42u: goto L_002BC8E0;
    case 43u: goto L_002BC8F8;
    case 44u: goto L_002BC910;
    case 45u: goto L_002BC928;
    case 46u: goto L_002BC940;
    case 47u: goto L_002BC960;
    case 48u: goto L_002BC978;
    case 49u: goto L_002BC990;
    case 50u: goto L_002BC9A8;
    case 51u: goto L_002BC9C0;
    case 52u: goto L_002BC9E8;
    case 53u: goto L_002BCA10;
    case 54u: goto L_002BCA2C;
    case 55u: goto L_002BCA40;
    case 56u: goto L_002BCA78;
    case 57u: goto L_002BCAB8;
    case 58u: goto L_002BCAD8;
    case 59u: goto L_002BCAE8;
    case 60u: goto L_002BCB20;
    case 61u: goto L_002BCBC8;
    case 62u: goto L_002BCDC0;
    case 63u: goto L_002BCE20;
    case 64u: goto L_002BCE90;
    case 65u: goto L_002BCEA0;
    case 66u: goto L_002BCEA8;
    case 67u: goto L_002BCF14;
    case 68u: goto L_002BCF2C;
    case 69u: goto L_002BCF48;
    case 70u: goto L_002BCF6C;
    case 71u: goto L_002BCF80;
    case 72u: goto L_002BCF98;
    case 73u: goto L_002BCFB8;
    case 74u: goto L_002BD050;
    case 75u: goto L_002BD070;
    case 76u: goto L_002BD118;
    case 77u: goto L_002BD144;
    case 78u: goto L_002BD150;
    case 79u: goto L_002BD17C;
    case 80u: goto L_002BD190;
    case 81u: goto L_002BD1EC;
    case 82u: goto L_002BD1F8;
    case 83u: goto L_002BD218;
    case 84u: goto L_002BD2A0;
    case 85u: goto L_002BD348;
    case 86u: goto L_002BD3CC;
    case 87u: goto L_002BD3D8;
    case 88u: goto L_002BD4A8;
    case 89u: goto L_002BD4D0;
    case 90u: goto L_002BD50C;
    case 91u: goto L_002BD520;
    case 92u: goto L_002BD578;
    case 93u: goto L_002BD588;
    case 94u: goto L_002BD5C4;
    case 95u: goto L_002BD600;
    case 96u: goto L_002BD610;
    case 97u: goto L_002BD64C;
    case 98u: goto L_002BD674;
    case 99u: goto L_002BD6B0;
    case 100u: goto L_002BD870;
    case 101u: goto L_002BD8B0;
    case 102u: goto L_002BD908;
    case 103u: goto L_002BD96C;
    case 104u: goto L_002BD984;
    case 105u: goto L_002BD9B4;
    case 106u: goto L_002BD9DC;
    case 107u: goto L_002BDA10;
    case 108u: goto L_002BDA64;
    case 109u: goto L_002BDAE8;
    case 110u: goto L_002BDB0C;
    case 111u: goto L_002BDB7C;
    case 112u: goto L_002BDB98;
    case 113u: goto L_002BDBB8;
    case 114u: goto L_002BDBD4;
    case 115u: goto L_002BDBF8;
    case 116u: goto L_002BDC38;
    case 117u: goto L_002BDC60;
    case 118u: goto L_002BDD78;
    case 119u: goto L_002BDD9C;
    case 120u: goto L_002BDDEC;
    case 121u: goto L_002BDE00;
    case 122u: goto L_002BDE5C;
    case 123u: goto L_002BDE80;
    case 124u: goto L_002BDE94;
    case 125u: goto L_002BDEA4;
    case 126u: goto L_002BDEC8;
    case 127u: goto L_002BDEF0;
    case 128u: goto L_002BDF58;
    case 129u: goto L_002BDFA8;
    case 130u: goto L_002BE03C;
    case 131u: goto L_002BE160;
    case 132u: goto L_002BE174;
    case 133u: goto L_002BE1C8;
    case 134u: goto L_002BE1E4;
    case 135u: goto L_002BE204;
    case 136u: goto L_002BE22C;
    case 137u: goto L_002BE24C;
    case 138u: goto L_002BE268;
    case 139u: goto L_002BE298;
    case 140u: goto L_002BE2CC;
    case 141u: goto L_002BE310;
    case 142u: goto L_002BE3EC;
    case 143u: goto L_002BE408;
    case 144u: goto L_002BE53C;
    case 145u: goto L_002BED4C;
    case 146u: goto L_002BEDA4;
    case 147u: goto L_002BEDD0;
    case 148u: goto L_002BEDFC;
    case 149u: goto L_002BEE2C;
    case 150u: goto L_002BEEE0;
    case 151u: goto L_002BEEEC;
    case 152u: goto L_002BEF1C;
    case 153u: goto L_002BEF3C;
    case 154u: goto L_002BEF74;
    case 155u: goto L_002BEFA4;
    case 156u: goto L_002BEFF0;
    case 157u: goto L_002BF038;
    case 158u: goto L_002BF070;
    case 159u: goto L_002BF0B8;
    case 160u: goto L_002BF0E4;
    case 161u: goto L_002BF108;
    case 162u: goto L_002BF138;
    case 163u: goto L_002BF15C;
    case 164u: goto L_002BF170;
    case 165u: goto L_002BF184;
    case 166u: goto L_002BF1E0;
    case 167u: goto L_002BF204;
    case 168u: goto L_002BF21C;
    case 169u: goto L_002BF4C8;
    case 170u: goto L_002BF5AC;
    case 171u: goto L_002BF5F0;
    case 172u: goto L_002BF6A8;
    case 173u: goto L_002BF6BC;
    case 174u: goto L_002BF6F8;
    case 175u: goto L_002BF734;
    case 176u: goto L_002BF784;
    case 177u: goto L_002BF7B8;
    case 178u: goto L_002BF7E4;
    case 179u: goto L_002BF818;
    case 180u: goto L_002BF850;
    case 181u: goto L_002BF860;
    case 182u: goto L_002BF904;
    case 183u: goto L_002BFA00;
    case 184u: goto L_002BFA98;
    case 185u: goto L_002BFAA8;
    case 186u: goto L_002BFAC0;
    case 187u: goto L_002BFB40;
    case 188u: goto L_002BFB64;
    case 189u: goto L_002BFCDC;
    case 190u: goto L_002BFD40;
    case 191u: goto L_002BFD70;
    case 192u: goto L_002BFD88;
    case 193u: goto L_002BFDB8;
    case 194u: goto L_002BFDE8;
    case 195u: goto L_002BFE5C;
    case 196u: goto L_002BFE80;
    case 197u: goto L_002BFECC;
    case 198u: goto L_002BFEE4;
    case 199u: goto L_002BFEF8;
    case 200u: goto L_002BFF0C;
    case 201u: goto L_002BFF20;
    case 202u: goto L_002BFF34;
    case 203u: goto L_002BFF68;
    case 204u: goto L_002BFFB4;
    case 205u: goto L_002BFFD8;
    case 206u: goto L_002BFFFC;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC00Cu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002BC00Cu) [[unlikely]] return; }
L_002BC00C:
    set32(c.r[17], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[20] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[18].w[0] + 11352u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[16], c.r[16].w[0] - 10056u);
    c.f[20] = fp::mul(c.f[21], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC03Cu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002BC03Cu) [[unlikely]] return; }
L_002BC03C:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[6], c.r[16].w[0] + 40u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[5], 0u + 30u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11352u)));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 148u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], 0u + 16u);
    st32((c.r[18].w[0] + 208u), c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[1]);
    st32((c.r[18].w[0] + 216u), c.f[20]);
    set32(c.r[7], 0u + 16u);
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    st16((c.r[18].w[0] + 9822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 11356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 13024u), c.f[0]);
    st32((c.r[18].w[0] + 12844u), c.f[1]);
    st8((c.r[18].w[0] + 9924u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st64((c.r[18].w[0] + 560u), c.r[7].d[0]);
    st32((c.r[18].w[0] + 212u), c.f[1]);
    st32((c.r[18].w[0] + 13032u), c.f[20]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0B0u);  if (depth < kMaxDepth) unit_006E(c, 106u, depth + 1u); else { c.pc = 0x002B9510u; return; } if (c.pc != 0x002BC0B0u) [[unlikely]] return; }
L_002BC0B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0BCu);  if (depth < kMaxDepth) unit_006F(c, 82u, depth + 1u); else { c.pc = 0x002BD1F8u; return; } if (c.pc != 0x002BC0BCu) [[unlikely]] return; }
L_002BC0BC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11352u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 11280u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[6].d[0] | 64ull;
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 44u));
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 46u));
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 48u));
    st32((c.r[18].w[0] + 11280u), c.r[6].w[0]);
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0F8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002BC0F8u) [[unlikely]] return; }
L_002BC0F8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC128:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 143u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC184; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    set32(c.r[5], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 10056u);
    set32(c.r[7], ld32((c.r[4].w[0] + 13080u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC17Cu);  if (depth < kMaxDepth) unit_006E(c, 247u, depth + 1u); else { c.pc = 0x002BBDA0u; return; } if (c.pc != 0x002BC17Cu) [[unlikely]] return; }
L_002BC17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC48C; } }
L_002BC184:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC1BC; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC1BC; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC1BC; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC1BC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC2F8; } }
L_002BC1BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1C8u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BC1C8u) [[unlikely]] return; }
L_002BC1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC2F8; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 7700u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1E0u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BC1E0u) [[unlikely]] return; }
L_002BC1E0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 118u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002BC22C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC214; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BC238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC244; } }
L_002BC214:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002BC244; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC258; } }
L_002BC22C:
    set32(c.r[6], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC258; } }
L_002BC238:
    set32(c.r[6], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC258; } }
L_002BC244:
    set32(c.r[2], ld32((c.r[17].w[0] + 13076u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], 0u + 11u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002BC258:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC48C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC284; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC2D8; } }
L_002BC284:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC2A4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC2CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC2D8; } }
L_002BC2A4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC3FC; } }
L_002BC2B8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC41C; } }
L_002BC2CC:
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC434; } }
L_002BC2D8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2F0u);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BC2F0u) [[unlikely]] return; }
L_002BC2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC48C; } }
L_002BC2F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 13080u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC48C; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 7700u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC318u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BC318u) [[unlikely]] return; }
L_002BC318:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 118u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002BC364; } }
    c.r[2].d[0] = c.r[16].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC34C; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BC370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC37C; } }
L_002BC34C:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002BC37C; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC390; } }
L_002BC364:
    set32(c.r[6], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC390; } }
L_002BC370:
    set32(c.r[6], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC390; } }
L_002BC37C:
    set32(c.r[2], ld32((c.r[17].w[0] + 13076u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], 0u + 11u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002BC390:
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 10056u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002BC48C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC3D4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC478; } }
L_002BC3D4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC3F4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BC434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC478; } }
L_002BC3F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 2;
L_002BC3FC:
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC40Cu);  if (depth < kMaxDepth) unit_006E(c, 247u, depth + 1u); else { c.pc = 0x002BBDA0u; return; } if (c.pc != 0x002BC40Cu) [[unlikely]] return; }
L_002BC40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC48C; } }
L_002BC414:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 2;
L_002BC41C:
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC42Cu);  if (depth < kMaxDepth) unit_006E(c, 236u, depth + 1u); else { c.pc = 0x002BBA80u; return; } if (c.pc != 0x002BC42Cu) [[unlikely]] return; }
L_002BC42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC48C; } }
L_002BC434:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 200u);
    set32(c.r[6], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC44Cu);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BC44Cu) [[unlikely]] return; }
L_002BC44C:
    set32(c.r[2], ld32((c.r[17].w[0] + 11280u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 11280u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC470u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002BC470u) [[unlikely]] return; }
L_002BC470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC48C; } }
L_002BC478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC48Cu);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BC48Cu) [[unlikely]] return; }
L_002BC48C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC4A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 143u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC500; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11352u)));
    set32(c.r[5], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 10056u);
    set32(c.r[7], ld32((c.r[4].w[0] + 13080u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4F8u);  if (depth < kMaxDepth) unit_006E(c, 247u, depth + 1u); else { c.pc = 0x002BBDA0u; return; } if (c.pc != 0x002BC4F8u) [[unlikely]] return; }
L_002BC4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC5B4; } }
L_002BC500:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC538; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC538; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC538; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC538; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC570; } }
L_002BC538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC544u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BC544u) [[unlikely]] return; }
L_002BC544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC570; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC568u);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BC568u) [[unlikely]] return; }
L_002BC568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC5B4; } }
L_002BC570:
    set32(c.r[3], ld32((c.r[16].w[0] + 13080u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC5B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11352u)));
    set32(c.r[5], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 10056u);
    set32(c.r[5], 0u + 82u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5B4u);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BC5B4u) [[unlikely]] return; }
L_002BC5B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 106u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC638; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC638; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC638; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC638; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC638; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC638; } }
    set32(c.r[2], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC648; } }
L_002BC638:
    st16((c.r[16].w[0] + 11354u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC79C; } }
L_002BC648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BC674; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC674u) [[unlikely]] return; }
L_002BC674:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 143u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC6AC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[12] = ld32((c.r[2].w[0] - 9660u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], ld32((c.r[4].w[0] + 13080u)));
    set32(c.r[6], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6A4u);  if (depth < kMaxDepth) unit_006E(c, 247u, depth + 1u); else { c.pc = 0x002BBDA0u; return; } if (c.pc != 0x002BC6A4u) [[unlikely]] return; }
L_002BC6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC798; } }
L_002BC6AC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC754; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC754; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC754; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC754; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC754; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC754; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC700u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BC700u) [[unlikely]] return; }
L_002BC700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC71C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC73C; } }
L_002BC71C:
    set32(c.r[3], ld32((c.r[16].w[0] + 13080u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC798; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 9948u));
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
L_002BC73C:
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC74Cu);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BC74Cu) [[unlikely]] return; }
L_002BC74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC798; } }
L_002BC754:
    set32(c.r[2], ld32((c.r[16].w[0] + 13080u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC798; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC778; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC798; } }
L_002BC778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 9900u));
    set32(c.r[5], 0u + 153u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC798u);  if (depth < kMaxDepth) unit_006E(c, 236u, depth + 1u); else { c.pc = 0x002BBA80u; return; } if (c.pc != 0x002BC798u) [[unlikely]] return; }
L_002BC798:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BC79C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC7B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC7C0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC7D0:
    set32(c.r[3], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC7E8:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC800:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC818:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC830:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC848:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC860:
    set32(c.r[2], 0u + 48u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC880:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC898:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC8B0:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC8C8:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC8E0:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC8F8:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 12u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC910:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC928:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 20u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC940:
    set32(c.r[2], 0u + 48u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.f[12]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC960:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 40u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC978:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC990:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC9A8:
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 13136u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC9F8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9E8u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002BC9E8u) [[unlikely]] return; }
L_002BC9E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC9FC; } }
L_002BC9F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BC9FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA2Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002BCA2Cu) [[unlikely]] return; }
L_002BCA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCA40:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 11358u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[4].w[0] + 11358u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCA6C; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 11358u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 11360u), c.r[2].w[0]);
    c.budget -= 3;
L_002BCA6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCA78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAB8u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002BCAB8u) [[unlikely]] return; }
L_002BCAB8:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAD8u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002BCAD8u) [[unlikely]] return; }
L_002BCAD8:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAE8u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002BCAE8u) [[unlikely]] return; }
L_002BCAE8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCB10; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BCBA0; } }
L_002BCB10:
    c.f[13] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB20u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BCB20u) [[unlikely]] return; }
L_002BCB20:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCB50; } }
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCBA4; } }
L_002BCB50:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCB68; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCB90; } }
L_002BCB68:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCB80; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCB90; } }
L_002BCB80:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCBA0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002BCB90:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCBA4; } }
L_002BCBA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCBA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCBC8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCBF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCC18; } }
L_002BCBF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCC18; } }
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 1;
L_002BCC18:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCC48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCC68; } }
L_002BCC48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCC68; } }
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 1;
L_002BCC68:
    c.f[0] = fp::sub(c.f[12], c.f[13]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCD4C; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCCB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[13], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BCD34; } }
L_002BCCB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCD40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[13] = fp::add(c.f[13], c.f[0]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCD04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCD24; } }
L_002BCD04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCD24; } }
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 1;
L_002BCD24:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCD40; } }
L_002BCD34:
    c.f[12] = fp::sub(c.f[12], c.f[14]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCD50; } }
L_002BCD40:
    c.f[12] = fp::add(c.f[12], c.f[14]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCD50; } }
L_002BCD4C:
    c.f[12] = c.f[13];
    c.budget -= 1;
L_002BCD50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCD84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCDB0; } }
L_002BCD84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCDB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_002BCDB0:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCDC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCDF4; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCDF4; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCDF4; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BCE10; } }
L_002BCDF4:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCE10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 640u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCE14; } }
L_002BCE10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCE14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCE20:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BCE84; } }
    set32(c.r[2], 0u + 175u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BCE90; } }
L_002BCE84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCE90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCEA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 7u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BCF80; } }
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCEE4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BCF1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCF74; } }
L_002BCEE4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BCF04; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002BCF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCF74; } }
L_002BCF04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF14u);  if (depth < kMaxDepth) unit_006E(c, 247u, depth + 1u); else { c.pc = 0x002BBDA0u; return; } if (c.pc != 0x002BCF14u) [[unlikely]] return; }
L_002BCF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCF80; } }
L_002BCF1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF2Cu);  if (depth < kMaxDepth) unit_006E(c, 236u, depth + 1u); else { c.pc = 0x002BBA80u; return; } if (c.pc != 0x002BCF2Cu) [[unlikely]] return; }
L_002BCF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCF80; } }
L_002BCF34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 200u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF48u);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BCF48u) [[unlikely]] return; }
L_002BCF48:
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF6Cu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002BCF6Cu) [[unlikely]] return; }
L_002BCF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCF80; } }
L_002BCF74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF80u);  if (depth < kMaxDepth) unit_006E(c, 254u, depth + 1u); else { c.pc = 0x002BBF70u; return; } if (c.pc != 0x002BCF80u) [[unlikely]] return; }
L_002BCF80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCF98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFB8u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BCFB8u) [[unlikely]] return; }
L_002BCFB8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 118u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002BD004; } }
    c.r[2].d[0] = c.r[16].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCFEC; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BD010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD01C; } }
L_002BCFEC:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002BD01C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD030; } }
L_002BD004:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD030; } }
L_002BD010:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD030; } }
L_002BD01C:
    set32(c.r[2], ld32((c.r[17].w[0] + 13076u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 11u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002BD030:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD070u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BD070u) [[unlikely]] return; }
L_002BD070:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 118u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002BD0BC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD0A4; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BD0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD0D4; } }
L_002BD0A4:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002BD0D4; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD0E8; } }
L_002BD0BC:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD0E8; } }
L_002BD0C8:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD0E8; } }
L_002BD0D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 13076u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 11u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002BD0E8:
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 10056u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD118:
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], 0u + 148u);
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD138; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002BD144; } }
L_002BD138:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD144:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD17C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD17C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD17Cu);  if (depth < kMaxDepth) unit_0019(c, 20u, depth + 1u); else { c.pc = 0x00164460u; return; } if (c.pc != 0x002BD17Cu) [[unlikely]] return; }
L_002BD17C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD190:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD1E0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BD1E0; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BD1E0; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BD1E0; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BD1E0; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002BD1EC; } }
L_002BD1E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD1EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD1F8:
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[4].w[0] + 10194u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 10192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD218:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD268; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD268; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD268; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD268; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD268; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BD274; } }
L_002BD268:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD278; } }
L_002BD274:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD298; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD298; } }
    st16((c.r[4].w[0] + 10194u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 10192u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002BD298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD2A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[5].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD2F4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 7700u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD2F4; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD2F4; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD2F4; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD2F4; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BD300; } }
L_002BD2F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD304; } }
L_002BD300:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD33C; } }
    c.f[0] = ld32((c.r[5].w[0] + 132u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10192u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10194u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002BD32C; }
L_002BD32C:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD33C; } }
    st16((c.r[5].w[0] + 10194u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002BD33C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD348:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD398; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD398; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD398; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD398; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD398; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BD3A4; } }
L_002BD398:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD3A8; } }
L_002BD3A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD3CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD3CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD3CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10194u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD3D8:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD428; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD428; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD428; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD428; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD428; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BD434; } }
L_002BD428:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD438; } }
L_002BD434:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD45C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD45C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD460; } }
L_002BD45C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10194u)));
    c.budget -= 1;
L_002BD460:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BD478; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1701ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD49C; } }
L_002BD478:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BD4A8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1701ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD4A8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2801ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD4A8; } }
L_002BD49C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD4A8:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BD4C4; } }
    c.r[3].d[0] = c.r[3].sd[0] < 2801ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD4C8; } }
L_002BD4C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD4C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD4D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD50Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002BD50Cu) [[unlikely]] return; }
L_002BD50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD65C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD520u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x002BD520u) [[unlikely]] return; }
L_002BD520:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002BD65C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD5D4; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BD65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BD684; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD578u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD578u) [[unlikely]] return; }
L_002BD578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD588u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BD588u) [[unlikely]] return; }
L_002BD588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD65C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BD65C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002BD65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] - 23004u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5C4u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BD5C4u) [[unlikely]] return; }
L_002BD5C4:
    set32(c.r[2], 0u + 199u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD684; } }
L_002BD5D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BD684; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD600u) [[unlikely]] return; }
L_002BD600:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD610u);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BD610u) [[unlikely]] return; }
L_002BD610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD65C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BD65C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002BD65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] - 23004u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD64Cu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BD64Cu) [[unlikely]] return; }
L_002BD64C:
    set32(c.r[2], 0u + 198u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD684; } }
L_002BD65C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD674u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002BD674u) [[unlikely]] return; }
L_002BD674:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002BD684; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[16].w[0] + 8935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BD684:
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
L_002BD6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 167u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 176u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 159u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 162u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 163u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 213u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 214u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 216u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 215u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 166u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 106u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 107u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 196u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], 0u + 197u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] - 31864u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[7], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BD894; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] - 4440u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 304u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BD894; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04200000u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002BD894; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD894; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD870u);  if (depth < kMaxDepth) unit_0078(c, 93u, depth + 1u); else { c.pc = 0x002E1130u; return; } if (c.pc != 0x002BD870u) [[unlikely]] return; }
L_002BD870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD894; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10882u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD894; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11024u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD898; } }
L_002BD894:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD898:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD8B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 13076u)));
    set32(c.r[19], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD8EC; } }
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD908; } }
L_002BD8EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[17].w[0] + 11328u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD908u);  if (depth < kMaxDepth) unit_003B(c, 272u, depth + 1u); else { c.pc = 0x001EF1D8u; return; } if (c.pc != 0x002BD908u) [[unlikely]] return; }
L_002BD908:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], c.r[3].w[0] - 198u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD960; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD960; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] - 23020u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 23016u), 0u);
    c.f[0] = ld32((c.r[4].w[0] - 23020u));
    st32((c.r[3].w[0] - 23012u), 0u);
    st32((c.r[17].w[0] + 13032u), c.f[0]);
    st32((c.r[17].w[0] + 12892u), 0u);
    st32((c.r[17].w[0] + 13024u), c.f[0]);
    st32((c.r[17].w[0] + 13028u), c.f[0]);
    c.budget -= 11;
L_002BD960:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD96Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002BD96Cu) [[unlikely]] return; }
L_002BD96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD9B4; } }
    set32(c.r[16], c.r[17].w[0] + 336u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD984u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002BD984u) [[unlikely]] return; }
L_002BD984:
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9B4u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002BD9B4u) [[unlikely]] return; }
L_002BD9B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9942u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD9D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDBD4; } }
L_002BD9D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9DCu);  if (depth < kMaxDepth) unit_006E(c, 157u, depth + 1u); else { c.pc = 0x002B9FC8u; return; } if (c.pc != 0x002BD9DCu) [[unlikely]] return; }
L_002BD9DC:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0B000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDBD4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002BDA14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA10u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002BDA10u) [[unlikely]] return; }
L_002BDA10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BDA14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA48; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002BDA48:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA6C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA64u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002BDA64u) [[unlikely]] return; }
L_002BDA64:
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_002BDA6C:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDB70; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[18], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] - 4440u);
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 476u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002BDB70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDB70; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BDB70; } }
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BDB0C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAE8u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BDAE8u) [[unlikely]] return; }
L_002BDAE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    set32(c.r[7], 0u + 5u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB0Cu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BDB0Cu) [[unlikely]] return; }
L_002BDB0C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    set32(c.r[5], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st8((c.r[17].w[0] + 10084u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 10084u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 104u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 7710u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[7].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDBD4; } }
L_002BDB70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB7Cu);  if (depth < kMaxDepth) unit_006F(c, 99u, depth + 1u); else { c.pc = 0x002BD6B0u; return; } if (c.pc != 0x002BDB7Cu) [[unlikely]] return; }
L_002BDB7C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BDBD4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB98u);  if (depth < kMaxDepth) unit_0070(c, 19u, depth + 1u); else { c.pc = 0x002C0438u; return; } if (c.pc != 0x002BDB98u) [[unlikely]] return; }
L_002BDB98:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8933u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDBC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDBB8u);  if (depth < kMaxDepth) unit_006F(c, 89u, depth + 1u); else { c.pc = 0x002BD4D0u; return; } if (c.pc != 0x002BDBB8u) [[unlikely]] return; }
L_002BDBB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDBD4; } }
L_002BDBC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDBD4u);  if (depth < kMaxDepth) unit_006F(c, 89u, depth + 1u); else { c.pc = 0x002BD4D0u; return; } if (c.pc != 0x002BDBD4u) [[unlikely]] return; }
L_002BDBD4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BDBF8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDEC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC38u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x002BDC38u) [[unlikely]] return; }
L_002BDC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002BDEC8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC60u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002BDC60u) [[unlikely]] return; }
L_002BDC60:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDCC0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 148ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDD1C; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BDD04; } }
    c.r[2].d[0] = c.r[3].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDCAC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BDD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD38; } }
L_002BDCAC:
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BDD1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD38; } }
L_002BDCC0:
    set32(c.r[2], 0u + 174u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BDD10; } }
    c.r[2].d[0] = c.r[3].sd[0] < 175ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDCF8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 173ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDD38; } }
    c.r[2].d[0] = c.r[3].sd[0] < 169ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD10; } }
L_002BDCF8:
    set32(c.r[2], 0u + 175u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDD38; } }
L_002BDD04:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD4C; } }
L_002BDD10:
    set32(c.r[5], ld32((c.r[19].w[0] + 11408u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD4C; } }
L_002BDD1C:
    set32(c.r[3], ld32((c.r[19].w[0] + 11824u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDD4C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 11844u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD4C; } }
L_002BDD38:
    set32(c.r[3], ld32((c.r[19].w[0] + 11504u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDD4C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 11524u)));
    c.budget -= 1;
L_002BDD4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BDEC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32380u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDEC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD78u);  if (depth < kMaxDepth) unit_0093(c, 275u, depth + 1u); else { c.pc = 0x0034EC90u; return; } if (c.pc != 0x002BDD78u) [[unlikely]] return; }
L_002BDD78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BDEC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD9Cu);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x002BDD9Cu) [[unlikely]] return; }
L_002BDD9C:
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[3] = ld32((c.r[19].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[16], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 160u);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[3]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDECu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002BDDECu) [[unlikely]] return; }
L_002BDDEC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE00u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002BDE00u) [[unlikely]] return; }
L_002BDE00:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BDE40; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BDE40; } }
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BDEC8; } }
L_002BDE40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE5Cu);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002BDE5Cu) [[unlikely]] return; }
L_002BDE5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22996u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDE80; } }
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE80u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002BDE80u) [[unlikely]] return; }
L_002BDE80:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE94u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002BDE94u) [[unlikely]] return; }
L_002BDE94:
    set32(c.r[4], c.r[19].w[0] + 12992u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEA4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002BDEA4u) [[unlikely]] return; }
L_002BDEA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 19740u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDEC8u) [[unlikely]] return; }
L_002BDEC8:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BDEF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE2E4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002BDF48; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDF5C; } }
L_002BDF48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF58u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002BDF58u) [[unlikely]] return; }
L_002BDF58:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BDF5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002BDF80; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDFB4; } }
L_002BDF80:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002BDF98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDFAC; } }
L_002BDF98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFA8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002BDFA8u) [[unlikely]] return; }
L_002BDFA8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BDFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), c.r[3].w[0]);
    c.budget -= 2;
L_002BDFB4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7728u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE044; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE044; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE02C; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 576u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BE044; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002BE020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[21].w[0] - 5024u)));
    set32(c.r[6], ld32((c.r[2].w[0] - 5020u)));
    set32(c.r[4], 0u - 513u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 40u));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BE044; } }
L_002BE020:
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE044; } }
L_002BE02C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE03Cu);  if (depth < kMaxDepth) unit_0078(c, 113u, depth + 1u); else { c.pc = 0x002E1790u; return; } if (c.pc != 0x002BE03Cu) [[unlikely]] return; }
L_002BE03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE044:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE270; } }
    c.r[2].d[0] = c.r[17].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE0B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE17C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE090; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BE120; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE090:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE2E4; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE0B0:
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE234; } }
    c.r[2].d[0] = c.r[17].sd[0] < 144ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE0E8; } }
    c.r[2].d[0] = c.r[17].sd[0] < 142ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE2E4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE254; } }
L_002BE0E8:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002BE20C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE2E4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 164ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE2E4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 159ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE1EC; } }
L_002BE120:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] - 4440u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 872u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BE2E4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 876u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BE2E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE160u);  if (depth < kMaxDepth) unit_006F(c, 101u, depth + 1u); else { c.pc = 0x002BD8B0u; return; } if (c.pc != 0x002BE160u) [[unlikely]] return; }
L_002BE160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE174u);  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BE310u; return; } if (c.pc != 0x002BE174u) [[unlikely]] return; }
L_002BE174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE17C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x03000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE2E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002BE2E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BE2E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10089u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE2E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1C8u);  if (depth < kMaxDepth) unit_0070(c, 19u, depth + 1u); else { c.pc = 0x002C0438u; return; } if (c.pc != 0x002BE1C8u) [[unlikely]] return; }
L_002BE1C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1E4u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002BE1E4u) [[unlikely]] return; }
L_002BE1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE1EC:
    st32((c.r[16].w[0] + 12900u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE204u);  if (depth < kMaxDepth) unit_0070(c, 148u, depth + 1u); else { c.pc = 0x002C1C58u; return; } if (c.pc != 0x002BE204u) [[unlikely]] return; }
L_002BE204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE20C:
    set32(c.r[2], ld32((c.r[16].w[0] + 13092u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12900u), 0u);
    set32(c.r[5], 0u + 147u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 13092u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE22Cu);  if (depth < kMaxDepth) unit_006F(c, 169u, depth + 1u); else { c.pc = 0x002BF4C8u; return; } if (c.pc != 0x002BE22Cu) [[unlikely]] return; }
L_002BE22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE234:
    st32((c.r[16].w[0] + 12900u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[5], 0u + 143u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE24Cu);  if (depth < kMaxDepth) unit_0071(c, 72u, depth + 1u); else { c.pc = 0x002C49F0u; return; } if (c.pc != 0x002BE24Cu) [[unlikely]] return; }
L_002BE24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE254:
    st32((c.r[16].w[0] + 12900u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 118u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE268u);  if (depth < kMaxDepth) unit_001A(c, 68u, depth + 1u); else { c.pc = 0x00168C78u; return; } if (c.pc != 0x002BE268u) [[unlikely]] return; }
L_002BE268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E4; } }
L_002BE270:
    set32(c.r[2], ld32((c.r[16].w[0] + 13092u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 118u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12900u), c.f[0]);
    st32((c.r[16].w[0] + 13092u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE298u);  if (depth < kMaxDepth) unit_006F(c, 169u, depth + 1u); else { c.pc = 0x002BF4C8u; return; } if (c.pc != 0x002BE298u) [[unlikely]] return; }
L_002BE298:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[16].w[0] + 12992u), c.f[1]);
    st32((c.r[16].w[0] + 13000u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE2E0; } }
L_002BE2B4:
    st32((c.r[16].w[0] + 13092u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12900u), 0u);
    set32(c.r[5], 0u + 105u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2CCu);  if (depth < kMaxDepth) unit_006F(c, 169u, depth + 1u); else { c.pc = 0x002BF4C8u; return; } if (c.pc != 0x002BE2CCu) [[unlikely]] return; }
L_002BE2CC:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[16].w[0] + 12992u), c.f[0]);
    st32((c.r[16].w[0] + 13000u), c.f[1]);
    c.budget -= 5;
L_002BE2E0:
    st32((c.r[16].w[0] + 12996u), c.f[2]);
    c.budget -= 1;
L_002BE2E4:
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
L_002BE310:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 272u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    c.f[20] = 0u;
    set32(c.r[4], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    c.f[23] = c.f[20];
    set32(c.r[2], c.r[4].w[0] - 106u);
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEF1C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[30], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[30].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[23], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[23].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[22], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[22].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[21], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[21].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[20], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[20].d[0];  if (t) { goto L_002BEF1C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 612u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3ECu);  if (depth < kMaxDepth) unit_006F(c, 183u, depth + 1u); else { c.pc = 0x002BFA00u; return; } if (c.pc != 0x002BE3ECu) [[unlikely]] return; }
L_002BE3EC:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE408u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BE408u) [[unlikely]] return; }
L_002BE408:
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    c.f[21] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BEEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_002BEEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_002BEEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[22].d[0];  if (t) { goto L_002BEEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_002BEEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_002BEEA4; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BEEA4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BEEAC; } }
    set32(c.r[2], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BEEA4; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE498; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE4B8; } }
L_002BE498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE4B8; } }
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_002BE4B8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE4E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE508; } }
L_002BE4E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE508; } }
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 1;
L_002BE508:
    c.f[0] = ld32((c.r[18].w[0] + 12888u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = c.f[22];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[18].w[0] + 10916u), c.f[22]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE53Cu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002BE53Cu) [[unlikely]] return; }
L_002BE53C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = 0u;
    c.f[3] = fp::add(c.f[22], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = fp::mul(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE5A0; } }
L_002BE580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE5A0; } }
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 1;
L_002BE5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE5D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE5F8; } }
L_002BE5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE5F8; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002BE5F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[4] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE630; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE650; } }
L_002BE630:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE650; } }
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.budget -= 1;
L_002BE650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[5] = fp::add(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE6A8; } }
L_002BE688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE6A8; } }
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.budget -= 1;
L_002BE6A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[6] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE6E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[6] = fp::add(c.f[6], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE700; } }
L_002BE6E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE700; } }
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.budget -= 1;
L_002BE700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[7] = fp::add(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE738; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[7] = fp::add(c.f[7], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE758; } }
L_002BE738:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE758; } }
    c.f[7] = fp::sub(c.f[7], c.f[0]);
    c.budget -= 1;
L_002BE758:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[8] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE790; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[8] = fp::add(c.f[8], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE7B0; } }
L_002BE790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[8]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE7B0; } }
    c.f[8] = fp::sub(c.f[8], c.f[0]);
    c.budget -= 1;
L_002BE7B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002BEA70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE91C; } }
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE7FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14544u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE7FC:
    c.f[0] = fp::sub(c.f[21], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14600u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE828:
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE854:
    c.f[0] = fp::sub(c.f[21], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE880:
    c.f[0] = fp::sub(c.f[21], c.f[5]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE8AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE8AC:
    c.f[0] = fp::sub(c.f[21], c.f[6]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BED24; } }
    c.f[0] = fp::sub(c.f[21], c.f[7]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE8F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE8F0:
    c.f[0] = fp::sub(c.f[21], c.f[8]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14376u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE91C:
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14544u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE950:
    c.f[0] = fp::sub(c.f[21], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE97C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14600u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE97C:
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE9A8:
    c.f[0] = fp::sub(c.f[21], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE9D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BE9D4:
    c.f[0] = fp::sub(c.f[21], c.f[5]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BED24; } }
    c.f[0] = fp::sub(c.f[21], c.f[6]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEA18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEA18:
    c.f[0] = fp::sub(c.f[21], c.f[7]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEA44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14376u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEA44:
    c.f[0] = fp::sub(c.f[21], c.f[8]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEA70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEBD0; } }
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEAB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14600u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEAB0:
    c.f[0] = fp::sub(c.f[21], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEADC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14544u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEADC:
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEB08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEB08:
    c.f[0] = fp::sub(c.f[21], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEB34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEB34:
    c.f[0] = fp::sub(c.f[21], c.f[5]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEB60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14376u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEB60:
    c.f[0] = fp::sub(c.f[21], c.f[6]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEB8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEB8C:
    c.f[0] = fp::sub(c.f[21], c.f[7]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BED24; } }
    c.f[0] = fp::sub(c.f[21], c.f[8]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEBD0:
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEC04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14600u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEC04:
    c.f[0] = fp::sub(c.f[21], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14544u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEC30:
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEC5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEC5C:
    c.f[0] = fp::sub(c.f[21], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEC88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BEC88:
    c.f[0] = fp::sub(c.f[21], c.f[5]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BECB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BECB4:
    c.f[0] = fp::sub(c.f[21], c.f[6]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BECE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14376u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BECE0:
    c.f[0] = fp::sub(c.f[21], c.f[7]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED30; } }
L_002BED0C:
    c.f[0] = fp::sub(c.f[21], c.f[8]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED38; } }
L_002BED24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14264u);
    c.budget -= 3;
L_002BED30:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_002BED38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BEDD8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED4Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002BED4Cu) [[unlikely]] return; }
L_002BED4C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002BED54u);  goto L_002BED58; }
L_002BED58:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BEDAC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002BEE2C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BEE2C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDA4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002BEDA4u) [[unlikely]] return; }
L_002BEDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEE2C; } }
L_002BEDAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BEE2C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDD0u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BEDD0u) [[unlikely]] return; }
L_002BEDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEE2C; } }
L_002BEDD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEE2C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BEE2C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDFCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002BEDFCu) [[unlikely]] return; }
L_002BEDFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002BEE04u);  goto L_002BEE08; }
L_002BEE08:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[7], 0u + 4u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE2Cu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BEE2Cu) [[unlikely]] return; }
L_002BEE2C:
    c.f[1] = ld32((c.r[18].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEE64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEE90; } }
L_002BEE64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEE94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_002BEE90:
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002BEE94:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEF28; } }
L_002BEEA4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002BEF28; } }
L_002BEEAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEEE0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEEE0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEE0u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002BEEE0u) [[unlikely]] return; }
L_002BEEE0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEECu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002BEEECu) [[unlikely]] return; }
L_002BEEEC:
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[4], c.r[18].w[0] + 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF1Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002BEF1Cu) [[unlikely]] return; }
L_002BEF1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEFA8; } }
L_002BEF28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF3Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002BEF3Cu) [[unlikely]] return; }
L_002BEF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEF68; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEF68; } }
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[23]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[18].w[0] + 136u), c.f[0]);
    st32((c.r[18].w[0] + 128u), c.f[1]);
    c.budget -= 6;
L_002BEF68:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF74u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002BEF74u) [[unlikely]] return; }
L_002BEF74:
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[4], c.r[18].w[0] + 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFA4u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002BEFA4u) [[unlikely]] return; }
L_002BEFA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BEFA8:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BEFF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.f[21] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_002BF040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF038u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x002BF038u) [[unlikely]] return; }
L_002BF038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF050; } }
L_002BF040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF054; } }
L_002BF050:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002BF054:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002BF1B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF070u);  if (depth < kMaxDepth) unit_006E(c, 124u, depth + 1u); else { c.pc = 0x002B9890u; return; } if (c.pc != 0x002BF070u) [[unlikely]] return; }
L_002BF070:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF1B0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u - 1u);
    c.f[20] = ld32((c.r[17].w[0] + 12888u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[21];
    c.f[22] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0B8u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002BF0B8u) [[unlikely]] return; }
L_002BF0B8:
    set32(c.r[16], c.r[17].w[0] + 336u);
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = c.f[22];
    c.f[14] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[17].w[0] + 13024u);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = fp::mul(c.f[20], c.f[14]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002BF0E4u) [[unlikely]] return; }
L_002BF0E4:
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12888u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 12892u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF108u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002BF108u) [[unlikely]] return; }
L_002BF108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF138u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002BF138u) [[unlikely]] return; }
L_002BF138:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 13024u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.f[20] = ld32((c.r[17].w[0] + 13028u));
    c.f[21] = ld32((c.r[17].w[0] + 13032u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF15Cu);  if (depth < kMaxDepth) unit_0088(c, 324u, depth + 1u); else { c.pc = 0x00323C40u; return; } if (c.pc != 0x002BF15Cu) [[unlikely]] return; }
L_002BF15C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF170u);  if (depth < kMaxDepth) unit_0088(c, 325u, depth + 1u); else { c.pc = 0x00323CA8u; return; } if (c.pc != 0x002BF170u) [[unlikely]] return; }
L_002BF170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF184u);  if (depth < kMaxDepth) unit_0088(c, 326u, depth + 1u); else { c.pc = 0x00323D10u; return; } if (c.pc != 0x002BF184u) [[unlikely]] return; }
L_002BF184:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    set32(c.r[3], c.r[17].w[0] + 12992u);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12992u), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[3].w[0] + 12u), c.f[22]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF1B4; } }
L_002BF1B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF1B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF204u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002BF204u) [[unlikely]] return; }
L_002BF204:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF21Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BF21Cu) [[unlikely]] return; }
L_002BF21C:
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 10968u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BF244; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF4AC; } }
L_002BF244:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF2C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF290; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF2BC; } }
L_002BF290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF2BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 4;
L_002BF2BC:
    c.f[0] = c.f[4];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF4AC; } }
L_002BF2C8:
    c.f[3] = ld32((c.r[16].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF2F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF314; } }
L_002BF2F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF314; } }
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 1;
L_002BF314:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF344; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF364; } }
L_002BF344:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF364; } }
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.budget -= 1;
L_002BF364:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF394; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF418; } }
L_002BF394:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF424; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF3E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF408; } }
L_002BF3E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF408; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002BF408:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF424; } }
L_002BF418:
    c.f[3] = fp::sub(c.f[3], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF428; } }
L_002BF424:
    c.f[3] = fp::add(c.f[3], c.f[20]);
    c.budget -= 1;
L_002BF428:
    c.f[0] = fp::sub(c.f[3], c.f[4]);
    c.f[1] = fp::add(c.f[20], c.f[20]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF448; } }
    c.f[3] = c.f[4];
    c.budget -= 1;
L_002BF448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF47C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF4A8; } }
L_002BF47C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF4A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 4;
L_002BF4A8:
    c.f[0] = c.f[3];
    c.budget -= 1;
L_002BF4AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF4C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[5].w[0] - 106u);
    set32(c.r[19], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BF588; } }
    set32(c.r[2], 0u + 217u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BF594; } }
L_002BF588:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF598; } }
L_002BF594:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BF598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF7F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5ACu);  if (depth < kMaxDepth) unit_006E(c, 157u, depth + 1u); else { c.pc = 0x002B9FC8u; return; } if (c.pc != 0x002BF5ACu) [[unlikely]] return; }
L_002BF5AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002BF724; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF708; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10089u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF708; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002BF5F8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5F0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002BF5F0u) [[unlikely]] return; }
L_002BF5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF700; } }
L_002BF5F8:
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BF648; } }
    c.r[2].d[0] = c.r[18].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF620; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BF634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF678; } }
L_002BF620:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BF65C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF678; } }
L_002BF634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31864u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF668; } }
L_002BF648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF668; } }
L_002BF65C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14656u);
    c.budget -= 3;
L_002BF668:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF69C; } }
L_002BF678:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[5], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 9;
L_002BF69C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6A8u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002BF6A8u) [[unlikely]] return; }
L_002BF6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF6DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6BCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002BF6BCu) [[unlikely]] return; }
L_002BF6BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002BF6C4u);  goto L_002BF6C8; }
L_002BF6C8:
    set32(c.r[3], c.r[3].w[0] + 8u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF6E0; } }
L_002BF6DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF6E0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6F8u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002BF6F8u) [[unlikely]] return; }
L_002BF6F8:
    st32((c.r[17].w[0] + 13152u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 7700u), c.r[18].w[0]);
    c.budget -= 2;
L_002BF700:
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 9926u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BF708:
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002BF724; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF734; } }
L_002BF724:
    set32(c.r[5], ld32((c.r[17].w[0] + 612u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF734u);  if (depth < kMaxDepth) unit_003A(c, 193u, depth + 1u); else { c.pc = 0x001E9960u; return; } if (c.pc != 0x002BF734u) [[unlikely]] return; }
L_002BF734:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_002BF7F4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF7F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10089u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF7F4; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BF7EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002BF78C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF784u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002BF784u) [[unlikely]] return; }
L_002BF784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF7EC; } }
L_002BF78C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[5], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7B8u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002BF7B8u) [[unlikely]] return; }
L_002BF7B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002BF7C0u);  goto L_002BF7C4; }
L_002BF7C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[7], 0u + 8u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7E4u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002BF7E4u) [[unlikely]] return; }
L_002BF7E4:
    st32((c.r[17].w[0] + 7700u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 13152u), c.r[18].w[0]);
    c.budget -= 2;
L_002BF7EC:
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 9926u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BF7F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF818:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.f[20]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF850u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002BF850u) [[unlikely]] return; }
L_002BF850:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF860u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002BF860u) [[unlikely]] return; }
L_002BF860:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] - 23104u));
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[20]));
    st32((c.r[17].w[0] + 12904u), c.f[0]);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF88C; } }
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF890; } }
L_002BF88C:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002BF890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[2].w[0] - 17692u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF8C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF8E4; } }
L_002BF8C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF8E4; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_002BF8E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002BF9D4; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    st32((c.r[17].w[0] + 12904u), 0u);
    c.f[13] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF904u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BF904u) [[unlikely]] return; }
L_002BF904:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = 0u;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF948; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF968; } }
L_002BF948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF96C; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_002BF968:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_002BF96C:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    st32((c.r[16].w[0]), c.f[2]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF9A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF9D0; } }
L_002BF9A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BF9D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 4;
L_002BF9D0:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_002BF9D4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFA00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[24]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st32((c.r[29].w[0] + 120u), c.f[23]);
    c.f[22] = 0u;
    c.f[23] = ld32((c.r[17].w[0] + 12884u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[22]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFA6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFA8C; } }
L_002BFA6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[23]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFA8C; } }
    c.f[23] = fp::sub(c.f[23], c.f[0]);
    c.budget -= 1;
L_002BFA8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA98u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002BFA98u) [[unlikely]] return; }
L_002BFA98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAA8u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002BFAA8u) [[unlikely]] return; }
L_002BFAA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAC0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002BFAC0u) [[unlikely]] return; }
L_002BFAC0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFB08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFB08; } }
    c.f[0] = ld32((c.r[3].w[0] + 424u));
    c.f[1] = ld32((c.r[3].w[0] + 416u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 12;
L_002BFB08:
    c.f[24] = 0u;
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[24]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFB30; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BFB58; } }
L_002BFB30:
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB40u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BFB40u) [[unlikely]] return; }
L_002BFB40:
    set32(c.r[19], 0u + 1u);
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFB58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB64u);  if (depth < kMaxDepth) unit_0084(c, 146u, depth + 1u); else { c.pc = 0x003121A0u; return; } if (c.pc != 0x002BFB64u) [[unlikely]] return; }
L_002BFB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC54; } }
    set32(c.r[19], 0u + 1u);
    c.r[3].d[0] = c.r[16].d[0] & 36864ull;
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BFB90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFB90:
    c.r[3].d[0] = c.r[16].d[0] & 49152ull;
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BFBB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFBB0:
    c.r[3].d[0] = c.r[16].d[0] & 12288ull;
    set32(c.r[2], 0u + 12288u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BFBD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45200000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFBD0:
    c.r[3].d[0] = c.r[16].d[0] & 24576ull;
    set32(c.r[2], 0u + 24576u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BFBF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45600000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFBF0:
    c.r[2].d[0] = c.r[16].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFC0C:
    c.r[2].d[0] = c.r[16].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFC28:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC44; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC54; } }
L_002BFC44:
    c.r[2].d[0] = c.r[16].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC54; } }
    c.f[22] = c.f[24];
    c.budget -= 1;
L_002BFC54:
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC64; } }
    c.f[22] = fp::add(c.f[22], c.f[23]);
    c.budget -= 1;
L_002BFC64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 12920u), c.f[22]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFC98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFCC4; } }
L_002BFC98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFCC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[22], c.f[0]);
    c.budget -= 4;
L_002BFCC4:
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 1;
L_002BFCC8:
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCDCu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002BFCDCu) [[unlikely]] return; }
L_002BFCDC:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 12u), c.f[2]);
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[24] = ld32((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 120u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFD40:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFD70:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFD88:
    c.f[1] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BFDAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_002BFDAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFDB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDE8u);  if (depth < kMaxDepth) unit_008A(c, 182u, depth + 1u); else { c.pc = 0x0032A850u; return; } if (c.pc != 0x002BFDE8u) [[unlikely]] return; }
L_002BFDE8:
    c.f[20] = 0u;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BFE3C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFE1C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BFE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFE60; } }
L_002BFE1C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BFE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFE60; } }
L_002BFE30:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFE50; } }
L_002BFE3C:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFE54; } }
L_002BFE4C:
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002BFE50:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_002BFE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE5Cu);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A298u; return; } if (c.pc != 0x002BFE5Cu) [[unlikely]] return; }
L_002BFE5C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002BFE60:
    c.f[0] = c.f[20];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFE80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFECCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BFECCu) [[unlikely]] return; }
L_002BFECC:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEE4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BFEE4u) [[unlikely]] return; }
L_002BFEE4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEF8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BFEF8u) [[unlikely]] return; }
L_002BFEF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF0Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BFF0Cu) [[unlikely]] return; }
L_002BFF0C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF20u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BFF20u) [[unlikely]] return; }
L_002BFF20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF34u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BFF34u) [[unlikely]] return; }
L_002BFF34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFF68:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 120u), c.f[23]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[23] = c.f[15];
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFB4u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x002BFFB4u) [[unlikely]] return; }
L_002BFFB4:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFFD8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFD8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BFFD8u) [[unlikely]] return; }
L_002BFFD8:
    fpu_div(c, 12u, c.f[21], c.f[22]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[23]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFFCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BFFFCu) [[unlikely]] return; }
L_002BFFFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0070(c, 1u, depth);
}

}
