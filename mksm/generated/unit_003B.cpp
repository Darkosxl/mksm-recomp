#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196,
    0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001EC000;
    case 2u: goto L_001EC00C;
    case 3u: goto L_001EC050;
    case 4u: goto L_001EC058;
    case 5u: goto L_001EC078;
    case 6u: goto L_001EC0C8;
    case 7u: goto L_001EC12C;
    case 8u: goto L_001EC150;
    case 9u: goto L_001EC188;
    case 10u: goto L_001EC19C;
    case 11u: goto L_001EC1BC;
    case 12u: goto L_001EC1DC;
    case 13u: goto L_001EC1F0;
    case 14u: goto L_001EC208;
    case 15u: goto L_001EC254;
    case 16u: goto L_001EC26C;
    case 17u: goto L_001EC284;
    case 18u: goto L_001EC2A0;
    case 19u: goto L_001EC2B4;
    case 20u: goto L_001EC2D0;
    case 21u: goto L_001EC2EC;
    case 22u: goto L_001EC334;
    case 23u: goto L_001EC380;
    case 24u: goto L_001EC39C;
    case 25u: goto L_001EC3C4;
    case 26u: goto L_001EC3E0;
    case 27u: goto L_001EC53C;
    case 28u: goto L_001EC560;
    case 29u: goto L_001EC574;
    case 30u: goto L_001EC59C;
    case 31u: goto L_001EC5B0;
    case 32u: goto L_001EC5C0;
    case 33u: goto L_001EC604;
    case 34u: goto L_001EC614;
    case 35u: goto L_001EC62C;
    case 36u: goto L_001EC660;
    case 37u: goto L_001EC698;
    case 38u: goto L_001EC6A8;
    case 39u: goto L_001EC6FC;
    case 40u: goto L_001EC714;
    case 41u: goto L_001EC738;
    case 42u: goto L_001EC770;
    case 43u: goto L_001EC780;
    case 44u: goto L_001EC808;
    case 45u: goto L_001EC8C8;
    case 46u: goto L_001EC940;
    case 47u: goto L_001EC988;
    case 48u: goto L_001ECA20;
    case 49u: goto L_001ECA38;
    case 50u: goto L_001ECA58;
    case 51u: goto L_001ECA6C;
    case 52u: goto L_001ECA80;
    case 53u: goto L_001ECAC4;
    case 54u: goto L_001ECAE4;
    case 55u: goto L_001ECAF4;
    case 56u: goto L_001ECB18;
    case 57u: goto L_001ECB60;
    case 58u: goto L_001ECC14;
    case 59u: goto L_001ECC2C;
    case 60u: goto L_001ECC48;
    case 61u: goto L_001ECCA4;
    case 62u: goto L_001ED0BC;
    case 63u: goto L_001ED100;
    case 64u: goto L_001ED174;
    case 65u: goto L_001ED1C4;
    case 66u: goto L_001ED204;
    case 67u: goto L_001ED210;
    case 68u: goto L_001ED28C;
    case 69u: goto L_001ED2E0;
    case 70u: goto L_001ED388;
    case 71u: goto L_001ED498;
    case 72u: goto L_001ED4C0;
    case 73u: goto L_001ED564;
    case 74u: goto L_001ED570;
    case 75u: goto L_001ED630;
    case 76u: goto L_001ED688;
    case 77u: goto L_001ED698;
    case 78u: goto L_001ED6D4;
    case 79u: goto L_001ED6F0;
    case 80u: goto L_001ED72C;
    case 81u: goto L_001ED740;
    case 82u: goto L_001ED748;
    case 83u: goto L_001ED750;
    case 84u: goto L_001ED768;
    case 85u: goto L_001ED774;
    case 86u: goto L_001ED77C;
    case 87u: goto L_001ED7C8;
    case 88u: goto L_001ED86C;
    case 89u: goto L_001ED880;
    case 90u: goto L_001ED890;
    case 91u: goto L_001ED89C;
    case 92u: goto L_001ED8A0;
    case 93u: goto L_001ED8DC;
    case 94u: goto L_001ED984;
    case 95u: goto L_001ED9D4;
    case 96u: goto L_001EDA0C;
    case 97u: goto L_001EDACC;
    case 98u: goto L_001EDAF4;
    case 99u: goto L_001EDB30;
    case 100u: goto L_001EDB4C;
    case 101u: goto L_001EDB84;
    case 102u: goto L_001EDC04;
    case 103u: goto L_001EDC34;
    case 104u: goto L_001EDC84;
    case 105u: goto L_001EDCC0;
    case 106u: goto L_001EDD50;
    case 107u: goto L_001EDD78;
    case 108u: goto L_001EDDE0;
    case 109u: goto L_001EDDFC;
    case 110u: goto L_001EDE34;
    case 111u: goto L_001EDE40;
    case 112u: goto L_001EDE48;
    case 113u: goto L_001EDE58;
    case 114u: goto L_001EDE70;
    case 115u: goto L_001EDE88;
    case 116u: goto L_001EDE94;
    case 117u: goto L_001EDEB8;
    case 118u: goto L_001EDEC8;
    case 119u: goto L_001EDEE8;
    case 120u: goto L_001EDF18;
    case 121u: goto L_001EDF2C;
    case 122u: goto L_001EDF3C;
    case 123u: goto L_001EDF4C;
    case 124u: goto L_001EDF54;
    case 125u: goto L_001EDFA0;
    case 126u: goto L_001EDFE0;
    case 127u: goto L_001EE004;
    case 128u: goto L_001EE054;
    case 129u: goto L_001EE08C;
    case 130u: goto L_001EE0A0;
    case 131u: goto L_001EE0B0;
    case 132u: goto L_001EE0E8;
    case 133u: goto L_001EE130;
    case 134u: goto L_001EE158;
    case 135u: goto L_001EE1A4;
    case 136u: goto L_001EE1EC;
    case 137u: goto L_001EE200;
    case 138u: goto L_001EE224;
    case 139u: goto L_001EE234;
    case 140u: goto L_001EE258;
    case 141u: goto L_001EE2A4;
    case 142u: goto L_001EE2BC;
    case 143u: goto L_001EE2D0;
    case 144u: goto L_001EE2E0;
    case 145u: goto L_001EE2F8;
    case 146u: goto L_001EE364;
    case 147u: goto L_001EE3A0;
    case 148u: goto L_001EE408;
    case 149u: goto L_001EE480;
    case 150u: goto L_001EE490;
    case 151u: goto L_001EE4E4;
    case 152u: goto L_001EE500;
    case 153u: goto L_001EE514;
    case 154u: goto L_001EE528;
    case 155u: goto L_001EE550;
    case 156u: goto L_001EE564;
    case 157u: goto L_001EE608;
    case 158u: goto L_001EE618;
    case 159u: goto L_001EE630;
    case 160u: goto L_001EE644;
    case 161u: goto L_001EE654;
    case 162u: goto L_001EE668;
    case 163u: goto L_001EE6D0;
    case 164u: goto L_001EE718;
    case 165u: goto L_001EE758;
    case 166u: goto L_001EE770;
    case 167u: goto L_001EE78C;
    case 168u: goto L_001EE7A4;
    case 169u: goto L_001EE7B8;
    case 170u: goto L_001EE7E0;
    case 171u: goto L_001EE7F4;
    case 172u: goto L_001EE804;
    case 173u: goto L_001EE858;
    case 174u: goto L_001EE870;
    case 175u: goto L_001EE8C0;
    case 176u: goto L_001EE8D8;
    case 177u: goto L_001EE8F0;
    case 178u: goto L_001EE908;
    case 179u: goto L_001EE910;
    case 180u: goto L_001EE920;
    case 181u: goto L_001EE92C;
    case 182u: goto L_001EE944;
    case 183u: goto L_001EE960;
    case 184u: goto L_001EE970;
    case 185u: goto L_001EE9C0;
    case 186u: goto L_001EE9D8;
    case 187u: goto L_001EE9F0;
    case 188u: goto L_001EEA08;
    case 189u: goto L_001EEA10;
    case 190u: goto L_001EEA1C;
    case 191u: goto L_001EEA24;
    case 192u: goto L_001EEA30;
    case 193u: goto L_001EEA40;
    case 194u: goto L_001EEA50;
    case 195u: goto L_001EEA68;
    case 196u: goto L_001EEA7C;
    case 197u: goto L_001EEA88;
    case 198u: goto L_001EEAA0;
    case 199u: goto L_001EEAB0;
    case 200u: goto L_001EEAC8;
    case 201u: goto L_001EEAE0;
    case 202u: goto L_001EEAF0;
    case 203u: goto L_001EEB08;
    case 204u: goto L_001EEB20;
    case 205u: goto L_001EEB30;
    case 206u: goto L_001EEB48;
    case 207u: goto L_001EEB5C;
    case 208u: goto L_001EEB68;
    case 209u: goto L_001EEB88;
    case 210u: goto L_001EEBA4;
    case 211u: goto L_001EEBC0;
    case 212u: goto L_001EEBD0;
    case 213u: goto L_001EEBFC;
    case 214u: goto L_001EEC0C;
    case 215u: goto L_001EEC30;
    case 216u: goto L_001EEC40;
    case 217u: goto L_001EEC60;
    case 218u: goto L_001EEC78;
    case 219u: goto L_001EEC90;
    case 220u: goto L_001EECA8;
    case 221u: goto L_001EECC0;
    case 222u: goto L_001EECD8;
    case 223u: goto L_001EECF0;
    case 224u: goto L_001EED00;
    case 225u: goto L_001EED18;
    case 226u: goto L_001EED30;
    case 227u: goto L_001EED48;
    case 228u: goto L_001EED58;
    case 229u: goto L_001EED70;
    case 230u: goto L_001EED94;
    case 231u: goto L_001EEDAC;
    case 232u: goto L_001EEDCC;
    case 233u: goto L_001EEDE4;
    case 234u: goto L_001EEDF0;
    case 235u: goto L_001EEE10;
    case 236u: goto L_001EEE2C;
    case 237u: goto L_001EEE44;
    case 238u: goto L_001EEE5C;
    case 239u: goto L_001EEE7C;
    case 240u: goto L_001EEE94;
    case 241u: goto L_001EEEA0;
    case 242u: goto L_001EEEC0;
    case 243u: goto L_001EEEDC;
    case 244u: goto L_001EEEF4;
    case 245u: goto L_001EEF0C;
    case 246u: goto L_001EEF2C;
    case 247u: goto L_001EEF44;
    case 248u: goto L_001EEF50;
    case 249u: goto L_001EEF70;
    case 250u: goto L_001EEF84;
    case 251u: goto L_001EEF90;
    case 252u: goto L_001EEFB0;
    case 253u: goto L_001EEFC8;
    case 254u: goto L_001EEFE0;
    case 255u: goto L_001EF000;
    case 256u: goto L_001EF010;
    case 257u: goto L_001EF028;
    case 258u: goto L_001EF040;
    case 259u: goto L_001EF048;
    case 260u: goto L_001EF058;
    case 261u: goto L_001EF070;
    case 262u: goto L_001EF080;
    case 263u: goto L_001EF088;
    case 264u: goto L_001EF0CC;
    case 265u: goto L_001EF0E0;
    case 266u: goto L_001EF0EC;
    case 267u: goto L_001EF118;
    case 268u: goto L_001EF12C;
    case 269u: goto L_001EF13C;
    case 270u: goto L_001EF150;
    case 271u: goto L_001EF158;
    case 272u: goto L_001EF1D8;
    case 273u: goto L_001EF20C;
    case 274u: goto L_001EF224;
    case 275u: goto L_001EF250;
    case 276u: goto L_001EF268;
    case 277u: goto L_001EF2A0;
    case 278u: goto L_001EF2B8;
    case 279u: goto L_001EF2F8;
    case 280u: goto L_001EF3A0;
    case 281u: goto L_001EF3BC;
    case 282u: goto L_001EF3D0;
    case 283u: goto L_001EF41C;
    case 284u: goto L_001EF42C;
    case 285u: goto L_001EF44C;
    case 286u: goto L_001EF468;
    case 287u: goto L_001EF478;
    case 288u: goto L_001EF484;
    case 289u: goto L_001EF4A0;
    case 290u: goto L_001EF4C8;
    case 291u: goto L_001EF510;
    case 292u: goto L_001EF520;
    case 293u: goto L_001EF530;
    case 294u: goto L_001EF540;
    case 295u: goto L_001EF56C;
    case 296u: goto L_001EF584;
    case 297u: goto L_001EF6BC;
    case 298u: goto L_001EF6E8;
    case 299u: goto L_001EF778;
    case 300u: goto L_001EF7A0;
    case 301u: goto L_001EF7BC;
    case 302u: goto L_001EF7D8;
    case 303u: goto L_001EF8D8;
    case 304u: goto L_001EF8E8;
    case 305u: goto L_001EF92C;
    case 306u: goto L_001EF93C;
    case 307u: goto L_001EF960;
    case 308u: goto L_001EF998;
    case 309u: goto L_001EF9D4;
    case 310u: goto L_001EF9E8;
    case 311u: goto L_001EFA0C;
    case 312u: goto L_001EFA44;
    case 313u: goto L_001EFA60;
    case 314u: goto L_001EFA94;
    case 315u: goto L_001EFAC4;
    case 316u: goto L_001EFB30;
    case 317u: goto L_001EFB44;
    case 318u: goto L_001EFB60;
    case 319u: goto L_001EFB78;
    case 320u: goto L_001EFBDC;
    case 321u: goto L_001EFBE8;
    case 322u: goto L_001EFC28;
    case 323u: goto L_001EFC60;
    case 324u: goto L_001EFCD8;
    case 325u: goto L_001EFCF0;
    case 326u: goto L_001EFD10;
    case 327u: goto L_001EFD58;
    case 328u: goto L_001EFD68;
    case 329u: goto L_001EFDB8;
    case 330u: goto L_001EFDF8;
    case 331u: goto L_001EFE08;
    case 332u: goto L_001EFE50;
    case 333u: goto L_001EFE58;
    case 334u: goto L_001EFE68;
    case 335u: goto L_001EFE80;
    case 336u: goto L_001EFE90;
    case 337u: goto L_001EFEB8;
    case 338u: goto L_001EFEC4;
    case 339u: goto L_001EFEF4;
    case 340u: goto L_001EFF00;
    case 341u: goto L_001EFF3C;
    case 342u: goto L_001EFF50;
    case 343u: goto L_001EFF78;
    case 344u: goto L_001EFF90;
    case 345u: goto L_001EFFA4;
    case 346u: goto L_001EFFD4;
    default: bad_entry(c, 0x001EC000u); return;
    }
