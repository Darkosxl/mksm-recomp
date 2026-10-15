#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004A[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00228000;
    case 2u: goto L_00228004;
    case 3u: goto L_0022800C;
    case 4u: goto L_00228120;
    case 5u: goto L_0022813C;
    case 6u: goto L_00228148;
    case 7u: goto L_00228158;
    case 8u: goto L_00228160;
    case 9u: goto L_0022824C;
    case 10u: goto L_00228260;
    case 11u: goto L_0022826C;
    case 12u: goto L_0022827C;
    case 13u: goto L_0022829C;
    case 14u: goto L_002282B0;
    case 15u: goto L_002282BC;
    case 16u: goto L_002282CC;
    case 17u: goto L_002282F8;
    case 18u: goto L_00228350;
    case 19u: goto L_00228374;
    case 20u: goto L_0022838C;
    case 21u: goto L_00228398;
    case 22u: goto L_002283B0;
    case 23u: goto L_002283E8;
    case 24u: goto L_00228424;
    case 25u: goto L_00228438;
    case 26u: goto L_00228444;
    case 27u: goto L_00228460;
    case 28u: goto L_00228474;
    case 29u: goto L_0022852C;
    case 30u: goto L_0022856C;
    case 31u: goto L_00228578;
    case 32u: goto L_0022858C;
    case 33u: goto L_00228598;
    case 34u: goto L_002285A8;
    case 35u: goto L_002285B4;
    case 36u: goto L_002285C8;
    case 37u: goto L_002285F8;
    case 38u: goto L_00228628;
    case 39u: goto L_002286C0;
    case 40u: goto L_00228758;
    case 41u: goto L_002287A8;
    case 42u: goto L_00228808;
    case 43u: goto L_002288E0;
    case 44u: goto L_00228938;
    case 45u: goto L_0022894C;
    case 46u: goto L_00228960;
    case 47u: goto L_00228980;
    case 48u: goto L_002289A0;
    case 49u: goto L_002289B8;
    case 50u: goto L_002289CC;
    case 51u: goto L_002289E4;
    case 52u: goto L_00228A00;
    case 53u: goto L_00228A28;
    case 54u: goto L_00228A3C;
    case 55u: goto L_00228A54;
    case 56u: goto L_00228A68;
    case 57u: goto L_00228A7C;
    case 58u: goto L_00228AA0;
    case 59u: goto L_00228AD0;
    case 60u: goto L_00228AEC;
    case 61u: goto L_00228B08;
    case 62u: goto L_00228B20;
    case 63u: goto L_00228B40;
    case 64u: goto L_00228B84;
    case 65u: goto L_00228BB4;
    case 66u: goto L_00228BC8;
    case 67u: goto L_00228BEC;
    case 68u: goto L_00228C28;
    case 69u: goto L_00228C3C;
    case 70u: goto L_00228C58;
    case 71u: goto L_00228C74;
    case 72u: goto L_00228C8C;
    case 73u: goto L_00228CD0;
    case 74u: goto L_00228CE4;
    case 75u: goto L_00228D00;
    case 76u: goto L_00228D1C;
    case 77u: goto L_00228D34;
    case 78u: goto L_00228D60;
    case 79u: goto L_00228D78;
    case 80u: goto L_00228D90;
    case 81u: goto L_00228DA4;
    case 82u: goto L_00228DCC;
    case 83u: goto L_00228DE8;
    case 84u: goto L_00228DFC;
    case 85u: goto L_00228E20;
    case 86u: goto L_00228E58;
    case 87u: goto L_00228E6C;
    case 88u: goto L_00228E84;
    case 89u: goto L_00228EA0;
    case 90u: goto L_00228EB8;
    case 91u: goto L_00228EDC;
    case 92u: goto L_00228F04;
    case 93u: goto L_00228F14;
    case 94u: goto L_00228F30;
    case 95u: goto L_00228F48;
    case 96u: goto L_00228FA4;
    case 97u: goto L_00228FC0;
    case 98u: goto L_00228FD4;
    case 99u: goto L_00228FF8;
    case 100u: goto L_00229030;
    case 101u: goto L_00229044;
    case 102u: goto L_0022905C;
    case 103u: goto L_00229078;
    case 104u: goto L_00229090;
    case 105u: goto L_002290F8;
    case 106u: goto L_00229190;
    case 107u: goto L_002291B0;
    case 108u: goto L_002291F0;
    case 109u: goto L_00229218;
    case 110u: goto L_002292F8;
    case 111u: goto L_00229304;
    case 112u: goto L_00229314;
    case 113u: goto L_00229320;
    case 114u: goto L_00229330;
    case 115u: goto L_00229348;
    case 116u: goto L_00229370;
    case 117u: goto L_00229448;
    case 118u: goto L_00229454;
    case 119u: goto L_00229464;
    case 120u: goto L_00229470;
    case 121u: goto L_00229480;
    case 122u: goto L_00229498;
    case 123u: goto L_002294B4;
    case 124u: goto L_002294E0;
    case 125u: goto L_00229608;
    case 126u: goto L_00229720;
    case 127u: goto L_00229810;
    case 128u: goto L_002298DC;
    case 129u: goto L_00229920;
    case 130u: goto L_0022992C;
    case 131u: goto L_0022993C;
    case 132u: goto L_00229948;
    case 133u: goto L_00229958;
    case 134u: goto L_00229970;
    case 135u: goto L_00229A98;
    case 136u: goto L_00229ABC;
    case 137u: goto L_00229ACC;
    case 138u: goto L_00229AE0;
    case 139u: goto L_00229B30;
    case 140u: goto L_00229BC0;
    case 141u: goto L_00229C28;
    case 142u: goto L_00229C38;
    case 143u: goto L_00229D10;
    case 144u: goto L_00229D78;
    case 145u: goto L_00229DC0;
    case 146u: goto L_00229E60;
    case 147u: goto L_00229EE0;
    case 148u: goto L_00229FB0;
    case 149u: goto L_0022A010;
    case 150u: goto L_0022A060;
    case 151u: goto L_0022A100;
    case 152u: goto L_0022A184;
    case 153u: goto L_0022A194;
    case 154u: goto L_0022A248;
    case 155u: goto L_0022A2B0;
    case 156u: goto L_0022A444;
    case 157u: goto L_0022A454;
    case 158u: goto L_0022A464;
    case 159u: goto L_0022A4CC;
    case 160u: goto L_0022A4DC;
    case 161u: goto L_0022A524;
    case 162u: goto L_0022A534;
    case 163u: goto L_0022A598;
    case 164u: goto L_0022A5A8;
    case 165u: goto L_0022A5E0;
    case 166u: goto L_0022A618;
    case 167u: goto L_0022A6B4;
    case 168u: goto L_0022A6D8;
    case 169u: goto L_0022A70C;
    case 170u: goto L_0022A71C;
    case 171u: goto L_0022A73C;
    case 172u: goto L_0022A768;
    case 173u: goto L_0022A778;
    case 174u: goto L_0022A798;
    case 175u: goto L_0022A7C4;
    case 176u: goto L_0022A7D4;
    case 177u: goto L_0022A7F4;
    case 178u: goto L_0022A820;
    case 179u: goto L_0022A83C;
    case 180u: goto L_0022A858;
    case 181u: goto L_0022A86C;
    case 182u: goto L_0022A880;
    case 183u: goto L_0022A894;
    case 184u: goto L_0022A8A8;
    case 185u: goto L_0022A9BC;
    case 186u: goto L_0022A9CC;
    case 187u: goto L_0022A9DC;
    case 188u: goto L_0022AA44;
    case 189u: goto L_0022AA54;
    case 190u: goto L_0022AABC;
    case 191u: goto L_0022AB24;
    case 192u: goto L_0022AB8C;
    case 193u: goto L_0022ABF4;
    case 194u: goto L_0022AC34;
    case 195u: goto L_0022AC54;
    case 196u: goto L_0022AC84;
    case 197u: goto L_0022AC94;
    case 198u: goto L_0022ACCC;
    case 199u: goto L_0022AD10;
    case 200u: goto L_0022AE54;
    case 201u: goto L_0022AE64;
    case 202u: goto L_0022AE74;
    case 203u: goto L_0022AEDC;
    case 204u: goto L_0022AEEC;
    case 205u: goto L_0022AF2C;
    case 206u: goto L_0022AF3C;
    case 207u: goto L_0022AF7C;
    case 208u: goto L_0022AF8C;
    case 209u: goto L_0022AFCC;
    case 210u: goto L_0022AFDC;
    case 211u: goto L_0022B01C;
    case 212u: goto L_0022B048;
    case 213u: goto L_0022B090;
    case 214u: goto L_0022B0C0;
    case 215u: goto L_0022B0F0;
    case 216u: goto L_0022B190;
    case 217u: goto L_0022B214;
    case 218u: goto L_0022B224;
    case 219u: goto L_0022B3C0;
    case 220u: goto L_0022B428;
    case 221u: goto L_0022B4C8;
    case 222u: goto L_0022B560;
    case 223u: goto L_0022B5A0;
    case 224u: goto L_0022B5E8;
    case 225u: goto L_0022B6F0;
    case 226u: goto L_0022B848;
    case 227u: goto L_0022B870;
    case 228u: goto L_0022B910;
    case 229u: goto L_0022BBF8;
    case 230u: goto L_0022BC20;
    case 231u: goto L_0022BCF8;
    case 232u: goto L_0022BD30;
    case 233u: goto L_0022BD64;
    case 234u: goto L_0022BE18;
    case 235u: goto L_0022BE34;
    case 236u: goto L_0022BE58;
    case 237u: goto L_0022BEF8;
    case 238u: goto L_0022BF18;
    case 239u: goto L_0022BFAC;
    case 240u: goto L_0022BFC8;
    default: bad_entry(c, 0x00228000u); return;
    }
