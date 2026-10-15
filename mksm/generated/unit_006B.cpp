#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002AC000;
    case 2u: goto L_002AC028;
    case 3u: goto L_002AC19C;
    case 4u: goto L_002AC1E8;
    case 5u: goto L_002AC1F8;
    case 6u: goto L_002AC258;
    case 7u: goto L_002AC2B8;
    case 8u: goto L_002AC2DC;
    case 9u: goto L_002AC300;
    case 10u: goto L_002AC508;
    case 11u: goto L_002AC550;
    case 12u: goto L_002AC560;
    case 13u: goto L_002AC5C0;
    case 14u: goto L_002AC638;
    case 15u: goto L_002AC63C;
    case 16u: goto L_002AC678;
    case 17u: goto L_002AC9E8;
    case 18u: goto L_002ACA38;
    case 19u: goto L_002ACB28;
    case 20u: goto L_002ACBA0;
    case 21u: goto L_002ACCA8;
    case 22u: goto L_002ACCF8;
    case 23u: goto L_002ACD0C;
    case 24u: goto L_002ACF44;
    case 25u: goto L_002ACF90;
    case 26u: goto L_002ACFA0;
    case 27u: goto L_002AD000;
    case 28u: goto L_002AD1B8;
    case 29u: goto L_002AD2C0;
    case 30u: goto L_002AD304;
    case 31u: goto L_002AD318;
    case 32u: goto L_002AD538;
    case 33u: goto L_002AD580;
    case 34u: goto L_002AD590;
    case 35u: goto L_002AD5F0;
    case 36u: goto L_002AD798;
    case 37u: goto L_002AD7D0;
    case 38u: goto L_002AD898;
    case 39u: goto L_002AD8B0;
    case 40u: goto L_002AD910;
    case 41u: goto L_002AD92C;
    case 42u: goto L_002AD9AC;
    case 43u: goto L_002AD9C8;
    case 44u: goto L_002AD9E4;
    case 45u: goto L_002ADA04;
    case 46u: goto L_002ADA24;
    case 47u: goto L_002ADA40;
    case 48u: goto L_002ADA60;
    case 49u: goto L_002ADA80;
    case 50u: goto L_002ADA9C;
    case 51u: goto L_002ADAC0;
    case 52u: goto L_002ADB00;
    case 53u: goto L_002ADB20;
    case 54u: goto L_002ADB48;
    case 55u: goto L_002ADB7C;
    case 56u: goto L_002ADBA0;
    case 57u: goto L_002ADBB8;
    case 58u: goto L_002ADBF0;
    case 59u: goto L_002ADC14;
    case 60u: goto L_002ADC50;
    case 61u: goto L_002ADC68;
    case 62u: goto L_002ADC7C;
    case 63u: goto L_002ADCBC;
    case 64u: goto L_002ADCD4;
    case 65u: goto L_002ADCF0;
    case 66u: goto L_002ADD14;
    case 67u: goto L_002ADD48;
    case 68u: goto L_002ADD58;
    case 69u: goto L_002ADD8C;
    case 70u: goto L_002ADDB4;
    case 71u: goto L_002ADE00;
    case 72u: goto L_002ADEA8;
    case 73u: goto L_002ADEC0;
    case 74u: goto L_002ADEFC;
    case 75u: goto L_002ADF5C;
    case 76u: goto L_002ADF9C;
    case 77u: goto L_002ADFAC;
    case 78u: goto L_002ADFE4;
    case 79u: goto L_002ADFF4;
    case 80u: goto L_002AE030;
    case 81u: goto L_002AE040;
    case 82u: goto L_002AE080;
    case 83u: goto L_002AE0D0;
    case 84u: goto L_002AE100;
    case 85u: goto L_002AE110;
    case 86u: goto L_002AE128;
    case 87u: goto L_002AE16C;
    case 88u: goto L_002AE194;
    case 89u: goto L_002AE1B8;
    case 90u: goto L_002AE1E0;
    case 91u: goto L_002AE1F0;
    case 92u: goto L_002AE214;
    case 93u: goto L_002AE224;
    case 94u: goto L_002AE230;
    case 95u: goto L_002AE26C;
    case 96u: goto L_002AE290;
    case 97u: goto L_002AE2E8;
    case 98u: goto L_002AE318;
    case 99u: goto L_002AE358;
    case 100u: goto L_002AE374;
    case 101u: goto L_002AE390;
    case 102u: goto L_002AE3C0;
    case 103u: goto L_002AE400;
    case 104u: goto L_002AE440;
    case 105u: goto L_002AE458;
    case 106u: goto L_002AE470;
    case 107u: goto L_002AE530;
    case 108u: goto L_002AE560;
    case 109u: goto L_002AE588;
    case 110u: goto L_002AE5A8;
    case 111u: goto L_002AE5C0;
    case 112u: goto L_002AE620;
    case 113u: goto L_002AE650;
    case 114u: goto L_002AE69C;
    case 115u: goto L_002AE6D0;
    case 116u: goto L_002AE6F8;
    case 117u: goto L_002AE70C;
    case 118u: goto L_002AE720;
    case 119u: goto L_002AE778;
    case 120u: goto L_002AE7DC;
    case 121u: goto L_002AE7EC;
    case 122u: goto L_002AE828;
    case 123u: goto L_002AE838;
    case 124u: goto L_002AE8E8;
    case 125u: goto L_002AE96C;
    case 126u: goto L_002AE97C;
    case 127u: goto L_002AE990;
    case 128u: goto L_002AE9C0;
    case 129u: goto L_002AEA20;
    case 130u: goto L_002AEA48;
    case 131u: goto L_002AEA90;
    case 132u: goto L_002AEAE0;
    case 133u: goto L_002AEAF0;
    case 134u: goto L_002AEB08;
    case 135u: goto L_002AEBC0;
    case 136u: goto L_002AEC18;
    case 137u: goto L_002AEC28;
    case 138u: goto L_002AEC48;
    case 139u: goto L_002AEC5C;
    case 140u: goto L_002AEC80;
    case 141u: goto L_002AEC9C;
    case 142u: goto L_002AECB0;
    case 143u: goto L_002AECC0;
    case 144u: goto L_002AECD4;
    case 145u: goto L_002AECE8;
    case 146u: goto L_002AED08;
    case 147u: goto L_002AED30;
    case 148u: goto L_002AED48;
    case 149u: goto L_002AED8C;
    case 150u: goto L_002AEDA8;
    case 151u: goto L_002AEDE0;
    case 152u: goto L_002AEE40;
    case 153u: goto L_002AEE60;
    case 154u: goto L_002AEEC4;
    case 155u: goto L_002AEEF4;
    case 156u: goto L_002AEF50;
    case 157u: goto L_002AEF88;
    case 158u: goto L_002AEFE8;
    case 159u: goto L_002AF018;
    case 160u: goto L_002AF070;
    case 161u: goto L_002AF0A8;
    case 162u: goto L_002AF0F4;
    case 163u: goto L_002AF150;
    case 164u: goto L_002AF178;
    case 165u: goto L_002AF188;
    case 166u: goto L_002AF1E4;
    case 167u: goto L_002AF1F8;
    case 168u: goto L_002AF238;
    case 169u: goto L_002AF250;
    case 170u: goto L_002AF27C;
    case 171u: goto L_002AF294;
    case 172u: goto L_002AF300;
    case 173u: goto L_002AF320;
    case 174u: goto L_002AF34C;
    case 175u: goto L_002AF3D8;
    case 176u: goto L_002AF3F8;
    case 177u: goto L_002AF468;
    case 178u: goto L_002AF4F8;
    case 179u: goto L_002AF508;
    case 180u: goto L_002AF51C;
    case 181u: goto L_002AF550;
    case 182u: goto L_002AF560;
    case 183u: goto L_002AF580;
    case 184u: goto L_002AF5B8;
    case 185u: goto L_002AF5D8;
    case 186u: goto L_002AF600;
    case 187u: goto L_002AF650;
    case 188u: goto L_002AF698;
    case 189u: goto L_002AF6B8;
    case 190u: goto L_002AF6E8;
    case 191u: goto L_002AF720;
    case 192u: goto L_002AF750;
    case 193u: goto L_002AF790;
    case 194u: goto L_002AF7A0;
    case 195u: goto L_002AF7C8;
    case 196u: goto L_002AF7D0;
    case 197u: goto L_002AF7F0;
    case 198u: goto L_002AF7FC;
    case 199u: goto L_002AF850;
    case 200u: goto L_002AF860;
    case 201u: goto L_002AF874;
    case 202u: goto L_002AF888;
    case 203u: goto L_002AF8A0;
    case 204u: goto L_002AF8B4;
    case 205u: goto L_002AF8D0;
    case 206u: goto L_002AF8E0;
    case 207u: goto L_002AF8F4;
    case 208u: goto L_002AF908;
    case 209u: goto L_002AF948;
    case 210u: goto L_002AF980;
    case 211u: goto L_002AF9A4;
    case 212u: goto L_002AF9C0;
    case 213u: goto L_002AF9F4;
    case 214u: goto L_002AFA08;
    case 215u: goto L_002AFA3C;
    case 216u: goto L_002AFA50;
    case 217u: goto L_002AFA6C;
    case 218u: goto L_002AFA7C;
    case 219u: goto L_002AFA98;
    case 220u: goto L_002AFAA4;
    case 221u: goto L_002AFABC;
    case 222u: goto L_002AFAE0;
    case 223u: goto L_002AFAE8;
    case 224u: goto L_002AFB10;
    case 225u: goto L_002AFB20;
    case 226u: goto L_002AFB30;
    case 227u: goto L_002AFB38;
    case 228u: goto L_002AFB40;
    case 229u: goto L_002AFB70;
    case 230u: goto L_002AFB9C;
    case 231u: goto L_002AFBA4;
    case 232u: goto L_002AFBC0;
    case 233u: goto L_002AFBD8;
    case 234u: goto L_002AFBF0;
    case 235u: goto L_002AFC00;
    case 236u: goto L_002AFC14;
    case 237u: goto L_002AFC30;
    case 238u: goto L_002AFC48;
    case 239u: goto L_002AFC58;
    case 240u: goto L_002AFCC8;
    case 241u: goto L_002AFD60;
    case 242u: goto L_002AFD8C;
    case 243u: goto L_002AFDA8;
    case 244u: goto L_002AFDC0;
    case 245u: goto L_002AFE10;
    case 246u: goto L_002AFE7C;
    case 247u: goto L_002AFE90;
    default: bad_entry(c, 0x002AC000u); return;
    }
