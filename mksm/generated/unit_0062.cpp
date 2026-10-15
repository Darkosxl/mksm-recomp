#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0062[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0062(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00288000;
    case 2u: goto L_00288004;
    case 3u: goto L_0028800C;
    case 4u: goto L_00288024;
    case 5u: goto L_0028803C;
    case 6u: goto L_00288060;
    case 7u: goto L_0028806C;
    case 8u: goto L_002880B0;
    case 9u: goto L_002880F8;
    case 10u: goto L_0028811C;
    case 11u: goto L_00288124;
    case 12u: goto L_0028813C;
    case 13u: goto L_00288174;
    case 14u: goto L_002881BC;
    case 15u: goto L_002881C8;
    case 16u: goto L_00288208;
    case 17u: goto L_00288250;
    case 18u: goto L_00288260;
    case 19u: goto L_00288288;
    case 20u: goto L_002882A8;
    case 21u: goto L_002882C4;
    case 22u: goto L_002882EC;
    case 23u: goto L_00288314;
    case 24u: goto L_00288358;
    case 25u: goto L_00288380;
    case 26u: goto L_002883CC;
    case 27u: goto L_00288410;
    case 28u: goto L_00288454;
    case 29u: goto L_00288468;
    case 30u: goto L_002884F8;
    case 31u: goto L_002885A0;
    case 32u: goto L_00288640;
    case 33u: goto L_00288700;
    case 34u: goto L_00288810;
    case 35u: goto L_00288880;
    case 36u: goto L_0028892C;
    case 37u: goto L_002889D0;
    case 38u: goto L_00288A6C;
    case 39u: goto L_00288AF0;
    case 40u: goto L_00288B88;
    case 41u: goto L_00288C38;
    case 42u: goto L_00288D10;
    case 43u: goto L_00288D98;
    case 44u: goto L_00288E6C;
    case 45u: goto L_00288F28;
    case 46u: goto L_00288FC0;
    case 47u: goto L_00289030;
    case 48u: goto L_00289154;
    case 49u: goto L_00289180;
    case 50u: goto L_002891F0;
    case 51u: goto L_00289288;
    case 52u: goto L_002892F8;
    case 53u: goto L_002893F8;
    case 54u: goto L_0028947C;
    case 55u: goto L_002894B0;
    case 56u: goto L_002894E4;
    case 57u: goto L_002894F8;
    case 58u: goto L_00289520;
    case 59u: goto L_00289530;
    case 60u: goto L_00289554;
    case 61u: goto L_0028957C;
    case 62u: goto L_00289588;
    case 63u: goto L_00289598;
    case 64u: goto L_002895E4;
    case 65u: goto L_00289618;
    case 66u: goto L_0028964C;
    case 67u: goto L_00289664;
    case 68u: goto L_00289680;
    case 69u: goto L_002896C0;
    case 70u: goto L_002896F8;
    case 71u: goto L_00289730;
    case 72u: goto L_00289744;
    case 73u: goto L_0028975C;
    case 74u: goto L_00289768;
    case 75u: goto L_00289778;
    case 76u: goto L_00289788;
    case 77u: goto L_002897A0;
    case 78u: goto L_002897B4;
    case 79u: goto L_002897D8;
    case 80u: goto L_00289810;
    case 81u: goto L_00289828;
    case 82u: goto L_0028983C;
    case 83u: goto L_00289860;
    case 84u: goto L_00289898;
    case 85u: goto L_002898B4;
    case 86u: goto L_002898D0;
    case 87u: goto L_00289900;
    case 88u: goto L_00289950;
    case 89u: goto L_00289988;
    case 90u: goto L_002899EC;
    case 91u: goto L_00289A18;
    case 92u: goto L_00289A40;
    case 93u: goto L_00289A70;
    case 94u: goto L_00289A80;
    case 95u: goto L_00289AA0;
    case 96u: goto L_00289AB4;
    case 97u: goto L_00289AD8;
    case 98u: goto L_00289B10;
    case 99u: goto L_00289B70;
    case 100u: goto L_00289B8C;
    case 101u: goto L_00289BB8;
    case 102u: goto L_00289BD4;
    case 103u: goto L_00289BF8;
    case 104u: goto L_00289C28;
    case 105u: goto L_00289C88;
    case 106u: goto L_00289CA4;
    case 107u: goto L_00289CC8;
    case 108u: goto L_00289CF0;
    case 109u: goto L_00289D64;
    case 110u: goto L_00289DA0;
    case 111u: goto L_00289DC8;
    case 112u: goto L_00289E48;
    case 113u: goto L_00289E78;
    case 114u: goto L_00289EC0;
    case 115u: goto L_00289EE0;
    case 116u: goto L_00289EFC;
    case 117u: goto L_00289F24;
    case 118u: goto L_00289F4C;
    case 119u: goto L_00289F90;
    case 120u: goto L_00289FBC;
    case 121u: goto L_00289FD8;
    case 122u: goto L_00289FE8;
    case 123u: goto L_00289FF8;
    case 124u: goto L_0028A038;
    case 125u: goto L_0028A070;
    case 126u: goto L_0028A0A8;
    case 127u: goto L_0028A104;
    case 128u: goto L_0028A114;
    case 129u: goto L_0028A128;
    case 130u: goto L_0028A16C;
    case 131u: goto L_0028A17C;
    case 132u: goto L_0028A198;
    case 133u: goto L_0028A1A0;
    case 134u: goto L_0028A1E4;
    case 135u: goto L_0028A1FC;
    case 136u: goto L_0028A214;
    case 137u: goto L_0028A22C;
    case 138u: goto L_0028A244;
    case 139u: goto L_0028A25C;
    case 140u: goto L_0028A288;
    case 141u: goto L_0028A2A4;
    case 142u: goto L_0028A2B8;
    case 143u: goto L_0028A2D0;
    case 144u: goto L_0028A2E0;
    case 145u: goto L_0028A2F8;
    case 146u: goto L_0028A308;
    case 147u: goto L_0028A348;
    case 148u: goto L_0028A3D4;
    case 149u: goto L_0028A3F8;
    case 150u: goto L_0028A44C;
    case 151u: goto L_0028A464;
    case 152u: goto L_0028A49C;
    case 153u: goto L_0028A4BC;
    case 154u: goto L_0028A4CC;
    case 155u: goto L_0028A4E4;
    case 156u: goto L_0028A4FC;
    case 157u: goto L_0028A510;
    case 158u: goto L_0028A524;
    case 159u: goto L_0028A538;
    case 160u: goto L_0028A548;
    case 161u: goto L_0028A558;
    case 162u: goto L_0028A580;
    case 163u: goto L_0028A5E0;
    case 164u: goto L_0028A604;
    case 165u: goto L_0028A638;
    case 166u: goto L_0028A680;
    case 167u: goto L_0028A698;
    case 168u: goto L_0028A6F0;
    case 169u: goto L_0028A70C;
    case 170u: goto L_0028A738;
    case 171u: goto L_0028A7C0;
    case 172u: goto L_0028A7EC;
    case 173u: goto L_0028A834;
    case 174u: goto L_0028A8C0;
    case 175u: goto L_0028A8D4;
    case 176u: goto L_0028A908;
    case 177u: goto L_0028A914;
    case 178u: goto L_0028A970;
    case 179u: goto L_0028A9CC;
    case 180u: goto L_0028A9F0;
    case 181u: goto L_0028AA18;
    case 182u: goto L_0028AA30;
    case 183u: goto L_0028AA88;
    case 184u: goto L_0028AAA4;
    case 185u: goto L_0028AAC8;
    case 186u: goto L_0028AB3C;
    case 187u: goto L_0028ABBC;
    case 188u: goto L_0028ABD4;
    case 189u: goto L_0028AC08;
    case 190u: goto L_0028AC14;
    case 191u: goto L_0028AC68;
    case 192u: goto L_0028ACA8;
    case 193u: goto L_0028ACB8;
    case 194u: goto L_0028ACD4;
    case 195u: goto L_0028AD30;
    case 196u: goto L_0028AD40;
    case 197u: goto L_0028AD7C;
    case 198u: goto L_0028ADAC;
    case 199u: goto L_0028ADC8;
    case 200u: goto L_0028ADEC;
    case 201u: goto L_0028ADFC;
    case 202u: goto L_0028AE34;
    case 203u: goto L_0028AE68;
    case 204u: goto L_0028AE80;
    case 205u: goto L_0028AE9C;
    case 206u: goto L_0028AEC0;
    case 207u: goto L_0028AEE4;
    case 208u: goto L_0028AF08;
    case 209u: goto L_0028AF18;
    case 210u: goto L_0028AF44;
    case 211u: goto L_0028AF54;
    case 212u: goto L_0028AFA4;
    case 213u: goto L_0028AFCC;
    case 214u: goto L_0028AFD8;
    case 215u: goto L_0028B01C;
    case 216u: goto L_0028B040;
    case 217u: goto L_0028B050;
    case 218u: goto L_0028B060;
    case 219u: goto L_0028B070;
    case 220u: goto L_0028B0A0;
    case 221u: goto L_0028B0D0;
    case 222u: goto L_0028B0FC;
    case 223u: goto L_0028B120;
    case 224u: goto L_0028B148;
    case 225u: goto L_0028B168;
    case 226u: goto L_0028B188;
    case 227u: goto L_0028B1CC;
    case 228u: goto L_0028B200;
    case 229u: goto L_0028B218;
    case 230u: goto L_0028B22C;
    case 231u: goto L_0028B274;
    case 232u: goto L_0028B284;
    case 233u: goto L_0028B294;
    case 234u: goto L_0028B2A4;
    case 235u: goto L_0028B2FC;
    case 236u: goto L_0028B314;
    case 237u: goto L_0028B364;
    case 238u: goto L_0028B38C;
    case 239u: goto L_0028B3A4;
    case 240u: goto L_0028B3E4;
    case 241u: goto L_0028B514;
    case 242u: goto L_0028B528;
    case 243u: goto L_0028B580;
    case 244u: goto L_0028B59C;
    case 245u: goto L_0028B5A8;
    case 246u: goto L_0028B5D8;
    case 247u: goto L_0028B5E8;
    case 248u: goto L_0028B600;
    case 249u: goto L_0028B628;
    case 250u: goto L_0028B638;
    case 251u: goto L_0028B648;
    case 252u: goto L_0028B658;
    case 253u: goto L_0028B668;
    case 254u: goto L_0028B6C8;
    case 255u: goto L_0028B738;
    case 256u: goto L_0028B774;
    case 257u: goto L_0028B780;
    case 258u: goto L_0028B7EC;
    case 259u: goto L_0028B830;
    case 260u: goto L_0028B854;
    case 261u: goto L_0028B8C0;
    case 262u: goto L_0028B8D8;
    case 263u: goto L_0028B8FC;
    case 264u: goto L_0028B958;
    case 265u: goto L_0028B990;
    case 266u: goto L_0028BA00;
    case 267u: goto L_0028BA6C;
    case 268u: goto L_0028BA84;
    case 269u: goto L_0028BAA8;
    case 270u: goto L_0028BB04;
    case 271u: goto L_0028BB1C;
    case 272u: goto L_0028BB34;
    case 273u: goto L_0028BB48;
    case 274u: goto L_0028BBB4;
    case 275u: goto L_0028BC68;
    case 276u: goto L_0028BC7C;
    case 277u: goto L_0028BCA8;
    case 278u: goto L_0028BCD8;
    case 279u: goto L_0028BD28;
    case 280u: goto L_0028BD4C;
    case 281u: goto L_0028BD5C;
    case 282u: goto L_0028BD7C;
    case 283u: goto L_0028BDA8;
    case 284u: goto L_0028BDBC;
    case 285u: goto L_0028BDDC;
    case 286u: goto L_0028BDEC;
    case 287u: goto L_0028BE14;
    case 288u: goto L_0028BE38;
    case 289u: goto L_0028BE84;
    case 290u: goto L_0028BE9C;
    case 291u: goto L_0028BEB0;
    case 292u: goto L_0028BEE0;
    case 293u: goto L_0028BF00;
    case 294u: goto L_0028BF44;
    case 295u: goto L_0028BF70;
    case 296u: goto L_0028BFB8;
    default: bad_entry(c, 0x00288000u); return;
    }
