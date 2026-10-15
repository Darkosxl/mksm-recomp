#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198,
    0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A0000;
    case 2u: goto L_001A0010;
    case 3u: goto L_001A002C;
    case 4u: goto L_001A0054;
    case 5u: goto L_001A0070;
    case 6u: goto L_001A00B0;
    case 7u: goto L_001A00E8;
    case 8u: goto L_001A0104;
    case 9u: goto L_001A0198;
    case 10u: goto L_001A01B4;
    case 11u: goto L_001A01C8;
    case 12u: goto L_001A0200;
    case 13u: goto L_001A021C;
    case 14u: goto L_001A0244;
    case 15u: goto L_001A02C4;
    case 16u: goto L_001A031C;
    case 17u: goto L_001A0348;
    case 18u: goto L_001A039C;
    case 19u: goto L_001A03BC;
    case 20u: goto L_001A03F0;
    case 21u: goto L_001A04D8;
    case 22u: goto L_001A04F0;
    case 23u: goto L_001A0504;
    case 24u: goto L_001A051C;
    case 25u: goto L_001A058C;
    case 26u: goto L_001A05B4;
    case 27u: goto L_001A05CC;
    case 28u: goto L_001A05E0;
    case 29u: goto L_001A05F0;
    case 30u: goto L_001A0608;
    case 31u: goto L_001A0680;
    case 32u: goto L_001A0698;
    case 33u: goto L_001A06D4;
    case 34u: goto L_001A0754;
    case 35u: goto L_001A0768;
    case 36u: goto L_001A07AC;
    case 37u: goto L_001A07F0;
    case 38u: goto L_001A0804;
    case 39u: goto L_001A0844;
    case 40u: goto L_001A0874;
    case 41u: goto L_001A08A8;
    case 42u: goto L_001A091C;
    case 43u: goto L_001A0944;
    case 44u: goto L_001A0970;
    case 45u: goto L_001A09A0;
    case 46u: goto L_001A09CC;
    case 47u: goto L_001A0A28;
    case 48u: goto L_001A0AE4;
    case 49u: goto L_001A0B10;
    case 50u: goto L_001A0B20;
    case 51u: goto L_001A0B44;
    case 52u: goto L_001A0B54;
    case 53u: goto L_001A0B68;
    case 54u: goto L_001A0B78;
    case 55u: goto L_001A0BD0;
    case 56u: goto L_001A0C08;
    case 57u: goto L_001A0C2C;
    case 58u: goto L_001A0C44;
    case 59u: goto L_001A0C58;
    case 60u: goto L_001A0C90;
    case 61u: goto L_001A0CA0;
    case 62u: goto L_001A0CB8;
    case 63u: goto L_001A0CE0;
    case 64u: goto L_001A0D10;
    case 65u: goto L_001A0D1C;
    case 66u: goto L_001A0D48;
    case 67u: goto L_001A0D8C;
    case 68u: goto L_001A0D9C;
    case 69u: goto L_001A0DC8;
    case 70u: goto L_001A0DD8;
    case 71u: goto L_001A0DF4;
    case 72u: goto L_001A0E20;
    case 73u: goto L_001A0E50;
    case 74u: goto L_001A0E88;
    case 75u: goto L_001A0F00;
    case 76u: goto L_001A0F1C;
    case 77u: goto L_001A0F34;
    case 78u: goto L_001A0F5C;
    case 79u: goto L_001A0F84;
    case 80u: goto L_001A0FAC;
    case 81u: goto L_001A0FE8;
    case 82u: goto L_001A1010;
    case 83u: goto L_001A1060;
    case 84u: goto L_001A1128;
    case 85u: goto L_001A1198;
    case 86u: goto L_001A11B0;
    case 87u: goto L_001A1200;
    case 88u: goto L_001A1228;
    case 89u: goto L_001A1274;
    case 90u: goto L_001A12B8;
    case 91u: goto L_001A12E4;
    case 92u: goto L_001A1344;
    case 93u: goto L_001A1358;
    case 94u: goto L_001A13A0;
    case 95u: goto L_001A1400;
    case 96u: goto L_001A146C;
    case 97u: goto L_001A1494;
    case 98u: goto L_001A14B0;
    case 99u: goto L_001A1548;
    case 100u: goto L_001A1590;
    case 101u: goto L_001A15F0;
    case 102u: goto L_001A1648;
    case 103u: goto L_001A1670;
    case 104u: goto L_001A1688;
    case 105u: goto L_001A1718;
    case 106u: goto L_001A1784;
    case 107u: goto L_001A17E8;
    case 108u: goto L_001A1814;
    case 109u: goto L_001A1858;
    case 110u: goto L_001A18C0;
    case 111u: goto L_001A1908;
    case 112u: goto L_001A1934;
    case 113u: goto L_001A1978;
    case 114u: goto L_001A19E0;
    case 115u: goto L_001A1A28;
    case 116u: goto L_001A1A54;
    case 117u: goto L_001A1A98;
    case 118u: goto L_001A1B00;
    case 119u: goto L_001A1B48;
    case 120u: goto L_001A1B90;
    case 121u: goto L_001A1BA0;
    case 122u: goto L_001A1BC0;
    case 123u: goto L_001A1BD0;
    case 124u: goto L_001A1C30;
    case 125u: goto L_001A1CA0;
    case 126u: goto L_001A1D18;
    case 127u: goto L_001A1D40;
    case 128u: goto L_001A1D88;
    case 129u: goto L_001A1DC0;
    case 130u: goto L_001A1DE8;
    case 131u: goto L_001A1E30;
    case 132u: goto L_001A1E98;
    case 133u: goto L_001A1F00;
    case 134u: goto L_001A1F58;
    case 135u: goto L_001A1F80;
    case 136u: goto L_001A1FC0;
    case 137u: goto L_001A2040;
    case 138u: goto L_001A2070;
    case 139u: goto L_001A207C;
    case 140u: goto L_001A20A0;
    case 141u: goto L_001A20E8;
    case 142u: goto L_001A21B4;
    case 143u: goto L_001A2210;
    case 144u: goto L_001A22C8;
    case 145u: goto L_001A22F0;
    case 146u: goto L_001A2318;
    case 147u: goto L_001A23B8;
    case 148u: goto L_001A23D4;
    case 149u: goto L_001A23E8;
    case 150u: goto L_001A23F8;
    case 151u: goto L_001A2408;
    case 152u: goto L_001A2424;
    case 153u: goto L_001A2438;
    case 154u: goto L_001A2458;
    case 155u: goto L_001A2470;
    case 156u: goto L_001A2490;
    case 157u: goto L_001A24A0;
    case 158u: goto L_001A24D4;
    case 159u: goto L_001A24EC;
    case 160u: goto L_001A24F8;
    case 161u: goto L_001A2514;
    case 162u: goto L_001A2524;
    case 163u: goto L_001A2550;
    case 164u: goto L_001A2560;
    case 165u: goto L_001A2570;
    case 166u: goto L_001A2590;
    case 167u: goto L_001A259C;
    case 168u: goto L_001A25B4;
    case 169u: goto L_001A25E0;
    case 170u: goto L_001A25F0;
    case 171u: goto L_001A25F8;
    case 172u: goto L_001A2620;
    case 173u: goto L_001A2628;
    case 174u: goto L_001A2694;
    case 175u: goto L_001A26A0;
    case 176u: goto L_001A26F0;
    case 177u: goto L_001A271C;
    case 178u: goto L_001A2730;
    case 179u: goto L_001A275C;
    case 180u: goto L_001A2770;
    case 181u: goto L_001A27A8;
    case 182u: goto L_001A27C4;
    case 183u: goto L_001A2800;
    case 184u: goto L_001A2810;
    case 185u: goto L_001A2830;
    case 186u: goto L_001A2840;
    case 187u: goto L_001A2868;
    case 188u: goto L_001A2880;
    case 189u: goto L_001A2890;
    case 190u: goto L_001A28AC;
    case 191u: goto L_001A28C0;
    case 192u: goto L_001A2928;
    case 193u: goto L_001A2950;
    case 194u: goto L_001A2964;
    case 195u: goto L_001A2994;
    case 196u: goto L_001A29D0;
    case 197u: goto L_001A29EC;
    case 198u: goto L_001A29FC;
    case 199u: goto L_001A2A0C;
    case 200u: goto L_001A2A18;
    case 201u: goto L_001A2A20;
    case 202u: goto L_001A2A40;
    case 203u: goto L_001A2A54;
    case 204u: goto L_001A2A70;
    case 205u: goto L_001A2A80;
    case 206u: goto L_001A2ACC;
    case 207u: goto L_001A2AE0;
    case 208u: goto L_001A2AEC;
    case 209u: goto L_001A2AF4;
    case 210u: goto L_001A2B04;
    case 211u: goto L_001A2B6C;
    case 212u: goto L_001A2B7C;
    case 213u: goto L_001A2B8C;
    case 214u: goto L_001A2BD0;
    case 215u: goto L_001A2BF0;
    case 216u: goto L_001A2C0C;
    case 217u: goto L_001A2C30;
    case 218u: goto L_001A2C7C;
    case 219u: goto L_001A2C94;
    case 220u: goto L_001A2CB0;
    case 221u: goto L_001A2D04;
    case 222u: goto L_001A2D24;
    case 223u: goto L_001A2D48;
    case 224u: goto L_001A2D80;
    case 225u: goto L_001A2D90;
    case 226u: goto L_001A2DA0;
    case 227u: goto L_001A2DC4;
    case 228u: goto L_001A2DF8;
    case 229u: goto L_001A2E30;
    case 230u: goto L_001A2E54;
    case 231u: goto L_001A2E90;
    case 232u: goto L_001A2EB4;
    case 233u: goto L_001A2EC8;
    case 234u: goto L_001A2EDC;
    case 235u: goto L_001A2F00;
    case 236u: goto L_001A2F2C;
    case 237u: goto L_001A2F50;
    case 238u: goto L_001A2F64;
    case 239u: goto L_001A2F80;
    case 240u: goto L_001A2FA8;
    case 241u: goto L_001A3008;
    case 242u: goto L_001A3014;
    case 243u: goto L_001A3020;
    case 244u: goto L_001A302C;
    case 245u: goto L_001A3038;
    case 246u: goto L_001A3064;
    case 247u: goto L_001A3094;
    case 248u: goto L_001A30BC;
    case 249u: goto L_001A30E4;
    case 250u: goto L_001A30F0;
    case 251u: goto L_001A3138;
    case 252u: goto L_001A3160;
    case 253u: goto L_001A3188;
    case 254u: goto L_001A31A8;
    case 255u: goto L_001A31C0;
    case 256u: goto L_001A31F8;
    case 257u: goto L_001A3208;
    case 258u: goto L_001A3240;
    case 259u: goto L_001A3258;
    case 260u: goto L_001A326C;
    case 261u: goto L_001A3290;
    case 262u: goto L_001A3294;
    case 263u: goto L_001A32A8;
    case 264u: goto L_001A32D0;
    case 265u: goto L_001A32D4;
    case 266u: goto L_001A32E8;
    case 267u: goto L_001A3310;
    case 268u: goto L_001A3314;
    case 269u: goto L_001A3328;
    case 270u: goto L_001A3350;
    case 271u: goto L_001A3354;
    case 272u: goto L_001A3368;
    case 273u: goto L_001A3390;
    case 274u: goto L_001A33A0;
    case 275u: goto L_001A33C8;
    case 276u: goto L_001A33E0;
    case 277u: goto L_001A3430;
    case 278u: goto L_001A3458;
    case 279u: goto L_001A3470;
    case 280u: goto L_001A34C0;
    case 281u: goto L_001A34E8;
    case 282u: goto L_001A3518;
    case 283u: goto L_001A3578;
    case 284u: goto L_001A35C0;
    case 285u: goto L_001A35E4;
    case 286u: goto L_001A35F0;
    case 287u: goto L_001A3620;
    case 288u: goto L_001A3680;
    case 289u: goto L_001A36B4;
    case 290u: goto L_001A36D8;
    case 291u: goto L_001A36E8;
    case 292u: goto L_001A3754;
    case 293u: goto L_001A3770;
    case 294u: goto L_001A378C;
    case 295u: goto L_001A37A0;
    case 296u: goto L_001A37E0;
    case 297u: goto L_001A3848;
    case 298u: goto L_001A3864;
    case 299u: goto L_001A3888;
    case 300u: goto L_001A38C0;
    case 301u: goto L_001A38E4;
    case 302u: goto L_001A3908;
    case 303u: goto L_001A394C;
    case 304u: goto L_001A3988;
    case 305u: goto L_001A39A4;
    case 306u: goto L_001A39CC;
    case 307u: goto L_001A39F4;
    case 308u: goto L_001A3A1C;
    case 309u: goto L_001A3A24;
    case 310u: goto L_001A3A2C;
    case 311u: goto L_001A3A34;
    case 312u: goto L_001A3A3C;
    case 313u: goto L_001A3A50;
    case 314u: goto L_001A3A6C;
    case 315u: goto L_001A3A80;
    case 316u: goto L_001A3AA8;
    case 317u: goto L_001A3AD0;
    case 318u: goto L_001A3B18;
    case 319u: goto L_001A3B30;
    case 320u: goto L_001A3B78;
    case 321u: goto L_001A3B90;
    case 322u: goto L_001A3BAC;
    case 323u: goto L_001A3BB8;
    case 324u: goto L_001A3BD8;
    case 325u: goto L_001A3C08;
    case 326u: goto L_001A3C28;
    case 327u: goto L_001A3C40;
    case 328u: goto L_001A3C60;
    case 329u: goto L_001A3C78;
    case 330u: goto L_001A3C88;
    case 331u: goto L_001A3CA0;
    case 332u: goto L_001A3CB0;
    case 333u: goto L_001A3D2C;
    case 334u: goto L_001A3D30;
    case 335u: goto L_001A3D6C;
    case 336u: goto L_001A3DE4;
    case 337u: goto L_001A3E3C;
    case 338u: goto L_001A3E90;
    case 339u: goto L_001A3F60;
    case 340u: goto L_001A3F94;
    case 341u: goto L_001A3FE4;
    default: bad_entry(c, 0x001A0000u); return;
    }
