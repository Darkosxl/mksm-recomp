#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A9[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0,
    0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0,
    0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0,
    0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A4000;
    case 2u: goto L_003A4004;
    case 3u: goto L_003A4020;
    case 4u: goto L_003A4064;
    case 5u: goto L_003A4070;
    case 6u: goto L_003A4088;
    case 7u: goto L_003A40BC;
    case 8u: goto L_003A40C8;
    case 9u: goto L_003A4120;
    case 10u: goto L_003A4138;
    case 11u: goto L_003A4148;
    case 12u: goto L_003A4158;
    case 13u: goto L_003A416C;
    case 14u: goto L_003A4178;
    case 15u: goto L_003A418C;
    case 16u: goto L_003A4198;
    case 17u: goto L_003A41CC;
    case 18u: goto L_003A4228;
    case 19u: goto L_003A4294;
    case 20u: goto L_003A42AC;
    case 21u: goto L_003A42B8;
    case 22u: goto L_003A42C0;
    case 23u: goto L_003A42C8;
    case 24u: goto L_003A42D0;
    case 25u: goto L_003A42D8;
    case 26u: goto L_003A42E8;
    case 27u: goto L_003A42FC;
    case 28u: goto L_003A4308;
    case 29u: goto L_003A431C;
    case 30u: goto L_003A4328;
    case 31u: goto L_003A4380;
    case 32u: goto L_003A4420;
    case 33u: goto L_003A4430;
    case 34u: goto L_003A4440;
    case 35u: goto L_003A44A4;
    case 36u: goto L_003A44BC;
    case 37u: goto L_003A44C8;
    case 38u: goto L_003A44D8;
    case 39u: goto L_003A44EC;
    case 40u: goto L_003A44F8;
    case 41u: goto L_003A450C;
    case 42u: goto L_003A4518;
    case 43u: goto L_003A4580;
    case 44u: goto L_003A45F8;
    case 45u: goto L_003A4718;
    case 46u: goto L_003A4728;
    case 47u: goto L_003A4800;
    case 48u: goto L_003A481C;
    case 49u: goto L_003A4838;
    case 50u: goto L_003A4840;
    case 51u: goto L_003A4880;
    case 52u: goto L_003A48C8;
    case 53u: goto L_003A48D8;
    case 54u: goto L_003A4940;
    case 55u: goto L_003A4960;
    case 56u: goto L_003A4988;
    case 57u: goto L_003A49C8;
    case 58u: goto L_003A4A40;
    case 59u: goto L_003A4A58;
    case 60u: goto L_003A4A68;
    case 61u: goto L_003A4AA4;
    case 62u: goto L_003A4AB4;
    case 63u: goto L_003A4AC8;
    case 64u: goto L_003A4AD8;
    case 65u: goto L_003A4AE8;
    case 66u: goto L_003A4AF8;
    case 67u: goto L_003A4B08;
    case 68u: goto L_003A4B48;
    case 69u: goto L_003A4B50;
    case 70u: goto L_003A4B60;
    case 71u: goto L_003A4B74;
    case 72u: goto L_003A4B80;
    case 73u: goto L_003A4B94;
    case 74u: goto L_003A4BA0;
    case 75u: goto L_003A4C00;
    case 76u: goto L_003A4C1C;
    case 77u: goto L_003A4C40;
    case 78u: goto L_003A4C60;
    case 79u: goto L_003A4C70;
    case 80u: goto L_003A4C78;
    case 81u: goto L_003A4C98;
    case 82u: goto L_003A4CA8;
    case 83u: goto L_003A4CE8;
    case 84u: goto L_003A4CF8;
    case 85u: goto L_003A4D70;
    case 86u: goto L_003A4D88;
    case 87u: goto L_003A4D98;
    case 88u: goto L_003A4DD4;
    case 89u: goto L_003A4DE4;
    case 90u: goto L_003A4DF8;
    case 91u: goto L_003A4E08;
    case 92u: goto L_003A4E18;
    case 93u: goto L_003A4E28;
    case 94u: goto L_003A4E38;
    case 95u: goto L_003A4E58;
    case 96u: goto L_003A4E60;
    case 97u: goto L_003A4E70;
    case 98u: goto L_003A4E84;
    case 99u: goto L_003A4E90;
    case 100u: goto L_003A4EA4;
    case 101u: goto L_003A4EB0;
    case 102u: goto L_003A5030;
    case 103u: goto L_003A519C;
    case 104u: goto L_003A548C;
    case 105u: goto L_003A549C;
    case 106u: goto L_003A54AC;
    case 107u: goto L_003A54C8;
    case 108u: goto L_003A54E4;
    case 109u: goto L_003A5508;
    case 110u: goto L_003A5524;
    case 111u: goto L_003A5558;
    case 112u: goto L_003A55B0;
    case 113u: goto L_003A55F0;
    case 114u: goto L_003A5658;
    case 115u: goto L_003A5668;
    case 116u: goto L_003A5670;
    case 117u: goto L_003A5688;
    case 118u: goto L_003A5690;
    case 119u: goto L_003A56C0;
    case 120u: goto L_003A56F8;
    case 121u: goto L_003A5758;
    case 122u: goto L_003A5760;
    case 123u: goto L_003A5768;
    case 124u: goto L_003A57E0;
    case 125u: goto L_003A57F8;
    case 126u: goto L_003A5808;
    case 127u: goto L_003A5844;
    case 128u: goto L_003A5854;
    case 129u: goto L_003A5868;
    case 130u: goto L_003A5878;
    case 131u: goto L_003A5888;
    case 132u: goto L_003A5898;
    case 133u: goto L_003A58A8;
    case 134u: goto L_003A5908;
    case 135u: goto L_003A5910;
    case 136u: goto L_003A5920;
    case 137u: goto L_003A5934;
    case 138u: goto L_003A5940;
    case 139u: goto L_003A5954;
    case 140u: goto L_003A5960;
    case 141u: goto L_003A597C;
    case 142u: goto L_003A5998;
    case 143u: goto L_003A59D0;
    case 144u: goto L_003A5A10;
    case 145u: goto L_003A5A48;
    case 146u: goto L_003A5A90;
    case 147u: goto L_003A5AA8;
    case 148u: goto L_003A5AB0;
    case 149u: goto L_003A5B14;
    case 150u: goto L_003A5B2C;
    case 151u: goto L_003A5B38;
    case 152u: goto L_003A5B48;
    case 153u: goto L_003A5B5C;
    case 154u: goto L_003A5B68;
    case 155u: goto L_003A5B7C;
    case 156u: goto L_003A5B88;
    case 157u: goto L_003A5C08;
    case 158u: goto L_003A5C64;
    case 159u: goto L_003A5C90;
    case 160u: goto L_003A5CC0;
    case 161u: goto L_003A5CE8;
    case 162u: goto L_003A5D58;
    case 163u: goto L_003A5DB8;
    case 164u: goto L_003A5DF0;
    case 165u: goto L_003A5E20;
    case 166u: goto L_003A5E40;
    case 167u: goto L_003A5E6C;
    case 168u: goto L_003A5EBC;
    case 169u: goto L_003A5EE0;
    case 170u: goto L_003A5F10;
    case 171u: goto L_003A5F60;
    case 172u: goto L_003A5F80;
    case 173u: goto L_003A6048;
    case 174u: goto L_003A60C4;
    case 175u: goto L_003A60E0;
    case 176u: goto L_003A6158;
    case 177u: goto L_003A61C4;
    case 178u: goto L_003A6228;
    case 179u: goto L_003A6258;
    case 180u: goto L_003A6280;
    case 181u: goto L_003A6418;
    case 182u: goto L_003A6470;
    case 183u: goto L_003A6580;
    case 184u: goto L_003A65B8;
    case 185u: goto L_003A66C8;
    case 186u: goto L_003A66D0;
    case 187u: goto L_003A66F0;
    case 188u: goto L_003A6768;
    case 189u: goto L_003A67E0;
    case 190u: goto L_003A67F8;
    case 191u: goto L_003A6808;
    case 192u: goto L_003A6844;
    case 193u: goto L_003A6854;
    case 194u: goto L_003A6868;
    case 195u: goto L_003A6878;
    case 196u: goto L_003A6888;
    case 197u: goto L_003A6898;
    case 198u: goto L_003A68A8;
    case 199u: goto L_003A68F0;
    case 200u: goto L_003A6900;
    case 201u: goto L_003A6910;
    case 202u: goto L_003A6920;
    case 203u: goto L_003A6934;
    case 204u: goto L_003A6940;
    case 205u: goto L_003A6954;
    case 206u: goto L_003A6960;
    case 207u: goto L_003A69A8;
    case 208u: goto L_003A69E4;
    case 209u: goto L_003A6A28;
    case 210u: goto L_003A6A34;
    case 211u: goto L_003A6A64;
    case 212u: goto L_003A6A80;
    case 213u: goto L_003A6AAC;
    case 214u: goto L_003A6AE4;
    case 215u: goto L_003A6B14;
    case 216u: goto L_003A6B20;
    case 217u: goto L_003A6B88;
    case 218u: goto L_003A6BD8;
    case 219u: goto L_003A6BF0;
    case 220u: goto L_003A6C68;
    case 221u: goto L_003A6C80;
    case 222u: goto L_003A6C9C;
    case 223u: goto L_003A6CB8;
    case 224u: goto L_003A6CF8;
    case 225u: goto L_003A6D58;
    case 226u: goto L_003A6D70;
    case 227u: goto L_003A6DE8;
    case 228u: goto L_003A6DF0;
    case 229u: goto L_003A6E44;
    case 230u: goto L_003A6E50;
    case 231u: goto L_003A6E80;
    case 232u: goto L_003A6ED8;
    case 233u: goto L_003A6EE0;
    case 234u: goto L_003A6EE8;
    case 235u: goto L_003A6F08;
    case 236u: goto L_003A6F20;
    case 237u: goto L_003A6F38;
    case 238u: goto L_003A6F40;
    case 239u: goto L_003A6F58;
    case 240u: goto L_003A6F60;
    case 241u: goto L_003A6FD8;
    case 242u: goto L_003A6FF0;
    case 243u: goto L_003A7000;
    case 244u: goto L_003A703C;
    case 245u: goto L_003A704C;
    case 246u: goto L_003A7060;
    case 247u: goto L_003A7070;
    case 248u: goto L_003A7080;
    case 249u: goto L_003A7090;
    case 250u: goto L_003A70A0;
    case 251u: goto L_003A70D8;
    case 252u: goto L_003A70E8;
    case 253u: goto L_003A70F8;
    case 254u: goto L_003A7108;
    case 255u: goto L_003A711C;
    case 256u: goto L_003A7128;
    case 257u: goto L_003A713C;
    case 258u: goto L_003A7148;
    case 259u: goto L_003A71B8;
    case 260u: goto L_003A7220;
    case 261u: goto L_003A7230;
    case 262u: goto L_003A7338;
    case 263u: goto L_003A7364;
    case 264u: goto L_003A73B0;
    case 265u: goto L_003A73E8;
    case 266u: goto L_003A7420;
    case 267u: goto L_003A7450;
    case 268u: goto L_003A7480;
    case 269u: goto L_003A74B0;
    case 270u: goto L_003A74E0;
    case 271u: goto L_003A7510;
    case 272u: goto L_003A7540;
    case 273u: goto L_003A7570;
    case 274u: goto L_003A75A0;
    case 275u: goto L_003A75D0;
    case 276u: goto L_003A75E8;
    case 277u: goto L_003A7708;
    case 278u: goto L_003A7758;
    case 279u: goto L_003A77B8;
    case 280u: goto L_003A7848;
    case 281u: goto L_003A79E0;
    case 282u: goto L_003A7A78;
    case 283u: goto L_003A7A98;
    case 284u: goto L_003A7B60;
    case 285u: goto L_003A7BC8;
    case 286u: goto L_003A7C30;
    case 287u: goto L_003A7CD8;
    case 288u: goto L_003A7D20;
    case 289u: goto L_003A7D78;
    case 290u: goto L_003A7D80;
    case 291u: goto L_003A7D88;
    case 292u: goto L_003A7DE0;
    case 293u: goto L_003A7DE8;
    case 294u: goto L_003A7E48;
    case 295u: goto L_003A7F00;
    default: bad_entry(c, 0x003A4000u); return;
    }