L_00288000:
    c.budget -= 1;
L_00288004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028800Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0028800Cu) [[unlikely]] return; }
L_0028800C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288024u);  if (depth < kMaxDepth) unit_009C(c, 30u, depth + 1u); else { c.pc = 0x00370328u; return; } if (c.pc != 0x00288024u) [[unlikely]] return; }
L_00288024:
    set32(c.r[2], ld32((c.r[23].w[0] + 28u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1344u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287FA8u | kUnwind; return; } [[clang::musttail]] return unit_0061(c, 387u, depth); } }
L_0028803C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9872u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    st16((c.r[3].w[0] + 956u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    st16((c.r[5].w[0] + 956u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288060u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00288060u) [[unlikely]] return; }
L_00288060:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028806Cu);  if (depth < kMaxDepth) unit_0066(c, 281u, depth + 1u); else { c.pc = 0x0029ADB0u; return; } if (c.pc != 0x0028806Cu) [[unlikely]] return; }
L_0028806C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[2].w[0] - 19088u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[2].w[0] + 6546u), static_cast<std::uint8_t>(0u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002880B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00288198; } }
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002880F8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028813C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[4], c.r[20].w[0] - 22480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028811Cu);  if (depth < kMaxDepth) unit_0087(c, 230u, depth + 1u); else { c.pc = 0x0031F4C8u; return; } if (c.pc != 0x0028811Cu) [[unlikely]] return; }
L_0028811C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288124u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00288124u) [[unlikely]] return; }
L_00288124:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028813Cu);  if (depth < kMaxDepth) unit_009C(c, 30u, depth + 1u); else { c.pc = 0x00370328u; return; } if (c.pc != 0x0028813Cu) [[unlikely]] return; }
L_0028813C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00288180; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00288180; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288174u);  if (depth < kMaxDepth) unit_0062(c, 129u, depth + 1u); else { c.pc = 0x0028A128u; return; } if (c.pc != 0x00288174u) [[unlikely]] return; }
L_00288174:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00288180:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1344u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002880F8u | kUnwind; return; } goto L_002880F8; } }
L_00288198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9872u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    st16((c.r[3].w[0] + 956u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    st16((c.r[5].w[0] + 956u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881BCu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002881BCu) [[unlikely]] return; }
L_002881BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881C8u);  if (depth < kMaxDepth) unit_0066(c, 281u, depth + 1u); else { c.pc = 0x0029ADB0u; return; } if (c.pc != 0x002881C8u) [[unlikely]] return; }
L_002881C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[2].w[0] - 19088u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[2].w[0] + 6546u), static_cast<std::uint8_t>(0u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00288208:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00288358; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288260; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288250u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00288250u) [[unlikely]] return; }
L_00288250:
    set32(c.r[5], ld32((c.r[16].w[0] + 224u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288260u);  if (depth < kMaxDepth) unit_0066(c, 175u, depth + 1u); else { c.pc = 0x00299C28u; return; } if (c.pc != 0x00288260u) [[unlikely]] return; }
L_00288260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00288334; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00288288:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0028831C; } }
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882A8u);  if (depth < kMaxDepth) unit_0095(c, 7u, depth + 1u); else { c.pc = 0x003540C0u; return; } if (c.pc != 0x002882A8u) [[unlikely]] return; }
L_002882A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002882C4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882C4u);  if (depth < kMaxDepth) unit_0061(c, 346u, depth + 1u); else { c.pc = 0x00287A28u; return; } if (c.pc != 0x002882C4u) [[unlikely]] return; }
L_002882C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002882ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002882ECu) [[unlikely]] return; }
L_002882EC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_00288334; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288314u);  if (depth < kMaxDepth) unit_0062(c, 119u, depth + 1u); else { c.pc = 0x00289F90u; return; } if (c.pc != 0x00288314u) [[unlikely]] return; }
L_00288314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288334; } }
L_0028831C:
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1344u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288288u | kUnwind; return; } goto L_00288288; } }
L_00288334:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288358u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288358u) [[unlikely]] return; }
L_00288358:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00288380:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002883CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002883CCu) [[unlikely]] return; }
L_002883CC:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002884CC; } }
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[20], 0u + 1344u);
    c.budget -= 2;