L_002AC000:
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 184u), c.f[1]);
    st32((c.r[16].w[0] + 180u), c.f[2]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC2B8; } }
L_002AC028:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AC048; } }
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[2] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[2]);
    c.budget -= 6;
L_002AC048:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002AC05C; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.budget -= 3;
L_002AC05C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], ld32((c.r[3].w[0] + 28760u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 20);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 20);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    st32((c.r[29].w[0]), c.r[7].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 20);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AC0D4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002AC0D4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AC0D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC0F8; } }
L_002AC0D4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
L_002AC0F8:
    set32(c.r[2], ld32((c.r[8].w[0] + 28760u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC128; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC128; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AC128; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AC1B4; } }
L_002AC128:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC19Cu);  if (depth < kMaxDepth) unit_0045(c, 53u, depth + 1u); else { c.pc = 0x00214DA0u; return; } if (c.pc != 0x002AC19Cu) [[unlikely]] return; }
L_002AC19C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_002AC1B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    set32(c.r[21], c.r[17].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 112u);
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[16].w[0] + 448u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7152u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 6;
L_002AC1E8:
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_002AC1F8:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC1F8u | kUnwind; return; } goto L_002AC1F8; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC1E8u | kUnwind; return; } goto L_002AC1E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[8].w[0] + 40u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[8].w[0]), c.f[0]);
    st32((c.r[8].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC258u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AC258u) [[unlikely]] return; }
L_002AC258:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002AC2B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC2B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 176u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    c.budget -= 19;
L_002AC2B8:
    set32(c.r[2], ld32((c.r[22].w[0] + 48u)));
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABF98u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 79u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC638; } }
L_002AC2DC:
    set32(c.r[2], ld32((c.r[22].w[0] + 48u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AC638; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
L_002AC300:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 347u)));
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[16].w[0] + 448u);
    set32(c.r[21], c.r[17].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC61C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 344u)));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC61C; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002AC348; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC390; } }
L_002AC348:
    c.r[2].d[0] = c.r[4].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC61C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC61C; } }
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 184u), c.f[1]);
    st32((c.r[16].w[0] + 180u), c.f[2]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC61C; } }
L_002AC390:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AC3B0; } }
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[2] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[2]);
    c.budget -= 6;
L_002AC3B0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002AC3C4; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.budget -= 3;
L_002AC3C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], ld32((c.r[2].w[0] + 28760u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 20);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 20);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 20);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AC444; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AC434; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC434; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC464; } }
L_002AC434:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC448; } }
L_002AC444:
    set32(c.r[2], c.r[6].w[0] << 16);
    c.budget -= 1;
L_002AC448:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
L_002AC464:
    set32(c.r[2], ld32((c.r[8].w[0] + 28760u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC494; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC494; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AC494; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AC520; } }
L_002AC494:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC508u);  if (depth < kMaxDepth) unit_0045(c, 53u, depth + 1u); else { c.pc = 0x00214DA0u; return; } if (c.pc != 0x002AC508u) [[unlikely]] return; }
L_002AC508:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_002AC520:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    set32(c.r[21], c.r[17].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 80u);
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[16].w[0] + 448u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC5C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7152u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 5;
L_002AC550:
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_002AC560:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC560u | kUnwind; return; } goto L_002AC560; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC550u | kUnwind; return; } goto L_002AC550; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[8].w[0] + 40u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[8].w[0]), c.f[0]);
    st32((c.r[8].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5C0u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AC5C0u) [[unlikely]] return; }
L_002AC5C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002AC61C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC61C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 176u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    c.budget -= 18;
L_002AC61C:
    set32(c.r[2], ld32((c.r[22].w[0] + 48u)));
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC300u | kUnwind; return; } goto L_002AC300; } }
L_002AC638:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AC63C:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 360u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC678:
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[10].w[0] + 24u), 0u);
    st32((c.r[10].w[0] + 28u), 0u);
    st32((c.r[10].w[0] + 32u), 0u);
    c.r[8].d[0] = ld8((c.r[12].w[0] + 2u));
    c.budget -= 10;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AC718; } }
    set32(c.r[2], c.r[9].w[0] >> 5);
    c.r[3].d[0] = c.r[9].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], 0u + 32u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC6E0; } }
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC700; } }
L_002AC6E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AC700:
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC71C; } }
L_002AC718:
    st32((c.r[10].w[0]), 0u);
    c.budget -= 1;
L_002AC71C:
    c.r[2].d[0] = ld8((c.r[12].w[0] + 3u));
    c.r[8].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AC7A4; } }
    set32(c.r[2], c.r[9].w[0] >> 5);
    c.r[3].d[0] = c.r[9].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], 0u + 32u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC76C; } }
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC78C; } }
L_002AC76C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AC78C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC7A8; } }
L_002AC7A4:
    st32((c.r[10].w[0] + 4u), 0u);
    c.budget -= 1;
L_002AC7A8:
    c.r[8].d[0] = ld8((c.r[12].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AC82C; } }
    set32(c.r[2], c.r[9].w[0] >> 5);
    c.r[3].d[0] = c.r[9].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], 0u + 32u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC7F4; } }
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC814; } }
L_002AC7F4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AC814:
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC830; } }
L_002AC82C:
    st32((c.r[10].w[0] + 8u), 0u);
    c.budget -= 1;
