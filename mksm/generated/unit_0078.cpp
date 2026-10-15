#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E000C;
    case 3u: goto L_002E0044;
    case 4u: goto L_002E0068;
    case 5u: goto L_002E0088;
    case 6u: goto L_002E00B8;
    case 7u: goto L_002E00EC;
    case 8u: goto L_002E0130;
    case 9u: goto L_002E0140;
    case 10u: goto L_002E0150;
    case 11u: goto L_002E0160;
    case 12u: goto L_002E0170;
    case 13u: goto L_002E0180;
    case 14u: goto L_002E01A0;
    case 15u: goto L_002E01B0;
    case 16u: goto L_002E01C0;
    case 17u: goto L_002E01D0;
    case 18u: goto L_002E01E0;
    case 19u: goto L_002E01F8;
    case 20u: goto L_002E0218;
    case 21u: goto L_002E0224;
    case 22u: goto L_002E0270;
    case 23u: goto L_002E029C;
    case 24u: goto L_002E02A0;
    case 25u: goto L_002E02AC;
    case 26u: goto L_002E02D0;
    case 27u: goto L_002E02E4;
    case 28u: goto L_002E02F0;
    case 29u: goto L_002E0310;
    case 30u: goto L_002E0330;
    case 31u: goto L_002E0358;
    case 32u: goto L_002E0364;
    case 33u: goto L_002E0388;
    case 34u: goto L_002E039C;
    case 35u: goto L_002E03A8;
    case 36u: goto L_002E03D8;
    case 37u: goto L_002E0400;
    case 38u: goto L_002E0504;
    case 39u: goto L_002E052C;
    case 40u: goto L_002E054C;
    case 41u: goto L_002E0568;
    case 42u: goto L_002E0590;
    case 43u: goto L_002E05C4;
    case 44u: goto L_002E05F0;
    case 45u: goto L_002E0610;
    case 46u: goto L_002E0658;
    case 47u: goto L_002E0690;
    case 48u: goto L_002E06A0;
    case 49u: goto L_002E06E0;
    case 50u: goto L_002E0710;
    case 51u: goto L_002E0734;
    case 52u: goto L_002E0788;
    case 53u: goto L_002E0790;
    case 54u: goto L_002E07B0;
    case 55u: goto L_002E07C0;
    case 56u: goto L_002E0800;
    case 57u: goto L_002E0894;
    case 58u: goto L_002E08A8;
    case 59u: goto L_002E0930;
    case 60u: goto L_002E0980;
    case 61u: goto L_002E09F8;
    case 62u: goto L_002E0A0C;
    case 63u: goto L_002E0A98;
    case 64u: goto L_002E0AD4;
    case 65u: goto L_002E0B20;
    case 66u: goto L_002E0B64;
    case 67u: goto L_002E0B80;
    case 68u: goto L_002E0B90;
    case 69u: goto L_002E0BB0;
    case 70u: goto L_002E0BBC;
    case 71u: goto L_002E0C10;
    case 72u: goto L_002E0C98;
    case 73u: goto L_002E0CA0;
    case 74u: goto L_002E0CB8;
    case 75u: goto L_002E0CD8;
    case 76u: goto L_002E0CF0;
    case 77u: goto L_002E0D08;
    case 78u: goto L_002E0D20;
    case 79u: goto L_002E0D30;
    case 80u: goto L_002E0DD0;
    case 81u: goto L_002E0DF4;
    case 82u: goto L_002E0E34;
    case 83u: goto L_002E0E7C;
    case 84u: goto L_002E0E94;
    case 85u: goto L_002E0EB8;
    case 86u: goto L_002E0F38;
    case 87u: goto L_002E0F78;
    case 88u: goto L_002E0FC8;
    case 89u: goto L_002E1008;
    case 90u: goto L_002E1080;
    case 91u: goto L_002E10E4;
    case 92u: goto L_002E1104;
    case 93u: goto L_002E1130;
    case 94u: goto L_002E1150;
    case 95u: goto L_002E11FC;
    case 96u: goto L_002E1230;
    case 97u: goto L_002E1264;
    case 98u: goto L_002E12A0;
    case 99u: goto L_002E1490;
    case 100u: goto L_002E14A4;
    case 101u: goto L_002E14F0;
    case 102u: goto L_002E1520;
    case 103u: goto L_002E1568;
    case 104u: goto L_002E15B0;
    case 105u: goto L_002E15C8;
    case 106u: goto L_002E1600;
    case 107u: goto L_002E160C;
    case 108u: goto L_002E1654;
    case 109u: goto L_002E1694;
    case 110u: goto L_002E16C0;
    case 111u: goto L_002E16E0;
    case 112u: goto L_002E16F4;
    case 113u: goto L_002E1790;
    case 114u: goto L_002E17FC;
    case 115u: goto L_002E1808;
    case 116u: goto L_002E181C;
    case 117u: goto L_002E182C;
    case 118u: goto L_002E184C;
    case 119u: goto L_002E1884;
    case 120u: goto L_002E18C0;
    case 121u: goto L_002E18CC;
    case 122u: goto L_002E18DC;
    case 123u: goto L_002E18EC;
    case 124u: goto L_002E1928;
    case 125u: goto L_002E1934;
    case 126u: goto L_002E1944;
    case 127u: goto L_002E1970;
    case 128u: goto L_002E1980;
    case 129u: goto L_002E198C;
    case 130u: goto L_002E19AC;
    case 131u: goto L_002E19BC;
    case 132u: goto L_002E19D0;
    case 133u: goto L_002E19D8;
    case 134u: goto L_002E1A00;
    case 135u: goto L_002E1A64;
    case 136u: goto L_002E1AA0;
    case 137u: goto L_002E1AAC;
    case 138u: goto L_002E1AC8;
    case 139u: goto L_002E1AE8;
    case 140u: goto L_002E1B0C;
    case 141u: goto L_002E1B1C;
    case 142u: goto L_002E1B2C;
    case 143u: goto L_002E1B34;
    case 144u: goto L_002E1B4C;
    case 145u: goto L_002E1B78;
    case 146u: goto L_002E1B8C;
    case 147u: goto L_002E1BA8;
    case 148u: goto L_002E1BB0;
    case 149u: goto L_002E1BDC;
    case 150u: goto L_002E1BF4;
    case 151u: goto L_002E1C04;
    case 152u: goto L_002E1C0C;
    case 153u: goto L_002E1C18;
    case 154u: goto L_002E1C50;
    case 155u: goto L_002E1C68;
    case 156u: goto L_002E1C78;
    case 157u: goto L_002E1CD8;
    case 158u: goto L_002E1DF0;
    case 159u: goto L_002E1E28;
    case 160u: goto L_002E1F08;
    case 161u: goto L_002E1F8C;
    case 162u: goto L_002E1FAC;
    case 163u: goto L_002E1FE0;
    case 164u: goto L_002E2050;
    case 165u: goto L_002E207C;
    case 166u: goto L_002E20E0;
    case 167u: goto L_002E215C;
    case 168u: goto L_002E218C;
    case 169u: goto L_002E21A4;
    case 170u: goto L_002E21D0;
    case 171u: goto L_002E21EC;
    case 172u: goto L_002E2214;
    case 173u: goto L_002E222C;
    case 174u: goto L_002E2240;
    case 175u: goto L_002E2280;
    case 176u: goto L_002E22E0;
    case 177u: goto L_002E2304;
    case 178u: goto L_002E23E8;
    case 179u: goto L_002E2408;
    case 180u: goto L_002E2420;
    case 181u: goto L_002E2474;
    case 182u: goto L_002E24AC;
    case 183u: goto L_002E24B8;
    case 184u: goto L_002E24F4;
    case 185u: goto L_002E2500;
    case 186u: goto L_002E252C;
    case 187u: goto L_002E255C;
    case 188u: goto L_002E25A4;
    case 189u: goto L_002E25BC;
    case 190u: goto L_002E25E4;
    case 191u: goto L_002E25F4;
    case 192u: goto L_002E261C;
    case 193u: goto L_002E2644;
    case 194u: goto L_002E2664;
    case 195u: goto L_002E26A0;
    case 196u: goto L_002E270C;
    case 197u: goto L_002E2750;
    case 198u: goto L_002E279C;
    case 199u: goto L_002E27B0;
    case 200u: goto L_002E2900;
    case 201u: goto L_002E2914;
    case 202u: goto L_002E295C;
    case 203u: goto L_002E2968;
    case 204u: goto L_002E29D8;
    case 205u: goto L_002E29F4;
    case 206u: goto L_002E2A14;
    case 207u: goto L_002E2A30;
    case 208u: goto L_002E2A70;
    case 209u: goto L_002E2B20;
    case 210u: goto L_002E2B2C;
    case 211u: goto L_002E2B88;
    case 212u: goto L_002E2BA4;
    case 213u: goto L_002E2BC4;
    case 214u: goto L_002E2BE0;
    case 215u: goto L_002E2C04;
    case 216u: goto L_002E2C98;
    case 217u: goto L_002E2CC4;
    case 218u: goto L_002E2CE8;
    case 219u: goto L_002E2D30;
    case 220u: goto L_002E2D8C;
    case 221u: goto L_002E2D9C;
    case 222u: goto L_002E2DC0;
    case 223u: goto L_002E2DFC;
    case 224u: goto L_002E2E28;
    case 225u: goto L_002E2E68;
    case 226u: goto L_002E2ECC;
    case 227u: goto L_002E2F20;
    case 228u: goto L_002E3058;
    case 229u: goto L_002E307C;
    case 230u: goto L_002E30B8;
    case 231u: goto L_002E30DC;
    case 232u: goto L_002E3120;
    case 233u: goto L_002E314C;
    case 234u: goto L_002E315C;
    case 235u: goto L_002E3188;
    case 236u: goto L_002E31F4;
    case 237u: goto L_002E32E0;
    case 238u: goto L_002E3308;
    case 239u: goto L_002E3358;
    case 240u: goto L_002E33A0;
    case 241u: goto L_002E33C0;
    case 242u: goto L_002E3400;
    case 243u: goto L_002E3410;
    case 244u: goto L_002E3464;
    case 245u: goto L_002E34A8;
    case 246u: goto L_002E34C4;
    case 247u: goto L_002E34F4;
    case 248u: goto L_002E352C;
    case 249u: goto L_002E3550;
    case 250u: goto L_002E3580;
    case 251u: goto L_002E35A4;
    case 252u: goto L_002E35E0;
    case 253u: goto L_002E35F0;
    case 254u: goto L_002E361C;
    case 255u: goto L_002E369C;
    case 256u: goto L_002E36C8;
    case 257u: goto L_002E3788;
    case 258u: goto L_002E37C8;
    case 259u: goto L_002E38D0;
    case 260u: goto L_002E38F4;
    case 261u: goto L_002E3930;
    case 262u: goto L_002E3948;
    case 263u: goto L_002E399C;
    case 264u: goto L_002E39C0;
    case 265u: goto L_002E39D8;
    case 266u: goto L_002E3A18;
    case 267u: goto L_002E3A28;
    case 268u: goto L_002E3A60;
    case 269u: goto L_002E3AC0;
    case 270u: goto L_002E3AF8;
    case 271u: goto L_002E3B34;
    case 272u: goto L_002E3B58;
    case 273u: goto L_002E3B70;
    case 274u: goto L_002E3BB0;
    case 275u: goto L_002E3BC0;
    case 276u: goto L_002E3C04;
    case 277u: goto L_002E3C8C;
    case 278u: goto L_002E3CA4;
    case 279u: goto L_002E3CC4;
    case 280u: goto L_002E3CDC;
    case 281u: goto L_002E3CF0;
    case 282u: goto L_002E3D14;
    case 283u: goto L_002E3D28;
    case 284u: goto L_002E3D68;
    case 285u: goto L_002E3DA0;
    case 286u: goto L_002E3DB0;
    case 287u: goto L_002E3DF8;
    case 288u: goto L_002E3E0C;
    case 289u: goto L_002E3E80;
    case 290u: goto L_002E3E9C;
    case 291u: goto L_002E3ED0;
    case 292u: goto L_002E3F40;
    case 293u: goto L_002E3FA0;
    case 294u: goto L_002E3FC8;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0088; } }