L_001A0000:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0030; } }
L_001A0010:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FFE8u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 333u, depth); } }
L_001A002C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A0030:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A0054; } }
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0054u);  if (depth < kMaxDepth) unit_0028(c, 5u, depth + 1u); else { c.pc = 0x001A0070u; return; } if (c.pc != 0x001A0054u) [[unlikely]] return; }
L_001A0054:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0070:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[20], ld32((c.r[19].w[0] + 20u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A00B8; } }
L_001A00B0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_001A00B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0104; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A00B0u | kUnwind; return; } goto L_001A00B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00E8u);  if (depth < kMaxDepth) unit_0028(c, 17u, depth + 1u); else { c.pc = 0x001A0348u; return; } if (c.pc != 0x001A00E8u) [[unlikely]] return; }
L_001A00E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0104u);  if (depth < kMaxDepth) unit_0028(c, 5u, depth + 1u); else { c.pc = 0x001A0070u; return; } if (c.pc != 0x001A0104u) [[unlikely]] return; }
L_001A0104:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001A031C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], 0u + 160u);
    set32(c.r[9], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[10], c.r[3].w[0] + 3u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    if (c.r[2].d[0] != 0) c.r[10].d[0] = c.r[3].d[0];
    set32(c.r[11], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    set32(c.r[11], c.r[11].w[0] - c.r[8].w[0]);
    set32(c.r[12], 0u + 127u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[11].w[0] - c.r[6].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], 0u + 16u);
    st32((c.r[29].w[0] + 32u), c.r[12].w[0]);
    set32(c.r[6], 0u + 144u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0198u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x001A0198u) [[unlikely]] return; }
L_001A0198:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A01BC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A01B4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001A01B4u) [[unlikely]] return; }
L_001A01B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A01C8; } }
L_001A01BC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A01C8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001A01C8u) [[unlikely]] return; }
L_001A01C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0280; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[18], c.r[2].w[0] + c.r[20].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 5;
L_001A0200:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A021Cu);  if (depth < kMaxDepth) unit_0028(c, 17u, depth + 1u); else { c.pc = 0x001A0348u; return; } if (c.pc != 0x001A021Cu) [[unlikely]] return; }
L_001A021C:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[20].w[0] + 30840u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[29].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0244u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A0244u) [[unlikely]] return; }
L_001A0244:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0280; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0200u | kUnwind; return; } goto L_001A0200; } }
L_001A0280:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A02C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[8], c.r[8].w[0] + 31072u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], 0u + 126u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 92u));
    set32(c.r[7], 0u + 2u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.f[13] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02C4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A02C4u) [[unlikely]] return; }