L_00228000:
    c.budget -= 1;
L_00228004:
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] - 23136u), c.r[2].w[0]);
    c.budget -= 2;
L_0022800C:
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[19].w[0] + 15824u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00228050; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 6;
L_00228050:
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = 0u;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    st32((c.r[3].w[0] + 15804u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00228094; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002280B0; } }
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002280D8; } }
L_00228094:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002280B0; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002280D8; } }
L_002280B0:
    set32(c.r[2], c.r[6].w[0] - 23136u);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002280D8; } }
    st32((c.r[2].w[0] + 16u), c.f[2]);
    c.budget -= 1;
L_002280D8:
    set32(c.r[17], c.r[6].w[0] - 23136u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00228104; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] - 23136u), 0u);
    st32((c.r[5].w[0] + 15804u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.budget -= 4;
L_00228104:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[5], 0u + 2u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228120u);  if (depth < kMaxDepth) unit_004A(c, 134u, depth + 1u); else { c.pc = 0x00229970u; return; } if (c.pc != 0x00228120u) [[unlikely]] return; }
L_00228120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[5], ld32((c.r[2].w[0] + 19816u)));
    set32(c.r[4], ld32((c.r[16].w[0] - 13696u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022813Cu);  if (depth < kMaxDepth) unit_004A(c, 166u, depth + 1u); else { c.pc = 0x0022A618u; return; } if (c.pc != 0x0022813Cu) [[unlikely]] return; }
L_0022813C:
    set32(c.r[4], ld32((c.r[16].w[0] - 13696u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228148u);  if (depth < kMaxDepth) unit_004A(c, 234u, depth + 1u); else { c.pc = 0x0022BE18u; return; } if (c.pc != 0x00228148u) [[unlikely]] return; }
L_00228148:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228158u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00228158u) [[unlikely]] return; }
L_00228158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002282CC; } }
L_00228160:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002282CC; } }
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    st32((c.r[19].w[0] + 15824u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002281B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002281CC; } }
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002281F4; } }
L_002281B0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002281CC; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002281F4; } }
L_002281CC:
    set32(c.r[2], c.r[6].w[0] - 23136u);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002281F4; } }
    st32((c.r[2].w[0] + 16u), c.f[2]);
    c.budget -= 1;
L_002281F4:
    set32(c.r[16], c.r[6].w[0] - 23136u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022821C; } }
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 2;
L_0022821C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], 0u + 79u);
    set32(c.r[3], 0u + 80u);
    set32(c.r[5], 0u + 2u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022824Cu);  if (depth < kMaxDepth) unit_004A(c, 134u, depth + 1u); else { c.pc = 0x00229970u; return; } if (c.pc != 0x0022824Cu) [[unlikely]] return; }
L_0022824C:
    set32(c.r[5], ld32((c.r[18].w[0] + 19816u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] - 14080u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228260u);  if (depth < kMaxDepth) unit_004A(c, 155u, depth + 1u); else { c.pc = 0x0022A2B0u; return; } if (c.pc != 0x00228260u) [[unlikely]] return; }
L_00228260:
    set32(c.r[4], ld32((c.r[17].w[0] - 14080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022826Cu);  if (depth < kMaxDepth) unit_004A(c, 234u, depth + 1u); else { c.pc = 0x0022BE18u; return; } if (c.pc != 0x0022826Cu) [[unlikely]] return; }
L_0022826C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022827Cu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0022827Cu) [[unlikely]] return; }
L_0022827C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 15200u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002282CC; } }
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022829Cu);  if (depth < kMaxDepth) unit_004A(c, 134u, depth + 1u); else { c.pc = 0x00229970u; return; } if (c.pc != 0x0022829Cu) [[unlikely]] return; }
L_0022829C:
    set32(c.r[5], ld32((c.r[18].w[0] + 19816u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] - 14080u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282B0u);  if (depth < kMaxDepth) unit_004A(c, 155u, depth + 1u); else { c.pc = 0x0022A2B0u; return; } if (c.pc != 0x002282B0u) [[unlikely]] return; }
L_002282B0:
    set32(c.r[4], ld32((c.r[17].w[0] - 14080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282BCu);  if (depth < kMaxDepth) unit_004A(c, 234u, depth + 1u); else { c.pc = 0x0022BE18u; return; } if (c.pc != 0x002282BCu) [[unlikely]] return; }
L_002282BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282CCu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x002282CCu) [[unlikely]] return; }
L_002282CC:
    st32((c.r[19].w[0] + 15824u), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002282F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15804u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 13692u), 0u);
    st32((c.r[4].w[0] - 13688u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00228398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] - 18608u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228350u);  if (depth < kMaxDepth) unit_005E(c, 8u, depth + 1u); else { c.pc = 0x00278520u; return; } if (c.pc != 0x00228350u) [[unlikely]] return; }
L_00228350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19540u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0022837C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - c.r[5].w[0]);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228374u);  if (depth < kMaxDepth) unit_005E(c, 4u, depth + 1u); else { c.pc = 0x00278050u; return; } if (c.pc != 0x00228374u) [[unlikely]] return; }
L_00228374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022838C; } }
L_0022837C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022838Cu);  if (depth < kMaxDepth) unit_005E(c, 4u, depth + 1u); else { c.pc = 0x00278050u; return; } if (c.pc != 0x0022838Cu) [[unlikely]] return; }
L_0022838C:
    set32(c.r[4], c.r[17].w[0] - 18608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228398u);  if (depth < kMaxDepth) unit_005E(c, 197u, depth + 1u); else { c.pc = 0x0027AF88u; return; } if (c.pc != 0x00228398u) [[unlikely]] return; }
L_00228398:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002283B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15208u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] - 18600u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002283E8u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x002283E8u) [[unlikely]] return; }
L_002283E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 19772u)));
    c.r[5].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + 15u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] - 22996u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228430; } }
L_00228414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 18600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228424u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x00228424u) [[unlikely]] return; }
L_00228424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[3].w[0] - 22996u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00228430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228438u);  if (depth < kMaxDepth) unit_004A(c, 27u, depth + 1u); else { c.pc = 0x00228460u; return; } if (c.pc != 0x00228438u) [[unlikely]] return; }
L_00228438:
    set32(c.r[4], ld32((c.r[17].w[0] - 22996u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228444u);  if (depth < kMaxDepth) unit_004A(c, 238u, depth + 1u); else { c.pc = 0x0022BF18u; return; } if (c.pc != 0x00228444u) [[unlikely]] return; }
L_00228444:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00228460:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228474u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00228474u) [[unlikely]] return; }
L_00228474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15208u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 19772u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 19776u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002284CC; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[7].w[0] + 3u);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[8].w[0] + 3u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[7].d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002284F0; } }
L_002284CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002284F0; } }
    set32(c.r[2], c.r[7].w[0] >> 31);
    set32(c.r[3], c.r[8].w[0] >> 31);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
L_002284F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18944u)));
    set32(c.r[16], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22996u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[3].w[0] + 31u);
    if (c.r[2].d[0] != 0) c.r[11].d[0] = c.r[3].d[0];
    set32(c.r[10], ld32((c.r[6].w[0] + 19776u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 19772u)));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 5));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022852Cu);  if (depth < kMaxDepth) unit_004A(c, 41u, depth + 1u); else { c.pc = 0x002287A8u; return; } if (c.pc != 0x0022852Cu) [[unlikely]] return; }
L_0022852C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 18928u)));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[2].w[0] + 255u);
    if (c.r[16].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022856Cu);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x0022856Cu) [[unlikely]] return; }
L_0022856C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228578u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00228578u) [[unlikely]] return; }
L_00228578:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022858Cu);  if (depth < kMaxDepth) unit_00A0(c, 278u, depth + 1u); else { c.pc = 0x00383C30u; return; } if (c.pc != 0x0022858Cu) [[unlikely]] return; }
L_0022858C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228598u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00228598u) [[unlikely]] return; }
L_00228598:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285A8u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x002285A8u) [[unlikely]] return; }
L_002285A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285B4u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x002285B4u) [[unlikely]] return; }
L_002285B4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002285C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 7424u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228614; } }
L_002285F8:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002285F8u | kUnwind; return; } goto L_002285F8; } }
L_00228614:
    set32(c.r[6], ld32((c.r[8].w[0] - 7424u)));
    set32(c.r[7], c.r[8].w[0] - 7424u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228640; } }
