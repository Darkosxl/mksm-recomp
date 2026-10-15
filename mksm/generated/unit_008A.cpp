#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0,
    0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0,
    205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216,
    0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287,
    0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
};

void unit_008A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00328000;
    case 2u: goto L_003280B0;
    case 3u: goto L_003280BC;
    case 4u: goto L_00328120;
    case 5u: goto L_003281E8;
    case 6u: goto L_00328278;
    case 7u: goto L_003282E0;
    case 8u: goto L_003282F4;
    case 9u: goto L_00328370;
    case 10u: goto L_003284F0;
    case 11u: goto L_00328528;
    case 12u: goto L_00328560;
    case 13u: goto L_00328574;
    case 14u: goto L_0032858C;
    case 15u: goto L_0032859C;
    case 16u: goto L_003285B0;
    case 17u: goto L_003285C0;
    case 18u: goto L_00328660;
    case 19u: goto L_003286A4;
    case 20u: goto L_003286C4;
    case 21u: goto L_003286E4;
    case 22u: goto L_003286F4;
    case 23u: goto L_0032870C;
    case 24u: goto L_00328720;
    case 25u: goto L_00328730;
    case 26u: goto L_00328744;
    case 27u: goto L_003287B0;
    case 28u: goto L_00328810;
    case 29u: goto L_00328828;
    case 30u: goto L_00328844;
    case 31u: goto L_00328858;
    case 32u: goto L_0032886C;
    case 33u: goto L_00328880;
    case 34u: goto L_003288FC;
    case 35u: goto L_00328918;
    case 36u: goto L_00328930;
    case 37u: goto L_00328944;
    case 38u: goto L_00328950;
    case 39u: goto L_00328980;
    case 40u: goto L_00328994;
    case 41u: goto L_003289A8;
    case 42u: goto L_003289BC;
    case 43u: goto L_003289CC;
    case 44u: goto L_00328A10;
    case 45u: goto L_00328AA4;
    case 46u: goto L_00328ADC;
    case 47u: goto L_00328AEC;
    case 48u: goto L_00328B00;
    case 49u: goto L_00328BE0;
    case 50u: goto L_00328BF4;
    case 51u: goto L_00328C08;
    case 52u: goto L_00328C1C;
    case 53u: goto L_00328C2C;
    case 54u: goto L_00328C3C;
    case 55u: goto L_00328C60;
    case 56u: goto L_00328C74;
    case 57u: goto L_00328C88;
    case 58u: goto L_00328C98;
    case 59u: goto L_00328CA8;
    case 60u: goto L_00328CCC;
    case 61u: goto L_00328CE0;
    case 62u: goto L_00328CF4;
    case 63u: goto L_00328D04;
    case 64u: goto L_00328D18;
    case 65u: goto L_00328D3C;
    case 66u: goto L_00328D50;
    case 67u: goto L_00328D64;
    case 68u: goto L_00328D74;
    case 69u: goto L_00328D84;
    case 70u: goto L_00328DF8;
    case 71u: goto L_00328F20;
    case 72u: goto L_00328F30;
    case 73u: goto L_00328F44;
    case 74u: goto L_00328F5C;
    case 75u: goto L_0032903C;
    case 76u: goto L_00329068;
    case 77u: goto L_003290E8;
    case 78u: goto L_0032916C;
    case 79u: goto L_00329190;
    case 80u: goto L_00329214;
    case 81u: goto L_00329304;
    case 82u: goto L_003293D8;
    case 83u: goto L_00329464;
    case 84u: goto L_003294E0;
    case 85u: goto L_00329530;
    case 86u: goto L_00329548;
    case 87u: goto L_0032955C;
    case 88u: goto L_00329570;
    case 89u: goto L_00329584;
    case 90u: goto L_00329598;
    case 91u: goto L_003295A8;
    case 92u: goto L_003295DC;
    case 93u: goto L_003295F0;
    case 94u: goto L_00329604;
    case 95u: goto L_00329614;
    case 96u: goto L_00329648;
    case 97u: goto L_0032965C;
    case 98u: goto L_00329670;
    case 99u: goto L_00329680;
    case 100u: goto L_003296E8;
    case 101u: goto L_00329970;
    case 102u: goto L_00329AC0;
    case 103u: goto L_00329B00;
    case 104u: goto L_00329B20;
    case 105u: goto L_00329B54;
    case 106u: goto L_00329B6C;
    case 107u: goto L_00329B7C;
    case 108u: goto L_00329B90;
    case 109u: goto L_00329BA0;
    case 110u: goto L_00329C08;
    case 111u: goto L_00329C40;
    case 112u: goto L_00329C54;
    case 113u: goto L_00329C70;
    case 114u: goto L_00329CB0;
    case 115u: goto L_00329CE8;
    case 116u: goto L_00329D00;
    case 117u: goto L_00329D10;
    case 118u: goto L_00329D48;
    case 119u: goto L_00329D64;
    case 120u: goto L_00329D78;
    case 121u: goto L_00329D98;
    case 122u: goto L_00329E10;
    case 123u: goto L_00329E74;
    case 124u: goto L_00329E88;
    case 125u: goto L_00329E9C;
    case 126u: goto L_00329EB0;
    case 127u: goto L_00329ED8;
    case 128u: goto L_00329F58;
    case 129u: goto L_00329FC8;
    case 130u: goto L_00329FF0;
    case 131u: goto L_0032A018;
    case 132u: goto L_0032A02C;
    case 133u: goto L_0032A040;
    case 134u: goto L_0032A054;
    case 135u: goto L_0032A080;
    case 136u: goto L_0032A0B8;
    case 137u: goto L_0032A0E0;
    case 138u: goto L_0032A100;
    case 139u: goto L_0032A118;
    case 140u: goto L_0032A138;
    case 141u: goto L_0032A14C;
    case 142u: goto L_0032A178;
    case 143u: goto L_0032A1FC;
    case 144u: goto L_0032A214;
    case 145u: goto L_0032A240;
    case 146u: goto L_0032A26C;
    case 147u: goto L_0032A278;
    case 148u: goto L_0032A288;
    case 149u: goto L_0032A298;
    case 150u: goto L_0032A2A8;
    case 151u: goto L_0032A2B4;
    case 152u: goto L_0032A2D0;
    case 153u: goto L_0032A2F8;
    case 154u: goto L_0032A30C;
    case 155u: goto L_0032A320;
    case 156u: goto L_0032A398;
    case 157u: goto L_0032A480;
    case 158u: goto L_0032A4B8;
    case 159u: goto L_0032A4E4;
    case 160u: goto L_0032A504;
    case 161u: goto L_0032A518;
    case 162u: goto L_0032A538;
    case 163u: goto L_0032A564;
    case 164u: goto L_0032A57C;
    case 165u: goto L_0032A590;
    case 166u: goto L_0032A5B0;
    case 167u: goto L_0032A5F0;
    case 168u: goto L_0032A620;
    case 169u: goto L_0032A63C;
    case 170u: goto L_0032A670;
    case 171u: goto L_0032A680;
    case 172u: goto L_0032A6C8;
    case 173u: goto L_0032A6D8;
    case 174u: goto L_0032A6FC;
    case 175u: goto L_0032A710;
    case 176u: goto L_0032A724;
    case 177u: goto L_0032A738;
    case 178u: goto L_0032A748;
    case 179u: goto L_0032A754;
    case 180u: goto L_0032A770;
    case 181u: goto L_0032A7E0;
    case 182u: goto L_0032A850;
    case 183u: goto L_0032A8CC;
    case 184u: goto L_0032A900;
    case 185u: goto L_0032AA48;
    case 186u: goto L_0032AA7C;
    case 187u: goto L_0032AAB0;
    case 188u: goto L_0032AAC8;
    case 189u: goto L_0032AAF8;
    case 190u: goto L_0032AB20;
    case 191u: goto L_0032AB38;
    case 192u: goto L_0032AB48;
    case 193u: goto L_0032AB5C;
    case 194u: goto L_0032AB6C;
    case 195u: goto L_0032AC00;
    case 196u: goto L_0032AC30;
    case 197u: goto L_0032AC48;
    case 198u: goto L_0032AC58;
    case 199u: goto L_0032AC64;
    case 200u: goto L_0032AC78;
    case 201u: goto L_0032AC98;
    case 202u: goto L_0032ACD4;
    case 203u: goto L_0032ACE4;
    case 204u: goto L_0032ACF4;
    case 205u: goto L_0032AD00;
    case 206u: goto L_0032AD0C;
    case 207u: goto L_0032AD1C;
    case 208u: goto L_0032AD2C;
    case 209u: goto L_0032AD44;
    case 210u: goto L_0032AD58;
    case 211u: goto L_0032AD88;
    case 212u: goto L_0032ADC4;
    case 213u: goto L_0032ADD4;
    case 214u: goto L_0032ADE4;
    case 215u: goto L_0032ADF0;
    case 216u: goto L_0032ADFC;
    case 217u: goto L_0032AE0C;
    case 218u: goto L_0032AE1C;
    case 219u: goto L_0032AE34;
    case 220u: goto L_0032AE48;
    case 221u: goto L_0032AE78;
    case 222u: goto L_0032AE9C;
    case 223u: goto L_0032AEB0;
    case 224u: goto L_0032AEC8;
    case 225u: goto L_0032AF00;
    case 226u: goto L_0032AF18;
    case 227u: goto L_0032AF2C;
    case 228u: goto L_0032AF3C;
    case 229u: goto L_0032AF60;
    case 230u: goto L_0032B000;
    case 231u: goto L_0032B03C;
    case 232u: goto L_0032B04C;
    case 233u: goto L_0032B060;
    case 234u: goto L_0032B078;
    case 235u: goto L_0032B0A4;
    case 236u: goto L_0032B0BC;
    case 237u: goto L_0032B0D0;
    case 238u: goto L_0032B0E4;
    case 239u: goto L_0032B0F0;
    case 240u: goto L_0032B120;
    case 241u: goto L_0032B158;
    case 242u: goto L_0032B170;
    case 243u: goto L_0032B184;
    case 244u: goto L_0032B190;
    case 245u: goto L_0032B1B0;
    case 246u: goto L_0032B1D8;
    case 247u: goto L_0032B208;
    case 248u: goto L_0032B258;
    case 249u: goto L_0032B2A8;
    case 250u: goto L_0032B2E8;
    case 251u: goto L_0032B328;
    case 252u: goto L_0032B368;
    case 253u: goto L_0032B398;
    case 254u: goto L_0032B3E8;
    case 255u: goto L_0032B438;
    case 256u: goto L_0032B488;
    case 257u: goto L_0032B4E8;
    case 258u: goto L_0032B508;
    case 259u: goto L_0032B5C0;
    case 260u: goto L_0032B610;
    case 261u: goto L_0032B620;
    case 262u: goto L_0032B650;
    case 263u: goto L_0032B690;
    case 264u: goto L_0032B7B0;
    case 265u: goto L_0032B7CC;
    case 266u: goto L_0032B7D8;
    case 267u: goto L_0032B7E8;
    case 268u: goto L_0032B800;
    case 269u: goto L_0032B814;
    case 270u: goto L_0032B828;
    case 271u: goto L_0032B870;
    case 272u: goto L_0032B888;
    case 273u: goto L_0032B894;
    case 274u: goto L_0032B8A4;
    case 275u: goto L_0032B8B0;
    case 276u: goto L_0032B8D0;
    case 277u: goto L_0032B8DC;
    case 278u: goto L_0032B8EC;
    case 279u: goto L_0032B904;
    case 280u: goto L_0032B918;
    case 281u: goto L_0032B930;
    case 282u: goto L_0032B940;
    case 283u: goto L_0032B954;
    case 284u: goto L_0032B95C;
    case 285u: goto L_0032B964;
    case 286u: goto L_0032B974;
    case 287u: goto L_0032B97C;
    case 288u: goto L_0032B98C;
    case 289u: goto L_0032B994;
    case 290u: goto L_0032B99C;
    case 291u: goto L_0032B9C8;
    case 292u: goto L_0032BA20;
    case 293u: goto L_0032BA34;
    case 294u: goto L_0032BA48;
    case 295u: goto L_0032BBB8;
    case 296u: goto L_0032BBDC;
    case 297u: goto L_0032BC28;
    case 298u: goto L_0032BCA0;
    case 299u: goto L_0032BCB8;
    case 300u: goto L_0032BCC8;
    case 301u: goto L_0032BCDC;
    case 302u: goto L_0032BD0C;
    case 303u: goto L_0032BD20;
    case 304u: goto L_0032BD98;
    case 305u: goto L_0032BDD0;
    case 306u: goto L_0032BDE8;
    case 307u: goto L_0032BE00;
    case 308u: goto L_0032BE10;
    case 309u: goto L_0032BE50;
    case 310u: goto L_0032BEA4;
    case 311u: goto L_0032BEB8;
    case 312u: goto L_0032BF10;
    case 313u: goto L_0032BF24;
    case 314u: goto L_0032BF38;
    case 315u: goto L_0032BF4C;
    case 316u: goto L_0032BF60;
    case 317u: goto L_0032BF78;
    case 318u: goto L_0032BF88;
    case 319u: goto L_0032BF9C;
    case 320u: goto L_0032BFA8;
    case 321u: goto L_0032BFBC;
    case 322u: goto L_0032BFD0;
    case 323u: goto L_0032BFE4;
    default: bad_entry(c, 0x00328000u); return;
    }
