#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0010;
    case 3u: goto L_002C0040;
    case 4u: goto L_002C0068;
    case 5u: goto L_002C007C;
    case 6u: goto L_002C00A0;
    case 7u: goto L_002C00B8;
    case 8u: goto L_002C01B0;
    case 9u: goto L_002C01E8;
    case 10u: goto L_002C0254;
    case 11u: goto L_002C0280;
    case 12u: goto L_002C02AC;
    case 13u: goto L_002C02F4;
    case 14u: goto L_002C0310;
    case 15u: goto L_002C0378;
    case 16u: goto L_002C0398;
    case 17u: goto L_002C03C0;
    case 18u: goto L_002C03E4;
    case 19u: goto L_002C0438;
    case 20u: goto L_002C0460;
    case 21u: goto L_002C0504;
    case 22u: goto L_002C0510;
    case 23u: goto L_002C0520;
    case 24u: goto L_002C0530;
    case 25u: goto L_002C0548;
    case 26u: goto L_002C0568;
    case 27u: goto L_002C0580;
    case 28u: goto L_002C05A0;
    case 29u: goto L_002C05EC;
    case 30u: goto L_002C0608;
    case 31u: goto L_002C0628;
    case 32u: goto L_002C065C;
    case 33u: goto L_002C0688;
    case 34u: goto L_002C06C8;
    case 35u: goto L_002C06E4;
    case 36u: goto L_002C06F4;
    case 37u: goto L_002C0748;
    case 38u: goto L_002C0764;
    case 39u: goto L_002C0788;
    case 40u: goto L_002C07B0;
    case 41u: goto L_002C07C0;
    case 42u: goto L_002C0800;
    case 43u: goto L_002C081C;
    case 44u: goto L_002C082C;
    case 45u: goto L_002C08E0;
    case 46u: goto L_002C09A0;
    case 47u: goto L_002C09D8;
    case 48u: goto L_002C0A04;
    case 49u: goto L_002C0A34;
    case 50u: goto L_002C0A4C;
    case 51u: goto L_002C0AA8;
    case 52u: goto L_002C0B68;
    case 53u: goto L_002C0B8C;
    case 54u: goto L_002C0BC8;
    case 55u: goto L_002C0BE8;
    case 56u: goto L_002C0C88;
    case 57u: goto L_002C0C94;
    case 58u: goto L_002C0CB4;
    case 59u: goto L_002C0CC0;
    case 60u: goto L_002C0CD8;
    case 61u: goto L_002C0CE4;
    case 62u: goto L_002C0D88;
    case 63u: goto L_002C0E08;
    case 64u: goto L_002C0E18;
    case 65u: goto L_002C0E28;
    case 66u: goto L_002C0E5C;
    case 67u: goto L_002C0E68;
    case 68u: goto L_002C0E84;
    case 69u: goto L_002C0E90;
    case 70u: goto L_002C0EC0;
    case 71u: goto L_002C0F08;
    case 72u: goto L_002C0F14;
    case 73u: goto L_002C0F20;
    case 74u: goto L_002C0F58;
    case 75u: goto L_002C0F8C;
    case 76u: goto L_002C0F98;
    case 77u: goto L_002C0FA8;
    case 78u: goto L_002C0FDC;
    case 79u: goto L_002C0FE8;
    case 80u: goto L_002C0FF8;
    case 81u: goto L_002C1010;
    case 82u: goto L_002C103C;
    case 83u: goto L_002C104C;
    case 84u: goto L_002C1060;
    case 85u: goto L_002C10B8;
    case 86u: goto L_002C10D4;
    case 87u: goto L_002C1100;
    case 88u: goto L_002C1114;
    case 89u: goto L_002C1128;
    case 90u: goto L_002C1148;
    case 91u: goto L_002C1168;
    case 92u: goto L_002C117C;
    case 93u: goto L_002C11F8;
    case 94u: goto L_002C1230;
    case 95u: goto L_002C1240;
    case 96u: goto L_002C1274;
    case 97u: goto L_002C1298;
    case 98u: goto L_002C12BC;
    case 99u: goto L_002C12D0;
    case 100u: goto L_002C1304;
    case 101u: goto L_002C1310;
    case 102u: goto L_002C1320;
    case 103u: goto L_002C1350;
    case 104u: goto L_002C13A0;
    case 105u: goto L_002C13B8;
    case 106u: goto L_002C13E4;
    case 107u: goto L_002C144C;
    case 108u: goto L_002C1470;
    case 109u: goto L_002C1488;
    case 110u: goto L_002C14A0;
    case 111u: goto L_002C1500;
    case 112u: goto L_002C1510;
    case 113u: goto L_002C1558;
    case 114u: goto L_002C158C;
    case 115u: goto L_002C15A8;
    case 116u: goto L_002C15E8;
    case 117u: goto L_002C1608;
    case 118u: goto L_002C1614;
    case 119u: goto L_002C1698;
    case 120u: goto L_002C16F0;
    case 121u: goto L_002C1750;
    case 122u: goto L_002C17C4;
    case 123u: goto L_002C17E0;
    case 124u: goto L_002C182C;
    case 125u: goto L_002C1854;
    case 126u: goto L_002C18B0;
    case 127u: goto L_002C18C0;
    case 128u: goto L_002C18D0;
    case 129u: goto L_002C18E0;
    case 130u: goto L_002C18F0;
    case 131u: goto L_002C1900;
    case 132u: goto L_002C1918;
    case 133u: goto L_002C1938;
    case 134u: goto L_002C1948;
    case 135u: goto L_002C1978;
    case 136u: goto L_002C1980;
    case 137u: goto L_002C1990;
    case 138u: goto L_002C1A08;
    case 139u: goto L_002C1A28;
    case 140u: goto L_002C1A84;
    case 141u: goto L_002C1AAC;
    case 142u: goto L_002C1B08;
    case 143u: goto L_002C1B20;
    case 144u: goto L_002C1B38;
    case 145u: goto L_002C1BB8;
    case 146u: goto L_002C1BFC;
    case 147u: goto L_002C1C2C;
    case 148u: goto L_002C1C58;
    case 149u: goto L_002C1CB0;
    case 150u: goto L_002C1CD4;
    case 151u: goto L_002C1CF4;
    case 152u: goto L_002C1D10;
    case 153u: goto L_002C1D20;
    case 154u: goto L_002C1D44;
    case 155u: goto L_002C1D58;
    case 156u: goto L_002C1D68;
    case 157u: goto L_002C1D78;
    case 158u: goto L_002C1D98;
    case 159u: goto L_002C1DC4;
    case 160u: goto L_002C1DD0;
    case 161u: goto L_002C2078;
    case 162u: goto L_002C20C8;
    case 163u: goto L_002C20F0;
    case 164u: goto L_002C211C;
    case 165u: goto L_002C2128;
    case 166u: goto L_002C2148;
    case 167u: goto L_002C2168;
    case 168u: goto L_002C21EC;
    case 169u: goto L_002C2240;
    case 170u: goto L_002C2260;
    case 171u: goto L_002C22C4;
    case 172u: goto L_002C22F0;
    case 173u: goto L_002C2314;
    case 174u: goto L_002C2370;
    case 175u: goto L_002C23B0;
    case 176u: goto L_002C23C0;
    case 177u: goto L_002C240C;
    case 178u: goto L_002C244C;
    case 179u: goto L_002C2498;
    case 180u: goto L_002C24AC;
    case 181u: goto L_002C24C0;
    case 182u: goto L_002C24E8;
    case 183u: goto L_002C2550;
    case 184u: goto L_002C257C;
    case 185u: goto L_002C25A4;
    case 186u: goto L_002C25C8;
    case 187u: goto L_002C25DC;
    case 188u: goto L_002C2634;
    case 189u: goto L_002C2644;
    case 190u: goto L_002C26C4;
    case 191u: goto L_002C26D4;
    case 192u: goto L_002C2708;
    case 193u: goto L_002C277C;
    case 194u: goto L_002C27FC;
    case 195u: goto L_002C2814;
    case 196u: goto L_002C2834;
    case 197u: goto L_002C2870;
    case 198u: goto L_002C2890;
    case 199u: goto L_002C28EC;
    case 200u: goto L_002C2900;
    case 201u: goto L_002C2938;
    case 202u: goto L_002C2980;
    case 203u: goto L_002C29C0;
    case 204u: goto L_002C29E0;
    case 205u: goto L_002C29FC;
    case 206u: goto L_002C2A20;
    case 207u: goto L_002C2A80;
    case 208u: goto L_002C2AC0;
    case 209u: goto L_002C2AD0;
    case 210u: goto L_002C2B24;
    case 211u: goto L_002C2B64;
    case 212u: goto L_002C2B9C;
    case 213u: goto L_002C2BB0;
    case 214u: goto L_002C2BD8;
    case 215u: goto L_002C2C00;
    case 216u: goto L_002C2C68;
    case 217u: goto L_002C2C94;
    case 218u: goto L_002C2CBC;
    case 219u: goto L_002C2CE0;
    case 220u: goto L_002C2CF4;
    case 221u: goto L_002C2D4C;
    case 222u: goto L_002C2D5C;
    case 223u: goto L_002C2DDC;
    case 224u: goto L_002C2DEC;
    case 225u: goto L_002C2E20;
    case 226u: goto L_002C2E90;
    case 227u: goto L_002C2F0C;
    case 228u: goto L_002C2F24;
    case 229u: goto L_002C2F44;
    case 230u: goto L_002C2F80;
    case 231u: goto L_002C2FA0;
    case 232u: goto L_002C2FFC;
    case 233u: goto L_002C3010;
    case 234u: goto L_002C3048;
    case 235u: goto L_002C30CC;
    case 236u: goto L_002C30E0;
    case 237u: goto L_002C3108;
    case 238u: goto L_002C3114;
    case 239u: goto L_002C3144;
    case 240u: goto L_002C3154;
    case 241u: goto L_002C319C;
    case 242u: goto L_002C31D4;
    case 243u: goto L_002C31DC;
    case 244u: goto L_002C31F8;
    case 245u: goto L_002C320C;
    case 246u: goto L_002C3234;
    case 247u: goto L_002C3250;
    case 248u: goto L_002C3270;
    case 249u: goto L_002C32D8;
    case 250u: goto L_002C32EC;
    case 251u: goto L_002C3314;
    case 252u: goto L_002C3320;
    case 253u: goto L_002C3350;
    case 254u: goto L_002C3380;
    case 255u: goto L_002C33B8;
    case 256u: goto L_002C33C0;
    case 257u: goto L_002C33DC;
    case 258u: goto L_002C33F0;
    case 259u: goto L_002C3418;
    case 260u: goto L_002C3434;
    case 261u: goto L_002C3458;
    case 262u: goto L_002C349C;
    case 263u: goto L_002C34AC;
    case 264u: goto L_002C34F4;
    case 265u: goto L_002C358C;
    case 266u: goto L_002C35C8;
    case 267u: goto L_002C35F0;
    case 268u: goto L_002C3628;
    case 269u: goto L_002C36E8;
    case 270u: goto L_002C379C;
    case 271u: goto L_002C37D8;
    case 272u: goto L_002C37F4;
    case 273u: goto L_002C3808;
    case 274u: goto L_002C38A4;
    case 275u: goto L_002C3920;
    case 276u: goto L_002C3954;
    case 277u: goto L_002C3988;
    case 278u: goto L_002C3A00;
    case 279u: goto L_002C3A28;
    case 280u: goto L_002C3A98;
    case 281u: goto L_002C3AD0;
    case 282u: goto L_002C3B10;
    case 283u: goto L_002C3B70;
    case 284u: goto L_002C3BB0;
    case 285u: goto L_002C3C40;
    case 286u: goto L_002C3CE0;
    case 287u: goto L_002C3D00;
    case 288u: goto L_002C3D18;
    case 289u: goto L_002C3D30;
    case 290u: goto L_002C3D50;
    case 291u: goto L_002C3D68;
    case 292u: goto L_002C3D80;
    case 293u: goto L_002C3DA0;
    case 294u: goto L_002C3DB8;
    case 295u: goto L_002C3DC4;
    case 296u: goto L_002C3DE0;
    case 297u: goto L_002C3E20;
    case 298u: goto L_002C3EBC;
    case 299u: goto L_002C3EDC;
    case 300u: goto L_002C3EF8;
    case 301u: goto L_002C3F24;
    case 302u: goto L_002C3F50;
    case 303u: goto L_002C3F88;
    case 304u: goto L_002C3FB8;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0010u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C0010u) [[unlikely]] return; }