L_002E000C:
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_002E0024; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0048; } }
L_002E0024:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], 0u + 3900u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0044u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0044u) [[unlikely]] return; }
L_002E0044:
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 1;
L_002E0048:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E0088; } }
    c.r[17].d[0] = c.r[17].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0068u);  if (depth < kMaxDepth) unit_0078(c, 68u, depth + 1u); else { c.pc = 0x002E0B90u; return; } if (c.pc != 0x002E0068u) [[unlikely]] return; }
L_002E0068:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E0084; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0088; } }
L_002E0084:
    st32((c.r[16].w[0] + 124u), c.r[17].w[0]);
    c.budget -= 1;
L_002E0088:
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
L_002E00B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002E0118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0118; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[16], c.r[16].w[0] - 4576u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00ECu);  if (depth < kMaxDepth) unit_005A(c, 32u, depth + 1u); else { c.pc = 0x00268600u; return; } if (c.pc != 0x002E00ECu) [[unlikely]] return; }
L_002E00EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[4].w[0] - 31088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 23856u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] - 31088u), c.f[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 11;
L_002E0118:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0130:
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0140:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0150:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0160:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0170:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0180:
    set32(c.r[2], c.r[5].w[0] - 20u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x95660000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 9007ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E01A0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E01B0:
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E01C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E01D0:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E01E0:
    set32(c.r[3], 0u + 3900u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E01F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 20u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 8;
L_002E0218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0224u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0224u) [[unlikely]] return; }
L_002E0224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002E0238; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0250; } }
L_002E0238:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 3900u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0218u | kUnwind; return; } goto L_002E0218; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0250:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[17].w[0] + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E029Cu);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DEB68u; return; } if (c.pc != 0x002E029Cu) [[unlikely]] return; }
L_002E029C:
    set32(c.r[18], 0u + 9u);
    c.budget -= 1;
L_002E02A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02ACu);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E02ACu) [[unlikely]] return; }
L_002E02AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002E02F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E02F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02D0u);  if (depth < kMaxDepth) unit_0077(c, 200u, depth + 1u); else { c.pc = 0x002DED50u; return; } if (c.pc != 0x002E02D0u) [[unlikely]] return; }
L_002E02D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E02F0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02E4u);  if (depth < kMaxDepth) unit_0059(c, 242u, depth + 1u); else { c.pc = 0x00267EE0u; return; } if (c.pc != 0x002E02E4u) [[unlikely]] return; }
L_002E02E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02F0u);  if (depth < kMaxDepth) unit_0078(c, 67u, depth + 1u); else { c.pc = 0x002E0B80u; return; } if (c.pc != 0x002E02F0u) [[unlikely]] return; }
L_002E02F0:
    set32(c.r[16], c.r[16].w[0] + 3900u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E02A0u | kUnwind; return; } goto L_002E02A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 23136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0310u);  if (depth < kMaxDepth) unit_0074(c, 325u, depth + 1u); else { c.pc = 0x002D38F0u; return; } if (c.pc != 0x002E0310u) [[unlikely]] return; }