L_001EC000:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC00Cu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001EC00Cu) [[unlikely]] return; }
L_001EC00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC078; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC078; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC078; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC078; } }
    c.f[12] = ld32((c.r[16].w[0] + 13144u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC050u);  if (depth < kMaxDepth) unit_002F(c, 158u, depth + 1u); else { c.pc = 0x001BDBB0u; return; } if (c.pc != 0x001EC050u) [[unlikely]] return; }
L_001EC050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC078; } }
L_001EC058:
    set32(c.r[2], ld32((c.r[16].w[0] + 13132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC068; } }
    st32((c.r[16].w[0] + 13132u), 0u);
    c.budget -= 1;
L_001EC068:
    set32(c.r[2], ld32((c.r[16].w[0] + 13128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC078; } }
    st32((c.r[16].w[0] + 13128u), 0u);
    c.budget -= 1;
L_001EC078:
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBC98u | kUnwind; return; } [[clang::musttail]] return unit_003A(c, 367u, depth); } }
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
L_001EC0C8:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 608u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 11824u);
    set32(c.r[2], ld32((c.r[17].w[0] + 11824u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC2D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 23048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC218; } }
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[4], c.r[17].w[0] + 11888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC12Cu);  if (depth < kMaxDepth) unit_0070(c, 30u, depth + 1u); else { c.pc = 0x002C0608u; return; } if (c.pc != 0x001EC12Cu) [[unlikely]] return; }
L_001EC12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC3C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11264u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC150u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC150u) [[unlikely]] return; }
L_001EC150:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC190; } }
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC190; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC188u);  if (depth < kMaxDepth) unit_003A(c, 216u, depth + 1u); else { c.pc = 0x001EA1D8u; return; } if (c.pc != 0x001EC188u) [[unlikely]] return; }
L_001EC188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC3C4; } }
L_001EC190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC19Cu);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC19Cu) [[unlikely]] return; }
L_001EC19C:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC1E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC1BCu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001EC1BCu) [[unlikely]] return; }
L_001EC1BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC1DCu);  if (depth < kMaxDepth) unit_0070(c, 234u, depth + 1u); else { c.pc = 0x002C3048u; return; } if (c.pc != 0x001EC1DCu) [[unlikely]] return; }
L_001EC1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC3C4; } }
L_001EC1E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC1F0u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC1F0u) [[unlikely]] return; }
L_001EC1F0:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC2A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC208u);  if (depth < kMaxDepth) unit_0071(c, 30u, depth + 1u); else { c.pc = 0x002C4458u; return; } if (c.pc != 0x001EC208u) [[unlikely]] return; }
L_001EC208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC2A8; } }
L_001EC218:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[16], c.r[17].w[0] + 11744u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC254u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC254u) [[unlikely]] return; }
L_001EC254:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC26Cu);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC26Cu) [[unlikely]] return; }
L_001EC26C:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC284u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC284u) [[unlikely]] return; }
L_001EC284:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[4], c.r[17].w[0] + 11808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2A0u);  if (depth < kMaxDepth) unit_0070(c, 30u, depth + 1u); else { c.pc = 0x002C0608u; return; } if (c.pc != 0x001EC2A0u) [[unlikely]] return; }
L_001EC2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC3C4; } }
L_001EC2A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2B4u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC2B4u) [[unlikely]] return; }
L_001EC2B4:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2D0u);  if (depth < kMaxDepth) unit_006E(c, 205u, depth + 1u); else { c.pc = 0x002BAFB8u; return; } if (c.pc != 0x001EC2D0u) [[unlikely]] return; }
L_001EC2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC3C4; } }
L_001EC2D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2ECu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001EC2ECu) [[unlikely]] return; }
L_001EC2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC3C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC334u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001EC334u) [[unlikely]] return; }
L_001EC334:
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[16], c.r[29].w[0] + 528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 4u);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[29].w[0] + 576u), c.f[2]);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    st32((c.r[29].w[0] + 580u), c.f[3]);
    st32((c.r[29].w[0] + 584u), c.f[1]);
    st32((c.r[29].w[0] + 560u), c.f[2]);
    st32((c.r[29].w[0] + 568u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC380u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x001EC380u) [[unlikely]] return; }