L_002C0010:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 120u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[12] = c.f[20] ^ fp::kSign;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0068u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C0068u) [[unlikely]] return; }
L_002C0068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C007Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C007Cu) [[unlikely]] return; }
L_002C007C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[3].w[0] - 23100u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[0] = c.f[2];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C00A0:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C00B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0118; } }
    c.r[2].d[0] = c.r[3].sd[0] < 148ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0174; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C015C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0104; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C015C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0190; } }
L_002C0104:
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0190; } }
L_002C0118:
    set32(c.r[2], 0u + 174u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0168; } }
    c.r[2].d[0] = c.r[3].sd[0] < 175ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0150; } }
    c.r[2].d[0] = c.r[3].sd[0] < 173ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0190; } }
    c.r[2].d[0] = c.r[3].sd[0] < 169ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0168; } }
L_002C0150:
    set32(c.r[2], 0u + 175u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0190; } }
L_002C015C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C01A4; } }
L_002C0168:
    set32(c.r[5], ld32((c.r[4].w[0] + 11408u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C01A4; } }
L_002C0174:
    set32(c.r[3], ld32((c.r[4].w[0] + 11824u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C01A4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 11844u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C01A4; } }
L_002C0190:
    set32(c.r[3], ld32((c.r[4].w[0] + 11504u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C01A4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 11524u)));
    c.budget -= 1;
L_002C01A4:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C01B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0288; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01E8u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002C01E8u) [[unlikely]] return; }
L_002C01E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002C01F4u);  goto L_002C01F8; }
L_002C01F8:
    set32(c.r[3], c.r[3].w[0] + 4u);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002C0218; } }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];
    c.budget -= 2;
L_002C0218:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C025C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002C02F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C02F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0254u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002C0254u) [[unlikely]] return; }
L_002C0254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C02F4; } }
L_002C025C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002C02F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0280u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002C0280u) [[unlikely]] return; }
L_002C0280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C02F4; } }
L_002C0288:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C02F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002C02F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02ACu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002C02ACu) [[unlikely]] return; }
L_002C02AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002C02B8u);  goto L_002C02BC; }
L_002C02BC:
    set32(c.r[3], c.r[3].w[0] + 4u);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002C02DC; } }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];
    c.budget -= 2;
L_002C02DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02F4u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002C02F4u) [[unlikely]] return; }
L_002C02F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0310:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 105u);
    set32(c.r[3], ld32((c.r[5].w[0] + 7700u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0330; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0368; } }
L_002C0330:
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 31864u);
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002C0368; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002C036C; } }
L_002C0368:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C036C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0378:
    set32(c.r[2], 0u + 128u);
    st32((c.r[4].w[0] + 13076u), 0u);
    st8((c.r[4].w[0] + 13163u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 13160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 13161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 13162u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0398:
    set32(c.r[3], 0u + 128u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 13160u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 13076u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 13163u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 13161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 13162u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C03C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03E4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002C03E4u) [[unlikely]] return; }
L_002C03E4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C041C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C041C; } }
    c.f[0] = ld32((c.r[3].w[0] + 416u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[16].w[0] + 13160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 424u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[16].w[0] + 13161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002C041C:
    st32((c.r[16].w[0] + 13076u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0438:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9926u)));
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 9926u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C0450; } }
    st8((c.r[4].w[0] + 9927u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_002C0450:
    st8((c.r[4].w[0] + 9926u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0460:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], c.r[3].w[0] - 106u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C04F8; } }
    set32(c.r[2], 0u + 217u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0504; } }
L_002C04F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0504:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0510:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0520:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = ld32((c.r[4].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[13] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0548u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002C0548u) [[unlikely]] return; }
L_002C0548:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = ld32((c.r[4].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[13] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0580u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002C0580u) [[unlikely]] return; }
L_002C0580:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C05A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[2] = ld32((c.r[4].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[12] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::sub(c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C05E0; } }
    c.f[13] = ld32((c.r[4].w[0] + 4u));
    c.f[12] = c.f[2];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C05E4; } }
L_002C05E0:
    c.f[13] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_002C05E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05ECu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002C05ECu) [[unlikely]] return; }
L_002C05EC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0608:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 36u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0628u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C0628u) [[unlikely]] return; }
L_002C0628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C065Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C065Cu) [[unlikely]] return; }
L_002C065C:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 20u), 0u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0688u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x002C0688u) [[unlikely]] return; }
L_002C0688:
    c.f[2] = 0u;
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C06B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C06B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C06C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06E4u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002C06E4u) [[unlikely]] return; }
L_002C06E4:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06F4u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002C06F4u) [[unlikely]] return; }
L_002C06F4:
    c.f[1] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C071C; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0728; } }