L_003A4000:
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_003A4004:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3FD8u | kUnwind; return; } [[clang::musttail]] return unit_00A8(c, 260u, depth); } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A4020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29528u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003A4064; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 260u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4064u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4064u) [[unlikely]] return; }
L_003A4064:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A40BC; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A40B4; } }
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003A4088:
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { goto L_003A40AC; } }
    st32((c.r[6].w[0]), c.r[7].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 2;
L_003A40AC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4088u | kUnwind; return; } goto L_003A4088; } }
L_003A40B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40BCu);  if (depth < kMaxDepth) unit_00E3(c, 13u, depth + 1u); else { c.pc = 0x0048C288u; return; } if (c.pc != 0x003A40BCu) [[unlikely]] return; }
L_003A40BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A40C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A4138; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A4128; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1128u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 24424u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 17024u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4120u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A4120u) [[unlikely]] return; }
L_003A4120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A413C; } }
L_003A4128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4138u); set32(c.r[4], c.r[4].w[0] - 24424u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A4138u) [[unlikely]] return; }
L_003A4138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A413C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24424u);  c.pc = t; return; }
L_003A4158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A416Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 8u, depth + 1u); else { c.pc = 0x003A40C8u; return; } if (c.pc != 0x003A416Cu) [[unlikely]] return; }
L_003A416C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A418Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 8u, depth + 1u); else { c.pc = 0x003A40C8u; return; } if (c.pc != 0x003A418Cu) [[unlikely]] return; }
L_003A418C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4198:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 24u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 24u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41CCu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A41CCu) [[unlikely]] return; }
L_003A41CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 31240u);
    set32(c.r[6], c.r[6].w[0] + 31216u);
    set32(c.r[7], c.r[7].w[0] + 31192u);
    set32(c.r[8], c.r[8].w[0] + 31168u);
    set32(c.r[9], c.r[9].w[0] + 31112u);
    set32(c.r[4], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4228:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A42AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A429C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1124u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24368u);
    set32(c.r[6], c.r[6].w[0] + 16792u);
    set32(c.r[7], c.r[7].w[0] + 17080u);
    set32(c.r[8], c.r[8].w[0] + 17088u);
    set32(c.r[9], c.r[9].w[0] + 17096u);
    set32(c.r[10], c.r[10].w[0] + 17104u);
    set32(c.r[11], c.r[11].w[0] - 24424u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4294u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A4294u) [[unlikely]] return; }
L_003A4294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A42B0; } }
L_003A429C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A42ACu); set32(c.r[4], c.r[4].w[0] - 24368u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A42ACu) [[unlikely]] return; }
L_003A42AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A42B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A42B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A42C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A42C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A42D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A42D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24368u);  c.pc = t; return; }
L_003A42E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A42FCu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003A4228u; return; } if (c.pc != 0x003A42FCu) [[unlikely]] return; }
L_003A42FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A431Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003A4228u; return; } if (c.pc != 0x003A431Cu) [[unlikely]] return; }
L_003A431C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4328:
    set32(c.r[29], c.r[29].w[0] - 160u);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4380u); set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4380u) [[unlikely]] return; }
L_003A4380:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[5].w[0] + 13536u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    vu::sub(c.vu0, 15u, 3u, 4u, 1u);
    vu::add(c.vu0, 15u, 4u, 4u, 1u);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.f[0]);
    vu::move(c.vu0, 15u, 1u, 3u);
    c.vu0.vf[2] = c.r[2];
    vu::move(c.vu0, 15u, 5u, 4u);
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[2].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    c.r[3] = c.vu0.vf[1];
    vu::mulbc(c.vu0, 15u, 5u, 5u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[3]);
    mmi::por(c.r[5], c.r[0], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[4]);
    mmi::pxor(c.r[5], c.r[5], c.r[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.vu0.vf[2] = c.r[5];
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 2u, 2u, 5u);
    vu::mul(c.vu0, 14u, 3u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 6u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.r[2] = c.vu0.vf[3];
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A4420:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_003A4430:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  c.pc = t; return; }
L_003A4440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A44BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A44AC; } }
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1120u)));
    set32(c.r[3], c.r[3].w[0] + 19024u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24312u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 17024u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44A4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A44A4u) [[unlikely]] return; }