L_001EC380:
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC39Cu);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001EC39Cu) [[unlikely]] return; }
L_001EC39C:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC3C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3C4u);  if (depth < kMaxDepth) unit_0070(c, 248u, depth + 1u); else { c.pc = 0x002C3270u; return; } if (c.pc != 0x001EC3C4u) [[unlikely]] return; }
L_001EC3C4:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 608u));
    set32(c.r[29], c.r[29].w[0] + 656u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EC3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC5B0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 7700u)));
    set32(c.r[2], 0u + 147u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC57C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 148ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC4AC; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC57C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC46C; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    c.r[2].d[0] = c.r[3].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC458; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC458:
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC46C:
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC58C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 143ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC498; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC498:
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC4AC:
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    c.r[2].d[0] = c.r[3].sd[0] < 154ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC4E4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC568; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC4E4:
    set32(c.r[2], 0u + 175u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    c.r[2].d[0] = c.r[3].sd[0] < 176ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC510; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC5A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC510:
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC530:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC53Cu);  if (depth < kMaxDepth) unit_0071(c, 24u, depth + 1u); else { c.pc = 0x002C4300u; return; } if (c.pc != 0x001EC53Cu) [[unlikely]] return; }
L_001EC53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC544:
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC554:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC560u);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC0C8u; return; } if (c.pc != 0x001EC560u) [[unlikely]] return; }
L_001EC560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC568:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC574u);  if (depth < kMaxDepth) unit_0070(c, 105u, depth + 1u); else { c.pc = 0x002C13B8u; return; } if (c.pc != 0x001EC574u) [[unlikely]] return; }
L_001EC574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC57C:
    set32(c.r[3], ld32((c.r[5].w[0] + 11744u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC5B0; } }
L_001EC58C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC59Cu);  if (depth < kMaxDepth) unit_001A(c, 5u, depth + 1u); else { c.pc = 0x001680F8u; return; } if (c.pc != 0x001EC59Cu) [[unlikely]] return; }
L_001EC59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5B0; } }
L_001EC5A4:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5B0u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C1D98u; return; } if (c.pc != 0x001EC5B0u) [[unlikely]] return; }
L_001EC5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EC5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17288u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC5FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 23788u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC630; } }
L_001EC5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC604u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001EC604u) [[unlikely]] return; }
L_001EC604:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC614u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001EC614u) [[unlikely]] return; }
L_001EC614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC630; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC62Cu);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x001EC62Cu) [[unlikely]] return; }
L_001EC62C:
    st32((c.r[17].w[0] + 23788u), c.r[2].w[0]);
    c.budget -= 1;
L_001EC630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23792u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EC648; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 23788u), c.r[2].w[0]);
    c.budget -= 2;
L_001EC648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC660u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x001EC660u) [[unlikely]] return; }
L_001EC660:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001EC6E0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 211u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001EC6D8; } }
L_001EC698:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6A8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x001EC6A8u) [[unlikely]] return; }
L_001EC6A8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001EC6E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[16].w[0] + 14208u);
    set32(c.r[5], 0u + 211u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC698u | kUnwind; return; } goto L_001EC698; } }
L_001EC6D8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 23788u), c.r[2].w[0]);
    c.budget -= 2;
L_001EC6E0:
    set32(c.r[16], ld32((c.r[17].w[0] + 23788u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001EC708; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6FCu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001EC6FCu) [[unlikely]] return; }
L_001EC6FC:
    st32((c.r[2].w[0] + 816u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC718; } }
L_001EC708:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC714u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001EC714u) [[unlikely]] return; }
L_001EC714:
    st32((c.r[2].w[0] + 816u), 0u);
    c.budget -= 1;
L_001EC718:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EC738:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
L_001EC770:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] - 22480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC780u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001EC780u) [[unlikely]] return; }
L_001EC780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EC904; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC904; } }
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC904; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC7E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 10204u)));
    c.r[2].d[0] = c.r[2].sd[0] < 401ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC7EC; } }
L_001EC7E0:
    st16((c.r[17].w[0] + 10208u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC7F0; } }
L_001EC7EC:
    st16((c.r[17].w[0] + 10208u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001EC7F0:
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC808u);  if (depth < kMaxDepth) unit_0081(c, 186u, depth + 1u); else { c.pc = 0x003064F8u; return; } if (c.pc != 0x001EC808u) [[unlikely]] return; }
L_001EC808:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC81C; } }
    st32((c.r[17].w[0] + 10220u), 0u);
    c.budget -= 1;
L_001EC81C:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 10208u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC894; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10079u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC894; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC894; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9040u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC894; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC894; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EC894; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EC8A4; } }
L_001EC894:
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 10214u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC8A8; } }
L_001EC8A4:
    st16((c.r[16].w[0] + 10214u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001EC8A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10012u)));
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC8E4; } }
    st16((c.r[17].w[0] + 10010u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[17].w[0] + 10124u);
    c.budget -= 3;
L_001EC8C8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC8C8u | kUnwind; return; } goto L_001EC8C8; } }
    st16((c.r[17].w[0] + 10118u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001EC8E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC904; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC904; } }
    set32(c.r[2], c.r[19].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_001EC904:
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC770u | kUnwind; return; } goto L_001EC770; } }
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
L_001EC940:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[30], 0u - 10u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 18;
L_001EC988:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC9C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 536u)));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[5], c.r[17].w[0] + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 536u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 540u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED444; } }
L_001EC9C8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[20].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED444; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ED444; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECA60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 612u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA20u);  if (depth < kMaxDepth) unit_0018(c, 443u, depth + 1u); else { c.pc = 0x00163E18u; return; } if (c.pc != 0x001ECA20u) [[unlikely]] return; }
L_001ECA20:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA38u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x001ECA38u) [[unlikely]] return; }
L_001ECA38:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA58u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x001ECA58u) [[unlikely]] return; }
L_001ECA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECA84; } }
L_001ECA60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA6Cu);  if (depth < kMaxDepth) unit_0018(c, 443u, depth + 1u); else { c.pc = 0x00163E18u; return; } if (c.pc != 0x001ECA6Cu) [[unlikely]] return; }
L_001ECA6C:
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA80u);  if (depth < kMaxDepth) unit_0068(c, 304u, depth + 1u); else { c.pc = 0x002A3D00u; return; } if (c.pc != 0x001ECA80u) [[unlikely]] return; }
L_001ECA80:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001ECA84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9018u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECAAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17288u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ECAAC; } }
    st16((c.r[17].w[0] + 10200u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 9018u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0]), 0u);
    c.budget -= 3;
L_001ECAAC:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAC4u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x001ECAC4u) [[unlikely]] return; }
L_001ECAC4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10148u)));
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECAE8; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAE4u);  if (depth < kMaxDepth) unit_007C(c, 64u, depth + 1u); else { c.pc = 0x002F0E18u; return; } if (c.pc != 0x001ECAE4u) [[unlikely]] return; }
L_001ECAE4:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001ECAE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAF4u);  if (depth < kMaxDepth) unit_001B(c, 189u, depth + 1u); else { c.pc = 0x0016E938u; return; } if (c.pc != 0x001ECAF4u) [[unlikely]] return; }
L_001ECAF4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8938u)));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED444; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB18u);  if (depth < kMaxDepth) unit_003B(c, 340u, depth + 1u); else { c.pc = 0x001EFF00u; return; } if (c.pc != 0x001ECB18u) [[unlikely]] return; }
L_001ECB18:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 1536u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 7700u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], 0u + 11u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECC48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9969u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001ECC48; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB60u);  if (depth < kMaxDepth) unit_0091(c, 25u, depth + 1u); else { c.pc = 0x003443C0u; return; } if (c.pc != 0x001ECB60u) [[unlikely]] return; }
L_001ECB60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ECC48; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ECB9C; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ECB9C; } }
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ECB9C; } }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECC48; } }
L_001ECB9C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9826u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECC48; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ECBC0; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECBD0; } }
L_001ECBC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ECC08; } }
L_001ECBD0:
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECBEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 61u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ECC08; } }
L_001ECBEC:
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECC48; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECC48; } }
L_001ECC08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC14u);  if (depth < kMaxDepth) unit_0078(c, 266u, depth + 1u); else { c.pc = 0x002E3A18u; return; } if (c.pc != 0x001ECC14u) [[unlikely]] return; }
L_001ECC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ECC48; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9826u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC2Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x001ECC2Cu) [[unlikely]] return; }
L_001ECC2C:
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[17].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC48u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001ECC48u) [[unlikely]] return; }
L_001ECC48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10092u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECCDC; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 620u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ECCAC; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8996u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 8996u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ECCC4; } }
    st16((c.r[17].w[0] + 8996u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[17].w[0] + 10092u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10093u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECCA4u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x001ECCA4u) [[unlikely]] return; }
L_001ECCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECCC4; } }
L_001ECCAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8996u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8996u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001ECCC4; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 8996u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001ECCC4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    st32((c.r[17].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED444; } }
L_001ECCDC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8936u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8936u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECCFC; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 8936u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECD00; } }
L_001ECCFC:
    st16((c.r[17].w[0] + 7682u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001ECD00:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], 0u - 1u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[4].d[0] & 49152ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ECD3C; } }
    set32(c.r[16], 0u + 512u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECD3C:
    c.r[3].d[0] = c.r[4].d[0] & 24576ull;
    set32(c.r[2], 0u + 24576u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECD60; } }
    set32(c.r[16], 0u - 512u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECD60:
    c.r[3].d[0] = c.r[4].d[0] & 36864ull;
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECD84; } }
    set32(c.r[16], 0u + 1536u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECD84:
    c.r[3].d[0] = c.r[4].d[0] & 12288ull;
    set32(c.r[2], 0u + 12288u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECDA8; } }
    set32(c.r[16], 0u - 1536u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECDA8:
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECDC8; } }
    set32(c.r[16], 0u + 2048u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECDC8:
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECDE8; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECDE8:
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECE08; } }
    set32(c.r[16], 0u + 1024u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE20; } }