L_002C071C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C072C; } }
L_002C0728:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C072C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0748:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0764u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x002C0764u) [[unlikely]] return; }
L_002C0764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C07D4; } }
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12870u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C07A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0788u);  if (depth < kMaxDepth) unit_0070(c, 42u, depth + 1u); else { c.pc = 0x002C0800u; return; } if (c.pc != 0x002C0788u) [[unlikely]] return; }
L_002C0788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002C07E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 17692u));
    st16((c.r[16].w[0] + 12870u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C07E0; } }
L_002C07A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07B0u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002C07B0u) [[unlikely]] return; }
L_002C07B0:
    st32((c.r[16].w[0] + 12876u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07C0u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002C07C0u) [[unlikely]] return; }
L_002C07C0:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[16].w[0] + 12880u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C07DC; } }
L_002C07D4:
    st16((c.r[16].w[0] + 12870u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.budget -= 2;
L_002C07DC:
    c.f[0] = ld32((c.r[2].w[0] - 17692u));
    c.budget -= 1;
L_002C07E0:
    st32((c.r[16].w[0] + 12884u), c.f[0]);
    c.budget -= 1;
L_002C07E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C081Cu);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002C081Cu) [[unlikely]] return; }
L_002C081C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C082Cu);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002C082Cu) [[unlikely]] return; }
L_002C082C:
    c.f[2] = c.f[0] ^ fp::kSign;
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C0858; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C08C0; } }
L_002C0858:
    c.f[0] = ld32((c.r[16].w[0] + 12876u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] - 22992u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 12880u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C08AC; } }
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C08C0; } }
L_002C08AC:
    st32((c.r[16].w[0] + 12880u), c.f[2]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12876u), c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C08C4; } }
L_002C08C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C08C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C08E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[2].w[0] - 23056u));
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C0904; } }
    c.f[12] = c.f[1];
    c.budget -= 1;
L_002C0904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = ld32((c.r[2].w[0] - 23068u));
    c.f[4] = fp::sub(c.f[13], c.f[3]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] - 23064u));
    c.f[0] = fp::sub(c.f[13], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C095C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0968; } }
L_002C095C:
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[4], c.f[0]);
    c.budget -= 3;
L_002C0968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] - 23060u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[12], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.f[12] = c.f[1];
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0994; } }
    c.f[12] = c.f[2];
    c.budget -= 1;
L_002C0994:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C09A0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C09D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] - 23084u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 6;
L_002C09D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C09D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 13124u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C0A90; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A04u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C0A04u) [[unlikely]] return; }
L_002C0A04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A34u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002C0A34u) [[unlikely]] return; }
L_002C0A34:
    set32(c.r[4], c.r[16].w[0] + 336u);
    c.f[12] = ld32((c.r[16].w[0] + 12932u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A4Cu);  if (depth < kMaxDepth) unit_008A(c, 201u, depth + 1u); else { c.pc = 0x0032AC98u; return; } if (c.pc != 0x002C0A4Cu) [[unlikely]] return; }
L_002C0A4C:
    c.f[1] = ld32((c.r[16].w[0] + 12932u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 12932u), c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C0A90; } }
    st32((c.r[16].w[0] + 13124u), 0u);
    c.budget -= 1;
L_002C0A90:
    set32(c.r[2], ld32((c.r[16].w[0] + 13124u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0AA8:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 21288u)));
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0B94; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002C0B0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002C0B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0B2C; } }
L_002C0B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[19], c.r[2].w[0] + 3928u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0B34; } }
L_002C0B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[19], c.r[2].w[0] + 4008u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0B34; } }
L_002C0B2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[19], c.r[2].w[0] + 4088u);
    c.budget -= 2;
L_002C0B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 17704u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 32u);
    set32(c.r[17], c.r[18].w[0] + 48u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0B68u) [[unlikely]] return; }
L_002C0B68:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[18].w[0] + 64u);
    set32(c.r[9], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B8Cu);  if (depth < kMaxDepth) unit_0089(c, 203u, depth + 1u); else { c.pc = 0x00326318u; return; } if (c.pc != 0x002C0B8Cu) [[unlikely]] return; }
L_002C0B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0BE8; } }
L_002C0B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 17704u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 32u);
    set32(c.r[17], c.r[18].w[0] + 48u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0BC8u) [[unlikely]] return; }
L_002C0BC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[18].w[0] + 64u);
    set32(c.r[9], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BE8u);  if (depth < kMaxDepth) unit_0089(c, 206u, depth + 1u); else { c.pc = 0x003264D0u; return; } if (c.pc != 0x002C0BE8u) [[unlikely]] return; }
L_002C0BE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C0DAC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 20ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0DB4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002C0C30; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002C0C5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0C94; } }
L_002C0C30:
    set32(c.r[3], c.r[2].w[0] - 4u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 29952u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0C5C:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 29760u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0C88:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0C98; } }
L_002C0C94:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002C0C98:
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C0DB4; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CB4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C0CB4u) [[unlikely]] return; }
L_002C0CB4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CC0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002C0CC0u) [[unlikely]] return; }
L_002C0CC0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CD8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C0CD8u) [[unlikely]] return; }
L_002C0CD8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CE4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002C0CE4u) [[unlikely]] return; }
L_002C0CE4:
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[18].w[0] + 64u));
    c.f[3] = ld32((c.r[18].w[0] + 68u));
    set32(c.r[2], c.r[22].w[0] << 4);
    c.f[1] = ld32((c.r[18].w[0] + 72u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    set32(c.r[3], c.r[21].w[0] << 2);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[7] = ld32((c.r[29].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[6] = ld32((c.r[29].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22808u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[7]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 52u), c.f[5]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[18].w[0] + 56u), c.f[6]);
    st32((c.r[18].w[0] + 60u), c.f[4]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), c.f[2]);
    st32((c.r[18].w[0] + 68u), c.f[3]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[23].w[0] - 17704u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0D88u) [[unlikely]] return; }
L_002C0D88:
    set32(c.r[2], ld32((c.r[2].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0DA0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0DA8; } }
L_002C0DA0:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 2;
L_002C0DA8:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_002C0DAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002C0DD4; } }
L_002C0DB4:
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[4], c.r[22].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22808u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 8;
L_002C0DD4:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0E08:
    c.f[0] = ld32((c.r[4].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0E18:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0E28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E5Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C0E5Cu) [[unlikely]] return; }
L_002C0E5C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E68u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002C0E68u) [[unlikely]] return; }
L_002C0E68:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E84u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C0E84u) [[unlikely]] return; }
L_002C0E84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E90u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002C0E90u) [[unlikely]] return; }
L_002C0E90:
    fpu_div(c, 0u, c.f[0], c.f[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0EC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C0EDC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C0F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0F4C; } }
L_002C0EDC:
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 29568u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0F08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0F14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0F20:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0F14u | kUnwind; return; } goto L_002C0F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 29376u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0F4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0F58:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 29184u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0F8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0F98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0FA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0FE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28992u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0FDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0FE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0FF8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 20ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1010:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C102C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C103C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C104C; } }
L_002C102C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[2], c.r[2].w[0] + 3928u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C103C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[2], c.r[2].w[0] + 4008u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C104C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[2], c.r[2].w[0] + 4088u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1060:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 272u), c.f[24]);
    set32(c.r[22], 0u + 1u);
    st32((c.r[29].w[0] + 264u), c.f[23]);
    st32((c.r[29].w[0] + 256u), c.f[22]);
    st32((c.r[29].w[0] + 248u), c.f[21]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10B8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C10B8u) [[unlikely]] return; }
L_002C10B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[20] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10D4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002C10D4u) [[unlikely]] return; }
L_002C10D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[20], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[24] = c.r[1].w[0];
    set32(c.r[19], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[23] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 80u);
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.budget -= 11;
L_002C1100:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1114u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C1114u) [[unlikely]] return; }
L_002C1114:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1128u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C1128u) [[unlikely]] return; }
L_002C1128:
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = c.f[21];
    c.f[13] = fp::sub(c.f[13], c.f[22]);
    c.f[14] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1148u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C1148u) [[unlikely]] return; }
L_002C1148:
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = c.f[21];
    c.f[13] = fp::add(c.f[13], c.f[22]);
    c.f[14] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1168u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C1168u) [[unlikely]] return; }
L_002C1168:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C117Cu);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002C117Cu) [[unlikely]] return; }
L_002C117C:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002C1194; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C11B4; } }
L_002C1194:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C11B0; } }
    c.f[20] = fp::mul(c.f[20], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1100u | kUnwind; return; } goto L_002C1100; } }