L_00228628:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228628u | kUnwind; return; } goto L_00228628; } }
L_00228640:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228664; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00228664:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[9], c.r[2].w[0] - 22976u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[7].w[0] + 12u), 0u);
    set32(c.r[6], c.r[8].w[0] - 7424u);
    set32(c.r[2], ld32((c.r[8].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[8].w[0] - 7424u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002286D8; } }
    c.budget -= 1;
L_002286C0:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002286C0u | kUnwind; return; } goto L_002286C0; } }
L_002286D8:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002286FC; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002286FC:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[8].w[0] - 7424u);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[8].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[8].w[0] - 7424u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228770; } }
L_00228758:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228758u | kUnwind; return; } goto L_00228758; } }
L_00228770:
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00228794; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00228794:
    st32((c.r[7].w[0]), c.r[4].w[0]);
    st32((c.r[7].w[0] + 8u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002287A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[2], c.r[2].w[0] - 22976u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[6].d[0] & 12ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228820; } }
L_00228808:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228808u | kUnwind; return; } goto L_00228808; } }
L_00228820:
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228844; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00228844:
    set32(c.r[2], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x60000000u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[3], c.r[7].w[0] + 31u);
    set32(c.r[20], c.r[8].w[0] << 1);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[8], c.r[8].w[0] + 31u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[30], c.r[7].w[0] + 63u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[17], ld32((c.r[29].w[0] + 68u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[23].w[0]) >> 6));
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st64((c.r[29].w[0] + 80u), c.r[4].d[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 38;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002288FC; } }
    c.budget -= 1;
L_002288E0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002288E0u | kUnwind; return; } goto L_002288E0; } }
L_002288FC:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], 0u - 32u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[19].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] << 4);
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228938u);  if (depth < kMaxDepth) unit_004A(c, 106u, depth + 1u); else { c.pc = 0x00229190u; return; } if (c.pc != 0x00228938u) [[unlikely]] return; }
L_00228938:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022894Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x0022894Cu) [[unlikely]] return; }
L_0022894C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228960u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228960u) [[unlikely]] return; }
L_00228960:
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 11;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228980u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228980u) [[unlikely]] return; }
L_00228980:
    c.r[6].d[0] = c.r[16].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[6].d[0] = c.r[17].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 76u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289A0u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x002289A0u) [[unlikely]] return; }
L_002289A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 78u);
    c.r[6].d[0] = 0ull | 40192ull;
    c.r[6].d[0] = c.r[6].d[0] << 17;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289B8u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x002289B8u) [[unlikely]] return; }
L_002289B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289CCu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x002289CCu) [[unlikely]] return; }
L_002289CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[6].d[0] | 4097ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289E4u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x002289E4u) [[unlikely]] return; }
L_002289E4:
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] | 42ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 66u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A00u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228A00u) [[unlikely]] return; }
L_00228A00:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[16].d[0] = c.r[16].d[0] << 14;
    c.r[6].d[0] = 0ull | 60034ull;
    c.r[6].d[0] = c.r[6].d[0] << 20;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[16].d[0];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A28u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228A28u) [[unlikely]] return; }
L_00228A28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 74u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A3Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228A3Cu) [[unlikely]] return; }
L_00228A3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 59u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 24;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A54u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228A54u) [[unlikely]] return; }
L_00228A54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A68u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228A68u) [[unlikely]] return; }
L_00228A68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 342u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A7Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228A7Cu) [[unlikely]] return; }
L_00228A7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull | 65024ull;
    c.r[6].d[0] = c.r[6].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AA0u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228AA0u) [[unlikely]] return; }
L_00228AA0:
    c.r[2].d[0] = c.r[20].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228C9C; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 4));
    set32(c.r[22], c.r[23].w[0] + 15u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00228B48; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], 0u + 256u);
    set32(c.r[21], 0u + 136u);
    set32(c.r[20], 0u + 128u);
    set32(c.r[19], 0u + 8u);
    c.budget -= 5;
L_00228AD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 3u);
    set32(c.r[19], c.r[19].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AECu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228AECu) [[unlikely]] return; }
L_00228AEC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[20], c.r[20].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B08u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228B08u) [[unlikely]] return; }
L_00228B08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10080000u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[21].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B20u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228B20u) [[unlikely]] return; }
L_00228B20:
    set32(c.r[21], c.r[21].w[0] + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 5u);
    set32(c.r[16], c.r[16].w[0] + 256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B40u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228B40u) [[unlikely]] return; }
L_00228B40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228AD0u | kUnwind; return; } goto L_00228AD0; } }
L_00228B48:
    set32(c.r[2], 0u - 1u);
    set32(c.r[17], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    if (c.r[2].d[0] != 0) c.r[22].d[0] = c.r[23].d[0];
    c.r[7].d[0] = c.r[17].d[0] << 16;
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 4));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 76u);
    set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B84u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228B84u) [[unlikely]] return; }
L_00228B84:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.r[17].d[0] = c.r[17].d[0] << 14;
    c.r[6].d[0] = 0ull | 60034ull;
    c.r[6].d[0] = c.r[6].d[0] << 20;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[16], c.r[16].w[0] << 5);
    c.r[17].d[0] = c.r[16].d[0] | c.r[17].d[0];
    c.r[6].d[0] = c.r[17].d[0] | c.r[6].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BB4u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228BB4u) [[unlikely]] return; }
L_00228BB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 342u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BC8u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228BC8u) [[unlikely]] return; }
L_00228BC8:
    c.r[6].d[0] = 0ull | 65024ull;
    c.r[6].d[0] = c.r[6].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BECu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228BECu) [[unlikely]] return; }
L_00228BEC:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 4));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00228D3C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[21], 0u + 256u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[20], 0u + 136u);
    set32(c.r[3], c.r[2].w[0] - 4096u);
    set32(c.r[19], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 4088u);
    c.r[22].d[0] = c.r[3].d[0] << 16;
    c.r[23].d[0] = c.r[2].d[0] << 16;
    set32(c.r[16], 0u + 8u);
    c.budget -= 12;
L_00228C28:
    c.r[6].d[0] = c.r[16].d[0] | c.r[30].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C3Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228C3Cu) [[unlikely]] return; }
L_00228C3C:
    set32(c.r[16], c.r[16].w[0] + 256u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[19], c.r[19].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C58u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228C58u) [[unlikely]] return; }
L_00228C58:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[6].d[0] = c.r[20].d[0] | c.r[23].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[20], c.r[20].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C74u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228C74u) [[unlikely]] return; }
L_00228C74:
    c.r[6].d[0] = c.r[21].d[0] | c.r[22].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[21], c.r[21].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C8Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228C8Cu) [[unlikely]] return; }
L_00228C8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228C28u | kUnwind; return; } goto L_00228C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228D3C; } }
L_00228C9C:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 4));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00228D3C; } }
    set32(c.r[2], c.r[19].w[0] << 5);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[23].d[0] = c.r[2].d[0] << 16;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[21], 0u + 256u);
    c.r[22].d[0] = c.r[2].d[0] << 16;
    set32(c.r[20], 0u + 136u);
    set32(c.r[19], 0u + 128u);
    set32(c.r[16], 0u + 8u);
    c.budget -= 10;
L_00228CD0:
    c.r[6].d[0] = c.r[16].d[0] | c.r[30].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CE4u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228CE4u) [[unlikely]] return; }
L_00228CE4:
    set32(c.r[16], c.r[16].w[0] + 256u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[19], c.r[19].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D00u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228D00u) [[unlikely]] return; }
L_00228D00:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[6].d[0] = c.r[20].d[0] | c.r[22].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[20], c.r[20].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D1Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228D1Cu) [[unlikely]] return; }
L_00228D1C:
    c.r[6].d[0] = c.r[21].d[0] | c.r[23].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[21], c.r[21].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D34u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228D34u) [[unlikely]] return; }
L_00228D34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228CD0u | kUnwind; return; } goto L_00228CD0; } }
L_00228D3C:
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[5], 0u + 76u);
    c.r[6].d[0] = c.r[16].d[0] << 16;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D60u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228D60u) [[unlikely]] return; }
L_00228D60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 78u);
    c.r[6].d[0] = 0ull | 38912ull;
    c.r[6].d[0] = c.r[6].d[0] << 17;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D78u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228D78u) [[unlikely]] return; }
L_00228D78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[6].d[0] | 4097ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D90u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228D90u) [[unlikely]] return; }
L_00228D90:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DA4u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228DA4u) [[unlikely]] return; }
L_00228DA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[16].d[0] = c.r[16].d[0] << 14;
    c.r[6].d[0] = 0ull | 60032ull;
    c.r[6].d[0] = c.r[6].d[0] << 20;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[3].d[0] | c.r[16].d[0];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DCCu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228DCCu) [[unlikely]] return; }
L_00228DCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 66u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] | 104ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DE8u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228DE8u) [[unlikely]] return; }
L_00228DE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 342u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DFCu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228DFCu) [[unlikely]] return; }
L_00228DFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull | 65024ull;
    c.r[6].d[0] = c.r[6].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E20u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228E20u) [[unlikely]] return; }