L_001ECE08:
    c.r[2].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECE20; } }
    set32(c.r[16], 0u - 1024u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001ECE20:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001ECE50; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11338u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 11338u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECE58; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10077u)));
    st16((c.r[17].w[0] + 11338u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10034u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECE58; } }
L_001ECE50:
    set32(c.r[2], 0u + 5u);
    st16((c.r[17].w[0] + 11338u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001ECE58:
    st16((c.r[17].w[0] + 10034u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 10077u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001ECEB0; } }
    st16((c.r[17].w[0] + 9938u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], 0u - 2048u);
    c.r[5].d[0] = ld64((c.r[17].w[0] + 560u));
    c.f[0] = ld32((c.r[2].w[0] - 17692u));
    c.r[5].d[0] = c.r[5].d[0] & 64ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4096u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[3].d[0] = c.r[16].sd[0] < 2048ll ? 1ull : 0ull;
    set32(c.r[2], c.r[16].w[0] - 4096u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001ECEB0; } }
    st16((c.r[17].w[0] + 652u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_001ECEB0:
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ECEE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_001ECEE4:
    st16((c.r[17].w[0] + 648u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001ECF8C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_001ECF8C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 9932u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECF14; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9938u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECF28; } }
L_001ECF14:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9938u)));
    set32(c.r[4], c.r[3].w[0] + 2048u);
    set32(c.r[3], c.r[3].w[0] - 2048u);
    c.r[2].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_001ECF28:
    set32(c.r[2], c.r[4].w[0] - 513u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1023ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECF44; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECF88; } }
L_001ECF44:
    c.r[2].d[0] = c.r[4].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECF68; } }
    c.r[2].d[0] = c.r[4].sd[0] < -1535ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ECF68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECF88; } }
L_001ECF68:
    set32(c.r[2], c.r[4].w[0] + 512u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECF84; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECF88; } }
L_001ECF84:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001ECF88:
    st16((c.r[17].w[0] + 654u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001ECF8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECFAC; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED000; } }
L_001ECFAC:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED000; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED000; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED000; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED000; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26128u);
    set32(c.r[3], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED124; } }
L_001ED000:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10052u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001ED01C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED01C; } }
    st16((c.r[17].w[0] + 10052u), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.budget -= 1;
L_001ED01C:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ED0EC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10052u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001ED0EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24424u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED06C; } }
    set32(c.r[2], 0u + 5u);
    st16((c.r[17].w[0] + 10052u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED0EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED0B0; } }
L_001ED06C:
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED0EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001ED0A4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 654u));
    set32(c.r[2], c.r[3].w[0] - 3u);
    st16((c.r[17].w[0] + 10052u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED0A4; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 10052u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001ED0A4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED0EC; } }
L_001ED0B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED0BCu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001ED0BCu) [[unlikely]] return; }
L_001ED0BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED0EC; } }
    st16((c.r[17].w[0] + 10052u), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.budget -= 1;
L_001ED0EC:
    st16((c.r[17].w[0] + 10010u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[17].w[0] + 10124u);
    c.budget -= 5;
L_001ED100:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED100u | kUnwind; return; } goto L_001ED100; } }
    st16((c.r[17].w[0] + 10118u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED444; } }
L_001ED124:
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED444; } }
    set32(c.r[2], 0u + 213u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED444; } }
    set32(c.r[2], 0u + 214u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED444; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 652u)));
    set32(c.r[4], c.r[29].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 8u);
    c.r[19].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED174u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001ED174u) [[unlikely]] return; }
L_001ED174:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 12u);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1C4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001ED1C4u) [[unlikely]] return; }
L_001ED1C4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ED1E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 3;
L_001ED1E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED204u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x001ED204u) [[unlikely]] return; }
L_001ED204:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED210u);  if (depth < kMaxDepth) unit_002F(c, 126u, depth + 1u); else { c.pc = 0x001BD420u; return; } if (c.pc != 0x001ED210u) [[unlikely]] return; }
L_001ED210:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED240; } }
    set32(c.r[16], c.r[16].w[0] - 4096u);
    c.budget -= 1;
L_001ED240:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED26C; } }
    set32(c.r[16], c.r[16].w[0] + 4096u);
    c.budget -= 1;
L_001ED26C:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001ED290; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED28Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001ED28Cu) [[unlikely]] return; }
L_001ED28C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001ED290:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 68ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED338; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED338; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 652u)));
    c.f[20] = c.r[16].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2E0u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001ED2E0u) [[unlikely]] return; }
L_001ED2E0:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED30C; } }
    st32((c.r[17].w[0] + 148u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED328; } }
L_001ED30C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 652u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 7;
L_001ED328:
    st16((c.r[17].w[0] + 648u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[21].w[0] - 26128u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 68u));
    st16((c.r[17].w[0] + 7698u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001ED338:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10102u)));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED444; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    set32(c.r[3], 0u + 48u);
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ED3B4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ED3B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[20] = c.r[1].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.f[13] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED388u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x001ED388u) [[unlikely]] return; }
L_001ED388:
    c.f[1] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 148u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED3B4; } }
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_001ED3B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10037u)));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED444; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED434; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 536u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 536u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 540u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED434; } }
L_001ED408:
    set32(c.r[2], ld32((c.r[17].w[0] + 536u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 536u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 540u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001ED434; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[17].w[0] + 536u), c.r[2].w[0]);
    c.budget -= 2;
L_001ED434:
    set32(c.r[2], c.r[22].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[20].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 4;
L_001ED444:
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC988u | kUnwind; return; } goto L_001EC988; } }
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
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ED498:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
L_001ED4C0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + 13248u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED6A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 138u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001ED4FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED6A0; } }
L_001ED4FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED6A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23796u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ED538; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED564; } }
    st32((c.r[4].w[0] + 23796u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED564; } }
L_001ED538:
    set32(c.r[3], c.r[5].w[0] - 142u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5856u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001EC000u < 16384u) { entry = entries_003B[(t - 0x001EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ED564:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED574; } }
L_001ED570:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ED574:
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001ED6A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], ld32((c.r[16].w[0] + 612u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001ED5AC; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED61C; } }
L_001ED5AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ED5D0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED61C; } }
L_001ED5D0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED61C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED61C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED61C; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED61C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED61C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED654; } }
L_001ED61C:
    st16((c.r[16].w[0] + 10010u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + 13248u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[16].w[0] + 10124u);
    c.budget -= 5;
L_001ED630:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED630u | kUnwind; return; } goto L_001ED630; } }
    st16((c.r[16].w[0] + 10118u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED6A0; } }
L_001ED654:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001ED678; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED678; } }
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_001ED678:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED688u);  if (depth < kMaxDepth) unit_001B(c, 240u, depth + 1u); else { c.pc = 0x0016F1D0u; return; } if (c.pc != 0x001ED688u) [[unlikely]] return; }
L_001ED688:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED698u);  if (depth < kMaxDepth) unit_003B(c, 340u, depth + 1u); else { c.pc = 0x001EFF00u; return; } if (c.pc != 0x001ED698u) [[unlikely]] return; }
L_001ED698:
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 2;
L_001ED6A0:
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED4C0u | kUnwind; return; } goto L_001ED4C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ED6CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED6CC; } }
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 1;
L_001ED6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6D4u);  if (depth < kMaxDepth) unit_0081(c, 70u, depth + 1u); else { c.pc = 0x00305088u; return; } if (c.pc != 0x001ED6D4u) [[unlikely]] return; }
L_001ED6D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ED6F0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED72Cu);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x001ED72Cu) [[unlikely]] return; }
L_001ED72C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] - 27280u);
    st32((c.r[3].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED740u);  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002CD320u; return; } if (c.pc != 0x001ED740u) [[unlikely]] return; }
L_001ED740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED748u);  if (depth < kMaxDepth) unit_003B(c, 32u, depth + 1u); else { c.pc = 0x001EC5C0u; return; } if (c.pc != 0x001ED748u) [[unlikely]] return; }
L_001ED748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED750u);  if (depth < kMaxDepth) unit_0021(c, 33u, depth + 1u); else { c.pc = 0x00184D98u; return; } if (c.pc != 0x001ED750u) [[unlikely]] return; }
L_001ED750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[2].w[0] - 23024u), 0u);
    set32(c.r[4], c.r[4].w[0] - 6944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED768u);  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00343588u; return; } if (c.pc != 0x001ED768u) [[unlikely]] return; }
