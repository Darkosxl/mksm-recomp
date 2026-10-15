#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009A[4096] = {
    1, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21,
    0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0,
    149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316,
};

void unit_009A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00368000;
    case 2u: goto L_00368004;
    case 3u: goto L_00368010;
    case 4u: goto L_0036801C;
    case 5u: goto L_00368028;
    case 6u: goto L_00368038;
    case 7u: goto L_00368048;
    case 8u: goto L_00368064;
    case 9u: goto L_00368074;
    case 10u: goto L_00368084;
    case 11u: goto L_00368094;
    case 12u: goto L_0036809C;
    case 13u: goto L_003680A4;
    case 14u: goto L_003680AC;
    case 15u: goto L_003680BC;
    case 16u: goto L_003680C4;
    case 17u: goto L_003680CC;
    case 18u: goto L_003680DC;
    case 19u: goto L_003680E4;
    case 20u: goto L_003680EC;
    case 21u: goto L_003680FC;
    case 22u: goto L_00368104;
    case 23u: goto L_00368114;
    case 24u: goto L_0036811C;
    case 25u: goto L_0036812C;
    case 26u: goto L_00368134;
    case 27u: goto L_00368144;
    case 28u: goto L_0036814C;
    case 29u: goto L_00368154;
    case 30u: goto L_00368188;
    case 31u: goto L_003681EC;
    case 32u: goto L_00368200;
    case 33u: goto L_00368214;
    case 34u: goto L_00368224;
    case 35u: goto L_00368234;
    case 36u: goto L_0036824C;
    case 37u: goto L_00368260;
    case 38u: goto L_00368284;
    case 39u: goto L_003682A8;
    case 40u: goto L_00368360;
    case 41u: goto L_00368388;
    case 42u: goto L_003683D0;
    case 43u: goto L_00368560;
    case 44u: goto L_00368664;
    case 45u: goto L_00368678;
    case 46u: goto L_003686A0;
    case 47u: goto L_00368750;
    case 48u: goto L_00368790;
    case 49u: goto L_00368A40;
    case 50u: goto L_00368A70;
    case 51u: goto L_00368A90;
    case 52u: goto L_00368AC0;
    case 53u: goto L_00368AF4;
    case 54u: goto L_00368B14;
    case 55u: goto L_00368B40;
    case 56u: goto L_00368B74;
    case 57u: goto L_00368B94;
    case 58u: goto L_00368BC0;
    case 59u: goto L_00368BF4;
    case 60u: goto L_00368C14;
    case 61u: goto L_00368C40;
    case 62u: goto L_00368C80;
    case 63u: goto L_00368CA4;
    case 64u: goto L_00368CD0;
    case 65u: goto L_00368D8C;
    case 66u: goto L_00368E10;
    case 67u: goto L_00368E50;
    case 68u: goto L_00368E7C;
    case 69u: goto L_00368F0C;
    case 70u: goto L_00368FB8;
    case 71u: goto L_0036903C;
    case 72u: goto L_003690B0;
    case 73u: goto L_00369138;
    case 74u: goto L_00369154;
    case 75u: goto L_0036916C;
    case 76u: goto L_00369188;
    case 77u: goto L_00369190;
    case 78u: goto L_003691A0;
    case 79u: goto L_003691B4;
    case 80u: goto L_003691C8;
    case 81u: goto L_003691DC;
    case 82u: goto L_00369320;
    case 83u: goto L_00369360;
    case 84u: goto L_00369378;
    case 85u: goto L_00369390;
    case 86u: goto L_003693C4;
    case 87u: goto L_003693E8;
    case 88u: goto L_003694F0;
    case 89u: goto L_00369620;
    case 90u: goto L_00369640;
    case 91u: goto L_00369658;
    case 92u: goto L_00369670;
    case 93u: goto L_003696D8;
    case 94u: goto L_00369720;
    case 95u: goto L_00369730;
    case 96u: goto L_00369748;
    case 97u: goto L_003697E8;
    case 98u: goto L_00369828;
    case 99u: goto L_0036983C;
    case 100u: goto L_00369858;
    case 101u: goto L_00369938;
    case 102u: goto L_00369968;
    case 103u: goto L_0036999C;
    case 104u: goto L_003699C8;
    case 105u: goto L_00369A98;
    case 106u: goto L_00369B30;
    case 107u: goto L_00369B94;
    case 108u: goto L_00369BAC;
    case 109u: goto L_00369BC0;
    case 110u: goto L_00369BD4;
    case 111u: goto L_00369BE8;
    case 112u: goto L_00369BF8;
    case 113u: goto L_00369C0C;
    case 114u: goto L_00369C30;
    case 115u: goto L_00369C50;
    case 116u: goto L_00369CA0;
    case 117u: goto L_00369CC0;
    case 118u: goto L_00369D00;
    case 119u: goto L_00369D38;
    case 120u: goto L_00369D60;
    case 121u: goto L_00369D80;
    case 122u: goto L_00369D8C;
    case 123u: goto L_00369DA0;
    case 124u: goto L_00369DD0;
    case 125u: goto L_00369E20;
    case 126u: goto L_00369E70;
    case 127u: goto L_00369E88;
    case 128u: goto L_00369EF4;
    case 129u: goto L_00369F34;
    case 130u: goto L_00369F70;
    case 131u: goto L_00369F90;
    case 132u: goto L_00369FBC;
    case 133u: goto L_00369FCC;
    case 134u: goto L_00369FE0;
    case 135u: goto L_0036A008;
    case 136u: goto L_0036A0B0;
    case 137u: goto L_0036A0C0;
    case 138u: goto L_0036A0E8;
    case 139u: goto L_0036A110;
    case 140u: goto L_0036A164;
    case 141u: goto L_0036A178;
    case 142u: goto L_0036A1B4;
    case 143u: goto L_0036A1C8;
    case 144u: goto L_0036A1F0;
    case 145u: goto L_0036A22C;
    case 146u: goto L_0036A260;
    case 147u: goto L_0036A268;
    case 148u: goto L_0036A278;
    case 149u: goto L_0036A280;
    case 150u: goto L_0036A288;
    case 151u: goto L_0036A2C0;
    case 152u: goto L_0036A344;
    case 153u: goto L_0036A384;
    case 154u: goto L_0036A3C0;
    case 155u: goto L_0036A3E0;
    case 156u: goto L_0036A3F8;
    case 157u: goto L_0036A408;
    case 158u: goto L_0036A440;
    case 159u: goto L_0036A474;
    case 160u: goto L_0036A490;
    case 161u: goto L_0036A4A8;
    case 162u: goto L_0036A4C0;
    case 163u: goto L_0036A4F0;
    case 164u: goto L_0036A504;
    case 165u: goto L_0036A520;
    case 166u: goto L_0036A534;
    case 167u: goto L_0036A544;
    case 168u: goto L_0036A55C;
    case 169u: goto L_0036A56C;
    case 170u: goto L_0036A590;
    case 171u: goto L_0036A5B4;
    case 172u: goto L_0036A608;
    case 173u: goto L_0036A670;
    case 174u: goto L_0036A6B8;
    case 175u: goto L_0036A70C;
    case 176u: goto L_0036A748;
    case 177u: goto L_0036A7B0;
    case 178u: goto L_0036A7D8;
    case 179u: goto L_0036A874;
    case 180u: goto L_0036A8B0;
    case 181u: goto L_0036A904;
    case 182u: goto L_0036A924;
    case 183u: goto L_0036A9B8;
    case 184u: goto L_0036A9D8;
    case 185u: goto L_0036AA40;
    case 186u: goto L_0036AA80;
    case 187u: goto L_0036AAD0;
    case 188u: goto L_0036AAF8;
    case 189u: goto L_0036AB08;
    case 190u: goto L_0036AB48;
    case 191u: goto L_0036AB54;
    case 192u: goto L_0036ABE0;
    case 193u: goto L_0036AC28;
    case 194u: goto L_0036AC40;
    case 195u: goto L_0036AC4C;
    case 196u: goto L_0036AC90;
    case 197u: goto L_0036ACA8;
    case 198u: goto L_0036ACB4;
    case 199u: goto L_0036AD00;
    case 200u: goto L_0036AD48;
    case 201u: goto L_0036AD54;
    case 202u: goto L_0036AD84;
    case 203u: goto L_0036ADC0;
    case 204u: goto L_0036ADE0;
    case 205u: goto L_0036AE28;
    case 206u: goto L_0036AE9C;
    case 207u: goto L_0036AEE8;
    case 208u: goto L_0036AF28;
    case 209u: goto L_0036AF68;
    case 210u: goto L_0036AFA0;
    case 211u: goto L_0036AFE8;
    case 212u: goto L_0036AFF4;
    case 213u: goto L_0036B01C;
    case 214u: goto L_0036B06C;
    case 215u: goto L_0036B0C8;
    case 216u: goto L_0036B100;
    case 217u: goto L_0036B130;
    case 218u: goto L_0036B178;
    case 219u: goto L_0036B194;
    case 220u: goto L_0036B1AC;
    case 221u: goto L_0036B1C4;
    case 222u: goto L_0036B1E0;
    case 223u: goto L_0036B1F0;
    case 224u: goto L_0036B1F8;
    case 225u: goto L_0036B200;
    case 226u: goto L_0036B228;
    case 227u: goto L_0036B240;
    case 228u: goto L_0036B258;
    case 229u: goto L_0036B278;
    case 230u: goto L_0036B290;
    case 231u: goto L_0036B2A0;
    case 232u: goto L_0036B2B0;
    case 233u: goto L_0036B2D0;
    case 234u: goto L_0036B2E8;
    case 235u: goto L_0036B2F8;
    case 236u: goto L_0036B310;
    case 237u: goto L_0036B320;
    case 238u: goto L_0036B348;
    case 239u: goto L_0036B370;
    case 240u: goto L_0036B380;
    case 241u: goto L_0036B398;
    case 242u: goto L_0036B3A8;
    case 243u: goto L_0036B3E0;
    case 244u: goto L_0036B3F0;
    case 245u: goto L_0036B434;
    case 246u: goto L_0036B440;
    case 247u: goto L_0036B498;
    case 248u: goto L_0036B4F0;
    case 249u: goto L_0036B510;
    case 250u: goto L_0036B56C;
    case 251u: goto L_0036B588;
    case 252u: goto L_0036B5A0;
    case 253u: goto L_0036B5CC;
    case 254u: goto L_0036B5D8;
    case 255u: goto L_0036B5F8;
    case 256u: goto L_0036B648;
    case 257u: goto L_0036B688;
    case 258u: goto L_0036B6D0;
    case 259u: goto L_0036B704;
    case 260u: goto L_0036B724;
    case 261u: goto L_0036B798;
    case 262u: goto L_0036B7D8;
    case 263u: goto L_0036B7F0;
    case 264u: goto L_0036B7FC;
    case 265u: goto L_0036B838;
    case 266u: goto L_0036B87C;
    case 267u: goto L_0036B8A8;
    case 268u: goto L_0036B8C0;
    case 269u: goto L_0036B8EC;
    case 270u: goto L_0036B8F8;
    case 271u: goto L_0036B918;
    case 272u: goto L_0036B950;
    case 273u: goto L_0036B95C;
    case 274u: goto L_0036B990;
    case 275u: goto L_0036B9B0;
    case 276u: goto L_0036BA10;
    case 277u: goto L_0036BA4C;
    case 278u: goto L_0036BA80;
    case 279u: goto L_0036BACC;
    case 280u: goto L_0036BB10;
    case 281u: goto L_0036BB3C;
    case 282u: goto L_0036BB58;
    case 283u: goto L_0036BB88;
    case 284u: goto L_0036BB94;
    case 285u: goto L_0036BBC0;
    case 286u: goto L_0036BC08;
    case 287u: goto L_0036BC48;
    case 288u: goto L_0036BC60;
    case 289u: goto L_0036BC98;
    case 290u: goto L_0036BCA8;
    case 291u: goto L_0036BCC0;
    case 292u: goto L_0036BCD8;
    case 293u: goto L_0036BCE8;
    case 294u: goto L_0036BD00;
    case 295u: goto L_0036BD18;
    case 296u: goto L_0036BD28;
    case 297u: goto L_0036BD38;
    case 298u: goto L_0036BD7C;
    case 299u: goto L_0036BDAC;
    case 300u: goto L_0036BDC8;
    case 301u: goto L_0036BDD8;
    case 302u: goto L_0036BDF0;
    case 303u: goto L_0036BE08;
    case 304u: goto L_0036BE18;
    case 305u: goto L_0036BE34;
    case 306u: goto L_0036BE50;
    case 307u: goto L_0036BE68;
    case 308u: goto L_0036BE78;
    case 309u: goto L_0036BEA4;
    case 310u: goto L_0036BEB0;
    case 311u: goto L_0036BEBC;
    case 312u: goto L_0036BEC8;
    case 313u: goto L_0036BFE4;
    case 314u: goto L_0036BFEC;
    case 315u: goto L_0036BFF4;
    case 316u: goto L_0036BFFC;
    default: bad_entry(c, 0x00368000u); return;
    }