L_00328000:
    c.f[19] = fp::sub(c.f[19], c.f[17]);
    c.f[18] = fp::sub(c.f[18], c.f[16]);
    c.f[17] = fp::sub(c.f[13], c.f[17]);
    c.f[0] = fp::sub(c.f[14], c.f[12]);
    c.f[2] = fp::sub(c.f[15], c.f[13]);
    c.f[1] = fp::mul(c.f[18], c.f[17]);
    c.f[16] = fp::sub(c.f[12], c.f[16]);
    c.f[17] = fp::mul(c.f[0], c.f[17]);
    c.f[0] = fp::mul(c.f[19], c.f[0]);
    c.f[3] = fp::mul(c.f[2], c.f[16]);
    c.f[18] = fp::mul(c.f[18], c.f[2]);
    c.f[19] = fp::mul(c.f[19], c.f[16]);
    c.f[17] = fp::sub(c.f[17], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[18]);
    c.f[1] = fp::sub(c.f[1], c.f[19]);
    fpu_div(c, 17u, c.f[17], c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003280BC; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003280B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003280B0; } }
    fpu_compare(c, fp::key(c.f[17]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003280B0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[17]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003280F0; } }
L_003280B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003280BC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003280B0u | kUnwind; return; } goto L_003280B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003280B0u | kUnwind; return; } goto L_003280B0; } }
L_003280F0:
    c.f[1] = fp::sub(c.f[14], c.f[12]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::sub(c.f[15], c.f[13]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[12], c.f[1]);
    c.f[0] = fp::add(c.f[13], c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.f[4] = fp::mul(c.f[15], c.f[15]);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.f[14] = fp::mul(c.f[14], c.f[14]);
    c.f[23] = c.f[13];
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.f[16] = fp::sub(c.f[23], c.f[16]);
    c.f[22] = c.f[12];
    c.f[0] = fp::mul(c.f[22], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.f[15] = fp::add(c.f[15], c.f[15]);
    c.f[1] = fp::mul(c.f[16], c.f[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[1].w[0];
    c.f[16] = fp::add(c.f[16], c.f[16]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[21] = fp::add(c.f[0], c.f[3]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[16] = fp::mul(c.f[16], c.f[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.f[1] = fp::sub(c.f[1], c.f[14]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = fp::sub(c.f[16], c.f[15]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = 0u;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[20], c.f[20]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[12]));
    c.budget -= 41;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328240; } }
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003281E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003281E8u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x003281E8u) [[unlikely]] return; }
L_003281E8:
    c.f[1] = c.f[20] ^ fp::kSign;
    c.f[12] = c.f[0];
    c.f[3] = fp::add(c.f[21], c.f[21]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[1], c.f[12]);
    c.f[1] = fp::sub(c.f[1], c.f[12]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[22], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[3] = fp::mul(c.f[22], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[23]);
    c.f[3] = fp::add(c.f[3], c.f[23]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[17].w[0]), c.f[3]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328244; } }
L_00328240:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00328244:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328278:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st32((c.r[29].w[0] + 88u), c.f[25]);
    c.f[25] = c.f[14];
    st32((c.r[29].w[0] + 72u), c.f[23]);
    c.f[23] = fp::sub(c.f[16], c.f[25]);
    st32((c.r[29].w[0] + 104u), c.f[27]);
    st32((c.r[29].w[0] + 96u), c.f[26]);
    c.f[27] = c.f[15];
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.f[24] = fp::sub(c.f[17], c.f[27]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.f[22] = fp::sub(c.f[13], c.f[27]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[26] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[12], c.f[25]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[12] = c.f[23];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 56u), c.f[21]);
    c.f[13] = c.f[26];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003282E0u);  if (depth < kMaxDepth) unit_00C2(c, 242u, depth + 1u); else { c.pc = 0x0040AD90u; return; } if (c.pc != 0x003282E0u) [[unlikely]] return; }
L_003282E0:
    c.f[13] = c.f[26];
    c.f[12] = c.f[24];
    c.f[21] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003282F4u);  if (depth < kMaxDepth) unit_00C2(c, 242u, depth + 1u); else { c.pc = 0x0040AD90u; return; } if (c.pc != 0x003282F4u) [[unlikely]] return; }