L_002AC830:
    c.r[8].d[0] = ld8((c.r[12].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AC8B4; } }
    set32(c.r[2], c.r[9].w[0] >> 5);
    c.r[3].d[0] = c.r[9].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], 0u + 32u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC87C; } }
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC89C; } }
L_002AC87C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AC89C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC8B8; } }
L_002AC8B4:
    st32((c.r[10].w[0] + 12u), 0u);
    c.budget -= 1;
L_002AC8B8:
    c.r[8].d[0] = ld8((c.r[12].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AC93C; } }
    set32(c.r[2], c.r[9].w[0] >> 5);
    c.r[3].d[0] = c.r[9].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], 0u + 32u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC904; } }
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC924; } }
L_002AC904:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AC924:
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC940; } }
L_002AC93C:
    st32((c.r[10].w[0] + 16u), 0u);
    c.budget -= 1;
L_002AC940:
    c.r[8].d[0] = ld8((c.r[12].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AC9C0; } }
    set32(c.r[2], c.r[9].w[0] >> 5);
    c.r[3].d[0] = c.r[9].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], 0u + 32u);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[9].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC98C; } }
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC9AC; } }
L_002AC98C:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[9].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AC9AC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC9C4; } }
L_002AC9C0:
    st32((c.r[10].w[0] + 20u), 0u);
    c.budget -= 1;
L_002AC9C4:
    c.r[2].d[0] = ld8((c.r[12].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC9DC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_002AC9DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC9E8:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 300u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 336u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 504u), c.f[21]);
    st32((c.r[29].w[0] + 496u), c.f[20]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA38u);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002ACA38u) [[unlikely]] return; }
L_002ACA38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACA7C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002ACA68; } }
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACA98; } }
L_002ACA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C0C0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 3084ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ACA88; } }
L_002ACA7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD75C; } }
L_002ACA88:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 23u));
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 22u));
    st32((c.r[29].w[0] + 312u), c.r[4].w[0]);
    c.budget -= 4;
L_002ACA98:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 3692u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACAB8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACABC; } }
L_002ACAB8:
    c.r[3].d[0] = c.r[3].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 1;
L_002ACABC:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 3592u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACAE4; } }
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACAF8; } }
L_002ACAE4:
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], c.r[2].w[0] + 528u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002ACAF8:
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[9], c.r[29].w[0] + 292u);
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[11], c.r[2].w[0] + 4112u);
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[10], c.r[29].w[0] + 296u);
    set32(c.r[8], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB28u);  if (depth < kMaxDepth) unit_006A(c, 8u, depth + 1u); else { c.pc = 0x002A82D0u; return; } if (c.pc != 0x002ACB28u) [[unlikely]] return; }
L_002ACB28:
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] - 26368u)));
    set32(c.r[30], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[21], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[30], c.r[30].w[0] << 1);
    set32(c.r[21], c.r[21].w[0] << 1);
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002ACB6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_002ACB70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACB70; } }
L_002ACB6C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ACB70:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 3600u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3592u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[22], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[29].w[0] + 304u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD180; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AD758; } }
L_002ACBA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[19], c.r[23].w[0] + 1u);
    set32(c.r[16], c.r[18].w[0] + 448u);
    set32(c.r[17], c.r[22].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD150; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 344u)));
    st8((c.r[18].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD150; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002AD150; } }
    c.f[0] = ld32((c.r[18].w[0] + 208u));
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[2] = ld32((c.r[18].w[0] + 216u));
    st32((c.r[18].w[0] + 176u), c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[1]);
    st32((c.r[18].w[0] + 184u), c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002AD150; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD150; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACC40; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002AD150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACC5C; } }
L_002ACC40:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002AD150; } }
L_002ACC5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACC80; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 316u), 0u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACC8C; } }
L_002ACC80:
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 316u), c.r[21].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
L_002ACC8C:
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[19], c.r[7].w[0] << 3);
    set32(c.r[20], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCA8u);  if (depth < kMaxDepth) unit_006B(c, 16u, depth + 1u); else { c.pc = 0x002AC678u; return; } if (c.pc != 0x002ACCA8u) [[unlikely]] return; }
L_002ACCA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACCDC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACE38; } }
L_002ACCDC:
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCF8u);  if (depth < kMaxDepth) unit_006B(c, 16u, depth + 1u); else { c.pc = 0x002AC678u; return; } if (c.pc != 0x002ACCF8u) [[unlikely]] return; }
L_002ACCF8:
    set32(c.r[6], ld32((c.r[29].w[0] + 308u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD0Cu);  if (depth < kMaxDepth) unit_0069(c, 90u, depth + 1u); else { c.pc = 0x002A5FA8u; return; } if (c.pc != 0x002ACD0Cu) [[unlikely]] return; }
L_002ACD0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[11], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 2048u);
    set32(c.r[12], c.r[12].w[0] - c.r[6].w[0]);
    set32(c.r[10], c.r[9].w[0] + 2048u);
    set32(c.r[2], c.r[12].w[0] + 2048u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    mmi::pextlw(c.r[6], c.r[9], c.r[3]);
    mmi::pextlw(c.r[5], c.r[11], c.r[12]);
    mmi::pcpyld(c.r[3], c.r[5], c.r[6]);
    mmi::pextlw(c.r[8], c.r[10], c.r[4]);
    mmi::pextlw(c.r[7], c.r[11], c.r[2]);
    mmi::pcpyld(c.r[4], c.r[7], c.r[8]);
    mmi::psllw(c.r[3], c.r[3], 20u);
    mmi::psllw(c.r[4], c.r[4], 20u);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    mmi::psraw(c.r[8], c.r[4], 20u);
    mmi::psraw(c.r[9], c.r[3], 20u);
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    mmi::pabsw(c.r[2], c.r[9]);
    mmi::pabsw(c.r[3], c.r[8]);
    mmi::pminw(c.r[4], c.r[2], c.r[2]);
    mmi::prot3w(c.r[7], c.r[2]);
    mmi::pminw(c.r[5], c.r[3], c.r[3]);
    mmi::prot3w(c.r[6], c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 41;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ACDC4; } }
    mmi::pcpyud(c.r[2], c.r[9], c.r[0]);
    mmi::pminw(c.r[3], c.r[9], c.r[9]);
    mmi::prot3w(c.r[4], c.r[9]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACDD0; } }
L_002ACDC4:
    mmi::pcpyud(c.r[2], c.r[8], c.r[0]);
    mmi::pminw(c.r[3], c.r[8], c.r[8]);
    mmi::prot3w(c.r[4], c.r[8]);
    c.budget -= 3;
L_002ACDD0:
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 6;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x002ACDE4u);  goto L_002ACDE8; }
L_002ACDE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[29].w[0] + 100u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 20;
L_002ACE38:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 20);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    set32(c.r[4], c.r[4].w[0] << 20);
    set32(c.r[3], c.r[3].w[0] << 20);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 20));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 16);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28760u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    st32((c.r[22].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 27;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ACEBC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACEBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACEBC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ACF5C; } }
L_002ACEBC:
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[3]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF44u);  if (depth < kMaxDepth) unit_0045(c, 53u, depth + 1u); else { c.pc = 0x00214DA0u; return; } if (c.pc != 0x002ACF44u) [[unlikely]] return; }
L_002ACF44:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[18].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_002ACF5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 337u)));
    set32(c.r[19], c.r[23].w[0] + 1u);
    set32(c.r[17], c.r[22].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 224u);
    set32(c.r[16], c.r[18].w[0] + 448u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7152u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 6;
L_002ACF90:
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_002ACFA0:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACFA0u | kUnwind; return; } goto L_002ACFA0; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACF90u | kUnwind; return; } goto L_002ACF90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[8].w[0] + 40u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 224u);
    st32((c.r[8].w[0]), c.f[0]);
    st32((c.r[8].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD000u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AD000u) [[unlikely]] return; }