L_003A44A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A44C0; } }
L_003A44AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44BCu); set32(c.r[4], c.r[4].w[0] - 24312u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A44BCu) [[unlikely]] return; }
L_003A44BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A44C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A44C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24312u);  c.pc = t; return; }
L_003A44D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44ECu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 34u, depth + 1u); else { c.pc = 0x003A4440u; return; } if (c.pc != 0x003A44ECu) [[unlikely]] return; }
L_003A44EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A44F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A450Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 34u, depth + 1u); else { c.pc = 0x003A4440u; return; } if (c.pc != 0x003A450Cu) [[unlikely]] return; }
L_003A450C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 31360u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 12u), c.f[12]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003A4554; }
L_003A4554:
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 28u), c.f[0]);  if (t) { goto L_003A4570; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_003A4570:
    st32((c.r[4].w[0] + 28u), c.f[1]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A4580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 31728u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 31360u);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003A45CC; }
L_003A45CC:
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 28u), c.f[0]);  if (t) { goto L_003A45E8; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_003A45E8:
    st32((c.r[4].w[0] + 28u), c.f[1]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A45F8:
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[13].w[0]) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 4u, 1u, c.vu0.vf[0].w[3]);
    ld128((c.r[13].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 0u, 1u, 3u);
    set32(c.r[3], cfc2(c, 17u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    vu::sub(c.vu0, 15u, 0u, 1u, 2u);
    set32(c.r[4], cfc2(c, 17u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[7].d[0] = c.r[2].d[0] & 14ull;
    c.r[8].d[0] = c.r[3].d[0] & 14ull;
    vu::sub(c.vu0, 15u, 0u, 2u, 4u);
    set32(c.r[4], cfc2(c, 17u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    vu::sub(c.vu0, 15u, 0u, 3u, 4u);
    set32(c.r[5], cfc2(c, 17u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[14].d[0] = c.r[2].d[0] & 14ull;
    c.r[11].d[0] = c.r[3].d[0] & 14ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.budget -= 50;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_003A47F4; } }
    c.r[2].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A47F8; } }
    c.r[2].d[0] = c.r[7].d[0] | c.r[11].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003A47F4; } }
    c.f[3] = ld32((c.r[6].w[0] + 20u));
    c.r[3].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.f[5] = 0u;
    set32(c.r[12], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[15], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[2].w[0] + 19040u);
    ldl(c.r[4], (c.r[8].w[0] + 7u));
    ldr(c.r[4], (c.r[8].w[0]));
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    sdl(c.r[4], (c.r[29].w[0] + 23u));
    sdr(c.r[4], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.budget -= 16;
L_003A4718:
    set32(c.r[9], 0u + 2u);
    set32(c.r[7], c.r[13].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[15].w[0] + 8u);
    c.budget -= 4;
L_003A4728:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[10].d[0] & c.r[4].d[0];  if (t) { goto L_003A47A8; } }
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4784; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A4798; } }
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.f[5] = c.f[1];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 32u), c.f[4]);  if (t) { goto L_003A4798; } }
L_003A4784:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = c.f[3];  goto L_003A4794; }
L_003A4794:
    c.f[3] = c.f[1];
    c.budget -= 1;
L_003A4798:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A47F8; } }
L_003A47A8:
    set32(c.r[7], c.r[7].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - 4u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4728u | kUnwind; return; } goto L_003A4728; } }
    c.r[3].d[0] = c.r[11].d[0] | c.r[14].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[12].sd[0] >= 0; c.r[10].d[0] = c.r[11].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4718u | kUnwind; return; } goto L_003A4718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 20u), c.f[5]);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0]) & ~15u, c.r[3]);  if (t) { goto L_003A47F8; } }
L_003A47F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A47F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A481Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5960u; return; } if (c.pc != 0x003A481Cu) [[unlikely]] return; }
L_003A481C:
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_003A4840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[8]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[16].w[0]) & ~15u, c.r[8]);
    set32(c.r[4], c.r[4].w[0] + 13536u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pxor(c.r[8], c.r[8], c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4880u); st128((c.r[16].w[0]) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_00E3(c, 35u, depth + 1u); else { c.pc = 0x0048C5D0u; return; } if (c.pc != 0x003A4880u) [[unlikely]] return; }
L_003A4880:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 2u, 1u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A48C8:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[5].w[0]) & ~15u, c.r[2]);  c.pc = t; return; }
L_003A48D8:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    set32(c.r[2], c.f[12]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    c.vu0.vf[12] = c.r[2];
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    vu::addbc(c.vu0, 15u, 12u, 0u, c.vu0.vf[12].w[0]);
    vu::mulbc(c.vu0, 14u, 8u, 8u, c.vu0.vf[1].w[0]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.vf[1].w[1]);
    vu::mulbc(c.vu0, 14u, 10u, 10u, c.vu0.vf[1].w[2]);
    vu::abs(c.vu0, 14u, 8u, 8u);
    vu::abs(c.vu0, 14u, 9u, 9u);
    vu::abs(c.vu0, 14u, 10u, 10u);
    vu::mulabc(c.vu0, 15u, 8u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 9u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 12u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 2u, 10u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 14u, 1u, 11u, 2u);
    vu::add(c.vu0, 14u, 2u, 11u, 2u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_003A4940:
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  c.pc = t; return; }
L_003A4960:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 19056u);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    c.budget -= 10;
L_003A4988:
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 15u, 1u, 3u, 1u);
    vu::mul(c.vu0, 15u, 2u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4988u | kUnwind; return; } goto L_003A4988; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A49C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A4A58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A4A48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1116u)));
    set32(c.r[3], c.r[3].w[0] + 19216u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[12], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24256u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19048u);
    set32(c.r[7], c.r[7].w[0] + 19144u);
    set32(c.r[8], c.r[8].w[0] + 19176u);
    set32(c.r[9], c.r[9].w[0] + 19208u);
    set32(c.r[10], c.r[10].w[0] + 19272u);
    set32(c.r[11], c.r[11].w[0] - 24088u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A40u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A4A40u) [[unlikely]] return; }
L_003A4A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A4A5C; } }
L_003A4A48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A58u); set32(c.r[4], c.r[4].w[0] - 24256u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A4A58u) [[unlikely]] return; }
L_003A4A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A4A5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4A68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 32u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AA4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4AA4u) [[unlikely]] return; }
L_003A4AA4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 43u, depth + 1u); else { c.pc = 0x003A4580u; return; } if (c.pc != 0x003A4AB4u) [[unlikely]] return; }
L_003A4AB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4AC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AD8u);  if (depth < kMaxDepth) unit_00A9(c, 47u, depth + 1u); else { c.pc = 0x003A4800u; return; } if (c.pc != 0x003A4AD8u) [[unlikely]] return; }
L_003A4AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4AE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AF8u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A4AF8u) [[unlikely]] return; }
L_003A4AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4B08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_003A4B40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 1104u));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 12;
L_003A4B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A4B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24256u);  c.pc = t; return; }
L_003A4B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B74u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 57u, depth + 1u); else { c.pc = 0x003A49C8u; return; } if (c.pc != 0x003A4B74u) [[unlikely]] return; }
L_003A4B74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B94u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 57u, depth + 1u); else { c.pc = 0x003A49C8u; return; } if (c.pc != 0x003A4B94u) [[unlikely]] return; }
L_003A4B94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 31264u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 31496u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A4C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C1Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003A4430u; return; } if (c.pc != 0x003A4C1Cu) [[unlikely]] return; }
L_003A4C1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C60u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4C60u) [[unlikely]] return; }
L_003A4C60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 17u);  c.pc = t; return; }
L_003A4C78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C98u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4C98u) [[unlikely]] return; }
L_003A4C98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4CA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4CE8u); set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4CE8u) [[unlikely]] return; }
L_003A4CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4CF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A4D88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A4D78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1112u)));
    set32(c.r[3], c.r[3].w[0] + 19288u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[12], 0u + 2u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24200u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19864u);
    set32(c.r[7], c.r[7].w[0] + 19960u);
    set32(c.r[8], c.r[8].w[0] + 19992u);
    set32(c.r[9], c.r[9].w[0] + 20024u);
    set32(c.r[10], c.r[10].w[0] + 20056u);
    set32(c.r[11], c.r[11].w[0] - 24312u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D70u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A4D70u) [[unlikely]] return; }