L_00288410:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[16], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002884B8; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288454u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288454u) [[unlikely]] return; }
L_00288454:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
L_00288468:
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00288484; } }
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 1;
L_00288484:
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002884A0; } }
    st32((c.r[4].w[0]), c.f[1]);
    c.budget -= 1;
L_002884A0:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288468u | kUnwind; return; } goto L_00288468; } }
L_002884B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288410u | kUnwind; return; } goto L_00288410; } }
L_002884CC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002884F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[3].d[0] = ld16((c.r[6].w[0] - 1984u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 16);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[5].w[0] + 9872u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[29].w[0] + 296u), c.f[21]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 16);
    st16((c.r[6].w[0] - 1984u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    set32(c.r[2], c.r[30].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 38;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002893BC; } }
    set32(c.r[2], c.r[30].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[21] = c.r[1].w[0];
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_002885A0:
    c.r[7].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00288670; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002885F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002885F8; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002885F8; } }
    set32(c.r[3], 0u + 1344u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002885FC; } }
L_002885F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002885FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00288668; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[18].w[0] + 2u);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[5], c.r[30].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002893A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[18].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] - 6512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
L_00288640:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288640u | kUnwind; return; } goto L_00288640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002893A0; } }
L_00288668:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00288730; } }
L_00288670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[2].w[0] + 12912u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002886B4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002886B4; } }
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002886B4; } }
    set32(c.r[3], 0u + 224u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002886B8; } }
L_002886B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002886B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00288728; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[18].w[0] + 2u);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[5], c.r[30].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002893A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[18].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] - 6512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 9;
L_00288700:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288700u | kUnwind; return; } goto L_00288700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002893A0; } }
L_00288728:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0028877C; } }
L_00288730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 9872u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002887A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002887A0; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002887D0; } }
    set32(c.r[3], 0u + 1344u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002887D4; } }
L_0028877C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[23], c.r[18].w[0] - c.r[30].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12912u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002887A0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002887AC; } }
L_002887A0:
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002887D8; } }
L_002887AC:
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002887D0; } }
    set32(c.r[3], 0u + 224u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002887D4; } }
L_002887D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002887D4:
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002887D8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[12].w[0] + 4u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], c.r[12].w[0] + 64u);
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 2u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[23], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 14;
L_00288810:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[3].w[0]), 0u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288810u | kUnwind; return; } goto L_00288810; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00288BCC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0028895C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[18].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] - 6512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[17], c.r[2].w[0] + c.r[7].w[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[2].w[0] + 9872u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 13;
L_00288880:
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028889C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002888A8; } }
L_0028889C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002888BC; } }
L_002888A8:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 5;
L_002888BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002888D0; } }
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288938; } }
L_002888D0:
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[5], c.r[12].w[0] + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002888F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002888FC; } }
L_002888F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288914; } }
L_002888FC:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 6;
L_00288914:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028892Cu);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x0028892Cu) [[unlikely]] return; }
L_0028892C:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    c.budget -= 3;
L_00288938:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[21], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1344u);
    set32(c.r[19], c.r[19].w[0] + 1344u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288880u | kUnwind; return; } goto L_00288880; } }
L_0028895C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], 0u + 260u);
    set32(c.r[4], c.r[4].w[0] - 6512u);
    set32(c.r[3], c.r[23].w[0] << 16);
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::madd(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.f[21]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00288AA4; } }
    set32(c.r[7], 0u + 1344u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] - 6512u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[18].w[0] << 8);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] << 16);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[21], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[4].w[0] + 9872u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 18;
L_002889D0:
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002889EC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002889F8; } }
L_002889EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288A0C; } }
L_002889F8:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 5;
L_00288A0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00288A7C; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[5], c.r[12].w[0] + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00288A34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288A40; } }
L_00288A34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288A58; } }
L_00288A40:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 6;
L_00288A58:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A6Cu);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x00288A6Cu) [[unlikely]] return; }
L_00288A6C:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288A80; } }
L_00288A7C:
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 1;
L_00288A80:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[21], c.r[21].w[0] + c.r[23].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1344u);
    set32(c.r[19], c.r[19].w[0] + 1344u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002889D0u | kUnwind; return; } goto L_002889D0; } }
L_00288AA4:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00288FFC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[18].w[0] << 8);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] - 6512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[22], c.r[3].w[0] + 12912u);
    set32(c.r[17], c.r[2].w[0] + c.r[7].w[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 15;
L_00288AF0:
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288B08; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288B14; } }
L_00288B08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288B28; } }
L_00288B14:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00288B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[12].w[0] + 144u);
    set32(c.r[4], c.r[2].w[0] + 12912u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288B54; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288B60; } }
L_00288B54:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288B74; } }
L_00288B60:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00288B74:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B88u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x00288B88u) [[unlikely]] return; }
L_00288B88:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288B9C; } }
L_00288B98:
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 1;
L_00288B9C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + c.r[23].w[0]);
    set32(c.r[20], c.r[20].w[0] + 224u);
    set32(c.r[19], c.r[19].w[0] + 224u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288AF0u | kUnwind; return; } goto L_00288AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288FFC; } }
L_00288BCC:
    set32(c.r[2], c.r[23].w[0] << 16);
    set32(c.r[4], c.r[30].w[0] - 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[23], c.r[18].w[0] - c.r[30].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288D48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[7], 0u + 1344u);
    set32(c.r[4], c.r[4].w[0] - 6512u);
    set32(c.r[2], c.r[18].w[0] << 8);
    set32(c.r[3], c.r[18].w[0] << 2);
    mmi::mult(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[16].w[0] << 16);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[16].w[0] << 8);
    set32(c.r[22], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + 9872u);
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 19;
L_00288C38:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00288C54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288C60; } }
L_00288C54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C74; } }
L_00288C60:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 5;
L_00288C74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288C88; } }
    st32((c.r[17].w[0]), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288D20; } }
L_00288C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 1984u)));
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00288CB0; } }
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288D20; } }
L_00288CB0:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[12].w[0] + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00288CD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288CDC; } }
L_00288CD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288CF4; } }
L_00288CDC:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 6;
L_00288CF4:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[7]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D10u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x00288D10u) [[unlikely]] return; }
L_00288D10:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    c.budget -= 4;
L_00288D20:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[22], c.r[22].w[0] + c.r[7].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1344u);
    set32(c.r[20], c.r[20].w[0] + 256u);
    set32(c.r[19], c.r[19].w[0] + 1344u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288C38u | kUnwind; return; } goto L_00288C38; } }
L_00288D48:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_00288EA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[6], c.r[2].w[0] + 12912u);
    set32(c.r[4], c.r[18].w[0] << 8);
    set32(c.r[5], c.r[30].w[0] << 8);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 6512u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[5].w[0] + c.r[2].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 17;
L_00288D98:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288DB0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288DBC; } }
L_00288DB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288DD0; } }
L_00288DBC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00288DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00288DE4; } }
    st32((c.r[17].w[0]), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288E7C; } }
L_00288DE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 1984u)));
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00288E0C; } }
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288E7C; } }
L_00288E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[12].w[0] + 144u);
    set32(c.r[4], c.r[2].w[0] + 12912u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288E30; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288E3C; } }