L_001A02C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A031C; } }
    c.f[12] = ld32((c.r[16].w[0] + 92u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 31080u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 126u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[13] = c.f[12];
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A031Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A031Cu) [[unlikely]] return; }
L_001A031C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0348:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 336u), c.f[20]);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A03B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A09F0; } }
L_001A039C:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04E4; } }
L_001A03B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03BCu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A03BCu) [[unlikely]] return; }
L_001A03BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(0u));
    set32(c.r[21], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 156u);
    set32(c.r[22], c.r[29].w[0] + 144u);
    set32(c.r[23], c.r[29].w[0] + 148u);
    set32(c.r[30], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04CC; } }
    c.budget -= 1;
L_001A03F0:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A04B0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0460; } }
    c.r[2].d[0] = c.r[4].sd[0] < 37ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0440; } }
    c.r[2].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A04B0; } }
    set32(c.r[2], 0u - 94u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A04B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04BC; } }
L_001A0440:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A04B0; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A04B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04BC; } }
L_001A0460:
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A04B0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0498; } }
    c.r[2].d[0] = c.r[4].sd[0] < 95ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A04BC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 92ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A04BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04B0; } }
L_001A0498:
    set32(c.r[2], 0u + 124u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A04B0; } }
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A04BC; } }
L_001A04B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04C0; } }
L_001A04BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A04C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A039Cu | kUnwind; return; } goto L_001A039C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A04CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04D8u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001A04D8u) [[unlikely]] return; }
L_001A04D8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A03F0u | kUnwind; return; } goto L_001A03F0; } }
L_001A04E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04F0u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001A04F0u) [[unlikely]] return; }
L_001A04F0:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0504u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001A0504u) [[unlikely]] return; }
L_001A0504:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A051Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001A051Cu) [[unlikely]] return; }
L_001A051C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A08B0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    c.r[16].d[0] = c.r[16].d[0] | 40864ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A0544; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001A0544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A07B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001A0590; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 31088u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[5], c.r[5].w[0] - 4u);
    set32(c.r[7], 0u + 2u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x803B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A058Cu);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A058Cu) [[unlikely]] return; }
L_001A058C:
    c.r[16].d[0] = c.r[16].d[0] | 15164ull;
    c.budget -= 1;
L_001A0590:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[20], c.r[29].w[0] + 128u);
    set32(c.r[18], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0818; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05B4u);  if (depth < kMaxDepth) unit_0028(c, 264u, depth + 1u); else { c.pc = 0x001A32D0u; return; } if (c.pc != 0x001A05B4u) [[unlikely]] return; }
L_001A05B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A05D4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05CCu);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3350u; return; } if (c.pc != 0x001A05CCu) [[unlikely]] return; }
L_001A05CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A05F8; } }
L_001A05D4:
    set32(c.r[4], 0u + 446u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05E0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A05E0u) [[unlikely]] return; }
L_001A05E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05F0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001A05F0u) [[unlikely]] return; }
L_001A05F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0818; } }
L_001A05F8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0608u);  if (depth < kMaxDepth) unit_0028(c, 137u, depth + 1u); else { c.pc = 0x001A2040u; return; } if (c.pc != 0x001A0608u) [[unlikely]] return; }
L_001A0608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A06E4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], 0u + 127u);
    set32(c.r[9], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], 0u + 13u);
    set32(c.r[10], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 160u);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[9], c.r[9].w[0] - 16u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 152u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[11], 0u + 12u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80EF0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0680u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x001A0680u) [[unlikely]] return; }
L_001A0680:
    c.r[16].d[0] = c.r[16].d[0] | 40944ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 108u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001A0698:
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[5].w[0] - 16u);
    c.r[4].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A06D4; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0698u | kUnwind; return; } goto L_001A0698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A079C; } }
L_001A06D4:
    st32((c.r[3].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A079C; } }
L_001A06E4:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], 0u + 127u);
    set32(c.r[9], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[10], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 13u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 160u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[9], c.r[9].w[0] - 16u);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[6], 0u + 152u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[11], 0u + 12u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80CF0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0754u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x001A0754u) [[unlikely]] return; }
L_001A0754:
    c.r[16].d[0] = c.r[16].d[0] | 53200ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 108u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001A0768:
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[5].w[0] - 16u);
    c.r[4].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A06D4u | kUnwind; return; } goto L_001A06D4; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0768u | kUnwind; return; } goto L_001A0768; } }
L_001A079C:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A07ACu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001A07ACu) [[unlikely]] return; }
L_001A07AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0818; } }
L_001A07B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001A07F4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 31088u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[7], 0u + 2u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x803B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A07F0u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A07F0u) [[unlikely]] return; }
L_001A07F0:
    c.r[16].d[0] = c.r[16].d[0] | 15164ull;
    c.budget -= 1;
L_001A07F4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0804u);  if (depth < kMaxDepth) unit_0028(c, 300u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x001A0804u) [[unlikely]] return; }
L_001A0804:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80EF0000u);
    set32(c.r[20], c.r[29].w[0] + 128u);
    c.r[3].d[0] = c.r[3].d[0] | 40944ull;
    set32(c.r[18], c.r[29].w[0] + 132u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_001A0818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0844u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A0844u) [[unlikely]] return; }
L_001A0844:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0874u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A0874u) [[unlikely]] return; }
L_001A0874:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], ld32((c.r[29].w[0] + 128u)));
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08A8u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A08A8u) [[unlikely]] return; }
L_001A08A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0970; } }
L_001A08B0:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[29].w[0] + 136u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.f[13] = c.f[12];
    set32(c.r[9], c.r[29].w[0] + 140u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A091Cu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A091Cu) [[unlikely]] return; }
L_001A091C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0944u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A0944u) [[unlikely]] return; }
L_001A0944:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] | 40944ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0970u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A0970u) [[unlikely]] return; }
L_001A0970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09A0u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A09A0u) [[unlikely]] return; }
L_001A09A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[12] = c.f[20];
    set32(c.r[9], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], c.r[2].w[0] + 31096u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09CCu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A09CCu) [[unlikely]] return; }
L_001A09CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 9;
L_001A09F0:
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
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0A28:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[19], ld32((c.r[20].w[0] + 176u)));
    c.budget -= 19;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A0E50; } }
    set32(c.r[2], c.r[7].w[0] - c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[23].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[22], c.r[9].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A0D50; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A0AD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] - 22u);
    set32(c.r[8], c.r[8].w[0] + 31104u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80010000u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0D3C; } }
L_001A0AD4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0AE4u);  if (depth < kMaxDepth) unit_0028(c, 137u, depth + 1u); else { c.pc = 0x001A2040u; return; } if (c.pc != 0x001A0AE4u) [[unlikely]] return; }
L_001A0AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0AF8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0C34; } }
L_001A0AF8:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B10u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0B10u) [[unlikely]] return; }
L_001A0B10:
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B20u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001A0B20u) [[unlikely]] return; }
L_001A0B20:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 18712u)));
    set32(c.r[8], c.r[16].w[0] + 31128u);
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[18].w[0] + 30976u);
    set32(c.r[9], 0u + 3412u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B44u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001A0B44u) [[unlikely]] return; }
L_001A0B44:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B54u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0B54u) [[unlikely]] return; }
L_001A0B54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B68u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001A0B68u) [[unlikely]] return; }
L_001A0B68:
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    set32(c.r[3], 0u + 10u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_001A0B78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_001A0B9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A0B98; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0B78u | kUnwind; return; } goto L_001A0B78; } }
L_001A0B98:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A0B9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 68u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BD0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0BD0u) [[unlikely]] return; }
L_001A0BD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_001A0C08; } }
    st8((c.r[16].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C08u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0C08u) [[unlikely]] return; }
L_001A0C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[7], c.r[30].w[0] + 31128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], 0u + 3442u);
    set32(c.r[6], c.r[2].w[0] + 30976u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C2Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001A0C2Cu) [[unlikely]] return; }
L_001A0C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0E50; } }
L_001A0C34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C44u);  if (depth < kMaxDepth) unit_0028(c, 286u, depth + 1u); else { c.pc = 0x001A35F0u; return; } if (c.pc != 0x001A0C44u) [[unlikely]] return; }
L_001A0C44:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C58u);  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3290u; return; } if (c.pc != 0x001A0C58u) [[unlikely]] return; }
L_001A0C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0D10; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A0D10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0D10; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 230u);
    set32(c.r[16], c.r[16].w[0] + 31152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C90u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0C90u) [[unlikely]] return; }
L_001A0C90:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CA0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0CA0u) [[unlikely]] return; }
L_001A0CA0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CB8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001A0CB8u) [[unlikely]] return; }
L_001A0CB8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[9], c.r[29].w[0] + 68u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CE0u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A0CE0u) [[unlikely]] return; }
L_001A0CE0:
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.f[12] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[5], c.r[5].w[0] - 10u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D10u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0D10u) [[unlikely]] return; }
L_001A0D10:
    set32(c.r[4], 0u + 446u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D1Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0D1Cu) [[unlikely]] return; }