L_002C11B0:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_002C11B4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[24] = ld32((c.r[29].w[0] + 272u));
    c.f[23] = ld32((c.r[29].w[0] + 264u));
    c.f[22] = ld32((c.r[29].w[0] + 256u));
    c.f[21] = ld32((c.r[29].w[0] + 248u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C11F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[13] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st32((c.r[16].w[0] + 13080u), c.r[17].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[16].w[0] + 13136u), c.r[17].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1230u);  if (depth < kMaxDepth) unit_008A(c, 180u, depth + 1u); else { c.pc = 0x0032A770u; return; } if (c.pc != 0x002C1230u) [[unlikely]] return; }
L_002C1230:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1240u);  if (depth < kMaxDepth) unit_0019(c, 20u, depth + 1u); else { c.pc = 0x00164460u; return; } if (c.pc != 0x002C1240u) [[unlikely]] return; }
L_002C1240:
    st32((c.r[16].w[0] + 13144u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 13132u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 13128u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 13092u), 0u);
    st32((c.r[16].w[0] + 12932u), 0u);
    st32((c.r[16].w[0] + 13124u), 0u);
    st16((c.r[16].w[0] + 11354u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1274u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C1274u) [[unlikely]] return; }
L_002C1274:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = ld32((c.r[2].w[0] - 7196u));
    set32(c.r[5], 0u + 150u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C12BCu);  if (depth < kMaxDepth) unit_006F(c, 66u, depth + 1u); else { c.pc = 0x002BCEA8u; return; } if (c.pc != 0x002C12BCu) [[unlikely]] return; }
L_002C12BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C12D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 148u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C1304; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 148u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1304u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C1304u) [[unlikely]] return; }
L_002C1304:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1310u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C1310u) [[unlikely]] return; }
L_002C1310:
    c.f[13] = ld32((c.r[16].w[0] + 11896u));
    c.f[12] = ld32((c.r[16].w[0] + 11888u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1320u);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A298u; return; } if (c.pc != 0x002C1320u) [[unlikely]] return; }
L_002C1320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1350u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002C1350u) [[unlikely]] return; }
L_002C1350:
    c.f[1] = ld32((c.r[16].w[0] + 11876u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44830000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 11872u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 11880u));
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 13128u), 0u);
    st32((c.r[16].w[0] + 128u), c.f[2]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13A0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C13A0u) [[unlikely]] return; }
L_002C13A0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C13B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13E4u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002C13E4u) [[unlikely]] return; }
L_002C13E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 13096u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1458; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1458; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 150u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1458; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1458; } }
    st32((c.r[16].w[0] + 13096u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 150u);
    c.f[12] = ld32((c.r[2].w[0] - 7196u));
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C144Cu);  if (depth < kMaxDepth) unit_006F(c, 66u, depth + 1u); else { c.pc = 0x002BCEA8u; return; } if (c.pc != 0x002C144Cu) [[unlikely]] return; }
L_002C144C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C145C; } }
L_002C1458:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C145C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1488u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002C1488u) [[unlikely]] return; }
L_002C1488:
    set32(c.r[2], ld32((c.r[16].w[0] + 11504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C14C4; } }
    set32(c.r[4], c.r[16].w[0] + 11504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14A0u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x002C14A0u) [[unlikely]] return; }
L_002C14A0:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C14C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    c.f[0] = ld32((c.r[16].w[0] + 11556u));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C14E8; } }
L_002C14C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u - 1025u);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
L_002C14E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1510:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + 16888u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[20].w[0] + 16784u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    set32(c.r[4], 0u - 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[5], 0u + 24u);
    c.budget -= 18;
L_002C1558:
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1558u | kUnwind; return; } goto L_002C1558; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st16((c.r[20].w[0] + 16784u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C158Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002C158Cu) [[unlikely]] return; }
L_002C158C:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C15A8u) [[unlikely]] return; }
L_002C15A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 165u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C15C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 11350u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002C15C8:
    set32(c.r[2], 0u + 1500u);
    set32(c.r[7], 0u + 8000u);
    if (c.r[4].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 25u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15E8u);  if (depth < kMaxDepth) unit_0068(c, 289u, depth + 1u); else { c.pc = 0x002A3920u; return; } if (c.pc != 0x002C15E8u) [[unlikely]] return; }
L_002C15E8:
    set32(c.r[16], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C1664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[22], 0u + 1u);
    set32(c.r[21], c.r[2].w[0] + 16788u);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 20u);
    c.budget -= 5;
L_002C1608:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1614u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x002C1614u) [[unlikely]] return; }
L_002C1614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002C1654; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1654; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1654; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16784u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 16784u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 16784u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002C1654:
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1608u | kUnwind; return; } goto L_002C1608; } }
L_002C1664:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 16784u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C167C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C16C4; } }
L_002C167C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], c.r[2].w[0] + 16788u);
    set32(c.r[6], c.r[3].w[0] + 16888u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 24u);
    c.budget -= 7;
L_002C1698:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1698u | kUnwind; return; } goto L_002C1698; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C16C4:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C16F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 16888u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 16784u);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11344u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1750u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002C1750u) [[unlikely]] return; }
L_002C1750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1764; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1888; } }
L_002C1764:
    c.f[21] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C1798; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C17B8; } }
L_002C1798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C17B8; } }
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_002C17B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17C4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002C17C4u) [[unlikely]] return; }
L_002C17C4:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.f[12] = c.f[21];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17E0u);  if (depth < kMaxDepth) unit_008A(c, 180u, depth + 1u); else { c.pc = 0x0032A770u; return; } if (c.pc != 0x002C17E0u) [[unlikely]] return; }
L_002C17E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.f[21] = c.f[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C182Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C182Cu) [[unlikely]] return; }
L_002C182C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = ld32((c.r[2].w[0] - 20672u));
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1854u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C1854u) [[unlikely]] return; }
L_002C1854:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 13008u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 13016u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    st32((c.r[18].w[0] + 13012u), c.f[1]);
    c.budget -= 13;
L_002C1888:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C18B0:
    c.f[0] = ld32((c.r[4].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C18C0:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C18D0:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C18E0:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C18F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1918u);  if (depth < kMaxDepth) unit_0070(c, 134u, depth + 1u); else { c.pc = 0x002C1948u; return; } if (c.pc != 0x002C1918u) [[unlikely]] return; }
L_002C1918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1924; } }
    st16((c.r[16].w[0] + 10242u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C1924:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1938:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10242u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1948:
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[3], 0u + 165u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C196C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 11350u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C1970; } }
L_002C196C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1980:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 16888u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11344u)));
    set32(c.r[5], c.r[5].w[0] + 16784u);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A08u);  if (depth < kMaxDepth) unit_008A(c, 145u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x002C1A08u) [[unlikely]] return; }
L_002C1A08:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 13144u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1A28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[17].w[0] - 7224u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] - 7224u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[21] = ld32((c.r[16].w[0] + 12888u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[20] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.f[20] = fp::mul(c.f[21], c.f[20]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A84u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C1A84u) [[unlikely]] return; }
L_002C1A84:
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[16].w[0] + 13024u);
    c.f[14] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = fp::mul(c.f[20], c.f[14]);
    c.f[13] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C1AACu) [[unlikely]] return; }
L_002C1AAC:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[16].w[0] + 11284u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 11292u), c.f[21]);
    st32((c.r[16].w[0] + 11288u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[16].w[0] + 12992u), c.f[2]);
    st32((c.r[16].w[0] + 11300u), c.f[0]);
    st32((c.r[16].w[0] + 12996u), c.f[3]);
    st32((c.r[16].w[0] + 13000u), c.f[1]);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1B08:
    set32(c.r[2], ld32((c.r[4].w[0] + 11280u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1B20:
    set32(c.r[2], ld32((c.r[4].w[0] + 11280u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1B38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C1B68; } }
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1C40; } }
L_002C1B68:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C1B90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 13076u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1B90; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C1C04; } }
L_002C1B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11336u)));
    set32(c.r[17], c.r[2].w[0] - 7224u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1C04; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BB8u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x002C1BB8u) [[unlikely]] return; }
L_002C1BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1C04; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1C40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = c.r[5].d[0] | 512ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BFCu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002C1BFCu) [[unlikely]] return; }
L_002C1BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1C40; } }
L_002C1C04:
    set32(c.r[3], ld32((c.r[16].w[0] + 11280u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1C34; } }
    set32(c.r[2], 0u - 513u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C2Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C1C2Cu) [[unlikely]] return; }
L_002C1C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1C40; } }
L_002C1C34:
    set32(c.r[2], 0u - 513u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 3;
L_002C1C40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1C58:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.f[1] = ld32((c.r[19].w[0] + 132u));
    c.f[2] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[19].w[0] + 12992u), c.f[0]);
    st32((c.r[19].w[0] + 12996u), c.f[1]);
    st32((c.r[19].w[0] + 13000u), c.f[2]);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C1D4C; } }
    set32(c.r[16], c.r[19].w[0] + 13008u);
    set32(c.r[18], c.r[19].w[0] + 12992u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CB0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C1CB0u) [[unlikely]] return; }