L_00288E30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288E50; } }
L_00288E3C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00288E50:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[7]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288E6Cu);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x00288E6Cu) [[unlikely]] return; }
L_00288E6C:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    c.budget -= 4;
L_00288E7C:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[22], c.r[22].w[0] + c.r[7].w[0]);
    set32(c.r[21], c.r[21].w[0] + 224u);
    set32(c.r[19], c.r[19].w[0] + 256u);
    set32(c.r[20], c.r[20].w[0] + 224u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288D98u | kUnwind; return; } goto L_00288D98; } }
L_00288EA4:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u + 260u);
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[18].w[0] - c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] - 6512u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.lo.d[0] = c.r[4].d[0];
    mmi::madd(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.f[21]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00288FFC; } }
    set32(c.r[2], 0u + 224u);
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[18].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 6512u);
    set32(c.r[22], c.r[2].w[0] + 12912u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[16].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 19;
L_00288F28:
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288F40; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288F4C; } }
L_00288F40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288F60; } }
L_00288F4C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00288F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288FD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[12].w[0] + 144u);
    set32(c.r[4], c.r[2].w[0] + 12912u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288F8C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00288F98; } }
L_00288F8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288FAC; } }
L_00288F98:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00288FAC:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288FC0u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x00288FC0u) [[unlikely]] return; }
L_00288FC0:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288FD4; } }
L_00288FD0:
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 1;
L_00288FD4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + c.r[23].w[0]);
    set32(c.r[21], c.r[21].w[0] + 224u);
    set32(c.r[19], c.r[19].w[0] + 224u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288F28u | kUnwind; return; } goto L_00288F28; } }
L_00288FFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002893A0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], c.r[18].w[0] << 8);
    set32(c.r[20], c.r[7].w[0] - 6512u);
    set32(c.r[15], c.r[2].w[0] + 9872u);
    set32(c.r[13], 0u + 12u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[22], 0u + 12u);
    set32(c.r[14], 0u + 4u);
    c.budget -= 9;
L_00289030:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[1] = 0u;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00289388; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002890CC; } }
    set32(c.r[3], ld32((c.r[15].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00289084; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 9872u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00289090; } }
L_00289084:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002890C0; } }
L_00289090:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002890B8; } }
    set32(c.r[3], 0u + 1344u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002890BC; } }
L_002890B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002890BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002890C0:
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028912C; } }
L_002890CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[16].w[0] - c.r[30].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12912u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002890F0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002890FC; } }
L_002890F0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289128; } }
L_002890FC:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00289120; } }
    set32(c.r[3], 0u + 224u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289124; } }
L_00289120:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289124:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00289128:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028912C:
    set32(c.r[5], ld32((c.r[12].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] - 22480u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[13]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[14]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[15]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289154u);  if (depth < kMaxDepth) unit_0087(c, 220u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00289154u) [[unlikely]] return; }
L_00289154:
    set32(c.r[10], ld32((c.r[29].w[0] + 20u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    if (c.r[2].d[0] == 0) c.r[10].d[0] = c.r[4].d[0];
    set32(c.r[11], c.r[16].w[0] + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[13]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[14]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[15]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289350; } }
L_00289180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0028923C; } }
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00289230; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00289230; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289224; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[7], c.r[2].w[0] + c.r[23].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 12u);
    set32(c.r[5], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 6;
L_002891F0:
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002891F0u | kUnwind; return; } goto L_002891F0; } }
L_00289224:
    st32((c.r[10].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289348; } }
L_00289230:
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289388; } }
L_0028923C:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[9], c.r[8].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00289348; } }
    set32(c.r[2], c.r[9].w[0] << 16);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[4], c.r[2].w[0] + c.r[23].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[2].w[0] + c.r[10].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289298; } }
    c.budget -= 1;
L_00289288:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 4;
L_00289298:
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002892BC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002892B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289288u | kUnwind; return; } goto L_00289288; } }
L_002892B8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002892BC:
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = c.r[14].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028932C; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12u);
    set32(c.r[5], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 8;
L_002892F8:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 12u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002892F8u | kUnwind; return; } goto L_002892F8; } }
L_0028932C:
    mmi::mult(c, 0, c.r[8].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[10].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028937C; } }
L_00289348:
    set32(c.r[2], c.r[9].w[0] << 16);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 2;
L_00289350:
    c.r[2].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289388; } }
    mmi::mult(c, 0, c.r[8].w[0], c.r[13].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289180u | kUnwind; return; } goto L_00289180; } }
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 3;
L_0028937C:
    st32((c.r[3].w[0] + 4u), c.r[21].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 3;
L_00289388:
    set32(c.r[2], c.r[11].w[0] << 16);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289030u | kUnwind; return; } goto L_00289030; } }
L_002893A0:
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[7].w[0] << 16);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002885A0u | kUnwind; return; } goto L_002885A0; } }
L_002893BC:
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
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002893F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002894E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00289440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] + 9872u);
    set32(c.r[3], c.r[3].w[0] + 26432u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 9872u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002894E4; } }
L_00289440:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 9872u)));
    set32(c.r[16], c.r[3].w[0] + 9872u);
    set32(c.r[2], c.r[2].w[0] + 26432u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0028947C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028947Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028947Cu) [[unlikely]] return; }
L_0028947C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002894B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + 26360u);
    set32(c.r[7], c.r[7].w[0] + 26400u);
    set32(c.r[8], 0u + 108u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002894B0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002894B0u) [[unlikely]] return; }
L_002894B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002894E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[6], c.r[6].w[0] + 26360u);
    set32(c.r[7], c.r[7].w[0] + 26400u);
    set32(c.r[8], 0u + 113u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002894E4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002894E4u) [[unlikely]] return; }
L_002894E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002894F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 26432u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289520:
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289530:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00289548; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00289554; } }
L_00289548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289554:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028957C; } }
    set32(c.r[2], 0u + 1344u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028957C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289588:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289598:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 26432u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002895E4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002895E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002895E4u) [[unlikely]] return; }
L_002895E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + 26360u);
    set32(c.r[7], c.r[7].w[0] + 26400u);
    set32(c.r[8], 0u + 108u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289618u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00289618u) [[unlikely]] return; }
L_00289618:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028964C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 26360u);
    set32(c.r[7], c.r[7].w[0] + 26400u);
    set32(c.r[8], 0u + 113u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028964Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0028964Cu) [[unlikely]] return; }
L_0028964C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289664; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289664u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x00289664u) [[unlikely]] return; }
L_00289664:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289680:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00289710; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002896C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002896F8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002896F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002896F8u) [[unlikely]] return; }
L_002896F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1344u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002896C0u | kUnwind; return; } goto L_002896C0; } }
L_00289710:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289730:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00289744; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289744:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0028975C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028975C:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289768:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289778:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289788:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002897A0u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002897A0u) [[unlikely]] return; }
L_002897A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002897B4u);  if (depth < kMaxDepth) unit_0066(c, 240u, depth + 1u); else { c.pc = 0x0029A620u; return; } if (c.pc != 0x002897B4u) [[unlikely]] return; }
L_002897B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002897E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002897D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002897D8u) [[unlikely]] return; }
L_002897D8:
    c.r[2].d[0] = c.r[2].d[0] & 10ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002897F4; } }
L_002897E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002897F8; } }
L_002897F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_002897F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289828u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00289828u) [[unlikely]] return; }
L_00289828:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028983Cu);  if (depth < kMaxDepth) unit_0066(c, 240u, depth + 1u); else { c.pc = 0x0029A620u; return; } if (c.pc != 0x0028983Cu) [[unlikely]] return; }
L_0028983C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00289870; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289860u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289860u) [[unlikely]] return; }
L_00289860:
    c.r[2].d[0] = c.r[2].d[0] & 10ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028987C; } }