L_003A4D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A4D8C; } }
L_003A4D78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D88u); set32(c.r[4], c.r[4].w[0] - 24200u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A4D88u) [[unlikely]] return; }
L_003A4D88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A4D8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4D98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 20u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DD4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4DD4u) [[unlikely]] return; }
L_003A4DD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 74u, depth + 1u); else { c.pc = 0x003A4BA0u; return; } if (c.pc != 0x003A4DE4u) [[unlikely]] return; }
L_003A4DE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4DF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E08u);  if (depth < kMaxDepth) unit_00A9(c, 75u, depth + 1u); else { c.pc = 0x003A4C00u; return; } if (c.pc != 0x003A4E08u) [[unlikely]] return; }
L_003A4E08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4E18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E28u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A4E28u) [[unlikely]] return; }
L_003A4E28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4E38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A4E4C; } }
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
L_003A4E4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A4E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A4E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24200u);  c.pc = t; return; }
L_003A4E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E84u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 84u, depth + 1u); else { c.pc = 0x003A4CF8u; return; } if (c.pc != 0x003A4E84u) [[unlikely]] return; }
L_003A4E84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4EA4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 84u, depth + 1u); else { c.pc = 0x003A4CF8u; return; } if (c.pc != 0x003A4EA4u) [[unlikely]] return; }
L_003A4EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4EB0:
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 1u, 4u, 2u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 6u, c.vu0.vf[1].w[2]);
    vu::mul(c.vu0, 14u, 5u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 3u, c.vu0.vf[5].w[2]);
    c.r[2] = c.vu0.vf[1];
    vu::mul(c.vu0, 14u, 3u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 7u, c.vu0.vf[3].w[2]);
    c.f[4] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[3];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35800000u);
    c.f[3] = c.r[1].w[0];
    c.f[5] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[5];
    c.f[2] = fp::mul(c.f[4], c.f[4]);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[1] = c.f[0] & fp::kAbs;
    vu::sub(c.vu0, 15u, 3u, 3u, 1u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    vu::mul(c.vu0, 14u, 1u, 2u, 3u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 5u, c.vu0.vf[1].w[2]);
    c.f[6] = fp::sub(c.f[0], c.f[2]);
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.f[6] & fp::kAbs;
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    vu::mul(c.vu0, 14u, 2u, 4u, 3u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 5u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 49;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);  if (t) { goto L_003A4F8C; } }
    c.f[0] = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.f[0]);  if (t) { goto L_003A4F90; } }
L_003A4F8C:
    st32((c.r[10].w[0]), 0u);
    c.budget -= 1;
L_003A4F90:
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[11].w[0]), c.f[0]);
    set32(c.r[2], c.f[0]);
    c.f[1] = ld32((c.r[10].w[0]));
    c.vu0.vf[8] = c.r[2];
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], c.f[1]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[7]);
    c.vu0.vf[5] = c.r[2];
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    vu::move(c.vu0, 15u, 3u, 6u);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 15u, 3u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 3u, 1u, c.vu0.vf[5].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    vu::move(c.vu0, 15u, 4u, 7u);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 4u, 2u, c.vu0.vf[8].w[0]);
    vu::sub(c.vu0, 15u, 1u, 3u, 4u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 5u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    c.r[2] = c.vu0.vf[2];
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    st32((c.r[9].w[0]), c.f[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A5030:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 6u, 8u, 7u);
    vu::sub(c.vu0, 15u, 1u, 7u, 1u);
    vu::mul(c.vu0, 14u, 3u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 5u, c.vu0.vf[3].w[2]);
    vu::mul(c.vu0, 14u, 2u, 6u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[3] = c.vu0.vf[3];
    c.r[2] = c.vu0.vf[2];
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 32;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[6]);  if (t) { goto L_003A50B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);  if (t) { goto L_003A50F0; } }
L_003A50B8:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A50D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[8]);  if (t) { goto L_003A50F0; } }
L_003A50D0:
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulabc(c.vu0, 15u, 7u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 6u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 8;
L_003A50F0:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 4u, 2u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.vu0.vf[3]);
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[3] = c.vu0.vf[1];
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A54B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 3u, 3u, 4u);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[2].w[0] + 19312u));
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 96u);
    set32(c.r[9], c.r[29].w[0] + 240u);
    set32(c.r[10], c.r[29].w[0] + 244u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A519Cu); set32(c.r[11], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003A4EB0u; return; } if (c.pc != 0x003A519Cu) [[unlikely]] return; }
L_003A519C:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A54B0; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[3]);
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 244u));
    vu::move(c.vu0, 15u, 6u, 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 5u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 1u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 6u, 6u, c.vu0.q);
    vu::mulbc(c.vu0, 8u, 2u, 5u, c.vu0.q);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    vu::mul(c.vu0, 14u, 1u, 4u, 6u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 5u, c.vu0.vf[1].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.r[3] = c.vu0.vf[1];
    c.f[4] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    ld128((c.r[29].w[0] + 256u) & ~15u, c.vu0.vf[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    ld128((c.r[29].w[0] + 272u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 6u, c.vu0.vf[1].w[0]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[2].w[0]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.q);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 54;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A54B0; } }
    set32(c.r[3], c.f[3]);
    c.vu0.vf[3] = c.r[3];
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 2u, c.vu0.vf[3].w[0]);
    vu::maddbc(c.vu0, 15u, 5u, 1u, c.vu0.vf[3].w[0]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    c.f[5] = 0u;
    vu::mul(c.vu0, 14u, 2u, 5u, 6u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    vu::mul(c.vu0, 14u, 1u, 7u, 6u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 4u, c.vu0.vf[1].w[2]);
    c.r[3] = c.vu0.vf[2];
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[3]));
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[5]);
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_003A538C; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);  goto L_003A5390; }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[4]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);  goto L_003A5390; }
    fpu_div(c, 0u, c.f[2], c.f[4]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[2] = c.r[2];
    vu::mulabc(c.vu0, 15u, 7u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 7u, c.vu0.vf[2].w[0]);
    vu::maddbc(c.vu0, 15u, 2u, 1u, c.vu0.vf[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    vu::sub(c.vu0, 15u, 1u, 5u, 2u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    vu::move(c.vu0, 15u, 3u, 1u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 4u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 3u, 3u, c.vu0.q);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 20u), c.f[3]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[3]);  if (t) { goto L_003A54B0; } }
L_003A538C:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);
    c.budget -= 1;
L_003A5390:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 3u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.r[3] = c.vu0.vf[2];
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    fpu_div(c, 0u, c.f[0], c.f[4]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddbc(c.vu0, 15u, 1u, 4u, c.vu0.vf[1].w[0]);
    vu::sub(c.vu0, 15u, 3u, 3u, 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 3u, 3u);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.vu0.vf[1]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[3]);
    vu::sqrt(c.vu0, c.vu0.vf[2].w[0]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.q);
    c.r[3] = c.vu0.vf[2];
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A5438; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_003A5438; }
L_003A5438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A54B0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 212u), 0u);  if (t) { goto L_003A5460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);  if (t) { goto L_003A5464; } }
L_003A5460:
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.budget -= 1;
L_003A5464:
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 3u);
    vu::sub(c.vu0, 15u, 2u, 2u, 3u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[2]);
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[16], c.r[29].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A548Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 99u, depth + 1u); else { c.pc = 0x003A8B80u; return; } if (c.pc != 0x003A548Cu) [[unlikely]] return; }
L_003A548C:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A549Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 97u, depth + 1u); else { c.pc = 0x003A89F0u; return; } if (c.pc != 0x003A549Cu) [[unlikely]] return; }
L_003A549C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 28u, depth + 1u); else { c.pc = 0x0048C4A8u; return; } if (c.pc != 0x003A54ACu) [[unlikely]] return; }
L_003A54AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A54B0:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_003A54C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5960u; return; } if (c.pc != 0x003A54E4u) [[unlikely]] return; }
L_003A54E4:
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5508:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5524u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A5524u) [[unlikely]] return; }
L_003A5524:
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 31728u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 31592u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_003A55B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 31592u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.f[12]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    st32((c.r[4].w[0] + 28u), c.f[12]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[5]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.f[12]);  c.pc = t; return; }
L_003A55F0:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 1u, 5u, 6u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    vu::mul(c.vu0, 14u, 2u, 1u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.f[1] = 0u;
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003A5640; } }
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_003A564C; } }
L_003A5640:
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003A564C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5658:
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[5].w[0]) & ~15u, c.r[2]);  c.pc = t; return; }
L_003A5668:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_003A5670:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), 0u);  c.pc = t; return; }
L_003A5688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003A5690:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[1] = c.r[8];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
L_003A56C0:
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A56C0u | kUnwind; return; } goto L_003A56C0; } }
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[31]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_003A56F8:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 31u, c.vu0.vf[0].w[3]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A56F8u | kUnwind; return; } goto L_003A56F8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::max(c.vu0, 15u, 3u, 1u, 2u);
    vu::mini(c.vu0, 15u, 1u, 1u, 2u);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::add(c.vu0, 15u, 3u, 3u, 2u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5758:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_003A5760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 7u);  c.pc = t; return; }