L_00228E20:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00228EC4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[20], 0u + 512u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    set32(c.r[19], 0u + 520u);
    c.r[22].d[0] = c.r[2].d[0] << 16;
    set32(c.r[16], 0u + 8u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] << 16;
    c.budget -= 10;
L_00228E58:
    c.r[6].d[0] = c.r[16].d[0] | c.r[30].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E6Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228E6Cu) [[unlikely]] return; }
L_00228E6C:
    set32(c.r[16], c.r[16].w[0] + 512u);
    set32(c.r[6], c.r[17].w[0] << 9);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E84u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228E84u) [[unlikely]] return; }
L_00228E84:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[6].d[0] = c.r[19].d[0] | c.r[22].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[19], c.r[19].w[0] + 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EA0u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228EA0u) [[unlikely]] return; }
L_00228EA0:
    c.r[6].d[0] = c.r[20].d[0] | c.r[21].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[20], c.r[20].w[0] + 512u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EB8u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228EB8u) [[unlikely]] return; }
L_00228EB8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228E58u | kUnwind; return; } goto L_00228E58; } }
L_00228EC4:
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EDCu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228EDCu) [[unlikely]] return; }
L_00228EDC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[6].d[0] = c.r[16].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[5], 0u + 76u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F04u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228F04u) [[unlikely]] return; }
L_00228F04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 18600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F14u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x00228F14u) [[unlikely]] return; }
L_00228F14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 78u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F30u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228F30u) [[unlikely]] return; }
L_00228F30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[6].d[0] | 4097ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F48u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228F48u) [[unlikely]] return; }
L_00228F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 18928u)));
    c.r[7].d[0] = 0ull | 54582ull;
    c.r[7].d[0] = c.r[7].d[0] << 19;
    c.r[16].d[0] = c.r[16].d[0] << 14;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 46;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 11);
    c.r[16].d[0] = c.r[4].d[0] | c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FA4u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228FA4u) [[unlikely]] return; }
L_00228FA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 66u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] | 41ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FC0u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228FC0u) [[unlikely]] return; }
L_00228FC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 342u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FD4u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228FD4u) [[unlikely]] return; }
L_00228FD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull | 65024ull;
    c.r[6].d[0] = c.r[6].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FF8u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00228FF8u) [[unlikely]] return; }
L_00228FF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022909C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[20], 0u + 512u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    set32(c.r[19], 0u + 520u);
    c.r[22].d[0] = c.r[2].d[0] << 16;
    c.r[23].d[0] = c.r[4].d[0] << 16;
    set32(c.r[16], 0u + 8u);
    c.budget -= 10;
L_00229030:
    c.r[6].d[0] = c.r[16].d[0] | c.r[30].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229044u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00229044u) [[unlikely]] return; }
L_00229044:
    set32(c.r[16], c.r[16].w[0] + 512u);
    set32(c.r[6], c.r[17].w[0] << 9);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022905Cu);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x0022905Cu) [[unlikely]] return; }
L_0022905C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[6].d[0] = c.r[19].d[0] | c.r[22].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[19], c.r[19].w[0] + 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229078u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00229078u) [[unlikely]] return; }
L_00229078:
    c.r[6].d[0] = c.r[20].d[0] | c.r[23].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[20], c.r[20].w[0] + 512u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229090u);  if (depth < kMaxDepth) unit_004A(c, 107u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00229090u) [[unlikely]] return; }
L_00229090:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229030u | kUnwind; return; } goto L_00229030; } }
L_0022909C:
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 16383ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] >> 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229110; } }
    c.budget -= 1;
L_002290F8:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002290F8u | kUnwind; return; } goto L_002290F8; } }
L_00229110:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229134; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00229134:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229190:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[3], 0u + 14u);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002291B0:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 16383ull;
    c.r[3].d[0] = c.r[3].d[0] >> 14;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[3].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[2].w[0]), c.r[6].d[0]);
    st64((c.r[2].w[0] + 8u), c.r[5].d[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002291F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[10], 0u + 16u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[11], c.r[16].w[0] - 1408u);
    set32(c.r[9], 0u + 8u);
    set32(c.r[8], 0u + 24u);
    c.budget -= 10;
L_00229218:
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] & 31ull;
    c.r[6].d[0] = c.r[5].d[0] & 224ull;
    c.r[3].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_0022925C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022924C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_0022927C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229284; } }
L_0022924C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_0022926C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229284; } }
L_0022925C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229284; } }
L_0022926C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229284; } }
L_0022927C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_00229284:
    set32(c.r[2], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229218u | kUnwind; return; } goto L_00229218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], ld32((c.r[2].w[0] - 18936u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[7].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292F8u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x002292F8u) [[unlikely]] return; }
L_002292F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229304u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00229304u) [[unlikely]] return; }
L_00229304:
    set32(c.r[5], c.r[16].w[0] - 1408u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229314u);  if (depth < kMaxDepth) unit_00A0(c, 278u, depth + 1u); else { c.pc = 0x00383C30u; return; } if (c.pc != 0x00229314u) [[unlikely]] return; }
L_00229314:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229320u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00229320u) [[unlikely]] return; }
L_00229320:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229330u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00229330u) [[unlikely]] return; }
L_00229330:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229348:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[11], 0u + 16u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[12], c.r[16].w[0] - 1408u);
    set32(c.r[10], 0u + 8u);
    set32(c.r[9], 0u + 24u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 10;
L_00229370:
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] & 31ull;
    c.r[6].d[0] = c.r[4].d[0] & 224ull;
    c.r[3].d[0] = c.r[5].d[0] & 24ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_002293B4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002293A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_002293D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002293DC; } }
L_002293A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_002293C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002293DC; } }
L_002293B4:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002293DC; } }
L_002293C4:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[5].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002293DC; } }
L_002293D4:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[5].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_002293DC:
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229370u | kUnwind; return; } goto L_00229370; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], ld32((c.r[2].w[0] - 18928u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[7].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229448u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00229448u) [[unlikely]] return; }
L_00229448:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229454u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00229454u) [[unlikely]] return; }
L_00229454:
    set32(c.r[5], c.r[16].w[0] - 1408u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229464u);  if (depth < kMaxDepth) unit_00A0(c, 278u, depth + 1u); else { c.pc = 0x00383C30u; return; } if (c.pc != 0x00229464u) [[unlikely]] return; }
L_00229464:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229470u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00229470u) [[unlikely]] return; }
L_00229470:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229480u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00229480u) [[unlikely]] return; }
L_00229480:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229498:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294B4u);  if (depth < kMaxDepth) unit_0057(c, 279u, depth + 1u); else { c.pc = 0x0025FE10u; return; } if (c.pc != 0x002294B4u) [[unlikely]] return; }
L_002294B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19232u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229958; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[17].w[0] - 1408u);
    set32(c.r[9], 0u + 16u);
    set32(c.r[8], 0u + 8u);
    set32(c.r[7], 0u + 24u);
    c.budget -= 7;
L_002294E0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].d[0] = c.r[2].d[0] & 224ull;
    c.r[3].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_00229524; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229514; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00229544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022954C; } }
L_00229514:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00229534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022954C; } }
L_00229524:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022954C; } }
L_00229534:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022954C; } }
L_00229544:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_0022954C:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002294E0u | kUnwind; return; } goto L_002294E0; } }
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x48C30000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[3] = c.r[1].w[0];
    c.f[4] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002296EC; } }
    c.f[5] = fp::sub(c.f[2], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.f[2] = fp::sub(c.f[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[6] = c.r[1].w[0];
    set32(c.r[15], c.r[2].w[0] - 1408u);
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[14], 0u + 16u);
    set32(c.r[13], 0u + 8u);
    set32(c.r[12], 0u + 24u);
    c.budget -= 10;
L_00229608:
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    c.r[9].d[0] = c.r[2].d[0] & 224ull;
    c.r[6].d[0] = c.r[4].d[0] & 24ull;
    c.r[10].d[0] = ld8((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[7] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[7]);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 22;
    { const bool t = c.r[6].d[0] == c.r[14].d[0];  if (t) { goto L_0022968C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022967C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[13].d[0];  if (t) { goto L_002296AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002296B4; } }
L_0022967C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[12].d[0];  if (t) { goto L_0022969C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002296B4; } }
L_0022968C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002296B4; } }
L_0022969C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002296B4; } }
L_002296AC:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_002296B4:
    set32(c.r[2], c.r[8].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229608u | kUnwind; return; } goto L_00229608; } }
L_002296EC:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[8], 0u + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002297E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[15], c.r[2].w[0] - 1408u);
    set32(c.r[14], 0u + 16u);
    set32(c.r[13], 0u + 8u);
    set32(c.r[12], 0u + 24u);
    c.budget -= 7;
L_00229720:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[6].d[0] = c.r[3].d[0] & 31ull;
    c.r[9].d[0] = c.r[3].d[0] & 224ull;
    set32(c.r[4], c.r[2].w[0] >> 31);
    c.r[7].d[0] = c.r[6].d[0] & 24ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == c.r[14].d[0];  if (t) { goto L_00229784; } }
    c.r[2].d[0] = c.r[7].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229774; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[13].d[0];  if (t) { goto L_002297A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002297AC; } }