L_001A0D1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
L_001A0D3C:
    c.f[13] = c.f[12];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D48u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0D48u) [[unlikely]] return; }
L_001A0D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0E50; } }
L_001A0D50:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A0D94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[18].w[0] - 22u);
    set32(c.r[8], c.r[8].w[0] + 31104u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80010000u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D8Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0D8Cu) [[unlikely]] return; }
L_001A0D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0DC8; } }
L_001A0D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D9Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0D9Cu) [[unlikely]] return; }
L_001A0D9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 40864ull;
    set32(c.r[7], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DC8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0DC8u) [[unlikely]] return; }
L_001A0DC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DD8u);  if (depth < kMaxDepth) unit_0028(c, 300u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x001A0DD8u) [[unlikely]] return; }
L_001A0DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0E50; } }
    set32(c.r[4], 0u + 406u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DF4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A0DF4u) [[unlikely]] return; }
L_001A0DF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 72u);
    set32(c.r[9], c.r[29].w[0] + 76u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0E20u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A0E20u) [[unlikely]] return; }
L_001A0E20:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.f[12] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] - c.r[5].w[0]);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10u);
    c.r[6].d[0] = c.r[6].d[0] | 40944ull;
    set32(c.r[7], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0E50u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A0E50u) [[unlikely]] return; }
L_001A0E50:
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
L_001A0E88:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A0FE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0FE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0FE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A0FE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x80EF0000u);
    set32(c.r[20], c.r[2].w[0] + 7648u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x809F0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 1720u)));
    c.r[18].d[0] = c.r[18].d[0] | 40944ull;
    c.r[19].d[0] = c.r[19].d[0] | 61424ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F00u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x001A0F00u) [[unlikely]] return; }
L_001A0F00:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[19].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F1Cu);  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3290u; return; } if (c.pc != 0x001A0F1Cu) [[unlikely]] return; }
L_001A0F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0F68; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F34u);  if (depth < kMaxDepth) unit_0028(c, 286u, depth + 1u); else { c.pc = 0x001A35F0u; return; } if (c.pc != 0x001A0F34u) [[unlikely]] return; }
L_001A0F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0F48; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0FE8; } }
L_001A0F48:
    set32(c.r[4], ld32((c.r[20].w[0] + 1720u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F5Cu);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x001A0F5Cu) [[unlikely]] return; }
L_001A0F5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[19].d[0];
    c.budget -= 3;
L_001A0F68:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30640u);
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F84u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001A0F84u) [[unlikely]] return; }
L_001A0F84:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 20u);
    c.f[13] = c.f[12];
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0FACu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A0FACu) [[unlikely]] return; }
L_001A0FAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], 0u + 2u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[13] = c.f[12];
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0FE8u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x001A0FE8u) [[unlikely]] return; }
L_001A0FE8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1010:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A11D4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1178; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1060u);  if (depth < kMaxDepth) unit_0028(c, 137u, depth + 1u); else { c.pc = 0x001A2040u; return; } if (c.pc != 0x001A1060u) [[unlikely]] return; }
L_001A1060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1178; } }
L_001A1068:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001A1090; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A11D4; } }
L_001A1090:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A10A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A11D4; } }
L_001A10A4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001A10D0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[3].w[0] + 10088u);
    set32(c.r[2], c.r[2].w[0] + 30u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 10088u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A10F0; } }
L_001A10D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[5].w[0] + 30u);
    st32((c.r[2].w[0] + 10088u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 10088u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
L_001A10F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 20716u)));
    set32(c.r[3], c.r[6].w[0] + 10088u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 42u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A11D4; } }
L_001A1128:
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 20716u)));
    set32(c.r[2], c.r[4].w[0] + 10088u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 42u);
    st32((c.r[4].w[0] + 10088u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A11D4; } }
L_001A1178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[21], c.r[2].w[0] + 15872u);
    set32(c.r[20], c.r[3].w[0] + 7648u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
L_001A1198:
    set32(c.r[5], ld32((c.r[20].w[0] + 1720u)));
    set32(c.r[4], c.r[19].w[0] - 14960u);
    set32(c.r[18], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A11B0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A11B0u) [[unlikely]] return; }
L_001A11B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1128u | kUnwind; return; } goto L_001A1128; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1198u | kUnwind; return; } goto L_001A1198; } }
L_001A11D4:
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
L_001A1200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1254; } }
    c.budget -= 1;
L_001A1228:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1228u | kUnwind; return; } goto L_001A1228; } }
L_001A1254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[2].w[0] + 1720u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1274u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A1274u) [[unlikely]] return; }
L_001A1274:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1298; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001A1298; } }
    c.r[2].d[0] = c.r[6].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = 0ull;
    c.budget -= 2;
L_001A1298:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A12E0; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001A12B8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[4].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001A1308; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A12B8u | kUnwind; return; } goto L_001A12B8; } }
L_001A12E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A12E4:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A12FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A131C; } }
L_001A12FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1324; } }
L_001A1308:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A12E4u | kUnwind; return; } goto L_001A12E4; } }
L_001A131C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001A1324:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[2].w[0] + 15812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1344u);  if (depth < kMaxDepth) unit_0028(c, 82u, depth + 1u); else { c.pc = 0x001A1010u; return; } if (c.pc != 0x001A1344u) [[unlikely]] return; }
L_001A1344:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1358:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A1530; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 16u)));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001A1478; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A13FC; } }
    c.budget -= 1;
L_001A13A0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A13C0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A13C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A13CC; } }
L_001A13C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A13DC; } }
L_001A13CC:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A13DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001A1448; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A13A0u | kUnwind; return; } goto L_001A13A0; } }
L_001A13FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001A1400:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A1478; } }
    set32(c.r[2], c.r[9].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1478; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A143C; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A143C; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001A1454; } }
L_001A143C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A147C; } }
L_001A1448:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1400u | kUnwind; return; } goto L_001A1400; } }
L_001A1454:
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A147C; } }
L_001A146C:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1510; } }
L_001A1478:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_001A147C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001A1530; } }
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1494u);  if (depth < kMaxDepth) unit_0028(c, 293u, depth + 1u); else { c.pc = 0x001A3770u; return; } if (c.pc != 0x001A1494u) [[unlikely]] return; }
L_001A1494:
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A150C; } }
    c.budget -= 1;
L_001A14B0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001A14D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A14D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A14DC; } }
L_001A14D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A14EC; } }
L_001A14DC:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A14EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A146Cu | kUnwind; return; } goto L_001A146C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A14B0u | kUnwind; return; } goto L_001A14B0; } }
L_001A150C:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_001A1510:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1530; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_001A1530:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1548:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A1700; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 16u)));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001A1654; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A15EC; } }
    c.budget -= 1;
L_001A1590:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A15B0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A15B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A15BC; } }
L_001A15B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A15CC; } }
L_001A15BC:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A15CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001A1624; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1590u | kUnwind; return; } goto L_001A1590; } }
L_001A15EC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001A15F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1654; } }
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A1618; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1618; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001A1630; } }
L_001A1618:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1658; } }
L_001A1624:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A15F0u | kUnwind; return; } goto L_001A15F0; } }
L_001A1630:
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1658; } }
L_001A1648:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16E8; } }
L_001A1654:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_001A1658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001A1700; } }
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1670u);  if (depth < kMaxDepth) unit_0028(c, 293u, depth + 1u); else { c.pc = 0x001A3770u; return; } if (c.pc != 0x001A1670u) [[unlikely]] return; }
L_001A1670:
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A16E4; } }
L_001A1688:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001A16A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A16A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A16B4; } }
L_001A16A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16C4; } }
L_001A16B4:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A16C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1648u | kUnwind; return; } goto L_001A1648; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1688u | kUnwind; return; } goto L_001A1688; } }
L_001A16E4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001A16E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1700; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_001A1700:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1718:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A17D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1754; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1758; } }
L_001A1754:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A17D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1784u);  if (depth < kMaxDepth) unit_0028(c, 293u, depth + 1u); else { c.pc = 0x001A3770u; return; } if (c.pc != 0x001A1784u) [[unlikely]] return; }
L_001A1784:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A17B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A17B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A17B4; } }
L_001A17B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A17B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A17CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001A17CC:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_001A17D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A17E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 9368u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1814u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A1814u) [[unlikely]] return; }
L_001A1814:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1838; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001A1838; } }
    c.r[2].d[0] = c.r[8].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;
    c.budget -= 2;