L_002C1CB0:
    set32(c.r[17], c.r[19].w[0] + 13024u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CD4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C1CD4u) [[unlikely]] return; }
L_002C1CD4:
    c.f[13] = ld32((c.r[19].w[0] + 11288u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[19].w[0] + 11292u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[15] = ld32((c.r[19].w[0] + 11300u));
    c.f[12] = ld32((c.r[19].w[0] + 11284u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CF4u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BFF68u; return; } if (c.pc != 0x002C1CF4u) [[unlikely]] return; }
L_002C1CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 23080u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D10u);  if (depth < kMaxDepth) unit_006F(c, 196u, depth + 1u); else { c.pc = 0x002BFE80u; return; } if (c.pc != 0x002C1D10u) [[unlikely]] return; }
L_002C1D10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D20u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C1D20u) [[unlikely]] return; }
L_002C1D20:
    c.f[2] = ld32((c.r[19].w[0] + 12992u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 12996u));
    c.f[1] = ld32((c.r[19].w[0] + 13000u));
    st32((c.r[19].w[0] + 128u), c.f[2]);
    st32((c.r[19].w[0] + 132u), c.f[0]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D44u);  if (depth < kMaxDepth) unit_0018(c, 443u, depth + 1u); else { c.pc = 0x00163E18u; return; } if (c.pc != 0x002C1D44u) [[unlikely]] return; }
L_002C1D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1D78; } }
L_002C1D4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D58u);  if (depth < kMaxDepth) unit_0070(c, 108u, depth + 1u); else { c.pc = 0x002C1470u; return; } if (c.pc != 0x002C1D58u) [[unlikely]] return; }
L_002C1D58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 132u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D68u);  if (depth < kMaxDepth) unit_0070(c, 108u, depth + 1u); else { c.pc = 0x002C1470u; return; } if (c.pc != 0x002C1D68u) [[unlikely]] return; }
L_002C1D68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D78u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x002C1D78u) [[unlikely]] return; }
L_002C1D78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1D98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DC4u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002C1DC4u) [[unlikely]] return; }
L_002C1DC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DD0u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002C1DD0u) [[unlikely]] return; }
L_002C1DD0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1DF0; } }
    set32(c.r[2], c.r[9].w[0] + 16944u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 2;
L_002C1DF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[8], c.r[9].w[0] + 16944u);
    set32(c.r[3], c.r[8].w[0] + 76u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2034; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 13096u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C20D4; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C20D4; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1E84; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1E84; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 132u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D4; } }
L_002C1E84:
    set32(c.r[3], c.r[9].w[0] + 16944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1EA8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1EC8; } }
L_002C1EA8:
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1F00; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1F00; } }
L_002C1EC8:
    set32(c.r[3], c.r[7].w[0] - 1u);
    set32(c.r[4], c.r[9].w[0] + 16944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 2u);
    st32((c.r[3].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 132u), c.r[6].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D4; } }
L_002C1F00:
    set32(c.r[5], c.r[9].w[0] + 16944u);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1F34; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1F34; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1FB4; } }
L_002C1F34:
    set32(c.r[5], c.r[9].w[0] + 16944u);
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1F88; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1F88; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 132u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D4; } }
L_002C1F88:
    set32(c.r[5], c.r[9].w[0] + 16944u);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1FDC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1FDC; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_002C1FB4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D4; } }
L_002C1FDC:
    set32(c.r[6], c.r[9].w[0] + 16944u);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C20D4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C20D4; } }
    set32(c.r[3], c.r[7].w[0] - 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 132u), c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D4; } }
L_002C2034:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C2084; } }
    st32((c.r[5].w[0]), 0u);
    set32(c.r[2], c.r[6].w[0] >> 31);
    set32(c.r[5], 0u + 100u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 16944u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002C2060u);  goto L_002C2064; }
L_002C2064:
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2078u);  if (depth < kMaxDepth) unit_0070(c, 182u, depth + 1u); else { c.pc = 0x002C24E8u; return; } if (c.pc != 0x002C2078u) [[unlikely]] return; }
L_002C2078:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D8; } }
L_002C2084:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C20D4; } }
    st32((c.r[5].w[0]), 0u);
    set32(c.r[2], c.r[6].w[0] >> 31);
    set32(c.r[5], 0u + 100u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 16944u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002C20B0u);  goto L_002C20B4; }
L_002C20B4:
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20C8u);  if (depth < kMaxDepth) unit_0070(c, 215u, depth + 1u); else { c.pc = 0x002C2C00u; return; } if (c.pc != 0x002C20C8u) [[unlikely]] return; }
L_002C20C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C20D8; } }
L_002C20D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C20D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C20F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C211Cu);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A178u; return; } if (c.pc != 0x002C211Cu) [[unlikely]] return; }
L_002C211C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2128u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002C2128u) [[unlikely]] return; }
L_002C2128:
    c.f[12] = 0u;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2148u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C2148u) [[unlikely]] return; }
L_002C2148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2168u);  if (depth < kMaxDepth) unit_008A(c, 121u, depth + 1u); else { c.pc = 0x00329D98u; return; } if (c.pc != 0x002C2168u) [[unlikely]] return; }
L_002C2168:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[4] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.f[5] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[3] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C21F4; } }
    c.f[1] = fp::add(c.f[4], c.f[5]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C21D4; } }
    st32((c.r[29].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 8u), c.f[5]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C21DC; } }
L_002C21D4:
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.budget -= 2;
L_002C21DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21ECu);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002C21ECu) [[unlikely]] return; }
L_002C21EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2240; } }
L_002C21F4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C2240; } }
    c.f[1] = fp::add(c.f[4], c.f[5]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2228; } }
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2230; } }
L_002C2228:
    st32((c.r[29].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 8u), c.f[5]);
    c.budget -= 2;
L_002C2230:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2240u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002C2240u) [[unlikely]] return; }
L_002C2240:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2260:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 170u);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C22C8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 170u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22C4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C22C4u) [[unlikely]] return; }
L_002C22C4:
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    c.budget -= 1;
L_002C22C8:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], 0u + 5u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[17].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 10056u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22F0u);  if (depth < kMaxDepth) unit_006F(c, 34u, depth + 1u); else { c.pc = 0x002BC818u; return; } if (c.pc != 0x002C22F0u) [[unlikely]] return; }
L_002C22F0:
    c.f[20] = fp::mul(c.f[0], c.f[20]);
    c.f[12] = ld32((c.r[17].w[0] + 12920u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2314u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C2314u) [[unlikely]] return; }
L_002C2314:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] - 20036u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    set32(c.r[6], ld32((c.r[17].w[0] + 11408u)));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    st32((c.r[17].w[0] + 13024u), c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    set32(c.r[2], c.r[3].w[0] + 17136u);
    st32((c.r[17].w[0] + 13032u), c.f[20]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 212u), c.f[1]);
    st32((c.r[17].w[0] + 216u), c.f[20]);
    set32(c.r[5], ld32((c.r[3].w[0] + 17136u)));
    c.budget -= 22;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002C239C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002C2370:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002C2388; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C23A0; } }
L_002C2388:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 112u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2370u | kUnwind; return; } goto L_002C2370; } }
L_002C239C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C23A0:
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23B0u);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A178u; return; } if (c.pc != 0x002C23B0u) [[unlikely]] return; }
L_002C23B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23C0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C23C0u) [[unlikely]] return; }
L_002C23C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[2].w[0] - 20020u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[4] = ld32((c.r[2].w[0] - 20024u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C240Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C240Cu) [[unlikely]] return; }
L_002C240C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C245C; } }
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C244Cu);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C244Cu) [[unlikely]] return; }
L_002C244C:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 4;
L_002C245C:
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], 0u + 16u);
    st8((c.r[17].w[0] + 9924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[19].w[0] - 10056u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    c.f[0] = ld32((c.r[2].w[0] - 20040u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 84u), 0u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st64((c.r[17].w[0] + 560u), c.r[3].d[0]);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2498u);  if (depth < kMaxDepth) unit_006F(c, 40u, depth + 1u); else { c.pc = 0x002BC8B0u; return; } if (c.pc != 0x002C2498u) [[unlikely]] return; }
L_002C2498:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24ACu);  if (depth < kMaxDepth) unit_006F(c, 41u, depth + 1u); else { c.pc = 0x002BC8C8u; return; } if (c.pc != 0x002C24ACu) [[unlikely]] return; }
L_002C24AC:
    st32((c.r[17].w[0] + 13128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24C0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C24C0u) [[unlikely]] return; }