L_00368000:
    c.budget -= 1;
L_00368004:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368010u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x00368010u) [[unlikely]] return; }
L_00368010:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036801Cu);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0036801Cu) [[unlikely]] return; }
L_0036801C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368028u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x00368028u) [[unlikely]] return; }
L_00368028:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368038u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032D938u; return; } if (c.pc != 0x00368038u) [[unlikely]] return; }
L_00368038:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368048u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032D938u; return; } if (c.pc != 0x00368048u) [[unlikely]] return; }
L_00368048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 28540u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368064u);  if (depth < kMaxDepth) unit_008B(c, 230u, depth + 1u); else { c.pc = 0x0032E4B8u; return; } if (c.pc != 0x00368064u) [[unlikely]] return; }
L_00368064:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368074u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x00368074u) [[unlikely]] return; }
L_00368074:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368084u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00368084u) [[unlikely]] return; }
L_00368084:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[23].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368094u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x00368094u) [[unlikely]] return; }
L_00368094:
    set32(c.r[2], 0u - 1u);
    st8((c.r[23].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0036809C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003680AC; } }
L_003680A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680ACu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x003680ACu) [[unlikely]] return; }
L_003680AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680BCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x003680BCu) [[unlikely]] return; }
L_003680BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003680CC; } }
L_003680C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680CCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x003680CCu) [[unlikely]] return; }
L_003680CC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680DCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x003680DCu) [[unlikely]] return; }
L_003680DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003680EC; } }
L_003680E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680ECu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x003680ECu) [[unlikely]] return; }
L_003680EC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680FCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x003680FCu) [[unlikely]] return; }
L_003680FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368154; } }
L_00368104:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368114u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x00368114u) [[unlikely]] return; }
L_00368114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003680A4u | kUnwind; return; } goto L_003680A4; } }
L_0036811C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036812Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036812Cu) [[unlikely]] return; }
L_0036812C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003680C4u | kUnwind; return; } goto L_003680C4; } }
L_00368134:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368144u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x00368144u) [[unlikely]] return; }
L_00368144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003680E4u | kUnwind; return; } goto L_003680E4; } }
L_0036814C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368154u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00368154u) [[unlikely]] return; }
L_00368154:
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368188:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[6], 0u - 1u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003681B4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 1;
L_003681B4:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 448u);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7152u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[18], c.r[17].w[0] + 160u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681ECu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x003681ECu) [[unlikely]] return; }
L_003681EC:
    set32(c.r[19], c.r[17].w[0] + 80u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368200u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00368200u) [[unlikely]] return; }