L_002AD000:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD150; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD150; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD070; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[18].w[0] + 176u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[18].w[0] + 176u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[2]);
    st32((c.r[18].w[0] + 184u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD14C; } }
L_002AD070:
    set32(c.r[6], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[7], c.r[18].w[0] + 176u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.budget -= 17;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x002AD0B0u);  goto L_002AD0B4; }
L_002AD0B4:
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 176u), c.f[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[2]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 184u), c.f[1]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 38;
L_002AD14C:
    st32((c.r[18].w[0] + 56u), c.f[1]);
    c.budget -= 1;
L_002AD150:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACBA0u | kUnwind; return; } goto L_002ACBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD758; } }
L_002AD180:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AD758; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    set32(c.r[20], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 9;
L_002AD1B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[19], c.r[23].w[0] + 1u);
    set32(c.r[16], c.r[18].w[0] + 448u);
    set32(c.r[17], c.r[22].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 344u)));
    st8((c.r[18].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD730; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002AD730; } }
    c.f[0] = ld32((c.r[18].w[0] + 208u));
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[2] = ld32((c.r[18].w[0] + 216u));
    st32((c.r[18].w[0] + 176u), c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[1]);
    st32((c.r[18].w[0] + 184u), c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002AD730; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD730; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD258; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002AD730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD274; } }
L_002AD258:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002AD730; } }
L_002AD274:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD298; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 316u), 0u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD2A4; } }
L_002AD298:
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 316u), c.r[21].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
L_002AD2A4:
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[16], c.r[7].w[0] << 3);
    set32(c.r[19], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2C0u);  if (depth < kMaxDepth) unit_006B(c, 16u, depth + 1u); else { c.pc = 0x002AC678u; return; } if (c.pc != 0x002AD2C0u) [[unlikely]] return; }
L_002AD2C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD2EC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD440; } }
L_002AD2EC:
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD304u);  if (depth < kMaxDepth) unit_006B(c, 16u, depth + 1u); else { c.pc = 0x002AC678u; return; } if (c.pc != 0x002AD304u) [[unlikely]] return; }
L_002AD304:
    set32(c.r[6], ld32((c.r[29].w[0] + 308u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD318u);  if (depth < kMaxDepth) unit_0069(c, 90u, depth + 1u); else { c.pc = 0x002A5FA8u; return; } if (c.pc != 0x002AD318u) [[unlikely]] return; }
L_002AD318:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[3].w[0] + 2048u);
    set32(c.r[11], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[9], c.r[9].w[0] - c.r[5].w[0]);
    set32(c.r[10], c.r[9].w[0] + 2048u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[11], c.r[11].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[2], c.r[11].w[0] + 2048u);
    mmi::pextlw(c.r[6], c.r[9], c.r[3]);
    mmi::pextlw(c.r[5], c.r[20], c.r[11]);
    mmi::pcpyld(c.r[3], c.r[5], c.r[6]);
    mmi::pextlw(c.r[8], c.r[10], c.r[4]);
    mmi::pextlw(c.r[7], c.r[20], c.r[2]);
    mmi::pcpyld(c.r[4], c.r[7], c.r[8]);
    mmi::psllw(c.r[3], c.r[3], 20u);
    mmi::psllw(c.r[4], c.r[4], 20u);
    mmi::psraw(c.r[9], c.r[3], 20u);
    mmi::psraw(c.r[8], c.r[4], 20u);
    mmi::pabsw(c.r[2], c.r[9]);
    mmi::pabsw(c.r[3], c.r[8]);
    mmi::pminw(c.r[4], c.r[2], c.r[2]);
    mmi::prot3w(c.r[7], c.r[2]);
    mmi::pminw(c.r[5], c.r[3], c.r[3]);
    mmi::prot3w(c.r[6], c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 40;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AD3CC; } }
    mmi::pcpyud(c.r[2], c.r[9], c.r[0]);
    mmi::pminw(c.r[3], c.r[9], c.r[9]);
    mmi::prot3w(c.r[4], c.r[9]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD3D8; } }
L_002AD3CC:
    mmi::pcpyud(c.r[2], c.r[8], c.r[0]);
    mmi::pminw(c.r[3], c.r[8], c.r[8]);
    mmi::prot3w(c.r[4], c.r[8]);
    c.budget -= 3;
L_002AD3D8:
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 6;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x002AD3ECu);  goto L_002AD3F0; }
L_002AD3F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[30].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 20;
L_002AD440:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 20);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    set32(c.r[4], c.r[4].w[0] << 20);
    set32(c.r[3], c.r[3].w[0] << 20);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 20));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 16);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28760u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    st32((c.r[22].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 27;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AD4C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD4C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD4C4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AD550; } }
L_002AD4C4:
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD538u);  if (depth < kMaxDepth) unit_0045(c, 53u, depth + 1u); else { c.pc = 0x00214DA0u; return; } if (c.pc != 0x002AD538u) [[unlikely]] return; }
L_002AD538:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[18].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_002AD550:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 337u)));
    set32(c.r[19], c.r[23].w[0] + 1u);
    set32(c.r[17], c.r[22].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 192u);
    set32(c.r[16], c.r[18].w[0] + 448u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD5F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7152u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 5;
L_002AD580:
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_002AD590:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD590u | kUnwind; return; } goto L_002AD590; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD580u | kUnwind; return; } goto L_002AD580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[8].w[0] + 40u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[8].w[0]), c.f[0]);
    st32((c.r[8].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5F0u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AD5F0u) [[unlikely]] return; }
L_002AD5F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD730; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD730; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD654; } }
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[18].w[0] + 176u);
    st32((c.r[18].w[0] + 176u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[2]);
    st32((c.r[18].w[0] + 184u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD72C; } }
L_002AD654:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[6], c.r[18].w[0] + 176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 15;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x002AD68Cu);  goto L_002AD690; }
L_002AD690:
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 176u), c.f[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[2]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 184u), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 39;
L_002AD72C:
    st32((c.r[18].w[0] + 56u), c.f[1]);
    c.budget -= 1;
L_002AD730:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD1B8u | kUnwind; return; } goto L_002AD1B8; } }
L_002AD758:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AD75C:
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 336u));
    c.f[21] = ld32((c.r[29].w[0] + 504u));
    c.f[20] = ld32((c.r[29].w[0] + 496u));
    set32(c.r[29], c.r[29].w[0] + 512u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD798:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[2].w[0] + 12288u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7D0u);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AD7D0u) [[unlikely]] return; }
L_002AD7D0:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ADA2C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD838; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD9B4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD818; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD818:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD9D0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ADA0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD838:
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD9EC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 71ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD870; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ADA68; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ADA88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD870:
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ADA48; } }
    set32(c.r[2], 0u + 129u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ADA9C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD898u);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AD898u) [[unlikely]] return; }
L_002AD898:
    c.r[18].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8B0u);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002AD8B0u) [[unlikely]] return; }
L_002AD8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADA9C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 3692u)));
    c.r[3].d[0] = c.r[18].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8CC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002AD8CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 3592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8EC; } }
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD8F8; } }
L_002AD8EC:
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 528u);
    c.budget -= 3;
L_002AD8F8:
    set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD910u);  if (depth < kMaxDepth) unit_0069(c, 148u, depth + 1u); else { c.pc = 0x002A7700u; return; } if (c.pc != 0x002AD910u) [[unlikely]] return; }
L_002AD910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD918:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD92Cu);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002AD92Cu) [[unlikely]] return; }
L_002AD92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADA9C; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 3692u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AD968; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD96C; } }
L_002AD968:
    c.r[4].d[0] = c.r[7].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 1;