L_001A1838:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A189C; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001A1858:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001A1880; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A18A0; } }
L_001A1880:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1858u | kUnwind; return; } goto L_001A1858; } }
L_001A189C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A18A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A18F0; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 461u);
    c.budget -= 3;
L_001A18C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_001A18DC; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A18F4; } }
L_001A18DC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A18C0u | kUnwind; return; } goto L_001A18C0; } }
L_001A18F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A18F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 9368u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1934u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A1934u) [[unlikely]] return; }
L_001A1934:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1958; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001A1958; } }
    c.r[2].d[0] = c.r[8].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;
    c.budget -= 2;
L_001A1958:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A19BC; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001A1978:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001A19A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A19C0; } }
L_001A19A0:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1978u | kUnwind; return; } goto L_001A1978; } }
L_001A19BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A19C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1A10; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 463u);
    c.budget -= 3;
L_001A19E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_001A19FC; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1A14; } }
L_001A19FC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A19E0u | kUnwind; return; } goto L_001A19E0; } }
L_001A1A10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1A14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1A28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 9368u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A54u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A1A54u) [[unlikely]] return; }
L_001A1A54:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1A78; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001A1A78; } }
    c.r[2].d[0] = c.r[8].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;
    c.budget -= 2;
L_001A1A78:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1ADC; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001A1A98:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001A1AC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1AE0; } }
L_001A1AC0:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1A98u | kUnwind; return; } goto L_001A1A98; } }
L_001A1ADC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1AE0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1B30; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 462u);
    c.budget -= 3;
L_001A1B00:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_001A1B1C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1B34; } }
L_001A1B1C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1B00u | kUnwind; return; } goto L_001A1B00; } }
L_001A1B30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1B34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1B48:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 7648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1720u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1B90u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A1B90u) [[unlikely]] return; }
L_001A1B90:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BA0u);  if (depth < kMaxDepth) unit_0028(c, 107u, depth + 1u); else { c.pc = 0x001A17E8u; return; } if (c.pc != 0x001A1BA0u) [[unlikely]] return; }
L_001A1BA0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A1D0C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1D0C; } }
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A1BC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 1720u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BD0u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001A1BD0u) [[unlikely]] return; }
L_001A1BD0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A1BF4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1BF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1C00; } }
L_001A1BF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1C10; } }
L_001A1C00:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A1C10:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A1CF8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_001A1C88; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_001A1C30:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A1C50; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1C50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1C5C; } }
L_001A1C50:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1C6C; } }
L_001A1C5C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A1C6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A1C78; } }
    st32((c.r[17].w[0] + 44u), c.r[7].w[0]);
    c.budget -= 1;
L_001A1C78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1C30u | kUnwind; return; } goto L_001A1C30; } }
L_001A1C88:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1CF8; } }
    c.budget -= 1;
L_001A1CA0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A1CBC; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1CBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1CC8; } }
L_001A1CBC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1CD8; } }
L_001A1CC8:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A1CD8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A1CE4; } }
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_001A1CE4:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1CA0u | kUnwind; return; } goto L_001A1CA0; } }
L_001A1CF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1BC0u | kUnwind; return; } goto L_001A1BC0; } }
L_001A1D0C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D18u);  if (depth < kMaxDepth) unit_0028(c, 111u, depth + 1u); else { c.pc = 0x001A1908u; return; } if (c.pc != 0x001A1D18u) [[unlikely]] return; }
L_001A1D18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A1DB4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1DB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] + 7648u);
    c.budget -= 3;
L_001A1D40:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A1D5C; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1D5C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1D68; } }
L_001A1D5C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1D78; } }
L_001A1D68:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A1D78:
    set32(c.r[4], ld32((c.r[19].w[0] + 1720u)));
    set32(c.r[5], c.r[16].w[0] + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D88u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001A1D88u) [[unlikely]] return; }
L_001A1D88:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1D9C; } }
    st32((c.r[17].w[0] + 44u), c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1DA0; } }
L_001A1D9C:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_001A1DA0:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1D40u | kUnwind; return; } goto L_001A1D40; } }
L_001A1DB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DC0u);  if (depth < kMaxDepth) unit_0028(c, 115u, depth + 1u); else { c.pc = 0x001A1A28u; return; } if (c.pc != 0x001A1DC0u) [[unlikely]] return; }
L_001A1DC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A1E50; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1E50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] + 7648u);
    c.budget -= 3;
L_001A1DE8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A1E04; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1E04; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1E10; } }
L_001A1E04:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1E20; } }
L_001A1E10:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A1E20:
    set32(c.r[4], ld32((c.r[19].w[0] + 1720u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E30u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001A1E30u) [[unlikely]] return; }
L_001A1E30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1E3C; } }
    st32((c.r[17].w[0] + 44u), c.r[21].w[0]);
    c.budget -= 1;
L_001A1E3C:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1DE8u | kUnwind; return; } goto L_001A1DE8; } }
L_001A1E50:
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1E74; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001A1E74; } }
    c.r[2].d[0] = c.r[8].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;
    c.budget -= 2;
L_001A1E74:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1EDC; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001A1E98:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001A1EC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1EE0; } }
L_001A1EC0:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1E98u | kUnwind; return; } goto L_001A1E98; } }
L_001A1EDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1EE0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1F30; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 400u);
    c.budget -= 3;
L_001A1F00:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_001A1F1C; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1F34; } }
L_001A1F1C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1F00u | kUnwind; return; } goto L_001A1F00; } }
L_001A1F30:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1F34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A2010; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A2010; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], c.r[8].w[0] + 15516u);
    c.budget -= 3;
L_001A1F58:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A1F74; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1F74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1F8C; } }
L_001A1F74:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1F9C; } }
L_001A1F80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1FE4; } }
L_001A1F8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A1F9C:
    set32(c.r[2], c.r[8].w[0] + 15516u);
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1600u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A1FE0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_001A1FC0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1F80u | kUnwind; return; } goto L_001A1F80; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1FC0u | kUnwind; return; } goto L_001A1FC0; } }
L_001A1FE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A1FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1FF8; } }
    st32((c.r[17].w[0] + 44u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1FFC; } }
L_001A1FF8:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_001A1FFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1F58u | kUnwind; return; } goto L_001A1F58; } }
L_001A2010:
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
L_001A2040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A21E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9368u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2070u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x001A2070u) [[unlikely]] return; }
L_001A2070:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 461u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001A207C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A20B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001A20AC; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A207Cu | kUnwind; return; } goto L_001A207C; } }
L_001A20A0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2148; } }
L_001A20AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A20B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A21AC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A2194; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A2194; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A2144; } }
L_001A20E8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A2108; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2108; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2114; } }
L_001A2108:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2124; } }
L_001A2114:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A2124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A20A0u | kUnwind; return; } goto L_001A20A0; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A20E8u | kUnwind; return; } goto L_001A20E8; } }
L_001A2144:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001A2148:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A2194; } }
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A2170; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2170; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001A217C; } }
L_001A2170:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2198; } }
L_001A217C:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2198; } }
L_001A2194:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A2198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A21AC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A21F0; } }
L_001A21AC:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 463u);
    c.budget -= 2;
L_001A21B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A21DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001A21D8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A21B4u | kUnwind; return; } goto L_001A21B4; } }
L_001A21D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A21DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A21F0; } }
L_001A21E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A21FC; } }
L_001A21F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_001A21FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001A23D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A23C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[2].w[0] + 7648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[16].w[0] + 1680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[5] = c.r[1].w[0];
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[2]);
    st32((c.r[2].w[0] + 7648u), c.f[3]);
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[6]);
    st32((c.r[16].w[0] + 24u), c.f[4]);
    st32((c.r[16].w[0] + 28u), c.f[5]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 4u), c.f[6]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 38;
L_001A22C8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A22C8u | kUnwind; return; } goto L_001A22C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1684u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22F0u);  if (depth < kMaxDepth) unit_001F(c, 305u, depth + 1u); else { c.pc = 0x0017FBF0u; return; } if (c.pc != 0x001A22F0u) [[unlikely]] return; }
L_001A22F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15776u)));
    set32(c.r[4], c.r[4].w[0] + 9416u);
    st32((c.r[16].w[0] + 1700u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 9408u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1696u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2318u);  if (depth < kMaxDepth) unit_000C(c, 519u, depth + 1u); else { c.pc = 0x00133DD8u; return; } if (c.pc != 0x001A2318u) [[unlikely]] return; }