L_00368200:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368214u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00368214u) [[unlikely]] return; }
L_00368214:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368224u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x00368224u) [[unlikely]] return; }
L_00368224:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368234u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00368234u) [[unlikely]] return; }
L_00368234:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036824Cu);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0036824Cu) [[unlikely]] return; }
L_0036824C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368260u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00368260u) [[unlikely]] return; }
L_00368260:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368284u);  if (depth < kMaxDepth) unit_006C(c, 338u, depth + 1u); else { c.pc = 0x002B38E0u; return; } if (c.pc != 0x00368284u) [[unlikely]] return; }
L_00368284:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003682A8:
    set32(c.r[29], c.r[29].w[0] - 560u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003682FC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00368378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[16].w[0] + 260u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368378; } }
L_003682FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036831C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368328; } }
L_0036831C:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003683B8; } }
L_00368328:
    c.f[2] = ld32((c.r[16].w[0] + 224u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    set32(c.r[10], 0u + 1u);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[2]);
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368360u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00368360u) [[unlikely]] return; }
L_00368360:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    st32((c.r[16].w[0] + 260u), c.f[1]);
    st32((c.r[16].w[0] + 264u), c.f[2]);
    c.budget -= 6;
L_00368378:
    set32(c.r[3], c.r[16].w[0] + 256u);
    set32(c.r[2], c.r[16].w[0] + 272u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
L_00368388:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368388u | kUnwind; return; } goto L_00368388; } }
L_003683B8:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003683D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00368420; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368460; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368410; } }
    st32((c.r[6].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368460; } }
L_00368410:
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368460; } }
L_00368420:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368460; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368450; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00368460; } }
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368460; } }
L_00368450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_00368460:
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[2] = 0u;
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[6].w[0] + 36u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[6].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00368494; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_00368494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003684B4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_003684B4:
    st32((c.r[6].w[0] + 240u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003684D4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003684D8; } }
L_003684D4:
    st32((c.r[6].w[0] + 20u), 0u);
    c.budget -= 1;
L_003684D8:
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[6].w[0] + 292u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[6].w[0] + 296u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368508; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 28536u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368510; } }
L_00368508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 28536u), 0u);
    c.budget -= 2;
L_00368510:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036852C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368530; } }
L_0036852C:
    st32((c.r[6].w[0] + 288u), 0u);
    c.budget -= 1;
L_00368530:
    set32(c.r[13], c.r[6].w[0] + 988u);
    set32(c.r[12], c.r[5].w[0] + 168u);
    set32(c.r[11], c.r[6].w[0] + 984u);
    set32(c.r[10], c.r[5].w[0] + 132u);
    set32(c.r[9], c.r[6].w[0] + 972u);
    set32(c.r[8], c.r[5].w[0] + 96u);
    set32(c.r[7], c.r[6].w[0] + 992u);
    set32(c.r[4], c.r[5].w[0] + 204u);
    set32(c.r[3], c.r[6].w[0] + 960u);
    set32(c.r[2], c.r[5].w[0] + 60u);
    set32(c.r[14], 0u + 8u);
    c.budget -= 12;
L_00368560:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[7].w[0]), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 40u);
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[9].w[0]), c.f[0]);
    set32(c.r[9], c.r[9].w[0] + 40u);
    c.f[0] = ld32((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    st32((c.r[11].w[0]), c.f[0]);
    set32(c.r[11], c.r[11].w[0] + 40u);
    c.f[0] = ld32((c.r[12].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    st32((c.r[13].w[0]), c.f[0]);
    set32(c.r[13], c.r[13].w[0] + 40u);
    c.budget -= 23;
    { const bool t = c.r[14].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368560u | kUnwind; return; } goto L_00368560; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003685D8; } }
    st32((c.r[6].w[0] + 244u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368664; } }
L_003685D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00368628; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st32((c.r[6].w[0] + 244u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 204u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 200u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    st32((c.r[6].w[0] + 232u), 0u);
    st32((c.r[6].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 224u), 0u);
    st32((c.r[6].w[0] + 228u), 0u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368664; } }
L_00368628:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00368664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368664u);  if (depth < kMaxDepth) unit_009A(c, 137u, depth + 1u); else { c.pc = 0x0036A0C0u; return; } if (c.pc != 0x00368664u) [[unlikely]] return; }
L_00368664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368678:
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + 168u);
    set32(c.r[2], c.r[6].w[0] + 988u);
    c.f[0] = ld32((c.r[6].w[0] + 292u));
    set32(c.r[4], 0u + 8u);
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 296u));
    st32((c.r[5].w[0] + 56u), c.f[1]);
    c.budget -= 10;
L_003686A0:
    c.f[1] = ld32((c.r[2].w[0] - 28u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] - 108u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 16u));
    st32((c.r[3].w[0] - 72u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] - 4u));
    st32((c.r[3].w[0] - 36u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 15;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003686A0u | kUnwind; return; } goto L_003686A0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 288u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[5].w[0] + 28u), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 240u));
    st32((c.r[5].w[0] + 48u), c.f[1]);
    set32(c.r[3], ld32((c.r[6].w[0] + 244u)));
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 204u)));
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00368748; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00368748; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_00368748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_003687FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[12], 0u - 1u);
    set32(c.r[13], c.r[2].w[0] - 14152u);
    set32(c.r[9], c.r[16].w[0] + 100u);
    set32(c.r[11], 0u + 268u);
    set32(c.r[8], c.r[16].w[0] + 64u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
L_00368790:
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[12].d[0];  if (t) { goto L_003687DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[9].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[11].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[13].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[10].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003687EC; } }
L_003687DC:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_003687EC:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368790u | kUnwind; return; } goto L_00368790; } }
L_003687FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368814; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_00368814:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036882C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0036882C:
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368840; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_00368840:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036885C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368868; } }
L_0036885C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 3;
L_00368868:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036887C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_0036887C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368898; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003688B4; } }
L_00368898:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_003688B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003688C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_003688C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003688E4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368900; } }
L_003688E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_00368900:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368914; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_00368914:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368930; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036894C; } }
L_00368930:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_0036894C:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368960; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_00368960:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036897C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368998; } }
L_0036897C:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_00368998:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003689AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_003689AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003689C8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003689E4; } }
L_003689C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_003689E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003689F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_003689F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368A14; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368A30; } }
L_00368A14:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_00368A30:
    set32(c.r[17], c.r[16].w[0] + 184u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[16].w[0] + 196u);
    c.budget -= 4;
