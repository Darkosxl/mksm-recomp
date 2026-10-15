#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DB[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202,
    0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0,
    251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0,
    0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00DB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0046C000;
    case 2u: goto L_0046C020;
    case 3u: goto L_0046C098;
    case 4u: goto L_0046C0BC;
    case 5u: goto L_0046C134;
    case 6u: goto L_0046C17C;
    case 7u: goto L_0046C238;
    case 8u: goto L_0046C264;
    case 9u: goto L_0046C2D4;
    case 10u: goto L_0046C300;
    case 11u: goto L_0046C360;
    case 12u: goto L_0046C38C;
    case 13u: goto L_0046C3BC;
    case 14u: goto L_0046C3E4;
    case 15u: goto L_0046C3EC;
    case 16u: goto L_0046C578;
    case 17u: goto L_0046C5B0;
    case 18u: goto L_0046C5B8;
    case 19u: goto L_0046C5D4;
    case 20u: goto L_0046C674;
    case 21u: goto L_0046C698;
    case 22u: goto L_0046C6B0;
    case 23u: goto L_0046C6F0;
    case 24u: goto L_0046C778;
    case 25u: goto L_0046C7D4;
    case 26u: goto L_0046C7F8;
    case 27u: goto L_0046C80C;
    case 28u: goto L_0046C858;
    case 29u: goto L_0046C8E8;
    case 30u: goto L_0046C944;
    case 31u: goto L_0046C968;
    case 32u: goto L_0046C97C;
    case 33u: goto L_0046C9D8;
    case 34u: goto L_0046C9F4;
    case 35u: goto L_0046CA2C;
    case 36u: goto L_0046CA9C;
    case 37u: goto L_0046CAC0;
    case 38u: goto L_0046CAF8;
    case 39u: goto L_0046CB18;
    case 40u: goto L_0046CB50;
    case 41u: goto L_0046CB6C;
    case 42u: goto L_0046CBBC;
    case 43u: goto L_0046CBE8;
    case 44u: goto L_0046CC20;
    case 45u: goto L_0046CC28;
    case 46u: goto L_0046CCBC;
    case 47u: goto L_0046CCE8;
    case 48u: goto L_0046CCF8;
    case 49u: goto L_0046CDD8;
    case 50u: goto L_0046CDE8;
    case 51u: goto L_0046CE80;
    case 52u: goto L_0046CE98;
    case 53u: goto L_0046CF08;
    case 54u: goto L_0046CF94;
    case 55u: goto L_0046D018;
    case 56u: goto L_0046D03C;
    case 57u: goto L_0046D090;
    case 58u: goto L_0046D0B0;
    case 59u: goto L_0046D0B8;
    case 60u: goto L_0046D128;
    case 61u: goto L_0046D16C;
    case 62u: goto L_0046D1E0;
    case 63u: goto L_0046D208;
    case 64u: goto L_0046D228;
    case 65u: goto L_0046D2B0;
    case 66u: goto L_0046D2DC;
    case 67u: goto L_0046D360;
    case 68u: goto L_0046D388;
    case 69u: goto L_0046D390;
    case 70u: goto L_0046D418;
    case 71u: goto L_0046D47C;
    case 72u: goto L_0046D510;
    case 73u: goto L_0046D538;
    case 74u: goto L_0046D570;
    case 75u: goto L_0046D610;
    case 76u: goto L_0046D634;
    case 77u: goto L_0046D6B0;
    case 78u: goto L_0046D6D0;
    case 79u: goto L_0046D6D8;
    case 80u: goto L_0046D760;
    case 81u: goto L_0046D7A4;
    case 82u: goto L_0046D840;
    case 83u: goto L_0046D868;
    case 84u: goto L_0046D888;
    case 85u: goto L_0046D928;
    case 86u: goto L_0046D954;
    case 87u: goto L_0046DA00;
    case 88u: goto L_0046DA28;
    case 89u: goto L_0046DA30;
    case 90u: goto L_0046DAD0;
    case 91u: goto L_0046DB34;
    case 92u: goto L_0046DBF0;
    case 93u: goto L_0046DC18;
    case 94u: goto L_0046DC50;
    case 95u: goto L_0046DD08;
    case 96u: goto L_0046DD24;
    case 97u: goto L_0046DDA8;
    case 98u: goto L_0046DDE0;
    case 99u: goto L_0046DDE8;
    case 100u: goto L_0046DDF0;
    case 101u: goto L_0046DDFC;
    case 102u: goto L_0046DE18;
    case 103u: goto L_0046DE3C;
    case 104u: goto L_0046DE4C;
    case 105u: goto L_0046DE58;
    case 106u: goto L_0046DE68;
    case 107u: goto L_0046DE78;
    case 108u: goto L_0046DE84;
    case 109u: goto L_0046DE90;
    case 110u: goto L_0046DE98;
    case 111u: goto L_0046DEA4;
    case 112u: goto L_0046DEB4;
    case 113u: goto L_0046DED4;
    case 114u: goto L_0046DF48;
    case 115u: goto L_0046E028;
    case 116u: goto L_0046E03C;
    case 117u: goto L_0046E054;
    case 118u: goto L_0046E06C;
    case 119u: goto L_0046E260;
    case 120u: goto L_0046E284;
    case 121u: goto L_0046E2B4;
    case 122u: goto L_0046E2C0;
    case 123u: goto L_0046E2E4;
    case 124u: goto L_0046E2F4;
    case 125u: goto L_0046E318;
    case 126u: goto L_0046E33C;
    case 127u: goto L_0046E348;
    case 128u: goto L_0046E35C;
    case 129u: goto L_0046E364;
    case 130u: goto L_0046E3A8;
    case 131u: goto L_0046E3C4;
    case 132u: goto L_0046E3D8;
    case 133u: goto L_0046E3E4;
    case 134u: goto L_0046E3F4;
    case 135u: goto L_0046E41C;
    case 136u: goto L_0046E440;
    case 137u: goto L_0046E448;
    case 138u: goto L_0046E45C;
    case 139u: goto L_0046E464;
    case 140u: goto L_0046E4AC;
    case 141u: goto L_0046E4D0;
    case 142u: goto L_0046E4E4;
    case 143u: goto L_0046E4EC;
    case 144u: goto L_0046E4F4;
    case 145u: goto L_0046E510;
    case 146u: goto L_0046E540;
    case 147u: goto L_0046E54C;
    case 148u: goto L_0046E558;
    case 149u: goto L_0046E564;
    case 150u: goto L_0046E570;
    case 151u: goto L_0046E57C;
    case 152u: goto L_0046E588;
    case 153u: goto L_0046E598;
    case 154u: goto L_0046E5B0;
    case 155u: goto L_0046E5CC;
    case 156u: goto L_0046E5DC;
    case 157u: goto L_0046E5EC;
    case 158u: goto L_0046E608;
    case 159u: goto L_0046E618;
    case 160u: goto L_0046E634;
    case 161u: goto L_0046E644;
    case 162u: goto L_0046E650;
    case 163u: goto L_0046E658;
    case 164u: goto L_0046E664;
    case 165u: goto L_0046E674;
    case 166u: goto L_0046E6F8;
    case 167u: goto L_0046E748;
    case 168u: goto L_0046E784;
    case 169u: goto L_0046E7A0;
    case 170u: goto L_0046E7CC;
    case 171u: goto L_0046E838;
    case 172u: goto L_0046E850;
    case 173u: goto L_0046E860;
    case 174u: goto L_0046E884;
    case 175u: goto L_0046E890;
    case 176u: goto L_0046E8A0;
    case 177u: goto L_0046E8C8;
    case 178u: goto L_0046E8D4;
    case 179u: goto L_0046E8E8;
    case 180u: goto L_0046E8F4;
    case 181u: goto L_0046E920;
    case 182u: goto L_0046E930;
    case 183u: goto L_0046E940;
    case 184u: goto L_0046E958;
    case 185u: goto L_0046E968;
    case 186u: goto L_0046E978;
    case 187u: goto L_0046E988;
    case 188u: goto L_0046E998;
    case 189u: goto L_0046E9C8;
    case 190u: goto L_0046E9E8;
    case 191u: goto L_0046E9F8;
    case 192u: goto L_0046EA08;
    case 193u: goto L_0046EA18;
    case 194u: goto L_0046EA48;
    case 195u: goto L_0046EA78;
    case 196u: goto L_0046EAA8;
    case 197u: goto L_0046EAB8;
    case 198u: goto L_0046EAC4;
    case 199u: goto L_0046EAD4;
    case 200u: goto L_0046EAE4;
    case 201u: goto L_0046EAF0;
    case 202u: goto L_0046EAFC;
    case 203u: goto L_0046EB08;
    case 204u: goto L_0046EB14;
    case 205u: goto L_0046EB28;
    case 206u: goto L_0046EB38;
    case 207u: goto L_0046EB48;
    case 208u: goto L_0046EBD0;
    case 209u: goto L_0046EBD8;
    case 210u: goto L_0046EBE0;
    case 211u: goto L_0046EBEC;
    case 212u: goto L_0046EC18;
    case 213u: goto L_0046EC20;
    case 214u: goto L_0046EC28;
    case 215u: goto L_0046EC34;
    case 216u: goto L_0046EC50;
    case 217u: goto L_0046EC58;
    case 218u: goto L_0046EC60;
    case 219u: goto L_0046EC68;
    case 220u: goto L_0046EC74;
    case 221u: goto L_0046EC9C;
    case 222u: goto L_0046ECA4;
    case 223u: goto L_0046ECB0;
    case 224u: goto L_0046ECB8;
    case 225u: goto L_0046ECC4;
    case 226u: goto L_0046ECE8;
    case 227u: goto L_0046ED18;
    case 228u: goto L_0046ED50;
    case 229u: goto L_0046ED58;
    case 230u: goto L_0046EDA0;
    case 231u: goto L_0046EDB4;
    case 232u: goto L_0046EDC0;
    case 233u: goto L_0046EDC8;
    case 234u: goto L_0046EDD4;
    case 235u: goto L_0046EDF0;
    case 236u: goto L_0046EE34;
    case 237u: goto L_0046EE44;
    case 238u: goto L_0046EE54;
    case 239u: goto L_0046EE6C;
    case 240u: goto L_0046EEB0;
    case 241u: goto L_0046EEB8;
    case 242u: goto L_0046EECC;
    case 243u: goto L_0046EF08;
    case 244u: goto L_0046EF20;
    case 245u: goto L_0046EF2C;
    case 246u: goto L_0046EF3C;
    case 247u: goto L_0046EF48;
    case 248u: goto L_0046EF54;
    case 249u: goto L_0046EF64;
    case 250u: goto L_0046EF74;
    case 251u: goto L_0046EF80;
    case 252u: goto L_0046EF98;
    case 253u: goto L_0046EFB0;
    case 254u: goto L_0046EFBC;
    case 255u: goto L_0046EFC8;
    case 256u: goto L_0046EFD4;
    case 257u: goto L_0046EFE0;
    case 258u: goto L_0046EFEC;
    case 259u: goto L_0046EFF8;
    case 260u: goto L_0046F004;
    case 261u: goto L_0046F010;
    case 262u: goto L_0046F01C;
    case 263u: goto L_0046F030;
    case 264u: goto L_0046F0B0;
    case 265u: goto L_0046F0B8;
    case 266u: goto L_0046F0D0;
    case 267u: goto L_0046F0E0;
    case 268u: goto L_0046F0F4;
    case 269u: goto L_0046F128;
    case 270u: goto L_0046F13C;
    case 271u: goto L_0046F1A0;
    case 272u: goto L_0046F1B4;
    case 273u: goto L_0046F218;
    case 274u: goto L_0046F230;
    case 275u: goto L_0046F278;
    case 276u: goto L_0046F29C;
    case 277u: goto L_0046F300;
    case 278u: goto L_0046F384;
    case 279u: goto L_0046F390;
    case 280u: goto L_0046F3C0;
    case 281u: goto L_0046F450;
    case 282u: goto L_0046F478;
    case 283u: goto L_0046F4B8;
    case 284u: goto L_0046F4CC;
    case 285u: goto L_0046F530;
    case 286u: goto L_0046F540;
    case 287u: goto L_0046F558;
    case 288u: goto L_0046F588;
    case 289u: goto L_0046F610;
    case 290u: goto L_0046F648;
    case 291u: goto L_0046F6A0;
    case 292u: goto L_0046F6D8;
    case 293u: goto L_0046F710;
    case 294u: goto L_0046F740;
    case 295u: goto L_0046F768;
    case 296u: goto L_0046F7C8;
    case 297u: goto L_0046F800;
    case 298u: goto L_0046F840;
    case 299u: goto L_0046F890;
    case 300u: goto L_0046F8A4;
    case 301u: goto L_0046F8B0;
    case 302u: goto L_0046F8D0;
    case 303u: goto L_0046F8F0;
    case 304u: goto L_0046F9E0;
    case 305u: goto L_0046FCD0;
    case 306u: goto L_0046FD48;
    case 307u: goto L_0046FD50;
    case 308u: goto L_0046FD64;
    case 309u: goto L_0046FD78;
    default: bad_entry(c, 0x0046C000u); return;
    }