L_001A2318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] + 9712u);
    set32(c.r[2], c.r[2].w[0] + 9840u);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], 0u + 23u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 40u);
    set32(c.r[11], 0u + 20u);
    set32(c.r[12], 0u + 10u);
    set32(c.r[13], 0u + 240u);
    set32(c.r[14], 0u + 180u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], 0u + 50u);
    set32(c.r[10], 0u + 510u);
    st32((c.r[2].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[6], 0u + 64u);
    st32((c.r[2].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 44u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 96u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 76u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 88u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 92u), c.f[0]);
    st32((c.r[2].w[0] + 108u), 0u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23B8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001A23B8u) [[unlikely]] return; }
L_001A23B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A23D4; } }
L_001A23C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 9416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23D4u);  if (depth < kMaxDepth) unit_000C(c, 521u, depth + 1u); else { c.pc = 0x00133E08u; return; } if (c.pc != 0x001A23D4u) [[unlikely]] return; }
L_001A23D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A23E8:
    set32(c.r[2], 0u + 63u);
    st32((c.r[4].w[0] + 1684u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A23F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 9368u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2424u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A2424u) [[unlikely]] return; }
L_001A2424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15516u);
    set32(c.r[5], ld32((c.r[2].w[0] + 1600u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001A2484; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001A2458:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001A2470; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2470:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2458u | kUnwind; return; } goto L_001A2458; } }
L_001A2484:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A24A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] - 14960u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24D4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A24D4u) [[unlikely]] return; }
L_001A24D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    set32(c.r[18], c.r[3].w[0] + 9840u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24ECu);  if (depth < kMaxDepth) unit_0028(c, 273u, depth + 1u); else { c.pc = 0x001A3390u; return; } if (c.pc != 0x001A24ECu) [[unlikely]] return; }
L_001A24EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24F8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001A24F8u) [[unlikely]] return; }
L_001A24F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001A2528; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2514u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A2514u) [[unlikely]] return; }
L_001A2514:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2524u);  if (depth < kMaxDepth) unit_0028(c, 273u, depth + 1u); else { c.pc = 0x001A3390u; return; } if (c.pc != 0x001A2524u) [[unlikely]] return; }
L_001A2524:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001A2528:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2560u);  if (depth < kMaxDepth) unit_0030(c, 266u, depth + 1u); else { c.pc = 0x001C3A08u; return; } if (c.pc != 0x001A2560u) [[unlikely]] return; }
L_001A2560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A25AC; } }
L_001A2590:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A259Cu);  if (depth < kMaxDepth) unit_0030(c, 207u, depth + 1u); else { c.pc = 0x001C2AA0u; return; } if (c.pc != 0x001A259Cu) [[unlikely]] return; }
L_001A259C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    set32(c.r[3], c.r[17].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_001A25AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A25B4u);  if (depth < kMaxDepth) unit_0030(c, 269u, depth + 1u); else { c.pc = 0x001C3A68u; return; } if (c.pc != 0x001A25B4u) [[unlikely]] return; }
L_001A25B4:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2590u | kUnwind; return; } goto L_001A2590; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A25E0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A25F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A25F8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001A2610; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    c.budget -= 3;
L_001A2610:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2628:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 15796u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A2694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15776u)));
    set32(c.r[3], c.r[3].w[0] + 10048u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2698; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[6].w[0] + 15796u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0] + 9408u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001A2698; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[7].w[0] + 9408u), c.r[5].w[0]);
    st16((c.r[3].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 15804u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2694:
    st32((c.r[6].w[0] + 15796u), c.r[3].w[0]);
    c.budget -= 1;
L_001A2698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A26A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23004u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 450u);
    set32(c.r[16], 0u + 425u);
    set32(c.r[3], ld32((c.r[3].w[0] + 7728u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A26E4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A2724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A275C; } }
L_001A26E4:
    set32(c.r[4], 0u + 1418u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26F0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A26F0u) [[unlikely]] return; }
L_001A26F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A271Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A271Cu) [[unlikely]] return; }
L_001A271C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A275C; } }
L_001A2724:
    set32(c.r[4], 0u + 1420u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2730u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A2730u) [[unlikely]] return; }
L_001A2730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A275Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A275Cu) [[unlikely]] return; }
L_001A275C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[2].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[3].w[0] + 10040u)));
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27A8u);  if (depth < kMaxDepth) unit_0024(c, 170u, depth + 1u); else { c.pc = 0x00191B40u; return; } if (c.pc != 0x001A27A8u) [[unlikely]] return; }
L_001A27A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 10128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27C4u);  if (depth < kMaxDepth) unit_0024(c, 170u, depth + 1u); else { c.pc = 0x00191B40u; return; } if (c.pc != 0x001A27C4u) [[unlikely]] return; }
L_001A27C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2844; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001A27EC; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001A2818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2840; } }
L_001A27EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2800u);  if (depth < kMaxDepth) unit_0027(c, 125u, depth + 1u); else { c.pc = 0x0019E040u; return; } if (c.pc != 0x001A2800u) [[unlikely]] return; }
L_001A2800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2810u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A2810u) [[unlikely]] return; }
L_001A2810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2840; } }
L_001A2818:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A2840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2830u);  if (depth < kMaxDepth) unit_0027(c, 132u, depth + 1u); else { c.pc = 0x0019E1B8u; return; } if (c.pc != 0x001A2830u) [[unlikely]] return; }
L_001A2830:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2840u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A2840u) [[unlikely]] return; }
L_001A2840:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001A2844:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2880u);  if (depth < kMaxDepth) unit_0027(c, 185u, depth + 1u); else { c.pc = 0x0019EA70u; return; } if (c.pc != 0x001A2880u) [[unlikely]] return; }
L_001A2880:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2890:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28ACu);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001A28ACu) [[unlikely]] return; }
L_001A28AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A28C0:
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2928:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2950u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A2950u) [[unlikely]] return; }
L_001A2950:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2964u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A2964u) [[unlikely]] return; }
L_001A2964:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 41u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001A29B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001A29B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2994u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001A2994u) [[unlikely]] return; }
L_001A2994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A29B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 27596u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A29B4; } }
L_001A29B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A29B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A29D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29ECu);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001A29ECu) [[unlikely]] return; }
L_001A29EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29FCu);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001A29FCu) [[unlikely]] return; }
L_001A29FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A0Cu);  if (depth < kMaxDepth) unit_009E(c, 365u, depth + 1u); else { c.pc = 0x0037B7B8u; return; } if (c.pc != 0x001A2A0Cu) [[unlikely]] return; }
L_001A2A0C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A18u);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x001A2A18u) [[unlikely]] return; }
L_001A2A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A20u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x001A2A20u) [[unlikely]] return; }
L_001A2A20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 18920u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A54u);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x001A2A54u) [[unlikely]] return; }
L_001A2A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 18920u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2A70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 18920u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2A80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2ACCu);  if (depth < kMaxDepth) unit_0020(c, 47u, depth + 1u); else { c.pc = 0x00180750u; return; } if (c.pc != 0x001A2ACCu) [[unlikely]] return; }
L_001A2ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 1708u), 0u);
    set32(c.r[17], c.r[2].w[0] + 9416u);
    c.budget -= 5;
L_001A2AE0:
    set32(c.r[4], c.r[23].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2AECu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001A2AECu) [[unlikely]] return; }
L_001A2AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2AF4u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001A2AF4u) [[unlikely]] return; }
L_001A2AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001A2B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B04u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001A2B04u) [[unlikely]] return; }
L_001A2B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2B2C; } }
L_001A2B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 15804u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2B2C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 29316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2B2C; } }
    st32((c.r[3].w[0] + 15804u), 0u);
    c.budget -= 1;
L_001A2B2C:
    set32(c.r[2], ld32((c.r[22].w[0] + 15808u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2B50; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2B60; } }
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2B60; } }
L_001A2B50:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2B60; } }
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A2B60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B6Cu);  if (depth < kMaxDepth) unit_0024(c, 47u, depth + 1u); else { c.pc = 0x00190B38u; return; } if (c.pc != 0x001A2B6Cu) [[unlikely]] return; }
L_001A2B6C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1704u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B7Cu);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x001A2B7Cu) [[unlikely]] return; }
L_001A2B7C:
    set32(c.r[4], c.r[21].w[0] + 7648u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B8Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A2B8Cu) [[unlikely]] return; }