L_003282F4:
    c.f[22] = fp::mul(c.f[24], c.f[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = fp::mul(c.f[23], c.f[20]);
    c.f[26] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[22]);
    c.f[22] = ld32((c.r[29].w[0] + 64u));
    fpu_div(c, 20u, c.f[20], c.f[21]);
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[23] = fp::mul(c.f[20], c.f[23]);
    c.f[20] = fp::mul(c.f[20], c.f[24]);
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0]), c.f[23]);
    st32((c.r[17].w[0]), c.f[20]);
    c.f[23] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[25]);
    c.f[25] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[27]);
    c.f[27] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0]), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328370:
    c.f[5] = 0u;
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[5]));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328574; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 96u), c.f[12]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.f[2] = c.f[3] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328450; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328450; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328444; } }
    c.f[0] = c.f[12] ^ fp::kSign;
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 2;
L_00328444:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032847C; } }
L_00328450:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328478; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 3;
L_00328478:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0032847C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003284F8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003284A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003284BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328560; } }
L_003284A8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00328530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328560; } }
L_003284BC:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003284F0u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x003284F0u) [[unlikely]] return; }
L_003284F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328560; } }
L_003284F8:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328528u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x00328528u) [[unlikely]] return; }
L_00328528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328560; } }
L_00328530:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328560u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x00328560u) [[unlikely]] return; }
L_00328560:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328574u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00328574u) [[unlikely]] return; }
L_00328574:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032858Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032858Cu) [[unlikely]] return; }
L_0032858C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032859Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032859Cu) [[unlikely]] return; }
L_0032859C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003285B0u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x003285B0u) [[unlikely]] return; }
L_003285B0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003285C0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x003285C0u) [[unlikely]] return; }
L_003285C0:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[29].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[4]);
    st32((c.r[17].w[0] + 40u), c.f[2]);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[17].w[0] + 60u), c.f[5]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328660:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003286A4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003286A4u) [[unlikely]] return; }
L_003286A4:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003286C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003286C4u) [[unlikely]] return; }
L_003286C4:
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003286E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003286E4u) [[unlikely]] return; }
L_003286E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003286F4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x003286F4u) [[unlikely]] return; }
L_003286F4:
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032870Cu);  if (depth < kMaxDepth) unit_008A(c, 221u, depth + 1u); else { c.pc = 0x0032AE78u; return; } if (c.pc != 0x0032870Cu) [[unlikely]] return; }
L_0032870C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328720u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328720u) [[unlikely]] return; }
L_00328720:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328730u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00328730u) [[unlikely]] return; }
L_00328730:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328744u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00328744u) [[unlikely]] return; }
L_00328744:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.f[5] = ld32((c.r[29].w[0] + 20u));
    c.f[6] = ld32((c.r[29].w[0] + 24u));
    c.f[7] = ld32((c.r[29].w[0] + 32u));
    c.f[8] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    st32((c.r[16].w[0] + 16u), c.f[4]);
    st32((c.r[16].w[0] + 20u), c.f[5]);
    st32((c.r[16].w[0] + 24u), c.f[6]);
    st32((c.r[16].w[0] + 32u), c.f[7]);
    st32((c.r[16].w[0] + 36u), c.f[8]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003287B0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 296u), c.f[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.f[22]);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328810u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328810u) [[unlikely]] return; }
L_00328810:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328828u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328828u) [[unlikely]] return; }
L_00328828:
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328844u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328844u) [[unlikely]] return; }
L_00328844:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328858u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x00328858u) [[unlikely]] return; }
L_00328858:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[22] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032886Cu);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x0032886Cu) [[unlikely]] return; }
L_0032886C:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328880u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x00328880u) [[unlikely]] return; }
L_00328880:
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003288AC; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003288D4; } }
L_003288AC:
    c.f[1] = 0u;
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003288D8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003288D8; } }
L_003288D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003288D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003288EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003289D0; } }
L_003288EC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003288FCu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x003288FCu) [[unlikely]] return; }
L_003288FC:
    c.f[12] = fp::mul(c.f[22], c.f[22]);
    set32(c.r[17], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328918u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00328918u) [[unlikely]] return; }
L_00328918:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328930u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328930u) [[unlikely]] return; }
L_00328930:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328944u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00328944u) [[unlikely]] return; }
L_00328944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328950u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00328950u) [[unlikely]] return; }
L_00328950:
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328980u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00328980u) [[unlikely]] return; }
L_00328980:
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328994u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00328994u) [[unlikely]] return; }
L_00328994:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003289A8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x003289A8u) [[unlikely]] return; }
L_003289A8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003289BCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x003289BCu) [[unlikely]] return; }
L_003289BC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003289CCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x003289CCu) [[unlikely]] return; }
L_003289CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003289D0:
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
    c.f[22] = ld32((c.r[29].w[0] + 304u));
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328A10:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 288u), c.f[20]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.f[22]);
    st32((c.r[29].w[0] + 296u), c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[15] = c.f[20];
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::sub(c.f[1], c.f[12]);
    c.f[13] = fp::sub(c.f[2], c.f[13]);
    c.f[14] = fp::sub(c.f[0], c.f[14]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328AA4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00328AA4u) [[unlikely]] return; }
L_00328AA4:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[15] = c.f[20];
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::sub(c.f[2], c.f[12]);
    c.f[13] = fp::sub(c.f[1], c.f[13]);
    c.f[14] = fp::sub(c.f[0], c.f[14]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328ADCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00328ADCu) [[unlikely]] return; }
L_00328ADC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328AECu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x00328AECu) [[unlikely]] return; }
L_00328AEC:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328B00u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x00328B00u) [[unlikely]] return; }
L_00328B00:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328B28; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328B50; } }
L_00328B28:
    c.f[1] = 0u;
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328B54; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328B54; } }
L_00328B50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00328B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328DA4; } }
    c.f[20] = c.f[20] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[22] = 0u;
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[21] = c.f[22];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328B8C; } }
    fpu_div(c, 21u, c.f[20], c.f[0]);
    c.budget -= 3;
L_00328B8C:
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[20] = c.f[22];
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = fp::sub(c.f[14], c.f[2]);
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = fp::sub(c.f[13], c.f[1]);
    c.f[14] = fp::mul(c.f[14], c.f[21]);
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.f[13] = fp::mul(c.f[13], c.f[21]);
    c.f[14] = fp::add(c.f[2], c.f[14]);
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.f[13] = fp::add(c.f[1], c.f[13]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328BE0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00328BE0u) [[unlikely]] return; }
L_00328BE0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328BF4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328BF4u) [[unlikely]] return; }
L_00328BF4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C08u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328C08u) [[unlikely]] return; }
L_00328C08:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C1Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00328C1Cu) [[unlikely]] return; }
L_00328C1C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C2Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00328C2Cu) [[unlikely]] return; }
L_00328C2C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C3Cu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x00328C3Cu) [[unlikely]] return; }
L_00328C3C:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328DA4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C60u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328C60u) [[unlikely]] return; }
L_00328C60:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C74u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328C74u) [[unlikely]] return; }
L_00328C74:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C88u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00328C88u) [[unlikely]] return; }
L_00328C88:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C98u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00328C98u) [[unlikely]] return; }
L_00328C98:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CA8u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x00328CA8u) [[unlikely]] return; }
L_00328CA8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328DA4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CCCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328CCCu) [[unlikely]] return; }
L_00328CCC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CE0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328CE0u) [[unlikely]] return; }
L_00328CE0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CF4u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00328CF4u) [[unlikely]] return; }
L_00328CF4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D04u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00328D04u) [[unlikely]] return; }
L_00328D04:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D18u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x00328D18u) [[unlikely]] return; }
L_00328D18:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328DA4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D3Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328D3Cu) [[unlikely]] return; }
L_00328D3C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D50u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00328D50u) [[unlikely]] return; }
L_00328D50:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D64u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00328D64u) [[unlikely]] return; }
L_00328D64:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D74u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00328D74u) [[unlikely]] return; }
L_00328D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D84u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x00328D84u) [[unlikely]] return; }
L_00328D84:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00328DA4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[2].w[0]), c.f[21]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328DB0; } }
L_00328DA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328DB4; } }
L_00328DB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00328DB4:
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
    c.f[22] = ld32((c.r[29].w[0] + 304u));
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328DF8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.f[6] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[22]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 152u), c.f[21]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.f[0] = 0u;
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[8] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[9] = ld32((c.r[5].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[8]);
    c.f[4] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[4] = fp::mul(c.f[4], c.f[9]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[5]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 43;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328EE0; } }
    c.f[3] = ld32((c.r[29].w[0]));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[2] = fp::sub(c.f[2], c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[9]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328EF0; } }