L_00229774:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[12].d[0];  if (t) { goto L_00229794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002297AC; } }
L_00229784:
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002297AC; } }
L_00229794:
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002297AC; } }
L_002297A4:
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_002297AC:
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229720u | kUnwind; return; } goto L_00229720; } }
L_002297E4:
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[8], c.f[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002298D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[14], 0u + 16u);
    set32(c.r[13], c.r[2].w[0] - 1408u);
    set32(c.r[12], 0u + 8u);
    set32(c.r[11], 0u + 24u);
    c.budget -= 6;
L_00229810:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[6].d[0] = c.r[3].d[0] & 31ull;
    c.r[9].d[0] = c.r[3].d[0] & 224ull;
    set32(c.r[4], c.r[2].w[0] >> 31);
    c.r[7].d[0] = c.r[6].d[0] & 24ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == c.r[14].d[0];  if (t) { goto L_00229874; } }
    c.r[2].d[0] = c.r[7].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229864; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[12].d[0];  if (t) { goto L_00229894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022989C; } }
L_00229864:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[11].d[0];  if (t) { goto L_00229884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022989C; } }
L_00229874:
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022989C; } }
L_00229884:
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022989C; } }
L_00229894:
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_0022989C:
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[13].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229810u | kUnwind; return; } goto L_00229810; } }
L_002298D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298DCu);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x002298DCu) [[unlikely]] return; }
L_002298DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[12], ld32((c.r[2].w[0] - 18920u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[12].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[12].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229920u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00229920u) [[unlikely]] return; }
L_00229920:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022992Cu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022992Cu) [[unlikely]] return; }
L_0022992C:
    set32(c.r[5], c.r[17].w[0] - 1408u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022993Cu);  if (depth < kMaxDepth) unit_00A0(c, 278u, depth + 1u); else { c.pc = 0x00383C30u; return; } if (c.pc != 0x0022993Cu) [[unlikely]] return; }
L_0022993C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229948u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00229948u) [[unlikely]] return; }
L_00229948:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229958u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00229958u) [[unlikely]] return; }
L_00229958:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], 0u + 66u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 24u), c.r[8].d[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002299B4; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    set32(c.r[3], 0u + 68u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], 0u + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 7;
L_002299B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002299D8; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    set32(c.r[3], 0u + 136u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], 0u + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 7;
L_002299D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_002299FC; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    set32(c.r[3], 0u + 72u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], 0u + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 7;
L_002299FC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00229A20; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    set32(c.r[3], 0u + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 6;
L_00229A20:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[8].d[0] = c.r[8].d[0] | 61166ull;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    set32(c.r[5], 0u + 73u);
    set32(c.r[6], 0u + 74u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 45;
    c.r[7].d[0] = c.r[7].d[0] | 32772ull;
    set32(c.r[2], 0u + 59u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 8u), c.r[8].d[0]);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 32u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 56u), c.r[5].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 72u), c.r[6].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0]), c.r[7].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 40u), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 48u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[1].w[0] + 64u), 0ull);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229A98u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x00229A98u) [[unlikely]] return; }
L_00229A98:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[7], 0u - 65u);
    set32(c.r[6], 0u + 5u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229ABCu);  if (depth < kMaxDepth) unit_00A1(c, 30u, depth + 1u); else { c.pc = 0x00384580u; return; } if (c.pc != 0x00229ABCu) [[unlikely]] return; }
L_00229ABC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229ACCu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00229ACCu) [[unlikely]] return; }
L_00229ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[6].w[0] + 20392u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[8], c.r[2].w[0] - 7424u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 20392u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[6], ld32((c.r[2].w[0] - 7424u)));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229B48; } }
    c.budget -= 1;
L_00229B30:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229B30u | kUnwind; return; } goto L_00229B30; } }
L_00229B48:
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229B6C; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00229B6C:
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 8u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[7], c.r[18].w[0] - 7424u);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    st32((c.r[8].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229BDC; } }
L_00229BC0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229BC0u | kUnwind; return; } goto L_00229BC0; } }
L_00229BDC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[19], c.r[18].w[0] - 7424u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] - 18600u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C28u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x00229C28u) [[unlikely]] return; }
L_00229C28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C38u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x00229C38u) [[unlikely]] return; }
L_00229C38:
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[4], 0u + 78u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    st32((c.r[18].w[0] - 7424u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00050000u);
    st32((c.r[3].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[5], 0u + 71u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + 32u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[7], 0u + 2u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00229CE8; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00229CD4u);  goto L_00229CD8; }
L_00229CD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00229CE8:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229D28; } }
    c.budget -= 1;
L_00229D10:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229D10u | kUnwind; return; } goto L_00229D10; } }
L_00229D28:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[18].w[0] - 7424u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] >> 2);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229D78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[6].w[0] + 20392u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[6].w[0] + 20392u));
    set32(c.r[9], c.r[2].w[0] - 7424u);
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[7], ld32((c.r[2].w[0] - 7424u)));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229DD8; } }
    c.budget -= 1;
L_00229DC0:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229DC0u | kUnwind; return; } goto L_00229DC0; } }
L_00229DD8:
    set32(c.r[4], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229DFC; } }
    set32(c.r[2], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00229DFC:
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[9].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[7].w[0] + 8u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 16u);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    set32(c.r[8], c.r[16].w[0] - 7424u);
    st32((c.r[9].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229E7C; } }
L_00229E60:
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229E60u | kUnwind; return; } goto L_00229E60; } }
L_00229E7C:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[17], c.r[16].w[0] - 7424u);
    set32(c.r[7], 0u + 63u);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[8].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18600u);
    set32(c.r[5], ld32((c.r[16].w[0] - 7424u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[16].w[0] - 7424u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EE0u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x00229EE0u) [[unlikely]] return; }
L_00229EE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[3].w[0] - 18944u)));
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[6], ld32((c.r[16].w[0] - 7424u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + 31u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], 0u + 78u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[6].w[0] + 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], 0u + 2u);
    st32((c.r[16].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 33;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00229F8C; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00229F78u);  goto L_00229F7C; }
L_00229F7C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00229F8C:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229FC8; } }
L_00229FB0:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229FB0u | kUnwind; return; } goto L_00229FB0; } }
L_00229FC8:
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] - 7424u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[16].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022A010:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[6].w[0] + 20392u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[8], c.r[2].w[0] - 7424u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 20392u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[7], ld32((c.r[2].w[0] - 7424u)));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A078; } }
    c.budget -= 1;
L_0022A060:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A060u | kUnwind; return; } goto L_0022A060; } }
L_0022A078:
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022A09C; } }
    set32(c.r[2], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022A09C:
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[7].w[0] + 8u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 16u);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    set32(c.r[7], c.r[18].w[0] - 7424u);
    st32((c.r[8].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A11C; } }
L_0022A100:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A100u | kUnwind; return; } goto L_0022A100; } }
L_0022A11C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[19], c.r[18].w[0] - 7424u);
    set32(c.r[6], 0u + 63u);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] - 18600u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A184u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x0022A184u) [[unlikely]] return; }
L_0022A184:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A194u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x0022A194u) [[unlikely]] return; }
L_0022A194:
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[4], 0u + 78u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 20u)));
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0022A224; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022A210u);  goto L_0022A214; }
L_0022A214:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022A224:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A260; } }
L_0022A248:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A248u | kUnwind; return; } goto L_0022A248; } }
L_0022A260:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[18].w[0] - 7424u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] >> 2);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022A2B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[30].sd[0] >= 0;  if (t) { goto L_0022A30C; } }
    set32(c.r[2], 0u - c.r[30].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A310; } }
L_0022A30C:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022A310:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[22].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], 0u - 32768u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[8].d[0] = c.r[8].d[0] | 4097ull;
    c.r[3].d[0] = ld64((c.r[22].w[0]));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 15836u)));
    set32(c.r[9], 0u + 71u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[10], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 14;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 16u), c.r[4].d[0]);
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].d[0] = ld64((c.r[22].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[7], ld32((c.r[6].w[0] + 15836u)));
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 4;
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 45;
    c.r[7].d[0] = c.r[7].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = 0ull | 62463ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], 0u + 14u);
    set32(c.r[11], 0u + 5u);
    set32(c.r[18], c.r[18].w[0] - 18600u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 20u);
    st64((c.r[22].w[0] + 72u), 0ull);
    st64((c.r[22].w[0] + 104u), c.r[8].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[22].w[0] + 136u), c.r[10].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[22].w[0] + 152u), c.r[11].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[22].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[22].w[0] + 160u), c.r[7].d[0]);
    st64((c.r[22].w[0] + 24u), c.r[9].d[0]);
    st64((c.r[22].w[0] + 88u), c.r[10].d[0]);
    st64((c.r[22].w[0] + 120u), c.r[11].d[0]);
    st64((c.r[22].w[0] + 56u), c.r[6].d[0]);
    st64((c.r[22].w[0]), c.r[3].d[0]);
    st64((c.r[22].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[22].w[0] + 40u), c.r[2].d[0]);
    c.budget -= 77;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A444u);  if (depth < kMaxDepth) unit_005D(c, 74u, depth + 1u); else { c.pc = 0x002752B0u; return; } if (c.pc != 0x0022A444u) [[unlikely]] return; }