L_002E0310:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[17].w[0] + 20u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 10;
L_002E0358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0364u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0364u) [[unlikely]] return; }
L_002E0364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002E03A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E03A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0388u);  if (depth < kMaxDepth) unit_0077(c, 200u, depth + 1u); else { c.pc = 0x002DED50u; return; } if (c.pc != 0x002E0388u) [[unlikely]] return; }
L_002E0388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E03A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E039Cu);  if (depth < kMaxDepth) unit_0059(c, 242u, depth + 1u); else { c.pc = 0x00267EE0u; return; } if (c.pc != 0x002E039Cu) [[unlikely]] return; }
L_002E039C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03A8u);  if (depth < kMaxDepth) unit_0078(c, 67u, depth + 1u); else { c.pc = 0x002E0B80u; return; } if (c.pc != 0x002E03A8u) [[unlikely]] return; }
L_002E03A8:
    set32(c.r[16], c.r[16].w[0] + 3900u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0358u | kUnwind; return; } goto L_002E0358; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E03D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 4564u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E03F8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.budget -= 1;
L_002E03F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0400:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 4564u)));
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 1056u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 1136u), c.f[20]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E0444; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_002E0444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E0484; } }
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[2] = ld32((c.r[16].w[0] + 140u));
    c.f[3] = ld32((c.r[16].w[0] + 144u));
    c.f[4] = ld32((c.r[16].w[0] + 148u));
    c.f[5] = ld32((c.r[16].w[0] + 152u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    st32((c.r[29].w[0] + 656u), c.f[3]);
    st32((c.r[29].w[0] + 660u), c.f[4]);
    st32((c.r[29].w[0] + 664u), c.f[5]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E052C; } }
L_002E0484:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E04E4; } }
    set32(c.r[2], 0u - c.r[5].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 10;
L_002E04E4:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[1]);
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0504u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E0504u) [[unlikely]] return; }
L_002E0504:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[7], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 48u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 528u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E052Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E052Cu) [[unlikely]] return; }
L_002E052C:
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E054Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002E054Cu) [[unlikely]] return; }
L_002E054C:
    c.f[12] = ld32((c.r[29].w[0] + 656u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 660u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 664u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0568u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002E0568u) [[unlikely]] return; }
L_002E0568:
    st32((c.r[16].w[0] + 128u), 0u);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1056u));
    c.f[20] = ld32((c.r[29].w[0] + 1136u));
    set32(c.r[29], c.r[29].w[0] + 1152u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0590:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05C4u);  if (depth < kMaxDepth) unit_0078(c, 49u, depth + 1u); else { c.pc = 0x002E06E0u; return; } if (c.pc != 0x002E05C4u) [[unlikely]] return; }
L_002E05C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E05E0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002E062C; } }
L_002E05E0:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E05F8; } }
L_002E05F0:
    set32(c.r[16], c.r[16].w[0] + 3900u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002E05F8:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E062C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0610u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0610u) [[unlikely]] return; }
L_002E0610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E05F0u | kUnwind; return; } goto L_002E05F0; } }
    st32((c.r[16].w[0] + 120u), c.r[21].w[0]);
    set32(c.r[2], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 116u), c.r[19].w[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_002E062C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0658:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06A0u);  if (depth < kMaxDepth) unit_0078(c, 49u, depth + 1u); else { c.pc = 0x002E06E0u; return; } if (c.pc != 0x002E06A0u) [[unlikely]] return; }
L_002E06A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E06CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E06CC; } }
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 2;
L_002E06CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E06E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 20u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], 0u + 1u);
    c.budget -= 12;
L_002E0710:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002E0748; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002E0748; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0734u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0734u) [[unlikely]] return; }
L_002E0734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002E0748; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0760; } }
L_002E0748:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 3900u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0710u | kUnwind; return; } goto L_002E0710; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0760:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0788:
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], 0u + 9u);
    c.budget -= 2;
L_002E0790:
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[4], c.r[4].w[0] + 3900u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0790u | kUnwind; return; } goto L_002E0790; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E07B0:
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
L_002E07C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002E07E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002E07E8; } }
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 2;
L_002E07E8:
    set32(c.r[4], c.r[4].w[0] + 3900u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E07C0u | kUnwind; return; } goto L_002E07C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[4] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[5]);
    st32((c.r[29].w[0] + 12u), c.f[5]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0894u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002E0894u) [[unlikely]] return; }
L_002E0894:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08A8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002E08A8u) [[unlikely]] return; }
L_002E08A8:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.f[5] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[16].w[0] + 140u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0930:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 3900u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 20u);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0980u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0980u) [[unlikely]] return; }
L_002E0980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E098C; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002E098C:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 12u), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09F8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002E09F8u) [[unlikely]] return; }
L_002E09F8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A0Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002E0A0Cu) [[unlikely]] return; }
L_002E0A0C:
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 140u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0A98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E0B00; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], 0u + 3900u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AD4u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0AD4u) [[unlikely]] return; }
L_002E0AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0B00; } }
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0B00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0B04; } }
L_002E0B00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0B04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_002E0B44; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0B6C; } }
L_002E0B44:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], 0u + 3900u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[16], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B64u);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0B64u) [[unlikely]] return; }
L_002E0B64:
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002E0B6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0B80:
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 20u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_002E0BB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BBCu);  if (depth < kMaxDepth) unit_0078(c, 73u, depth + 1u); else { c.pc = 0x002E0CA0u; return; } if (c.pc != 0x002E0BBCu) [[unlikely]] return; }
L_002E0BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0BDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002E0BDC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0BF4; } }
L_002E0BDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 3900u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0BB0u | kUnwind; return; } goto L_002E0BB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0BF4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0C10:
    set32(c.r[8], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[2], 0u + 268u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 2832u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[6].w[0] + c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] - 14152u);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0CA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0CB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0CB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0CD8; } }
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0CD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0CF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0CF0:
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0D08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D20u);  if (depth < kMaxDepth) unit_0078(c, 6u, depth + 1u); else { c.pc = 0x002E00B8u; return; } if (c.pc != 0x002E0D20u) [[unlikely]] return; }
L_002E0D20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0D30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[2].w[0] - 31064u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[18].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0E94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0E94; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002E0E60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0E14; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E0DE8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DD0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002E0DD0u) [[unlikely]] return; }
L_002E0DD0:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002E0DD8u);  goto L_002E0DDC; }
L_002E0DDC:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0E14; } }
L_002E0DE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DF4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002E0DF4u) [[unlikely]] return; }
L_002E0DF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002E0E00u);  goto L_002E0E04; }
L_002E0E04:
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
L_002E0E14:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0E54; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E34u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002E0E34u) [[unlikely]] return; }
L_002E0E34:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002E0E40u);  goto L_002E0E44; }
L_002E0E44:
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
L_002E0E54:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002E0E60:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002E0E94; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E7Cu);  if (depth < kMaxDepth) unit_0078(c, 90u, depth + 1u); else { c.pc = 0x002E1080u; return; } if (c.pc != 0x002E0E7Cu) [[unlikely]] return; }
L_002E0E7C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E94u);  if (depth < kMaxDepth) unit_0078(c, 85u, depth + 1u); else { c.pc = 0x002E0EB8u; return; } if (c.pc != 0x002E0E94u) [[unlikely]] return; }
L_002E0E94:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] - 31064u);
    set32(c.r[6], c.r[9].w[0] << 6);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[5].w[0] + 32u), 0u);
    c.budget -= 21;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_002E0F14; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 2;