L_001A2B8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2AE0u | kUnwind; return; } goto L_001A2AE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2BD0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A2C20; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_001A2BF0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001A2C0C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2C0C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2BF0u | kUnwind; return; } goto L_001A2BF0; } }
L_001A2C20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2C88; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2C98; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C7Cu);  if (depth < kMaxDepth) unit_0028(c, 325u, depth + 1u); else { c.pc = 0x001A3C08u; return; } if (c.pc != 0x001A2C7Cu) [[unlikely]] return; }
L_001A2C7C:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2C98; } }
L_001A2C88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C94u);  if (depth < kMaxDepth) unit_0028(c, 325u, depth + 1u); else { c.pc = 0x001A3C08u; return; } if (c.pc != 0x001A2C94u) [[unlikely]] return; }
L_001A2C94:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_001A2C98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], 0u + 3024u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 30976u);
    set32(c.r[17], c.r[17].w[0] + 31056u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 18708u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D04u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001A2D04u) [[unlikely]] return; }
L_001A2D04:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 18708u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[8], 0u + 3025u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D24u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001A2D24u) [[unlikely]] return; }
L_001A2D24:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2D48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[18].w[0] + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D80u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A2D80u) [[unlikely]] return; }
L_001A2D80:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D90u);  if (depth < kMaxDepth) unit_0028(c, 250u, depth + 1u); else { c.pc = 0x001A30F0u; return; } if (c.pc != 0x001A2D90u) [[unlikely]] return; }
L_001A2D90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A2DD4; } }
L_001A2DA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DC4u);  if (depth < kMaxDepth) unit_0028(c, 228u, depth + 1u); else { c.pc = 0x001A2DF8u; return; } if (c.pc != 0x001A2DC4u) [[unlikely]] return; }
L_001A2DC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2DA0u | kUnwind; return; } goto L_001A2DA0; } }
L_001A2DD4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2DF8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A2E64; } }
L_001A2E30:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E54u);  if (depth < kMaxDepth) unit_0028(c, 228u, depth + 1u); else { c.pc = 0x001A2DF8u; return; } if (c.pc != 0x001A2E54u) [[unlikely]] return; }
L_001A2E54:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2E30u | kUnwind; return; } goto L_001A2E30; } }
L_001A2E64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A2E78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001A2E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F00; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E90u);  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3290u; return; } if (c.pc != 0x001A2E90u) [[unlikely]] return; }
L_001A2E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F00; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EB4u);  if (depth < kMaxDepth) unit_0028(c, 240u, depth + 1u); else { c.pc = 0x001A2FA8u; return; } if (c.pc != 0x001A2EB4u) [[unlikely]] return; }
L_001A2EB4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EC8u);  if (depth < kMaxDepth) unit_0028(c, 275u, depth + 1u); else { c.pc = 0x001A33C8u; return; } if (c.pc != 0x001A2EC8u) [[unlikely]] return; }
L_001A2EC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EDCu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001A2EDCu) [[unlikely]] return; }
L_001A2EDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F00; } }
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F00u);  if (depth < kMaxDepth) unit_002E(c, 456u, depth + 1u); else { c.pc = 0x001BB328u; return; } if (c.pc != 0x001A2F00u) [[unlikely]] return; }
L_001A2F00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A2F14; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001A2F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F80; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F2Cu);  if (depth < kMaxDepth) unit_0028(c, 267u, depth + 1u); else { c.pc = 0x001A3310u; return; } if (c.pc != 0x001A2F2Cu) [[unlikely]] return; }
L_001A2F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F80; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F50u);  if (depth < kMaxDepth) unit_0028(c, 245u, depth + 1u); else { c.pc = 0x001A3038u; return; } if (c.pc != 0x001A2F50u) [[unlikely]] return; }
L_001A2F50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F64u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001A2F64u) [[unlikely]] return; }
L_001A2F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2F80; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F80u);  if (depth < kMaxDepth) unit_002E(c, 456u, depth + 1u); else { c.pc = 0x001BB328u; return; } if (c.pc != 0x001A2F80u) [[unlikely]] return; }
L_001A2F80:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2FA8:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], 0u + 467u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A3014; } }
    c.r[2].d[0] = c.r[4].sd[0] < 468ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2FDC; } }
    set32(c.r[2], 0u + 466u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A2FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A302C; } }
L_001A2FDC:
    set32(c.r[2], 0u + 468u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A3008; } }
    set32(c.r[2], 0u + 469u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A3020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A302C; } }
L_001A2FFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3008:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3014:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3020:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A302C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3038:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[4], 0u + 925u);
    c.r[2].d[0] = c.r[3].sd[0] < 920ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3064; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3064; } }
    set32(c.r[2], c.r[3].w[0] - 920u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3064:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[4], 0u + 930u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 926ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3094; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3094; } }
    set32(c.r[2], c.r[3].w[0] - 926u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3094:
    set32(c.r[4], 0u + 935u);
    c.r[2].d[0] = c.r[3].sd[0] < 931ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A30BC; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A30BC; } }
    set32(c.r[2], c.r[3].w[0] - 931u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A30BC:
    set32(c.r[4], 0u + 945u);
    c.r[2].d[0] = c.r[3].sd[0] < 941ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A30E4; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A30E4; } }
    set32(c.r[2], c.r[3].w[0] - 941u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A30E4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A30F0:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3118; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001A3118; } }
    c.r[2].d[0] = c.r[8].d[0] ^ 82ull;
    c.r[8].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[5].d[0];
    c.budget -= 3;
L_001A3118:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A317C; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001A3138:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001A3160; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3160:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3138u | kUnwind; return; } goto L_001A3138; } }
L_001A317C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3188:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 15u);
    c.budget -= 8;
L_001A31A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A31C4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31C0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001A31C0u) [[unlikely]] return; }
L_001A31C0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001A31C4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A31A8u | kUnwind; return; } goto L_001A31A8; } }
    st32((c.r[18].w[0] + 108u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A31F8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[8].w[0] + 112u);
    c.budget -= 4;
L_001A3208:
    set32(c.r[2], ld32((c.r[8].w[0] + 108u)));
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] - 16u);
    c.r[4].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3240; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[8].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3240:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3208u | kUnwind; return; } goto L_001A3208; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3258:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A326C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A326C:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001A3284; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3258u | kUnwind; return; } goto L_001A3258; } }
L_001A3284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3290:
    set32(c.r[3], 0u + 461u);
    c.budget -= 1;
L_001A3294:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A32A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A32A8:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A32C0; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3294u | kUnwind; return; } goto L_001A3294; } }
L_001A32C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A32D0:
    set32(c.r[3], 0u + 400u);
    c.budget -= 1;
L_001A32D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A32E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A32E8:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A3300; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A32D4u | kUnwind; return; } goto L_001A32D4; } }
L_001A3300:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3310:
    set32(c.r[3], 0u + 463u);
    c.budget -= 1;
L_001A3314:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A3328; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3328:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A3340; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3314u | kUnwind; return; } goto L_001A3314; } }
L_001A3340:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3350:
    set32(c.r[3], 0u + 462u);
    c.budget -= 1;
L_001A3354:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A3368; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3368:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A3380; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3354u | kUnwind; return; } goto L_001A3354; } }
L_001A3380:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A33A0u);  if (depth < kMaxDepth) unit_0028(c, 295u, depth + 1u); else { c.pc = 0x001A37A0u; return; } if (c.pc != 0x001A33A0u) [[unlikely]] return; }
L_001A33A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A33B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A33B8; } }
L_001A33B4:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_001A33B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A33C8:
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A3448; } }
    c.budget -= 1;
L_001A33E0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_001A3400; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3400; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A340C; } }
L_001A3400:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A341C; } }
L_001A340C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A341C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001A3430; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3430:
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A33E0u | kUnwind; return; } goto L_001A33E0; } }
L_001A3448:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3458:
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A34D8; } }
L_001A3470:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001A3490; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3490; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A349C; } }
L_001A3490:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A34AC; } }
L_001A349C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A34AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001A34C0; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A34C0:
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3470u | kUnwind; return; } goto L_001A3470; } }
L_001A34D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A34E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A35E4; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A35E4; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A3574; } }
L_001A3518:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A3538; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3538; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3544; } }
L_001A3538:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3554; } }
L_001A3544:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A3554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001A35C0; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3518u | kUnwind; return; } goto L_001A3518; } }
L_001A3574:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001A3578:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A35E4; } }
    set32(c.r[2], c.r[8].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A35E4; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A35B4; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A35B4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001A35CC; } }