L_00368A40:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368A40u | kUnwind; return; } goto L_00368A40; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A70u);  if (depth < kMaxDepth) unit_009A(c, 120u, depth + 1u); else { c.pc = 0x00369D60u; return; } if (c.pc != 0x00368A70u) [[unlikely]] return; }
L_00368A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368AE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368A9C; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368AA0; } }
L_00368A90:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368AE4; } }
L_00368A9C:
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_00368AA0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00368AE4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_00368AC0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368A90u | kUnwind; return; } goto L_00368A90; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368AC0u | kUnwind; return; } goto L_00368AC0; } }
L_00368AE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AF4u);  if (depth < kMaxDepth) unit_009A(c, 120u, depth + 1u); else { c.pc = 0x00369D60u; return; } if (c.pc != 0x00368AF4u) [[unlikely]] return; }
L_00368AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B20; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368B24; } }
L_00368B14:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368B64; } }
L_00368B20:
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_00368B24:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00368B64; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00368B40:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368B14u | kUnwind; return; } goto L_00368B14; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368B40u | kUnwind; return; } goto L_00368B40; } }
L_00368B64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B74u);  if (depth < kMaxDepth) unit_009A(c, 120u, depth + 1u); else { c.pc = 0x00369D60u; return; } if (c.pc != 0x00368B74u) [[unlikely]] return; }
L_00368B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368BE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368BA0; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368BA4; } }
L_00368B94:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368BE4; } }
L_00368BA0:
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_00368BA4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00368BE4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00368BC0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368B94u | kUnwind; return; } goto L_00368B94; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368BC0u | kUnwind; return; } goto L_00368BC0; } }
L_00368BE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BF4u);  if (depth < kMaxDepth) unit_009A(c, 120u, depth + 1u); else { c.pc = 0x00369D60u; return; } if (c.pc != 0x00368BF4u) [[unlikely]] return; }
L_00368BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368C64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368C20; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368C24; } }
L_00368C14:
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368C64; } }
L_00368C20:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_00368C24:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00368C64; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_00368C40:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368C14u | kUnwind; return; } goto L_00368C14; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368C40u | kUnwind; return; } goto L_00368C40; } }
L_00368C64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CA4u);  if (depth < kMaxDepth) unit_0087(c, 190u, depth + 1u); else { c.pc = 0x0031EF08u; return; } if (c.pc != 0x00368CA4u) [[unlikely]] return; }
L_00368CA4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00368CD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368CDC; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CD0u);  if (depth < kMaxDepth) unit_009A(c, 134u, depth + 1u); else { c.pc = 0x00369FE0u; return; } if (c.pc != 0x00368CD0u) [[unlikely]] return; }
L_00368CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368CDC; } }
L_00368CD8:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_00368CDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368CF8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_00368CF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368D20; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00368D3C; } }
L_00368D20:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00368DDC; } }
L_00368D3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00368DD0; } }
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00368DD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00368D7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368D8C; } }
L_00368D7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D8Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00368D8Cu) [[unlikely]] return; }
L_00368D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368DA0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368DA8; } }
L_00368DA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 37u)));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00368DA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00368DD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368E38; } }
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368E38; } }
L_00368DD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368E3C; } }
L_00368DDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00368E34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00368E00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368E10; } }
L_00368E00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E10u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00368E10u) [[unlikely]] return; }
L_00368E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368E24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368E2C; } }
L_00368E24:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 37u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00368E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368E38; } }
L_00368E34:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00368E38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00368E3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E7Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00368E7Cu) [[unlikely]] return; }
L_00368E7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00368FFC; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00368EF0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
L_00368EF0:
    set32(c.r[2], ld32((c.r[5].w[0] + 204u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00368F0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F0Cu);  if (depth < kMaxDepth) unit_009A(c, 134u, depth + 1u); else { c.pc = 0x00369FE0u; return; } if (c.pc != 0x00368F0Cu) [[unlikely]] return; }
L_00368F0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368F24; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_00368F24:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368F4C; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00368F68; } }
L_00368F4C:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369008; } }
L_00368F68:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00368FFC; } }
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00368FFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00368FA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368FB8; } }
L_00368FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368FB8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00368FB8u) [[unlikely]] return; }
L_00368FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368FCC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368FD4; } }
L_00368FCC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 37u)));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00368FD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00368FFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369090; } }
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369090; } }
L_00368FFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369094; } }
L_00369008:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00369060; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0036902C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036903C; } }
L_0036902C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036903Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0036903Cu) [[unlikely]] return; }
L_0036903C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369050; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369058; } }
L_00369050:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 37u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00369058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369090; } }
L_00369060:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036908C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    set32(c.r[2], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00369088; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036908C; } }
L_00369088:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0036908C:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00369090:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00369094:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003690B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FAC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] + 960u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[17].w[0] + 320u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[17].w[0] + 672u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[21], c.r[17].w[0] + 816u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[22]);
    set32(c.r[19], c.r[17].w[0] + 528u);
    st32((c.r[29].w[0] + 152u), c.f[21]);
    set32(c.r[18], c.r[17].w[0] + 384u);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[23], 0u + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 292u), c.f[0]);
    st32((c.r[17].w[0] + 296u), c.f[1]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369138u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00369138u) [[unlikely]] return; }
L_00369138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[22] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369154u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00369154u) [[unlikely]] return; }
L_00369154:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036916Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036916Cu) [[unlikely]] return; }
L_0036916C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[21] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369188u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00369188u) [[unlikely]] return; }
L_00369188:
    set32(c.r[16], c.r[17].w[0] + 960u);
    c.budget -= 2;
L_00369190:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003691A0u) [[unlikely]] return; }
L_003691A0:
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003691B4u) [[unlikely]] return; }
L_003691B4:
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691C8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003691C8u) [[unlikely]] return; }
L_003691C8:
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691DCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003691DCu) [[unlikely]] return; }
L_003691DC:
    set32(c.r[21], c.r[21].w[0] + 16u);
    st32((c.r[16].w[0]), c.f[22]);
    set32(c.r[23], c.r[23].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.f[20]);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    st32((c.r[16].w[0] + 12u), c.f[21]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[16], c.r[16].w[0] + 40u);
    c.budget -= 15;
    { const bool t = c.r[23].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369190u | kUnwind; return; } goto L_00369190; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 960u);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[4].w[0] + 12u), c.f[0]);
    set32(c.r[2], c.r[17].w[0] + 1040u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[17].w[0] + 1080u);
    c.f[0] = ld32((c.r[17].w[0] + 292u));
    set32(c.r[5], c.r[17].w[0] + 1120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[5] = c.r[1].w[0];
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[6] = c.r[1].w[0];
    st32((c.r[2].w[0] + 28u), c.f[2]);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    st32((c.r[2].w[0] + 12u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.f[5]);
    st32((c.r[3].w[0] + 28u), c.f[5]);
    st32((c.r[3].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    st32((c.r[3].w[0] + 32u), c.f[6]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[5].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[4]);
    st32((c.r[5].w[0] + 28u), c.f[0]);
    st32((c.r[5].w[0] + 32u), c.f[6]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 65;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00369378; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00369378; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 8160u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369360u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00369360u) [[unlikely]] return; }
L_00369360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8136u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369378u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00369378u) [[unlikely]] return; }
L_00369378:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693C4u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x003693C4u) [[unlikely]] return; }
L_003693C4:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003693E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036941C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 5;
L_0036941C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369450; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 5;
L_00369450:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369474; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 5;
L_00369474:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369498; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 5;
L_00369498:
    c.f[12] = fp::sub(c.f[12], c.f[13]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003694C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 5;
L_003694C0:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003694E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 5;
L_003694E4:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003694F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369524; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 5;
L_00369524:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369558; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 5;
L_00369558:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036957C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 5;
L_0036957C:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003695A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 5;
L_003695A0:
    c.f[12] = fp::sub(c.f[12], c.f[13]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003695C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 5;
L_003695C8:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003695EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 5;
L_003695EC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00369620; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369658u);  if (depth < kMaxDepth) unit_0099(c, 243u, depth + 1u); else { c.pc = 0x00366D30u; return; } if (c.pc != 0x00369658u) [[unlikely]] return; }
L_00369658:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369670:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00369690; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369698; } }
L_00369690:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 2;
L_00369698:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003696B4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003696D0; } }
L_003696B4:
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
L_003696D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003696D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00369720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369720u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00369720u) [[unlikely]] return; }
L_00369720:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369730u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x00369730u) [[unlikely]] return; }
L_00369730:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[13] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369748u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x00369748u) [[unlikely]] return; }
L_00369748:
    c.f[3] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[2]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369790; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_00369790:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003697CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_003697CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003697E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369828u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00369828u) [[unlikely]] return; }
L_00369828:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036983Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0036983Cu) [[unlikely]] return; }
L_0036983C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369858:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003698A8; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003698D4; } }
    st32((c.r[16].w[0] + 32u), c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003698D4; } }
L_003698A8:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003698D4; } }
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_003698D4:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00369950; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369918; } }
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369950; } }
L_00369918:
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369938u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00369938u) [[unlikely]] return; }
L_00369938:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 6;
L_00369950:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0036998C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036999C; } }
L_0036998C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036999Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0036999Cu) [[unlikely]] return; }
L_0036999C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003699B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 37u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003699B8; } }
L_003699B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003699B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003699C8:
    c.f[12] = fp::sub(c.f[12], c.f[13]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = 0u;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369A30; } }
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369A18; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[12] = c.f[2];
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.budget -= 5;
L_00369A18:
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369A68; } }
L_00369A30:
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369A58; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[12] = c.f[2];
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.budget -= 5;
L_00369A58:
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
L_00369A68:
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369A78; } }
    st32((c.r[5].w[0] + 16u), c.f[12]);
    c.budget -= 1;