L_0046C000:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0046C020:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    c.r[11].d[0] = c.r[11].d[0] | 8208ull;
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF8FF0000u);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[11].w[0])));
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[11].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C098u); st32((c.r[29].w[0] + 36u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 43u, depth + 1u); else { c.pc = 0x0046CBE8u; return; } if (c.pc != 0x0046C098u) [[unlikely]] return; }
L_0046C098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 2088u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C0BCu); st32((c.r[16].w[0] + 2092u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 28u, depth + 1u); else { c.pc = 0x0046C858u; return; } if (c.pc != 0x0046C0BCu) [[unlikely]] return; }
L_0046C0BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8240ull;
    c.r[2].d[0] = c.r[2].d[0] | 8224ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] + 2120u), c.r[2].w[0]);  if (t) { goto L_0046C0F8; } }
    c.r[2].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 31ull;  if (t) { goto L_0046C0FC; } }
L_0046C0F8:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_0046C0FC:
    st32((c.r[16].w[0] + 2124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[16].w[0] + 300u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[19].w[0]), c.r[4].w[0]);  if (t) { goto L_0046C144; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C134u); set32(c.r[5], c.r[5].w[0] - 6352u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046C134u) [[unlikely]] return; }
L_0046C134:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_0046C548; } }
L_0046C144:
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0046C184; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0046C174; }
    set32(c.r[2], ld32((c.r[16].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0046C170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0046C1B0; } }
L_0046C170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046C174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C17Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046C17Cu) [[unlikely]] return; }
L_0046C17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0046C1B0; } }
L_0046C184:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 388u)));  goto L_0046C1B4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0046C1B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 388u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_0046C1B0:
    set32(c.r[6], ld32((c.r[16].w[0] + 388u)));
    c.budget -= 1;
L_0046C1B4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[21].w[0])));  if (t) { goto L_0046C1DC; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[5].d[0] ^ 2ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0046C1F0; } }
L_0046C1DC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[18], 0u + 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] ^ 2ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0046C1F0:
    c.r[2].d[0] = c.r[5].d[0] ^ 3ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0046C208; } }
    c.r[2].d[0] = c.r[6].d[0] ^ 3ull;
    c.r[23].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0046C208:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046C244; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046C244; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046C240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C238u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046C238u) [[unlikely]] return; }
L_0046C238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0046C248; } }
L_0046C240:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046C244:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_0046C248:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046C26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C264u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046C264u) [[unlikely]] return; }
L_0046C264:
    st32((c.r[16].w[0] + 452u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_0046C26C:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2136u)));  goto L_0046C294; }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 300u)));  goto L_0046C304; }
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 300u)));  goto L_0046C304; }
    set32(c.r[2], ld32((c.r[16].w[0] + 2136u)));
    c.budget -= 1;
L_0046C294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046C2DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 376u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 372u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 8u), c.r[30].w[0]);
    set32(c.r[11], c.r[11].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[23].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C2D4u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 239u, depth + 1u); else { c.pc = 0x0046BE80u; return; } if (c.pc != 0x0046C2D4u) [[unlikely]] return; }
L_0046C2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 300u)));  if (t) { goto L_0046C304; } }
L_0046C2DC:
    set32(c.r[7], ld32((c.r[16].w[0] + 360u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 356u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C300u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 228u, depth + 1u); else { c.pc = 0x0046BA58u; return; } if (c.pc != 0x0046C300u) [[unlikely]] return; }
L_0046C300:
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_0046C304:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046C548; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046C390; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0046C368; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 380u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 16u), c.r[23].w[0]);
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C360u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00DA(c, 239u, depth + 1u); else { c.pc = 0x0046BE80u; return; } if (c.pc != 0x0046C360u) [[unlikely]] return; }
L_0046C360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 300u)));  if (t) { goto L_0046C390; } }
L_0046C368:
    set32(c.r[7], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 364u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C38Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 228u, depth + 1u); else { c.pc = 0x0046BA58u; return; } if (c.pc != 0x0046C38Cu) [[unlikely]] return; }
L_0046C38C:
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_0046C390:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046C548; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_0046C3C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046C3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C3BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 44u, depth + 1u); else { c.pc = 0x0046CC20u; return; } if (c.pc != 0x0046C3BCu) [[unlikely]] return; }
L_0046C3BC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0046C3C0:
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 1;
L_0046C3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 320u);  if (t) { goto L_0046C468; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[5], 0u + 768u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C3E4u); set32(c.r[4], ld32((c.r[2].w[0] + 1444u)));  if (depth < kMaxDepth) unit_00DB(c, 95u, depth + 1u); else { c.pc = 0x0046DD08u; return; } if (c.pc != 0x0046C3E4u) [[unlikely]] return; }
L_0046C3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C3ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 43u, depth + 1u); else { c.pc = 0x0046CBE8u; return; } if (c.pc != 0x0046C3ECu) [[unlikely]] return; }
L_0046C3EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[4].w[0] << 26);
    set32(c.r[3], ld32((c.r[16].w[0] + 452u)));
    set32(c.r[5], c.r[5].w[0] << 25);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 27);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st32((c.r[16].w[0] + 2092u), c.r[5].w[0]);  if (t) { goto L_0046C458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0046C458; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046C460; } }
L_0046C458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2088u), 0u);  if (t) { goto L_0046C47C; } }
L_0046C460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2088u), c.r[2].w[0]);  if (t) { goto L_0046C47C; } }
L_0046C468:
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 1756u), c.r[4].w[0]);
    c.budget -= 5;
L_0046C47C:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 448u), 0u);  if (t) { goto L_0046C490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046C548; } }
L_0046C490:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 400u)));  goto L_0046C4BC; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 352u)));  goto L_0046C4E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 1;
L_0046C4BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 352u)));  goto L_0046C4E8; }
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 9;
L_0046C4E8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046C548; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046C548; } }
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 388u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0046C52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[4].w[0]);  if (t) { goto L_0046C544; } }
L_0046C52C:
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 388u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0046C544:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0046C548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0046C578:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 14;
L_0046C5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C5B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 43u, depth + 1u); else { c.pc = 0x0046CBE8u; return; } if (c.pc != 0x0046C5B8u) [[unlikely]] return; }
L_0046C5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[17].w[0] + 2092u), c.r[20].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C5D4u); st32((c.r[17].w[0] + 2088u), 0u);  if (depth < kMaxDepth) unit_00DB(c, 28u, depth + 1u); else { c.pc = 0x0046C858u; return; } if (c.pc != 0x0046C5D4u) [[unlikely]] return; }
L_0046C5D4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8240ull;
    c.r[2].d[0] = c.r[2].d[0] | 8224ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[17].w[0] + 2120u), c.r[2].w[0]);  if (t) { goto L_0046C614; } }
    c.r[2].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2124u), c.r[2].w[0]);  if (t) { goto L_0046C618; } }
L_0046C614:
    st32((c.r[17].w[0] + 2124u), c.r[19].w[0]);
    c.budget -= 1;
L_0046C618:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[2], 0u + 34u);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_0046C698; } }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0046C658; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046C66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_0046C6C0; } }
L_0046C658:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);  goto L_0046C6C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 33u);  if (t) { goto L_0046C6C4; } }
L_0046C66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C674u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046C674u) [[unlikely]] return; }
L_0046C674:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 2136u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0046C6A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[21].w[0] - 6320u);  if (t) { goto L_0046C6A4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C698u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00DB(c, 44u, depth + 1u); else { c.pc = 0x0046CC20u; return; } if (c.pc != 0x0046C698u) [[unlikely]] return; }
L_0046C698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046C6C4; } }
L_0046C6A0:
    set32(c.r[5], c.r[21].w[0] - 6320u);
    c.budget -= 1;
L_0046C6A4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C6B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 161u, depth + 1u); else { c.pc = 0x0046A320u; return; } if (c.pc != 0x0046C6B0u) [[unlikely]] return; }
L_0046C6B0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_0046C6CC; } }
L_0046C6C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046C6C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C5B0u | kUnwind; return; } goto L_0046C5B0; } }
L_0046C6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046C6F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 16384ull;
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 22;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 2092u), 0u);  goto L_0046C828; }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = c.r[20].d[0] | 8224ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[19].d[0] = c.r[19].d[0] | 46112ull;
    c.r[18].d[0] = c.r[18].d[0] | 8208ull;
    c.r[17].d[0] = c.r[17].d[0] | 16384ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 12;
L_0046C778:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2092u)));
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] >> 9);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[30].d[0]; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_0046C7B4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[23].d[0]) { c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  goto L_0046C7B8; }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[22].d[0]) { c.r[2].d[0] = c.r[6].d[0] + 0ull;  goto L_0046C7E4; }
L_0046C7B4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0046C7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0046C7E4; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0046C7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C7D4u); set32(c.r[4], ld32((c.r[16].w[0] + 2152u)));  if (depth < kMaxDepth) unit_00DA(c, 55u, depth + 1u); else { c.pc = 0x00468AD0u; return; } if (c.pc != 0x0046C7D4u) [[unlikely]] return; }
L_0046C7D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046C804; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0046C7E4:
    c.r[2].d[0] = c.r[2].sd[0] < 5001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_0046C814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C7F8u); set32(c.r[4], ld32((c.r[16].w[0] + 2152u)));  if (depth < kMaxDepth) unit_00DA(c, 55u, depth + 1u); else { c.pc = 0x00468AD0u; return; } if (c.pc != 0x0046C7F8u) [[unlikely]] return; }
L_0046C7F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046C814; } }
L_0046C804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C80Cu);  if (depth < kMaxDepth) unit_00DA(c, 149u, depth + 1u); else { c.pc = 0x0046A160u; return; } if (c.pc != 0x0046C80Cu) [[unlikely]] return; }
L_0046C80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2092u), 0u);  if (t) { goto L_0046C828; } }
L_0046C814:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C778u | kUnwind; return; } goto L_0046C778; } }
    st32((c.r[16].w[0] + 2092u), 0u);
    c.budget -= 1;
L_0046C828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0046C858:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 18;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 2092u), 0u);  goto L_0046C9A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0] + 2092u), 0u);  goto L_0046C9A4; }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[21].d[0] = c.r[21].d[0] | 8224ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[20].d[0] = c.r[20].d[0] | 46112ull;
    c.r[19].d[0] = c.r[19].d[0] | 8192ull;
    c.r[18].d[0] = c.r[18].d[0] | 8208ull;
    c.budget -= 12;