L_001A35B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A35C0:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3578u | kUnwind; return; } goto L_001A3578; } }
L_001A35CC:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A35E4:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A35F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A36D8; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A36D8; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A367C; } }
L_001A3620:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A3640; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3640; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A364C; } }
L_001A3640:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A365C; } }
L_001A364C:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A365C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001A36B4; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3620u | kUnwind; return; } goto L_001A3620; } }
L_001A367C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001A3680:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A36D8; } }
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A36A8; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A36A8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001A36C0; } }
L_001A36A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A36B4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3680u | kUnwind; return; } goto L_001A3680; } }
L_001A36C0:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A36D8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A36E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3758; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A3758; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A3730; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A373C; } }
L_001A3730:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3744; } }
L_001A373C:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001A3744:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3754u);  if (depth < kMaxDepth) unit_0028(c, 293u, depth + 1u); else { c.pc = 0x001A3770u; return; } if (c.pc != 0x001A3754u) [[unlikely]] return; }
L_001A3754:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_001A3758:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 30u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st16((c.r[3].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A378Cu);  if (depth < kMaxDepth) unit_0028(c, 82u, depth + 1u); else { c.pc = 0x001A1010u; return; } if (c.pc != 0x001A378Cu) [[unlikely]] return; }
L_001A378C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A37A0:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A37C0; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001A37C0; } }
    c.r[2].d[0] = c.r[5].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    c.budget -= 2;
L_001A37C0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A3824; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001A37E0:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001A3808; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3828; } }
L_001A3808:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A37E0u | kUnwind; return; } goto L_001A37E0; } }
L_001A3824:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3828:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A3878; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 400u);
    c.budget -= 3;
L_001A3848:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_001A3864; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3864:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3848u | kUnwind; return; } goto L_001A3848; } }
L_001A3878:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3888:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A38B4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A38B4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_001A38B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A38C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38E4u);  if (depth < kMaxDepth) unit_0028(c, 137u, depth + 1u); else { c.pc = 0x001A2040u; return; } if (c.pc != 0x001A38E4u) [[unlikely]] return; }
L_001A38E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A38F8; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A396C; } }
L_001A38F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A3968; } }
L_001A3908:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001A3924; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3924; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3930; } }
L_001A3924:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3940; } }
L_001A3930:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001A3940:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A394Cu);  if (depth < kMaxDepth) unit_0028(c, 300u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x001A394Cu) [[unlikely]] return; }
L_001A394C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A396C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3908u | kUnwind; return; } goto L_001A3908; } }
L_001A3968:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A396C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3988:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39A4u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001A39A4u) [[unlikely]] return; }
L_001A39A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[8], c.r[8].w[0] + 14976u);
    set32(c.r[4], 0u + 21u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39CCu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001A39CCu) [[unlikely]] return; }
L_001A39CC:
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[8], c.r[8].w[0] + 15016u);
    set32(c.r[4], 0u + 603u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39F4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001A39F4u) [[unlikely]] return; }
L_001A39F4:
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[8], c.r[8].w[0] + 14928u);
    set32(c.r[4], 0u + 602u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A1Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001A3A1Cu) [[unlikely]] return; }
L_001A3A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A24u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001A3A24u) [[unlikely]] return; }
L_001A3A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A2Cu);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001A3A2Cu) [[unlikely]] return; }
L_001A3A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A34u);  if (depth < kMaxDepth) unit_0028(c, 317u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x001A3A34u) [[unlikely]] return; }
L_001A3A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A3Cu);  if (depth < kMaxDepth) unit_0028(c, 319u, depth + 1u); else { c.pc = 0x001A3B30u; return; } if (c.pc != 0x001A3A3Cu) [[unlikely]] return; }
L_001A3A3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3A50:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A6Cu);  if (depth < kMaxDepth) unit_0027(c, 311u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x001A3A6Cu) [[unlikely]] return; }
L_001A3A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3A80:
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 18932u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 18928u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3AA8:
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 18940u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 18936u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 18928u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3B1C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 18932u)));
    set32(c.r[6], c.r[6].w[0] + 30976u);
    set32(c.r[7], c.r[7].w[0] + 31160u);
    set32(c.r[8], 0u + 4039u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B18u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001A3B18u) [[unlikely]] return; }
L_001A3B18:
    st32((c.r[16].w[0] + 18932u), 0u);
    c.budget -= 1;
L_001A3B1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 18936u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3B7C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 18940u)));
    set32(c.r[6], c.r[6].w[0] + 30976u);
    set32(c.r[7], c.r[7].w[0] + 31184u);
    set32(c.r[8], 0u + 4048u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B78u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001A3B78u) [[unlikely]] return; }
L_001A3B78:
    st32((c.r[16].w[0] + 18940u), 0u);
    c.budget -= 1;
L_001A3B7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3B90:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3BB8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3BAC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 18940u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A3BF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 18936u)));
    c.budget -= 3;
L_001A3BD8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3BACu | kUnwind; return; } goto L_001A3BAC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3BD8u | kUnwind; return; } goto L_001A3BD8; } }
L_001A3BF8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 18932u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001A3C54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 18928u)));
    c.budget -= 3;
L_001A3C28:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001A3C40; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C40:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3C28u | kUnwind; return; } goto L_001A3C28; } }
L_001A3C54:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C78u);  if (depth < kMaxDepth) unit_0028(c, 143u, depth + 1u); else { c.pc = 0x001A2210u; return; } if (c.pc != 0x001A3C78u) [[unlikely]] return; }
L_001A3C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CA0u);  if (depth < kMaxDepth) unit_0028(c, 143u, depth + 1u); else { c.pc = 0x001A2210u; return; } if (c.pc != 0x001A3CA0u) [[unlikely]] return; }
L_001A3CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3CB0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[3], 0u + 127u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] + 10u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 127u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    set32(c.r[30], 0u + 26u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    set32(c.r[22], c.r[4].w[0] + 16u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D2Cu);  if (depth < kMaxDepth) unit_0036(c, 266u, depth + 1u); else { c.pc = 0x001DA4E0u; return; } if (c.pc != 0x001A3D2Cu) [[unlikely]] return; }
L_001A3D2C:
    set32(c.r[17], c.r[2].w[0] + 132u);
    c.budget -= 1;
L_001A3D30:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], 0u + 150u);
    set32(c.r[3], 0u + 149u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001A3D74; } }
    set32(c.r[4], c.r[23].w[0] + 7648u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    set32(c.r[8], c.r[29].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D6Cu);  if (depth < kMaxDepth) unit_0026(c, 79u, depth + 1u); else { c.pc = 0x0019A258u; return; } if (c.pc != 0x001A3D6Cu) [[unlikely]] return; }
L_001A3D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3D84; } }
L_001A3D74:
    st32((c.r[29].w[0] + 48u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[20].w[0]);
    c.budget -= 4;
L_001A3D84:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A3DEC; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 56u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], c.r[23].w[0] + 7648u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], 0u + 135u);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[10].w[0]);
    set32(c.r[8], 0u + 48u);
    st32((c.r[29].w[0] + 32u), c.r[11].w[0]);
    set32(c.r[9], 0u + 120u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[11], 0u + 26u);
    st32((c.r[29].w[0]), c.r[30].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[22].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DE4u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x001A3DE4u) [[unlikely]] return; }
L_001A3DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3E3C; } }
L_001A3DEC:
    set32(c.r[10], ld32((c.r[29].w[0] + 56u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], c.r[23].w[0] + 7648u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[10].w[0]);
    set32(c.r[8], 0u + 48u);
    st32((c.r[29].w[0] + 32u), c.r[11].w[0]);
    set32(c.r[9], 0u + 120u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[11], 0u + 26u);
    st32((c.r[29].w[0]), c.r[30].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[22].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E3Cu);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x001A3E3Cu) [[unlikely]] return; }
L_001A3E3C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 30u);
    set32(c.r[18], c.r[18].w[0] + 30u);
    set32(c.r[17], c.r[17].w[0] + 21552u);
    c.r[2].d[0] = c.r[21].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3D30u | kUnwind; return; } goto L_001A3D30; } }
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
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3E90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[20], c.r[20].w[0] + 7648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[4], 0u + 452u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[23], c.r[19].w[0] + 100u);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 76u));
    c.f[0] = ld32((c.r[19].w[0] + 72u));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[5] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[6] = ld32((c.r[20].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[7] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 8u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[21] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[18], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F60u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A3F60u) [[unlikely]] return; }
L_001A3F60:
    c.f[20] = ld32((c.r[19].w[0] + 132u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[23].w[0] + 20u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F94u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A3F94u) [[unlikely]] return; }
L_001A3F94:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] >> 31);
    c.f[12] = c.f[20];
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 127u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FE4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A3FE4u) [[unlikely]] return; }
L_001A3FE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 20u);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    [[clang::musttail]] return unit_0029(c, 1u, depth);
}

}