L_00369A78:
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    c.f[0] = c.f[1];
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369A98:
    c.f[2] = ld32((c.r[5].w[0] + 28u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369AC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369B20; } }
L_00369AC4:
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00369B08; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369AF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369B20; } }
L_00369AF8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369B1C; } }
L_00369B08:
    c.f[0] = fp::add(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369B20; } }
L_00369B1C:
    c.f[12] = 0u;
    c.budget -= 1;
L_00369B20:
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369B30:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[3], 0u + 448u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 336u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00369C0C; } }
    c.f[12] = ld32((c.r[16].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B94u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x00369B94u) [[unlikely]] return; }
L_00369B94:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BACu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x00369BACu) [[unlikely]] return; }
L_00369BAC:
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BC0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00369BC0u) [[unlikely]] return; }
L_00369BC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BD4u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00369BD4u) [[unlikely]] return; }
L_00369BD4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BE8u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00369BE8u) [[unlikely]] return; }
L_00369BE8:
    set32(c.r[5], c.r[18].w[0] + 176u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BF8u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00369BF8u) [[unlikely]] return; }
L_00369BF8:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C0Cu);  if (depth < kMaxDepth) unit_0049(c, 88u, depth + 1u); else { c.pc = 0x002254D0u; return; } if (c.pc != 0x00369C0Cu) [[unlikely]] return; }
L_00369C0C:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C50u);  if (depth < kMaxDepth) unit_009A(c, 120u, depth + 1u); else { c.pc = 0x00369D60u; return; } if (c.pc != 0x00369C50u) [[unlikely]] return; }
L_00369C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369C64; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369CE8; } }
L_00369C64:
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00369C84; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369C8C; } }
L_00369C84:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 2;
L_00369C8C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00369CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369CE4; } }
L_00369CA0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369CE8; } }
L_00369CB0:
    set32(c.r[4], c.r[16].w[0] + 184u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00369CC0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369CA0u | kUnwind; return; } goto L_00369CA0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369CC0u | kUnwind; return; } goto L_00369CC0; } }
L_00369CE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00369CE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369D00:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00369D20; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369D28; } }
L_00369D20:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 2;
L_00369D28:
    set32(c.r[4], c.r[4].w[0] + 184u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00369D38:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00369D4C; } }
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_00369D4C:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369D38u | kUnwind; return; } goto L_00369D38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369D60:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00369D8C; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369D94; } }
L_00369D80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369D8C:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 2;
L_00369D94:
    set32(c.r[4], c.r[4].w[0] + 184u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00369DA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369D80u | kUnwind; return; } goto L_00369D80; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369DA0u | kUnwind; return; } goto L_00369DA0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369DD0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 204u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.f[2] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    st32((c.r[4].w[0] + 224u), c.f[1]);
    st32((c.r[4].w[0] + 232u), c.f[0]);
    st32((c.r[4].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 228u), c.f[2]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369E20:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[8], 0u + 268u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[7].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369E70:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369E88:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 608u), c.f[20]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00369F50; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EF4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00369EF4u) [[unlikely]] return; }
L_00369EF4:
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[20] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 544u), c.f[2]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F34u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00369F34u) [[unlikely]] return; }
L_00369F34:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369F58; } }
L_00369F50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_00369F58:
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F70u);  if (depth < kMaxDepth) unit_009A(c, 137u, depth + 1u); else { c.pc = 0x0036A0C0u; return; } if (c.pc != 0x00369F70u) [[unlikely]] return; }
L_00369F70:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.f[20] = ld32((c.r[29].w[0] + 608u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369FC4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00369FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FBCu);  if (depth < kMaxDepth) unit_009A(c, 62u, depth + 1u); else { c.pc = 0x00368C80u; return; } if (c.pc != 0x00369FBCu) [[unlikely]] return; }
L_00369FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369FCC; } }
L_00369FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FCCu);  if (depth < kMaxDepth) unit_009A(c, 67u, depth + 1u); else { c.pc = 0x00368E50u; return; } if (c.pc != 0x00369FCCu) [[unlikely]] return; }
L_00369FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A008u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x0036A008u) [[unlikely]] return; }
L_0036A008:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0036A094; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0036A094; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[5], 0u + 84u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A094; } }
    set32(c.r[2], 0u + 120u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], 0u + 13248u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 244u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    c.budget -= 22;
L_0036A094:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A0B0:
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A0C0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 260u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 264u), c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A0E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A110u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x0036A110u) [[unlikely]] return; }
L_0036A110:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A13C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], 0u + 84u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036A148; } }
L_0036A13C:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A164; } }
L_0036A148:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A164u);  if (depth < kMaxDepth) unit_009A(c, 47u, depth + 1u); else { c.pc = 0x00368750u; return; } if (c.pc != 0x0036A164u) [[unlikely]] return; }
L_0036A164:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A178:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A1B4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1B4u);  if (depth < kMaxDepth) unit_009A(c, 72u, depth + 1u); else { c.pc = 0x003690B0u; return; } if (c.pc != 0x0036A1B4u) [[unlikely]] return; }
L_0036A1B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A1C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u - 1u);
    c.budget -= 10;
L_0036A1F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0036A22C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0036A22C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A22C; } }
    st32((c.r[2].w[0] + 244u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A22Cu);  if (depth < kMaxDepth) unit_009A(c, 72u, depth + 1u); else { c.pc = 0x003690B0u; return; } if (c.pc != 0x0036A22Cu) [[unlikely]] return; }
L_0036A22C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A1F0u | kUnwind; return; } goto L_0036A1F0; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A268:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A288:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 624u), c.f[20]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8152u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2C0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0036A2C0u) [[unlikely]] return; }
L_0036A2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A3C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A3C0; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036A3C0; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A3A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A344u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0036A344u) [[unlikely]] return; }
L_0036A344:
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 544u), c.f[2]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A384u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0036A384u) [[unlikely]] return; }
L_0036A384:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A3A8; } }
L_0036A3A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0036A3A8:
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3C0u);  if (depth < kMaxDepth) unit_009A(c, 137u, depth + 1u); else { c.pc = 0x0036A0C0u; return; } if (c.pc != 0x0036A3C0u) [[unlikely]] return; }
L_0036A3C0:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.f[20] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[29], c.r[29].w[0] + 640u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3F8u);  if (depth < kMaxDepth) unit_009A(c, 82u, depth + 1u); else { c.pc = 0x00369320u; return; } if (c.pc != 0x0036A3F8u) [[unlikely]] return; }
L_0036A3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A408:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A56C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A440u);  if (depth < kMaxDepth) unit_0083(c, 33u, depth + 1u); else { c.pc = 0x0030C368u; return; } if (c.pc != 0x0036A440u) [[unlikely]] return; }
L_0036A440:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036A460; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A56C; } }
L_0036A460:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A474u);  if (depth < kMaxDepth) unit_009A(c, 278u, depth + 1u); else { c.pc = 0x0036BA80u; return; } if (c.pc != 0x0036A474u) [[unlikely]] return; }
L_0036A474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A56C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A490u);  if (depth < kMaxDepth) unit_009A(c, 170u, depth + 1u); else { c.pc = 0x0036A590u; return; } if (c.pc != 0x0036A490u) [[unlikely]] return; }
L_0036A490:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A54C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4A8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036A4A8u) [[unlikely]] return; }
L_0036A4A8:
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4C0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036A4C0u) [[unlikely]] return; }
L_0036A4C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4F0u);  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x002143A0u; return; } if (c.pc != 0x0036A4F0u) [[unlikely]] return; }
L_0036A4F0:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A504u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0036A504u) [[unlikely]] return; }
L_0036A504:
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A520u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0036A520u) [[unlikely]] return; }
L_0036A520:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A534u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0036A534u) [[unlikely]] return; }
L_0036A534:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A544u);  if (depth < kMaxDepth) unit_009A(c, 274u, depth + 1u); else { c.pc = 0x0036B990u; return; } if (c.pc != 0x0036A544u) [[unlikely]] return; }
L_0036A544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A55C; } }
L_0036A54C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A55Cu);  if (depth < kMaxDepth) unit_009A(c, 274u, depth + 1u); else { c.pc = 0x0036B990u; return; } if (c.pc != 0x0036A55Cu) [[unlikely]] return; }
L_0036A55C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A56Cu);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x0036A56Cu) [[unlikely]] return; }
L_0036A56C:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5B4u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0036A5B4u) [[unlikely]] return; }
L_0036A5B4:
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A6D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036A730; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0036A60C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A608u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0036A608u) [[unlikely]] return; }
L_0036A608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0036A60C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A638; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0036A638:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A648; } }
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_0036A648:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0036A660; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A674; } }
L_0036A660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A670u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0036A670u) [[unlikely]] return; }
L_0036A670:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0036A674:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] - 5024u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036A6AC; } }
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 3;
L_0036A6AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6B8u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0036A6B8u) [[unlikely]] return; }
L_0036A6B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A730; } }
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A730; } }
L_0036A6D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A728; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0036A71C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A70Cu);  if (depth < kMaxDepth) unit_009A(c, 247u, depth + 1u); else { c.pc = 0x0036B498u; return; } if (c.pc != 0x0036A70Cu) [[unlikely]] return; }
L_0036A70C:
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A730; } }
L_0036A71C:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A730; } }
L_0036A728:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0036A730:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A748:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_0036A88C; } }
    set32(c.r[2], 0u - 1u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036A84C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0036A7A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A7B0; } }