L_003A5768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A57F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A57E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1108u)));
    set32(c.r[3], c.r[3].w[0] + 19352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 48u);
    set32(c.r[12], 0u + 2u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24144u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 22536u);
    set32(c.r[7], c.r[7].w[0] + 22632u);
    set32(c.r[8], c.r[8].w[0] + 22664u);
    set32(c.r[9], c.r[9].w[0] + 22696u);
    set32(c.r[10], c.r[10].w[0] + 22792u);
    set32(c.r[11], c.r[11].w[0] - 24088u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A57E0u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A57E0u) [[unlikely]] return; }
L_003A57E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A57FC; } }
L_003A57E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A57F8u); set32(c.r[4], c.r[4].w[0] - 24144u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A57F8u) [[unlikely]] return; }
L_003A57F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A57FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5808:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 48u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5844u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5844u) [[unlikely]] return; }
L_003A5844:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5854u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 111u, depth + 1u); else { c.pc = 0x003A5558u; return; } if (c.pc != 0x003A5854u) [[unlikely]] return; }
L_003A5854:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5878u);  if (depth < kMaxDepth) unit_00A9(c, 107u, depth + 1u); else { c.pc = 0x003A54C8u; return; } if (c.pc != 0x003A5878u) [[unlikely]] return; }
L_003A5878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5898u);  if (depth < kMaxDepth) unit_00A9(c, 109u, depth + 1u); else { c.pc = 0x003A5508u; return; } if (c.pc != 0x003A5898u) [[unlikely]] return; }
L_003A5898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A58A8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_003A58FC; } }
    st32((c.r[29].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[4].w[0] - 1104u));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 18;
L_003A58FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24144u);  c.pc = t; return; }
L_003A5920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5934u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 123u, depth + 1u); else { c.pc = 0x003A5768u; return; } if (c.pc != 0x003A5934u) [[unlikely]] return; }
L_003A5934:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5954u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 123u, depth + 1u); else { c.pc = 0x003A5768u; return; } if (c.pc != 0x003A5954u) [[unlikely]] return; }
L_003A5954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A597Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003A4430u; return; } if (c.pc != 0x003A597Cu) [[unlikely]] return; }
L_003A597C:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5998:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A59D0u); set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A59D0u) [[unlikely]] return; }
L_003A59D0:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2] = c.vu0.vf[3];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A5A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 76u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A48u); set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5A48u) [[unlikely]] return; }
L_003A5A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5A90; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 32u);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 2u, 3u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A90u); set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5A90u) [[unlikely]] return; }
L_003A5A90:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A5AA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003A5AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A5B2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A5B1C; } }
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1100u)));
    set32(c.r[3], c.r[3].w[0] + 19400u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24088u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 23696u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B14u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A5B14u) [[unlikely]] return; }
L_003A5B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A5B30; } }
L_003A5B1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B2Cu); set32(c.r[4], c.r[4].w[0] - 24088u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A5B2Cu) [[unlikely]] return; }
L_003A5B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A5B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24088u);  c.pc = t; return; }
L_003A5B48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B5Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 148u, depth + 1u); else { c.pc = 0x003A5AB0u; return; } if (c.pc != 0x003A5B5Cu) [[unlikely]] return; }
L_003A5B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5B68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B7Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 148u, depth + 1u); else { c.pc = 0x003A5AB0u; return; } if (c.pc != 0x003A5B7Cu) [[unlikely]] return; }
L_003A5B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5B88:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 1104u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 31864u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[10], c.r[16].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[9], c.r[16].w[0] + 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[10].w[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 32;
L_003A5C08:
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5C08u | kUnwind; return; } goto L_003A5C08; } }
    st32((c.r[16].w[0] + 212u), 0u);
    set32(c.r[17], c.r[16].w[0] + 212u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A5C70; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C64u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5C64u) [[unlikely]] return; }
L_003A5C64:
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_003A5C70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[3], ld32((c.r[16].w[0] + 212u)));  if (t) { goto L_003A5CAC; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A5C90:
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5C90u | kUnwind; return; } goto L_003A5C90; } }
L_003A5CAC:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 173u, depth + 1u); else { c.pc = 0x003A6048u; return; } if (c.pc != 0x003A5CC0u) [[unlikely]] return; }
L_003A5CC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A5CE8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 1104u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + 31864u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[16].w[0] + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 28;
L_003A5D58:
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5D58u | kUnwind; return; } goto L_003A5D58; } }
    st32((c.r[16].w[0] + 212u), 0u);
    set32(c.r[18], c.r[16].w[0] + 212u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[17], c.r[19].w[0] + 24u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[5], c.r[5].w[0] << 4);  if (t) { goto L_003A5DC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DB8u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5DB8u) [[unlikely]] return; }
L_003A5DB8:
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_003A5DC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[7], c.r[19].w[0] + 12u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_003A5E0C; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_003A5DF0:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5DF0u | kUnwind; return; } goto L_003A5DF0; } }
L_003A5E0C:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E20u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00A9(c, 173u, depth + 1u); else { c.pc = 0x003A6048u; return; } if (c.pc != 0x003A5E20u) [[unlikely]] return; }
L_003A5E20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A5E40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E6Cu); set32(c.r[19], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5960u; return; } if (c.pc != 0x003A5E6Cu) [[unlikely]] return; }
L_003A5E6C:
    set32(c.r[16], c.r[18].w[0] + 212u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_003A5EF0; }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A5EBC; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5EBCu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5EBCu) [[unlikely]] return; }
L_003A5EBC:
    set32(c.r[7], ld32((c.r[17].w[0] + 8208u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5EE0u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5EE0u) [[unlikely]] return; }
L_003A5EE0:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_003A5EF0:
    set32(c.r[17], c.r[20].w[0] + 12u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_003A5F2C; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A5F10:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5F10u | kUnwind; return; } goto L_003A5F10; } }
L_003A5F2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5F60; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F60u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A5F60u) [[unlikely]] return; }
L_003A5F60:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003A6024; } }
    set32(c.r[10], 0u - 1u);
    set32(c.r[9], 0u + 48u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003A5F80:
    set32(c.r[3], c.r[8].w[0] + 3u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[7], ld32((c.r[20].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 4);
    c.r[5].d[0] = c.r[8].d[0] & 3ull;
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[3] = c.r[2];
    c.f[1] = ld32((c.r[6].w[0] + 32u));
    set32(c.r[2], c.f[2]);
    c.vu0.vf[1] = c.r[2];
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[2], c.f[1]);
    c.vu0.vf[2] = c.r[2];
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[1];
    c.f[1] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[10].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5F80u | kUnwind; return; } goto L_003A5F80; } }
L_003A6024:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A6048:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u - 4u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[19].w[0] + 3u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[16].w[0] + 48u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[16].w[0] + 208u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 2));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A60C4; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 48u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A60C4u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[17].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A60C4u) [[unlikely]] return; }
L_003A60C4:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[9], 0u - c.r[20].w[0]);  if (t) { goto L_003A6148; } }
    set32(c.r[11], 0u - 1u);
    set32(c.r[10], 0u + 48u);
    c.budget -= 2;
L_003A60E0:
    c.r[2].d[0] = c.r[11].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[7].w[0] + 3u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[7].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[5].d[0] = c.r[7].d[0] & 3ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 26;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[3].w[0] + 32u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A60E0u | kUnwind; return; } goto L_003A60E0; } }
L_003A6148:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);  if (t) { goto L_003A61B0; } }
    set32(c.r[9], 0u + 48u);
    c.budget -= 1;