L_002AD96C:
    set32(c.r[2], ld32((c.r[17].w[0] + 3592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD98C; } }
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD998; } }
L_002AD98C:
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 528u);
    c.budget -= 3;
L_002AD998:
    set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9ACu);  if (depth < kMaxDepth) unit_0069(c, 148u, depth + 1u); else { c.pc = 0x002A7700u; return; } if (c.pc != 0x002AD9ACu) [[unlikely]] return; }
L_002AD9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD9B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9C8u);  if (depth < kMaxDepth) unit_006A(c, 77u, depth + 1u); else { c.pc = 0x002ABE88u; return; } if (c.pc != 0x002AD9C8u) [[unlikely]] return; }
L_002AD9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD9D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9E4u);  if (depth < kMaxDepth) unit_006A(c, 62u, depth + 1u); else { c.pc = 0x002AB268u; return; } if (c.pc != 0x002AD9E4u) [[unlikely]] return; }
L_002AD9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002AD9EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA04u);  if (depth < kMaxDepth) unit_006A(c, 11u, depth + 1u); else { c.pc = 0x002A84C0u; return; } if (c.pc != 0x002ADA04u) [[unlikely]] return; }
L_002ADA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002ADA0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA24u);  if (depth < kMaxDepth) unit_006A(c, 11u, depth + 1u); else { c.pc = 0x002A84C0u; return; } if (c.pc != 0x002ADA24u) [[unlikely]] return; }
L_002ADA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002ADA2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA40u);  if (depth < kMaxDepth) unit_006A(c, 41u, depth + 1u); else { c.pc = 0x002AA5F0u; return; } if (c.pc != 0x002ADA40u) [[unlikely]] return; }
L_002ADA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002ADA48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA60u);  if (depth < kMaxDepth) unit_006A(c, 26u, depth + 1u); else { c.pc = 0x002A94A8u; return; } if (c.pc != 0x002ADA60u) [[unlikely]] return; }
L_002ADA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002ADA68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA80u);  if (depth < kMaxDepth) unit_006A(c, 26u, depth + 1u); else { c.pc = 0x002A94A8u; return; } if (c.pc != 0x002ADA80u) [[unlikely]] return; }
L_002ADA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA9C; } }
L_002ADA88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA9Cu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC9E8u; return; } if (c.pc != 0x002ADA9Cu) [[unlikely]] return; }
L_002ADA9C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ADAC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[21], c.r[2].w[0] - 30168u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 16;
L_002ADB00:
    set32(c.r[4], c.r[19].w[0] + 12288u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB20u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002ADB20u) [[unlikely]] return; }
L_002ADB20:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADB60; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 4;
L_002ADB48:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB48u | kUnwind; return; } goto L_002ADB48; } }
L_002ADB60:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB00u | kUnwind; return; } goto L_002ADB00; } }
    set32(c.r[4], c.r[20].w[0] - 26432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB7Cu);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002ADB7Cu) [[unlikely]] return; }
L_002ADB7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ADC20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[22], c.r[2].w[0] + 14664u);
    set32(c.r[21], c.r[3].w[0] - 30168u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 6;
L_002ADBA0:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[19].w[0] + 12288u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[7], c.r[29].w[0] + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADBB8u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002ADBB8u) [[unlikely]] return; }
L_002ADBB8:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002ADC08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 3588u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[17].d[0];  if (t) { goto L_002ADC08; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADC08; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_002ADBF0:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADBF0u | kUnwind; return; } goto L_002ADBF0; } }
L_002ADC08:
    set32(c.r[4], c.r[20].w[0] - 26432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC14u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002ADC14u) [[unlikely]] return; }
L_002ADC14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADBA0u | kUnwind; return; } goto L_002ADBA0; } }
L_002ADC20:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ADC50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC68u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002ADC68u) [[unlikely]] return; }
L_002ADC68:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC7Cu);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002ADC7Cu) [[unlikely]] return; }
L_002ADC7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADEA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADEA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32544u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002AC000u < 16384u) { entry = entries_006B[(t - 0x002AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ADCBC:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADD30; } }
L_002ADCD4:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADD30; } }
L_002ADCF0:
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADDD4; } }
L_002ADD14:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
L_002ADD30:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADDD4; } }
L_002ADD48:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADD98; } }
L_002ADD58:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[3], c.r[3].w[0] + 6u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADDD4; } }
L_002ADD8C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_002ADD98:
    set32(c.r[4], ld32((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 6u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADDD4; } }
L_002ADDB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADEA8; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADEA8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 1;
L_002ADDD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[5].w[0] + 3u);
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002ADE60; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4D410000u);
    set32(c.r[9], 0u - 4u);
    c.r[6].d[0] = c.r[6].d[0] | 17198ull;
    c.budget -= 4;
L_002ADE00:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_002ADE18; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002ADE24; } }
L_002ADE18:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADE40; } }
L_002ADE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17198ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002ADE3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ADEA8; } }
L_002ADE3C:
    set32(c.r[2], 0u + 24u);
    c.budget -= 1;
L_002ADE40:
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADE00u | kUnwind; return; } goto L_002ADE00; } }
L_002ADE60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D410000u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 17198ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ADE9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17198ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002ADE9C; } }
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ADE9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002ADEA8; } }
L_002ADE9C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADEAC; } }
L_002ADEA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADEAC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ADEC0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 576u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ADF54; } }
    set32(c.r[3], c.r[2].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 2;
L_002ADEFC:
    ldl(c.r[4], (c.r[2].w[0] + 7u));
    ldr(c.r[4], (c.r[2].w[0]));
    ldl(c.r[7], (c.r[2].w[0] + 15u));
    ldr(c.r[7], (c.r[2].w[0] + 8u));
    ldl(c.r[8], (c.r[2].w[0] + 23u));
    ldr(c.r[8], (c.r[2].w[0] + 16u));
    ldl(c.r[9], (c.r[2].w[0] + 31u));
    ldr(c.r[9], (c.r[2].w[0] + 24u));
    sdl(c.r[4], (c.r[6].w[0] + 7u));
    sdr(c.r[4], (c.r[6].w[0]));
    sdl(c.r[7], (c.r[6].w[0] + 15u));
    sdr(c.r[7], (c.r[6].w[0] + 8u));
    sdl(c.r[8], (c.r[6].w[0] + 23u));
    sdr(c.r[8], (c.r[6].w[0] + 16u));
    sdl(c.r[9], (c.r[6].w[0] + 31u));
    sdr(c.r[9], (c.r[6].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADEFCu | kUnwind; return; } goto L_002ADEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADF8C; } }
L_002ADF54:
    set32(c.r[3], c.r[2].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 2;
L_002ADF5C:
    c.r[4].d[0] = ld64((c.r[2].w[0]));
    c.r[7].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[2].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[4].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADF5Cu | kUnwind; return; } goto L_002ADF5C; } }
L_002ADF8C:
    set32(c.r[5], c.r[5].w[0] - 32696u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF9Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002ADF9Cu) [[unlikely]] return; }
L_002ADF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFACu);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x002ADFACu) [[unlikely]] return; }
L_002ADFAC:
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADFFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] - 32688u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002ADFD8; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADFE4; } }
L_002ADFD8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFE4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002ADFE4u) [[unlikely]] return; }
L_002ADFE4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFF4u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002ADFF4u) [[unlikely]] return; }
L_002ADFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE040; } }
L_002ADFFC:
    c.r[2].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] - 32680u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AE024; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE030; } }