L_00289870:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289880; } }
L_0028987C:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_00289880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002898BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002898B4u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x002898B4u) [[unlikely]] return; }
L_002898B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002898C0; } }
L_002898BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002898C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002898D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 10396u)));
    if (c.r[6].d[0] != 0) c.r[8].d[0] = c.r[6].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00289944; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[11], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00289900:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028992C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0028992C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[11].d[0];  if (t) { goto L_00289948; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 1;
L_0028992C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 1344u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289900u | kUnwind; return; } goto L_00289900; } }
L_00289944:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 10368u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 96u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00289A0C; } }
    c.r[15].d[0] = c.r[7].d[0] + 0ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[13], 0u - 1u);
    set32(c.r[12], 0u + 1u);
    c.budget -= 4;
L_00289988:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[11].w[0] + 36u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002899F0; } }
    set32(c.r[9], 0u + 13248u);
    set32(c.r[4], c.r[14].w[0] + 14208u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002899F0; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[13].d[0];  if (t) { goto L_002899EC; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[5].d[0];  if (t) { goto L_002899F0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002899EC:
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.budget -= 1;
L_002899F0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[15].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289988u | kUnwind; return; } goto L_00289988; } }
L_00289A0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289A18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 10464u)));
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289A60; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00289A40:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    if (c.r[4].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289A40u | kUnwind; return; } goto L_00289A40; } }
L_00289A60:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289A70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 10396u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00289AC8; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00289AA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00289AB4; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289AB4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1344u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289AA0u | kUnwind; return; } goto L_00289AA0; } }
L_00289AC8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289AD8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00289B40; } }
    set32(c.r[2], c.r[7].w[0] + 10368u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00289B38; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00289B10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00289B24; } }
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289B3C; } }
L_00289B24:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1344u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289B10u | kUnwind; return; } goto L_00289B10; } }
L_00289B38:
    set32(c.r[9], 0u - 1u);
    c.budget -= 1;
L_00289B3C:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00289B40:
    set32(c.r[2], c.r[7].w[0] + 10368u);
    set32(c.r[10], ld32((c.r[2].w[0] + 28u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00289BA4; } }
    set32(c.r[3], 0u + 1344u);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 7;
L_00289B70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289B8C; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289B8C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1344u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289B70u | kUnwind; return; } goto L_00289B70; } }
L_00289BA4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] <= 0;  if (t) { goto L_00289BEC; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00289BB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289BD4; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289BD4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1344u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289BB8u | kUnwind; return; } goto L_00289BB8; } }
L_00289BEC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289BF8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00289C58; } }
    set32(c.r[2], c.r[7].w[0] + 10368u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00289C50; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00289C28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00289C3C; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289C54; } }
L_00289C3C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1344u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289C28u | kUnwind; return; } goto L_00289C28; } }
L_00289C50:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00289C54:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00289C58:
    set32(c.r[2], c.r[7].w[0] + 10368u);
    set32(c.r[7], ld32((c.r[2].w[0] + 28u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00289CBC; } }
    set32(c.r[3], 0u + 1344u);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
L_00289C88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289CA4; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289CA4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1344u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289C88u | kUnwind; return; } goto L_00289C88; } }
L_00289CBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289CC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289CF4; } }
L_00289CF0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00289CF4:
    set32(c.r[3], c.r[6].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289D44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289CF0u | kUnwind; return; } goto L_00289CF0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1344u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 14u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00289D44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00289D80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289D64u) [[unlikely]] return; }
L_00289D64:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 914u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289D84; } }
L_00289D80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289D84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289DCC; } }
L_00289DC8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00289DCC:
    set32(c.r[3], c.r[6].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289E1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289DC8u | kUnwind; return; } goto L_00289DC8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1344u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 14u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00289E1C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00289E30; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289E5C; } }
L_00289E30:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289E48u) [[unlikely]] return; }
L_00289E48:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 914u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_00289E5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289E78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00289F6C; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], 0u + 2u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00289EC0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00289F54; } }
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289EE0u);  if (depth < kMaxDepth) unit_0095(c, 7u, depth + 1u); else { c.pc = 0x003540C0u; return; } if (c.pc != 0x00289EE0u) [[unlikely]] return; }
L_00289EE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289EFC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289EFCu);  if (depth < kMaxDepth) unit_0061(c, 346u, depth + 1u); else { c.pc = 0x00287A28u; return; } if (c.pc != 0x00289EFCu) [[unlikely]] return; }
L_00289EFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289F24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289F24u) [[unlikely]] return; }
L_00289F24:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_00289F6C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289F4Cu);  if (depth < kMaxDepth) unit_0062(c, 119u, depth + 1u); else { c.pc = 0x00289F90u; return; } if (c.pc != 0x00289F4Cu) [[unlikely]] return; }
L_00289F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289F6C; } }
L_00289F54:
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1344u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289EC0u | kUnwind; return; } goto L_00289EC0; } }
L_00289F6C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[2].w[0] + 14696u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289FC0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289FBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289FBCu) [[unlikely]] return; }
L_00289FBC:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00289FC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289FD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289FE8u);  if (depth < kMaxDepth) unit_0062(c, 8u, depth + 1u); else { c.pc = 0x002880B0u; return; } if (c.pc != 0x00289FE8u) [[unlikely]] return; }
L_00289FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289FF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028A088; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0028A038:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028A070; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028A070; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A070u);  if (depth < kMaxDepth) unit_0061(c, 228u, depth + 1u); else { c.pc = 0x00286480u; return; } if (c.pc != 0x0028A070u) [[unlikely]] return; }
L_0028A070:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1344u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A038u | kUnwind; return; } goto L_0028A038; } }
L_0028A088:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A0A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028A114; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028A104; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[6], 0u + 880u);
    st32((c.r[3].w[0] + 7700u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 840u)));
    set32(c.r[3], c.r[3].w[0] - 4440u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 628u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A104u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028A104u) [[unlikely]] return; }
L_0028A104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A114u);  if (depth < kMaxDepth) unit_0061(c, 228u, depth + 1u); else { c.pc = 0x00286480u; return; } if (c.pc != 0x0028A114u) [[unlikely]] return; }
L_0028A114:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A128:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028A17C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028A16C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A16Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A16Cu) [[unlikely]] return; }
L_0028A16C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A17Cu);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0028A17Cu) [[unlikely]] return; }
L_0028A17C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 840u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A264; } }
    set32(c.r[16], ld32((c.r[5].w[0] + 224u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028A274; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A270; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A1E4u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028A1E4u) [[unlikely]] return; }
L_0028A1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A270; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A1FCu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028A1FCu) [[unlikely]] return; }
L_0028A1FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A264; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A214u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028A214u) [[unlikely]] return; }
L_0028A214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A264; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A22Cu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028A22Cu) [[unlikely]] return; }
L_0028A22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A264; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A244u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028A244u) [[unlikely]] return; }
L_0028A244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A264; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A25Cu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028A25Cu) [[unlikely]] return; }
L_0028A25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A270; } }
L_0028A264:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A274; } }
L_0028A270:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028A274:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028A2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A2A4u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x0028A2A4u) [[unlikely]] return; }
L_0028A2A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A2B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A2D0u);  if (depth < kMaxDepth) unit_0062(c, 53u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0028A2D0u) [[unlikely]] return; }
L_0028A2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A2F8u);  if (depth < kMaxDepth) unit_0062(c, 53u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0028A2F8u) [[unlikely]] return; }
L_0028A2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A308:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A348u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028A348u) [[unlikely]] return; }
L_0028A348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10079u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0028A564; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028A3B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A494; } }
L_0028A3B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028A3D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], 0u + 10u);
    c.f[12] = ld32((c.r[16].w[0] + 548u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A3D4u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028A3D4u) [[unlikely]] return; }
L_0028A3D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A414; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A414; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A3F8u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028A3F8u) [[unlikely]] return; }
L_0028A3F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 784u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 192u));
    c.r[4].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0028A568; } }