L_001ED768:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED774u);  if (depth < kMaxDepth) unit_003A(c, 307u, depth + 1u); else { c.pc = 0x001EB378u; return; } if (c.pc != 0x001ED774u) [[unlikely]] return; }
L_001ED774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED77Cu);  if (depth < kMaxDepth) unit_006E(c, 146u, depth + 1u); else { c.pc = 0x002B9BC8u; return; } if (c.pc != 0x001ED77Cu) [[unlikely]] return; }
L_001ED77C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    set32(c.r[9], ld32((c.r[3].w[0] + 928u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], 0u + 13248u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[17], c.r[18].w[0] - 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], 0u + 211u);
    set32(c.r[15], 0u + 100u);
    set32(c.r[14], 0u + 8480u);
    set32(c.r[13], 0u + 93u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[11], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[10], c.r[2].w[0] + 25884u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 19;
L_001ED7C8:
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED840; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_001ED840; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[15].d[0];  if (t) { goto L_001ED818; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[14].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED840; } }
L_001ED818:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[13].d[0];  if (t) { goto L_001ED840; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[12].d[0];  if (t) { goto L_001ED84C; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED84C; } }
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001ED84C; } }
L_001ED840:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    c.budget -= 3;
L_001ED84C:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED7C8u | kUnwind; return; } goto L_001ED7C8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED86Cu);  if (depth < kMaxDepth) unit_003A(c, 366u, depth + 1u); else { c.pc = 0x001EBC40u; return; } if (c.pc != 0x001ED86Cu) [[unlikely]] return; }
L_001ED86C:
    set32(c.r[22], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[30], 0u + 13248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED880u);  if (depth < kMaxDepth) unit_003B(c, 41u, depth + 1u); else { c.pc = 0x001EC738u; return; } if (c.pc != 0x001ED880u) [[unlikely]] return; }
L_001ED880:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED890u);  if (depth < kMaxDepth) unit_003B(c, 46u, depth + 1u); else { c.pc = 0x001EC940u; return; } if (c.pc != 0x001ED890u) [[unlikely]] return; }
L_001ED890:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED89Cu);  if (depth < kMaxDepth) unit_003B(c, 71u, depth + 1u); else { c.pc = 0x001ED498u; return; } if (c.pc != 0x001ED89Cu) [[unlikely]] return; }
L_001ED89C:
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_001ED8A0:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDE08; } }
    st32((c.r[21].w[0]), c.r[22].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[4].w[0] + 27456u);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDE08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8DCu);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x001ED8DCu) [[unlikely]] return; }
L_001ED8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED8F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED8F4; } }
    st8((c.r[16].w[0] + 10077u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001ED8F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10078u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10077u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 648u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDE08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED91C; } }
    st16((c.r[16].w[0] + 658u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED924; } }
L_001ED91C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 658u));
    st16((c.r[16].w[0] + 656u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001ED924:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001ED964; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[30].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED958; } }
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001ED958:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001EDA14; } }
L_001ED964:
    c.f[12] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED984u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001ED984u) [[unlikely]] return; }
L_001ED984:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[19], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[20], c.r[29].w[0] + 76u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9D4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001ED9D4u) [[unlikely]] return; }
L_001ED9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001ED9E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_001ED9E8:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA0Cu);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x001EDA0Cu) [[unlikely]] return; }
L_001EDA0C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 72u));
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EDA14:
    set32(c.r[4], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[4].w[0] - 6u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDAB0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EDA48; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDAB0; } }
L_001EDA48:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EDAB0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EDAB0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EDAB0; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EDAB0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EDAB0; } }
    set32(c.r[2], 0u + 212u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EDAB0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8928u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDC14; } }
L_001EDAB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EDB38; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDACCu);  if (depth < kMaxDepth) unit_0030(c, 7u, depth + 1u); else { c.pc = 0x001C00C0u; return; } if (c.pc != 0x001EDACCu) [[unlikely]] return; }
L_001EDACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDB38; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001EDAF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAF4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001EDAF4u) [[unlikely]] return; }
L_001EDAF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EDAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9942u)));
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EDB8C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9943u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDB24; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDB8C; } }
L_001EDB24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB30u);  if (depth < kMaxDepth) unit_002F(c, 126u, depth + 1u); else { c.pc = 0x001BD420u; return; } if (c.pc != 0x001EDB30u) [[unlikely]] return; }
L_001EDB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDB8C; } }
L_001EDB38:
    set32(c.r[18], c.r[29].w[0] + 72u);
    set32(c.r[19], c.r[29].w[0] + 76u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB4Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EDB4Cu) [[unlikely]] return; }
L_001EDB4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001EDB60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_001EDB60:
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB84u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x001EDB84u) [[unlikely]] return; }
L_001EDB84:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 72u));
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EDB8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDE08; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001EDE08; } }
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC04u);  if (depth < kMaxDepth) unit_0070(c, 19u, depth + 1u); else { c.pc = 0x002C0438u; return; } if (c.pc != 0x001EDC04u) [[unlikely]] return; }
L_001EDC04:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 9928u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDE08; } }
L_001EDC14:
    c.f[12] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC34u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001EDC34u) [[unlikely]] return; }
L_001EDC34:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[18], c.r[29].w[0] + 76u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC84u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EDC84u) [[unlikely]] return; }
L_001EDC84:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[22].d[0];  if (t) { goto L_001EDC9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 3;
L_001EDC9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCC0u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x001EDCC0u) [[unlikely]] return; }
L_001EDCC0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001EDD5C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 7698u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 26128u);
    set32(c.r[4], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 7698u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EDD0C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EDD20; } }
L_001EDD0C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 72u));
    st16((c.r[16].w[0] + 7698u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDD60; } }
L_001EDD20:
    mmi::mult(c, 0, c.r[5].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[14] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = ld32((c.r[16].w[0] + 136u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[2], c.r[3].w[0] + c.r[30].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD50u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001EDD50u) [[unlikely]] return; }
L_001EDD50:
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDD60; } }
L_001EDD5C:
    st16((c.r[16].w[0] + 7698u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001EDD60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDDE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD78u);  if (depth < kMaxDepth) unit_002F(c, 126u, depth + 1u); else { c.pc = 0x001BD420u; return; } if (c.pc != 0x001EDD78u) [[unlikely]] return; }
L_001EDD78:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], 0u - 1u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EDDBC; } }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDDE0; } }
L_001EDDBC:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDE0u);  if (depth < kMaxDepth) unit_002F(c, 158u, depth + 1u); else { c.pc = 0x001BDBB0u; return; } if (c.pc != 0x001EDDE0u) [[unlikely]] return; }
L_001EDDE0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDE04; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDFCu);  if (depth < kMaxDepth) unit_0070(c, 134u, depth + 1u); else { c.pc = 0x002C1948u; return; } if (c.pc != 0x001EDDFCu) [[unlikely]] return; }
L_001EDDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDE08; } }
L_001EDE04:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 1;
L_001EDE08:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[23].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED8A0u | kUnwind; return; } goto L_001ED8A0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE34u);  if (depth < kMaxDepth) unit_007C(c, 75u, depth + 1u); else { c.pc = 0x002F12C0u; return; } if (c.pc != 0x001EDE34u) [[unlikely]] return; }
L_001EDE34:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE40u);  if (depth < kMaxDepth) unit_006D(c, 107u, depth + 1u); else { c.pc = 0x002B6D10u; return; } if (c.pc != 0x001EDE40u) [[unlikely]] return; }
L_001EDE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE48u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001EDE48u) [[unlikely]] return; }
L_001EDE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE58u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001EDE58u) [[unlikely]] return; }
L_001EDE58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE70u);  if (depth < kMaxDepth) unit_0001(c, 362u, depth + 1u); else { c.pc = 0x00106900u; return; } if (c.pc != 0x001EDE70u) [[unlikely]] return; }
L_001EDE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EDF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE88u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001EDE88u) [[unlikely]] return; }
L_001EDE88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE94u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001EDE94u) [[unlikely]] return; }
L_001EDE94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EDF4C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDEB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EDEB8u) [[unlikely]] return; }
L_001EDEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDEC8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001EDEC8u) [[unlikely]] return; }
L_001EDEC8:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDF4C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDEE8u);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x001EDEE8u) [[unlikely]] return; }
L_001EDEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDF4C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[20] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 13248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF18u);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x00143890u; return; } if (c.pc != 0x001EDF18u) [[unlikely]] return; }
L_001EDF18:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF2Cu);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x00143890u; return; } if (c.pc != 0x001EDF2Cu) [[unlikely]] return; }
L_001EDF2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF3Cu);  if (depth < kMaxDepth) unit_0010(c, 186u, depth + 1u); else { c.pc = 0x001425C0u; return; } if (c.pc != 0x001EDF3Cu) [[unlikely]] return; }
L_001EDF3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF4Cu);  if (depth < kMaxDepth) unit_0010(c, 186u, depth + 1u); else { c.pc = 0x001425C0u; return; } if (c.pc != 0x001EDF4Cu) [[unlikely]] return; }
L_001EDF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF54u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x001EDF54u) [[unlikely]] return; }
L_001EDF54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] - 27280u);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EDFA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 10u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EE0B8; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFE0u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001EDFE0u) [[unlikely]] return; }
L_001EDFE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EE234; } }
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE004u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001EE004u) [[unlikely]] return; }
L_001EE004:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = ld32((c.r[18].w[0] + 23812u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = ld32((c.r[16].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 23804u));
    set32(c.r[3], 0u + 16u);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 10900u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 13024u), 0u);
    st32((c.r[16].w[0] + 13032u), 0u);
    st32((c.r[16].w[0] + 7700u), c.r[5].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[3].d[0]);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE054u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001EE054u) [[unlikely]] return; }
L_001EE054:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE080; } }
    c.f[1] = ld32((c.r[18].w[0] + 23812u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0A0; } }