L_0046C8E8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2092u)));
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] >> 9);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[30].d[0]; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_0046C924; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[23].d[0]) { c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  goto L_0046C928; }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[22].d[0]) { c.r[2].d[0] = c.r[6].d[0] + 0ull;  goto L_0046C954; }
L_0046C924:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0046C928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0046C954; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0046C954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C944u); set32(c.r[4], ld32((c.r[16].w[0] + 2152u)));  if (depth < kMaxDepth) unit_00DA(c, 55u, depth + 1u); else { c.pc = 0x00468AD0u; return; } if (c.pc != 0x0046C944u) [[unlikely]] return; }
L_0046C944:
    set32(c.r[3], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046C974; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0046C954:
    c.r[2].d[0] = c.r[2].sd[0] < 501ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_0046C984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C968u); set32(c.r[4], ld32((c.r[16].w[0] + 2152u)));  if (depth < kMaxDepth) unit_00DA(c, 55u, depth + 1u); else { c.pc = 0x00468AD0u; return; } if (c.pc != 0x0046C968u) [[unlikely]] return; }
L_0046C968:
    set32(c.r[3], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046C984; } }
L_0046C974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C97Cu);  if (depth < kMaxDepth) unit_00DA(c, 149u, depth + 1u); else { c.pc = 0x0046A160u; return; } if (c.pc != 0x0046C97Cu) [[unlikely]] return; }
L_0046C97C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2092u), 0u);  if (t) { goto L_0046C9A4; } }
L_0046C984:
    c.r[17].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 2092u), 0u);  goto L_0046C9A4; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C8E8u | kUnwind; return; } goto L_0046C8E8; } }
    st32((c.r[16].w[0] + 2092u), 0u);
    c.budget -= 1;
L_0046C9A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0046C9D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C9F4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 43u, depth + 1u); else { c.pc = 0x0046CBE8u; return; } if (c.pc != 0x0046C9F4u) [[unlikely]] return; }
L_0046C9F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2088u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0046CA10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2124u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0046CA38; } }
L_0046CA10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2088u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CA2Cu); st32((c.r[16].w[0] + 2092u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 28u, depth + 1u); else { c.pc = 0x0046C858u; return; } if (c.pc != 0x0046CA2Cu) [[unlikely]] return; }
L_0046CA2C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 2120u), c.r[2].w[0]);
    c.budget -= 3;
L_0046CA38:
    set32(c.r[4], 0u + 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[17].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0] + 2124u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2120u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[7].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    st32((c.r[16].w[0] + 2092u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 15;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[6].w[0] >> (c.r[4].w[0] & 31u));  if (t) { goto L_0046CA88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 2088u), 0u);  goto L_0046CA94; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[8].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046CA90; } }
L_0046CA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2088u), 0u);  if (t) { goto L_0046CA94; } }
L_0046CA90:
    st32((c.r[16].w[0] + 2088u), c.r[2].w[0]);
    c.budget -= 1;
L_0046CA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CA9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 28u, depth + 1u); else { c.pc = 0x0046C858u; return; } if (c.pc != 0x0046CA9Cu) [[unlikely]] return; }
L_0046CA9C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 2120u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046CAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 2088u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046CAF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2124u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 2120u)));  goto L_0046CB30; }
L_0046CAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 43u, depth + 1u); else { c.pc = 0x0046CBE8u; return; } if (c.pc != 0x0046CAF8u) [[unlikely]] return; }
L_0046CAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2088u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB18u); st32((c.r[16].w[0] + 2092u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 28u, depth + 1u); else { c.pc = 0x0046C858u; return; } if (c.pc != 0x0046CB18u) [[unlikely]] return; }
L_0046CB18:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u + 32u);
    st32((c.r[16].w[0] + 2120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2124u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 2120u)));
    c.budget -= 6;
L_0046CB30:
    set32(c.r[2], 0u - c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[3].w[0] >> (c.r[2].w[0] & 31u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046CB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 43u, depth + 1u); else { c.pc = 0x0046CBE8u; return; } if (c.pc != 0x0046CB6Cu) [[unlikely]] return; }
L_0046CB6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 2092u), c.r[16].w[0]);  if (t) { goto L_0046CBA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 2088u), 0u);  goto L_0046CBB4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046CBB0; } }
L_0046CBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2088u), 0u);  if (t) { goto L_0046CBB4; } }
L_0046CBB0:
    st32((c.r[17].w[0] + 2088u), c.r[2].w[0]);
    c.budget -= 1;
L_0046CBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CBBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 28u, depth + 1u); else { c.pc = 0x0046C858u; return; } if (c.pc != 0x0046CBBCu) [[unlikely]] return; }
L_0046CBBC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u + 32u);
    st32((c.r[17].w[0] + 2124u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 2120u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046CBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[5].d[0] = c.r[5].d[0] | 16384ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0046CC14; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C6F0u | kUnwind; return; } goto L_0046C6F0; }
L_0046CC14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046CC20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CB50u | kUnwind; return; } goto L_0046CB50; }
L_0046CC28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 320u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[9], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], 0u + 2u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[10].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 1756u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 448u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[8].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 388u)));  goto L_0046CC78; }
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 5;
L_0046CC78:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[6].w[0]), c.r[9].w[0]);  goto L_0046CC8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[8].w[0]);  if (t) { goto L_0046CCA0; } }
L_0046CC8C:
    set32(c.r[2], ld32((c.r[4].w[0] + 388u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_0046CCA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0046CCC4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CCBCu); set32(c.r[5], c.r[5].w[0] - 6400u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046CCBCu) [[unlikely]] return; }
L_0046CCBC:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0046CCC4:
    set32(c.r[4], 0u - 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046CCE8:
    set32(c.r[2], 0u + 24u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[10], c.r[10].w[0] - 12672u);
    ld128((c.r[10].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
L_0046CCF8:
    ld128((c.r[6].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], c.r[2].w[0] - 4u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.r[11]);
    ld128((c.r[6].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[6].w[0] + 80u) & ~15u, c.r[13]);
    ld128((c.r[6].w[0] + 96u) & ~15u, c.r[14]);
    ld128((c.r[6].w[0] + 112u) & ~15u, c.r[15]);
    ld128((c.r[5].w[0]) & ~15u, c.r[25]);
    mmi::paddh(c.r[8], c.r[8], c.r[25]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[25]);
    mmi::pminh(c.r[8], c.r[8], c.r[3]);
    mmi::pmaxh(c.r[8], c.r[8], c.r[0]);
    mmi::paddh(c.r[9], c.r[9], c.r[25]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[25]);
    mmi::pminh(c.r[9], c.r[9], c.r[3]);
    mmi::pmaxh(c.r[9], c.r[9], c.r[0]);
    mmi::ppacb(c.r[9], c.r[9], c.r[8]);
    mmi::paddh(c.r[10], c.r[10], c.r[25]);
    mmi::pminh(c.r[10], c.r[10], c.r[3]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[25]);
    mmi::pmaxh(c.r[10], c.r[10], c.r[0]);
    mmi::paddh(c.r[11], c.r[11], c.r[25]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[25]);
    mmi::pminh(c.r[11], c.r[11], c.r[3]);
    mmi::pmaxh(c.r[11], c.r[11], c.r[0]);
    mmi::ppacb(c.r[11], c.r[11], c.r[10]);
    mmi::paddh(c.r[12], c.r[12], c.r[25]);
    ld128((c.r[5].w[0] + 80u) & ~15u, c.r[25]);
    mmi::pminh(c.r[12], c.r[12], c.r[3]);
    mmi::pmaxh(c.r[12], c.r[12], c.r[0]);
    mmi::paddh(c.r[13], c.r[13], c.r[25]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.r[25]);
    mmi::pminh(c.r[13], c.r[13], c.r[3]);
    mmi::pmaxh(c.r[13], c.r[13], c.r[0]);
    mmi::ppacb(c.r[13], c.r[13], c.r[12]);
    mmi::paddh(c.r[14], c.r[14], c.r[25]);
    ld128((c.r[5].w[0] + 112u) & ~15u, c.r[25]);
    mmi::pminh(c.r[14], c.r[14], c.r[3]);
    mmi::pmaxh(c.r[14], c.r[14], c.r[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[9]);
    mmi::paddh(c.r[15], c.r[15], c.r[25]);
    mmi::pminh(c.r[15], c.r[15], c.r[3]);
    mmi::pmaxh(c.r[15], c.r[15], c.r[0]);
    mmi::ppacb(c.r[15], c.r[15], c.r[14]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[13]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[15]);
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 53;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CCF8u | kUnwind; return; } goto L_0046CCF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046CDD8:
    set32(c.r[2], 0u + 24u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[10], c.r[10].w[0] - 12672u);
    ld128((c.r[10].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
L_0046CDE8:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.r[25].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 128u);
    ld128((c.r[25].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[25].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[25].w[0] + 48u) & ~15u, c.r[11]);
    ld128((c.r[25].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[25].w[0] + 80u) & ~15u, c.r[13]);
    ld128((c.r[25].w[0] + 96u) & ~15u, c.r[14]);
    ld128((c.r[25].w[0] + 112u) & ~15u, c.r[15]);
    mmi::pminh(c.r[8], c.r[8], c.r[3]);
    mmi::pmaxh(c.r[8], c.r[8], c.r[0]);
    mmi::pminh(c.r[9], c.r[9], c.r[3]);
    mmi::pmaxh(c.r[9], c.r[9], c.r[0]);
    mmi::ppacb(c.r[9], c.r[9], c.r[8]);
    mmi::pminh(c.r[10], c.r[10], c.r[3]);
    mmi::pmaxh(c.r[10], c.r[10], c.r[0]);
    mmi::pminh(c.r[11], c.r[11], c.r[3]);
    mmi::pmaxh(c.r[11], c.r[11], c.r[0]);
    mmi::ppacb(c.r[11], c.r[11], c.r[10]);
    mmi::pminh(c.r[12], c.r[12], c.r[3]);
    mmi::pmaxh(c.r[12], c.r[12], c.r[0]);
    mmi::pminh(c.r[13], c.r[13], c.r[3]);
    mmi::pmaxh(c.r[13], c.r[13], c.r[0]);
    mmi::ppacb(c.r[13], c.r[13], c.r[12]);
    mmi::pminh(c.r[14], c.r[14], c.r[3]);
    mmi::pmaxh(c.r[14], c.r[14], c.r[0]);
    mmi::pminh(c.r[15], c.r[15], c.r[3]);
    mmi::pmaxh(c.r[15], c.r[15], c.r[0]);
    mmi::ppacb(c.r[15], c.r[15], c.r[14]);
    st128((c.r[4].w[0]) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[13]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[15]);
    c.budget -= 37;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CDE8u | kUnwind; return; } goto L_0046CDE8; } }
    c.budget -= 1;
L_0046CE80:
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046CE98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2172u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0046D000; } }
    set32(c.r[24], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[4], 0u + 320u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    mmi::mult(c, 0, c.r[24].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[18].w[0] + 30080u);
    set32(c.r[12], ld32((c.r[4].w[0] + 1740u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[12].sd[0] <= 0; c.r[11].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_0046CF88; } }
    set32(c.r[15], c.r[16].w[0] + 1448u);
    set32(c.r[14], c.r[16].w[0] + 1464u);
    set32(c.r[13], c.r[12].w[0] - 1u);
    set32(c.r[17], c.r[16].w[0] + 1440u);
    c.budget -= 5;
L_0046CF08:
    set32(c.r[4], 0u + 320u);
    set32(c.r[2], c.r[10].w[0] << 2);
    mmi::mult(c, 0, c.r[24].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[10].d[0] ^ c.r[13].d[0];
    set32(c.r[5], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[5].d[0] = c.r[5].d[0] << 28;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 48u);
    set32(c.r[4], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[10].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st64((c.r[11].w[0]), c.r[3].d[0]);
    st64((c.r[11].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 30;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CF08u | kUnwind; return; } goto L_0046CF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CF8C; } }
L_0046CF88:
    set32(c.r[17], c.r[16].w[0] + 1440u);
    c.budget -= 1;
L_0046CF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CF94u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046CF94u) [[unlikely]] return; }
L_0046CF94:
    set32(c.r[6], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[3], 0u + 320u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[7].d[0] | 54400ull;
    set32(c.r[10], c.r[18].w[0] + 30080u);
    c.r[8].d[0] = c.r[8].d[0] | 54320ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[9], 0u + 261u);
    c.r[3].d[0] = c.r[3].d[0] | 54304ull;
    set32(c.r[6], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 54272ull;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0046D000; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_0046D000:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046D018:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.sa = (c.r[8].w[0] ^ 0u) & 15u;
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[15], 0u - 1u);
    c.budget -= 9;
L_0046D03C:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[6].w[0]) & ~15u, c.r[9]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    mmi::qfsrv(c.r[10], c.r[9], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextub(c.r[9], c.r[0], c.r[10]);
    st128((c.r[14].w[0]) & ~15u, c.r[8]);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[9]);
    c.budget -= 12;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D03Cu | kUnwind; return; } goto L_0046D03C; } }
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[15].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D03Cu | kUnwind; return; } goto L_0046D03C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D090:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[11], c.r[13].w[0] << 1);
    c.sa = (c.r[12].w[0] ^ 0u) & 15u;
    set32(c.r[24], 0u - 1u);
    c.budget -= 8;