L_003A6158:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[9].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[7].d[0] & 3ull;
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[3].w[0] + 32u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6158u | kUnwind; return; } goto L_003A6158; } }
L_003A61B0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61C4u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 13u, depth + 1u); else { c.pc = 0x003CC1D8u; return; } if (c.pc != 0x003A61C4u) [[unlikely]] return; }
L_003A61C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    vu::sub(c.vu0, 15u, 3u, 2u, 1u);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.f[0]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[2] = c.r[2];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[2].w[0]);
    vu::mulbc(c.vu0, 15u, 3u, 3u, c.vu0.vf[2].w[0]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A6228:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[5].w[0] + 12u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003A6258:
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[10].w[0] + 208u)));
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[11], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[10].w[0] + 48u)));  if (t) { goto L_003A6360; } }
    c.budget -= 1;
L_003A6280:
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.f[1] = ld32((c.r[8].w[0] + 16u));
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.f[2] = ld32((c.r[8].w[0] + 32u));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.f[3] = ld32((c.r[10].w[0] + 12u));
    set32(c.r[9], c.r[9].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[1]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[3]);
    set32(c.r[11], c.r[11].w[0] - 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.r[6].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[8].w[0] + 20u));
    c.f[2] = ld32((c.r[8].w[0] + 36u));
    c.f[3] = ld32((c.r[10].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[1] = ld32((c.r[8].w[0] + 24u));
    c.f[2] = ld32((c.r[8].w[0] + 40u));
    c.f[3] = ld32((c.r[10].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    c.f[1] = ld32((c.r[8].w[0] + 28u));
    c.f[2] = ld32((c.r[8].w[0] + 44u));
    c.f[3] = ld32((c.r[10].w[0] + 12u));
    set32(c.r[8], c.r[8].w[0] + 48u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.budget -= 56;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6280u | kUnwind; return; } goto L_003A6280; } }
L_003A6360:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] < 0; c.r[3].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003A63D0; } }
    c.f[3] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[8].w[0] + 16u));
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    c.f[1] = ld32((c.r[10].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { const bool t = c.r[11].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (t) { goto L_003A63D0; } }
    c.f[3] = ld32((c.r[8].w[0] + 4u));
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.f[2] = ld32((c.r[8].w[0] + 20u));
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.f[0] = ld32((c.r[8].w[0] + 36u));
    c.f[1] = ld32((c.r[10].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
L_003A63D0:
    c.r[2].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_003A640C; } }
    c.f[2] = ld32((c.r[8].w[0] + 40u));
    c.f[3] = ld32((c.r[10].w[0] + 12u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[1] = ld32((c.r[8].w[0] + 24u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[9].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 12;
L_003A640C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6418:
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[13], 0u + 48u);
    set32(c.r[2], ld32((c.r[12].w[0] + 52u)));
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[12].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[13].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    set32(c.r[8], 0u + 1u);
    mmi::pextlw(c.r[8], c.r[8], c.r[8]);
    mmi::pextlw(c.r[8], c.r[8], c.r[8]);
    vu::mulabc(c.vu0, 15u, 8u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 9u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 15u, 1u, 10u, c.vu0.vf[2].w[2]);
    mmi::padduw(c.r[10], c.r[0], c.r[0]);
    mmi::padduw(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::psubw(c.r[9], c.r[0], c.r[8]);  if (t) { goto L_003A64B4; } }
L_003A6470:
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    vu::mulabc(c.vu0, 15u, 8u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 9u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 15u, 8u, 10u, c.vu0.vf[2].w[2]);
    mmi::padduw(c.r[10], c.r[10], c.r[8]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    vu::sub(c.vu0, 15u, 9u, 8u, 1u);
    vu::max(c.vu0, 15u, 1u, 1u, 8u);
    c.r[11] = c.vu0.vf[9];
    mmi::psraw(c.r[11], c.r[11], 31u);
    mmi::pand(c.r[4], c.r[11], c.r[4]);
    mmi::pxor(c.r[11], c.r[11], c.r[9]);
    mmi::pand(c.r[11], c.r[11], c.r[10]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::por(c.r[4], c.r[4], c.r[11]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6470u | kUnwind; return; } goto L_003A6470; } }
L_003A64B4:
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0]) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_003A64EC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.f[1] = c.f[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
L_003A64EC:
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 28u));  goto L_003A6514; }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.f[1] = c.f[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.budget -= 5;
L_003A6514:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_003A6534; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 4;
L_003A6534:
    st32((c.r[7].w[0]), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], ld32((c.r[12].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[6].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6580:
    set32(c.r[2], ld32((c.r[4].w[0] + 216u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] < 0; c.f[2] = ld32((c.r[6].w[0] + 20u));  if (t) { goto L_003A6680; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[2], c.r[7].w[0] << 4);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[4] = 0u;
    c.budget -= 7;
L_003A65B8:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 15u, 2u, 5u, 6u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 8u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[5].w[3]);
    vu::mul(c.vu0, 15u, 4u, 5u, 7u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 8u, 3u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[5].w[3]);
    c.r[3] = c.vu0.vf[2];
    c.f[1] = c.r[3].w[0];
    c.r[3] = c.vu0.vf[4];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.f[0] = c.r[3].w[0];
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A6638; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A66BC; }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A6668; } }
    c.f[3] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);  if (t) { goto L_003A6668; } }
L_003A6638:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], c.r[7].w[0] - 1u);  goto L_003A6678; }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[2];  goto L_003A6664; }
L_003A6664:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_003A6668:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_003A66B8; } }
L_003A6678:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A65B8u | kUnwind; return; } goto L_003A65B8; } }
L_003A6680:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A66BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 20u), c.f[3]);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0]) & ~15u, c.r[3]);  if (t) { goto L_003A66BC; } }
L_003A66B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A66BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A66C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 8u);  c.pc = t; return; }
L_003A66D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003A66F0:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.f[12]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    c.vu0.vf[12] = c.r[2];
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    vu::addbc(c.vu0, 15u, 12u, 0u, c.vu0.vf[12].w[0]);
    vu::mulabc(c.vu0, 14u, 8u, c.vu0.vf[3].w[0]);
    vu::maddabc(c.vu0, 14u, 9u, c.vu0.vf[3].w[1]);
    vu::maddabc(c.vu0, 14u, 10u, c.vu0.vf[3].w[2]);
    vu::maddbc(c.vu0, 14u, 11u, 11u, c.vu0.vf[0].w[3]);
    vu::mulbc(c.vu0, 14u, 8u, 8u, c.vu0.vf[1].w[0]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.vf[1].w[1]);
    vu::mulbc(c.vu0, 14u, 10u, 10u, c.vu0.vf[1].w[2]);
    vu::abs(c.vu0, 14u, 8u, 8u);
    vu::abs(c.vu0, 14u, 9u, 9u);
    vu::abs(c.vu0, 14u, 10u, 10u);
    vu::mulabc(c.vu0, 15u, 8u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 9u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 10u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 2u, 12u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 14u, 1u, 11u, 2u);
    vu::add(c.vu0, 14u, 2u, 11u, 2u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_003A6768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A67F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A67E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1096u)));
    set32(c.r[3], c.r[3].w[0] + 19472u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 36u);
    set32(c.r[12], 0u + 2u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24032u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 26632u);
    set32(c.r[7], c.r[7].w[0] + 26728u);
    set32(c.r[8], c.r[8].w[0] + 26760u);
    set32(c.r[9], c.r[9].w[0] + 26792u);
    set32(c.r[10], c.r[10].w[0] + 26864u);
    set32(c.r[11], c.r[11].w[0] - 24088u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67E0u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A67E0u) [[unlikely]] return; }