L_002E0F14:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_002E0F50; } }
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], c.r[3].w[0] + 60u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 6;
L_002E0F38:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0F38u | kUnwind; return; } goto L_002E0F38; } }
L_002E0F50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_002E0F6C; } }
    set32(c.r[2], c.r[10].w[0] - 31064u);
    set32(c.r[3], c.r[9].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
L_002E0F6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0F78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] - 31064u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    st32((c.r[12].w[0] + 12u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[12].d[0] + 0ull;
    st32((c.r[13].w[0] + 16u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 20u), c.r[7].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[5].w[0] + 24u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[6].w[0] + 28u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[10].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] - 31064u);
    set32(c.r[7], c.r[8].w[0] << 6);
    set32(c.r[2], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1078; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002E1028; } }
    set32(c.r[2], c.r[9].w[0] + 40u);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002E1008:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002E1078; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1008u | kUnwind; return; } goto L_002E1008; } }
L_002E1028:
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[8].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002E1078; } }
    set32(c.r[4], c.r[8].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] - 31064u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 36u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 11;
L_002E1078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1080:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1108; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[17], c.r[19].w[0] << 6);
    set32(c.r[16], c.r[16].w[0] - 31064u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10E4u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002E10E4u) [[unlikely]] return; }
L_002E10E4:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1104u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002E1104u) [[unlikely]] return; }
L_002E1104:
    st32((c.r[18].w[0] + 7700u), 0u);
    c.budget -= 1;
L_002E1108:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] - 31064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1150:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[17], c.r[3].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1758; } }
    set32(c.r[4], 0u + 40u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7720u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E1758; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { goto L_002E11E8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1200; } }
L_002E11E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11FCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E11FCu) [[unlikely]] return; }
L_002E11FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E1200:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 46u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 44u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[16].w[0] + 600u)));
    c.budget -= 9;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_002E1458; } }
    set32(c.r[30], 0u + 1u);
    set32(c.r[23], 0u - 1u);
    c.budget -= 3;
L_002E1230:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[5], 0u + 92u);
    set32(c.r[8], ld32((c.r[16].w[0] + 600u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[7], c.r[29].w[0] + 4u);
    set32(c.r[2], 0u + 18u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[3].w[0] + 12288u);
    set32(c.r[17], c.r[8].w[0] + c.r[18].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1264u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002E1264u) [[unlikely]] return; }
L_002E1264:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1288; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
L_002E1288:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E12A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12A0u);  if (depth < kMaxDepth) unit_0088(c, 111u, depth + 1u); else { c.pc = 0x003212C8u; return; } if (c.pc != 0x002E12A0u) [[unlikely]] return; }
L_002E12A0:
    set32(c.r[17], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_002E12A4:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 94u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002E12F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10014u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1354; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 644u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[7].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1354; } }
L_002E12F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002E1354; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10014u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[7].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_002E1354; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[2], 0u + 13248u);
    c.lo.d[0] = c.r[4].d[0];
    c.f[1] = 0u;
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E1354; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_002E1354:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1448; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E138C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 4;
L_002E138C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E13C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8938u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E13C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E13C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1448; } }
    st32((c.r[16].w[0] + 624u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1448; } }
L_002E13C4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002E1448; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8938u)));
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1448; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1408; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1448; } }
L_002E1408:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_002E1420; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E1448; } }
L_002E1420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    st32((c.r[29].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1458; } }
L_002E1448:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1230u | kUnwind; return; } goto L_002E1230; } }
L_002E1458:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E1490; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1490u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1490u) [[unlikely]] return; }
L_002E1490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14A4u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x002E14A4u) [[unlikely]] return; }
L_002E14A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E14C4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E14C4; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 10210u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E14C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    st16((c.r[16].w[0] + 8938u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E14E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E14F0; } }
L_002E14E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14F0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E14F0u) [[unlikely]] return; }
L_002E14F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E1510; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1524; } }
L_002E1510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1520u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E1520u) [[unlikely]] return; }
L_002E1520:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E1524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E1558; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 113u));
    st8((c.r[16].w[0] + 10087u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[16].w[0] + 10088u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002E1558:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1568u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1568u) [[unlikely]] return; }
L_002E1568:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 11u)));
    st16((c.r[16].w[0] + 7690u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 7688u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 14u));
    st16((c.r[16].w[0] + 7692u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E15C8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 624u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E15B0u) [[unlikely]] return; }
L_002E15B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E15C8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15C8u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002E15C8u) [[unlikely]] return; }
L_002E15C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 1536u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1524u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E1600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1600u);  if (depth < kMaxDepth) unit_0091(c, 69u, depth + 1u); else { c.pc = 0x00344B30u; return; } if (c.pc != 0x002E1600u) [[unlikely]] return; }
L_002E1600:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E160Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E160Cu) [[unlikely]] return; }
L_002E160C:
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1624; } }
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_002E1624:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E1644; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1658; } }
L_002E1644:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1654u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E1654u) [[unlikely]] return; }
L_002E1654:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E1658:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 70u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E169C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E16C0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1694u) [[unlikely]] return; }
L_002E1694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E16C0; } }
L_002E169C:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16C0u);  if (depth < kMaxDepth) unit_006E(c, 187u, depth + 1u); else { c.pc = 0x002BA9E0u; return; } if (c.pc != 0x002E16C0u) [[unlikely]] return; }
L_002E16C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16E0u);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x002E16E0u) [[unlikely]] return; }
L_002E16E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16F4u);  if (depth < kMaxDepth) unit_0079(c, 190u, depth + 1u); else { c.pc = 0x002E6D40u; return; } if (c.pc != 0x002E16F4u) [[unlikely]] return; }
L_002E16F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 7726u));
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[3], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[6], c.r[5].w[0] << 16);
    st32((c.r[16].w[0] + 540u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[3].d[0]);
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 536u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 7724u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E1744; } }
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E174C; } }
L_002E1744:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E174C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E175C; } }
L_002E1758:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E175C:
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
L_002E1790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    st8((c.r[18].w[0] + 10276u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(211ll) ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1C18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23328u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E17FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1808u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x001688F0u; return; } if (c.pc != 0x002E1808u) [[unlikely]] return; }
L_002E1808:
    c.f[0] = ld32((c.r[18].w[0] + 12872u));
    st32((c.r[18].w[0] + 13128u), 0u);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E181C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 82u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1C94; } }
L_002E182C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], 0u + 16u);
    st8((c.r[18].w[0] + 9924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E184Cu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E184Cu) [[unlikely]] return; }
L_002E184C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[5], 0u + 175u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[18].w[0] + 7700u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1884:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 692u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18C0u);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x002E18C0u) [[unlikely]] return; }
L_002E18C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18CCu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E18CCu) [[unlikely]] return; }
L_002E18CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18DCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E18DCu) [[unlikely]] return; }
L_002E18DC:
    set32(c.r[2], 0u + 173u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E18EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 36u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1928u);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x002E1928u) [[unlikely]] return; }
L_002E1928:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1934u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1934u) [[unlikely]] return; }
L_002E1934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1944u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E1944u) [[unlikely]] return; }
L_002E1944:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    set32(c.r[4], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 9u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1970:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1980u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1980u) [[unlikely]] return; }
L_002E1980:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E198Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E198Cu) [[unlikely]] return; }
L_002E198C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19ACu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002E19ACu) [[unlikely]] return; }
L_002E19AC:
    st16((c.r[2].w[0] + 916u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 7700u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E19BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 169u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19D0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E19D0u) [[unlikely]] return; }
L_002E19D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1CA8; } }
L_002E19D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1A6C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A00u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E1A00u) [[unlikely]] return; }
L_002E1A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1A6C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1A6C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1A38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1A50; } }
L_002E1A38:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14656u);
    c.budget -= 3;