L_0036A7A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7B0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0036A7B0u) [[unlikely]] return; }
L_0036A7B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A7D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7D8u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x0036A7D8u) [[unlikely]] return; }
L_0036A7D8:
    set32(c.r[2], ld32((c.r[18].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A84C; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[2] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036A828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A848; } }
L_0036A828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036A84C; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0036A848:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_0036A84C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0036A860; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A878; } }
L_0036A860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A874u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0036A874u) [[unlikely]] return; }
L_0036A874:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0036A878:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[18].w[0] - 5024u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 5;
L_0036A88C:
    st32((c.r[16].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A8B0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 12u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A904u);  if (depth < kMaxDepth) unit_009A(c, 292u, depth + 1u); else { c.pc = 0x0036BCD8u; return; } if (c.pc != 0x0036A904u) [[unlikely]] return; }
L_0036A904:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036A974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A924u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x0036A924u) [[unlikely]] return; }
L_0036A924:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 144u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[17].w[0]);
    ldl(c.r[7], (c.r[29].w[0] + 7u));
    ldr(c.r[7], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[7], (c.r[3].w[0] + 7u));
    sdr(c.r[7], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 20;
L_0036A974:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036A988; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ABA8; } }
L_0036A988:
    c.f[12] = 0u;
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.f[13] = c.f[12];
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.f[14] = c.f[12];
    st32((c.r[29].w[0] + 16u), 0u);
    c.f[15] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0036A9B8u) [[unlikely]] return; }
L_0036A9B8:
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[5].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 8;
L_0036A9D8:
    ld128((c.r[16].w[0]) & ~15u, c.r[6]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A9D8u | kUnwind; return; } goto L_0036A9D8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12800u)));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 12800u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] - 128u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[23], c.r[5].w[0] + c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0036AA9C; } }
    set32(c.r[21], 0u - 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], 0u + 12u);
    c.budget -= 5;
L_0036AA40:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0036AA84; } }
    set32(c.r[7], ld32((c.r[20].w[0] + 30304u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0036AA84; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 30300u), c.r[6].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AA80u) [[unlikely]] return; }
L_0036AA80:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0036AA84:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AA40u | kUnwind; return; } goto L_0036AA40; } }
L_0036AA9C:
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0036AB9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[20] = c.r[1].w[0];
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], 0u + 200u);
    set32(c.r[19], 0u + 1u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_0036AAD0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AB84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AB00; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AAF8u);  if (depth < kMaxDepth) unit_009A(c, 251u, depth + 1u); else { c.pc = 0x0036B588u; return; } if (c.pc != 0x0036AAF8u) [[unlikely]] return; }
L_0036AAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AB0C; } }
L_0036AB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB08u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x0036AB08u) [[unlikely]] return; }
L_0036AB08:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0036AB0C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036AB84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 30304u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0036AB48; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AB48u) [[unlikely]] return; }
L_0036AB48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB54u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0036AB54u) [[unlikely]] return; }
L_0036AB54:
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x0036AB60u);  goto L_0036AB64; }
L_0036AB64:
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 176u), c.f[20]);
    st32((c.r[2].w[0] + 184u), c.f[20]);
    st32((c.r[2].w[0] + 180u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 8;
L_0036AB84:
    set32(c.r[2], ld32((c.r[17].w[0] + 12800u)));
    set32(c.r[16], c.r[16].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AAD0u | kUnwind; return; } goto L_0036AAD0; } }
L_0036AB9C:
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[3].w[0] + 28u), 0u);
    c.budget -= 3;
L_0036ABA8:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036ABE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 12880u), 0u);
    st32((c.r[18].w[0] + 13004u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0036AC68; } }
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0036AC28:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036AC50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC40u);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036AC40u) [[unlikely]] return; }
L_0036AC40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC4Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036AC4Cu) [[unlikely]] return; }
L_0036AC4C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0036AC50:
    set32(c.r[2], ld32((c.r[19].w[0] + 12800u)));
    set32(c.r[17], c.r[17].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AC28u | kUnwind; return; } goto L_0036AC28; } }
L_0036AC68:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 12u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[18].w[0] + 64u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0036ACD0; } }
    set32(c.r[19], 0u + 12u);
    c.budget -= 2;
L_0036AC90:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036ACB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACA8u);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036ACA8u) [[unlikely]] return; }
L_0036ACA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACB4u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036ACB4u) [[unlikely]] return; }
L_0036ACB4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0036ACB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AC90u | kUnwind; return; } goto L_0036AC90; } }
L_0036ACD0:
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[20].w[0] + 12800u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036AD00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 30304u)));
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD48u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0036AD48u) [[unlikely]] return; }
L_0036AD48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD54u);  if (depth < kMaxDepth) unit_0098(c, 203u, depth + 1u); else { c.pc = 0x00362798u; return; } if (c.pc != 0x0036AD54u) [[unlikely]] return; }
L_0036AD54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036AEBC; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 30304u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AD84u) [[unlikely]] return; }
L_0036AD84:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0036ADC4; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 30304u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ADC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ADC0u) [[unlikely]] return; }
L_0036ADC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0036ADC4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0036AEBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ADE0u);  if (depth < kMaxDepth) unit_009A(c, 180u, depth + 1u); else { c.pc = 0x0036A8B0u; return; } if (c.pc != 0x0036ADE0u) [[unlikely]] return; }
L_0036ADE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036AEBC; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE28u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036AE28u) [[unlikely]] return; }
L_0036AE28:
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[2].w[0] + 148u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AE6C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0036AE6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AE8C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 4;
L_0036AE8C:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE9Cu);  if (depth < kMaxDepth) unit_0098(c, 257u, depth + 1u); else { c.pc = 0x00362F98u; return; } if (c.pc != 0x0036AE9Cu) [[unlikely]] return; }
L_0036AE9C:
    c.f[0] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 100u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 8;