L_00328EE0:
    st32((c.r[29].w[0]), c.f[6]);
    st32((c.r[29].w[0] + 4u), c.f[7]);
    st32((c.r[29].w[0] + 8u), c.f[8]);
    st32((c.r[29].w[0] + 12u), c.f[9]);
    c.budget -= 4;
L_00328EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00328F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F20u);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x00328F20u) [[unlikely]] return; }
L_00328F20:
    c.f[20] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F30u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00328F30u) [[unlikely]] return; }
L_00328F30:
    c.f[12] = fp::sub(c.f[21], c.f[22]);
    c.f[21] = c.f[0];
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F44u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00328F44u) [[unlikely]] return; }
L_00328F44:
    c.f[12] = fp::mul(c.f[22], c.f[20]);
    fpu_div(c, 20u, c.f[0], c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F5Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00328F5Cu) [[unlikely]] return; }
L_00328F5C:
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328F70; } }
L_00328F68:
    c.f[20] = fp::sub(c.f[21], c.f[22]);
    c.f[12] = c.f[22];
    c.budget -= 2;
L_00328F70:
    c.f[5] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[5] = fp::mul(c.f[20], c.f[5]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[6] = fp::mul(c.f[20], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[8] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[9] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = fp::mul(c.f[12], c.f[2]);
    c.f[8] = fp::mul(c.f[12], c.f[8]);
    st32((c.r[29].w[0] + 48u), c.f[5]);
    c.f[9] = fp::mul(c.f[12], c.f[9]);
    st32((c.r[29].w[0] + 52u), c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[6]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[6] = fp::add(c.f[6], c.f[8]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[9]);
    st32((c.r[17].w[0]), c.f[5]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[6]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[7] = ld32((c.r[16].w[0] + 12u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[7] = fp::sub(c.f[7], c.f[1]);
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 72u), c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[7]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.f[9]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[7]);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032903Cu);  if (depth < kMaxDepth) unit_008A(c, 259u, depth + 1u); else { c.pc = 0x0032B5C0u; return; } if (c.pc != 0x0032903Cu) [[unlikely]] return; }
L_0032903C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329068:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[20] = c.f[12];
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[16].w[0] + 12u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = fp::sub(c.f[6], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0]), c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[6]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[6]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003290E8u);  if (depth < kMaxDepth) unit_008A(c, 259u, depth + 1u); else { c.pc = 0x0032B5C0u; return; } if (c.pc != 0x003290E8u) [[unlikely]] return; }
L_003290E8:
    c.f[3] = ld32((c.r[29].w[0]));
    c.f[21] = c.f[0];
    c.f[4] = ld32((c.r[29].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[20]);
    c.f[5] = ld32((c.r[29].w[0] + 12u));
    c.f[4] = fp::mul(c.f[4], c.f[20]);
    c.f[6] = fp::mul(c.f[6], c.f[20]);
    c.f[7] = ld32((c.r[16].w[0] + 12u));
    c.f[5] = fp::mul(c.f[5], c.f[20]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 32u), c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    c.f[7] = fp::add(c.f[7], c.f[5]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[7]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[6]);
    st32((c.r[29].w[0] + 44u), c.f[5]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[7]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032916Cu);  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032B4E8u; return; } if (c.pc != 0x0032916Cu) [[unlikely]] return; }
L_0032916C:
    c.f[0] = c.f[21];
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x322B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52343ull;
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[6] = c.r[1].w[0];
    c.f[5] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[16].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[5], c.f[4]);
    c.f[12] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032926C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.f[2] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00329218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329214u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00329214u) [[unlikely]] return; }
L_00329214:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00329218:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[6] = c.f[2];
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.f[7] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    fpu_div(c, 6u, c.f[0], c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[8] = fp::mul(c.f[2], c.f[6]);
    c.f[9] = fp::mul(c.f[1], c.f[6]);
    c.f[10] = fp::mul(c.f[0], c.f[6]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003294B4; } }
L_0032926C:
    c.f[2] = c.f[5];
    c.f[0] = fp::sub(c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329288; } }
    c.f[2] = c.f[4];
    c.budget -= 1;
L_00329288:
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003292A0; } }
    c.f[2] = c.f[3];
    c.budget -= 1;
L_003292A0:
    c.f[1] = fp::sub(c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329358; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329358; } }
    c.f[0] = fp::add(c.f[4], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00329308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329304u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00329304u) [[unlikely]] return; }
L_00329304:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_00329308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[6] = c.f[1];
    c.f[5] = ld32((c.r[16].w[0] + 24u));
    c.f[8] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    fpu_div(c, 6u, c.f[0], c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[9] = fp::mul(c.f[2], c.f[6]);
    c.f[10] = fp::mul(c.f[1], c.f[6]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003294B0; } }
L_00329358:
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[3] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032942C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032942C; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[12] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003293DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003293D8u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x003293D8u) [[unlikely]] return; }
L_003293D8:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_003293DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[6] = c.f[1];
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[9] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    fpu_div(c, 6u, c.f[0], c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[10] = fp::mul(c.f[2], c.f[6]);
    c.f[8] = fp::mul(c.f[1], c.f[6]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003294B0; } }
L_0032942C:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00329468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329464u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00329464u) [[unlikely]] return; }
L_00329464:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00329468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[6] = c.f[2];
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.f[10] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    fpu_div(c, 6u, c.f[0], c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[8] = fp::mul(c.f[2], c.f[6]);
    c.f[9] = fp::mul(c.f[1], c.f[6]);
    c.budget -= 18;
L_003294B0:
    c.f[7] = fp::mul(c.f[0], c.f[6]);
    c.budget -= 1;
L_003294B4:
    st32((c.r[17].w[0] + 12u), c.f[7]);
    st32((c.r[17].w[0]), c.f[8]);
    st32((c.r[17].w[0] + 4u), c.f[9]);
    st32((c.r[17].w[0] + 8u), c.f[10]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003294E0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[20] = 0u;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329530u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00329530u) [[unlikely]] return; }