L_002E1A50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A64u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E1A64u) [[unlikely]] return; }
L_002E1A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1CA8; } }
L_002E1A6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 13076u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1CA8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14656u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AA0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E1AA0u) [[unlikely]] return; }
L_002E1AA0:
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1AAC:
    c.f[0] = ld32((c.r[18].w[0] + 12920u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[0];
    st32((c.r[18].w[0] + 148u), c.f[0]);
    st32((c.r[18].w[0] + 12916u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AC8u);  if (depth < kMaxDepth) unit_003B(c, 272u, depth + 1u); else { c.pc = 0x001EF1D8u; return; } if (c.pc != 0x002E1AC8u) [[unlikely]] return; }
L_002E1AC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 13076u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1CA8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AE8u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1AE8u) [[unlikely]] return; }
L_002E1AE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14656u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B0Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E1B0Cu) [[unlikely]] return; }
L_002E1B0C:
    set32(c.r[2], 0u + 118u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1B1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B2Cu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1B2Cu) [[unlikely]] return; }
L_002E1B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1CA8; } }
L_002E1B34:
    set32(c.r[3], ld32((c.r[18].w[0] + 13076u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AA0u | kUnwind; return; } goto L_002E1AA0; } }
L_002E1B4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1CA8; } }
    c.f[0] = ld32((c.r[18].w[0] + 11316u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[18].w[0] + 148u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[18].w[0] + 11360u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B78u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1B78u) [[unlikely]] return; }
L_002E1B78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 10056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B8Cu);  if (depth < kMaxDepth) unit_006F(c, 34u, depth + 1u); else { c.pc = 0x002BC818u; return; } if (c.pc != 0x002E1B8Cu) [[unlikely]] return; }
L_002E1B8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[0];
    set32(c.r[7], ld32((c.r[4].w[0] + 13080u)));
    set32(c.r[5], 0u + 82u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BA8u);  if (depth < kMaxDepth) unit_006F(c, 66u, depth + 1u); else { c.pc = 0x002BCEA8u; return; } if (c.pc != 0x002E1BA8u) [[unlikely]] return; }
L_002E1BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1BB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[5], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 596u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BDCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E1BDCu) [[unlikely]] return; }
L_002E1BDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 149u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BF4u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1BF4u) [[unlikely]] return; }
L_002E1BF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 149u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C04u);  if (depth < kMaxDepth) unit_0033(c, 115u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x002E1C04u) [[unlikely]] return; }
L_002E1C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1C0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1C98; } }
L_002E1C18:
    set32(c.r[3], ld32((c.r[18].w[0] + 12840u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1C7C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[16], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 1524u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C50u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1C50u) [[unlikely]] return; }
L_002E1C50:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C68u);  if (depth < kMaxDepth) unit_008E(c, 289u, depth + 1u); else { c.pc = 0x0033B270u; return; } if (c.pc != 0x002E1C68u) [[unlikely]] return; }
L_002E1C68:
    st32((c.r[18].w[0] + 12840u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C78u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x002E1C78u) [[unlikely]] return; }
L_002E1C78:
    st32((c.r[16].w[0] + 132u), 0u);
    c.budget -= 1;
L_002E1C7C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1CA8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_002E1C94:
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 1;
L_002E1C98:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1CA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11024u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E1CF4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1CE0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 138u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CD8u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E1CD8u) [[unlikely]] return; }
L_002E1CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1CE0:
    set32(c.r[2], 0u + 138u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AA0u | kUnwind; return; } goto L_002E1AA0; } }
L_002E1CF4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u - 65u);
    st16((c.r[18].w[0] + 10240u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    set32(c.r[5], 0u + 880u);
    st32((c.r[4].w[0] + 23952u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] - 4440u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002E1D6C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10226u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[18].w[0] + 10226u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1D6C; } }
    st16((c.r[18].w[0] + 10226u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E1D6C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1E94; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[2], 0u + 880u);
    set32(c.r[17], c.r[20].w[0] - 4440u);
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 484u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002E1E64; } }
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[20], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[3].w[0] + 500u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7710u)));
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002E1DF0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DF0u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E1DF0u) [[unlikely]] return; }
L_002E1DF0:
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 476u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E28u);  if (depth < kMaxDepth) unit_007C(c, 172u, depth + 1u); else { c.pc = 0x002F2F68u; return; } if (c.pc != 0x002E1E28u) [[unlikely]] return; }
L_002E1E28:
    st16((c.r[18].w[0] + 7712u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[3], 0u + 1u);
    st16((c.r[18].w[0] + 7710u), static_cast<std::uint16_t>(c.r[23].w[0]));
    st16((c.r[16].w[0] + 7712u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st16((c.r[16].w[0] + 7710u), static_cast<std::uint16_t>(c.r[30].w[0]));
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] - 13220u), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1E64:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    set32(c.r[5], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1E94:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7710u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E1EDC; } }
    set32(c.r[3], 0u + 13248u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1EDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1EDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1F2C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1F2C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F08u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E1F08u) [[unlikely]] return; }
L_002E1F08:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E1F2C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 10912u)));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E1F2C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    set32(c.r[6], c.r[20].w[0] - 4440u);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E1F74; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E1F74; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E1F74; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002E1F8C; } }
L_002E1F74:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F8Cu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E1F8Cu) [[unlikely]] return; }
L_002E1F8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1FAC; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[19].w[0] & 31u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FACu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E1FACu) [[unlikely]] return; }
L_002E1FAC:
    set32(c.r[16], ld32((c.r[18].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E1FF4; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E1FD0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1FE4; } }
L_002E1FD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FE0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E1FE0u) [[unlikely]] return; }
L_002E1FE0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E1FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2664; } }
L_002E1FF4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7728u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E232C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2038; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 540u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 536u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2044; } }
L_002E2038:
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 536u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 540u), c.r[2].w[0]);
    c.budget -= 3;
L_002E2044:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2050u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E2050u) [[unlikely]] return; }
L_002E2050:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2064; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_002E2064:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002E209C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 624u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E207Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E207Cu) [[unlikely]] return; }
L_002E207C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    set32(c.r[3], 0u + 64u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 7700u), c.r[4].w[0]);
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2290; } }
L_002E209C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002E2290; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E20D0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E20E4; } }
L_002E20D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20E0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E20E0u) [[unlikely]] return; }
L_002E20E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E20E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E215C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9008u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E215C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2138; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 10136u));
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 19;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E215C; } }
L_002E2138:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E214C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 9933u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E214C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E215Cu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E215Cu) [[unlikely]] return; }
L_002E215C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E21A4; } }
    set32(c.r[3], ld32((c.r[17].w[0] - 5024u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2194; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E218Cu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E218Cu) [[unlikely]] return; }
L_002E218C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E21A4; } }
L_002E2194:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21A4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E21A4u) [[unlikely]] return; }
L_002E21A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E21F0; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002E21DC; } }
    c.r[5].d[0] = ~(0ull | c.r[17].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21D0u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002E21D0u) [[unlikely]] return; }
L_002E21D0:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E21F0; } }
L_002E21DC:
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21ECu);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002E21ECu) [[unlikely]] return; }
L_002E21EC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E21F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9942u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2264; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.f[20] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2214u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x002E2214u) [[unlikely]] return; }
L_002E2214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2230; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E222Cu);  if (depth < kMaxDepth) unit_006E(c, 194u, depth + 1u); else { c.pc = 0x002BABE8u; return; } if (c.pc != 0x002E222Cu) [[unlikely]] return; }
L_002E222C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002E2230:
    c.f[13] = ld32((c.r[18].w[0] + 9948u));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2240u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x002E2240u) [[unlikely]] return; }