L_001EE080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE08Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001EE08Cu) [[unlikely]] return; }
L_001EE08C:
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0A0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001EE0A0u) [[unlikely]] return; }
L_001EE0A0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0B0u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x001EE0B0u) [[unlikely]] return; }
L_001EE0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE234; } }
L_001EE0B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE0F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 12688u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 25;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0E8u);  if (depth < kMaxDepth) unit_001A(c, 88u, depth + 1u); else { c.pc = 0x00168FF0u; return; } if (c.pc != 0x001EE0E8u) [[unlikely]] return; }
L_001EE0E8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE234; } }
L_001EE0F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 1004u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EE234; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE130u);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x001EE130u) [[unlikely]] return; }
L_001EE130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE234; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13172u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE234; } }
    set32(c.r[4], 0u + 10u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE158u);  if (depth < kMaxDepth) unit_0093(c, 94u, depth + 1u); else { c.pc = 0x0034D360u; return; } if (c.pc != 0x001EE158u) [[unlikely]] return; }
L_001EE158:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = ld32((c.r[18].w[0] + 23808u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 9u);
    st16((c.r[16].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 212u), 0u);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    st64((c.r[16].w[0] + 560u), 0ull);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1A4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001EE1A4u) [[unlikely]] return; }
L_001EE1A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE1E0; } }
    c.f[1] = ld32((c.r[18].w[0] + 23808u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE224; } }
L_001EE1E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1ECu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001EE1ECu) [[unlikely]] return; }
L_001EE1EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 97u);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE200u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001EE200u) [[unlikely]] return; }
L_001EE200:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 9969u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE224u);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x001EE224u) [[unlikely]] return; }
L_001EE224:
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE234u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x001EE234u) [[unlikely]] return; }
L_001EE234:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EE258:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EE294; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], c.r[2].w[0] - 24832u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE29C; } }
L_001EE294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.budget -= 2;
L_001EE29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2A4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EE2A4u) [[unlikely]] return; }
L_001EE2A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EE31C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2BCu);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x001015C0u; return; } if (c.pc != 0x001EE2BCu) [[unlikely]] return; }
L_001EE2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE31C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2D0u);  if (depth < kMaxDepth) unit_0000(c, 138u, depth + 1u); else { c.pc = 0x001015F8u; return; } if (c.pc != 0x001EE2D0u) [[unlikely]] return; }
L_001EE2D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2E0u);  if (depth < kMaxDepth) unit_0000(c, 147u, depth + 1u); else { c.pc = 0x001016E0u; return; } if (c.pc != 0x001EE2E0u) [[unlikely]] return; }
L_001EE2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE31C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2F8u);  if (depth < kMaxDepth) unit_006E(c, 179u, depth + 1u); else { c.pc = 0x002BA768u; return; } if (c.pc != 0x001EE2F8u) [[unlikely]] return; }
L_001EE2F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x443B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE31C; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001EE31C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EE33C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE3EC; } }
L_001EE33C:
    set32(c.r[3], ld32((c.r[16].w[0] + 9848u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EE3B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE364u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001EE364u) [[unlikely]] return; }
L_001EE364:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EE3B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE3B4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EE3B4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EE3A0u) [[unlikely]] return; }
L_001EE3A0:
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001EE3B4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001EE3D4; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001EE3D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EE3E8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001EE3E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EE3EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EE408:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 2712u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[6], 0u - 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    st16((c.r[18].w[0] + 9014u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    set32(c.r[19], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 9016u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[19].w[0] << 2);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 10076u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 44u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE480u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x001EE480u) [[unlikely]] return; }
L_001EE480:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE490u);  if (depth < kMaxDepth) unit_007F(c, 65u, depth + 1u); else { c.pc = 0x002FD680u; return; } if (c.pc != 0x001EE490u) [[unlikely]] return; }
L_001EE490:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10056u)));
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10060u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10058u)));
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EE4D4; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.budget -= 5;
L_001EE4D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4E4u);  if (depth < kMaxDepth) unit_007F(c, 55u, depth + 1u); else { c.pc = 0x002FD230u; return; } if (c.pc != 0x001EE4E4u) [[unlikely]] return; }
L_001EE4E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[20] = c.r[1].w[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE500u);  if (depth < kMaxDepth) unit_007F(c, 74u, depth + 1u); else { c.pc = 0x002FDE20u; return; } if (c.pc != 0x001EE500u) [[unlikely]] return; }
L_001EE500:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] ^ 1ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE514u);  if (depth < kMaxDepth) unit_007F(c, 70u, depth + 1u); else { c.pc = 0x002FDBB8u; return; } if (c.pc != 0x001EE514u) [[unlikely]] return; }
L_001EE514:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE528u);  if (depth < kMaxDepth) unit_007F(c, 78u, depth + 1u); else { c.pc = 0x002FE050u; return; } if (c.pc != 0x001EE528u) [[unlikely]] return; }
L_001EE528:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[20], c.r[29].w[0] + 4u);
    c.f[13] = c.f[20];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE550u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x001EE550u) [[unlikely]] return; }
L_001EE550:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE564u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001EE564u) [[unlikely]] return; }
L_001EE564:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[6], 0u + 1056u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[5], 0u - 2u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[16], 0u - c.r[16].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 12));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[4] = c.r[16].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    st32((c.r[6].w[0]), c.f[1]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE608u);  if (depth < kMaxDepth) unit_007F(c, 82u, depth + 1u); else { c.pc = 0x002FE188u; return; } if (c.pc != 0x001EE608u) [[unlikely]] return; }
L_001EE608:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE618u);  if (depth < kMaxDepth) unit_006F(c, 82u, depth + 1u); else { c.pc = 0x002BD1F8u; return; } if (c.pc != 0x001EE618u) [[unlikely]] return; }
L_001EE618:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 8ull;
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE630u);  if (depth < kMaxDepth) unit_002F(c, 165u, depth + 1u); else { c.pc = 0x001BDF60u; return; } if (c.pc != 0x001EE630u) [[unlikely]] return; }
L_001EE630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE6B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE644u);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C0608u; return; } if (c.pc != 0x001EE644u) [[unlikely]] return; }
L_001EE644:
    c.f[12] = ld32((c.r[29].w[0] + 8u));
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE654u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x001EE654u) [[unlikely]] return; }
L_001EE654:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE668u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001EE668u) [[unlikely]] return; }
L_001EE668:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[18].w[0] + 208u), c.f[0]);
    st32((c.r[18].w[0] + 216u), c.f[1]);
    c.budget -= 20;
L_001EE6B8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001EE6DC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6D0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001EE6D0u) [[unlikely]] return; }
L_001EE6D0:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE6E4; } }
L_001EE6DC:
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_001EE6E4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EE718:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001EE7A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EE7A4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10352u);
    set32(c.r[2], c.r[2].w[0] + 6512u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE758u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001EE758u) [[unlikely]] return; }
L_001EE758:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6152u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE770u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001EE770u) [[unlikely]] return; }
L_001EE770:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10368u);
    set32(c.r[2], c.r[2].w[0] + 6488u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE78Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001EE78Cu) [[unlikely]] return; }
L_001EE78C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6176u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7A4u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001EE7A4u) [[unlikely]] return; }
L_001EE7A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EE7B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7E0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001EE7E0u) [[unlikely]] return; }
L_001EE7E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7F4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001EE7F4u) [[unlikely]] return; }
L_001EE7F4:
    set32(c.r[16], ld32((c.r[17].w[0] + 11264u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 11264u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE804u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001EE804u) [[unlikely]] return; }
L_001EE804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE824; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE82C; } }
L_001EE824:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_001EE82C:
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EE858:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE870u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EE870u) [[unlikely]] return; }
L_001EE870:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE8C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE89C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE8F8; } }
L_001EE89C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE8F8; } }
L_001EE8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8C0u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE8C0u) [[unlikely]] return; }
L_001EE8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE908; } }
L_001EE8C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17312u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8D8u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE8D8u) [[unlikely]] return; }
L_001EE8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE908; } }
L_001EE8E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17308u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8F0u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE8F0u) [[unlikely]] return; }
L_001EE8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE908; } }
L_001EE8F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE908u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE908u) [[unlikely]] return; }
L_001EE908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE910u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EE910u) [[unlikely]] return; }
L_001EE910:
    set32(c.r[17], 0u + 1u);
    st32((c.r[2].w[0] + 144u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE920u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EE920u) [[unlikely]] return; }
L_001EE920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE92Cu);  if (depth < kMaxDepth) unit_003B(c, 206u, depth + 1u); else { c.pc = 0x001EEB48u; return; } if (c.pc != 0x001EE92Cu) [[unlikely]] return; }
L_001EE92C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE944u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EE944u) [[unlikely]] return; }
L_001EE944:
    st32((c.r[2].w[0] + 132u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EE960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE970u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EE970u) [[unlikely]] return; }
L_001EE970:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE9C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE99C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE9F8; } }
L_001EE99C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE9F8; } }
L_001EE9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9C0u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE9C0u) [[unlikely]] return; }
L_001EE9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEA08; } }
L_001EE9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17312u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9D8u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE9D8u) [[unlikely]] return; }
L_001EE9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEA08; } }
L_001EE9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17308u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9F0u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EE9F0u) [[unlikely]] return; }
L_001EE9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEA08; } }
L_001EE9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA08u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001EEA08u) [[unlikely]] return; }
L_001EEA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA10u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEA10u) [[unlikely]] return; }
L_001EEA10:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA1Cu);  if (depth < kMaxDepth) unit_003A(c, 124u, depth + 1u); else { c.pc = 0x001E8E50u; return; } if (c.pc != 0x001EEA1Cu) [[unlikely]] return; }
L_001EEA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA24u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEA24u) [[unlikely]] return; }
L_001EEA24:
    c.f[12] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA30u);  if (depth < kMaxDepth) unit_003A(c, 147u, depth + 1u); else { c.pc = 0x001E9100u; return; } if (c.pc != 0x001EEA30u) [[unlikely]] return; }