L_0028A414:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 594u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 594u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028A438; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A568; } }
L_0028A438:
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A44Cu);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0028A44Cu) [[unlikely]] return; }
L_0028A44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A564; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A464u);  if (depth < kMaxDepth) unit_0061(c, 253u, depth + 1u); else { c.pc = 0x002867B8u; return; } if (c.pc != 0x0028A464u) [[unlikely]] return; }
L_0028A464:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028A564; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 5;
L_0028A494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A49Cu);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028A49Cu) [[unlikely]] return; }
L_0028A49C:
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A4BCu) [[unlikely]] return; }
L_0028A4BC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4CCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028A4CCu) [[unlikely]] return; }
L_0028A4CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A4E4u) [[unlikely]] return; }
L_0028A4E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4FCu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028A4FCu) [[unlikely]] return; }
L_0028A4FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A510u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0028A510u) [[unlikely]] return; }
L_0028A510:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 592u));
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A524u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028A524u) [[unlikely]] return; }
L_0028A524:
    st32((c.r[2].w[0] + 784u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A538u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028A538u) [[unlikely]] return; }
L_0028A538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A548u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028A548u) [[unlikely]] return; }
L_0028A548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A558u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028A558u) [[unlikely]] return; }
L_0028A558:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A568; } }
L_0028A564:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028A568:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A580:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[6], 0u + 13248u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A5E0u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028A5E0u) [[unlikely]] return; }
L_0028A5E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A604u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A604u) [[unlikely]] return; }
L_0028A604:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 234u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 828u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0028A658; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A638u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0028A638u) [[unlikely]] return; }
L_0028A638:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028A834; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A820; } }
L_0028A658:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A688; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A680u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0028A680u) [[unlikely]] return; }
L_0028A680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A698; } }
L_0028A688:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A698u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028A698u) [[unlikely]] return; }
L_0028A698:
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028A6DC; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028A6DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 544u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028A840; } }
L_0028A6DC:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A6F0u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028A6F0u) [[unlikely]] return; }
L_0028A6F0:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A70Cu);  if (depth < kMaxDepth) unit_0068(c, 289u, depth + 1u); else { c.pc = 0x002A3920u; return; } if (c.pc != 0x0028A70Cu) [[unlikely]] return; }
L_0028A70C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0028A7FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[30], c.r[3].w[0] - 3612u);
    set32(c.r[23], 0u + 19u);
    set32(c.r[22], 0u + 13248u);
    set32(c.r[21], 0u + 6u);
    set32(c.r[20], 0u + 880u);
    c.budget -= 8;
L_0028A738:
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028A7EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0028A7EC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 234u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028A7EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0028A784; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_0028A7EC; } }
L_0028A784:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], c.r[7].w[0] + 14208u);
    c.lo.d[0] = c.r[7].d[0];
    mmi::madd(c, 0, c.r[5].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0028A7C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    st32((c.r[3].w[0] + 7700u), c.r[21].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[30].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A7C0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028A7C0u) [[unlikely]] return; }
L_0028A7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A7EC; } }
L_0028A7C8:
    st32((c.r[3].w[0] + 7700u), 0u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], ld32((c.r[6].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A7ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A7ECu) [[unlikely]] return; }
L_0028A7EC:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A738u | kUnwind; return; } goto L_0028A738; } }
L_0028A7FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028A818; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028A840; } }
L_0028A818:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 2;
L_0028A820:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A834u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A834u) [[unlikely]] return; }
L_0028A834:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A934; } }
L_0028A840:
    set32(c.r[2], ld32((c.r[17].w[0] + 544u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028A8C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 234u)));
    set32(c.r[7], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] - 4440u);
    set32(c.r[6], c.r[4].w[0] + 828u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A834u | kUnwind; return; } goto L_0028A834; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[19].w[0] + 7700u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 234u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A8C0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028A8C0u) [[unlikely]] return; }
L_0028A8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A834u | kUnwind; return; } goto L_0028A834; } }
L_0028A8C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A8D4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028A8D4u) [[unlikely]] return; }
L_0028A8D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 408u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_0028A908; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A908u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028A908u) [[unlikely]] return; }
L_0028A908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A914u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0028A914u) [[unlikely]] return; }
L_0028A914:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028A928; } }
    st32((c.r[19].w[0] + 28u), 0u);
    c.budget -= 1;
L_0028A928:
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 3;
L_0028A934:
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
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028A970:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[6], 0u + 13248u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A9CCu);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028A9CCu) [[unlikely]] return; }
L_0028A9CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A9F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A9F0u) [[unlikely]] return; }
L_0028A9F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AA20; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA18u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0028AA18u) [[unlikely]] return; }
L_0028AA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AA30; } }
L_0028AA20:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA30u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028AA30u) [[unlikely]] return; }
L_0028AA30:
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028AA74; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028AA74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 544u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028AB78; } }
L_0028AA74:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA88u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028AA88u) [[unlikely]] return; }
L_0028AA88:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AAA4u);  if (depth < kMaxDepth) unit_0068(c, 289u, depth + 1u); else { c.pc = 0x002A3920u; return; } if (c.pc != 0x0028AAA4u) [[unlikely]] return; }
L_0028AAA4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028AB4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] + 14208u);
    set32(c.r[22], 0u + 22u);
    set32(c.r[21], 0u + 19u);
    set32(c.r[20], 0u + 13248u);
    c.budget -= 6;
L_0028AAC8:
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028AB3C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0028AB3C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 234u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028AB3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_0028AB10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0028AB3C; } }
L_0028AB10:
    mmi::mult(c, 0, c.r[5].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0] + 7700u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AB3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AB3Cu) [[unlikely]] return; }
L_0028AB3C:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028AAC8u | kUnwind; return; } goto L_0028AAC8; } }
L_0028AB4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028AB68; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028AB78; } }
L_0028AB68:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028ABA8; } }
L_0028AB78:
    set32(c.r[2], ld32((c.r[17].w[0] + 544u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028ABC8; } }
    st32((c.r[19].w[0] + 7700u), 0u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
L_0028ABA8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ABBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028ABBCu) [[unlikely]] return; }
L_0028ABBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AC34; } }
L_0028ABC8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ABD4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028ABD4u) [[unlikely]] return; }
L_0028ABD4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 408u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_0028AC08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AC08u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028AC08u) [[unlikely]] return; }
L_0028AC08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AC14u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0028AC14u) [[unlikely]] return; }
L_0028AC14:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028AC28; } }
    st32((c.r[19].w[0] + 28u), 0u);
    c.budget -= 1;
L_0028AC28:
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 3;
L_0028AC34:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028AC68:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACA8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0028ACA8u) [[unlikely]] return; }
L_0028ACA8:
    c.f[21] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACB8u);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x0028ACB8u) [[unlikely]] return; }
L_0028ACB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B684; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[22], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACD4u);  if (depth < kMaxDepth) unit_0069(c, 69u, depth + 1u); else { c.pc = 0x002A4FC8u; return; } if (c.pc != 0x0028ACD4u) [[unlikely]] return; }
L_0028ACD4:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[6], ld32((c.r[18].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[21], c.r[4].w[0] + 14208u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0028AD40; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AD30u) [[unlikely]] return; }
L_0028AD30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD40u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028AD40u) [[unlikely]] return; }
L_0028AD40:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028B684; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028B684; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0028B684; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028B684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD7Cu);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028AD7Cu) [[unlikely]] return; }
L_0028AD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B684; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[2].w[0] - 22480u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 128u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ADACu);  if (depth < kMaxDepth) unit_0087(c, 152u, depth + 1u); else { c.pc = 0x0031E250u; return; } if (c.pc != 0x0028ADACu) [[unlikely]] return; }
L_0028ADAC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0028B684; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ADC8u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028ADC8u) [[unlikely]] return; }
L_0028ADC8:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ADECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028ADECu) [[unlikely]] return; }
L_0028ADEC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ADFCu);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028ADFCu) [[unlikely]] return; }
L_0028ADFC:
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028AF64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE34u);  if (depth < kMaxDepth) unit_0087(c, 220u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0028AE34u) [[unlikely]] return; }
L_0028AE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AE4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 920u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0028AF64; } }
L_0028AE4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE68u);  if (depth < kMaxDepth) unit_0087(c, 166u, depth + 1u); else { c.pc = 0x0031E7B0u; return; } if (c.pc != 0x0028AE68u) [[unlikely]] return; }
L_0028AE68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AEA0; } }
    c.budget -= 1;