L_002C24C0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C24E8:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    set32(c.r[21], c.r[29].w[0] + 84u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 17136u)));
    set32(c.r[2], c.r[2].w[0] + 17136u);
    set32(c.r[8], ld32((c.r[17].w[0] + 11408u)));
    c.budget -= 23;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002C2578; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_002C2550:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_002C2784; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + 112u);
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2550u | kUnwind; return; } goto L_002C2550; } }
L_002C2578:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C257C:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 170u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C25A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 170u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25A4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C25A4u) [[unlikely]] return; }
L_002C25A4:
    st16((c.r[17].w[0] + 11366u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C25A8:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[2], 0u + 5u);
    st16((c.r[17].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[30].w[0] - 10056u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25C8u);  if (depth < kMaxDepth) unit_006F(c, 34u, depth + 1u); else { c.pc = 0x002BC818u; return; } if (c.pc != 0x002C25C8u) [[unlikely]] return; }
L_002C25C8:
    c.r[20].d[0] = 0ull + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25DCu);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A178u; return; } if (c.pc != 0x002C25DCu) [[unlikely]] return; }
L_002C25DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2664; } }
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2634u);  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C4078u; return; } if (c.pc != 0x002C2634u) [[unlikely]] return; }
L_002C2634:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2644u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002C2644u) [[unlikely]] return; }
L_002C2644:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2664; } }
    set32(c.r[19], c.r[18].w[0] + 80u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_002C2664:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C26F4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002C26F4; } }
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26C4u);  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C4078u; return; } if (c.pc != 0x002C26C4u) [[unlikely]] return; }
L_002C26C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26D4u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002C26D4u) [[unlikely]] return; }
L_002C26D4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C26F4; } }
    set32(c.r[19], c.r[18].w[0] + 48u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_002C26F4:
    c.f[12] = ld32((c.r[17].w[0] + 12920u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2708u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C2708u) [[unlikely]] return; }
L_002C2708:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 16944u);
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[2].w[0] - 20016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[3].w[0] - 20012u));
    set32(c.r[5], 0u + 9u);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C277Cu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C277Cu) [[unlikely]] return; }
L_002C277C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2890; } }
L_002C2784:
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C257Cu | kUnwind; return; } goto L_002C257C; } }
L_002C2790:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002C27E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[2].w[0] - 20008u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[3].w[0] - 20004u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2890; } }
L_002C27E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002C2804; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27FCu);  if (depth < kMaxDepth) unit_0070(c, 170u, depth + 1u); else { c.pc = 0x002C2260u; return; } if (c.pc != 0x002C27FCu) [[unlikely]] return; }
L_002C27FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2900; } }
L_002C2804:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2814u);  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C4078u; return; } if (c.pc != 0x002C2814u) [[unlikely]] return; }
L_002C2814:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[17].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2834u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C2834u) [[unlikely]] return; }
L_002C2834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002C2880; } }
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 76u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2870u);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C2870u) [[unlikely]] return; }
L_002C2870:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 4;
L_002C2880:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2890u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C2890u) [[unlikely]] return; }
L_002C2890:
    set32(c.r[2], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[17].w[0] + 9924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    set32(c.r[4], c.r[30].w[0] - 10056u);
    c.f[0] = ld32((c.r[3].w[0] - 20040u));
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[17].w[0] + 84u), 0u);
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 212u), c.f[1]);
    st32((c.r[17].w[0] + 13024u), c.f[3]);
    st32((c.r[17].w[0] + 13032u), c.f[2]);
    st64((c.r[17].w[0] + 560u), c.r[6].d[0]);
    st32((c.r[17].w[0] + 208u), c.f[3]);
    st32((c.r[17].w[0] + 216u), c.f[2]);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28ECu);  if (depth < kMaxDepth) unit_006F(c, 41u, depth + 1u); else { c.pc = 0x002BC8C8u; return; } if (c.pc != 0x002C28ECu) [[unlikely]] return; }
L_002C28EC:
    st32((c.r[17].w[0] + 13128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2900u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C2900u) [[unlikely]] return; }
L_002C2900:
    set32(c.r[2], 0u + 1u);
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2938:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 171u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C2980; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 171u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2980u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C2980u) [[unlikely]] return; }
L_002C2980:
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C29C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 171u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29C0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C29C0u) [[unlikely]] return; }
L_002C29C0:
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    c.budget -= 1;
L_002C29C4:
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[13] = c.r[1].w[0];
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29E0u);  if (depth < kMaxDepth) unit_008A(c, 180u, depth + 1u); else { c.pc = 0x0032A770u; return; } if (c.pc != 0x002C29E0u) [[unlikely]] return; }
L_002C29E0:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] - 10056u);
    st16((c.r[17].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 5u);
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29FCu);  if (depth < kMaxDepth) unit_006F(c, 34u, depth + 1u); else { c.pc = 0x002BC818u; return; } if (c.pc != 0x002C29FCu) [[unlikely]] return; }
L_002C29FC:
    c.f[20] = fp::mul(c.f[0], c.f[20]);
    c.f[12] = ld32((c.r[17].w[0] + 12920u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A20u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C2A20u) [[unlikely]] return; }
L_002C2A20:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] - 20036u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    set32(c.r[6], ld32((c.r[17].w[0] + 11408u)));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    st32((c.r[17].w[0] + 13024u), c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    set32(c.r[2], c.r[3].w[0] + 17136u);
    st32((c.r[17].w[0] + 13032u), c.f[20]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 212u), c.f[1]);
    st32((c.r[17].w[0] + 216u), c.f[20]);
    set32(c.r[5], ld32((c.r[3].w[0] + 17136u)));
    c.budget -= 22;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002C2AAC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_002C2A80:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002C2A98; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2AB0; } }
L_002C2A98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 112u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2A80u | kUnwind; return; } goto L_002C2A80; } }
L_002C2AAC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2AB0:
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AC0u);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A178u; return; } if (c.pc != 0x002C2AC0u) [[unlikely]] return; }
L_002C2AC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AD0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C2AD0u) [[unlikely]] return; }
L_002C2AD0:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] - 20020u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[4] = ld32((c.r[2].w[0] - 20024u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B24u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C2B24u) [[unlikely]] return; }
L_002C2B24:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C2B74; } }
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B64u);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C2B64u) [[unlikely]] return; }
L_002C2B64:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 4;
L_002C2B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[19].w[0] - 10056u);
    c.f[0] = ld32((c.r[2].w[0] - 20040u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B9Cu);  if (depth < kMaxDepth) unit_006F(c, 40u, depth + 1u); else { c.pc = 0x002BC8B0u; return; } if (c.pc != 0x002C2B9Cu) [[unlikely]] return; }
L_002C2B9C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BB0u);  if (depth < kMaxDepth) unit_006F(c, 41u, depth + 1u); else { c.pc = 0x002BC8C8u; return; } if (c.pc != 0x002C2BB0u) [[unlikely]] return; }
L_002C2BB0:
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], 0u + 16u);
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 13128u), 0u);
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 9924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st64((c.r[17].w[0] + 560u), c.r[5].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BD8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C2BD8u) [[unlikely]] return; }
L_002C2BD8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2C00:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    set32(c.r[21], c.r[29].w[0] + 84u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 17136u)));
    set32(c.r[2], c.r[2].w[0] + 17136u);
    set32(c.r[8], ld32((c.r[17].w[0] + 11408u)));
    c.budget -= 23;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002C2C90; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_002C2C68:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_002C2E98; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + 112u);
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2C68u | kUnwind; return; } goto L_002C2C68; } }
L_002C2C90:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2C94:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 171u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C2CC0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 171u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CBCu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C2CBCu) [[unlikely]] return; }
L_002C2CBC:
    st16((c.r[17].w[0] + 11366u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C2CC0:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[2], 0u + 5u);
    st16((c.r[17].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[30].w[0] - 10056u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CE0u);  if (depth < kMaxDepth) unit_006F(c, 34u, depth + 1u); else { c.pc = 0x002BC818u; return; } if (c.pc != 0x002C2CE0u) [[unlikely]] return; }
L_002C2CE0:
    c.r[20].d[0] = 0ull + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CF4u);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A178u; return; } if (c.pc != 0x002C2CF4u) [[unlikely]] return; }
L_002C2CF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2D7C; } }
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D4Cu);  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C4078u; return; } if (c.pc != 0x002C2D4Cu) [[unlikely]] return; }
L_002C2D4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D5Cu);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002C2D5Cu) [[unlikely]] return; }
L_002C2D5C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2D7C; } }
    set32(c.r[19], c.r[18].w[0] + 80u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_002C2D7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2E0C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002C2E0C; } }
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DDCu);  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C4078u; return; } if (c.pc != 0x002C2DDCu) [[unlikely]] return; }
L_002C2DDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DECu);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002C2DECu) [[unlikely]] return; }
L_002C2DEC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E0C; } }
    set32(c.r[19], c.r[18].w[0] + 48u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_002C2E0C:
    c.f[12] = ld32((c.r[17].w[0] + 12920u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E20u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C2E20u) [[unlikely]] return; }
L_002C2E20:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 16944u);
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2EA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] - 20016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[3].w[0] - 20012u));
    set32(c.r[5], 0u + 9u);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E90u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002C2E90u) [[unlikely]] return; }