L_002E2240:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002E2250; }
L_002E2250:
    c.r[2].d[0] = c.r[2].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2264; } }
    st32((c.r[18].w[0] + 148u), c.f[20]);
    st8((c.r[18].w[0] + 9942u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002E2264:
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2280u);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x002E2280u) [[unlikely]] return; }
L_002E2280:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E2290; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_002E2290:
    set32(c.r[3], ld32((c.r[18].w[0] + 568u)));
    set32(c.r[2], 0u - 65u);
    set32(c.r[4], ld32((c.r[18].w[0] + 592u)));
    c.r[5].d[0] = ld16((c.r[18].w[0] + 7726u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[6], ld32((c.r[18].w[0] + 628u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    st32((c.r[18].w[0] + 588u), c.r[4].w[0]);
    st16((c.r[18].w[0] + 7724u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[18].w[0] + 620u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 624u), 0u);
    st16((c.r[18].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E22E0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22E0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E22E0u) [[unlikely]] return; }
L_002E22E0:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2304; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2304u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E2304u) [[unlikely]] return; }
L_002E2304:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E231C; } }
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E231C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E232C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 624u), 0u);
    st16((c.r[18].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2440; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], 0u - 1u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2394; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2394; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    set32(c.r[4], c.r[20].w[0] - 4440u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    st16((c.r[18].w[0] + 10104u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 9;
L_002E2394:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E23C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    set32(c.r[4], c.r[20].w[0] - 4440u);
    c.r[17].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
L_002E23C4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002E2444; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10104u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002E2444; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E23E8u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E23E8u) [[unlikely]] return; }
L_002E23E8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_002E2410; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2408u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002E2408u) [[unlikely]] return; }
L_002E2408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2420; } }
L_002E2410:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2420u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E2420u) [[unlikely]] return; }
L_002E2420:
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st16((c.r[18].w[0] + 10104u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2444; } }
L_002E2440:
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 1;
L_002E2444:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2664; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E2478; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2474u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E2474u) [[unlikely]] return; }
L_002E2474:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E2478:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E25D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E24AC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24ACu);  if (depth < kMaxDepth) unit_006E(c, 157u, depth + 1u); else { c.pc = 0x002B9FC8u; return; } if (c.pc != 0x002E24ACu) [[unlikely]] return; }
L_002E24AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24B8u);  if (depth < kMaxDepth) unit_0079(c, 150u, depth + 1u); else { c.pc = 0x002E6408u; return; } if (c.pc != 0x002E24B8u) [[unlikely]] return; }
L_002E24B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E24F4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E24F4; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E24F4; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E24F4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24F4u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E24F4u) [[unlikely]] return; }
L_002E24F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2500u);  if (depth < kMaxDepth) unit_0078(c, 93u, depth + 1u); else { c.pc = 0x002E1130u; return; } if (c.pc != 0x002E2500u) [[unlikely]] return; }
L_002E2500:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AA0u | kUnwind; return; } goto L_002E1AA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2578; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E252Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E252Cu) [[unlikely]] return; }
L_002E252C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2578; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2578; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2578; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E255Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002E255Cu) [[unlikely]] return; }
L_002E255C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 408u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AA0u | kUnwind; return; } goto L_002E1AA0; } }
L_002E2578:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E25AC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25A4u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E25A4u) [[unlikely]] return; }
L_002E25A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E25BC; } }
L_002E25AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25BCu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E25BCu) [[unlikely]] return; }
L_002E25BC:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEBFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E25D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25E4u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E25E4u) [[unlikely]] return; }
L_002E25E4:
    set32(c.r[5], 0u + 5u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25F4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E25F4u) [[unlikely]] return; }
L_002E25F4:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E260C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E261C; } }
L_002E260C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E261Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E261Cu) [[unlikely]] return; }
L_002E261C:
    st32((c.r[17].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E264C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2644u);  if (depth < kMaxDepth) unit_0081(c, 179u, depth + 1u); else { c.pc = 0x00306370u; return; } if (c.pc != 0x002E2644u) [[unlikely]] return; }
L_002E2644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2664; } }
L_002E264C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2664u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E2664u) [[unlikely]] return; }
L_002E2664:
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
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E26A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 72u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E26E4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E26F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E26FC; } }
L_002E26E4:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E26FC; } }
L_002E26F0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2710; } }
L_002E26FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E270Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E270Cu) [[unlikely]] return; }
L_002E270C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E2710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E2764; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E2740; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2754; } }
L_002E2740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2750u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E2750u) [[unlikely]] return; }
L_002E2750:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E2754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E276C; } }
L_002E2764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), 0u);
    c.budget -= 2;
L_002E276C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] - 5024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2788; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2CC4; } }
L_002E2788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E279Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E279Cu) [[unlikely]] return; }
L_002E279C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E27D4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27B0u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x002E27B0u) [[unlikely]] return; }
L_002E27B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E27D4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2CC4; } }
    set32(c.r[2], 0u + 185u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2CC4; } }
L_002E27D4:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 9264u));
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2808; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2808; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 9280u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC4; } }
L_002E2808:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2824; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E287C; } }
L_002E2824:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E287C; } }
    set32(c.r[3], ld32((c.r[17].w[0] - 5024u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002E287C; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E287C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002E287C; } }
    c.f[1] = ld32((c.r[18].w[0] + 9280u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 9280u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC4; } }
L_002E287C:
    set32(c.r[2], ld32((c.r[17].w[0] - 5024u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 94u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2894; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E28B4; } }
L_002E2894:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2A1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2A1C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 94u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2A1C; } }
L_002E28B4:
    set32(c.r[2], ld32((c.r[17].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 94u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E28E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 94u)));
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E28EC; } }
L_002E28E0:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 3;
L_002E28EC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2900u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E2900u) [[unlikely]] return; }
L_002E2900:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2914u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002E2914u) [[unlikely]] return; }
L_002E2914:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E295Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E295Cu) [[unlikely]] return; }
L_002E295C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2968u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E2968u) [[unlikely]] return; }
L_002E2968:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 15096u);
    set32(c.r[5], 0u + 582u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[18].w[0] + 9280u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37800000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[2], c.f[12]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29D8u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E29D8u) [[unlikely]] return; }
L_002E29D8:
    c.f[0] = ld32((c.r[18].w[0] + 9280u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[20], c.f[21]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29F4u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E29F4u) [[unlikely]] return; }
L_002E29F4:
    c.f[0] = ld32((c.r[18].w[0] + 9280u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A14u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E2A14u) [[unlikely]] return; }
L_002E2A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC4; } }
L_002E2A1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], ld32((c.r[17].w[0] - 5024u)));
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A30u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x002E2A30u) [[unlikely]] return; }
L_002E2A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2A48; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 13196u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2AD0; } }
L_002E2A48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2AB8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2AB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A70u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E2A70u) [[unlikely]] return; }
L_002E2A70:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E2AB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E2AB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2AD0; } }
L_002E2AB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 92u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2AD0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2AD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2C24; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B20u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E2B20u) [[unlikely]] return; }
L_002E2B20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B2Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E2B2Cu) [[unlikely]] return; }
L_002E2B2C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], c.r[2].w[0] - 15096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = ld32((c.r[18].w[0] + 9280u));
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37800000u);
    c.f[1] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = fp::mul(c.f[2], c.f[12]);
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B88u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E2B88u) [[unlikely]] return; }
L_002E2B88:
    c.f[0] = ld32((c.r[18].w[0] + 9280u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[20], c.f[21]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BA4u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E2BA4u) [[unlikely]] return; }
L_002E2BA4:
    c.f[0] = ld32((c.r[18].w[0] + 9280u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BC4u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E2BC4u) [[unlikely]] return; }