L_0036AEBC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036AEE8:
    set32(c.r[29], c.r[29].w[0] - 12976u);
    set32(c.r[2], 0u + 99u);
    st128((c.r[29].w[0] + 12880u) & ~15u, c.r[21]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 12864u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 12848u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 12960u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 12944u) & ~15u, c.r[17]);
    set32(c.r[23], c.r[29].w[0] + 12800u);
    st128((c.r[29].w[0] + 12928u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 12912u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 12896u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 12832u), c.r[31].d[0]);
    c.budget -= 16;
L_0036AF28:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AF28u | kUnwind; return; } goto L_0036AF28; } }
    st32((c.r[4].w[0] + 12800u), 0u);
    set32(c.r[17], c.r[21].w[0] + 64u);
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0036B060; } }
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0036AF68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[22].d[0];  if (t) { goto L_0036B000; } }
    set32(c.r[16], c.r[21].w[0] + 12884u);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 12816u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 12816u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AFA0u);  if (depth < kMaxDepth) unit_009A(c, 289u, depth + 1u); else { c.pc = 0x0036BC98u; return; } if (c.pc != 0x0036AFA0u) [[unlikely]] return; }
L_0036AFA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0036AFCC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 12816u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 5;
L_0036AFCC:
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[17].w[0] + 128u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B048; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AFE8u);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036AFE8u) [[unlikely]] return; }
L_0036AFE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AFF4u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036AFF4u) [[unlikely]] return; }
L_0036AFF4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B048; } }
L_0036B000:
    set32(c.r[2], ld32((c.r[29].w[0] + 12800u)));
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] + 128u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 7;
L_0036B01C:
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B01Cu | kUnwind; return; } goto L_0036B01C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 12800u), c.r[2].w[0]);
    c.budget -= 3;
L_0036B048:
    set32(c.r[2], ld32((c.r[19].w[0] + 12800u)));
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AF68u | kUnwind; return; } goto L_0036AF68; } }
L_0036B060:
    st32((c.r[20].w[0] + 12800u), 0u);
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_0036B06C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[5]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B06Cu | kUnwind; return; } goto L_0036B06C; } }
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    st128((c.r[3].w[0]) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 12960u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 12944u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 12928u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 12912u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 12896u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 12880u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 12864u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 12848u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 12832u));
    set32(c.r[29], c.r[29].w[0] + 12976u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B0C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0036B1C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B1C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 976u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
L_0036B100:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B100u | kUnwind; return; } goto L_0036B100; } }
    st32((c.r[2].w[0] + 48u), 0u);
    set32(c.r[5], c.r[2].w[0] + 64u);
    set32(c.r[3], 0u + 99u);
    set32(c.r[6], c.r[2].w[0] + 12884u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 6;
L_0036B130:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B130u | kUnwind; return; } goto L_0036B130; } }
    st32((c.r[5].w[0] + 12800u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[2].w[0] + 12880u), 0u);
    set32(c.r[16], c.r[16].w[0] + 13984u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[6].w[0] + 120u), 0u);
    set32(c.r[2], c.r[2].w[0] + 8264u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B178u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0036B178u) [[unlikely]] return; }
L_0036B178:
    set32(c.r[17], c.r[17].w[0] + 14000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8240u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B194u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0036B194u) [[unlikely]] return; }
L_0036B194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 8312u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1ACu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0036B1ACu) [[unlikely]] return; }
L_0036B1AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8248u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1C4u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0036B1C4u) [[unlikely]] return; }
L_0036B1C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B1E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B1F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8264u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B228u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0036B228u) [[unlikely]] return; }
L_0036B228:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B240u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0036B240u) [[unlikely]] return; }
L_0036B240:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 8360u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 30304u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B290u);  if (depth < kMaxDepth) unit_009A(c, 271u, depth + 1u); else { c.pc = 0x0036B918u; return; } if (c.pc != 0x0036B290u) [[unlikely]] return; }
L_0036B290:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B2A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13840u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 1040u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B2E8u);  if (depth < kMaxDepth) unit_009A(c, 192u, depth + 1u); else { c.pc = 0x0036ABE0u; return; } if (c.pc != 0x0036B2E8u) [[unlikely]] return; }
L_0036B2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B2F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B310u);  if (depth < kMaxDepth) unit_009A(c, 280u, depth + 1u); else { c.pc = 0x0036BB10u; return; } if (c.pc != 0x0036B310u) [[unlikely]] return; }
L_0036B310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], c.r[3].w[0] + 976u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036B364; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0036B348:
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B348u | kUnwind; return; } goto L_0036B348; } }
L_0036B364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[2].w[0] + 13856u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B398u);  if (depth < kMaxDepth) unit_009A(c, 286u, depth + 1u); else { c.pc = 0x0036BC08u; return; } if (c.pc != 0x0036B398u) [[unlikely]] return; }
L_0036B398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B3A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B480; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B3E8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3E0u);  if (depth < kMaxDepth) unit_009A(c, 251u, depth + 1u); else { c.pc = 0x0036B588u; return; } if (c.pc != 0x0036B3E0u) [[unlikely]] return; }
L_0036B3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B3F4; } }
L_0036B3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3F0u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x0036B3F0u) [[unlikely]] return; }
L_0036B3F0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0036B3F4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036B480; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 30304u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0036B434; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B434u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B434u) [[unlikely]] return; }
L_0036B434:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B440u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0036B440u) [[unlikely]] return; }
L_0036B440:
    set32(c.r[3], 0u + 200u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0036B450u);  goto L_0036B454; }
L_0036B454:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[5].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 176u), c.f[0]);
    st32((c.r[2].w[0] + 184u), c.f[0]);
    st32((c.r[2].w[0] + 180u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 11;
L_0036B480:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B498:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[9], ld32((c.r[3].w[0] + 928u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 56u), 0u);
    if (c.r[9].d[0] == 0) c.r[2].d[0] = c.r[8].d[0];
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0036B4C4u);  goto L_0036B4C8; }
L_0036B4C8:
    st32((c.r[5].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 84u), 0u);
    st32((c.r[5].w[0] + 68u), 0u);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B4F0:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036B570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 30304u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0036B570; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 30300u), c.r[6].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B56Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B56Cu) [[unlikely]] return; }
L_0036B56C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0036B570:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B588:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B5DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5CCu);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036B5CCu) [[unlikely]] return; }
L_0036B5CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5D8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036B5D8u) [[unlikely]] return; }
L_0036B5D8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0036B5DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B5F8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 12u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0036B6A4; } }
    set32(c.r[21], 0u - 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], 0u + 12u);
    c.budget -= 4;
L_0036B648:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0036B68C; } }
    set32(c.r[7], ld32((c.r[20].w[0] + 30304u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0036B68C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 30300u), c.r[6].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B688u) [[unlikely]] return; }
L_0036B688:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0036B68C:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B648u | kUnwind; return; } goto L_0036B648; } }
L_0036B6A4:
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
L_0036B6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], 0u + 12u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B704u);  if (depth < kMaxDepth) unit_009A(c, 292u, depth + 1u); else { c.pc = 0x0036BCD8u; return; } if (c.pc != 0x0036B704u) [[unlikely]] return; }
L_0036B704:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036B77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B724u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x0036B724u) [[unlikely]] return; }
L_0036B724:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[16].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B780; } }
L_0036B77C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0036B780:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B798:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 12u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0036B818; } }
    set32(c.r[19], 0u + 12u);
    c.budget -= 2;
L_0036B7D8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B800; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7F0u);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036B7F0u) [[unlikely]] return; }
L_0036B7F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7FCu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036B7FCu) [[unlikely]] return; }
L_0036B7FC:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0036B800:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B7D8u | kUnwind; return; } goto L_0036B7D8; } }
L_0036B818:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B838:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    set32(c.r[4], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0]), 0u);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.f[13] = c.f[20];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B87Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0036B87Cu) [[unlikely]] return; }
L_0036B87C:
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.f[20]);
    st32((c.r[16].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B8A8:
    c.r[2].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B8FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8ECu);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036B8ECu) [[unlikely]] return; }