L_002AE024:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE030u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002AE030u) [[unlikely]] return; }
L_002AE030:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE040u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002AE040u) [[unlikely]] return; }
L_002AE040:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 512u);
    set32(c.r[9], c.r[3].w[0] >> 31);
    set32(c.r[2], 0u - c.r[3].w[0]);
    if (c.r[9].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AE078; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[4], c.r[29].w[0] + 513u);
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0B0; } }
L_002AE078:
    set32(c.r[5], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002AE080:
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x002AE088u);  goto L_002AE08C; }
L_002AE08C:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x002AE0A0u);  goto L_002AE0A4; }
L_002AE0A4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE080u | kUnwind; return; } goto L_002AE080; } }
L_002AE0B0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_002AE0C4:
    c.r[2].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0EC; } }
L_002AE0D0:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE0D0u | kUnwind; return; } goto L_002AE0D0; } }
L_002AE0EC:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE100u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002AE100u) [[unlikely]] return; }
L_002AE100:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE110u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002AE110u) [[unlikely]] return; }
L_002AE110:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 576u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE128:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 512u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE170; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12048u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE16Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE16Cu) [[unlikely]] return; }
L_002AE16C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002AE170:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002AE184; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE194; } }
L_002AE184:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE194u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002AE194u) [[unlikely]] return; }
L_002AE194:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE274; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1B8u);  if (depth < kMaxDepth) unit_006B(c, 73u, depth + 1u); else { c.pc = 0x002ADEC0u; return; } if (c.pc != 0x002AE1B8u) [[unlikely]] return; }
L_002AE1B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] - 32672u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AE1D4; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE1E0; } }
L_002AE1D4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1E0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002AE1E0u) [[unlikely]] return; }
L_002AE1E0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1F0u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002AE1F0u) [[unlikely]] return; }
L_002AE1F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002AE204; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE214; } }
L_002AE204:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE214u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002AE214u) [[unlikely]] return; }
L_002AE214:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE224u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002AE224u) [[unlikely]] return; }
L_002AE224:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_002AE230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE250; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_002AE250:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE230u | kUnwind; return; } goto L_002AE230; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE26Cu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x002AE26Cu) [[unlikely]] return; }
L_002AE26C:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002AE274:
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 512u));
    set32(c.r[29], c.r[29].w[0] + 576u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE290:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[2].w[0] - 26384u)));
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[18], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE324; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002AE2E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[2].w[0] + 6u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE318u);  if (depth < kMaxDepth) unit_006B(c, 208u, depth + 1u); else { c.pc = 0x002AF908u; return; } if (c.pc != 0x002AE318u) [[unlikely]] return; }
L_002AE318:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE2E8u | kUnwind; return; } goto L_002AE2E8; } }
L_002AE324:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[23].w[0] - 26384u)));
    set32(c.r[18], c.r[3].w[0] - 32664u);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE3A8; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_002AE358:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[30].w[0] + 12288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE374u);  if (depth < kMaxDepth) unit_006C(c, 150u, depth + 1u); else { c.pc = 0x002B1960u; return; } if (c.pc != 0x002AE374u) [[unlikely]] return; }
L_002AE374:
    set32(c.r[4], ld32((c.r[22].w[0] + 28764u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AE390; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE390u);  if (depth < kMaxDepth) unit_006B(c, 86u, depth + 1u); else { c.pc = 0x002AE128u; return; } if (c.pc != 0x002AE390u) [[unlikely]] return; }
L_002AE390:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE358u | kUnwind; return; } goto L_002AE358; } }
L_002AE3A8:
    set32(c.r[2], ld32((c.r[23].w[0] - 26384u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[23].w[0] - 26384u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE3C0u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002AE3C0u) [[unlikely]] return; }
L_002AE3C0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002AE458; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AE458; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 26448u);
    set32(c.r[2], c.r[2].w[0] - 32632u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE440u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002AE440u) [[unlikely]] return; }
L_002AE440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32656u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE458u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002AE458u) [[unlikely]] return; }
L_002AE458:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0] + 28760u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AE4A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AE4A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AE4A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AE548; } }
L_002AE4A8:
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[3] = c.r[7].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[5] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[6] = ld32((c.r[16].w[0] + 52u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[7] = ld32((c.r[16].w[0] + 56u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 20u), c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[7]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0]), c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[2]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE530u);  if (depth < kMaxDepth) unit_0045(c, 53u, depth + 1u); else { c.pc = 0x00214DA0u; return; } if (c.pc != 0x002AE530u) [[unlikely]] return; }
L_002AE530:
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.budget -= 6;
L_002AE548:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE560:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[3], c.r[3].w[0] - 30944u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE588:
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 30944u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE5A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] - 2u)));
    set32(c.r[2], 0u + 30u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE5C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[7], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u + 448u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 30944u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 176u));
    st32((c.r[6].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 180u));
    st32((c.r[6].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 184u));
    st32((c.r[6].w[0] + 136u), c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE620:
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE650:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 448u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 448u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE69Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002AE69Cu) [[unlikely]] return; }
L_002AE69C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    set32(c.r[16], c.r[16].w[0] - 26352u);
    set32(c.r[6], 0u + 4272u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6D0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002AE6D0u) [[unlikely]] return; }
L_002AE6D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[16].w[0] + 24u), c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22080u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 48u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3600u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6F8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002AE6F8u) [[unlikely]] return; }
L_002AE6F8:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE70Cu);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AE70Cu) [[unlikely]] return; }
L_002AE70C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE720u);  if (depth < kMaxDepth) unit_006B(c, 36u, depth + 1u); else { c.pc = 0x002AD798u; return; } if (c.pc != 0x002AE720u) [[unlikely]] return; }
L_002AE720:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[2].w[0] + 176u));
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[18]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[19].w[0]), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 448u));
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.f[0] = ld32((c.r[2].w[0] + 180u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[20].w[0]), c.f[1]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] + 184u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[21].w[0]), c.f[1]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[21]);
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE778:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE8BC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7DCu);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002AE7DCu) [[unlikely]] return; }
L_002AE7DC:
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7ECu);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002AE7ECu) [[unlikely]] return; }
L_002AE7EC:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = ld32((c.r[18].w[0] + 176u));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[21]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE828u);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002AE828u) [[unlikely]] return; }
L_002AE828:
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE838u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002AE838u) [[unlikely]] return; }
L_002AE838:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 184u));
    c.f[4] = ld32((c.r[18].w[0] + 176u));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[18].w[0] + 176u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 3648u));
    c.f[3] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 136u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[19].w[0] + 128u), c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 3652u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 136u), c.f[2]);
    st32((c.r[17].w[0] + 3656u), c.f[3]);
    c.f[0] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[17].w[0] + 3648u), c.f[20]);
    st32((c.r[17].w[0] + 3660u), c.f[0]);
    st32((c.r[17].w[0] + 3652u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[17].w[0] + 248u), c.f[1]);
    c.budget -= 33;
L_002AE8BC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE8E8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 112u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE998; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 108u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AE998; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 3600u)));
    st32((c.r[16].w[0] + 3600u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 113u)));
    st32((c.r[16].w[0] + 3592u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE96Cu);  if (depth < kMaxDepth) unit_0045(c, 54u, depth + 1u); else { c.pc = 0x00214E78u; return; } if (c.pc != 0x002AE96Cu) [[unlikely]] return; }
L_002AE96C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 28760u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE97Cu);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AE97Cu) [[unlikely]] return; }
L_002AE97C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE990u);  if (depth < kMaxDepth) unit_006B(c, 36u, depth + 1u); else { c.pc = 0x002AD798u; return; } if (c.pc != 0x002AE990u) [[unlikely]] return; }
L_002AE990:
    st32((c.r[18].w[0] + 28760u), 0u);
    st32((c.r[16].w[0] + 3600u), c.r[19].w[0]);
    c.budget -= 2;
L_002AE998:
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
L_002AE9C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEA3C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AEA3C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] - 30944u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AEA3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 416u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 4096u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AEA3C; } }
    c.budget -= 1;