L_0046D0B0:
    set32(c.r[15], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], 0u - 1u);
    c.budget -= 2;
L_0046D0B8:
    c.r[8].d[0] = ld64((c.r[6].w[0]));
    c.r[9].d[0] = ld64((c.r[7].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    mmi::qfsrv(c.r[9], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[9]);
    st128((c.r[5].w[0]) & ~15u, c.r[8]);
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[11].w[0]);
    c.budget -= 11;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0B8u | kUnwind; return; } goto L_0046D0B8; } }
    set32(c.r[6], c.r[6].w[0] + 320u);
    set32(c.r[7], c.r[7].w[0] + 320u);
    set32(c.r[15], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0B8u | kUnwind; return; } goto L_0046D0B8; } }
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    set32(c.r[7], c.r[7].w[0] + 64u);
    c.budget -= 8;
    { const bool t = c.r[24].d[0] != 0ull; c.r[24].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0B0u | kUnwind; return; } goto L_0046D0B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D128:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[24], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    set32(c.r[12], c.r[24].w[0] << 1);
    ld128((c.r[6].w[0]) & ~15u, c.r[9]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[9], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    set32(c.r[11], 0u - 1u);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == 0ull; mmi::pextub(c.r[9], c.r[0], c.r[10]);  if (t) { goto L_0046D1BC; } }
L_0046D16C:
    set32(c.r[5], c.r[5].w[0] + c.r[24].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[24].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    mmi::paddh(c.r[2], c.r[8], c.r[10]);
    mmi::paddh(c.r[3], c.r[9], c.r[15]);
    mmi::por(c.r[8], c.r[10], c.r[0]);
    mmi::por(c.r[9], c.r[15], c.r[0]);
    mmi::paddh(c.r[2], c.r[2], c.r[25]);
    mmi::paddh(c.r[3], c.r[3], c.r[25]);
    mmi::psrlh(c.r[2], c.r[2], 1u);
    mmi::psrlh(c.r[3], c.r[3], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 20;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[12].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D16Cu | kUnwind; return; } goto L_0046D16C; } }
L_0046D1BC:
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D16Cu | kUnwind; return; } goto L_0046D16C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D1E0:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[24], c.r[12].w[0] << 1);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    c.budget -= 10;
L_0046D208:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    c.r[11].d[0] = c.r[11].d[0] | 32768ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; mmi::pextlb(c.r[15], c.r[0], c.r[8]);  if (t) { goto L_0046D264; } }
L_0046D228:
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::paddh(c.r[9], c.r[10], c.r[15]);
    mmi::por(c.r[15], c.r[10], c.r[0]);
    mmi::paddh(c.r[10], c.r[9], c.r[25]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 15;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[24].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D228u | kUnwind; return; } goto L_0046D228; } }
L_0046D264:
    mmi::psrah(c.r[10], c.r[11], 15u);
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 320u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 32767ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D228u | kUnwind; return; } goto L_0046D228; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[10].d[0] = c.r[11].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 65534ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D208u | kUnwind; return; } goto L_0046D208; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D2B0:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[11], 0u - 1u);
    c.budget -= 11;
L_0046D2DC:
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::qfsrv(c.r[3], c.r[10], c.r[15], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[3], c.r[3], c.r[2], c.sa);
    mmi::pextlb(c.r[2], c.r[0], c.r[3]);
    mmi::pextub(c.r[3], c.r[0], c.r[3]);
    mmi::paddh(c.r[10], c.r[10], c.r[2]);
    mmi::paddh(c.r[15], c.r[15], c.r[3]);
    mmi::paddh(c.r[2], c.r[10], c.r[25]);
    mmi::paddh(c.r[3], c.r[15], c.r[25]);
    mmi::psrlh(c.r[2], c.r[2], 1u);
    mmi::psrlh(c.r[3], c.r[3], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.budget -= 24;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D2DCu | kUnwind; return; } goto L_0046D2DC; } }
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[12].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[12].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D2DCu | kUnwind; return; } goto L_0046D2DC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D360:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[12], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 10;
L_0046D388:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[11], 0u - 1u);
    c.budget -= 2;
L_0046D390:
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[0], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::paddh(c.r[10], c.r[9], c.r[8]);
    mmi::paddh(c.r[10], c.r[10], c.r[25]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 18;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D390u | kUnwind; return; } goto L_0046D390; } }
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[6], c.r[6].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D390u | kUnwind; return; } goto L_0046D390; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D388u | kUnwind; return; } goto L_0046D388; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D418:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    mmi::psllh(c.r[25], c.r[25], 1u);
    set32(c.r[24], 0u + 1u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[6].w[0]) & ~15u, c.r[9]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[9], c.r[8], c.sa);
    mmi::qfsrv(c.r[15], c.r[8], c.r[9], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextub(c.r[9], c.r[0], c.r[10]);
    set32(c.r[11], 0u - 1u);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[15], c.r[15], c.r[10], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[15]);
    mmi::pextub(c.r[15], c.r[0], c.r[15]);
    mmi::paddh(c.r[8], c.r[8], c.r[10]);
    c.budget -= 25;
    { const bool t = c.r[7].d[0] == 0ull; mmi::paddh(c.r[9], c.r[9], c.r[15]);  if (t) { goto L_0046D4F0; } }
L_0046D47C:
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::qfsrv(c.r[3], c.r[10], c.r[15], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[3], c.r[3], c.r[2], c.sa);
    mmi::pextlb(c.r[2], c.r[0], c.r[3]);
    mmi::pextub(c.r[3], c.r[0], c.r[3]);
    mmi::paddh(c.r[10], c.r[10], c.r[2]);
    mmi::paddh(c.r[15], c.r[15], c.r[3]);
    mmi::paddh(c.r[2], c.r[8], c.r[10]);
    mmi::paddh(c.r[3], c.r[9], c.r[15]);
    mmi::por(c.r[8], c.r[10], c.r[0]);
    mmi::por(c.r[9], c.r[15], c.r[0]);
    mmi::paddh(c.r[2], c.r[2], c.r[25]);
    mmi::paddh(c.r[3], c.r[3], c.r[25]);
    mmi::psrlh(c.r[2], c.r[2], 2u);
    mmi::psrlh(c.r[3], c.r[3], 2u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    set32(c.r[10], c.r[12].w[0] << 1);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 29;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D47Cu | kUnwind; return; } goto L_0046D47C; } }
L_0046D4F0:
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D47Cu | kUnwind; return; } goto L_0046D47C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D510:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    mmi::psllh(c.r[25], c.r[25], 1u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[11], 0u + 1u);
    c.budget -= 10;
L_0046D538:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = c.r[11].d[0] | 32768ull;
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[0], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull; mmi::paddh(c.r[15], c.r[9], c.r[8]);  if (t) { goto L_0046D5C4; } }
L_0046D570:
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[0], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::paddh(c.r[10], c.r[9], c.r[8]);
    mmi::paddh(c.r[9], c.r[10], c.r[15]);
    mmi::por(c.r[15], c.r[10], c.r[0]);
    mmi::paddh(c.r[10], c.r[9], c.r[25]);
    set32(c.r[8], c.r[12].w[0] << 1);
    mmi::psrlh(c.r[10], c.r[10], 2u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 21;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D570u | kUnwind; return; } goto L_0046D570; } }
L_0046D5C4:
    mmi::psrah(c.r[10], c.r[11], 15u);
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 320u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 32767ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D570u | kUnwind; return; } goto L_0046D570; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[10].d[0] = c.r[11].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 65534ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D538u | kUnwind; return; } goto L_0046D538; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D610:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[11], 0u - 1u);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    c.budget -= 9;
L_0046D634:
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    ld128((c.r[14].w[0]) & ~15u, c.r[2]);
    ld128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    mmi::paddh(c.r[2], c.r[2], c.r[10]);
    mmi::paddh(c.r[3], c.r[3], c.r[15]);
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    mmi::paddh(c.r[10], c.r[2], c.r[25]);
    mmi::psrlh(c.r[2], c.r[10], 1u);
    mmi::paddh(c.r[10], c.r[3], c.r[25]);
    mmi::psrlh(c.r[3], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);
    c.budget -= 22;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D634u | kUnwind; return; } goto L_0046D634; } }
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[12].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[12].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D634u | kUnwind; return; } goto L_0046D634; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D6B0:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[12], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    c.budget -= 8;
L_0046D6D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[11], 0u - 1u);
    c.budget -= 2;
L_0046D6D8:
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    ld128((c.r[14].w[0]) & ~15u, c.r[8]);
    mmi::paddh(c.r[10], c.r[9], c.r[8]);
    mmi::pcgth(c.r[9], c.r[10], c.r[0]);
    mmi::psrlh(c.r[9], c.r[9], 15u);
    mmi::paddh(c.r[10], c.r[10], c.r[9]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 17;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D6D8u | kUnwind; return; } goto L_0046D6D8; } }
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[6], c.r[6].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D6D8u | kUnwind; return; } goto L_0046D6D8; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D6D0u | kUnwind; return; } goto L_0046D6D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D760:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[6].w[0]) & ~15u, c.r[9]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[9], c.r[8], c.sa);
    set32(c.r[24], c.r[12].w[0] << 1);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    set32(c.r[11], 0u - 1u);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == 0ull; mmi::pextub(c.r[9], c.r[0], c.r[10]);  if (t) { goto L_0046D81C; } }
L_0046D7A4:
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    mmi::paddh(c.r[2], c.r[8], c.r[10]);
    mmi::paddh(c.r[3], c.r[9], c.r[15]);
    mmi::por(c.r[8], c.r[10], c.r[0]);
    mmi::por(c.r[9], c.r[15], c.r[0]);
    mmi::paddh(c.r[2], c.r[2], c.r[25]);
    mmi::paddh(c.r[3], c.r[3], c.r[25]);
    mmi::psrlh(c.r[2], c.r[2], 1u);
    mmi::psrlh(c.r[3], c.r[3], 1u);
    ld128((c.r[14].w[0]) & ~15u, c.r[10]);
    ld128((c.r[14].w[0] + 16u) & ~15u, c.r[15]);
    mmi::paddh(c.r[2], c.r[2], c.r[10]);
    mmi::paddh(c.r[3], c.r[3], c.r[15]);
    mmi::paddh(c.r[10], c.r[2], c.r[25]);
    mmi::psrlh(c.r[2], c.r[10], 1u);
    mmi::pcgth(c.r[10], c.r[3], c.r[0]);
    mmi::psrlh(c.r[10], c.r[10], 15u);
    mmi::paddh(c.r[10], c.r[3], c.r[10]);
    mmi::psrlh(c.r[3], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 30;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[24].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D7A4u | kUnwind; return; } goto L_0046D7A4; } }