L_003A67E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A67FC; } }
L_003A67E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67F8u); set32(c.r[4], c.r[4].w[0] - 24032u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A67F8u) [[unlikely]] return; }
L_003A67F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A67FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6808:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 224u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 224u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6844u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6844u) [[unlikely]] return; }
L_003A6844:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6854u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 161u, depth + 1u); else { c.pc = 0x003A5CE8u; return; } if (c.pc != 0x003A6854u) [[unlikely]] return; }
L_003A6854:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6878u);  if (depth < kMaxDepth) unit_00A9(c, 166u, depth + 1u); else { c.pc = 0x003A5E40u; return; } if (c.pc != 0x003A6878u) [[unlikely]] return; }
L_003A6878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6898u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A6898u) [[unlikely]] return; }
L_003A6898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A68A8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A68E4; } }
    st32((c.r[5].w[0] + 4u), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 1104u));
    set32(c.r[3], c.r[5].w[0] + 12u);
    st32((c.r[5].w[0] + 12u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    set32(c.r[2], c.r[5].w[0] + 24u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 12;
L_003A68E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A68F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6900u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E3(c, 55u, depth + 1u); else { c.pc = 0x0048C898u; return; } if (c.pc != 0x003A6900u) [[unlikely]] return; }
L_003A6900:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24032u);  c.pc = t; return; }
L_003A6920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6934u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 188u, depth + 1u); else { c.pc = 0x003A6768u; return; } if (c.pc != 0x003A6934u) [[unlikely]] return; }
L_003A6934:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6954u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 188u, depth + 1u); else { c.pc = 0x003A6768u; return; } if (c.pc != 0x003A6954u) [[unlikely]] return; }
L_003A6954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 32000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[17].w[0] + 12u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A69F8; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
L_003A69A8:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A69E4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A69E4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A69E4u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A69E4u) [[unlikely]] return; }
L_003A69E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A69A8u | kUnwind; return; } goto L_003A69A8; }
L_003A69F8:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A6A28; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A28u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6A28u) [[unlikely]] return; }
L_003A6A28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 28u, depth + 1u); else { c.pc = 0x0048C4A8u; return; } if (c.pc != 0x003A6A34u) [[unlikely]] return; }
L_003A6A34:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A6A64; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A64u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6A64u) [[unlikely]] return; }
L_003A6A64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A6A80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AACu); set32(c.r[17], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003A4430u; return; } if (c.pc != 0x003A6AACu) [[unlikely]] return; }
L_003A6AAC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A6AE4; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AE4u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A6AE4u) [[unlikely]] return; }
L_003A6AE4:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[17], c.r[19].w[0] + 20u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A6B14; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B14u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A6B14u) [[unlikely]] return; }
L_003A6B14:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003A6B64; } }
L_003A6B20:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[8].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6B20u | kUnwind; return; } goto L_003A6B20; } }
L_003A6B64:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A6B88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 32000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[16].w[0] + 24u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BD8u); st32((c.r[8].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A9(c, 224u, depth + 1u); else { c.pc = 0x003A6CF8u; return; } if (c.pc != 0x003A6BD8u) [[unlikely]] return; }
L_003A6BD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 31264u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[16].w[0] + 24u);
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 32000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[5], ld32((c.r[8].w[0] + 8u)));  if (t) { goto L_003A6C60; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 1;
L_003A6C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 224u, depth + 1u); else { c.pc = 0x003A6CF8u; return; } if (c.pc != 0x003A6C68u) [[unlikely]] return; }
L_003A6C68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C9Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A6C9Cu) [[unlikely]] return; }
L_003A6C9C:
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[7].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003A6CE8; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A6CE4; } }
    c.budget -= 1;
L_003A6CB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6CB8u | kUnwind; return; } goto L_003A6CB8; } }
L_003A6CE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003A6CE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6CF8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A6D58; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 8u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D58u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A6D58u) [[unlikely]] return; }
L_003A6D58:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A6DC4; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_003A6D70:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A6DB0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003A6D9C; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 1;
L_003A6D9C:
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003A6DB0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6D70u | kUnwind; return; } goto L_003A6D70; } }
L_003A6DC4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A6DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 10u);  c.pc = t; return; }
L_003A6DF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    set32(c.r[20], c.r[18].w[0] + 12u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[17], 0u + 1u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E44u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6E44u) [[unlikely]] return; }
L_003A6E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_003A6EA4; } }
    c.budget -= 1;
L_003A6E50:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E80u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6E80u) [[unlikely]] return; }
L_003A6E80:
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mini(c.vu0, 15u, 1u, 1u, 3u);
    vu::max(c.vu0, 15u, 2u, 2u, 4u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 9;
L_003A6EA4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6E50u | kUnwind; return; } goto L_003A6E50; }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A6ED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003A6EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A6EE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];  c.pc = t; return; }
L_003A6F08:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003A6F20:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  c.pc = t; return; }
L_003A6F38:
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 2;
L_003A6F40:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003A6F58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A6F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A6FF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A6FE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1092u)));
    set32(c.r[3], c.r[3].w[0] + 19552u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[12], 0u + 2u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23976u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 28672u);
    set32(c.r[7], c.r[7].w[0] + 28768u);
    set32(c.r[8], c.r[8].w[0] + 28800u);
    set32(c.r[9], c.r[9].w[0] + 28832u);
    set32(c.r[10], c.r[10].w[0] + 28888u);
    set32(c.r[11], c.r[11].w[0] - 23472u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6FD8u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A6FD8u) [[unlikely]] return; }
L_003A6FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A6FF4; } }
L_003A6FE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6FF0u); set32(c.r[4], c.r[4].w[0] - 23976u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A6FF0u) [[unlikely]] return; }
L_003A6FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A6FF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 56u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 56u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A703Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A703Cu) [[unlikely]] return; }
L_003A703C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A704Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 219u, depth + 1u); else { c.pc = 0x003A6BF0u; return; } if (c.pc != 0x003A704Cu) [[unlikely]] return; }
L_003A704C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7070u);  if (depth < kMaxDepth) unit_00A9(c, 212u, depth + 1u); else { c.pc = 0x003A6A80u; return; } if (c.pc != 0x003A7070u) [[unlikely]] return; }
L_003A7070:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7090u);  if (depth < kMaxDepth) unit_00A9(c, 221u, depth + 1u); else { c.pc = 0x003A6C80u; return; } if (c.pc != 0x003A7090u) [[unlikely]] return; }
L_003A7090:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A70A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 8u);  if (t) { goto L_003A70D0; } }
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 20u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
L_003A70D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A70D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E3(c, 59u, depth + 1u); else { c.pc = 0x0048C938u; return; } if (c.pc != 0x003A70E8u) [[unlikely]] return; }
L_003A70E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A70F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23976u);  c.pc = t; return; }
L_003A7108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A711Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 240u, depth + 1u); else { c.pc = 0x003A6F60u; return; } if (c.pc != 0x003A711Cu) [[unlikely]] return; }
L_003A711C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A713Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A9(c, 240u, depth + 1u); else { c.pc = 0x003A6F60u; return; } if (c.pc != 0x003A713Cu) [[unlikely]] return; }
L_003A713C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7148:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 31264u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[18].w[0] + 52u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 40u);
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 32152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 28;
L_003A71B8:
    st32((c.r[6].w[0] + 32u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 40u), 0u);
    st32((c.r[6].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 36u), 0u);
    st32((c.r[6].w[0] + 28u), 0u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A71B8u | kUnwind; return; } goto L_003A71B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[17], c.r[18].w[0] + 40u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A7220; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7220u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[19].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7220u) [[unlikely]] return; }
L_003A7220:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A730C; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A7230:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 48u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 55;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7230u | kUnwind; return; } goto L_003A7230; } }
L_003A730C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A7338:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7364u); set32(c.r[18], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003A4430u; return; } if (c.pc != 0x003A7364u) [[unlikely]] return; }
L_003A7364:
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[17].w[0] + 8u), c.f[0]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A73B0; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73B0u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A73B0u) [[unlikely]] return; }
L_003A73B0:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[18], c.r[17].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003A73E8; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73E8u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A73E8u) [[unlikely]] return; }
L_003A73E8:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[18], c.r[17].w[0] + 60u);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A7420; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7420u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7420u) [[unlikely]] return; }
L_003A7420:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 72u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A7450; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7450u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7450u) [[unlikely]] return; }
L_003A7450:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 84u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A7480; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7480u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7480u) [[unlikely]] return; }
L_003A7480:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 96u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A74B0; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74B0u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A74B0u) [[unlikely]] return; }
L_003A74B0:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 108u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A74E0; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74E0u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A74E0u) [[unlikely]] return; }
L_003A74E0:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 120u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A7510; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7510u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7510u) [[unlikely]] return; }
L_003A7510:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 132u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A7540; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7540u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7540u) [[unlikely]] return; }
L_003A7540:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 144u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A7570; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7570u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7570u) [[unlikely]] return; }
L_003A7570:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 156u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A75A0; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75A0u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A75A0u) [[unlikely]] return; }
L_003A75A0:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[18], c.r[17].w[0] + 168u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A75D0; } }
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75D0u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A75D0u) [[unlikely]] return; }
L_003A75D0:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A76E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[2].w[0] - 17168u);
    c.budget -= 3;