L_001EEA30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA50u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEA50u) [[unlikely]] return; }
L_001EEA50:
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEA68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA7Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEA7Cu) [[unlikely]] return; }
L_001EEA7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA88u);  if (depth < kMaxDepth) unit_0036(c, 223u, depth + 1u); else { c.pc = 0x001D9BB0u; return; } if (c.pc != 0x001EEA88u) [[unlikely]] return; }
L_001EEA88:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAB0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEAB0u) [[unlikely]] return; }
L_001EEAB0:
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEAC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAE0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEAE0u) [[unlikely]] return; }
L_001EEAE0:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAF0u);  if (depth < kMaxDepth) unit_003A(c, 124u, depth + 1u); else { c.pc = 0x001E8E50u; return; } if (c.pc != 0x001EEAF0u) [[unlikely]] return; }
L_001EEAF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEB08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB20u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEB20u) [[unlikely]] return; }
L_001EEB20:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB30u);  if (depth < kMaxDepth) unit_003A(c, 124u, depth + 1u); else { c.pc = 0x001E8E50u; return; } if (c.pc != 0x001EEB30u) [[unlikely]] return; }
L_001EEB30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEB48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB5Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEB5Cu) [[unlikely]] return; }
L_001EEB5C:
    set32(c.r[16], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB68u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEB68u) [[unlikely]] return; }
L_001EEB68:
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEB88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBA4u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001EEBA4u) [[unlikely]] return; }
L_001EEBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEC40; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBC0u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EEBC0u) [[unlikely]] return; }
L_001EEBC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBD0u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x001EEBD0u) [[unlikely]] return; }
L_001EEBD0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 920u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 920u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EEC14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBFCu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001EEBFCu) [[unlikely]] return; }
L_001EEBFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC0Cu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001EEC0Cu) [[unlikely]] return; }
L_001EEC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEC40; } }
L_001EEC14:
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC30u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001EEC30u) [[unlikely]] return; }
L_001EEC30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC40u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001EEC40u) [[unlikely]] return; }
L_001EEC40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC78u);  if (depth < kMaxDepth) unit_003A(c, 135u, depth + 1u); else { c.pc = 0x001E8FA8u; return; } if (c.pc != 0x001EEC78u) [[unlikely]] return; }
L_001EEC78:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC90u);  if (depth < kMaxDepth) unit_003A(c, 147u, depth + 1u); else { c.pc = 0x001E9100u; return; } if (c.pc != 0x001EEC90u) [[unlikely]] return; }
L_001EEC90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EECA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECC0u);  if (depth < kMaxDepth) unit_003A(c, 135u, depth + 1u); else { c.pc = 0x001E8FA8u; return; } if (c.pc != 0x001EECC0u) [[unlikely]] return; }
L_001EECC0:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECD8u);  if (depth < kMaxDepth) unit_003A(c, 147u, depth + 1u); else { c.pc = 0x001E9100u; return; } if (c.pc != 0x001EECD8u) [[unlikely]] return; }
L_001EECD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EECF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED00u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EED00u) [[unlikely]] return; }
L_001EED00:
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EED18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED30u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EED30u) [[unlikely]] return; }
L_001EED30:
    st32((c.r[2].w[0] + 160u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EED48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED58u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EED58u) [[unlikely]] return; }
L_001EED58:
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EED70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED94u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EED94u) [[unlikely]] return; }
L_001EED94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDACu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEDACu) [[unlikely]] return; }
L_001EEDAC:
    set32(c.r[3], 0u + 15u);
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEDE8; } }
L_001EEDBC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_001EEDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDCCu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEDCCu) [[unlikely]] return; }
L_001EEDCC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEDE8; } }
L_001EEDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDE4u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEDE4u) [[unlikely]] return; }
L_001EEDE4:
    st32((c.r[2].w[0] + 156u), c.r[16].w[0]);
    c.budget -= 1;
L_001EEDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDF0u);  if (depth < kMaxDepth) unit_003B(c, 249u, depth + 1u); else { c.pc = 0x001EEF70u; return; } if (c.pc != 0x001EEDF0u) [[unlikely]] return; }
L_001EEDF0:
    st32((c.r[17].w[0] + 936u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE2Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEE2Cu) [[unlikely]] return; }
L_001EEE2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE44u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EEE44u) [[unlikely]] return; }
L_001EEE44:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEE6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE5Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEE5Cu) [[unlikely]] return; }
L_001EEE5C:
    set32(c.r[3], 0u + 15u);
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEE98; } }
L_001EEE6C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_001EEE8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE7Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEE7Cu) [[unlikely]] return; }
L_001EEE7C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEE98; } }
L_001EEE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE94u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEE94u) [[unlikely]] return; }
L_001EEE94:
    st32((c.r[2].w[0] + 156u), c.r[16].w[0]);
    c.budget -= 1;
L_001EEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEA0u);  if (depth < kMaxDepth) unit_003B(c, 249u, depth + 1u); else { c.pc = 0x001EEF70u; return; } if (c.pc != 0x001EEEA0u) [[unlikely]] return; }
L_001EEEA0:
    st32((c.r[17].w[0] + 936u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEDCu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEEDCu) [[unlikely]] return; }
L_001EEEDC:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[16], c.r[3].w[0] - c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEF4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EEEF4u) [[unlikely]] return; }
L_001EEEF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF0Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEF0Cu) [[unlikely]] return; }
L_001EEF0C:
    set32(c.r[3], 0u + 15u);
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF48; } }
L_001EEF1C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_001EEF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF2Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEF2Cu) [[unlikely]] return; }
L_001EEF2C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF48; } }
L_001EEF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF44u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEF44u) [[unlikely]] return; }
L_001EEF44:
    st32((c.r[2].w[0] + 156u), c.r[16].w[0]);
    c.budget -= 1;
L_001EEF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF50u);  if (depth < kMaxDepth) unit_003B(c, 249u, depth + 1u); else { c.pc = 0x001EEF70u; return; } if (c.pc != 0x001EEF50u) [[unlikely]] return; }
L_001EEF50:
    st32((c.r[17].w[0] + 936u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF84u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEF84u) [[unlikely]] return; }
L_001EEF84:
    set32(c.r[16], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF90u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001EEF90u) [[unlikely]] return; }
L_001EEF90:
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFC8u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EEFC8u) [[unlikely]] return; }
L_001EEFC8:
    set32(c.r[2], ld32((c.r[2].w[0] + 932u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EEFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EF000u) [[unlikely]] return; }
L_001EF000:
    set32(c.r[4], ld32((c.r[2].w[0] + 932u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF010u);  if (depth < kMaxDepth) unit_003A(c, 164u, depth + 1u); else { c.pc = 0x001E92D8u; return; } if (c.pc != 0x001EF010u) [[unlikely]] return; }
L_001EF010:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF028:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 6;
L_001EF040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF048u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001EF048u) [[unlikely]] return; }
L_001EF048:
    set32(c.r[4], ld32((c.r[2].w[0] + 932u)));
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF058u);  if (depth < kMaxDepth) unit_003A(c, 164u, depth + 1u); else { c.pc = 0x001E92D8u; return; } if (c.pc != 0x001EF058u) [[unlikely]] return; }
L_001EF058:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF070:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF088:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.f[20] = c.f[12];
    c.f[12] = ld32((c.r[6].w[0]));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0CCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EF0CCu) [[unlikely]] return; }
L_001EF0CC:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0E0u);  if (depth < kMaxDepth) unit_008A(c, 188u, depth + 1u); else { c.pc = 0x0032AAC8u; return; } if (c.pc != 0x001EF0E0u) [[unlikely]] return; }
L_001EF0E0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0ECu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EF0ECu) [[unlikely]] return; }
L_001EF0EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF118u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EF118u) [[unlikely]] return; }
L_001EF118:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF12Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x001EF12Cu) [[unlikely]] return; }
L_001EF12C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 4;
L_001EF13C:
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF158:
    c.f[1] = c.f[12] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::sub(c.f[1], c.f[13]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF188; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF1C8; } }
L_001EF188:
    c.f[1] = fp::sub(c.f[1], c.f[14]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF1C8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.f[12] = c.f[14];
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF1C8; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_001EF1C8:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF1D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    st32((c.r[16].w[0] + 11324u), 0u);
    st32((c.r[16].w[0] + 11320u), 0u);
    st32((c.r[16].w[0] + 11328u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF20Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001EF20Cu) [[unlikely]] return; }
L_001EF20C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF250; } }
    set32(c.r[16], c.r[16].w[0] + 336u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF224u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EF224u) [[unlikely]] return; }
L_001EF224:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF250u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EF250u) [[unlikely]] return; }
L_001EF250:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF268:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0] + 32u), c.f[22]);
    st32((c.r[29].w[0] + 24u), c.f[21]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 40u), c.f[23]);
    c.f[21] = c.f[13];
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[23] = c.f[15];
    c.f[20] = c.f[14];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2A0u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001EF2A0u) [[unlikely]] return; }
L_001EF2A0:
    c.f[2] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
L_001EF2B8:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF2D4; } }
    c.f[0] = fp::mul(c.f[2], c.f[23]);
    c.f[0] = fp::add(c.f[22], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF2D8; } }
L_001EF2D4:
    c.f[0] = c.f[21];
    c.budget -= 1;