L_0046D81C:
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D7A4u | kUnwind; return; } goto L_0046D7A4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D840:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[24], c.r[12].w[0] << 1);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    c.budget -= 10;
L_0046D868:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    c.r[11].d[0] = c.r[11].d[0] | 32768ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; mmi::pextlb(c.r[15], c.r[0], c.r[8]);  if (t) { goto L_0046D8DC; } }
L_0046D888:
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::paddh(c.r[9], c.r[10], c.r[15]);
    mmi::por(c.r[15], c.r[10], c.r[0]);
    mmi::paddh(c.r[10], c.r[9], c.r[25]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    ld128((c.r[14].w[0]) & ~15u, c.r[8]);
    mmi::paddh(c.r[10], c.r[10], c.r[8]);
    mmi::pcgth(c.r[9], c.r[10], c.r[0]);
    mmi::psrlh(c.r[9], c.r[9], 15u);
    mmi::paddh(c.r[10], c.r[10], c.r[9]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 21;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[24].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D888u | kUnwind; return; } goto L_0046D888; } }
L_0046D8DC:
    mmi::psrah(c.r[10], c.r[11], 15u);
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 320u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 32767ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D888u | kUnwind; return; } goto L_0046D888; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[10].d[0] = c.r[11].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 65534ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D868u | kUnwind; return; } goto L_0046D868; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046D928:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[11], 0u - 1u);
    c.budget -= 11;
L_0046D954:
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::qfsrv(c.r[3], c.r[10], c.r[15], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[3], c.r[3], c.r[2], c.sa);
    mmi::pextlb(c.r[2], c.r[0], c.r[3]);
    mmi::pextub(c.r[3], c.r[0], c.r[3]);
    mmi::paddh(c.r[10], c.r[10], c.r[2]);
    mmi::paddh(c.r[15], c.r[15], c.r[3]);
    mmi::paddh(c.r[2], c.r[10], c.r[25]);
    mmi::paddh(c.r[3], c.r[15], c.r[25]);
    mmi::psrlh(c.r[2], c.r[2], 1u);
    mmi::psrlh(c.r[3], c.r[3], 1u);
    ld128((c.r[14].w[0]) & ~15u, c.r[10]);
    ld128((c.r[14].w[0] + 16u) & ~15u, c.r[15]);
    mmi::paddh(c.r[2], c.r[2], c.r[10]);
    mmi::paddh(c.r[3], c.r[3], c.r[15]);
    mmi::paddh(c.r[10], c.r[2], c.r[25]);
    mmi::psrlh(c.r[2], c.r[10], 1u);
    mmi::pcgth(c.r[10], c.r[3], c.r[0]);
    mmi::psrlh(c.r[10], c.r[10], 15u);
    mmi::paddh(c.r[10], c.r[3], c.r[10]);
    mmi::psrlh(c.r[3], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.budget -= 34;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D954u | kUnwind; return; } goto L_0046D954; } }
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[12].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[12].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D954u | kUnwind; return; } goto L_0046D954; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046DA00:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[12], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 10;
L_0046DA28:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[11], 0u - 1u);
    c.budget -= 2;
L_0046DA30:
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[0], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::paddh(c.r[10], c.r[9], c.r[8]);
    mmi::paddh(c.r[10], c.r[10], c.r[25]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    ld128((c.r[14].w[0]) & ~15u, c.r[8]);
    mmi::paddh(c.r[10], c.r[10], c.r[8]);
    mmi::pcgth(c.r[9], c.r[10], c.r[0]);
    mmi::psrlh(c.r[9], c.r[9], 15u);
    mmi::paddh(c.r[10], c.r[10], c.r[9]);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 24;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DA30u | kUnwind; return; } goto L_0046DA30; } }
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[6], c.r[6].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DA30u | kUnwind; return; } goto L_0046DA30; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DA28u | kUnwind; return; } goto L_0046DA28; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046DAD0:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[24], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    mmi::psllh(c.r[25], c.r[25], 1u);
    set32(c.r[12], 0u + 1u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[6].w[0]) & ~15u, c.r[9]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[9], c.r[8], c.sa);
    mmi::qfsrv(c.r[15], c.r[8], c.r[9], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextub(c.r[9], c.r[0], c.r[10]);
    set32(c.r[11], 0u - 1u);
    c.sa = (c.r[12].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[15], c.r[15], c.r[10], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[15]);
    mmi::pextub(c.r[15], c.r[0], c.r[15]);
    mmi::paddh(c.r[8], c.r[8], c.r[10]);
    c.budget -= 25;
    { const bool t = c.r[7].d[0] == 0ull; mmi::paddh(c.r[9], c.r[9], c.r[15]);  if (t) { goto L_0046DBD0; } }
L_0046DB34:
    set32(c.r[5], c.r[5].w[0] + c.r[24].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[24].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    ld128((c.r[6].w[0]) & ~15u, c.r[15]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[2], c.r[15], c.r[10], c.sa);
    mmi::qfsrv(c.r[3], c.r[10], c.r[15], c.sa);
    mmi::pextlb(c.r[10], c.r[0], c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::pextub(c.r[15], c.r[0], c.r[2]);
    c.sa = (c.r[12].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[3], c.r[3], c.r[2], c.sa);
    mmi::pextlb(c.r[2], c.r[0], c.r[3]);
    mmi::pextub(c.r[3], c.r[0], c.r[3]);
    mmi::paddh(c.r[10], c.r[10], c.r[2]);
    mmi::paddh(c.r[15], c.r[15], c.r[3]);
    mmi::paddh(c.r[2], c.r[8], c.r[10]);
    mmi::paddh(c.r[3], c.r[9], c.r[15]);
    mmi::por(c.r[8], c.r[10], c.r[0]);
    mmi::por(c.r[9], c.r[15], c.r[0]);
    mmi::paddh(c.r[2], c.r[2], c.r[25]);
    mmi::paddh(c.r[3], c.r[3], c.r[25]);
    mmi::psrlh(c.r[2], c.r[2], 2u);
    mmi::psrlh(c.r[3], c.r[3], 2u);
    ld128((c.r[14].w[0]) & ~15u, c.r[10]);
    ld128((c.r[14].w[0] + 16u) & ~15u, c.r[15]);
    mmi::paddh(c.r[2], c.r[2], c.r[10]);
    mmi::paddh(c.r[3], c.r[3], c.r[15]);
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    mmi::paddh(c.r[10], c.r[2], c.r[25]);
    mmi::psrlh(c.r[2], c.r[10], 1u);
    mmi::paddh(c.r[10], c.r[3], c.r[25]);
    mmi::psrlh(c.r[3], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    set32(c.r[10], c.r[24].w[0] << 1);
    st128((c.r[14].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 39;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DB34u | kUnwind; return; } goto L_0046DB34; } }
L_0046DBD0:
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = c.r[11].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DB34u | kUnwind; return; } goto L_0046DB34; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046DBF0:
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    mmi::pnor(c.r[25], c.r[0], c.r[0]);
    mmi::psrlh(c.r[25], c.r[25], 15u);
    mmi::psllh(c.r[25], c.r[25], 1u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[11], 0u + 1u);
    c.budget -= 10;
L_0046DC18:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = c.r[11].d[0] | 32768ull;
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[0], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull; mmi::paddh(c.r[15], c.r[9], c.r[8]);  if (t) { goto L_0046DCBC; } }
L_0046DC50:
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = ld64((c.r[5].w[0]));
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.sa = (c.r[13].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[8], c.r[8], c.r[8], c.sa);
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    c.sa = (c.r[24].w[0] ^ 0u) & 15u;
    mmi::qfsrv(c.r[10], c.r[0], c.r[8], c.sa);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::paddh(c.r[10], c.r[9], c.r[8]);
    mmi::paddh(c.r[9], c.r[10], c.r[15]);
    mmi::por(c.r[15], c.r[10], c.r[0]);
    mmi::paddh(c.r[10], c.r[9], c.r[25]);
    mmi::psrlh(c.r[10], c.r[10], 2u);
    ld128((c.r[14].w[0]) & ~15u, c.r[8]);
    mmi::paddh(c.r[10], c.r[10], c.r[8]);
    mmi::pcgth(c.r[9], c.r[10], c.r[0]);
    mmi::psrlh(c.r[9], c.r[9], 15u);
    mmi::paddh(c.r[10], c.r[10], c.r[9]);
    set32(c.r[8], c.r[12].w[0] << 1);
    mmi::psrlh(c.r[10], c.r[10], 1u);
    st128((c.r[14].w[0]) & ~15u, c.r[10]);
    c.budget -= 27;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC50u | kUnwind; return; } goto L_0046DC50; } }
L_0046DCBC:
    mmi::psrah(c.r[10], c.r[11], 15u);
    set32(c.r[5], c.r[5].w[0] + 320u);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 320u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 32767ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC50u | kUnwind; return; } goto L_0046DC50; } }
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[14], c.r[14].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[10].d[0] = c.r[11].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull; c.r[11].d[0] = c.r[11].d[0] & 65534ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC18u | kUnwind; return; } goto L_0046DC18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046DD08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046DD24u) [[unlikely]] return; }
L_0046DD24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] >> 28);
    set32(c.r[2], 0u + 7u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_0046DD4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];  if (t) { goto L_0046DD54; } }
L_0046DD4C:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_0046DD54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[3].d[0] = c.r[3].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 4));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45056ull;
    set32(c.r[3], 0u + 256u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0046DD98; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_0046DD98:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046DDA8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[16].w[0] + 300u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DDE0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 241u, depth + 1u); else { c.pc = 0x0046EEB8u; return; } if (c.pc != 0x0046DDE0u) [[unlikely]] return; }
L_0046DDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046DDF4; } }
L_0046DDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DDF0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046DDF0u) [[unlikely]] return; }
L_0046DDF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046DDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DDFCu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046DDFCu) [[unlikely]] return; }
L_0046DDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046DE10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DDE8u | kUnwind; return; } goto L_0046DDE8; } }
L_0046DE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE18u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046DE18u) [[unlikely]] return; }
L_0046DE18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] - 257u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(175ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0046DE44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE3Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 161u, depth + 1u); else { c.pc = 0x0046A320u; return; } if (c.pc != 0x0046DE3Cu) [[unlikely]] return; }
L_0046DE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0046DF28; } }
L_0046DE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 240u, depth + 1u); else { c.pc = 0x0046EEB0u; return; } if (c.pc != 0x0046DE4Cu) [[unlikely]] return; }
L_0046DE4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE58u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046DE58u) [[unlikely]] return; }
L_0046DE58:
    st32((c.r[16].w[0] + 452u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046DE68u) [[unlikely]] return; }
L_0046DE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046DEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046DE78u) [[unlikely]] return; }
L_0046DE78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE84u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046DE84u) [[unlikely]] return; }
L_0046DE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046DE9C; } }
    c.budget -= 1;
L_0046DE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE98u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046DE98u) [[unlikely]] return; }
L_0046DE98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046DE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DEA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046DEA4u) [[unlikely]] return; }
L_0046DEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DE90u | kUnwind; return; } goto L_0046DE90; } }
L_0046DEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DEB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 16u, depth + 1u); else { c.pc = 0x0046C578u; return; } if (c.pc != 0x0046DEB4u) [[unlikely]] return; }
L_0046DEB4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0046DEDC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DED4u); set32(c.r[5], c.r[5].w[0] - 6224u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046DED4u) [[unlikely]] return; }
L_0046DED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046DF28; } }
L_0046DEDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 448u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 19;
L_0046DF28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0046DF48:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 2136u)));
    c.budget -= 14;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 308u)));  goto L_0046DFA8; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[18].w[0] + 388u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 396u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 340u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 308u)));
    c.budget -= 10;
L_0046DFA8:
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[18].w[0] + 316u), c.r[2].w[0]);  if (t) { goto L_0046DFD4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 312u)));  if (t) { goto L_0046DFD8; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_0046DFE0; } }
L_0046DFD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 312u)));
    c.budget -= 1;