L_002E2BC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E2CC4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BE0u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002E2BE0u) [[unlikely]] return; }
L_002E2BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2CC4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2C04u) [[unlikely]] return; }
L_002E2C04:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 9280u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 9280u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC4; } }
L_002E2C24:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2CA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2CA0; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E2CC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[1] = ld32((c.r[18].w[0] + 9280u));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    fpu_div(c, 0u, c.f[12], c.f[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[1], c.f[12]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C98u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E2C98u) [[unlikely]] return; }
L_002E2C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC4; } }
L_002E2CA0:
    c.f[12] = ld32((c.r[18].w[0] + 9280u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CC4u);  if (depth < kMaxDepth) unit_0089(c, 16u, depth + 1u); else { c.pc = 0x00324468u; return; } if (c.pc != 0x002E2CC4u) [[unlikely]] return; }
L_002E2CC4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2CE8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 92u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[22], c.r[2].w[0] - 21352u);
    c.budget -= 18;
L_002E2D30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2E28; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E2E28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E2E28; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 23016u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2D80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7684u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7684u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E2D80; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 7684u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E2D80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D8Cu);  if (depth < kMaxDepth) unit_0078(c, 195u, depth + 1u); else { c.pc = 0x002E26A0u; return; } if (c.pc != 0x002E2D8Cu) [[unlikely]] return; }
L_002E2D8C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D9Cu);  if (depth < kMaxDepth) unit_0078(c, 225u, depth + 1u); else { c.pc = 0x002E2E68u; return; } if (c.pc != 0x002E2D9Cu) [[unlikely]] return; }
L_002E2D9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E2DB4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2DC4; } }
L_002E2DB4:
    set32(c.r[4], c.r[20].w[0] + 12288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DC0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E2DC0u) [[unlikely]] return; }
L_002E2DC0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E2DC4:
    st32((c.r[19].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8938u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2E28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_002E2DEC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 94ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2E04; } }
L_002E2DEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DFCu);  if (depth < kMaxDepth) unit_0032(c, 359u, depth + 1u); else { c.pc = 0x001CB660u; return; } if (c.pc != 0x002E2DFCu) [[unlikely]] return; }
L_002E2DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2E28; } }
L_002E2E04:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2E28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2E28u) [[unlikely]] return; }
L_002E2E28:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2D30u | kUnwind; return; } goto L_002E2D30; } }
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
L_002E2E68:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002E2EE0; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E2EB8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2ED0; } }
L_002E2EB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2ECCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E2ECCu) [[unlikely]] return; }
L_002E2ECC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E2ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2EE8; } }
L_002E2EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), 0u);
    c.budget -= 2;
L_002E2EE8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E2F34; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E2F10; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2F24; } }
L_002E2F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F20u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E2F20u) [[unlikely]] return; }
L_002E2F20:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E2F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2F3C; } }
L_002E2F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), 0u);
    c.budget -= 2;
L_002E2F3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] - 5024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2F58; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E39E4; } }
L_002E2F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 612u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 6640u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E30F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E30F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E30F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E30F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E2FE0; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002E2FE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E3024; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002E3024:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E3044; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3058; } }
L_002E3044:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3058u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3058u) [[unlikely]] return; }
L_002E3058:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E3080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E307Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E307Cu) [[unlikely]] return; }
L_002E307C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E3080:
    set32(c.r[3], ld32((c.r[21].w[0] - 5024u)));
    st32((c.r[16].w[0] - 5020u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E30C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E30C0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    set32(c.r[5], 0u + 5u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30B8u);  if (depth < kMaxDepth) unit_0081(c, 179u, depth + 1u); else { c.pc = 0x00306370u; return; } if (c.pc != 0x002E30B8u) [[unlikely]] return; }
L_002E30B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E30DC; } }
L_002E30C0:
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30DCu);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E30DCu) [[unlikely]] return; }
L_002E30DC:
    set32(c.r[2], ld32((c.r[16].w[0] - 5020u)));
    set32(c.r[3], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E35A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3598; } }
L_002E30F8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E310C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3120; } }
L_002E310C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3120u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3120u) [[unlikely]] return; }
L_002E3120:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E313C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E314C; } }
L_002E313C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E314Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E314Cu) [[unlikely]] return; }
L_002E314C:
    st32((c.r[16].w[0] - 5020u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E315Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E315Cu) [[unlikely]] return; }
L_002E315C:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E31BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3188u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E3188u) [[unlikely]] return; }
L_002E3188:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E31BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] - 5020u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E35B8; } }
L_002E31BC:
    set32(c.r[4], ld32((c.r[21].w[0] - 5024u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E31DC; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3204; } }
L_002E31DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 35u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E35B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31F4u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E31F4u) [[unlikely]] return; }
L_002E31F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E35B8; } }
L_002E3204:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E35B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E3258; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002E3258:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E329C; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002E329C:
    set32(c.r[3], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14152u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32E0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E32E0u) [[unlikely]] return; }
L_002E32E0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E32F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3308; } }
L_002E32F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3308u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3308u) [[unlikely]] return; }
L_002E3308:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8940u)));
    set32(c.r[20], 0u + 88u);
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 79u);
    set32(c.r[4], 0u + 1u);
    if (c.r[5].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    st64((c.r[17].w[0] + 560u), c.r[3].d[0]);
    st8((c.r[17].w[0] + 10133u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 12;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E3344; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3358; } }
L_002E3344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3358u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3358u) [[unlikely]] return; }
L_002E3358:
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 35u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3418; } }
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[22].w[0] - 14152u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33A0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E33A0u) [[unlikely]] return; }
L_002E33A0:
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.r[9].d[0] = c.r[29].d[0] | 8ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 187u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33C0u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002E33C0u) [[unlikely]] return; }
L_002E33C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[5], 0u + 187u);
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3400u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E3400u) [[unlikely]] return; }
L_002E3400:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3410u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x002E3410u) [[unlikely]] return; }
L_002E3410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E34C4; } }
L_002E3418:
    set32(c.r[2], c.r[16].w[0] - 6080u);
    set32(c.r[4], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    st32((c.r[17].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E3454; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3464; } }
L_002E3454:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3464u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3464u) [[unlikely]] return; }
L_002E3464:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = 0u;
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3498; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3498; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_002E3498:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34A8u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x002E34A8u) [[unlikely]] return; }
L_002E34A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 40u), 0u);
    st16((c.r[17].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34C4u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E34C4u) [[unlikely]] return; }
L_002E34C4:
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E34E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E34F8; } }
L_002E34E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34F4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E34F4u) [[unlikely]] return; }
L_002E34F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E34F8:
    st32((c.r[21].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3534; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3534; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 33u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E352Cu);  if (depth < kMaxDepth) unit_0081(c, 179u, depth + 1u); else { c.pc = 0x00306370u; return; } if (c.pc != 0x002E352Cu) [[unlikely]] return; }
L_002E352C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3550; } }
L_002E3534:
    set32(c.r[2], ld32((c.r[21].w[0] - 5024u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 33u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3550u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E3550u) [[unlikely]] return; }
L_002E3550:
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E356C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3584; } }
L_002E356C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3580u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3580u) [[unlikely]] return; }
L_002E3580:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E3584:
    st32((c.r[21].w[0] - 5024u), c.r[5].w[0]);
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 34u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E35A4; } }
L_002E3598:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35A4u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002E35A4u) [[unlikely]] return; }
L_002E35A4:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E39E8; } }
L_002E35B8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E35CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E35E0; } }
L_002E35CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35E0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E35E0u) [[unlikely]] return; }
L_002E35E0:
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35F0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E35F0u) [[unlikely]] return; }
L_002E35F0:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E363C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E361Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E361Cu) [[unlikely]] return; }
L_002E361C:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3664; } }
L_002E363C:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3664; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3664; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E39E4; } }
L_002E3664:
    set32(c.r[4], ld32((c.r[21].w[0] - 5024u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 22u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3684; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E36AC; } }
L_002E3684:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 29u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E39E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E369Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E369Cu) [[unlikely]] return; }
L_002E369C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E39E4; } }
L_002E36AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E39E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36C8u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E36C8u) [[unlikely]] return; }
L_002E36C8:
    set32(c.r[2], 0u + 192u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    set32(c.r[6], 0u - 1u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E3718; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002E3718:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E375C; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002E375C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E3774; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3788; } }