L_0028AE80:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] - 22480u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE9Cu);  if (depth < kMaxDepth) unit_0087(c, 166u, depth + 1u); else { c.pc = 0x0031E7B0u; return; } if (c.pc != 0x0028AE9Cu) [[unlikely]] return; }
L_0028AE9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028AEA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028AEEC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[4], c.r[19].w[0] - 22480u);
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEC0u);  if (depth < kMaxDepth) unit_0087(c, 220u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0028AEC0u) [[unlikely]] return; }
L_0028AEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028AE80u | kUnwind; return; } goto L_0028AE80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028AE80u | kUnwind; return; } goto L_0028AE80; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEE4u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028AEE4u) [[unlikely]] return; }
L_0028AEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AF20; } }
L_0028AEEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[4], c.r[19].w[0] - 22480u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF08u);  if (depth < kMaxDepth) unit_0087(c, 152u, depth + 1u); else { c.pc = 0x0031E250u; return; } if (c.pc != 0x0028AF08u) [[unlikely]] return; }
L_0028AF08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF18u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028AF18u) [[unlikely]] return; }
L_0028AF18:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 480u), c.r[2].w[0]);
    c.budget -= 2;
L_0028AF20:
    c.f[0] = ld32((c.r[17].w[0] - 128u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028AF64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF44u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028AF44u) [[unlikely]] return; }
L_0028AF44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF54u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028AF54u) [[unlikely]] return; }
L_0028AF54:
    set32(c.r[3], ld32((c.r[30].w[0] - 140u)));
    set32(c.r[2], 0u + 1000u);
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0028AF64:
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[23].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028AFD8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AFD8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFA4u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028AFA4u) [[unlikely]] return; }
L_0028AFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AFB8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AFCC; } }
L_0028AFB8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 246u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFCCu);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028AFCCu) [[unlikely]] return; }
L_0028AFCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFD8u);  if (depth < kMaxDepth) unit_0064(c, 227u, depth + 1u); else { c.pc = 0x00293600u; return; } if (c.pc != 0x0028AFD8u) [[unlikely]] return; }
L_0028AFD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[30].w[0] - 140u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B3EC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0028B120; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 840u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B01Cu);  if (depth < kMaxDepth) unit_0088(c, 305u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x0028B01Cu) [[unlikely]] return; }
L_0028B01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B0B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[4], c.r[19].w[0] - 22480u);
    set32(c.r[6], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B040u);  if (depth < kMaxDepth) unit_0087(c, 166u, depth + 1u); else { c.pc = 0x0031E7B0u; return; } if (c.pc != 0x0028B040u) [[unlikely]] return; }
L_0028B040:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028B120; } }
    c.budget -= 1;
L_0028B050:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B060u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028B060u) [[unlikely]] return; }
L_0028B060:
    set32(c.r[5], ld32((c.r[16].w[0] + 840u)));
    set32(c.r[4], c.r[17].w[0] - 19312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B070u);  if (depth < kMaxDepth) unit_0088(c, 305u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x0028B070u) [[unlikely]] return; }
L_0028B070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B084; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B0A4; } }
L_0028B084:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] - 22480u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0A0u);  if (depth < kMaxDepth) unit_0087(c, 166u, depth + 1u); else { c.pc = 0x0031E7B0u; return; } if (c.pc != 0x0028B0A0u) [[unlikely]] return; }
L_0028B0A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028B0A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028B050u | kUnwind; return; } goto L_0028B050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B120; } }
L_0028B0B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B0D0u) [[unlikely]] return; }
L_0028B0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B120; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B120; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[4], c.r[19].w[0] - 22480u);
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0FCu);  if (depth < kMaxDepth) unit_0087(c, 156u, depth + 1u); else { c.pc = 0x0031E420u; return; } if (c.pc != 0x0028B0FCu) [[unlikely]] return; }
L_0028B0FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028B120; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028B120; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B120u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028B120u) [[unlikely]] return; }
L_0028B120:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B684; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028B684; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B148u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028B148u) [[unlikely]] return; }
L_0028B148:
    set32(c.r[6], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B168u) [[unlikely]] return; }
L_0028B168:
    set32(c.r[2], ld32((c.r[18].w[0] + 540u)));
    c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0028B18C; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B188u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028B188u) [[unlikely]] return; }
L_0028B188:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0028B18C:
    c.f[0] = ld32((c.r[18].w[0] + 540u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] - 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028B1B8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0028B1B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028B684; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B1CCu);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028B1CCu) [[unlikely]] return; }
L_0028B1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B1E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B354; } }
L_0028B1E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B200u) [[unlikely]] return; }
L_0028B200:
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B218u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028B218u) [[unlikely]] return; }
L_0028B218:
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B22Cu);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028B22Cu) [[unlikely]] return; }
L_0028B22C:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0028B2DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] - 128u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028B274; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B274; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B274u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028B274u) [[unlikely]] return; }
L_0028B274:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B284u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028B284u) [[unlikely]] return; }
L_0028B284:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B294u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028B294u) [[unlikely]] return; }
L_0028B294:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B2A4u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028B2A4u) [[unlikely]] return; }
L_0028B2A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B668; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028B688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B668; } }
L_0028B2DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028B31C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B2FCu);  if (depth < kMaxDepth) unit_0062(c, 146u, depth + 1u); else { c.pc = 0x0028A308u; return; } if (c.pc != 0x0028B2FCu) [[unlikely]] return; }
L_0028B2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B31C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B314u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028B314u) [[unlikely]] return; }
L_0028B314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B684; } }
L_0028B31C:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B668; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028B688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B668; } }
L_0028B354:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B364u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028B364u) [[unlikely]] return; }
L_0028B364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B3AC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028B668; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B38Cu);  if (depth < kMaxDepth) unit_0062(c, 146u, depth + 1u); else { c.pc = 0x0028A308u; return; } if (c.pc != 0x0028B38Cu) [[unlikely]] return; }
L_0028B38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B668; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3A4u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028B3A4u) [[unlikely]] return; }
L_0028B3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B684; } }
L_0028B3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] - 128u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028B638; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B638; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3E4u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028B3E4u) [[unlikely]] return; }
L_0028B3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B638; } }
L_0028B3EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 228u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], ld32((c.r[18].w[0] + 540u)));
    set32(c.r[5], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    set32(c.r[4], 0u + 105u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 7700u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0028B440; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028B440; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_0028B460; } }
L_0028B440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028B480; } }
L_0028B460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4BBE0000u);
    c.r[1].d[0] = c.r[1].d[0] | 48160ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028B4A0; } }
L_0028B480:
    mmi::mult(c, 0, c.r[6].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028B4A4; } }
L_0028B4A0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0028B4A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028B51C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[23].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028B500; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 136u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B500; } }
    set32(c.r[2], 0u + 300u);
    st32((c.r[18].w[0] + 52u), 0u);
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 480u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B688; } }
L_0028B500:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028B51C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B514u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028B514u) [[unlikely]] return; }
L_0028B514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B674; } }
L_0028B51C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B528u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028B528u) [[unlikely]] return; }
L_0028B528:
    set32(c.r[3], 0u + 100u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028B538u);  goto L_0028B53C; }
L_0028B53C:
    set32(c.r[2], ld32((c.r[4].w[0] - 124u)));
    c.r[5].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B580; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028B580; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B580u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028B580u) [[unlikely]] return; }