L_0046DFD8:
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0046DFE0:
    st32((c.r[18].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[21], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 316u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[2].w[0] << 4);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[22], 0u + 384u);  if (t) { goto L_0046E008; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0046E238; } }
L_0046E008:
    set32(c.r[17], c.r[18].w[0] + 280u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[22].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[19].w[0]), c.r[20].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E028u); set32(c.r[16], c.r[16].w[0] >> 8);  if (depth < kMaxDepth) unit_00DA(c, 68u, depth + 1u); else { c.pc = 0x00468D08u; return; } if (c.pc != 0x0046E028u) [[unlikely]] return; }
L_0046E028:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E03Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_00DA(c, 69u, depth + 1u); else { c.pc = 0x00468D18u; return; } if (c.pc != 0x0046E03Cu) [[unlikely]] return; }
L_0046E03C:
    st32((c.r[18].w[0] + 268u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E054u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_00DA(c, 69u, depth + 1u); else { c.pc = 0x00468D18u; return; } if (c.pc != 0x0046E054u) [[unlikely]] return; }
L_0046E054:
    st32((c.r[18].w[0] + 272u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E06Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_00DA(c, 69u, depth + 1u); else { c.pc = 0x00468D18u; return; } if (c.pc != 0x0046E06Cu) [[unlikely]] return; }
L_0046E06C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 2172u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 276u), c.r[8].w[0]);  if (t) { goto L_0046E100; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 268u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[7].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[6].w[0] + 511u);
    if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    st32((c.r[18].w[0] + 504u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 608u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 816u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 920u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 712u), c.r[8].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 1128u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 1232u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1336u), c.r[4].w[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1024u), c.r[8].w[0]);  if (t) { goto L_0046E168; } }
L_0046E100:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 4));  if (t) { goto L_0046E16C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 268u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 272u)));
    st32((c.r[18].w[0] + 504u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 608u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 816u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + 511u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    st32((c.r[18].w[0] + 920u), c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    st32((c.r[18].w[0] + 712u), c.r[8].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 1024u), c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 1128u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 1232u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 1336u), c.r[3].w[0]);
    c.budget -= 23;
L_0046E168:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 4));
    c.budget -= 1;
L_0046E16C:
    set32(c.r[2], c.r[18].w[0] + 504u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 4));
    set32(c.r[4], c.r[21].w[0] >> 31);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[3], c.r[18].w[0] + 608u);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[2], c.r[18].w[0] + 712u);
    st32((c.r[3].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[5], c.r[18].w[0] + 816u);
    st32((c.r[3].w[0] + 8u), c.r[21].w[0]);
    set32(c.r[8], c.r[18].w[0] + 1128u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[9], c.r[18].w[0] + 1232u);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[3], c.r[18].w[0] + 920u);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[7], c.r[18].w[0] + 1024u);
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[10].w[0]);
    set32(c.r[2], c.r[18].w[0] + 1336u);
    st32((c.r[5].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[9].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 51;
L_0046E238:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046E260:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E284u); st32((c.r[17].w[0] + 232u), 0u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E284u) [[unlikely]] return; }
L_0046E284:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[3], c.r[3].w[0] >> 20);
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 2801ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0] + 312u), c.r[2].w[0]);  if (t) { goto L_0046E2B4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E2B4u); set32(c.r[5], c.r[5].w[0] - 6184u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046E2B4u) [[unlikely]] return; }
L_0046E2B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E2C0u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E2C0u) [[unlikely]] return; }
L_0046E2C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] >> 12);
    c.r[2].d[0] = c.r[2].d[0] & 1023ull;
    st32((c.r[17].w[0] + 324u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E2E4u); st32((c.r[17].w[0] + 328u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E2E4u) [[unlikely]] return; }
L_0046E2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 2128u), c.r[2].w[0]);  if (t) { goto L_0046E320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E2F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E2F4u) [[unlikely]] return; }
L_0046E2F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 2092u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E318u); st32((c.r[17].w[0] + 2088u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E318u) [[unlikely]] return; }
L_0046E318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046E3DC; } }
L_0046E320:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2152u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2816u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E33Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 53u, depth + 1u); else { c.pc = 0x00468A58u; return; } if (c.pc != 0x0046E33Cu) [[unlikely]] return; }
L_0046E33C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E348u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E348u) [[unlikely]] return; }
L_0046E348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E35Cu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E35Cu) [[unlikely]] return; }
L_0046E35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E364u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046E364u) [[unlikely]] return; }
L_0046E364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 46096ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46112ull;
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    set32(c.r[4], 0u + 257u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0046E3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E3A8u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x0046E3A8u) [[unlikely]] return; }
L_0046E3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 8192u), c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2092u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E3C4u); st32((c.r[17].w[0] + 2088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E3C4u) [[unlikely]] return; }
L_0046E3C4:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2152u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E3D8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 53u, depth + 1u); else { c.pc = 0x00468A58u; return; } if (c.pc != 0x0046E3D8u) [[unlikely]] return; }
L_0046E3D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046E3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E3E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E3E4u) [[unlikely]] return; }
L_0046E3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 2132u), c.r[2].w[0]);  if (t) { goto L_0046E424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E3F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E3F4u) [[unlikely]] return; }
L_0046E3F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 2092u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E41Cu); st32((c.r[17].w[0] + 2088u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E41Cu) [[unlikely]] return; }
L_0046E41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E4E4; } }
L_0046E424:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2152u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2880u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E440u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 53u, depth + 1u); else { c.pc = 0x00468A58u; return; } if (c.pc != 0x0046E440u) [[unlikely]] return; }
L_0046E440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E448u) [[unlikely]] return; }
L_0046E448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E45Cu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E45Cu) [[unlikely]] return; }
L_0046E45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E464u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046E464u) [[unlikely]] return; }
L_0046E464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 46096ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46112ull;
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    set32(c.r[4], 0u + 257u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x58000000u);  if (t) { goto L_0046E4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E4ACu);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x0046E4ACu) [[unlikely]] return; }
L_0046E4AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.budget -= 1;
L_0046E4B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 8192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2092u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E4D0u); st32((c.r[17].w[0] + 2088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E4D0u) [[unlikely]] return; }
L_0046E4D0:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2152u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E4E4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 53u, depth + 1u); else { c.pc = 0x00468A58u; return; } if (c.pc != 0x0046E4E4u) [[unlikely]] return; }
L_0046E4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E4ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 207u, depth + 1u); else { c.pc = 0x0046EB48u; return; } if (c.pc != 0x0046E4ECu) [[unlikely]] return; }
L_0046E4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E4F4u); set32(c.r[4], ld32((c.r[17].w[0] + 2152u)));  if (depth < kMaxDepth) unit_00DB(c, 114u, depth + 1u); else { c.pc = 0x0046DF48u; return; } if (c.pc != 0x0046E4F4u) [[unlikely]] return; }
L_0046E4F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0046E510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 252u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2144u)));
    st32((c.r[16].w[0] + 2148u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E540u); st32((c.r[16].w[0] + 2140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E540u) [[unlikely]] return; }
L_0046E540:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E54Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E54Cu) [[unlikely]] return; }
L_0046E54C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E558u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E558u) [[unlikely]] return; }
L_0046E558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E564u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E564u) [[unlikely]] return; }
L_0046E564:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E570u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E570u) [[unlikely]] return; }
L_0046E570:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E57Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E57Cu) [[unlikely]] return; }
L_0046E57C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E588u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E588u) [[unlikely]] return; }
L_0046E588:
    st32((c.r[16].w[0] + 436u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E598u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E598u) [[unlikely]] return; }
L_0046E598:
    st32((c.r[16].w[0] + 440u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0046EB48; }
L_0046E5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E5CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E5CCu) [[unlikely]] return; }
L_0046E5CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E5DCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E5DCu) [[unlikely]] return; }
L_0046E5DC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E5ECu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E5ECu) [[unlikely]] return; }
L_0046E5EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046E620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E608u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E608u) [[unlikely]] return; }
L_0046E608:
    st32((c.r[16].w[0] + 356u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E618u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E618u) [[unlikely]] return; }
L_0046E618:
    st32((c.r[16].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 2;
L_0046E620:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046E65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E634u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E634u) [[unlikely]] return; }
L_0046E634:
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E644u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E644u) [[unlikely]] return; }
L_0046E644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 368u), c.r[2].w[0]);  if (t) { goto L_0046E658; } }
    c.budget -= 1;
L_0046E650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E658u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046E658u) [[unlikely]] return; }
L_0046E658:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046E65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E664u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E664u) [[unlikely]] return; }
L_0046E664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E650u | kUnwind; return; } goto L_0046E650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 207u, depth + 1u); else { c.pc = 0x0046EB48u; return; } if (c.pc != 0x0046E674u) [[unlikely]] return; }
L_0046E674:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0046E6A8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2140u)));  goto L_0046E6AC; }
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 2148u), 0u);  goto L_0046E6A4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 2148u)));
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 2148u), 0u);
    c.budget -= 3;
L_0046E6A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046E6A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 2140u)));
    c.budget -= 1;
L_0046E6AC:
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0] + 444u), c.r[3].w[0]);  if (t) { goto L_0046E6CC; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2144u)));  goto L_0046E6D0; }
    set32(c.r[2], c.r[3].w[0] + 1024u);
    st32((c.r[16].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 2;
L_0046E6CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 2144u)));
    c.budget -= 1;
L_0046E6D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 444u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st32((c.r[16].w[0] + 2144u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046E6F8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | 8208ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], 0u + 28u);
    st32((c.r[17].w[0] + 2136u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E748u); st32((c.r[6].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E748u) [[unlikely]] return; }
L_0046E748:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] >> 1);
    set32(c.r[2], c.r[18].w[0] >> 17);
    c.r[21].d[0] = c.r[3].d[0] & 4095ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[18].w[0] >> 13);
    set32(c.r[3], c.r[18].w[0] >> 15);
    c.r[20].d[0] = c.r[4].d[0] & 3ull;
    c.r[19].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; st32((c.r[17].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0046E784; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E784u); set32(c.r[5], c.r[5].w[0] - 6160u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046E784u) [[unlikely]] return; }
L_0046E784:
    set32(c.r[2], c.r[18].w[0] >> 19);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[5], 0u + 16u);
    st32((c.r[17].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E7A0u); set32(c.r[16], c.r[18].w[0] >> 20);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E7A0u) [[unlikely]] return; }
L_0046E7A0:
    set32(c.r[18], c.r[2].w[0] >> 8);
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_0046E7CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 68u);  if (t) { goto L_0046E7CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0046E7CC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E7CCu); set32(c.r[5], c.r[5].w[0] - 6120u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046E7CCu) [[unlikely]] return; }
L_0046E7CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[8], c.r[21].w[0] << 18);
    set32(c.r[3], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[9], c.r[18].w[0] << 10);
    set32(c.r[6], ld32((c.r[17].w[0] + 324u)));
    set32(c.r[7], c.r[19].w[0] << 12);
    set32(c.r[2], ld32((c.r[17].w[0] + 328u)));
    set32(c.r[5], c.r[20].w[0] << 12);
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st32((c.r[17].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 312u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 324u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046E838:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E850u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E850u) [[unlikely]] return; }
L_0046E850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2128u), c.r[2].w[0]);  if (t) { goto L_0046E884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E860u) [[unlikely]] return; }
L_0046E860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 2092u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E884u); st32((c.r[16].w[0] + 2088u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E884u) [[unlikely]] return; }
L_0046E884:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E890u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E890u) [[unlikely]] return; }
L_0046E890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2132u), c.r[2].w[0]);  if (t) { goto L_0046E8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E8A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E8A0u) [[unlikely]] return; }
L_0046E8A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 2092u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E8C8u); st32((c.r[16].w[0] + 2088u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046E8C8u) [[unlikely]] return; }
L_0046E8C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E8D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E8D4u) [[unlikely]] return; }
L_0046E8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0046E8E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E8E8u); set32(c.r[5], c.r[5].w[0] - 6088u);  if (depth < kMaxDepth) unit_00DA(c, 158u, depth + 1u); else { c.pc = 0x0046A2C8u; return; } if (c.pc != 0x0046E8E8u) [[unlikely]] return; }
L_0046E8E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E8F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E8F4u) [[unlikely]] return; }
L_0046E8F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046E914; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 6048u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A2C8u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 158u, depth); }
L_0046E914:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046E920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 6000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A2C8u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 158u, depth); }
L_0046E930:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 5952u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A2C8u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 158u, depth); }
L_0046E940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E958u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E958u) [[unlikely]] return; }
L_0046E958:
    st32((c.r[16].w[0] + 372u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E968u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E968u) [[unlikely]] return; }