L_00329530:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329548u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00329548u) [[unlikely]] return; }
L_00329548:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032955Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032955Cu) [[unlikely]] return; }
L_0032955C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329570u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00329570u) [[unlikely]] return; }
L_00329570:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329584u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00329584u) [[unlikely]] return; }
L_00329584:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329598u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00329598u) [[unlikely]] return; }
L_00329598:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003295A8u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x003295A8u) [[unlikely]] return; }
L_003295A8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[0] = c.f[20];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003295C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_003295C0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003295DCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x003295DCu) [[unlikely]] return; }
L_003295DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003295F0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x003295F0u) [[unlikely]] return; }
L_003295F0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329604u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00329604u) [[unlikely]] return; }
L_00329604:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329614u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x00329614u) [[unlikely]] return; }
L_00329614:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[0] = c.f[20];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032962C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0032962C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329648u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00329648u) [[unlikely]] return; }
L_00329648:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032965Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032965Cu) [[unlikely]] return; }
L_0032965C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329670u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00329670u) [[unlikely]] return; }
L_00329670:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329680u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x00329680u) [[unlikely]] return; }
L_00329680:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[0] = c.f[20];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329698; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_00329698:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { goto L_003296B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003296BC; } }
L_003296B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003296BC:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003296E8:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.f[1]);
    set32(c.r[10], c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[3], c.f[2]);
    set32(c.r[11], c.f[4]);
    mmi::pextlw(c.r[8], c.r[5], c.r[3]);
    mmi::pextlw(c.r[9], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[12] = c.r[8];
    c.f[5] = ld32((c.r[7].w[0] + 12u));
    c.f[3] = ld32((c.r[7].w[0]));
    vu::move(c.vu0, 15u, 2u, 12u);
    set32(c.r[5], c.f[1]);
    set32(c.r[7], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[3], c.f[3]);
    set32(c.r[10], c.f[5]);
    mmi::pextlw(c.r[8], c.r[5], c.r[3]);
    mmi::pextlw(c.r[9], c.r[10], c.r[7]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[8] = c.r[8];
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    vu::move(c.vu0, 15u, 9u, 8u);
    set32(c.r[3], c.f[1]);
    vu::sub(c.vu0, 15u, 3u, 9u, 2u);
    set32(c.r[4], c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[11], c.f[2]);
    set32(c.r[7], c.f[1]);
    set32(c.r[10], c.f[0]);
    c.f[5] = ld32((c.r[6].w[0] + 12u));
    c.f[6] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[5], c.f[4]);
    c.f[3] = ld32((c.r[6].w[0]));
    mmi::pextlw(c.r[8], c.r[3], c.r[11]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[11] = c.r[8];
    c.f[2] = ld32((c.r[2].w[0]));
    vu::move(c.vu0, 15u, 6u, 11u);
    set32(c.r[6], c.f[3]);
    set32(c.r[11], c.f[5]);
    set32(c.r[2], c.f[2]);
    mmi::pextlw(c.r[8], c.r[7], c.r[6]);
    mmi::pextlw(c.r[9], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[4] = c.r[8];
    set32(c.r[3], c.f[1]);
    vu::sub(c.vu0, 15u, 1u, 4u, 2u);
    set32(c.r[4], c.f[0]);
    c.r[6] = c.vu0.vf[3];
    set32(c.r[5], c.f[6]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[7] = c.r[8];
    vu::move(c.vu0, 15u, 10u, 7u);
    vu::opmula(c.vu0, 1u, 3u);
    vu::opmsub(c.vu0, 3u, 3u, 1u);
    vu::sub(c.vu0, 1u, 3u, 3u, 3u);
    vu::sub(c.vu0, 15u, 2u, 6u, 2u);
    c.r[2] = c.vu0.vf[3];
    vu::opmula(c.vu0, 1u, 3u);
    vu::opmsub(c.vu0, 1u, 3u, 1u);
    vu::sub(c.vu0, 1u, 1u, 1u, 1u);
    vu::mul(c.vu0, 14u, 5u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 87;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032984C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0032984C:
    vu::sub(c.vu0, 15u, 2u, 6u, 4u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[2]);
    vu::sub(c.vu0, 15u, 1u, 9u, 4u);
    c.r[3] = c.vu0.vf[3];
    vu::opmula(c.vu0, 1u, 3u);
    vu::opmsub(c.vu0, 1u, 3u, 1u);
    vu::sub(c.vu0, 1u, 1u, 1u, 1u);
    vu::mul(c.vu0, 14u, 5u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032989C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0032989C:
    vu::sub(c.vu0, 15u, 2u, 6u, 8u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    vu::sub(c.vu0, 15u, 1u, 10u, 8u);
    c.r[3] = c.vu0.vf[3];
    vu::opmula(c.vu0, 1u, 3u);
    vu::opmsub(c.vu0, 1u, 3u, 1u);
    vu::sub(c.vu0, 1u, 1u, 1u, 1u);
    vu::mul(c.vu0, 14u, 5u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003298EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_003298EC:
    vu::sub(c.vu0, 15u, 2u, 11u, 7u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[2]);
    vu::sub(c.vu0, 15u, 1u, 12u, 7u);
    c.vu0.vf[3] = c.r[2];
    vu::opmula(c.vu0, 1u, 3u);
    vu::opmsub(c.vu0, 1u, 3u, 1u);
    vu::sub(c.vu0, 1u, 1u, 1u, 1u);
    vu::mul(c.vu0, 14u, 5u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032993C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0032993C:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00329964; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00329964; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00329968; } }
L_00329964:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00329968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329970:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[5], c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], c.f[3]);
    set32(c.r[3], c.f[2]);
    set32(c.r[10], c.f[5]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[10], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[6] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[3], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[2], c.f[4]);
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[6], c.f[6]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[6], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    set32(c.r[10], c.f[2]);
    vu::sub(c.vu0, 15u, 3u, 1u, 2u);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.f[0]);
    vu::move(c.vu0, 15u, 4u, 3u);
    set32(c.r[4], c.f[3]);
    mmi::pextlw(c.r[8], c.r[2], c.r[10]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    vu::sub(c.vu0, 15u, 2u, 1u, 2u);
    vu::mul(c.vu0, 14u, 5u, 3u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    c.f[1] = 0u;
    st32((c.r[7].w[0]), c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 50;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329AA0; } }
    vu::mul(c.vu0, 14u, 5u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329A88; } }
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 3u, c.vu0.vf[5].w[0]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329AA4; } }
L_00329A88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    vu::sub(c.vu0, 15u, 2u, 2u, 4u);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329AA4; } }
L_00329AA0:
    st32((c.r[7].w[0]), c.f[1]);
    c.budget -= 1;
L_00329AA4:
    vu::mul(c.vu0, 14u, 5u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329AC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[18], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[20] = 0u;
    c.f[14] = ld32((c.r[4].w[0] + 8u));
    c.f[12] = ld32((c.r[4].w[0]));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[4].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B00u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00329B00u) [[unlikely]] return; }
L_00329B00:
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B20u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00329B20u) [[unlikely]] return; }
L_00329B20:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B54u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00329B54u) [[unlikely]] return; }
L_00329B54:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B6Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00329B6Cu) [[unlikely]] return; }
L_00329B6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B7Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00329B7Cu) [[unlikely]] return; }
L_00329B7C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B90u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00329B90u) [[unlikely]] return; }
L_00329B90:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329BA0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00329BA0u) [[unlikely]] return; }
L_00329BA0:
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    c.f[6] = ld32((c.r[29].w[0] + 8u));
    c.f[7] = ld32((c.r[29].w[0] + 16u));
    c.f[8] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[17].w[0] + 32u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[4]);
    st32((c.r[17].w[0] + 20u), c.f[5]);
    st32((c.r[17].w[0] + 24u), c.f[6]);
    st32((c.r[17].w[0]), c.f[7]);
    st32((c.r[17].w[0] + 4u), c.f[8]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329C08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C40u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00329C40u) [[unlikely]] return; }
L_00329C40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C54u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00329C54u) [[unlikely]] return; }
L_00329C54:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 24u), c.f[21]);
    c.f[0] = c.f[20] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329CB0; } }
    c.f[13] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329CB0u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x00329CB0u) [[unlikely]] return; }
L_00329CB0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329CCC; } }
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.budget -= 1;
L_00329CCC:
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329CE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 16016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D00u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00329D00u) [[unlikely]] return; }
L_00329D00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329D10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D48u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00329D48u) [[unlikely]] return; }
L_00329D48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[12], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D64u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00329D64u) [[unlikely]] return; }
L_00329D64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D78u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00329D78u) [[unlikely]] return; }
L_00329D78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329D98:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E10u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x00329E10u) [[unlikely]] return; }
L_00329E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329E3C; } }
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329E60; } }
L_00329E3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329E60; } }
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.budget -= 1;
L_00329E60:
    c.f[12] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E74u);  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x002143A0u; return; } if (c.pc != 0x00329E74u) [[unlikely]] return; }