L_0028B580:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B614; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B59Cu);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028B59Cu) [[unlikely]] return; }
L_0028B59C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5A8u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028B5A8u) [[unlikely]] return; }
L_0028B5A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B638; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + 80u);
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B5D8u) [[unlikely]] return; }
L_0028B5D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5E8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028B5E8u) [[unlikely]] return; }
L_0028B5E8:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 480u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B600u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028B600u) [[unlikely]] return; }
L_0028B600:
    set32(c.r[3], 0u + 1000u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B688; } }
L_0028B614:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0028B638; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B628u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028B628u) [[unlikely]] return; }
L_0028B628:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B638u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028B638u) [[unlikely]] return; }
L_0028B638:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B648u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028B648u) [[unlikely]] return; }
L_0028B648:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B658u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028B658u) [[unlikely]] return; }
L_0028B658:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B668u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028B668u) [[unlikely]] return; }
L_0028B668:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B688; } }
L_0028B674:
    set32(c.r[2], 0u + 300u);
    st32((c.r[18].w[0] + 52u), 0u);
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 480u), 0u);
    c.budget -= 4;
L_0028B684:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028B688:
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
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028B6C8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028B92C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B92C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[18], c.r[2].w[0] + 13016u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B930; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0028B92C; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B738u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028B738u) [[unlikely]] return; }
L_0028B738:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 105u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0028B774; } }
    set32(c.r[4], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B774u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x0028B774u) [[unlikely]] return; }
L_0028B774:
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B780u);  if (depth < kMaxDepth) unit_0088(c, 248u, depth + 1u); else { c.pc = 0x00322C20u; return; } if (c.pc != 0x0028B780u) [[unlikely]] return; }
L_0028B780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028B930; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B92C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 268u)));
    set32(c.r[19], 0u + 12u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B7ECu);  if (depth < kMaxDepth) unit_0068(c, 106u, depth + 1u); else { c.pc = 0x002A1F70u; return; } if (c.pc != 0x0028B7ECu) [[unlikely]] return; }
L_0028B7EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B92C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B92C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0028B83C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B830u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B830u) [[unlikely]] return; }
L_0028B830:
    st32((c.r[17].w[0] + 480u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B92C; } }
L_0028B83C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] - 120u));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B854u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028B854u) [[unlikely]] return; }
L_0028B854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B8C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 268u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028B878u);  goto L_0028B87C; }
L_0028B87C:
    c.r[6].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 268u), c.r[6].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B8C0u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028B8C0u) [[unlikely]] return; }
L_0028B8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B8D8; } }
L_0028B8C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B8D8u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028B8D8u) [[unlikely]] return; }
L_0028B8D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[19], 0u + 13248u);
    set32(c.r[18], c.r[20].w[0] + 14208u);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[19].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B8FCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0028B8FCu) [[unlikely]] return; }
L_0028B8FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028B920; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 5;
L_0028B920:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B930; } }
L_0028B92C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028B930:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028B958:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028BA84; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B990u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028B990u) [[unlikely]] return; }
L_0028B990:
    set32(c.r[18], 0u + 12u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 105u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 268u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 272u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA00u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028BA00u) [[unlikely]] return; }
L_0028BA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028BA74; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 268u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028BA24u);  goto L_0028BA28; }
L_0028BA28:
    c.r[6].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 268u), c.r[6].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[18].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA6Cu);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028BA6Cu) [[unlikely]] return; }
L_0028BA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BA84; } }
L_0028BA74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA84u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028BA84u) [[unlikely]] return; }
L_0028BA84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028BAA8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 29712u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = ld32((c.r[2].w[0] + 29712u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB04u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x0028BB04u) [[unlikely]] return; }
L_0028BB04:
    c.f[12] = c.f[20];
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB1Cu);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x0028BB1Cu) [[unlikely]] return; }
L_0028BB1C:
    c.r[4].d[0] = 0ull + 0ull;
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB34u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028BB34u) [[unlikely]] return; }
L_0028BB34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB48u);  if (depth < kMaxDepth) unit_0040(c, 30u, depth + 1u); else { c.pc = 0x00200618u; return; } if (c.pc != 0x0028BB48u) [[unlikely]] return; }
L_0028BB48:
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[3], 0u + 13248u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[4], 0u + 9u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0028BC68; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028BC68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0028BC58; } }
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BC54; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BBB4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028BBB4u) [[unlikely]] return; }
L_0028BBB4:
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028BBC4u);  goto L_0028BBC8; }
L_0028BBC8:
    c.r[4].d[0] = c.hi.d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BBEC; } }
    c.f[1] = fp::add(c.f[1], c.f[22]);
    c.budget -= 1;
L_0028BBEC:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BC00; } }
    c.f[1] = c.f[21];
    c.budget -= 1;
L_0028BC00:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BC48; } }
L_0028BC28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BC48; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0028BC48:
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BC58; } }
L_0028BC54:
    st32((c.r[16].w[0] + 148u), c.f[20]);
    c.budget -= 1;
L_0028BC58:
    set32(c.r[4], c.r[19].w[0] - 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC68u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028BC68u) [[unlikely]] return; }
L_0028BC68:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[17].d[0];  if (t) { goto L_0028BCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC7Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0028BC7Cu) [[unlikely]] return; }
L_0028BC7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028BCA8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BCA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BCA8u) [[unlikely]] return; }
L_0028BCA8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028BCD8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028BD4C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028BD30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BD28u) [[unlikely]] return; }
L_0028BD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BD4C; } }
L_0028BD30:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BD4Cu) [[unlikely]] return; }
L_0028BD4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD5Cu);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028BD5Cu) [[unlikely]] return; }
L_0028BD5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028BDC4; } }
    c.f[12] = ld32((c.r[17].w[0] + 548u));
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD7Cu);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028BD7Cu) [[unlikely]] return; }
L_0028BD7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BDA8u) [[unlikely]] return; }
L_0028BDA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDBCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0028BDBCu) [[unlikely]] return; }
L_0028BDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BDE0; } }
L_0028BDC4:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDDCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0028BDDCu) [[unlikely]] return; }
L_0028BDDC:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028BDE0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDECu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028BDECu) [[unlikely]] return; }
L_0028BDEC:
    set32(c.r[3], ld32((c.r[2].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028BE14; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE14u);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x0028BE14u) [[unlikely]] return; }
L_0028BE14:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028BE38:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 9920u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 400u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE84u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028BE84u) [[unlikely]] return; }
L_0028BE84:
    set32(c.r[16], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE9Cu);  if (depth < kMaxDepth) unit_0061(c, 271u, depth + 1u); else { c.pc = 0x002869A8u; return; } if (c.pc != 0x0028BE9Cu) [[unlikely]] return; }
L_0028BE9C:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEB0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028BEB0u) [[unlikely]] return; }
L_0028BEB0:
    set32(c.r[5], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] + 10080u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 400u)));
    set32(c.r[6], 0u + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEE0u);  if (depth < kMaxDepth) unit_0068(c, 289u, depth + 1u); else { c.pc = 0x002A3920u; return; } if (c.pc != 0x0028BEE0u) [[unlikely]] return; }
L_0028BEE0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028BF8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 14208u);
    set32(c.r[20], 0u + 13248u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
L_0028BF00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028BF7C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028BF7C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028BF7C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] - 12u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028BF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF44u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028BF44u) [[unlikely]] return; }
L_0028BF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028BF7C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 400u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF70u);  if (depth < kMaxDepth) unit_0068(c, 301u, depth + 1u); else { c.pc = 0x002A3BC8u; return; } if (c.pc != 0x0028BF70u) [[unlikely]] return; }
L_0028BF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028BF7C; } }
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0028BF7C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BF00u | kUnwind; return; } goto L_0028BF00; } }
L_0028BF8C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028BFB8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0063(c, 1u, depth); } }
    set32(c.r[2], ld32((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0063(c, 1u, depth); } }
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0063(c, 3u, depth); } }
    [[clang::musttail]] return unit_0063(c, 1u, depth);
}

}