L_0046E968:
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E978u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E978u) [[unlikely]] return; }
L_0046E978:
    st32((c.r[16].w[0] + 380u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E988u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E988u) [[unlikely]] return; }
L_0046E988:
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E998u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E998u) [[unlikely]] return; }
L_0046E998:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E9C8u); st32((c.r[7].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E9C8u) [[unlikely]] return; }
L_0046E9C8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 388u), c.r[3].w[0]);  if (t) { goto L_0046E9DC; } }
    st32((c.r[16].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 1;
L_0046E9DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E9E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E9E8u) [[unlikely]] return; }
L_0046E9E8:
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E9F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046E9F8u) [[unlikely]] return; }
L_0046E9F8:
    st32((c.r[16].w[0] + 396u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EA08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EA08u) [[unlikely]] return; }
L_0046EA08:
    st32((c.r[16].w[0] + 400u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EA18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EA18u) [[unlikely]] return; }
L_0046EA18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] << 22);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EA48u); st32((c.r[1].w[0] + 8208u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EA48u) [[unlikely]] return; }
L_0046EA48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] << 21);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EA78u); st32((c.r[1].w[0] + 8208u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EA78u) [[unlikely]] return; }
L_0046EA78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] << 20);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAA8u); st32((c.r[1].w[0] + 8208u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAA8u) [[unlikely]] return; }
L_0046EAA8:
    st32((c.r[16].w[0] + 404u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAB8u) [[unlikely]] return; }
L_0046EAB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAC4u) [[unlikely]] return; }
L_0046EAC4:
    st32((c.r[16].w[0] + 408u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAD4u) [[unlikely]] return; }
L_0046EAD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EB14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAE4u) [[unlikely]] return; }
L_0046EAE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAF0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAF0u) [[unlikely]] return; }
L_0046EAF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EAFCu) [[unlikely]] return; }
L_0046EAFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EB08u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EB08u) [[unlikely]] return; }
L_0046EB08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EB14u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EB14u) [[unlikely]] return; }
L_0046EB14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046EB28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 5928u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A2C8u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 158u, depth); }
L_0046EB38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 5872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A2C8u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 158u, depth); }
L_0046EB48:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    set32(c.r[7], c.r[2].w[0] - 5816u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    sdl(c.r[5], (c.r[29].w[0] + 15u));
    sdr(c.r[5], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[7].w[0] + 31u));
    ldr(c.r[3], (c.r[7].w[0] + 24u));
    ldl(c.r[5], (c.r[7].w[0] + 39u));
    ldr(c.r[5], (c.r[7].w[0] + 32u));
    set32(c.r[6], ld32((c.r[7].w[0] + 40u)));
    sdl(c.r[3], (c.r[29].w[0] + 31u));
    sdr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[5], (c.r[29].w[0] + 39u));
    sdr(c.r[5], (c.r[29].w[0] + 32u));
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EBD0u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 241u, depth + 1u); else { c.pc = 0x0046EEB8u; return; } if (c.pc != 0x0046EBD0u) [[unlikely]] return; }
L_0046EBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EBE4; } }
L_0046EBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EBE0u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046EBE0u) [[unlikely]] return; }
L_0046EBE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046EBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EBECu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046EBECu) [[unlikely]] return; }
L_0046EBEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0046EC04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EBD8u | kUnwind; return; } goto L_0046EBD8; } }
L_0046EC04:
    set32(c.r[18], 0u + 437u);
    set32(c.r[20], 0u + 434u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 10u);  if (t) { goto L_0046ECDC; } }
    c.budget -= 1;
L_0046EC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EC94; } }
L_0046EC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC28u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 240u, depth + 1u); else { c.pc = 0x0046EEB0u; return; } if (c.pc != 0x0046EC28u) [[unlikely]] return; }
L_0046EC28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC34u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EC34u) [[unlikely]] return; }
L_0046EC34:
    c.r[3].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046EC50u) [[unlikely]] return; }
L_0046EC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 241u, depth + 1u); else { c.pc = 0x0046EEB8u; return; } if (c.pc != 0x0046EC58u) [[unlikely]] return; }
L_0046EC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EC6C; } }
L_0046EC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC68u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046EC68u) [[unlikely]] return; }
L_0046EC68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046EC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC74u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046EC74u) [[unlikely]] return; }
L_0046EC74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0046ECE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EC60u | kUnwind; return; } goto L_0046EC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046ECDC; } }
L_0046EC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC9Cu); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 240u, depth + 1u); else { c.pc = 0x0046EEB0u; return; } if (c.pc != 0x0046EC9Cu) [[unlikely]] return; }
L_0046EC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ECA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 241u, depth + 1u); else { c.pc = 0x0046EEB8u; return; } if (c.pc != 0x0046ECA4u) [[unlikely]] return; }
L_0046ECA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046ECBC; } }
    c.budget -= 1;
L_0046ECB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ECB8u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046ECB8u) [[unlikely]] return; }
L_0046ECB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046ECBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ECC4u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046ECC4u) [[unlikely]] return; }
L_0046ECC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0046ECE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ECB0u | kUnwind; return; } goto L_0046ECB0; } }
L_0046ECDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046ECE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ECE8u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046ECE8u) [[unlikely]] return; }
L_0046ECE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EC20u | kUnwind; return; } goto L_0046EC20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EC18u | kUnwind; return; } goto L_0046EC18; } }
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0046ED18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[5].d[0] = c.r[5].d[0] | 16384ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0046ED44; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C6F0u | kUnwind; return; } goto L_0046C6F0; }
L_0046ED44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046ED50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CB50u | kUnwind; return; } goto L_0046CB50; }
L_0046ED58:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    set32(c.r[23], 0u + 435u);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    set32(c.r[22], 0u + 5u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    set32(c.r[21], 0u + 256u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    set32(c.r[20], 0u + 439u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[19], 0u + 440u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[18], 0u - 1u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 18;
L_0046EDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0046EE80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDB4u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 241u, depth + 1u); else { c.pc = 0x0046EEB8u; return; } if (c.pc != 0x0046EDB4u) [[unlikely]] return; }
L_0046EDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EDCC; } }
    c.budget -= 1;
L_0046EDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDC8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 228u, depth + 1u); else { c.pc = 0x0046ED50u; return; } if (c.pc != 0x0046EDC8u) [[unlikely]] return; }
L_0046EDC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046EDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDD4u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046CAC0u; return; } if (c.pc != 0x0046EDD4u) [[unlikely]] return; }
L_0046EDD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EDE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EDC0u | kUnwind; return; } goto L_0046EDC0; } }
L_0046EDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDF0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EDF0u) [[unlikely]] return; }
L_0046EDF0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[23].d[0]; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(436ll) ? 1ull : 0ull;  if (t) { goto L_0046EE2C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046EE14; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_0046EE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EDA0u | kUnwind; return; } goto L_0046EDA0; } }
L_0046EE14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046EE80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0046EE3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EDA0u | kUnwind; return; } goto L_0046EDA0; } }
L_0046EE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 119u, depth + 1u); else { c.pc = 0x0046E260u; return; } if (c.pc != 0x0046EE34u) [[unlikely]] return; }
L_0046EE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EDA0u | kUnwind; return; } goto L_0046EDA0; } }
L_0046EE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 145u, depth + 1u); else { c.pc = 0x0046E510u; return; } if (c.pc != 0x0046EE44u) [[unlikely]] return; }
L_0046EE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2168u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EDA0u | kUnwind; return; } goto L_0046EDA0; } }
L_0046EE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 154u, depth + 1u); else { c.pc = 0x0046E5B0u; return; } if (c.pc != 0x0046EE54u) [[unlikely]] return; }
L_0046EE54:
    set32(c.r[4], ld32((c.r[16].w[0] + 2152u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[22].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE6Cu); st64((c.r[29].w[0] + 8u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00DA(c, 53u, depth + 1u); else { c.pc = 0x00468A58u; return; } if (c.pc != 0x0046EE6Cu) [[unlikely]] return; }
L_0046EE6C:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 8u));
    st64((c.r[16].w[0] + 2112u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 2104u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 5;
L_0046EE80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0046EEB0:
    c.budget -= 2;
    { set32(c.r[5], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ED50u | kUnwind; return; } goto L_0046ED50; }
L_0046EEB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EECCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 227u, depth + 1u); else { c.pc = 0x0046ED18u; return; } if (c.pc != 0x0046EECCu) [[unlikely]] return; }
L_0046EECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8224ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046EEFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ED50u | kUnwind; return; } goto L_0046ED50; }
L_0046EEFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046EF08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF20u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF20u) [[unlikely]] return; }
L_0046EF20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF2Cu) [[unlikely]] return; }
L_0046EF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046EF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF3Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF3Cu) [[unlikely]] return; }
L_0046EF3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF48u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF48u) [[unlikely]] return; }
L_0046EF48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF54u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF54u) [[unlikely]] return; }
L_0046EF54:
    st32((c.r[16].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 1;
L_0046EF58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF64u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF64u) [[unlikely]] return; }
L_0046EF64:
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF74u) [[unlikely]] return; }
L_0046EF74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF80u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EF80u) [[unlikely]] return; }
L_0046EF80:
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046EF98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFB0u) [[unlikely]] return; }
L_0046EFB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFBCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFBCu) [[unlikely]] return; }
L_0046EFBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFC8u) [[unlikely]] return; }
L_0046EFC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFD4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFD4u) [[unlikely]] return; }
L_0046EFD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFE0u) [[unlikely]] return; }
L_0046EFE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFECu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFECu) [[unlikely]] return; }
L_0046EFEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046EFF8u) [[unlikely]] return; }
L_0046EFF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F004u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F004u) [[unlikely]] return; }
L_0046F004:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F010u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F010u) [[unlikely]] return; }
L_0046F010:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F01Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F01Cu) [[unlikely]] return; }
L_0046F01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F030:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 332u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 388u)));  goto L_0046F07C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_0046F088; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 392u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];  if (t) { goto L_0046F098; } }
L_0046F07C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 404u)));  goto L_0046F090; }
L_0046F088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0046F098; } }
L_0046F090:
    set32(c.r[19], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_0046F098:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046F100; } }
    set32(c.r[21], c.r[17].w[0] + 412u);
    set32(c.r[20], c.r[17].w[0] + 424u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0046F0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F0B8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F0B8u) [[unlikely]] return; }
L_0046F0B8:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F0D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F0D0u) [[unlikely]] return; }
L_0046F0D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F0E0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F0E0u) [[unlikely]] return; }
L_0046F0E0:
    set32(c.r[16], c.r[20].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F0F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 33u, depth + 1u); else { c.pc = 0x0046C9D8u; return; } if (c.pc != 0x0046F0F4u) [[unlikely]] return; }