L_00329E74:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E88u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00329E88u) [[unlikely]] return; }
L_00329E88:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E9Cu);  if (depth < kMaxDepth) unit_008B(c, 157u, depth + 1u); else { c.pc = 0x0032D330u; return; } if (c.pc != 0x00329E9Cu) [[unlikely]] return; }
L_00329E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329EB0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00329EB0u) [[unlikely]] return; }
L_00329EB0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329ED8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F58u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x00329F58u) [[unlikely]] return; }
L_00329F58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329F84; } }
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329FA8; } }
L_00329F84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00329FA8; } }
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.budget -= 1;
L_00329FA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00329FD0; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329FC8u);  if (depth < kMaxDepth) unit_0045(c, 20u, depth + 1u); else { c.pc = 0x00214280u; return; } if (c.pc != 0x00329FC8u) [[unlikely]] return; }
L_00329FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A018; } }
L_00329FD0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00329FF8; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329FF0u);  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x002143A0u; return; } if (c.pc != 0x00329FF0u) [[unlikely]] return; }
L_00329FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A018; } }
L_00329FF8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0032A018; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A018u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x002144C0u; return; } if (c.pc != 0x0032A018u) [[unlikely]] return; }
L_0032A018:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A02Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032A02Cu) [[unlikely]] return; }
L_0032A02C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A040u);  if (depth < kMaxDepth) unit_008B(c, 157u, depth + 1u); else { c.pc = 0x0032D330u; return; } if (c.pc != 0x0032A040u) [[unlikely]] return; }
L_0032A040:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A054u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032A054u) [[unlikely]] return; }
L_0032A054:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A080:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[3]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A0B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A0E0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0032A0E0u) [[unlikely]] return; }
L_0032A0E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A100u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0032A100u) [[unlikely]] return; }
L_0032A100:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A118:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A138u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0032A138u) [[unlikely]] return; }
L_0032A138:
    st32((c.r[16].w[0] + 4u), 0u);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A14Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032A14Cu) [[unlikely]] return; }
L_0032A14C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A178:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A1B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A1D4; } }
L_0032A1B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A1D4; } }
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 1;
L_0032A1D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[12], c.f[20]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A1FCu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032A1FCu) [[unlikely]] return; }
L_0032A1FC:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 4u), 0u);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A214u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0032A214u) [[unlikely]] return; }
L_0032A214:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 12u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A26Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032A26Cu) [[unlikely]] return; }
L_0032A26C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A278u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0032A278u) [[unlikely]] return; }
L_0032A278:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A288u);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A298u; return; } if (c.pc != 0x0032A288u) [[unlikely]] return; }
L_0032A288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A2A8u);  if (depth < kMaxDepth) unit_008A(c, 152u, depth + 1u); else { c.pc = 0x0032A2D0u; return; } if (c.pc != 0x0032A2A8u) [[unlikely]] return; }
L_0032A2A8:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A2B4u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x0032A2B4u) [[unlikely]] return; }
L_0032A2B4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A2D0:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032A300; } }
    c.f[12] = c.f[13] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A2F8u);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032A2F8u) [[unlikely]] return; }
L_0032A2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A310; } }
L_0032A300:
    c.f[12] = c.f[13] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A30Cu);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032A30Cu) [[unlikely]] return; }
L_0032A30C:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_0032A310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A320:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A350; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[12], c.f[13]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[2] = c.f[1] ^ fp::kSign;
    c.f[12] = fp::add(c.f[0], c.f[13]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A368; } }
L_0032A350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[13], c.f[12]);
    c.f[0] = fp::sub(c.f[0], c.f[13]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 6;
L_0032A368:
    c.f[1] = fp::mul(c.f[12], c.f[12]);
    c.f[3] = c.f[2];
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A388; } }
    c.f[3] = c.f[12];
    c.budget -= 1;
L_0032A388:
    c.f[0] = c.f[3];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A398:
    c.f[2] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A3CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[12]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[4] = c.f[1] ^ fp::kSign;
    c.f[2] = fp::add(c.f[0], c.f[12]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A3E4; } }
L_0032A3CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::sub(c.f[12], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 6;
L_0032A3E4:
    c.f[1] = fp::mul(c.f[2], c.f[2]);
    c.f[3] = c.f[4];
    c.f[0] = fp::mul(c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A404; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_0032A404:
    mmi::mult(c, 0, c.r[5].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = fp::mul(c.f[3], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A434; } }
    st32((c.r[4].w[0]), c.f[12]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A444; } }
L_0032A434:
    c.f[3] = fp::mul(c.f[3], c.f[13]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 4;
L_0032A444:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A480; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A4B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 5;
L_0032A4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A4B8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A4E4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0032A4E4u) [[unlikely]] return; }
L_0032A4E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A504u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0032A504u) [[unlikely]] return; }
L_0032A504:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A518u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0032A518u) [[unlikely]] return; }
L_0032A518:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A538:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A564u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0032A564u) [[unlikely]] return; }
L_0032A564:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A57Cu);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0032A57Cu) [[unlikely]] return; }
L_0032A57C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A590u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0032A590u) [[unlikely]] return; }
L_0032A590:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A5B0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A5F0:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A620:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A63Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032A63Cu) [[unlikely]] return; }
L_0032A63C:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[2], 0u - 1u);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A660; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0032A660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A680u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032A680u) [[unlikely]] return; }
L_0032A680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032A6B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A6BC; } }
L_0032A6B8:
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0032A6BC:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A6C8u);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032A6C8u) [[unlikely]] return; }
L_0032A6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A6D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A6FCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0032A6FCu) [[unlikely]] return; }
L_0032A6FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A710u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032A710u) [[unlikely]] return; }
L_0032A710:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A724u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0032A724u) [[unlikely]] return; }
L_0032A724:
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A738u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032A738u) [[unlikely]] return; }
L_0032A738:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A748u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032A748u) [[unlikely]] return; }
L_0032A748:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A754u);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032A754u) [[unlikely]] return; }
L_0032A754:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A770:
    c.f[12] = fp::add(c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A7A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A7D4; } }
L_0032A7A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A7D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_0032A7D4:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A7E0:
    c.f[12] = fp::sub(c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A818; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A844; } }
L_0032A818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A844; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_0032A844:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A850:
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = c.f[3] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A8CC; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A8CC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A8C0; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 3;
L_0032A8C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A8CC:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A8F4; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 3;
L_0032A8F4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[12]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = c.f[3] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A9AC; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A9AC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A9A0; } }
    c.f[0] = c.f[12] ^ fp::kSign;
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 2;
L_0032A9A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A9D8; } }
L_0032A9AC:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032A9D4; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 3;
L_0032A9D4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0032A9D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032AA50; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032AA04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032AA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AAB0; } }
L_0032AA04:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032AA84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AAB0; } }
L_0032AA18:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[12] = c.f[12] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA48u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x0032AA48u) [[unlikely]] return; }
L_0032AA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AAB0; } }
L_0032AA50:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA7Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x0032AA7Cu) [[unlikely]] return; }
L_0032AA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AAB0; } }
L_0032AA84:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AAB0u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x0032AAB0u) [[unlikely]] return; }
L_0032AAB0:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AAC8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AAF8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032AAF8u) [[unlikely]] return; }
L_0032AAF8:
    c.f[20] = 0u;
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB20u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032AB20u) [[unlikely]] return; }
L_0032AB20:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB38u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032AB38u) [[unlikely]] return; }
L_0032AB38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB48u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032AB48u) [[unlikely]] return; }
L_0032AB48:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB5Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032AB5Cu) [[unlikely]] return; }
L_0032AB5C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB6Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032AB6Cu) [[unlikely]] return; }
L_0032AB6C:
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0] + 48u));
    c.f[5] = ld32((c.r[29].w[0] + 52u));
    c.f[6] = ld32((c.r[29].w[0] + 56u));
    c.f[7] = ld32((c.r[29].w[0]));
    c.f[8] = ld32((c.r[29].w[0] + 4u));
    c.f[9] = ld32((c.r[29].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 56u), c.f[20]);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    st32((c.r[16].w[0] + 28u), c.f[20]);
    st32((c.r[16].w[0] + 44u), c.f[20]);
    st32((c.r[16].w[0] + 48u), c.f[20]);
    st32((c.r[16].w[0] + 52u), c.f[20]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    st32((c.r[16].w[0] + 16u), c.f[4]);
    st32((c.r[16].w[0] + 20u), c.f[5]);
    st32((c.r[16].w[0] + 24u), c.f[6]);
    st32((c.r[16].w[0] + 32u), c.f[7]);
    st32((c.r[16].w[0] + 36u), c.f[8]);
    st32((c.r[16].w[0] + 40u), c.f[9]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AC00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AC30u);  if (depth < kMaxDepth) unit_008A(c, 221u, depth + 1u); else { c.pc = 0x0032AE78u; return; } if (c.pc != 0x0032AC30u) [[unlikely]] return; }