L_002AEA20:
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 448u);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA20u | kUnwind; return; } goto L_002AEA20; } }
L_002AEA3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEA48:
    set32(c.r[7], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[3].w[0] + 3652u), c.f[0]);
    st32((c.r[3].w[0] + 3648u), c.f[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[6], ld32((c.r[9].w[0] + 36u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 40u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002AEAF0; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEAE0; } }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[9].w[0] + 48u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAE0u);  if (depth < kMaxDepth) unit_0069(c, 127u, depth + 1u); else { c.pc = 0x002A6DD0u; return; } if (c.pc != 0x002AEAE0u) [[unlikely]] return; }
L_002AEAE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAF0u);  if (depth < kMaxDepth) unit_0069(c, 140u, depth + 1u); else { c.pc = 0x002A7390u; return; } if (c.pc != 0x002AEAF0u) [[unlikely]] return; }
L_002AEAF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEB08:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x07FF0000u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEB28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AEB28:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002AEB44:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEB60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002AEB60:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF8010000u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEB80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AEB80:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEB9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002AEB9C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEBB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002AEBB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEBC0:
    set32(c.r[8], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] << 16);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 30944u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEC18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 26384u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEC28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28756u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC48u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AEC48u) [[unlikely]] return; }
L_002AEC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC5Cu);  if (depth < kMaxDepth) unit_006C(c, 152u, depth + 1u); else { c.pc = 0x002B1998u; return; } if (c.pc != 0x002AEC5Cu) [[unlikely]] return; }
L_002AEC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEC6C; } }
L_002AEC64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 32520u);
    c.budget -= 2;
L_002AEC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEC80:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC9Cu);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AEC9Cu) [[unlikely]] return; }
L_002AEC9C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AECB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECC0u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AECC0u) [[unlikely]] return; }
L_002AECC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECD4u);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AECD4u) [[unlikely]] return; }
L_002AECD4:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AECE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AED08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AED30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    st32((c.r[2].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AED48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 600u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 600u);
    set32(c.r[4], c.r[18].w[0] + 528u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED8Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002AED8Cu) [[unlikely]] return; }
L_002AED8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002AEDA8; } }
    set32(c.r[4], c.r[17].w[0] + 2928u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDA8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002AEDA8u) [[unlikely]] return; }
L_002AEDA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AEE40; } }
    set32(c.r[2], c.r[17].w[0] + 528u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[17].w[0] + 2928u);
    c.budget -= 7;
L_002AEDE0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002AEE08; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002AEE08; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_002AEE08:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEDE0u | kUnwind; return; } goto L_002AEDE0; } }
    set32(c.r[4], 0u + 600u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 600u);
    set32(c.r[4], c.r[4].w[0] + 1728u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE40u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002AEE40u) [[unlikely]] return; }
L_002AEE40:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 448u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30944u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 337u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEEF4; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[17].w[0] + 337u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEEC4u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002AEEC4u) [[unlikely]] return; }
L_002AEEC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEEF4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AEEF4u) [[unlikely]] return; }
L_002AEEF4:
    c.f[0] = ld32((c.r[17].w[0] + 224u));
    set32(c.r[2], c.r[17].w[0] + 176u);
    c.f[2] = ld32((c.r[17].w[0] + 228u));
    set32(c.r[16], c.r[17].w[0] + 80u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[17].w[0] + 232u));
    st32((c.r[17].w[0] + 180u), c.f[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 212u), c.f[2]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 184u), c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0] + 216u), c.f[1]);
    st32((c.r[17].w[0] + 176u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 80u);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF50u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AEF50u) [[unlikely]] return; }
L_002AEF50:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[17].w[0] + 160u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 160u), c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AEF88:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 448u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30944u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 337u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF018; } }
    st8((c.r[17].w[0] + 337u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFE8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002AEFE8u) [[unlikely]] return; }
L_002AEFE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF018u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AF018u) [[unlikely]] return; }
L_002AF018:
    c.f[0] = ld32((c.r[17].w[0] + 224u));
    set32(c.r[2], c.r[17].w[0] + 176u);
    c.f[2] = ld32((c.r[17].w[0] + 228u));
    set32(c.r[16], c.r[17].w[0] + 80u);
    c.f[1] = ld32((c.r[17].w[0] + 232u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 180u), c.f[2]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 212u), c.f[2]);
    st32((c.r[17].w[0] + 184u), c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0] + 216u), c.f[1]);
    st32((c.r[17].w[0] + 176u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 80u);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF070u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AF070u) [[unlikely]] return; }
L_002AF070:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[17].w[0] + 160u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 160u), c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF0A8:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[13].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AF0F4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[5], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u + 448u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    mmi::mult(c, 0, c.r[13].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 64u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF0F4:
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u + 448u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    mmi::mult(c, 0, c.r[13].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 337u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF1E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7152u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 5;
L_002AF178:
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[8], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
L_002AF188:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF188u | kUnwind; return; } goto L_002AF188; } }
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF178u | kUnwind; return; } goto L_002AF178; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1E4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002AF1E4u) [[unlikely]] return; }
L_002AF1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF1F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 3692u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF210; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF214; } }
L_002AF210:
    c.r[5].d[0] = c.r[5].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 1;
L_002AF214:
    set32(c.r[2], ld32((c.r[4].w[0] + 3592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF238; } }
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 528u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF238:
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF27Cu);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AF27Cu) [[unlikely]] return; }
L_002AF27C:
    c.r[18].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF294u);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002AF294u) [[unlikely]] return; }
L_002AF294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF2A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF304; } }
L_002AF2A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 3692u)));
    c.r[3].d[0] = c.r[18].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF2BC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002AF2BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 3592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF2DC; } }
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF2E8; } }
L_002AF2DC:
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 528u);
    c.budget -= 3;
L_002AF2E8:
    set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF300u);  if (depth < kMaxDepth) unit_0069(c, 148u, depth + 1u); else { c.pc = 0x002A7700u; return; } if (c.pc != 0x002AF300u) [[unlikely]] return; }
L_002AF300:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AF304:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF34Cu);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002AF34Cu) [[unlikely]] return; }
L_002AF34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF360; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF3DC; } }
L_002AF360:
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 3692u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF394; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF398; } }
L_002AF394:
    c.r[4].d[0] = c.r[7].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 1;
L_002AF398:
    set32(c.r[2], ld32((c.r[16].w[0] + 3592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF3B8; } }
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF3C4; } }
L_002AF3B8:
    set32(c.r[2], 0u + 600u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 528u);
    c.budget -= 3;
L_002AF3C4:
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF3D8u);  if (depth < kMaxDepth) unit_0069(c, 148u, depth + 1u); else { c.pc = 0x002A7700u; return; } if (c.pc != 0x002AF3D8u) [[unlikely]] return; }
L_002AF3D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AF3DC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF3F8:
    set32(c.r[2], c.r[5].w[0] >> 5);
    set32(c.r[8], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF438; } }
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF458; } }
L_002AF438:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 8;
L_002AF458:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF468:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF524; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF524; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 108u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF524; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 30944u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 3600u)));
    st32((c.r[16].w[0] + 3600u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 113u)));
    st32((c.r[16].w[0] + 3592u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF4F8u);  if (depth < kMaxDepth) unit_0045(c, 54u, depth + 1u); else { c.pc = 0x00214E78u; return; } if (c.pc != 0x002AF4F8u) [[unlikely]] return; }
L_002AF4F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 28760u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF508u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AF508u) [[unlikely]] return; }
L_002AF508:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF51Cu);  if (depth < kMaxDepth) unit_006B(c, 36u, depth + 1u); else { c.pc = 0x002AD798u; return; } if (c.pc != 0x002AF51Cu) [[unlikely]] return; }
L_002AF51C:
    st32((c.r[18].w[0] + 28760u), 0u);
    st32((c.r[16].w[0] + 3600u), c.r[19].w[0]);
    c.budget -= 2;
L_002AF524:
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
L_002AF550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], 0u + 3009u);
    set32(c.r[2], c.r[2].w[0] - 30168u);
    set32(c.r[2], c.r[2].w[0] + 12036u);
    c.budget -= 4;