L_0036B8EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8F8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036B8F8u) [[unlikely]] return; }
L_0036B8F8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0036B8FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B918:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12880u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B974; } }
    set32(c.r[16], c.r[4].w[0] + 64u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0036B974; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0036B950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B95Cu);  if (depth < kMaxDepth) unit_009A(c, 157u, depth + 1u); else { c.pc = 0x0036A408u; return; } if (c.pc != 0x0036B95Cu) [[unlikely]] return; }
L_0036B95C:
    set32(c.r[16], c.r[16].w[0] + 128u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B950u | kUnwind; return; } goto L_0036B950; } }
L_0036B974:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036B990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 336u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9B0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036B9B0u) [[unlikely]] return; }
L_0036B9B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 384u));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 388u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 392u));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 384u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 388u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 392u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 1040u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12800u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA4Cu);  if (depth < kMaxDepth) unit_009A(c, 300u, depth + 1u); else { c.pc = 0x0036BDC8u; return; } if (c.pc != 0x0036BA4Cu) [[unlikely]] return; }
L_0036BA4C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036BA68; } }
    st32((c.r[3].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 1;
L_0036BA68:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036BAFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036BAC0; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAFC; } }
L_0036BAC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BACCu);  if (depth < kMaxDepth) unit_0098(c, 339u, depth + 1u); else { c.pc = 0x00363E40u; return; } if (c.pc != 0x0036BACCu) [[unlikely]] return; }
L_0036BACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BAE4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAF0; } }
L_0036BAE4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036BAF0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0036BAFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BB10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[19], 0u + 12u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB3Cu);  if (depth < kMaxDepth) unit_009A(c, 207u, depth + 1u); else { c.pc = 0x0036AEE8u; return; } if (c.pc != 0x0036BB3Cu) [[unlikely]] return; }
L_0036BB3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB58u);  if (depth < kMaxDepth) unit_009A(c, 292u, depth + 1u); else { c.pc = 0x0036BCD8u; return; } if (c.pc != 0x0036BB58u) [[unlikely]] return; }
L_0036BB58:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0036BBE8; } }
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036BB98; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB88u);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x0036BB88u) [[unlikely]] return; }
L_0036BB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB94u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036BB94u) [[unlikely]] return; }
L_0036BB94:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_0036BB98:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BBE8; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 12u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036BBD8; } }
L_0036BBC0:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BBC0u | kUnwind; return; } goto L_0036BBC0; } }
L_0036BBD8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036BBE8; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_0036BBE8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BC08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 12884u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0036BC74; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0036BC48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[19].w[0] + 8240u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC60u);  if (depth < kMaxDepth) unit_0098(c, 344u, depth + 1u); else { c.pc = 0x00363EE0u; return; } if (c.pc != 0x0036BC60u) [[unlikely]] return; }
L_0036BC60:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BC48u | kUnwind; return; } goto L_0036BC48; } }
L_0036BC74:
    st32((c.r[18].w[0] + 13004u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BC98:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036BCCC; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0036BCA8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0036BCC0; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BCC0:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BCA8u | kUnwind; return; } goto L_0036BCA8; } }
L_0036BCCC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BCD8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036BD0C; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0036BCE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0036BD00; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BD00:
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BCE8u | kUnwind; return; } goto L_0036BCE8; } }
L_0036BD0C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BD18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BD28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BD38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 1040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12800u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 7);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD7Cu);  if (depth < kMaxDepth) unit_009A(c, 303u, depth + 1u); else { c.pc = 0x0036BE08u; return; } if (c.pc != 0x0036BD7Cu) [[unlikely]] return; }
L_0036BD7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12800u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036BDAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.r[6].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDACu);  if (depth < kMaxDepth) unit_009A(c, 276u, depth + 1u); else { c.pc = 0x0036BA10u; return; } if (c.pc != 0x0036BDACu) [[unlikely]] return; }
L_0036BDAC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BDC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036BDFC; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0036BDD8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0036BDF0; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BDF0:
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BDD8u | kUnwind; return; } goto L_0036BDD8; } }
L_0036BDFC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BE08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036BE40; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0036BE18:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0036BE34; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BE34:
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BE18u | kUnwind; return; } goto L_0036BE18; } }
L_0036BE40:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE68u);  if (depth < kMaxDepth) unit_009A(c, 215u, depth + 1u); else { c.pc = 0x0036B0C8u; return; } if (c.pc != 0x0036BE68u) [[unlikely]] return; }
L_0036BE68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BE78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8408u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 724u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEA4u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0036BEA4u) [[unlikely]] return; }
L_0036BEA4:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEB0u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0036BEB0u) [[unlikely]] return; }
L_0036BEB0:
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEBCu);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0036BEBCu) [[unlikely]] return; }
L_0036BEBC:
    set32(c.r[4], c.r[16].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEC8u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0036BEC8u) [[unlikely]] return; }
L_0036BEC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 552u), c.f[0]);
    set32(c.r[4], 0u + 100u);
    st32((c.r[16].w[0] + 540u), c.f[0]);
    st32((c.r[16].w[0] + 544u), c.f[0]);
    st32((c.r[16].w[0] + 548u), c.f[0]);
    st32((c.r[16].w[0] + 560u), c.f[1]);
    st32((c.r[16].w[0] + 496u), 0u);
    st32((c.r[16].w[0] + 500u), 0u);
    st32((c.r[16].w[0] + 504u), 0u);
    st32((c.r[16].w[0] + 508u), 0u);
    st32((c.r[16].w[0] + 512u), 0u);
    st32((c.r[16].w[0] + 516u), 0u);
    st32((c.r[16].w[0] + 520u), 0u);
    st32((c.r[16].w[0] + 524u), 0u);
    st32((c.r[16].w[0] + 528u), 0u);
    st32((c.r[16].w[0] + 532u), 0u);
    st32((c.r[16].w[0] + 536u), 0u);
    st32((c.r[16].w[0] + 556u), c.f[1]);
    st32((c.r[16].w[0] + 564u), 0u);
    st32((c.r[16].w[0] + 568u), 0u);
    st32((c.r[16].w[0] + 572u), 0u);
    st32((c.r[16].w[0] + 576u), 0u);
    st32((c.r[16].w[0] + 580u), 0u);
    st32((c.r[16].w[0] + 584u), 0u);
    st32((c.r[16].w[0] + 588u), 0u);
    st32((c.r[16].w[0] + 592u), 0u);
    st32((c.r[16].w[0] + 596u), 0u);
    st32((c.r[16].w[0] + 600u), 0u);
    st32((c.r[16].w[0] + 604u), 0u);
    st32((c.r[16].w[0] + 608u), 0u);
    st32((c.r[16].w[0] + 612u), 0u);
    st32((c.r[16].w[0] + 616u), 0u);
    st32((c.r[16].w[0] + 620u), 0u);
    st32((c.r[16].w[0] + 624u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 628u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 648u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 660u), c.f[0]);
    st32((c.r[16].w[0] + 664u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 676u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 688u), c.f[2]);
    st32((c.r[16].w[0] + 720u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 632u), 0u);
    st32((c.r[16].w[0] + 636u), 0u);
    st32((c.r[16].w[0] + 640u), 0u);
    st32((c.r[16].w[0] + 644u), 0u);
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 656u), 0u);
    st32((c.r[16].w[0] + 668u), 0u);
    st32((c.r[16].w[0] + 672u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 684u), 0u);
    st32((c.r[16].w[0] + 692u), 0u);
    st32((c.r[16].w[0] + 696u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 704u), 0u);
    st32((c.r[16].w[0] + 708u), 0u);
    st32((c.r[16].w[0] + 712u), 0u);
    st32((c.r[16].w[0] + 716u), 0u);
    c.budget -= 71;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BFFC; } }
L_0036BFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFECu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036BFECu) [[unlikely]] return; }
L_0036BFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFF4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036BFF4u) [[unlikely]] return; }
L_0036BFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFFCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036BFFCu) [[unlikely]] return; }
L_0036BFFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_009B(c, 1u, depth);
}

}