L_0032AC30:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AC48u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032AC48u) [[unlikely]] return; }
L_0032AC48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AC58u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032AC58u) [[unlikely]] return; }
L_0032AC58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AC64u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0032AC64u) [[unlikely]] return; }
L_0032AC64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AC78u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032AC78u) [[unlikely]] return; }
L_0032AC78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AC98:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ACD4u);  if (depth < kMaxDepth) unit_008A(c, 245u, depth + 1u); else { c.pc = 0x0032B1B0u; return; } if (c.pc != 0x0032ACD4u) [[unlikely]] return; }
L_0032ACD4:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ACE4u);  if (depth < kMaxDepth) unit_008A(c, 245u, depth + 1u); else { c.pc = 0x0032B1B0u; return; } if (c.pc != 0x0032ACE4u) [[unlikely]] return; }
L_0032ACE4:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ACF4u);  if (depth < kMaxDepth) unit_008A(c, 245u, depth + 1u); else { c.pc = 0x0032B1B0u; return; } if (c.pc != 0x0032ACF4u) [[unlikely]] return; }
L_0032ACF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD00u);  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00328660u; return; } if (c.pc != 0x0032AD00u) [[unlikely]] return; }
L_0032AD00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD0Cu);  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00328660u; return; } if (c.pc != 0x0032AD0Cu) [[unlikely]] return; }
L_0032AD0C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD1Cu);  if (depth < kMaxDepth) unit_008A(c, 79u, depth + 1u); else { c.pc = 0x00329190u; return; } if (c.pc != 0x0032AD1Cu) [[unlikely]] return; }
L_0032AD1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD2Cu);  if (depth < kMaxDepth) unit_008A(c, 79u, depth + 1u); else { c.pc = 0x00329190u; return; } if (c.pc != 0x0032AD2Cu) [[unlikely]] return; }
L_0032AD2C:
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD44u);  if (depth < kMaxDepth) unit_008A(c, 70u, depth + 1u); else { c.pc = 0x00328DF8u; return; } if (c.pc != 0x0032AD44u) [[unlikely]] return; }
L_0032AD44:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD58u);  if (depth < kMaxDepth) unit_008A(c, 263u, depth + 1u); else { c.pc = 0x0032B690u; return; } if (c.pc != 0x0032AD58u) [[unlikely]] return; }
L_0032AD58:
    c.f[0] = c.f[20];
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AD88:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ADC4u);  if (depth < kMaxDepth) unit_008A(c, 245u, depth + 1u); else { c.pc = 0x0032B1B0u; return; } if (c.pc != 0x0032ADC4u) [[unlikely]] return; }
L_0032ADC4:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ADD4u);  if (depth < kMaxDepth) unit_008A(c, 245u, depth + 1u); else { c.pc = 0x0032B1B0u; return; } if (c.pc != 0x0032ADD4u) [[unlikely]] return; }
L_0032ADD4:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ADE4u);  if (depth < kMaxDepth) unit_008A(c, 245u, depth + 1u); else { c.pc = 0x0032B1B0u; return; } if (c.pc != 0x0032ADE4u) [[unlikely]] return; }
L_0032ADE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ADF0u);  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00328660u; return; } if (c.pc != 0x0032ADF0u) [[unlikely]] return; }
L_0032ADF0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ADFCu);  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00328660u; return; } if (c.pc != 0x0032ADFCu) [[unlikely]] return; }
L_0032ADFC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE0Cu);  if (depth < kMaxDepth) unit_008A(c, 79u, depth + 1u); else { c.pc = 0x00329190u; return; } if (c.pc != 0x0032AE0Cu) [[unlikely]] return; }
L_0032AE0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE1Cu);  if (depth < kMaxDepth) unit_008A(c, 79u, depth + 1u); else { c.pc = 0x00329190u; return; } if (c.pc != 0x0032AE1Cu) [[unlikely]] return; }
L_0032AE1C:
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE34u);  if (depth < kMaxDepth) unit_008A(c, 76u, depth + 1u); else { c.pc = 0x00329068u; return; } if (c.pc != 0x0032AE34u) [[unlikely]] return; }
L_0032AE34:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE48u);  if (depth < kMaxDepth) unit_008A(c, 263u, depth + 1u); else { c.pc = 0x0032B690u; return; } if (c.pc != 0x0032AE48u) [[unlikely]] return; }
L_0032AE48:
    c.f[0] = c.f[20];
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AE78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE9Cu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032AE9Cu) [[unlikely]] return; }
L_0032AE9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AEB0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032AEB0u) [[unlikely]] return; }
L_0032AEB0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AEC8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF00u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032AF00u) [[unlikely]] return; }
L_0032AF00:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF18u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032AF18u) [[unlikely]] return; }
L_0032AF18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF2Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032AF2Cu) [[unlikely]] return; }
L_0032AF2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF3Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032AF3Cu) [[unlikely]] return; }
L_0032AF3C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032AF60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[22]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[4] = c.r[1].w[0];
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[13]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[14]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[20] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 32;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032AFE4; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_0032AFE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = c.f[5];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B000u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032B000u) [[unlikely]] return; }
L_0032B000:
    c.f[0] = fp::sub(c.f[21], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032B084; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B03Cu);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032B03Cu) [[unlikely]] return; }
L_0032B03C:
    c.f[20] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B04Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032B04Cu) [[unlikely]] return; }
L_0032B04C:
    c.f[12] = fp::sub(c.f[21], c.f[22]);
    c.f[21] = c.f[0];
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B060u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032B060u) [[unlikely]] return; }
L_0032B060:
    c.f[12] = fp::mul(c.f[22], c.f[20]);
    fpu_div(c, 20u, c.f[0], c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B078u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032B078u) [[unlikely]] return; }
L_0032B078:
    fpu_div(c, 21u, c.f[0], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B08C; } }
L_0032B084:
    c.f[20] = fp::sub(c.f[21], c.f[22]);
    c.f[21] = c.f[22];
    c.budget -= 2;
L_0032B08C:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0A4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032B0A4u) [[unlikely]] return; }
L_0032B0A4:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0BCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032B0BCu) [[unlikely]] return; }
L_0032B0BC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0D0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032B0D0u) [[unlikely]] return; }
L_0032B0D0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0E4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032B0E4u) [[unlikely]] return; }
L_0032B0E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0F0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0032B0F0u) [[unlikely]] return; }
L_0032B0F0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B158u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032B158u) [[unlikely]] return; }
L_0032B158:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B170u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032B170u) [[unlikely]] return; }
L_0032B170:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B184u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032B184u) [[unlikely]] return; }
L_0032B184:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B190u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0032B190u) [[unlikely]] return; }
L_0032B190:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B1D8:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B208:
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B258:
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B2A8:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B2E8:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[6].w[0] + 12u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 12u), c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B328:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    fpu_div(c, 4u, c.f[4], c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_div(c, 3u, c.f[3], c.f[1]);
    fpu_div(c, 2u, c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B368:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B398:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[4] = fp::add(c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B3E8:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B438:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B488:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_div(c, 2u, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_div(c, 3u, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_div(c, 4u, c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B4E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B508u);  if (depth < kMaxDepth) unit_008A(c, 259u, depth + 1u); else { c.pc = 0x0032B5C0u; return; } if (c.pc != 0x0032B508u) [[unlikely]] return; }
L_0032B508:
    c.f[1] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032B584; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = ld32((c.r[16].w[0] + 12u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[4]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[3]);
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    st32((c.r[29].w[0] + 12u), c.f[4]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B5A4; } }
L_0032B584:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_0032B5A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[3] = ld32((c.r[4].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032B610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B610u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032B610u) [[unlikely]] return; }
L_0032B610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B620:
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.f[2];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032B680; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[4] = c.r[1].w[0];
    c.f[3] = c.f[0];
    c.budget -= 4;
L_0032B650:
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032B668; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0032B668:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B650u | kUnwind; return; } goto L_0032B650; } }
L_0032B680:
    c.f[0] = c.f[2];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B690:
    c.f[9] = ld32((c.r[4].w[0]));
    c.f[13] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::mul(c.f[9], c.f[9]);
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = fp::mul(c.f[13], c.f[13]);
    c.f[10] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = fp::mul(c.f[6], c.f[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[4] = fp::mul(c.f[10], c.f[10]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[5] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::add(c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032B6F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B6FC; } }
L_0032B6F8:
    c.f[2] = c.f[5];
    c.budget -= 1;
L_0032B6FC:
    c.f[8] = fp::mul(c.f[9], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[13], c.f[2]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[0] = fp::mul(c.f[6], c.f[2]);
    st32((c.r[5].w[0] + 60u), c.f[7]);
    c.f[3] = fp::mul(c.f[9], c.f[8]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[2] = fp::mul(c.f[13], c.f[1]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[6] = fp::mul(c.f[6], c.f[0]);
    st32((c.r[5].w[0] + 48u), 0u);
    c.f[11] = fp::mul(c.f[10], c.f[0]);
    st32((c.r[5].w[0] + 52u), 0u);
    c.f[8] = fp::mul(c.f[10], c.f[8]);
    st32((c.r[5].w[0] + 56u), 0u);
    c.f[5] = fp::mul(c.f[9], c.f[0]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.f[10] = fp::mul(c.f[10], c.f[1]);
    c.f[1] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[4] = fp::sub(c.f[5], c.f[10]);
    c.f[6] = fp::add(c.f[1], c.f[11]);
    c.f[9] = fp::add(c.f[0], c.f[8]);
    c.f[2] = fp::sub(c.f[7], c.f[2]);
    st32((c.r[5].w[0] + 32u), c.f[4]);
    c.f[3] = fp::sub(c.f[7], c.f[3]);
    st32((c.r[5].w[0] + 16u), c.f[6]);
    c.f[7] = fp::sub(c.f[7], c.f[12]);
    st32((c.r[5].w[0] + 36u), c.f[9]);
    c.f[1] = fp::sub(c.f[1], c.f[11]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[5] = fp::add(c.f[5], c.f[10]);
    st32((c.r[5].w[0] + 20u), c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[8]);
    st32((c.r[5].w[0] + 40u), c.f[7]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[5]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B7B0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B7CCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032B7CCu) [[unlikely]] return; }
L_0032B7CC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B7D8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0032B7D8u) [[unlikely]] return; }
L_0032B7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B7E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B800u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032B800u) [[unlikely]] return; }
L_0032B800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B814u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0032B814u) [[unlikely]] return; }
L_0032B814:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B828:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 248u), c.f[21]);
    c.f[20] = c.f[12];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B870u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032B870u) [[unlikely]] return; }