L_003A75E8:
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 56;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003A76D8; } }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_003A76D8:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A75E8u | kUnwind; return; } goto L_003A75E8; } }
L_003A76E4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A7708:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 416u), c.f[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[17].w[0] + 40u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 48u);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    set32(c.r[21], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x26900000u);
    c.r[1].d[0] = c.r[1].d[0] | 7548ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 20;
L_003A7758:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[21].w[0] - c.r[4].w[0]);
    set32(c.r[7], c.r[16].w[0] >> (c.r[6].w[0] & 31u));
    set32(c.r[4], c.r[18].w[0] >> (c.r[4].w[0] & 31u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_003A7790; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 2;
L_003A7790:
    set32(c.r[2], c.r[16].w[0] >> (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A7818; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77B8u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A77B8u) [[unlikely]] return; }
L_003A77B8:
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 3u);
    vu::opmula(c.vu0, 2u, 1u);
    vu::opmsub(c.vu0, 2u, 1u, 2u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 4u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[4].w[2]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.vu0.vf[2]);
    c.r[2] = c.vu0.vf[4];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 22;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7758u | kUnwind; return; } goto L_003A7758; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A7820; } }
L_003A7818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_003A7820:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.f[20] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_003A7848:
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 48u);
    set32(c.r[4], ld32((c.r[11].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[8], ld32((c.r[11].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], 0u - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[5].w[0] >> (c.r[3].w[0] & 31u));
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[8].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 16u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A78D0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_003A790C; } }
L_003A78D0:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[2].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 15;
L_003A790C:
    c.f[5] = ld32((c.r[11].w[0] + 16u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = ld32((c.r[11].w[0] + 20u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[3] = ld32((c.r[11].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32664u);
    c.f[2] = ld32((c.r[8].w[0] + 8u));
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[6] = ld32((c.r[11].w[0] + 32u));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[2] = ld32((c.r[10].w[0] + 4u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = fp::mul(c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[5]);
    st32((c.r[29].w[0] + 52u), c.f[4]);
    st32((c.r[9].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[9].w[0] + 12u), c.f[6]);
    st32((c.r[9].w[0] + 4u), c.r[6].w[0]);
    st128((c.r[9].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[9].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[9].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 53;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A79E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.f[0] = ld32((c.r[3].w[0] + 19576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 19580u));
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[4], c.r[19].w[0] + 40u);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 36;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A7C70; } }
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 48u);
    c.budget -= 2;
L_003A7A78:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[23], c.r[5].w[0] + 1u);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003A7C5C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_003A7A98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003A7AD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 2u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_003A7B08; } }
L_003A7AD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[2].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 12;
L_003A7B08:
    set32(c.r[18], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[4] = ld32((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B60u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00C2(c, 195u, depth + 1u); else { c.pc = 0x0040A680u; return; } if (c.pc != 0x003A7B60u) [[unlikely]] return; }
L_003A7B60:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    vu::mini(c.vu0, 15u, 2u, 2u, 3u);
    vu::max(c.vu0, 15u, 1u, 1u, 3u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[5] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[2] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BC8u); st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00C2(c, 195u, depth + 1u); else { c.pc = 0x0040A680u; return; } if (c.pc != 0x003A7BC8u) [[unlikely]] return; }
L_003A7BC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mini(c.vu0, 15u, 2u, 2u, 3u);
    vu::max(c.vu0, 15u, 1u, 1u, 3u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[5] = ld32((c.r[20].w[0] + 8u));
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[2] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C30u); st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00C2(c, 195u, depth + 1u); else { c.pc = 0x0040A680u; return; } if (c.pc != 0x003A7C30u) [[unlikely]] return; }
L_003A7C30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mini(c.vu0, 15u, 3u, 3u, 1u);
    vu::max(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7A98u | kUnwind; return; } goto L_003A7A98; }
L_003A7C5C:
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7A78u | kUnwind; return; } goto L_003A7A78; } }
L_003A7C70:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[2] = c.r[2];
    vu::addabc(c.vu0, 15u, 0u, c.vu0.vf[2].w[0]);
    vu::msubbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[0].w[3]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    vu::sub(c.vu0, 15u, 3u, 3u, 2u);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003A7CD8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 32152u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[8].w[0] + 52u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[8].w[0] + 40u);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    st32((c.r[8].w[0] + 8u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0] + 40u), c.r[7].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 18;
L_003A7D20:
    st32((c.r[7].w[0] + 32u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 40u), 0u);
    st32((c.r[7].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 36u), 0u);
    st32((c.r[7].w[0] + 28u), 0u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[7].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7D20u | kUnwind; return; } goto L_003A7D20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    st32((c.r[8].w[0] + 32u), c.f[1]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 36u), c.r[5].w[0]);  c.pc = t; return; }
L_003A7D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 11u);  c.pc = t; return; }
L_003A7D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A7D88:
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[8], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], 0u - c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[5].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] >> (c.r[6].w[0] & 31u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[6].w[0])));  c.pc = t; return; }
L_003A7DE0:
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003A7DE8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[19].w[0] + 40u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A7E48; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7E48u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003A7E48u) [[unlikely]] return; }
L_003A7E48:
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    ldl(c.r[2], (c.r[20].w[0] + 7u));
    ldr(c.r[2], (c.r[20].w[0]));
    ldl(c.r[3], (c.r[20].w[0] + 15u));
    ldr(c.r[3], (c.r[20].w[0] + 8u));
    ldl(c.r[5], (c.r[20].w[0] + 23u));
    ldr(c.r[5], (c.r[20].w[0] + 16u));
    ldl(c.r[6], (c.r[20].w[0] + 31u));
    ldr(c.r[6], (c.r[20].w[0] + 24u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    sdl(c.r[5], (c.r[4].w[0] + 23u));
    sdr(c.r[5], (c.r[4].w[0] + 16u));
    sdl(c.r[6], (c.r[4].w[0] + 31u));
    sdr(c.r[6], (c.r[4].w[0] + 24u));
    ldl(c.r[2], (c.r[20].w[0] + 39u));
    ldr(c.r[2], (c.r[20].w[0] + 32u));
    ldl(c.r[3], (c.r[20].w[0] + 47u));
    ldr(c.r[3], (c.r[20].w[0] + 40u));
    sdl(c.r[2], (c.r[4].w[0] + 39u));
    sdr(c.r[2], (c.r[4].w[0] + 32u));
    sdl(c.r[3], (c.r[4].w[0] + 47u));
    sdr(c.r[3], (c.r[4].w[0] + 40u));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);  if (t) { goto L_003A7EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 17168u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 6;
L_003A7EE0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A7F00:
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { [[clang::musttail]] return unit_00AA(c, 2u, depth); } }
    st32((c.r[13].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[13].w[0] + 36u), 0u);
    set32(c.r[2], c.r[13].w[0] + 36u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[13].w[0] + 48u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[5], c.r[13].w[0] + 60u);
    st32((c.r[13].w[0] + 48u), 0u);
    set32(c.r[2], c.r[13].w[0] + 72u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[13].w[0] + 84u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[7], c.r[13].w[0] + 96u);
    st32((c.r[13].w[0] + 60u), 0u);
    set32(c.r[4], c.r[13].w[0] + 108u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[8], c.r[13].w[0] + 120u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[9], c.r[13].w[0] + 132u);
    st32((c.r[13].w[0] + 72u), 0u);
    set32(c.r[5], c.r[13].w[0] + 144u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[10], c.r[13].w[0] + 156u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[11], c.r[13].w[0] + 168u);
    st32((c.r[13].w[0] + 84u), 0u);
    set32(c.r[12], 0u + 12u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 96u), 0u);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 120u), 0u);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 132u), 0u);
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[9].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 156u), 0u);
    st32((c.r[10].w[0] + 4u), 0u);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[13].w[0] + 168u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[11].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[11].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 61;
    [[clang::musttail]] return unit_00AA(c, 1u, depth);
}

}