L_002AF560:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF560u | kUnwind; return; } goto L_002AF560; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF580:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[20], c.r[2].w[0] - 30168u);
    c.budget -= 14;
L_002AF5B8:
    set32(c.r[4], c.r[19].w[0] + 12288u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF5D8u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002AF5D8u) [[unlikely]] return; }
L_002AF5D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF618; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
L_002AF600:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF600u | kUnwind; return; } goto L_002AF600; } }
L_002AF618:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF5B8u | kUnwind; return; } goto L_002AF5B8; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14700u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF6B0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 3588u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AF6B0; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF6B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 30168u);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_002AF698:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF698u | kUnwind; return; } goto L_002AF698; } }
L_002AF6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF6B8:
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 30944u);
    set32(c.r[7], 0u - 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 12;
L_002AF6E8:
    set32(c.r[2], ld32((c.r[5].w[0] - 1200u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002AF708; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    st32((c.r[5].w[0] - 1200u), c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002AF708:
    set32(c.r[5], c.r[5].w[0] + 600u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF6E8u | kUnwind; return; } goto L_002AF6E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF720:
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 30944u);
    set32(c.r[8], 0u - 2u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 12;
L_002AF750:
    set32(c.r[4], ld32((c.r[5].w[0] - 1200u)));
    c.r[2].d[0] = c.r[4].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF774; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[8].w[0] - c.r[4].w[0]);
    st32((c.r[5].w[0] - 1200u), c.r[2].w[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002AF774:
    set32(c.r[5], c.r[5].w[0] + 600u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF750u | kUnwind; return; } goto L_002AF750; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28764u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0] + 12048u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 28764u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF7C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF7D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[4].w[0] + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_002AF7F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7FCu);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AF7FCu) [[unlikely]] return; }
L_002AF7FC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002AF81C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF830; } }
L_002AF81C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3010ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF7F0u | kUnwind; return; } goto L_002AF7F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF830:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF860u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AF860u) [[unlikely]] return; }
L_002AF860:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF874u);  if (depth < kMaxDepth) unit_0069(c, 87u, depth + 1u); else { c.pc = 0x002A5938u; return; } if (c.pc != 0x002AF874u) [[unlikely]] return; }
L_002AF874:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8A0u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AF8A0u) [[unlikely]] return; }
L_002AF8A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8B4u);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AF8B4u) [[unlikely]] return; }
L_002AF8B4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8E0u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002AF8E0u) [[unlikely]] return; }
L_002AF8E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8F4u);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AF8F4u) [[unlikely]] return; }
L_002AF8F4:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF908:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF948u);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x002B1948u; return; } if (c.pc != 0x002AF948u) [[unlikely]] return; }
L_002AF948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF960; } }
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 4;
L_002AF960:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 4248u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9A4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002AF9A4u) [[unlikely]] return; }
L_002AF9A4:
    set32(c.r[3], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 3588u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 18704u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 26432u);
    set32(c.r[8], c.r[8].w[0] - 1664u);
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 4272u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9F4u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x002AF9F4u) [[unlikely]] return; }
L_002AF9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFA08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 26432u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA3Cu);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002AFA3Cu) [[unlikely]] return; }
L_002AFA3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AFAB0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 2;
L_002AFA50:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002AFA98; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[19].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA6Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002AFA6Cu) [[unlikely]] return; }
L_002AFA6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA7Cu);  if (depth < kMaxDepth) unit_0060(c, 267u, depth + 1u); else { c.pc = 0x00283CE8u; return; } if (c.pc != 0x002AFA7Cu) [[unlikely]] return; }
L_002AFA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFA98; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA98u);  if (depth < kMaxDepth) unit_0060(c, 252u, depth + 1u); else { c.pc = 0x00283B68u; return; } if (c.pc != 0x002AFA98u) [[unlikely]] return; }
L_002AFA98:
    set32(c.r[4], c.r[20].w[0] - 26432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAA4u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002AFAA4u) [[unlikely]] return; }
L_002AFAA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFA50u | kUnwind; return; } goto L_002AFA50; } }
L_002AFAB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFABCu);  if (depth < kMaxDepth) unit_0058(c, 3u, depth + 1u); else { c.pc = 0x00260028u; return; } if (c.pc != 0x002AFABCu) [[unlikely]] return; }
L_002AFABC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFAE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFAE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0] + 12048u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AFB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB10u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x002AFB10u) [[unlikely]] return; }
L_002AFB10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFB20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFB38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 32640u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB70u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002AFB70u) [[unlikely]] return; }
L_002AFB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFC14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB9Cu);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x002AFB9Cu) [[unlikely]] return; }
L_002AFB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBA4u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x002AFBA4u) [[unlikely]] return; }
L_002AFBA4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBC0u) [[unlikely]] return; }
L_002AFBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 19312u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBD8u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x002AFBD8u) [[unlikely]] return; }
L_002AFBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFC00; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBF0u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x002AFBF0u) [[unlikely]] return; }
L_002AFBF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC00u);  if (depth < kMaxDepth) unit_0089(c, 7u, depth + 1u); else { c.pc = 0x00324098u; return; } if (c.pc != 0x002AFC00u) [[unlikely]] return; }
L_002AFC00:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC14u);  if (depth < kMaxDepth) unit_0093(c, 94u, depth + 1u); else { c.pc = 0x0034D360u; return; } if (c.pc != 0x002AFC14u) [[unlikely]] return; }
L_002AFC14:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC48u);  if (depth < kMaxDepth) unit_006B(c, 103u, depth + 1u); else { c.pc = 0x002AE400u; return; } if (c.pc != 0x002AFC48u) [[unlikely]] return; }
L_002AFC48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFC58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFD8C; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AFD8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFCAC; } }
    st32((c.r[3].w[0] + 296u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_002AFCAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFD3C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCC8u);  if (depth < kMaxDepth) unit_0082(c, 35u, depth + 1u); else { c.pc = 0x00308668u; return; } if (c.pc != 0x002AFCC8u) [[unlikely]] return; }
L_002AFCC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[3], ld32((c.r[2].w[0] + 488u)));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AFD04; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFD3C; } }
L_002AFD04:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AFD34; } }
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = fp::add(c.f[0], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFD3C; } }
L_002AFD34:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_002AFD3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD60u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002AFD60u) [[unlikely]] return; }
L_002AFD60:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[2].w[0] + 240u), c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AFD8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AFD8C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD8Cu);  if (depth < kMaxDepth) unit_006C(c, 68u, depth + 1u); else { c.pc = 0x002B0C20u; return; } if (c.pc != 0x002AFD8Cu) [[unlikely]] return; }
L_002AFD8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFDA8:
    set32(c.r[29], c.r[29].w[0] - 528u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFDC0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 240u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFE18; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFE18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 148u)));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE10u);  if (depth < kMaxDepth) unit_0049(c, 255u, depth + 1u); else { c.pc = 0x00227028u; return; } if (c.pc != 0x002AFE10u) [[unlikely]] return; }
L_002AFE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFE58; } }
L_002AFE18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[18].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32380u)));
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 13u, depth); } }
L_002AFE58:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AFE7C; } }
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE7Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x002AFE7Cu) [[unlikely]] return; }
L_002AFE7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE90u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002AFE90u) [[unlikely]] return; }
L_002AFE90:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[19].w[0] + 144u));
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.f[3] = ld32((c.r[19].w[0] + 152u));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFECC; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFECC; } }
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_006C(c, 4u, depth); } }
L_002AFECC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFF08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFF3C; } }
L_002AFF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFF3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_002AFF3C:
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFF7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFFB0; } }
L_002AFF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFFB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
L_002AFFB0:
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AFFF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 2u, depth); } }
L_002AFFF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    [[clang::musttail]] return unit_006C(c, 1u, depth);
}

}