L_002C2E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2FA0; } }
L_002C2E98:
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2C94u | kUnwind; return; } goto L_002C2C94; } }
L_002C2EA4:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002C2EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] - 20008u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[3].w[0] - 20004u));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2FA0; } }
L_002C2EF4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002C2F14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F0Cu);  if (depth < kMaxDepth) unit_0070(c, 201u, depth + 1u); else { c.pc = 0x002C2938u; return; } if (c.pc != 0x002C2F0Cu) [[unlikely]] return; }
L_002C2F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3010; } }
L_002C2F14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F24u);  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C4078u; return; } if (c.pc != 0x002C2F24u) [[unlikely]] return; }
L_002C2F24:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[17].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F44u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C2F44u) [[unlikely]] return; }
L_002C2F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002C2F90; } }
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 76u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F80u);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C2F80u) [[unlikely]] return; }
L_002C2F80:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 4;
L_002C2F90:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FA0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C2FA0u) [[unlikely]] return; }
L_002C2FA0:
    set32(c.r[2], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[17].w[0] + 9924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11352u)));
    set32(c.r[4], c.r[30].w[0] - 10056u);
    c.f[0] = ld32((c.r[3].w[0] - 20040u));
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[17].w[0] + 84u), 0u);
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 212u), c.f[1]);
    st32((c.r[17].w[0] + 13024u), c.f[3]);
    st32((c.r[17].w[0] + 13032u), c.f[2]);
    st64((c.r[17].w[0] + 560u), c.r[6].d[0]);
    st32((c.r[17].w[0] + 208u), c.f[3]);
    st32((c.r[17].w[0] + 216u), c.f[2]);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FFCu);  if (depth < kMaxDepth) unit_006F(c, 41u, depth + 1u); else { c.pc = 0x002BC8C8u; return; } if (c.pc != 0x002C2FFCu) [[unlikely]] return; }
L_002C2FFC:
    st32((c.r[17].w[0] + 13128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3010u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C3010u) [[unlikely]] return; }
L_002C3010:
    set32(c.r[2], 0u + 1u);
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3048:
    set32(c.r[29], c.r[29].w[0] - 688u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 169u);
    st64((c.r[29].w[0] + 624u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 672u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C3250; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3250; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 16944u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], ld32((c.r[4].w[0] - 19992u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] - 19988u)));
    st32((c.r[3].w[0] + 76u), 0u);
    set32(c.r[5], 0u + 169u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 11844u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[17].w[0] + 11408u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30CCu);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002C30CCu) [[unlikely]] return; }
L_002C30CC:
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30E0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C30E0u) [[unlikely]] return; }
L_002C30E0:
    c.f[12] = ld32((c.r[17].w[0] + 11888u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 11892u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[17].w[0] + 11896u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3108u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C3108u) [[unlikely]] return; }
L_002C3108:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3114u);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x002C3114u) [[unlikely]] return; }
L_002C3114:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3144u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002C3144u) [[unlikely]] return; }
L_002C3144:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 11888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3154u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C3154u) [[unlikely]] return; }
L_002C3154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] - 20000u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[6], ld32((c.r[17].w[0] + 11408u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C319Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C319Cu) [[unlikely]] return; }
L_002C319C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[2] = ld32((c.r[2].w[0] - 19996u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.f[12] = fp::add(c.f[1], c.f[12]);
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[13] = fp::add(c.f[13], c.f[2]);
    c.f[14] = fp::add(c.f[0], c.f[14]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31D4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C31D4u) [[unlikely]] return; }
L_002C31D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31DCu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C31DCu) [[unlikely]] return; }
L_002C31DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C31F8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31F8u);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C31F8u) [[unlikely]] return; }
L_002C31F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C320Cu);  if (depth < kMaxDepth) unit_003B(c, 304u, depth + 1u); else { c.pc = 0x001EF8E8u; return; } if (c.pc != 0x002C320Cu) [[unlikely]] return; }
L_002C320C:
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[4], c.r[17].w[0] + 13024u);
    st32((c.r[17].w[0] + 212u), 0u);
    c.f[15] = c.f[20];
    c.f[12] = ld32((c.r[17].w[0] + 208u));
    st32((c.r[17].w[0] + 216u), 0u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3234u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C3234u) [[unlikely]] return; }
L_002C3234:
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 13128u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3250u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C3250u) [[unlikely]] return; }
L_002C3250:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.f[20] = ld32((c.r[29].w[0] + 672u));
    set32(c.r[29], c.r[29].w[0] + 688u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3270:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 169u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 688u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C3434; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3434; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], 0u + 15u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[7], 0u + 8u);
    st32((c.r[17].w[0] + 11408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 169u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32D8u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002C32D8u) [[unlikely]] return; }
L_002C32D8:
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32ECu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C32ECu) [[unlikely]] return; }
L_002C32EC:
    c.f[14] = ld32((c.r[18].w[0] + 72u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[18].w[0] + 64u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[18].w[0] + 68u));
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3314u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C3314u) [[unlikely]] return; }
L_002C3314:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3320u);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x002C3320u) [[unlikely]] return; }
L_002C3320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3350u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002C3350u) [[unlikely]] return; }
L_002C3350:
    set32(c.r[6], ld32((c.r[17].w[0] + 11408u)));
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3380u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C3380u) [[unlikely]] return; }
L_002C3380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[2] = ld32((c.r[2].w[0] - 19996u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.f[12] = fp::add(c.f[1], c.f[12]);
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[13] = fp::add(c.f[13], c.f[2]);
    c.f[14] = fp::add(c.f[0], c.f[14]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C33B8u) [[unlikely]] return; }
L_002C33B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33C0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C33C0u) [[unlikely]] return; }
L_002C33C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C33DC; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33DCu);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C33DCu) [[unlikely]] return; }
L_002C33DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33F0u);  if (depth < kMaxDepth) unit_003B(c, 304u, depth + 1u); else { c.pc = 0x001EF8E8u; return; } if (c.pc != 0x002C33F0u) [[unlikely]] return; }
L_002C33F0:
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[4], c.r[17].w[0] + 13024u);
    st32((c.r[17].w[0] + 212u), 0u);
    c.f[15] = c.f[20];
    c.f[12] = ld32((c.r[17].w[0] + 208u));
    st32((c.r[17].w[0] + 216u), 0u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3418u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C3418u) [[unlikely]] return; }
L_002C3418:
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 13128u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3434u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C3434u) [[unlikely]] return; }
L_002C3434:
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.f[20] = ld32((c.r[29].w[0] + 688u));
    set32(c.r[29], c.r[29].w[0] + 704u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3458:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[26]);
    st32((c.r[29].w[0] + 152u), c.f[25]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[24]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C349Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C349Cu) [[unlikely]] return; }
L_002C349C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34ACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C34ACu) [[unlikely]] return; }
L_002C34AC:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 24u));
    c.f[24] = fp::sub(c.f[2], c.f[1]);
    c.f[25] = ld32((c.r[29].w[0] + 4u));
    c.f[23] = fp::sub(c.f[3], c.f[0]);
    c.f[26] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = fp::mul(c.f[24], c.f[24]);
    c.f[0] = fp::mul(c.f[23], c.f[23]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.f[22] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[22]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C34F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34F4u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002C34F4u) [[unlikely]] return; }
L_002C34F4:
    c.f[22] = c.f[0];
    c.budget -= 1;
L_002C34F8:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] - 20032u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[21] = ld32((c.r[4].w[0] - 20036u));
    c.f[2] = ld32((c.r[3].w[0] - 20028u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[2].w[0] - 20040u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[22], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.f[3] = fp::add(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = c.f[21] ^ fp::kSign;
    fpu_div(c, 20u, c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[21], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[25], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[26], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 12u, c.f[3], c.f[4]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C358C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C358Cu);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002C358Cu) [[unlikely]] return; }
L_002C358C:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[21]);
    fpu_div(c, 20u, c.f[22], c.f[20]);
    st32((c.r[29].w[0] + 48u), c.f[24]);
    st32((c.r[29].w[0] + 56u), c.f[23]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35C8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C35C8u) [[unlikely]] return; }