L_0022A444:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A454u);  if (depth < kMaxDepth) unit_005D(c, 83u, depth + 1u); else { c.pc = 0x00275370u; return; } if (c.pc != 0x0022A454u) [[unlikely]] return; }
L_0022A454:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A464u);  if (depth < kMaxDepth) unit_005D(c, 85u, depth + 1u); else { c.pc = 0x00275390u; return; } if (c.pc != 0x0022A464u) [[unlikely]] return; }
L_0022A464:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));
    c.r[16].d[0] = c.r[16].d[0] & 63ull;
    set32(c.r[17], c.r[17].w[0] << 5);
    c.r[16].d[0] = c.r[16].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] << 20;
    c.r[16].d[0] = c.r[17].d[0] | c.r[16].d[0];
    c.r[3].d[0] = 0ull | 60032ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 342u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 609ull;
    c.r[3].d[0] = 0ull | 65024ull;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    st64((c.r[22].w[0] + 64u), c.r[5].d[0]);
    st64((c.r[22].w[0] + 96u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[22].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[22].w[0] + 32u), c.r[2].d[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A4CCu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A4CCu) [[unlikely]] return; }
L_0022A4CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A4DCu);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022A4DCu) [[unlikely]] return; }
L_0022A4DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 15832u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[20].w[0] + 15828u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[5].w[0] + 15824u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[23].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[22].w[0] + 112u), c.r[3].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A524u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A524u) [[unlikely]] return; }
L_0022A524:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A534u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022A534u) [[unlikely]] return; }
L_0022A534:
    set32(c.r[3], ld32((c.r[19].w[0] + 15832u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], ld32((c.r[20].w[0] + 15828u)));
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 15824u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[23].w[0]);
    set32(c.r[2], c.r[21].w[0] << 20);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[4], c.r[4].w[0] - c.r[23].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[30].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[2], c.r[30].w[0] + 8u);
    st64((c.r[22].w[0] + 144u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[22].w[0] + 80u), c.r[2].d[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A598u);  if (depth < kMaxDepth) unit_005D(c, 83u, depth + 1u); else { c.pc = 0x00275370u; return; } if (c.pc != 0x0022A598u) [[unlikely]] return; }
L_0022A598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5A8u);  if (depth < kMaxDepth) unit_005D(c, 80u, depth + 1u); else { c.pc = 0x00275338u; return; } if (c.pc != 0x0022A5A8u) [[unlikely]] return; }
L_0022A5A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u - c.r[30].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 128u), c.r[3].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5E0u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022A5E0u) [[unlikely]] return; }
L_0022A5E0:
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
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022A618:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st32((c.r[29].w[0] + 344u), c.f[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.f[23] = c.f[12];
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 336u), c.f[22]);
    st32((c.r[29].w[0] + 328u), c.f[21]);
    st32((c.r[29].w[0] + 320u), c.f[20]);
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = c.r[23].sd[0] >= 0;  if (t) { goto L_0022A68C; } }
    set32(c.r[2], 0u - c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A690; } }
L_0022A68C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022A690:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[22], c.r[29].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 18600u);
    c.f[21] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6B4u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A6B4u) [[unlikely]] return; }
L_0022A6B4:
    set32(c.r[19], 0u - c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6D8u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A6D8u) [[unlikely]] return; }
L_0022A6D8:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[23].w[0] + 8u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st64((c.r[29].w[0] + 152u), c.r[3].d[0]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.f[21];
    c.f[12] = c.f[20];
    c.f[15] = c.f[22];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A70Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0022A70Cu) [[unlikely]] return; }
L_0022A70C:
    set32(c.r[21], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A71Cu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A71Cu) [[unlikely]] return; }
L_0022A71C:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A73Cu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A73Cu) [[unlikely]] return; }
L_0022A73C:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.f[13] = c.f[21];
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.f[12] = c.f[20];
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = c.f[22];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A768u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0022A768u) [[unlikely]] return; }
L_0022A768:
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A778u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A778u) [[unlikely]] return; }
L_0022A778:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A798u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A798u) [[unlikely]] return; }
L_0022A798:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.f[13] = c.f[21];
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[12] = c.f[20];
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = c.f[22];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0022A7C4u) [[unlikely]] return; }
L_0022A7C4:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7D4u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A7D4u) [[unlikely]] return; }
L_0022A7D4:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7F4u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022A7F4u) [[unlikely]] return; }
L_0022A7F4:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[12] = c.f[20];
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.f[21];
    c.f[15] = c.f[22];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A820u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0022A820u) [[unlikely]] return; }
L_0022A820:
    c.f[12] = c.f[21];
    c.f[13] = c.f[23];
    c.f[14] = c.f[12];
    c.f[15] = c.f[22];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A83Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0022A83Cu) [[unlikely]] return; }
L_0022A83C:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A858u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x0022A858u) [[unlikely]] return; }
L_0022A858:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A86Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0022A86Cu) [[unlikely]] return; }
L_0022A86C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A880u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0022A880u) [[unlikely]] return; }
L_0022A880:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A894u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0022A894u) [[unlikely]] return; }
L_0022A894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8A8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0022A8A8u) [[unlikely]] return; }
L_0022A8A8:
    mmi::por(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], 0u - 32768u);
    st128((c.r[30].w[0]) & ~15u, c.r[4]);
    set32(c.r[9], 0u + 14u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 64512ull;
    c.r[7].d[0] = c.r[7].d[0] << 17;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 15;
    c.r[7].d[0] = c.r[7].d[0] | 32767ull;
    c.r[2].d[0] = ld64((c.r[30].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[5].d[0] = ld64((c.r[30].w[0] + 8u));
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[10], 0u + 71u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[3].d[0] = 0ull | 62463ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[11].d[0] = c.r[11].d[0] | 4097ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[6], 0u + 5u);
    set32(c.r[8], 0u + 20u);
    set32(c.r[9], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[30].w[0] + 72u), 0ull);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[30].w[0] + 40u), c.r[8].d[0]);
    st64((c.r[30].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[30].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[30].w[0] + 216u), c.r[6].d[0]);
    st64((c.r[30].w[0] + 232u), c.r[10].d[0]);
    st64((c.r[30].w[0] + 224u), c.r[11].d[0]);
    st64((c.r[30].w[0] + 24u), c.r[10].d[0]);
    st64((c.r[30].w[0] + 120u), c.r[6].d[0]);
    st64((c.r[30].w[0] + 152u), c.r[6].d[0]);
    st64((c.r[30].w[0] + 184u), c.r[6].d[0]);
    st64((c.r[30].w[0] + 16u), c.r[11].d[0]);
    st64((c.r[30].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[30].w[0] + 200u), c.r[3].d[0]);
    st64((c.r[30].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[30].w[0] + 136u), c.r[3].d[0]);
    st64((c.r[30].w[0] + 168u), c.r[3].d[0]);
    st64((c.r[30].w[0]), c.r[2].d[0]);
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9BCu);  if (depth < kMaxDepth) unit_005D(c, 74u, depth + 1u); else { c.pc = 0x002752B0u; return; } if (c.pc != 0x0022A9BCu) [[unlikely]] return; }
L_0022A9BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9CCu);  if (depth < kMaxDepth) unit_005D(c, 83u, depth + 1u); else { c.pc = 0x00275370u; return; } if (c.pc != 0x0022A9CCu) [[unlikely]] return; }
L_0022A9CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9DCu);  if (depth < kMaxDepth) unit_005D(c, 84u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x0022A9DCu) [[unlikely]] return; }
L_0022A9DC:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));
    c.r[16].d[0] = c.r[16].d[0] & 63ull;
    set32(c.r[17], c.r[17].w[0] << 5);
    c.r[16].d[0] = c.r[16].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] << 20;
    c.r[16].d[0] = c.r[17].d[0] | c.r[16].d[0];
    c.r[3].d[0] = 0ull | 60032ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 340u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 609ull;
    c.r[3].d[0] = 0ull | 65024ull;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    st64((c.r[30].w[0] + 64u), c.r[5].d[0]);
    st64((c.r[30].w[0] + 96u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[30].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[30].w[0] + 32u), c.r[2].d[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA44u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022AA44u) [[unlikely]] return; }