L_0032B870:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B888u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032B888u) [[unlikely]] return; }
L_0032B888:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B894u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0032B894u) [[unlikely]] return; }
L_0032B894:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B8A4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0032B8A4u) [[unlikely]] return; }
L_0032B8A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B8B0u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0032B8B0u) [[unlikely]] return; }
L_0032B8B0:
    set32(c.r[17], c.r[29].w[0] + 32u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B8D0u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032B8D0u) [[unlikely]] return; }
L_0032B8D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B8DCu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0032B8DCu) [[unlikely]] return; }
L_0032B8DC:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B8ECu);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0032B8ECu) [[unlikely]] return; }
L_0032B8EC:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B904u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032E178u; return; } if (c.pc != 0x0032B904u) [[unlikely]] return; }
L_0032B904:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B918u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x0032B918u) [[unlikely]] return; }
L_0032B918:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B930u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0032B930u) [[unlikely]] return; }
L_0032B930:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B940u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0032B940u) [[unlikely]] return; }
L_0032B940:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B954u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032B954u) [[unlikely]] return; }
L_0032B954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B964; } }
L_0032B95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B964u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032B964u) [[unlikely]] return; }
L_0032B964:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B974u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0032B974u) [[unlikely]] return; }
L_0032B974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B99C; } }
L_0032B97C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B98Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0032B98Cu) [[unlikely]] return; }
L_0032B98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B95Cu | kUnwind; return; } goto L_0032B95C; } }
L_0032B994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B99Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0032B99Cu) [[unlikely]] return; }
L_0032B99C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 248u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B9C8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BA20u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BA20u) [[unlikely]] return; }
L_0032BA20:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BA34u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BA34u) [[unlikely]] return; }
L_0032BA34:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BA48u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BA48u) [[unlikely]] return; }
L_0032BA48:
    c.f[14] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[15] = ld32((c.r[29].w[0] + 20u));
    c.f[10] = ld32((c.r[29].w[0] + 32u));
    c.f[7] = fp::mul(c.f[14], c.f[14]);
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.f[16] = fp::mul(c.f[15], c.f[15]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[3] = fp::mul(c.f[14], c.f[10]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[11] = fp::mul(c.f[15], c.f[12]);
    c.f[4] = fp::mul(c.f[2], c.f[10]);
    c.f[9] = ld32((c.r[29].w[0] + 40u));
    c.f[8] = fp::mul(c.f[0], c.f[12]);
    c.f[6] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[15]);
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.f[5] = fp::mul(c.f[12], c.f[12]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.f[2] = fp::mul(c.f[2], c.f[14]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.f[1] = fp::mul(c.f[10], c.f[10]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[3] = fp::add(c.f[3], c.f[11]);
    c.f[11] = fp::mul(c.f[6], c.f[9]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[8]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[13], c.f[9]);
    c.f[5] = fp::mul(c.f[13], c.f[13]);
    c.f[7] = fp::add(c.f[7], c.f[16]);
    c.f[6] = fp::mul(c.f[6], c.f[13]);
    c.f[8] = fp::mul(c.f[9], c.f[9]);
    c.f[7] = fp::add(c.f[7], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[4] = fp::add(c.f[4], c.f[11]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[5] = fp::mul(c.f[3], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = fp::mul(c.f[4], c.f[7]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[7]);
    st32((c.r[21].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[10]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[9]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 8u), c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[14]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[23].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[15]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[23].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[13]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[23].w[0] + 8u), c.f[1]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 92;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032BBB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BBDCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032BBDCu) [[unlikely]] return; }
L_0032BBDC:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032BC28:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.f[21]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[21] = 0u;
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BCA0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BCA0u) [[unlikely]] return; }
L_0032BCA0:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BCB8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BCB8u) [[unlikely]] return; }
L_0032BCB8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BCC8u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032BCC8u) [[unlikely]] return; }
L_0032BCC8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BCDCu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032BCDCu) [[unlikely]] return; }
L_0032BCDC:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032BD60; } }
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD0Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032BD0Cu) [[unlikely]] return; }
L_0032BD0C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD20u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032BD20u) [[unlikely]] return; }
L_0032BD20:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0032BD34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032BD64; } }
L_0032BD34:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032BD60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032BD64; } }
L_0032BD60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032BD64:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032BD98:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDD0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BDD0u) [[unlikely]] return; }
L_0032BDD0:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDE8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BDE8u) [[unlikely]] return; }
L_0032BDE8:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE00u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032BE00u) [[unlikely]] return; }
L_0032BE00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE10u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x0032BE10u) [[unlikely]] return; }
L_0032BE10:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032BE30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0032BE30:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032BE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032BE84; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032BE90; } }
L_0032BE84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032BEA8; } }
L_0032BE90:
    set32(c.r[6], c.r[5].w[0] + 16u);
    set32(c.r[7], c.r[5].w[0] + 32u);
    set32(c.r[8], c.r[5].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BEA4u);  if (depth < kMaxDepth) unit_008A(c, 100u, depth + 1u); else { c.pc = 0x003296E8u; return; } if (c.pc != 0x0032BEA4u) [[unlikely]] return; }
L_0032BEA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0032BEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032BEB8:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 312u), c.f[21]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.f[20]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    c.f[20] = c.f[13];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF10u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BF10u) [[unlikely]] return; }
L_0032BF10:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF24u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032BF24u) [[unlikely]] return; }
L_0032BF24:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF38u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032BF38u) [[unlikely]] return; }
L_0032BF38:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF4Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032BF4Cu) [[unlikely]] return; }
L_0032BF4C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF60u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032BF60u) [[unlikely]] return; }
L_0032BF60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF78u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0032BF78u) [[unlikely]] return; }
L_0032BF78:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF88u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0032BF88u) [[unlikely]] return; }
L_0032BF88:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF9Cu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032BF9Cu) [[unlikely]] return; }
L_0032BF9C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFA8u);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032BFA8u) [[unlikely]] return; }
L_0032BFA8:
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFBCu);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x0032BFBCu) [[unlikely]] return; }
L_0032BFBC:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFD0u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032E178u; return; } if (c.pc != 0x0032BFD0u) [[unlikely]] return; }
L_0032BFD0:
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFE4u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x0032BFE4u) [[unlikely]] return; }
L_0032BFE4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_008B(c, 2u, depth); } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_008B(c, 1u, depth);
}

}