L_001EF2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 40u));
    c.f[22] = ld32((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF2F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 7700u)));
    set32(c.r[2], c.r[3].w[0] - 106u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF384; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EF390; } }
L_001EF384:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF3BC; } }
L_001EF390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3A0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001EF3A0u) [[unlikely]] return; }
L_001EF3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF3B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF3BC; } }
L_001EF3B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EF3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF3D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[20] = 0u;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[12] = c.f[20];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[13] = c.f[20];
    c.f[14] = c.f[21];
    c.f[15] = c.f[21];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF41Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EF41Cu) [[unlikely]] return; }
L_001EF41C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF42Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001EF42Cu) [[unlikely]] return; }
L_001EF42C:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF44Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EF44Cu) [[unlikely]] return; }
L_001EF44C:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 11568u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF468u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EF468u) [[unlikely]] return; }
L_001EF468:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[16].w[0] + 400u);
    c.budget -= 4;
L_001EF478:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF484u);  if (depth < kMaxDepth) unit_008A(c, 9u, depth + 1u); else { c.pc = 0x00328370u; return; } if (c.pc != 0x001EF484u) [[unlikely]] return; }
L_001EF484:
    c.f[14] = ld32((c.r[16].w[0] + 11560u));
    c.f[15] = c.f[21];
    c.f[12] = ld32((c.r[16].w[0] + 11552u));
    set32(c.r[4], c.r[16].w[0] + 464u);
    c.f[13] = ld32((c.r[16].w[0] + 11556u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4A0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EF4A0u) [[unlikely]] return; }
L_001EF4A0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF4C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF520; } }
    c.r[2].d[0] = c.r[3].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF4F8; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF530; } }
L_001EF4F8:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EF530; } }
    c.f[0] = ld32((c.r[4].w[0] + 11304u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[0] = ld32((c.r[2].w[0] - 7144u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[0] = ld32((c.r[2].w[0] - 7148u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF530:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 56u), c.f[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF56Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001EF56Cu) [[unlikely]] return; }
L_001EF56C:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF584u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001EF584u) [[unlikely]] return; }
L_001EF584:
    c.f[0] = 0u;
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF5D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF604; } }
L_001EF5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF604; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
L_001EF604:
    c.f[0] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF754; } }
L_001EF610:
    c.f[20] = ld32((c.r[16].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF63C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF65C; } }
L_001EF63C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF65C; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_001EF65C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF68C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF6AC; } }
L_001EF68C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF6AC; } }
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_001EF6AC:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6BCu);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001EF6BCu) [[unlikely]] return; }
L_001EF6BC:
    c.f[12] = c.f[0];
    c.f[0] = c.f[12] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF6E0; } }
    c.f[20] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF6F0; } }
L_001EF6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6E8u);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BFD88u; return; } if (c.pc != 0x001EF6E8u) [[unlikely]] return; }
L_001EF6E8:
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_001EF6F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF724; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF750; } }
L_001EF724:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF750; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_001EF750:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001EF754:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF778:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7A0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001EF7A0u) [[unlikely]] return; }
L_001EF7A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 12u, c.f[12], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7BCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EF7BCu) [[unlikely]] return; }
L_001EF7BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF7D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 148u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EF804; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 23756u));
    st16((c.r[4].w[0] + 11332u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF81C; } }
L_001EF804:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 11332u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 11332u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001EF81C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 11332u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EF81C:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 149u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF844; } }
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF844; } }
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EF850; } }
L_001EF844:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF854; } }
L_001EF850:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EF854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF890; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF894; } }
L_001EF890:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EF894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF8D8; } }
    set32(c.r[4], c.r[6].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF8C8; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8CC; } }
L_001EF8C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EF8CC:
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8D8u);  if (depth < kMaxDepth) unit_008F(c, 300u, depth + 1u); else { c.pc = 0x0033EA58u; return; } if (c.pc != 0x001EF8D8u) [[unlikely]] return; }
L_001EF8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF8E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[6].w[0] << 16);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 11376u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF92Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EF92Cu) [[unlikely]] return; }
L_001EF92C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 11392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF93Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001EF93Cu) [[unlikely]] return; }
L_001EF93C:
    st16((c.r[16].w[0] + 11366u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[16].w[0] + 11364u), static_cast<std::uint16_t>(c.r[17].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11366u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFA44; } }
    set32(c.r[16], c.r[17].w[0] + 11392u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 11376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF998u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001EF998u) [[unlikely]] return; }
L_001EF998:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11366u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11364u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9D4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EF9D4u) [[unlikely]] return; }
L_001EF9D4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9E8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001EF9E8u) [[unlikely]] return; }
L_001EF9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA0Cu);  if (depth < kMaxDepth) unit_0088(c, 328u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x001EFA0Cu) [[unlikely]] return; }
L_001EFA0C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 11366u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 11366u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EFA44; } }
    st16((c.r[17].w[0] + 11364u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0] + 11392u));
    c.f[13] = ld32((c.r[5].w[0] + 11396u));
    c.f[14] = ld32((c.r[5].w[0] + 11400u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA44u);  if (depth < kMaxDepth) unit_0088(c, 328u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x001EFA44u) [[unlikely]] return; }
L_001EFA44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EFA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA94u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x001EFA94u) [[unlikely]] return; }
L_001EFA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFAAC; } }
L_001EFA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFAB0; } }
L_001EFAAC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001EFAB0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EFADC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFAC4u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x001EFAC4u) [[unlikely]] return; }
L_001EFAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFADC; } }
    st32((c.r[16].w[0] + 13032u), 0u);
    st32((c.r[16].w[0] + 13024u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EFB44; } }
L_001EFADC:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 198u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[12] = ld32((c.r[2].w[0] + 23764u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = ld32((c.r[3].w[0] + 23760u));
    set32(c.r[16], c.r[16].w[0] + 13024u);
    c.f[1] = ld32((c.r[4].w[0] + 23772u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB30u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EFB30u) [[unlikely]] return; }
L_001EFB30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB44u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001EFB44u) [[unlikely]] return; }
L_001EFB44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFB60:
    set32(c.r[2], ld32((c.r[4].w[0] + 13192u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFB78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 6944u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1536u);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 972u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EFC4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 13192u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EFC4C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EFC4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFBDCu);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001EFBDCu) [[unlikely]] return; }
L_001EFBDC:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFBE8u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001EFBE8u) [[unlikely]] return; }
L_001EFBE8:
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0]), c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC28u);  if (depth < kMaxDepth) unit_008B(c, 165u, depth + 1u); else { c.pc = 0x0032D470u; return; } if (c.pc != 0x001EFC28u) [[unlikely]] return; }
L_001EFC28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 148u), c.f[0]);
    c.budget -= 9;
L_001EFC4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFCDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EFCDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFCDC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8940u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFCDC; } }
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EFCDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 10056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCD8u);  if (depth < kMaxDepth) unit_006F(c, 39u, depth + 1u); else { c.pc = 0x002BC898u; return; } if (c.pc != 0x001EFCD8u) [[unlikely]] return; }
L_001EFCD8:
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EFCDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFCF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 11340u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 11340u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001EFD08; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 11340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EFD08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFD10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23784u)));
    set32(c.r[16], c.r[2].w[0] + 23784u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001EFD90; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], 0u - 1u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[18], 0u + 32u);
    c.budget -= 5;
L_001EFD58:
    set32(c.r[4], ld32((c.r[20].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD68u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x001EFD68u) [[unlikely]] return; }
L_001EFD68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001EFD80; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 21472u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
L_001EFD80:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EFD58u | kUnwind; return; } goto L_001EFD58; } }
L_001EFD90:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFDB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23784u)));
    set32(c.r[16], c.r[2].w[0] + 23784u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001EFE30; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], 0u - 1u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 4;
L_001EFDF8:
    set32(c.r[4], ld32((c.r[19].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE08u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x001EFE08u) [[unlikely]] return; }
L_001EFE08:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001EFE20; } }
    set32(c.r[2], ld32((c.r[18].w[0] - 21472u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001EFE20:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EFDF8u | kUnwind; return; } goto L_001EFDF8; } }
L_001EFE30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFE50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 23788u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFE68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 23788u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFE80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23788u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFE90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 23796u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EFEC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFEB8; } }
    st32((c.r[5].w[0] + 23796u), 0u);
    c.budget -= 1;
L_001EFEB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFEC4:
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[4], c.r[2].w[0] - 142u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFEF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6192u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001EC000u < 16384u) { entry = entries_003B[(t - 0x001EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001EFEF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 10104u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EFF3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EFF3C; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF3Cu);  if (depth < kMaxDepth) unit_001A(c, 256u, depth + 1u); else { c.pc = 0x0016B138u; return; } if (c.pc != 0x001EFF3Cu) [[unlikely]] return; }
L_001EFF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFF50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
L_001EFF78:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[19].w[0] - 14960u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF90u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001EFF90u) [[unlikely]] return; }
L_001EFF90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 18848u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFA4u);  if (depth < kMaxDepth) unit_0006(c, 77u, depth + 1u); else { c.pc = 0x001189D0u; return; } if (c.pc != 0x001EFFA4u) [[unlikely]] return; }
L_001EFFA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFFD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFFD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EFFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFD4u);  if (depth < kMaxDepth) unit_006F(c, 115u, depth + 1u); else { c.pc = 0x002BDBF8u; return; } if (c.pc != 0x001EFFD4u) [[unlikely]] return; }
L_001EFFD4:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EFF78u | kUnwind; return; } goto L_001EFF78; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