L_0022AA44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA54u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022AA54u) [[unlikely]] return; }
L_0022AA54:
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022AA5Cu);  goto L_0022AA60; }
L_0022AA60:
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[2] = ld32((c.r[2].w[0] + 15832u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 15828u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.f[20] = c.r[17].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[12] = fp::add(c.f[2], c.f[12]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AABCu);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x0022AABCu) [[unlikely]] return; }
L_0022AABC:
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 15824u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    st64((c.r[30].w[0] + 112u), c.r[16].d[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15832u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    set32(c.r[16], ld32((c.r[3].w[0] + 15828u)));
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB24u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x0022AB24u) [[unlikely]] return; }
L_0022AB24:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 15824u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    st64((c.r[30].w[0] + 144u), c.r[16].d[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15832u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    set32(c.r[16], ld32((c.r[3].w[0] + 15828u)));
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB8Cu);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x0022AB8Cu) [[unlikely]] return; }
L_0022AB8C:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 15824u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    st64((c.r[30].w[0] + 176u), c.r[16].d[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15832u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    set32(c.r[16], ld32((c.r[3].w[0] + 15828u)));
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABF4u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x0022ABF4u) [[unlikely]] return; }
L_0022ABF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[3], ld32((c.r[4].w[0] + 15824u)));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[17], c.r[23].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[17].d[0] = c.r[17].d[0] << 16;
    st64((c.r[30].w[0] + 208u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[4].d[0] | c.r[17].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[30].w[0] + 80u), c.r[2].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC34u);  if (depth < kMaxDepth) unit_005D(c, 83u, depth + 1u); else { c.pc = 0x00275370u; return; } if (c.pc != 0x0022AC34u) [[unlikely]] return; }
L_0022AC34:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    st64((c.r[30].w[0] + 128u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC54u);  if (depth < kMaxDepth) unit_005D(c, 80u, depth + 1u); else { c.pc = 0x00275338u; return; } if (c.pc != 0x0022AC54u) [[unlikely]] return; }
L_0022AC54:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[30].w[0] + 160u), c.r[2].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC84u);  if (depth < kMaxDepth) unit_005D(c, 83u, depth + 1u); else { c.pc = 0x00275370u; return; } if (c.pc != 0x0022AC84u) [[unlikely]] return; }
L_0022AC84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC94u);  if (depth < kMaxDepth) unit_005D(c, 80u, depth + 1u); else { c.pc = 0x00275338u; return; } if (c.pc != 0x0022AC94u) [[unlikely]] return; }
L_0022AC94:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[19].d[0] << 16;
    c.r[16].d[0] = c.r[16].d[0] | c.r[19].d[0];
    st64((c.r[30].w[0] + 192u), c.r[16].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACCCu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022ACCCu) [[unlikely]] return; }
L_0022ACCC:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[23] = ld32((c.r[29].w[0] + 344u));
    c.f[22] = ld32((c.r[29].w[0] + 336u));
    c.f[21] = ld32((c.r[29].w[0] + 328u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022AD10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 32768u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 10u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[6].d[0] = 0ull | 32768ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[9].d[0] = 0ull | 64512ull;
    c.r[9].d[0] = c.r[9].d[0] << 17;
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[9].d[0] = c.r[9].d[0] << 15;
    c.r[9].d[0] = c.r[9].d[0] | 32767ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | 65535ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[7], 0u - 1u);
    c.r[7].d[0] = c.r[7].d[0] >> 4;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 45;
    st128((c.r[17].w[0]) & ~15u, c.r[2]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[11].d[0] = c.r[11].d[0] | 4097ull;
    set32(c.r[19], c.r[19].w[0] - 18600u);
    c.r[2].d[0] = ld64((c.r[17].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[17].w[0] + 72u), 0ull);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[3].d[0] = 0ull | 62463ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    set32(c.r[4], 0u + 14u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[9], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[10], 0u + 5u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[8], 0u + 71u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 20u);
    st64((c.r[17].w[0] + 56u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[17].w[0] + 104u), c.r[7].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[17].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[17].w[0] + 152u), c.r[10].d[0]);
    st64((c.r[17].w[0] + 168u), c.r[8].d[0]);
    st64((c.r[17].w[0] + 160u), c.r[11].d[0]);
    st64((c.r[17].w[0] + 24u), c.r[8].d[0]);
    st64((c.r[17].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[17].w[0] + 120u), c.r[10].d[0]);
    st64((c.r[17].w[0] + 16u), c.r[11].d[0]);
    st64((c.r[17].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[17].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE54u);  if (depth < kMaxDepth) unit_005D(c, 71u, depth + 1u); else { c.pc = 0x00275260u; return; } if (c.pc != 0x0022AE54u) [[unlikely]] return; }
L_0022AE54:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE64u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022AE64u) [[unlikely]] return; }
L_0022AE64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE74u);  if (depth < kMaxDepth) unit_005D(c, 84u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x0022AE74u) [[unlikely]] return; }
L_0022AE74:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));
    c.r[16].d[0] = c.r[16].d[0] & 63ull;
    set32(c.r[18], c.r[18].w[0] << 5);
    c.r[16].d[0] = c.r[16].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] << 20;
    c.r[16].d[0] = c.r[18].d[0] | c.r[16].d[0];
    c.r[3].d[0] = 0ull | 60032ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 342u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 577ull;
    c.r[3].d[0] = 0ull | 65024ull;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    st64((c.r[17].w[0] + 64u), c.r[5].d[0]);
    st64((c.r[17].w[0] + 96u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[17].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[17].w[0] + 32u), c.r[2].d[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEDCu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022AEDCu) [[unlikely]] return; }
L_0022AEDC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEECu);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022AEECu) [[unlikely]] return; }
L_0022AEEC:
    set32(c.r[3], ld32((c.r[22].w[0] + 15828u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], ld32((c.r[20].w[0] + 15832u)));
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[5], ld32((c.r[21].w[0] + 15824u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1600u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[17].w[0] + 112u), c.r[3].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF2Cu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022AF2Cu) [[unlikely]] return; }
L_0022AF2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF3Cu);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022AF3Cu) [[unlikely]] return; }
L_0022AF3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 15832u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[22].w[0] + 15828u)));
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 15824u)));
    set32(c.r[3], c.r[3].w[0] + 800u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[17].w[0] + 144u), c.r[5].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF7Cu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022AF7Cu) [[unlikely]] return; }
L_0022AF7C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF8Cu);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022AF8Cu) [[unlikely]] return; }
L_0022AF8C:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[4], c.r[16].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 64u);
    set32(c.r[16], c.r[16].w[0] - 64u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 80u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AFCCu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x0022AFCCu) [[unlikely]] return; }
L_0022AFCC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AFDCu);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x0022AFDCu) [[unlikely]] return; }
L_0022AFDC:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[4], c.r[16].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 128u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B01Cu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022B01Cu) [[unlikely]] return; }
L_0022B01C:
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
L_0022B048:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[2].w[0] + 20392u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 18400u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 18264u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 20392u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    st64((c.r[29].w[0]), c.r[6].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B090u);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x0022B090u) [[unlikely]] return; }
L_0022B090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 7424u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] - 7424u);
    c.r[6].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[6].w[0] + 16u);
    if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022B0DC; } }
L_0022B0C0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B0C0u | kUnwind; return; } goto L_0022B0C0; } }
L_0022B0DC:
    set32(c.r[4], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[8], c.r[18].w[0] - 7424u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B108; } }
L_0022B0F0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B0F0u | kUnwind; return; } goto L_0022B0F0; } }
L_0022B108:
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022B12C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022B12C:
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[7], c.r[18].w[0] - 7424u);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[8].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B1AC; } }
L_0022B190:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B190u | kUnwind; return; } goto L_0022B190; } }
L_0022B1AC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[19], c.r[18].w[0] - 7424u);
    set32(c.r[6], 0u + 63u);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] - 18600u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B214u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x0022B214u) [[unlikely]] return; }
L_0022B214:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B224u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x0022B224u) [[unlikely]] return; }
L_0022B224:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 78u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 74u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[14], 0u + 128u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[7], 0u + 59u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + 48u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | 4097ull;
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[2], 0u + 71u);
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[8], c.r[3].w[0] + 64u);
    st32((c.r[5].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[10], 0u + 42u);
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[11], 0u + 66u);
    st32((c.r[5].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[7], c.r[3].w[0] + 80u);
    st32((c.r[18].w[0] - 7424u), c.r[6].w[0]);
    set32(c.r[12], 0u + 24u);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 96u);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01400000u);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[13], 0u + 64u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], c.r[3].w[0] + 112u);
    st32((c.r[18].w[0] - 7424u), c.r[8].w[0]);
    set32(c.r[6], 0u + 20u);
    st32((c.r[3].w[0] + 64u), c.r[10].w[0]);
    set32(c.r[2], c.r[3].w[0] + 128u);
    st32((c.r[8].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[10], 0u + 2u);
    st32((c.r[8].w[0] + 8u), c.r[11].w[0]);
    st32((c.r[8].w[0] + 12u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[7].w[0] + 8u), c.r[12].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[13].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 83;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_0022B398; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022B384u);  goto L_0022B388; }
L_0022B388:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022B398:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B3D8; } }
    c.budget -= 1;
L_0022B3C0:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B3C0u | kUnwind; return; } goto L_0022B3C0; } }
L_0022B3D8:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[18].w[0] - 7424u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[8], c.r[3].w[0] - 13680u);
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[7], ld32((c.r[2].w[0] - 9840u)));
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B440; } }
L_0022B428:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B428u | kUnwind; return; } goto L_0022B428; } }
L_0022B440:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022B464; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022B464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + 12u);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[18].w[0] - 7424u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B4E0; } }
    c.budget -= 1;