L_0046F0F4:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F0B0u | kUnwind; return; } goto L_0046F0B0; } }
L_0046F100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046F128:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F13Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046F13Cu) [[unlikely]] return; }
L_0046F13C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046F190; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_0046F190:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F1B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046F1B4u) [[unlikely]] return; }
L_0046F1B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046F208; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_0046F208:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F218:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F230u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 271u, depth + 1u); else { c.pc = 0x0046F1A0u; return; } if (c.pc != 0x0046F230u) [[unlikely]] return; }
L_0046F230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[6].d[0] = c.r[6].d[0] | 46128ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_0046F278:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F278u | kUnwind; return; } goto L_0046F278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F29Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 269u, depth + 1u); else { c.pc = 0x0046F128u; return; } if (c.pc != 0x0046F29Cu) [[unlikely]] return; }
L_0046F29C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[7].d[0] = c.r[7].d[0] | 45088ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] | 45056ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 8224ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[19].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] - c.r[2].w[0]);  if (t) { goto L_0046F384; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0046F384; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F384u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_00DB(c, 269u, depth + 1u); else { c.pc = 0x0046F128u; return; } if (c.pc != 0x0046F384u) [[unlikely]] return; }
L_0046F384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_0046F390:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F390u | kUnwind; return; } goto L_0046F390; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 5;
L_0046F3C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F3C0u | kUnwind; return; } goto L_0046F3C0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0046F438; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0046F43C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F1A0u | kUnwind; return; } goto L_0046F1A0; }
L_0046F438:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0046F43C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046F450:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0046F46C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0046F49C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046F4B0; } }
L_0046F46C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_0046F478:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F478u | kUnwind; return; } goto L_0046F478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0046F4AC; } }
L_0046F49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 4;
L_0046F4AC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0046F4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046F4B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F4CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0046F4CCu) [[unlikely]] return; }
L_0046F4CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046F520; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_0046F520:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F540u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 283u, depth + 1u); else { c.pc = 0x0046F4B8u; return; } if (c.pc != 0x0046F540u) [[unlikely]] return; }
L_0046F540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 6;
L_0046F558:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F558u | kUnwind; return; } goto L_0046F558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0046F588:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F588u | kUnwind; return; } goto L_0046F588; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] + 2960u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 8208ull;
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 27;
L_0046F610:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F610u | kUnwind; return; } goto L_0046F610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_0046F648:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F648u | kUnwind; return; } goto L_0046F648; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[3].w[0] + 3040u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[5].d[0] = c.r[5].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 15;
L_0046F6A0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F6A0u | kUnwind; return; } goto L_0046F6A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x90000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_0046F6D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F6D8u | kUnwind; return; } goto L_0046F6D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_0046F710:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F710u | kUnwind; return; } goto L_0046F710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0046F740:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F740u | kUnwind; return; } goto L_0046F740; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046F768:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046F7C8; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F7C8u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0046F7C8u) [[unlikely]] return; }
L_0046F7C8:
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  goto L_0046F820; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_0046F800:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F800u | kUnwind; return; } goto L_0046F800; }
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_0046F820:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  goto L_0046F860; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_0046F840:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F840u | kUnwind; return; } goto L_0046F840; }
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 1;
L_0046F860:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0046F890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8A4u); set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_00E6(c, 290u, depth + 1u); else { c.pc = 0x0049A6E0u; return; } if (c.pc != 0x0046F8A4u) [[unlikely]] return; }
L_0046F8A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046F8B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0046F9D4; } }
    set32(c.r[12], 0u + 12u);
    set32(c.r[9], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0046F8D0:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0046F9BC; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[2].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_0046F8F0:
    set32(c.r[6], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_0046F9AC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0046F960; } }
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 4u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[4].w[2]);
    vu::mul(c.vu0, 14u, 6u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 6u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[6].w[2]);
    c.r[3] = c.vu0.vf[4];
    c.r[5] = c.vu0.vf[6];
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_0046F9AC; }
L_0046F960:
    ldl(c.r[6], (c.r[10].w[0] + 7u));
    ldr(c.r[6], (c.r[10].w[0]));
    set32(c.r[2], ld32((c.r[10].w[0] + 8u)));
    sdl(c.r[6], (c.r[29].w[0] + 7u));
    sdr(c.r[6], (c.r[29].w[0]));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    ldl(c.r[6], (c.r[8].w[0] + 7u));
    ldr(c.r[6], (c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    sdl(c.r[6], (c.r[10].w[0] + 7u));
    sdr(c.r[6], (c.r[10].w[0]));
    st32((c.r[10].w[0] + 8u), c.r[2].w[0]);
    ldl(c.r[6], (c.r[29].w[0] + 7u));
    ldr(c.r[6], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[6], (c.r[8].w[0] + 7u));
    sdr(c.r[6], (c.r[8].w[0]));
    st32((c.r[8].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 19;
L_0046F9AC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F8F0u | kUnwind; return; } goto L_0046F8F0; } }
L_0046F9BC:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F8D0u | kUnwind; return; } goto L_0046F8D0; }
L_0046F9D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046F9E0:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.r[5].w[0] + 16u);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 1u, 2u, 4u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.f[6] = ld32((c.r[5].w[0] + 32u));
    c.r[2] = c.vu0.vf[1];
    c.f[9] = ld32((c.r[5].w[0] + 44u));
    c.f[0] = c.r[2].w[0];
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.r[6] = c.vu0.vf[1];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[5] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[8] = c.r[6].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[6], c.f[0]);
    c.vu0.vf[3] = c.r[6];
    c.f[1] = 0u;
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 2u, 4u, c.vu0.vf[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 42;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[5].w[0] + 40u));  goto L_0046FA8C; }
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.budget -= 1;
L_0046FA8C:
    c.f[7] = 0u;
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = c.f[7];  if (t) { goto L_0046FBBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 3u, 2u, 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 1u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.r[6] = c.vu0.vf[1];
    c.f[2] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 19;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::add(c.f[6], c.f[4]);  goto L_0046FB68; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[6], c.f[6]);
    fpu_rsqrt(c, 0u, c.f[0], c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    vu::mulbc(c.vu0, 15u, 3u, 3u, c.vu0.vf[1].w[0]);
    vu::mul(c.vu0, 14u, 1u, 4u, 3u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.r[6] = c.vu0.vf[1];
    c.f[3] = c.r[6].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 22;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::add(c.f[6], c.f[4]);  goto L_0046FB6C; }
    c.f[0] = c.f[3] ^ fp::kSign;
    c.f[3] = c.f[7];
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 4u, 3u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[1] = fp::add(c.f[6], c.f[4]);
    c.budget -= 8;
L_0046FB68:
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    c.budget -= 1;
L_0046FB6C:
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::sub(c.f[8], c.f[0]);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046FBE4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { ld128((c.r[3].w[0]) & ~15u, c.r[2]);  goto L_0046FBDC; }
    set32(c.r[6], c.f[3]);
    c.vu0.vf[1] = c.r[6];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_0046FBE4; } }
L_0046FBBC:
    c.f[0] = fp::mul(c.f[6], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046FBE4; } }
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 1;
L_0046FBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st128((c.r[7].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0046FCC8; } }
L_0046FBE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);  if (t) { goto L_0046FCB8; } }
    vu::mul(c.vu0, 14u, 2u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[2].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[1].w[0];
    c.r[2] = c.vu0.vf[2];
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);  goto L_0046FCBC; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[8], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); vu::move(c.vu0, 15u, 2u, 3u);  if (t) { goto L_0046FCB8; } }
    c.f[1] = fp::sub(c.f[1], c.f[9]);
    fpu_div(c, 0u, c.f[8], c.f[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[9], c.f[1]);
    set32(c.r[6], c.f[1]);
    c.vu0.vf[1] = c.r[6];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[1].w[0]);
    vu::mul(c.vu0, 14u, 3u, 4u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 5u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[6], c.f[0]);
    c.vu0.vf[1] = c.r[6];
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 2u, 4u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.budget -= 24;
L_0046FCB8:
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    c.budget -= 1;
L_0046FCBC:
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 3;
L_0046FCC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FCD0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[11]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[10]);
    vu::opmula(c.vu0, 11u, 10u);
    vu::opmsub(c.vu0, 8u, 10u, 11u);
    vu::mul(c.vu0, 14u, 1u, 8u, 8u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[8]);
    c.r[2] = c.vu0.vf[1];
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); vu::move(c.vu0, 15u, 9u, 8u);  if (t) { goto L_0046FD80; } }
L_0046FD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 301u, depth + 1u); else { c.pc = 0x0046F8B0u; return; } if (c.pc != 0x0046FD50u) [[unlikely]] return; }
L_0046FD50:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD64u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 304u, depth + 1u); else { c.pc = 0x0046F9E0u; return; } if (c.pc != 0x0046FD64u) [[unlikely]] return; }
L_0046FD64:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD78u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 304u, depth + 1u); else { c.pc = 0x0046F9E0u; return; } if (c.pc != 0x0046FD78u) [[unlikely]] return; }
L_0046FD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_0046FFFC; } }
L_0046FD80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_rsqrt(c, 0u, c.f[0], c.f[1]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.f[0]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[7] = c.r[3];
    vu::mulbc(c.vu0, 15u, 9u, 9u, c.vu0.vf[7].w[0]);
    vu::add(c.vu0, 15u, 5u, 1u, 2u);
    vu::mul(c.vu0, 14u, 3u, 9u, 5u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[2] = c.vu0.vf[3];
    vu::mul(c.vu0, 14u, 4u, 11u, 1u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 6u, c.vu0.vf[4].w[2]);
    c.f[0] = c.r[2].w[0];
    vu::mul(c.vu0, 14u, 1u, 10u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.r[3] = c.vu0.vf[4];
    c.r[2] = c.vu0.vf[1];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 124u), 0u);
    c.f[1] = c.r[3].w[0];
    vu::opmula(c.vu0, 10u, 9u);
    vu::opmsub(c.vu0, 6u, 9u, 10u);
    c.f[2] = c.r[2].w[0];
    vu::opmula(c.vu0, 9u, 11u);
    vu::opmsub(c.vu0, 4u, 11u, 9u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    set32(c.r[3], 0u + 14u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 14u, 8u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 6u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 1u, 4u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 15u, 3u, 1u);
    vu::mulbc(c.vu0, 15u, 3u, 3u, c.vu0.vf[7].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::move(c.vu0, 15u, 7u, 3u);
    vu::abs(c.vu0, 15u, 3u, 7u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 3u, 1u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 70;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[29].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FD48u | kUnwind; return; } goto L_0046FD48; } }
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 7u);
    c.f[3] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 9u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[3] = c.vu0.vf[2];
    vu::mul(c.vu0, 14u, 4u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[4].w[2]);
    c.f[6] = c.r[3].w[0];
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 3u, 2u, 9u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 6u, c.vu0.vf[3].w[2]);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[3] = c.vu0.vf[3];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = c.r[3].w[0];
    c.r[3] = c.vu0.vf[4];
    c.f[0] = fp::mul(c.f[4], c.f[6]);
    c.f[8] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[5] = fp::add(c.f[2], c.f[1]);  if (t) { goto L_0046FF1C; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 36u));  if (t) { goto L_0046FF24; } }
L_0046FF1C:
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 2;
L_0046FF24:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[1].w[0];
    c.f[7] = fp::mul(c.f[6], c.f[6]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[5] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = fp::sub(c.f[8], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[3] = fp::mul(c.f[5], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = fp::mul(c.f[1], c.f[4]);  if (t) { goto L_0046FF74; } }
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0046FFF8; } }
L_0046FF74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046FFDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[8], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[7]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046FFDC; } }
    fpu_div(c, 0u, c.f[1], c.f[6]);
    c.f[2] = fp::sqrt(c.f[8]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[4], c.f[1]);
    c.f[6] = fp::mul(c.f[6], c.f[0]);
    c.budget -= 10;
L_0046FFDC:
    set32(c.r[3], c.f[6]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[1] = c.r[3];
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 2u, 3u, c.vu0.vf[1].w[0]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[2]);
    c.budget -= 7;
L_0046FFF8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0046FFFC:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.budget -= 1;
    [[clang::musttail]] return unit_00DC(c, 1u, depth);
}

}