L_002C35C8:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35F0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C35F0u) [[unlikely]] return; }
L_002C35F0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[26] = ld32((c.r[29].w[0] + 160u));
    c.f[25] = ld32((c.r[29].w[0] + 152u));
    c.f[24] = ld32((c.r[29].w[0] + 144u));
    c.f[23] = ld32((c.r[29].w[0] + 136u));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3628:
    set32(c.r[29], c.r[29].w[0] - 688u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[30]);
    set32(c.r[4], c.r[2].w[0] - 11856u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C368C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3690; } }
L_002C368C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C36CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C36C0; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C36C4; } }
L_002C36C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C36C4:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002C36CC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C3C08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C373C; } }
L_002C36E8:
    set32(c.r[4], c.r[30].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C3714; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3718; } }
L_002C3714:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3718:
    set32(c.r[4], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[20].w[0] << 7);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[5].d[0];
    c.budget -= 9;
L_002C373C:
    set32(c.r[4], c.r[30].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C3768; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C376C; } }
L_002C3768:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C376C:
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C36E8u | kUnwind; return; } goto L_002C36E8; } }
    set32(c.r[19], c.r[18].w[0] + 17136u);
    st32((c.r[18].w[0] + 17136u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C3C08; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C379Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x002C379Cu) [[unlikely]] return; }
L_002C379C:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 112u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 27904u);
    set32(c.r[8], c.r[8].w[0] - 27864u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 1165u);
    set32(c.r[23], 0u - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], 0u + 268u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C37D8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002C37D8u) [[unlikely]] return; }
L_002C37D8:
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C37F4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002C37F4u) [[unlikely]] return; }
L_002C37F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[2].w[0] - 11856u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C38C0; } }
    c.budget -= 1;
L_002C3808:
    set32(c.r[3], c.r[30].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[3].w[0] + 540u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_002C382C; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3830; } }
L_002C382C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3830:
    set32(c.r[4], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[2], c.r[20].w[0] << 7);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C38BC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 112u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38A4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C38A4u) [[unlikely]] return; }
L_002C38A4:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 6;
L_002C38BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C38C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_002C38E0; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C38E4; } }
L_002C38E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C38E4:
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3808u | kUnwind; return; } goto L_002C3808; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 17136u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C39E0; } }
    set32(c.r[30], 0u + 112u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[22], 0u + 12u);
    set32(c.r[21], 0u - 1u);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_002C3920:
    mmi::mult(c, 0, c.r[20].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 17136u);
    set32(c.r[4], ld32((c.r[23].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3954u);  if (depth < kMaxDepth) unit_007B(c, 72u, depth + 1u); else { c.pc = 0x002ECB78u; return; } if (c.pc != 0x002C3954u) [[unlikely]] return; }
L_002C3954:
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3964; } }
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002C3964:
    set32(c.r[9], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[21].d[0];  if (t) { goto L_002C39CC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 17136u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C39CC; } }
    set32(c.r[11], c.r[17].w[0] + 17136u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 2;
L_002C3988:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[6].d[0];  if (t) { goto L_002C39B8; } }
    set32(c.r[7], 0u + 112u);
    set32(c.r[5], ld32((c.r[11].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_002C39B8; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 3;
L_002C39B8:
    set32(c.r[2], ld32((c.r[10].w[0] + 17136u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3988u | kUnwind; return; } goto L_002C3988; } }
L_002C39CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 17136u)));
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3920u | kUnwind; return; } goto L_002C3920; } }
L_002C39E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 17136u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C3A78; } }
    c.r[14].d[0] = c.r[18].d[0] + 0ull;
    c.r[13].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[12], 0u + 112u);
    c.r[11].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_002C3A00:
    set32(c.r[2], ld32((c.r[14].w[0] + 17136u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[20].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C3A64; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[13].w[0] + 17136u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 5;
L_002C3A28:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[5].d[0];  if (t) { goto L_002C3A4C; } }
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C3A4C; } }
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 1;
L_002C3A4C:
    set32(c.r[2], ld32((c.r[8].w[0] + 17136u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 112u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3A28u | kUnwind; return; } goto L_002C3A28; } }
L_002C3A64:
    set32(c.r[2], ld32((c.r[11].w[0] + 17136u)));
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3A00u | kUnwind; return; } goto L_002C3A00; } }
L_002C3A78:
    set32(c.r[2], ld32((c.r[18].w[0] + 17136u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C3C08; } }
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002C3A98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 17136u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[17], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C3B50; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    set32(c.r[16], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AD0u);  if (depth < kMaxDepth) unit_0070(c, 261u, depth + 1u); else { c.pc = 0x002C3458u; return; } if (c.pc != 0x002C3AD0u) [[unlikely]] return; }
L_002C3AD0:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B10u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C3B10u) [[unlikely]] return; }
L_002C3B10:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[21].w[0] - 20020u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[23].w[0] - 20024u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[2] = ld32((c.r[21].w[0] - 20020u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 16;
L_002C3B50:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002C3BF0; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 80u);
    set32(c.r[16], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B70u);  if (depth < kMaxDepth) unit_0070(c, 261u, depth + 1u); else { c.pc = 0x002C3458u; return; } if (c.pc != 0x002C3B70u) [[unlikely]] return; }
L_002C3B70:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3BB0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C3BB0u) [[unlikely]] return; }
L_002C3BB0:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[21].w[0] - 20020u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 96u), c.f[1]);
    c.f[0] = ld32((c.r[23].w[0] - 20024u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[2] = ld32((c.r[21].w[0] - 20020u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 16;
L_002C3BF0:
    set32(c.r[2], ld32((c.r[30].w[0] + 17136u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 112u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3A98u | kUnwind; return; } goto L_002C3A98; } }
L_002C3C08:
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 688u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3C40:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C3CF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3CF8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 25u);
    set32(c.r[2], c.r[8].w[0] + 16944u);
    set32(c.r[3], 0u + 38u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], 0u + 83u);
    st32((c.r[8].w[0] + 16944u), c.r[3].w[0]);
    set32(c.r[11], 0u + 106u);
    set32(c.r[12], 0u + 39u);
    set32(c.r[13], 0u + 26u);
    set32(c.r[14], 0u + 51u);
    set32(c.r[6], 0u + 81u);
    set32(c.r[7], 0u + 110u);
    set32(c.r[9], 0u + 37u);
    set32(c.r[10], 0u + 96u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[4], c.r[2].w[0] + 128u);
    st32((c.r[2].w[0] + 16u), c.r[11].w[0]);
    set32(c.r[3], 0u + 13u);
    st32((c.r[2].w[0] + 36u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 35;
L_002C3CE0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3CE0u | kUnwind; return; } goto L_002C3CE0; } }
L_002C3CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3D00:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002C3D44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_002C3D18:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C3D30; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3D30:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3D18u | kUnwind; return; } goto L_002C3D18; } }
L_002C3D44:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3D50:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002C3D94; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_002C3D68:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C3D80; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3D80:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3D68u | kUnwind; return; } goto L_002C3D68; } }
L_002C3D94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DB8u);  if (depth < kMaxDepth) unit_006F(c, 78u, depth + 1u); else { c.pc = 0x002BD150u; return; } if (c.pc != 0x002C3DB8u) [[unlikely]] return; }
L_002C3DB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DC4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C3DC4u) [[unlikely]] return; }
L_002C3DC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3DE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[3], 0u + 169u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C3E00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 11280u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3E0C; } }
L_002C3E00:
    set32(c.r[2], ld32((c.r[4].w[0] + 11280u)));
    set32(c.r[3], 0u - 257u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002C3E0C:
    st32((c.r[4].w[0] + 11280u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 169u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C3EDC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11280u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3EDC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[6].w[0] - 21u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3EDC; } }
    set32(c.r[6], c.r[6].w[0] - 20u);
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 40u);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002C3E7Cu);  goto L_002C3E80; }
L_002C3E80:
    set32(c.r[7], 0u + 880u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[16], 0u + 172u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 688u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EBCu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002C3EBCu) [[unlikely]] return; }
L_002C3EBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 11280u)));
    set32(c.r[3], 0u - 257u);
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EDCu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C3EDCu) [[unlikely]] return; }
L_002C3EDC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3EF8:
    set32(c.r[2], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F24u);  if (depth < kMaxDepth) unit_007B(c, 72u, depth + 1u); else { c.pc = 0x002ECB78u; return; } if (c.pc != 0x002C3F24u) [[unlikely]] return; }
L_002C3F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3F38; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3F3C; } }
L_002C3F38:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002C3F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3F50:
    set32(c.r[29], c.r[29].w[0] - 560u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F88u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C3F88u) [[unlikely]] return; }
L_002C3F88:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3FB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[5] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[4] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[4] = fp::sub(c.f[4], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 18;
    [[clang::musttail]] return unit_0071(c, 1u, depth);
}

}