L_0022B4C8:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B4C8u | kUnwind; return; } goto L_0022B4C8; } }
L_0022B4E0:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022B504; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022B504:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x14000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 20408u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld64((c.r[2].w[0] + 20408u));
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[8].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 16;
L_0022B5A0:
    c.r[2].d[0] = c.r[6].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022B6B4; } }
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[13], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[13].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[25].d[0] = c.r[2].d[0] << 16;
    c.r[24].d[0] = c.r[5].d[0] << 16;
    c.r[15].d[0] = c.r[4].d[0] << 16;
    c.r[14].d[0] = c.r[3].d[0] << 16;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 256u);
    set32(c.r[11], 0u + 392u);
    set32(c.r[10], 0u + 136u);
    c.budget -= 15;
L_0022B5E8:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[5].d[0] = c.r[10].d[0] | c.r[25].d[0];
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[9].w[0] << 4);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[24].d[0];
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[4].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[11].d[0] | c.r[15].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[12].d[0] | c.r[14].d[0];
    set32(c.r[2], c.r[4].w[0] + 20u);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[4].w[0] + 24u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + 28u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[12], c.r[12].w[0] + 256u);
    set32(c.r[11], c.r[11].w[0] + 512u);
    set32(c.r[10], c.r[10].w[0] + 512u);
    c.r[2].d[0] = c.r[9].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 49;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B5E8u | kUnwind; return; } goto L_0022B5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B7B4; } }
L_0022B6B4:
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[13], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[13].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[25].d[0] = c.r[2].d[0] << 16;
    c.r[24].d[0] = c.r[5].d[0] << 16;
    c.r[15].d[0] = c.r[4].d[0] << 16;
    c.r[14].d[0] = c.r[3].d[0] << 16;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 128u);
    set32(c.r[11], 0u + 200u);
    set32(c.r[10], 0u + 72u);
    c.budget -= 15;
L_0022B6F0:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[5].d[0] = c.r[10].d[0] | c.r[25].d[0];
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[9].w[0] << 4);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[24].d[0];
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[4].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[11].d[0] | c.r[15].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[12].d[0] | c.r[14].d[0];
    set32(c.r[2], c.r[4].w[0] + 20u);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[4].w[0] + 24u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[8].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + 28u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 8u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[12], c.r[12].w[0] + 128u);
    set32(c.r[11], c.r[11].w[0] + 256u);
    set32(c.r[10], c.r[10].w[0] + 256u);
    c.r[2].d[0] = c.r[9].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 49;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B6F0u | kUnwind; return; } goto L_0022B6F0; } }
L_0022B7B4:
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B5A0u | kUnwind; return; } goto L_0022B5A0; } }
    set32(c.r[9], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[7].d[0] = ld64((c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022B824; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022B810u);  goto L_0022B814; }
L_0022B814:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022B824:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[9].w[0]), c.r[2].d[0]);
    st32((c.r[8].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B860; } }
L_0022B848:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B848u | kUnwind; return; } goto L_0022B848; } }
L_0022B860:
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B870:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[2].w[0] + 20392u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    set32(c.r[8], c.r[8].w[0] - 13680u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 6));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = ld64((c.r[2].w[0] + 20392u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[7].d[0]);
    c.r[24].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[7], 0u - 16u);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[22], c.r[8].w[0] << 5);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[7].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 24u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 40;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B92C; } }
L_0022B910:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B910u | kUnwind; return; } goto L_0022B910; } }
L_0022B92C:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1028ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[9].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] << 16);
    st32((c.r[24].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xA9300000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.f[0] = c.r[4].w[0];
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[2].w[0] + 12u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[5], c.r[22].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[8], c.f[0]);
    set32(c.r[9], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 24u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], c.r[2].w[0] + 28u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[7], c.r[2].w[0] + 44u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[10], 0u + 76u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[5], c.r[2].w[0] + 32u);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[18].d[0] = 0ull | 59392ull;
    c.r[18].d[0] = c.r[18].d[0] << 20;
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[17].d[0] = 0ull | 32768ull;
    c.r[17].d[0] = c.r[17].d[0] << 46;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], c.r[2].w[0] + 40u);
    set32(c.r[8], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + 36u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[19], 0u + 6u);
    st32((c.r[2].w[0] + 28u), c.r[8].w[0]);
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[23].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[9].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    st32((c.r[5].w[0] + 8u), 0u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[8], 0u - 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x29300000u);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    st128((c.r[5].w[0] + 12u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[22].d[0] | c.r[6].d[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[13].d[0] = c.r[13].d[0] | 32896ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[15], 0u + 342u);
    set32(c.r[2], c.r[4].w[0] + 16u);
    set32(c.r[11], c.r[4].w[0] + 32u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[12], c.r[4].w[0] + 48u);
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[7], c.r[4].w[0] + 64u);
    st32((c.r[2].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[9], c.r[4].w[0] + 80u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[10].d[0] = c.r[10].d[0] | 3955ull;
    st32((c.r[29].w[0] + 16u), c.r[11].w[0]);
    set32(c.r[5], c.r[4].w[0] + 96u);
    set32(c.r[20], 0u + 2u);
    set32(c.r[3], ld32((c.r[30].w[0] - 18936u)));
    c.r[8].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + 255u);
    if (c.r[8].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[8], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 11);
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[11].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[11].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[13].w[0]);
    st32((c.r[12].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[12].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[12].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[15].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 12u), 0u);
    st32((c.r[9].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 160;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0022BBD4; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022BBC0u);  goto L_0022BBC4; }
L_0022BBC4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022BBD4:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BC10; } }
L_0022BBF8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022BBF8u | kUnwind; return; } goto L_0022BBF8; } }
L_0022BC10:
    c.r[4].d[0] = c.r[24].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BC20u);  if (depth < kMaxDepth) unit_004A(c, 222u, depth + 1u); else { c.pc = 0x0022B560u; return; } if (c.pc != 0x0022BC20u) [[unlikely]] return; }
L_0022BC20:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[9], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x29300000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022BC50u);  goto L_0022BC54; }
L_0022BC54:
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = 0ull | 49152ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = c.r[23].d[0] | c.r[2].d[0];
    c.r[12].d[0] = 0ull | 59392ull;
    c.r[12].d[0] = c.r[12].d[0] << 20;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].d[0] = c.r[22].d[0] | c.r[7].d[0];
    set32(c.r[10], c.r[4].w[0] - 13680u);
    c.r[11].d[0] = 0ull | 32768ull;
    c.r[11].d[0] = c.r[11].d[0] << 46;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[6].w[0]);
    st64((c.r[10].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[30].w[0] - 18936u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 16u)));
    c.r[9].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + 255u);
    if (c.r[9].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] >> 8);
    st32((c.r[29].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[16], c.r[16].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 11);
    set32(c.r[16], c.r[16].w[0] >> 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st64((c.r[10].w[0] + 96u), c.r[2].d[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BCF8u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022BCF8u) [[unlikely]] return; }
L_0022BCF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BD30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[5].w[0] << 16);
    set32(c.r[17], c.r[4].w[0] << 16);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD64u);  if (depth < kMaxDepth) unit_0041(c, 266u, depth + 1u); else { c.pc = 0x00206258u; return; } if (c.pc != 0x0022BD64u) [[unlikely]] return; }
L_0022BD64:
    set32(c.r[3], c.r[16].w[0] + 63u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 126u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022BDA8; } }
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[3], c.r[18].w[0] + 126u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BDBC; } }
L_0022BDA8:
    set32(c.r[2], c.r[18].w[0] + 31u);
    set32(c.r[3], c.r[18].w[0] + 62u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 5;
L_0022BDBC:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0022BDEC; } }
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 17);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BDF4; } }
L_0022BDEC:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 2;
L_0022BDF4:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BE18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE34u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022BE34u) [[unlikely]] return; }
L_0022BE34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BE70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.budget -= 3;
L_0022BE58:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022BE58u | kUnwind; return; } goto L_0022BE58; } }
L_0022BE70:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[4].d[0] = c.r[16].d[0] & c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0022BEBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BED0; } }
L_0022BEBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
L_0022BED0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 257u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BEF8:
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BF18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15208u)));
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022BF54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 19776u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BFA0; } }
L_0022BF54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022BF84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 19776u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BFA0; } }
L_0022BF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 19776u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 7;
L_0022BFA0:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 13));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BFACu);  if (depth < kMaxDepth) unit_004A(c, 227u, depth + 1u); else { c.pc = 0x0022B870u; return; } if (c.pc != 0x0022BFACu) [[unlikely]] return; }
L_0022BFAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[3].w[0] - 9840u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BFC8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st32((c.r[29].w[0] + 144u), c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[22] = c.r[1].w[0];
    st32((c.r[29].w[0] + 152u), c.f[23]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.f[12] = fp::mul(c.f[12], c.f[22]);
    c.f[21] = c.f[14];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.f[23] = c.f[13];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[13] = c.f[21];
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.budget -= 14;
    [[clang::musttail]] return unit_004B(c, 1u, depth);
}

}