L_002E3774:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3788u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3788u) [[unlikely]] return; }
L_002E3788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[21].w[0] - 5024u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 928u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E37A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002E37A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002E37CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37C8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E37C8u) [[unlikely]] return; }
L_002E37C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E37CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 60u)));
    st32((c.r[21].w[0] - 5024u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E389C; } }
    set32(c.r[2], 0u + 192u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 60u)));
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3830; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3850; } }
L_002E3830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3850; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002E3850:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3880; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 4;
L_002E3880:
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 7;
L_002E389C:
    set32(c.r[3], ld32((c.r[21].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E38D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E38D8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38D0u);  if (depth < kMaxDepth) unit_0081(c, 179u, depth + 1u); else { c.pc = 0x00306370u; return; } if (c.pc != 0x002E38D0u) [[unlikely]] return; }
L_002E38D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E38F4; } }
L_002E38D8:
    set32(c.r[2], ld32((c.r[21].w[0] - 5024u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38F4u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E38F4u) [[unlikely]] return; }
L_002E38F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[21].w[0] - 5024u)));
    set32(c.r[3], c.r[3].w[0] - 31864u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3930u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002E3930u) [[unlikely]] return; }
L_002E3930:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3948u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E3948u) [[unlikely]] return; }
L_002E3948:
    st32((c.r[17].w[0] + 7700u), 0u);
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002E3964; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002E3974; } }
L_002E3964:
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 4;
L_002E3974:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002E3988; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E39A0; } }
L_002E3988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E399Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E399Cu) [[unlikely]] return; }
L_002E399C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E39A0:
    st32((c.r[21].w[0] - 5024u), c.r[5].w[0]);
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E39C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39C0u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002E39C0u) [[unlikely]] return; }
L_002E39C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39D8u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x002E39D8u) [[unlikely]] return; }
L_002E39D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E39E8; } }
L_002E39E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E39E8:
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
L_002E3A18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3A28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A60u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E3A60u) [[unlikely]] return; }
L_002E3A60:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3AA8; } }
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3AA8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9929u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3B08; } }
L_002E3AA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3EA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AC0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E3AC0u) [[unlikely]] return; }
L_002E3AC0:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3EA4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3B08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AF8u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E3AF8u) [[unlikely]] return; }
L_002E3AF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3EA4; } }
L_002E3B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E3B60; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 276u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3B34u) [[unlikely]] return; }
L_002E3B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3EA4; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 188u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3B58u) [[unlikely]] return; }
L_002E3B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3EA4; } }
L_002E3B60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B70u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E3B70u) [[unlikely]] return; }
L_002E3B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[16].w[0] + 212u), 0u);
    st8((c.r[16].w[0] + 10131u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 22480u);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 624u), 0u);
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 10094u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10134u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10129u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10102u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BB0u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x002E3BB0u) [[unlikely]] return; }
L_002E3BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3BDC; } }
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], c.r[2].w[0] + 10124u);
    c.budget -= 2;
L_002E3BC0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3BC0u | kUnwind; return; } goto L_002E3BC0; } }
    st16((c.r[2].w[0] + 10118u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E3BDC:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E3BF4; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3C08; } }
L_002E3BF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C04u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3C04u) [[unlikely]] return; }
L_002E3C04:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E3C08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E3C54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3C3C; } }
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3C50; } }
L_002E3C3C:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_002E3C50:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002E3C54:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 560u));
    set32(c.r[5], c.r[17].w[0] - 6944u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[18], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E3CE4; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[20].w[0] & 31u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C8Cu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E3C8Cu) [[unlikely]] return; }
L_002E3C8C:
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[16].w[0] + 13080u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CA4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E3CA4u) [[unlikely]] return; }
L_002E3CA4:
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 10038u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    st64((c.r[16].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CC4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E3CC4u) [[unlikely]] return; }
L_002E3CC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CDCu);  if (depth < kMaxDepth) unit_0088(c, 329u, depth + 1u); else { c.pc = 0x00323F68u; return; } if (c.pc != 0x002E3CDCu) [[unlikely]] return; }
L_002E3CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3EA0; } }
L_002E3CE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CF0u);  if (depth < kMaxDepth) unit_0091(c, 25u, depth + 1u); else { c.pc = 0x003443C0u; return; } if (c.pc != 0x002E3CF0u) [[unlikely]] return; }
L_002E3CF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E3D30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D14u);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x002E3D14u) [[unlikely]] return; }
L_002E3D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002E3D30; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D28u);  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00343738u; return; } if (c.pc != 0x002E3D28u) [[unlikely]] return; }
L_002E3D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3EA0; } }
L_002E3D30:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3D54; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3E14; } }
L_002E3D54:
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 10094u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D68u);  if (depth < kMaxDepth) unit_0078(c, 266u, depth + 1u); else { c.pc = 0x002E3A18u; return; } if (c.pc != 0x002E3D68u) [[unlikely]] return; }
L_002E3D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3DE4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9826u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E3D90; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E3DE4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3DE4; } }
L_002E3D90:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DA0u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E3DA0u) [[unlikely]] return; }
L_002E3DA0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9824u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DB0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E3DB0u) [[unlikely]] return; }
L_002E3DB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9826u)));
    st16((c.r[16].w[0] + 9028u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E3DCC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3DD0; } }
L_002E3DCC:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002E3DD0:
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[16].w[0] + 560u), c.r[4].d[0]);
    st32((c.r[3].w[0] + 10116u), 0u);
    c.budget -= 5;
L_002E3DE4:
    st16((c.r[16].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DF8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E3DF8u) [[unlikely]] return; }
L_002E3DF8:
    set32(c.r[4], 0u + 1u);
    st16((c.r[16].w[0] + 654u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[20].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E0Cu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E3E0Cu) [[unlikely]] return; }
L_002E3E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3EA0; } }
L_002E3E14:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3EA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E3E70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3E58; } }
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3E6C; } }
L_002E3E58:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_002E3E6C:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002E3E70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 185u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E80u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E3E80u) [[unlikely]] return; }
L_002E3E80:
    set32(c.r[2], 0u + 11u);
    st16((c.r[16].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E9Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E3E9Cu) [[unlikely]] return; }
L_002E3E9C:
    st16((c.r[16].w[0] + 654u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E3EA0:
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E3EA4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3ED0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 224u), c.f[24]);
    st32((c.r[29].w[0] + 216u), c.f[23]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[30], 0u - 1u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[22] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[23] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[24] = c.r[1].w[0];
    c.budget -= 28;
L_002E3F40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 97u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 97u, depth); } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 97u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 143u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3F90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3F90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9926u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 97u, depth); } }
L_002E3F90:
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FA0u);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D420u; return; } if (c.pc != 0x002E3FA0u) [[unlikely]] return; }
L_002E3FA0:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { goto L_002E3FB4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3FCC; } }
L_002E3FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FC8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E3FC8u) [[unlikely]] return; }
L_002E3FC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E3FCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[2].w[0] - 5024u), c.r[5].w[0]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 30u)));
    set32(c.r[2], c.r[3].w[0] - 6u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 2u, depth); } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10085u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}
