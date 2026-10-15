#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DF[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118,
    0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0,
    269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0,
    285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0,
    301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0,
    317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0,
    333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0,
    349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0,
    365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0,
    381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0,
    397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0,
    413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0,
    429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0,
};

void unit_00DF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0047C000;
    case 2u: goto L_0047C008;
    case 3u: goto L_0047C00C;
    case 4u: goto L_0047C040;
    case 5u: goto L_0047C0EC;
    case 6u: goto L_0047C198;
    case 7u: goto L_0047C23C;
    case 8u: goto L_0047C2A8;
    case 9u: goto L_0047C2F0;
    case 10u: goto L_0047C3E0;
    case 11u: goto L_0047C638;
    case 12u: goto L_0047C6C0;
    case 13u: goto L_0047C6E8;
    case 14u: goto L_0047C6F8;
    case 15u: goto L_0047C710;
    case 16u: goto L_0047C780;
    case 17u: goto L_0047C798;
    case 18u: goto L_0047C7C0;
    case 19u: goto L_0047C874;
    case 20u: goto L_0047C8DC;
    case 21u: goto L_0047C9B4;
    case 22u: goto L_0047C9D8;
    case 23u: goto L_0047C9FC;
    case 24u: goto L_0047CA94;
    case 25u: goto L_0047CA9C;
    case 26u: goto L_0047CC80;
    case 27u: goto L_0047CCB8;
    case 28u: goto L_0047CCD0;
    case 29u: goto L_0047CCF8;
    case 30u: goto L_0047CD34;
    case 31u: goto L_0047CD40;
    case 32u: goto L_0047CD58;
    case 33u: goto L_0047CD80;
    case 34u: goto L_0047CD9C;
    case 35u: goto L_0047CDE0;
    case 36u: goto L_0047CE18;
    case 37u: goto L_0047CE40;
    case 38u: goto L_0047CE7C;
    case 39u: goto L_0047CEC4;
    case 40u: goto L_0047CEE0;
    case 41u: goto L_0047CEF0;
    case 42u: goto L_0047CF68;
    case 43u: goto L_0047CFE0;
    case 44u: goto L_0047CFE8;
    case 45u: goto L_0047D010;
    case 46u: goto L_0047D060;
    case 47u: goto L_0047D114;
    case 48u: goto L_0047D12C;
    case 49u: goto L_0047D138;
    case 50u: goto L_0047D178;
    case 51u: goto L_0047D240;
    case 52u: goto L_0047D268;
    case 53u: goto L_0047D278;
    case 54u: goto L_0047D298;
    case 55u: goto L_0047D2A8;
    case 56u: goto L_0047D2B0;
    case 57u: goto L_0047D2C8;
    case 58u: goto L_0047D2D8;
    case 59u: goto L_0047D340;
    case 60u: goto L_0047D39C;
    case 61u: goto L_0047D3BC;
    case 62u: goto L_0047D3C8;
    case 63u: goto L_0047D420;
    case 64u: goto L_0047D42C;
    case 65u: goto L_0047D48C;
    case 66u: goto L_0047D498;
    case 67u: goto L_0047D4E4;
    case 68u: goto L_0047D510;
    case 69u: goto L_0047D51C;
    case 70u: goto L_0047D5B8;
    case 71u: goto L_0047D65C;
    case 72u: goto L_0047D66C;
    case 73u: goto L_0047D678;
    case 74u: goto L_0047D6D0;
    case 75u: goto L_0047D6F8;
    case 76u: goto L_0047D748;
    case 77u: goto L_0047D778;
    case 78u: goto L_0047D848;
    case 79u: goto L_0047D8D8;
    case 80u: goto L_0047DA00;
    case 81u: goto L_0047DA88;
    case 82u: goto L_0047DA94;
    case 83u: goto L_0047DAAC;
    case 84u: goto L_0047DAD8;
    case 85u: goto L_0047DB44;
    case 86u: goto L_0047DB68;
    case 87u: goto L_0047DB80;
    case 88u: goto L_0047DBA4;
    case 89u: goto L_0047DBCC;
    case 90u: goto L_0047DBD8;
    case 91u: goto L_0047DBE8;
    case 92u: goto L_0047DC10;
    case 93u: goto L_0047DC20;
    case 94u: goto L_0047DC2C;
    case 95u: goto L_0047DC48;
    case 96u: goto L_0047DC6C;
    case 97u: goto L_0047DC94;
    case 98u: goto L_0047DCA0;
    case 99u: goto L_0047DCAC;
    case 100u: goto L_0047DCC4;
    case 101u: goto L_0047DCD0;
    case 102u: goto L_0047DCDC;
    case 103u: goto L_0047DCEC;
    case 104u: goto L_0047DD08;
    case 105u: goto L_0047DD3C;
    case 106u: goto L_0047DD64;
    case 107u: goto L_0047DD70;
    case 108u: goto L_0047DD94;
    case 109u: goto L_0047DDA0;
    case 110u: goto L_0047DDC8;
    case 111u: goto L_0047DDEC;
    case 112u: goto L_0047DDF8;
    case 113u: goto L_0047DE1C;
    case 114u: goto L_0047DE28;
    case 115u: goto L_0047DE4C;
    case 116u: goto L_0047DE58;
    case 117u: goto L_0047DE64;
    case 118u: goto L_0047DE7C;
    case 119u: goto L_0047DE88;
    case 120u: goto L_0047DE9C;
    case 121u: goto L_0047DEA8;
    case 122u: goto L_0047DEB4;
    case 123u: goto L_0047DEDC;
    case 124u: goto L_0047DEEC;
    case 125u: goto L_0047DEF8;
    case 126u: goto L_0047DF20;
    case 127u: goto L_0047DF2C;
    case 128u: goto L_0047DF38;
    case 129u: goto L_0047DF44;
    case 130u: goto L_0047DF74;
    case 131u: goto L_0047DF84;
    case 132u: goto L_0047DF90;
    case 133u: goto L_0047DFB8;
    case 134u: goto L_0047DFC4;
    case 135u: goto L_0047DFD0;
    case 136u: goto L_0047DFE0;
    case 137u: goto L_0047DFEC;
    case 138u: goto L_0047DFFC;
    case 139u: goto L_0047E030;
    case 140u: goto L_0047E0A0;
    case 141u: goto L_0047E0AC;
    case 142u: goto L_0047E0C4;
    case 143u: goto L_0047E118;
    case 144u: goto L_0047E13C;
    case 145u: goto L_0047E164;
    case 146u: goto L_0047E18C;
    case 147u: goto L_0047E198;
    case 148u: goto L_0047E1BC;
    case 149u: goto L_0047E1D8;
    case 150u: goto L_0047E1F0;
    case 151u: goto L_0047E214;
    case 152u: goto L_0047E248;
    case 153u: goto L_0047E270;
    case 154u: goto L_0047E2A8;
    case 155u: goto L_0047E2D4;
    case 156u: goto L_0047E308;
    case 157u: goto L_0047E334;
    case 158u: goto L_0047E368;
    case 159u: goto L_0047E38C;
    case 160u: goto L_0047E3C8;
    case 161u: goto L_0047E3F4;
    case 162u: goto L_0047E428;
    case 163u: goto L_0047E458;
    case 164u: goto L_0047E494;
    case 165u: goto L_0047E4B8;
    case 166u: goto L_0047E4F0;
    case 167u: goto L_0047E504;
    case 168u: goto L_0047E538;
    case 169u: goto L_0047E590;
    case 170u: goto L_0047E5A0;
    case 171u: goto L_0047E5E0;
    case 172u: goto L_0047E5F4;
    case 173u: goto L_0047E608;
    case 174u: goto L_0047E630;
    case 175u: goto L_0047E668;
    case 176u: goto L_0047E678;
    case 177u: goto L_0047E688;
    case 178u: goto L_0047E6A8;
    case 179u: goto L_0047E6E8;
    case 180u: goto L_0047E728;
    case 181u: goto L_0047E738;
    case 182u: goto L_0047E750;
    case 183u: goto L_0047E778;
    case 184u: goto L_0047E7C0;
    case 185u: goto L_0047E814;
    case 186u: goto L_0047E844;
    case 187u: goto L_0047E8A0;
    case 188u: goto L_0047E958;
    case 189u: goto L_0047E9D8;
    case 190u: goto L_0047EA04;
    case 191u: goto L_0047EA48;
    case 192u: goto L_0047EA80;
    case 193u: goto L_0047EAB8;
    case 194u: goto L_0047EAF0;
    case 195u: goto L_0047EB5C;
    case 196u: goto L_0047EB78;
    case 197u: goto L_0047EB84;
    case 198u: goto L_0047EBC0;
    case 199u: goto L_0047EC20;
    case 200u: goto L_0047EC44;
    case 201u: goto L_0047EC68;
    case 202u: goto L_0047EC80;
    case 203u: goto L_0047ECA8;
    case 204u: goto L_0047ECC4;
    case 205u: goto L_0047ECF8;
    case 206u: goto L_0047ED80;
    case 207u: goto L_0047EDA0;
    case 208u: goto L_0047EDB8;
    case 209u: goto L_0047EDC4;
    case 210u: goto L_0047EE34;
    case 211u: goto L_0047EE40;
    case 212u: goto L_0047EE58;
    case 213u: goto L_0047EE78;
    case 214u: goto L_0047EEE0;
    case 215u: goto L_0047EF08;
    case 216u: goto L_0047EF48;
    case 217u: goto L_0047EF68;
    case 218u: goto L_0047EFD8;
    case 219u: goto L_0047F038;
    case 220u: goto L_0047F080;
    case 221u: goto L_0047F0CC;
    case 222u: goto L_0047F0F4;
    case 223u: goto L_0047F108;
    case 224u: goto L_0047F120;
    case 225u: goto L_0047F144;
    case 226u: goto L_0047F154;
    case 227u: goto L_0047F180;
    case 228u: goto L_0047F1D0;
    case 229u: goto L_0047F1F0;
    case 230u: goto L_0047F208;
    case 231u: goto L_0047F248;
    case 232u: goto L_0047F280;
    case 233u: goto L_0047F2AC;
    case 234u: goto L_0047F2D8;
    case 235u: goto L_0047F2F4;
    case 236u: goto L_0047F304;
    case 237u: goto L_0047F318;
    case 238u: goto L_0047F340;
    case 239u: goto L_0047F370;
    case 240u: goto L_0047F384;
    case 241u: goto L_0047F3BC;
    case 242u: goto L_0047F3F0;
    case 243u: goto L_0047F448;
    case 244u: goto L_0047F490;
    case 245u: goto L_0047F4D0;
    case 246u: goto L_0047F598;
    case 247u: goto L_0047F5D8;
    case 248u: goto L_0047F730;
    case 249u: goto L_0047F764;
    case 250u: goto L_0047F7CC;
    case 251u: goto L_0047F830;
    case 252u: goto L_0047F878;
    case 253u: goto L_0047F8B0;
    case 254u: goto L_0047F8D4;
    case 255u: goto L_0047F8E4;
    case 256u: goto L_0047F958;
    case 257u: goto L_0047F970;
    case 258u: goto L_0047F978;
    case 259u: goto L_0047F994;
    case 260u: goto L_0047FA20;
    case 261u: goto L_0047FA40;
    case 262u: goto L_0047FA48;
    case 263u: goto L_0047FA50;
    case 264u: goto L_0047FA58;
    case 265u: goto L_0047FA60;
    case 266u: goto L_0047FA68;
    case 267u: goto L_0047FA70;
    case 268u: goto L_0047FA78;
    case 269u: goto L_0047FA80;
    case 270u: goto L_0047FA88;
    case 271u: goto L_0047FA90;
    case 272u: goto L_0047FA98;
    case 273u: goto L_0047FAA0;
    case 274u: goto L_0047FAA8;
    case 275u: goto L_0047FAB0;
    case 276u: goto L_0047FAB8;
    case 277u: goto L_0047FAC0;
    case 278u: goto L_0047FAC8;
    case 279u: goto L_0047FAD0;
    case 280u: goto L_0047FAD8;
    case 281u: goto L_0047FAE0;
    case 282u: goto L_0047FAE8;
    case 283u: goto L_0047FAF0;
    case 284u: goto L_0047FAF8;
    case 285u: goto L_0047FB00;
    case 286u: goto L_0047FB08;
    case 287u: goto L_0047FB10;
    case 288u: goto L_0047FB18;
    case 289u: goto L_0047FB20;
    case 290u: goto L_0047FB28;
    case 291u: goto L_0047FB30;
    case 292u: goto L_0047FB38;
    case 293u: goto L_0047FB40;
    case 294u: goto L_0047FB48;
    case 295u: goto L_0047FB50;
    case 296u: goto L_0047FB58;
    case 297u: goto L_0047FB60;
    case 298u: goto L_0047FB68;
    case 299u: goto L_0047FB70;
    case 300u: goto L_0047FB78;
    case 301u: goto L_0047FB80;
    case 302u: goto L_0047FB88;
    case 303u: goto L_0047FB90;
    case 304u: goto L_0047FB98;
    case 305u: goto L_0047FBA0;
    case 306u: goto L_0047FBA8;
    case 307u: goto L_0047FBB0;
    case 308u: goto L_0047FBB8;
    case 309u: goto L_0047FBC0;
    case 310u: goto L_0047FBC8;
    case 311u: goto L_0047FBD0;
    case 312u: goto L_0047FBD8;
    case 313u: goto L_0047FBE0;
    case 314u: goto L_0047FBE8;
    case 315u: goto L_0047FBF0;
    case 316u: goto L_0047FBF8;
    case 317u: goto L_0047FC00;
    case 318u: goto L_0047FC08;
    case 319u: goto L_0047FC10;
    case 320u: goto L_0047FC18;
    case 321u: goto L_0047FC20;
    case 322u: goto L_0047FC28;
    case 323u: goto L_0047FC30;
    case 324u: goto L_0047FC38;
    case 325u: goto L_0047FC40;
    case 326u: goto L_0047FC48;
    case 327u: goto L_0047FC50;
    case 328u: goto L_0047FC58;
    case 329u: goto L_0047FC60;
    case 330u: goto L_0047FC68;
    case 331u: goto L_0047FC70;
    case 332u: goto L_0047FC78;
    case 333u: goto L_0047FC80;
    case 334u: goto L_0047FC88;
    case 335u: goto L_0047FC90;
    case 336u: goto L_0047FC98;
    case 337u: goto L_0047FCA0;
    case 338u: goto L_0047FCA8;
    case 339u: goto L_0047FCB0;
    case 340u: goto L_0047FCB8;
    case 341u: goto L_0047FCC0;
    case 342u: goto L_0047FCC8;
    case 343u: goto L_0047FCD0;
    case 344u: goto L_0047FCD8;
    case 345u: goto L_0047FCE0;
    case 346u: goto L_0047FCE8;
    case 347u: goto L_0047FCF0;
    case 348u: goto L_0047FCF8;
    case 349u: goto L_0047FD00;
    case 350u: goto L_0047FD08;
    case 351u: goto L_0047FD10;
    case 352u: goto L_0047FD18;
    case 353u: goto L_0047FD20;
    case 354u: goto L_0047FD28;
    case 355u: goto L_0047FD30;
    case 356u: goto L_0047FD38;
    case 357u: goto L_0047FD40;
    case 358u: goto L_0047FD48;
    case 359u: goto L_0047FD50;
    case 360u: goto L_0047FD58;
    case 361u: goto L_0047FD60;
    case 362u: goto L_0047FD68;
    case 363u: goto L_0047FD70;
    case 364u: goto L_0047FD78;
    case 365u: goto L_0047FD80;
    case 366u: goto L_0047FD88;
    case 367u: goto L_0047FD90;
    case 368u: goto L_0047FD98;
    case 369u: goto L_0047FDA0;
    case 370u: goto L_0047FDA8;
    case 371u: goto L_0047FDB0;
    case 372u: goto L_0047FDB8;
    case 373u: goto L_0047FDC0;
    case 374u: goto L_0047FDC8;
    case 375u: goto L_0047FDD0;
    case 376u: goto L_0047FDD8;
    case 377u: goto L_0047FDE0;
    case 378u: goto L_0047FDE8;
    case 379u: goto L_0047FDF0;
    case 380u: goto L_0047FDF8;
    case 381u: goto L_0047FE00;
    case 382u: goto L_0047FE08;
    case 383u: goto L_0047FE10;
    case 384u: goto L_0047FE18;
    case 385u: goto L_0047FE20;
    case 386u: goto L_0047FE28;
    case 387u: goto L_0047FE30;
    case 388u: goto L_0047FE38;
    case 389u: goto L_0047FE40;
    case 390u: goto L_0047FE48;
    case 391u: goto L_0047FE50;
    case 392u: goto L_0047FE58;
    case 393u: goto L_0047FE60;
    case 394u: goto L_0047FE68;
    case 395u: goto L_0047FE70;
    case 396u: goto L_0047FE78;
    case 397u: goto L_0047FE80;
    case 398u: goto L_0047FE88;
    case 399u: goto L_0047FE90;
    case 400u: goto L_0047FE98;
    case 401u: goto L_0047FEA0;
    case 402u: goto L_0047FEA8;
    case 403u: goto L_0047FEB0;
    case 404u: goto L_0047FEB8;
    case 405u: goto L_0047FEC0;
    case 406u: goto L_0047FEC8;
    case 407u: goto L_0047FED0;
    case 408u: goto L_0047FED8;
    case 409u: goto L_0047FEE0;
    case 410u: goto L_0047FEE8;
    case 411u: goto L_0047FEF0;
    case 412u: goto L_0047FEF8;
    case 413u: goto L_0047FF00;
    case 414u: goto L_0047FF08;
    case 415u: goto L_0047FF10;
    case 416u: goto L_0047FF18;
    case 417u: goto L_0047FF20;
    case 418u: goto L_0047FF28;
    case 419u: goto L_0047FF30;
    case 420u: goto L_0047FF38;
    case 421u: goto L_0047FF40;
    case 422u: goto L_0047FF48;
    case 423u: goto L_0047FF50;
    case 424u: goto L_0047FF58;
    case 425u: goto L_0047FF60;
    case 426u: goto L_0047FF68;
    case 427u: goto L_0047FF70;
    case 428u: goto L_0047FF78;
    case 429u: goto L_0047FF80;
    case 430u: goto L_0047FF88;
    case 431u: goto L_0047FF90;
    case 432u: goto L_0047FF98;
    case 433u: goto L_0047FFA0;
    case 434u: goto L_0047FFA8;
    case 435u: goto L_0047FFB0;
    case 436u: goto L_0047FFB8;
    case 437u: goto L_0047FFC0;
    case 438u: goto L_0047FFC8;
    case 439u: goto L_0047FFD0;
    case 440u: goto L_0047FFD8;
    case 441u: goto L_0047FFE0;
    case 442u: goto L_0047FFE8;
    case 443u: goto L_0047FFF0;
    case 444u: goto L_0047FFF8;
    default: bad_entry(c, 0x0047C000u); return;
    }
L_0047C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C008u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047C008u) [[unlikely]] return; }
L_0047C008:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_0047C00C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0047C040:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[30], c.r[2].w[0] + 15200u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    set32(c.r[20], ld32((c.r[30].w[0] + 8u)));
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16240u));
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[19].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], ld32((c.r[22].w[0] + 16248u)));
    c.r[18].d[0] = c.r[5].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[21], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0047C0E0; } }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], 0u - 4096u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(4095ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 7;
L_0047C0E0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C0ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 158u, depth + 1u); else { c.pc = 0x0047E368u; return; } if (c.pc != 0x0047C0ECu) [[unlikely]] return; }
L_0047C0EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] < c.r[21].d[0] ? 1ull : 0ull;  if (t) { goto L_0047C274; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0047C10C; } }
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[30].d[0]) { ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  goto L_0047C278; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0047C10C:
    set32(c.r[3], ld32((c.r[2].w[0] + 16272u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[21].d[0]; st32((c.r[2].w[0] + 16272u), c.r[3].w[0]);  if (t) { goto L_0047C130; } }
    set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0047C23C; } }
L_0047C130:
    set32(c.r[2], ld32((c.r[22].w[0] + 16248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[2], c.r[17].w[0] - c.r[21].w[0]);  if (t) { goto L_0047C144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 16248u), c.r[17].w[0]);  if (t) { goto L_0047C150; } }
L_0047C144:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] + 16272u), c.r[2].w[0]);
    c.budget -= 3;
L_0047C150:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0047C16C; } }
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0047C170; } }
L_0047C16C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0047C170:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[3], 0u + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C198u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 158u, depth + 1u); else { c.pc = 0x0047E368u; return; } if (c.pc != 0x0047C198u) [[unlikely]] return; }
L_0047C198:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  goto L_0047C278; }
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[3].w[0] + 15200u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[5].w[0] + 16272u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == c.r[4].d[0]; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0047C23C; } }
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047C1F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0047C274; } }
L_0047C1F8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[19].w[0] - 12u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    c.r[19].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[19].d[0];
    set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0047C23C; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C23Cu); set32(c.r[5], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_00DF(c, 22u, depth + 1u); else { c.pc = 0x0047C9D8u; return; } if (c.pc != 0x0047C23Cu) [[unlikely]] return; }
L_0047C23C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16272u)));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 16256u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st64((c.r[4].w[0] + 16256u), c.r[3].d[0]);  goto L_0047C258; }
L_0047C258:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 16272u)));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 16264u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st64((c.r[4].w[0] + 16264u), c.r[3].d[0]);  goto L_0047C274; }
L_0047C274:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047C278:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0047C2A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], c.r[5].w[0] + 19u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047C2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_0047C2E8; } }
L_0047C2E4:
    set32(c.r[17], 0u + 16u);
    c.budget -= 1;
L_0047C2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C2F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 253u, depth + 1u); else { c.pc = 0x00476D60u; return; } if (c.pc != 0x0047C2F0u) [[unlikely]] return; }
L_0047C2F0:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(504ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0047C350; } }
    set32(c.r[10], c.r[17].w[0] >> 3);
    set32(c.r[3], c.r[2].w[0] + 15200u);
    set32(c.r[9], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[9].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[9].d[0]; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047C348; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_0047C9A8; } }
L_0047C348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { goto L_0047C440; } }
L_0047C350:
    set32(c.r[4], c.r[17].w[0] >> 9);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0047C364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[17].w[0] >> 3);  if (t) { goto L_0047C3C0; } }
L_0047C364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] >> 6);  if (t) { goto L_0047C374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 56u);  if (t) { goto L_0047C3C0; } }
L_0047C374:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[4].w[0] + 91u);  if (t) { goto L_0047C3C0; } }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(85ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] >> 12);  if (t) { goto L_0047C394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 110u);  if (t) { goto L_0047C3C0; } }
L_0047C394:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(341ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] >> 15);  if (t) { goto L_0047C3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 119u);  if (t) { goto L_0047C3C0; } }
L_0047C3A8:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1365ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] >> 18);  if (t) { goto L_0047C3BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 124u);  if (t) { goto L_0047C3C0; } }
L_0047C3BC:
    set32(c.r[10], 0u + 126u);
    c.budget -= 1;
L_0047C3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 15200u);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047C3EC; } }
    c.budget -= 1;
L_0047C3E0:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[8], ld32((c.r[16].w[0] + 12u)));  goto L_0047C8E4; }
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0047C3EC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[8].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_0047C440; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - c.r[5].w[0]);  if (t) { goto L_0047C420; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull - c.r[2].d[0];  if (t) { goto L_0047C42C; } }
L_0047C420:
    set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 3;
L_0047C42C:
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C3E0u | kUnwind; return; } goto L_0047C3E0; } }
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_0047C440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15208u);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0047C66C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - c.r[5].w[0]);  if (t) { goto L_0047C484; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull - c.r[2].d[0];  if (t) { goto L_0047C490; } }
L_0047C484:
    set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 3;
L_0047C490:
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[14].w[0] + 15208u);  if (t) { goto L_0047C4E8; } }
    c.r[2].d[0] = c.r[17].d[0] | 1ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[14].w[0] + 15208u);
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 12u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[5].w[0] + 8u), c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0047C9AC; } }
L_0047C4E8:
    st32((c.r[4].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0; st32((c.r[4].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0047C508; } }
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_0047C9A8; } }
L_0047C508:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(512ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] >> 3);  if (t) { goto L_0047C558; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[7].w[0] + 3u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[5], c.r[4].w[0] - 8u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[7].w[0] << 3);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[8].w[0] + 8u)));  if (t) { goto L_0047C658; } }
L_0047C558:
    set32(c.r[3], c.r[5].w[0] >> 9);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0047C56C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[5].w[0] >> 3);  if (t) { goto L_0047C5C8; } }
L_0047C56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] >> 6);  if (t) { goto L_0047C57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 56u);  if (t) { goto L_0047C5C8; } }
L_0047C57C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + 91u);  if (t) { goto L_0047C5C8; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(85ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] >> 12);  if (t) { goto L_0047C59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 110u);  if (t) { goto L_0047C5C8; } }
L_0047C59C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(341ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] >> 15);  if (t) { goto L_0047C5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 119u);  if (t) { goto L_0047C5C8; } }
L_0047C5B0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1365ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] >> 18);  if (t) { goto L_0047C5C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 124u);  if (t) { goto L_0047C5C8; } }
L_0047C5C4:
    set32(c.r[7], 0u + 126u);
    c.budget -= 1;
L_0047C5C8:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[9], c.r[20].w[0] + 15200u);
    set32(c.r[8], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[8].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  goto L_0047C614; }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[7].w[0] + 3u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[4], 0u + 1u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[5], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[4].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0047C658; } }
L_0047C614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], ld32((c.r[6].w[0] + 12u)));  goto L_0047C658; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
L_0047C638:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[8].d[0]) { set32(c.r[8], ld32((c.r[6].w[0] + 12u)));  goto L_0047C658; }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C638u | kUnwind; return; } goto L_0047C638; }
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_0047C658:
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
L_0047C66C:
    set32(c.r[4], c.r[10].w[0] + 3u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[20].w[0] + 15200u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[10].d[0];
    c.r[5].d[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] << (c.r[4].w[0] & 63u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + 15200u);  if (t) { goto L_0047C800; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0047C6DC; } }
    set32(c.r[2], 0u - 4u);
    c.r[6].d[0] = c.r[6].d[0] << 1;
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[2].w[0] + 4u);  if (t) { goto L_0047C6D8; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0047C6C0:
    c.r[6].d[0] = c.r[6].d[0] << 1;
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C6C0u | kUnwind; return; } goto L_0047C6C0; } }
L_0047C6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0047C6DC:
    set32(c.r[12], c.r[2].w[0] + 15200u);
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] << 3);
    c.budget -= 3;
L_0047C6E8:
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 4;
L_0047C6F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[8].d[0]; c.r[2].d[0] = c.r[10].sd[0] < 63ll ? 1ull : 0ull;  if (t) { goto L_0047C760; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65532ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_0047C710:
    c.r[5].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - c.r[5].w[0]);  if (t) { goto L_0047C730; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull - c.r[2].d[0];  if (t) { goto L_0047C73C; } }
L_0047C730:
    set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 3;
L_0047C73C:
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], ld32((c.r[16].w[0] + 12u)));  goto L_0047C904; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0047C95C; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[8].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C710u | kUnwind; return; } goto L_0047C710; }
    c.r[2].d[0] = c.r[10].sd[0] < 63ll ? 1ull : 0ull;
    c.budget -= 1;
L_0047C760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_0047C770; } }
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_0047C770:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[8].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C6F8u | kUnwind; return; } goto L_0047C6F8; }
L_0047C780:
    c.r[2].d[0] = c.r[11].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] - 8u);  if (t) { goto L_0047C7E0; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[9].d[0]; set32(c.r[11], c.r[11].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C780u | kUnwind; return; } goto L_0047C780; } }
L_0047C798:
    c.r[3].d[0] = ld32((c.r[12].w[0] + 4u));
    c.r[6].d[0] = c.r[6].d[0] << 1;
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] + 15200u);  goto L_0047C800; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];  if (t) { goto L_0047C7FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[10].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C6E8u | kUnwind; return; } goto L_0047C6E8; } }
    c.r[3].d[0] = ld32((c.r[13].w[0] + 4u));
    c.budget -= 1;
L_0047C7C0:
    c.r[6].d[0] = c.r[6].d[0] << 1;
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C7C0u | kUnwind; return; } goto L_0047C7C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[10].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C6E8u | kUnwind; return; } goto L_0047C6E8; } }
L_0047C7E0:
    set32(c.r[3], ld32((c.r[12].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C798u | kUnwind; return; } goto L_0047C798; } }
L_0047C7FC:
    set32(c.r[3], c.r[20].w[0] + 15200u);
    c.budget -= 1;
L_0047C800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);  goto L_0047C834; }
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull - c.r[2].d[0];  if (t) { goto L_0047C83C; } }
L_0047C834:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0047C83C:
    set32(c.r[18], c.r[20].w[0] + 15200u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[16].d[0] = c.r[16].d[0] | 65532ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0047C86C; } }
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[20].w[0] + 15200u);  if (t) { goto L_0047C980; } }
L_0047C86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C874u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 4u, depth + 1u); else { c.pc = 0x0047C040u; return; } if (c.pc != 0x0047C874u) [[unlikely]] return; }
L_0047C874:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - c.r[3].w[0]);  if (t) { goto L_0047C89C; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull - c.r[2].d[0];  if (t) { goto L_0047C8A8; } }
L_0047C89C:
    set32(c.r[2], c.r[3].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 3;
L_0047C8A8:
    set32(c.r[2], c.r[20].w[0] + 15200u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_0047C8D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[20].w[0] + 15200u);  if (t) { goto L_0047C980; } }
L_0047C8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C8DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047C8DCu) [[unlikely]] return; }
L_0047C8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047C9B8; } }
L_0047C8E4:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_0047C9A8; } }
L_0047C904:
    c.r[4].d[0] = c.r[17].d[0] | 1ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], c.r[14].w[0] + 15208u);
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[8], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_0047C9AC; } }
L_0047C95C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_0047C9AC; } }
L_0047C980:
    c.r[5].d[0] = c.r[17].d[0] | 1ull;
    set32(c.r[16], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
L_0047C9A8:
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0047C9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C9B4u);  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047C9B4u) [[unlikely]] return; }
L_0047C9B4:
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_0047C9B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047C9D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047CCB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C9FCu);  if (depth < kMaxDepth) unit_00DD(c, 253u, depth + 1u); else { c.pc = 0x00476D60u; return; } if (c.pc != 0x0047C9FCu) [[unlikely]] return; }
L_0047C9FC:
    set32(c.r[10], c.r[16].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], ld32((c.r[10].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[9].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[11], c.r[5].w[0] + 15200u);
    set32(c.r[7], c.r[10].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_0047CAA4; } }
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);  if (t) { goto L_0047CA60; } }
    set32(c.r[5], ld32((c.r[16].w[0] - 8u)));
    set32(c.r[10], c.r[10].w[0] - c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 8u)));
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 7;
L_0047CA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[9].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16232u));
    c.r[2].d[0] = c.r[9].d[0] | 1ull;
    st32((c.r[10].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[11].w[0] + 8u), c.r[10].w[0]);  if (t) { goto L_0047CA94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA94u); set32(c.r[5], ld32((c.r[2].w[0] + 16240u)));  if (depth < kMaxDepth) unit_00DF(c, 28u, depth + 1u); else { c.pc = 0x0047CCD0u; return; } if (c.pc != 0x0047CA94u) [[unlikely]] return; }
L_0047CA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047CA9Cu) [[unlikely]] return; }
L_0047CA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (t) { goto L_0047CCBC; } }
L_0047CAA4:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0047CAE4; } }
    set32(c.r[5], ld32((c.r[16].w[0] - 8u)));
    set32(c.r[2], c.r[11].w[0] + 8u);
    set32(c.r[10], c.r[10].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);  if (t) { goto L_0047CAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 1u);  if (t) { goto L_0047CAE4; } }
L_0047CAD4:
    set32(c.r[8], ld32((c.r[10].w[0] + 12u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 4;
L_0047CAE4:
    set32(c.r[3], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[9].d[0] | 1ull;  if (t) { goto L_0047CB40; } }
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_0047CB2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 15208u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[8], ld32((c.r[7].w[0] + 12u)));  goto L_0047CB30; }
    st32((c.r[3].w[0] + 12u), c.r[10].w[0]);
    set32(c.r[12], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0047CB3C; } }
L_0047CB2C:
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 1;
L_0047CB30:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 3;
L_0047CB3C:
    c.r[2].d[0] = c.r[9].d[0] | 1ull;
    c.budget -= 1;
L_0047CB40:
    set32(c.r[3], c.r[10].w[0] + c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != 0ull; st32((c.r[3].w[0]), c.r[9].w[0]);  if (t) { goto L_0047CCB0; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(512ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[9].w[0] >> 3);  if (t) { goto L_0047CBA0; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[7].w[0] + 3u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[5], c.r[13].w[0] + 15200u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[7].w[0] << 3);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[8].w[0] + 8u)));  if (t) { goto L_0047CCA0; } }
L_0047CBA0:
    set32(c.r[3], c.r[9].w[0] >> 9);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0047CBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[9].w[0] >> 3);  if (t) { goto L_0047CC10; } }
L_0047CBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] >> 6);  if (t) { goto L_0047CBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 56u);  if (t) { goto L_0047CC10; } }
L_0047CBC4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + 91u);  if (t) { goto L_0047CC10; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(85ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] >> 12);  if (t) { goto L_0047CBE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 110u);  if (t) { goto L_0047CC10; } }
L_0047CBE4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(341ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] >> 15);  if (t) { goto L_0047CBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 119u);  if (t) { goto L_0047CC10; } }
L_0047CBF8:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1365ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] >> 18);  if (t) { goto L_0047CC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 124u);  if (t) { goto L_0047CC10; } }
L_0047CC0C:
    set32(c.r[7], 0u + 126u);
    c.budget -= 1;
L_0047CC10:
    set32(c.r[11], c.r[13].w[0] + 15200u);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[8], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[8].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  goto L_0047CC5C; }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[7].w[0] + 3u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[4], 0u + 1u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[5], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[4].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[11].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0047CCA0; } }
L_0047CC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], ld32((c.r[6].w[0] + 12u)));  goto L_0047CCA0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
L_0047CC80:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[8].d[0]) { set32(c.r[8], ld32((c.r[6].w[0] + 12u)));  goto L_0047CCA0; }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047CC80u | kUnwind; return; } goto L_0047CC80; }
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_0047CCA0:
    st32((c.r[10].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[10].w[0]);
    c.budget -= 4;
L_0047CCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CCB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047CCB8u) [[unlikely]] return; }
L_0047CCB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047CCBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047CCD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CCF8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 253u, depth + 1u); else { c.pc = 0x00476D60u; return; } if (c.pc != 0x0047CCF8u) [[unlikely]] return; }
L_0047CCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[20], c.r[2].w[0] + 15200u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    set32(c.r[5], 0u + 4096u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[17].d[0] - c.r[16].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD34u); c.r[4].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(4079ll);  if (depth < kMaxDepth) unit_00E2(c, 44u, depth + 1u); else { c.pc = 0x00488D58u; return; } if (c.pc != 0x0047CD34u) [[unlikely]] return; }
L_0047CD34:
    c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD40u); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00205F20u; return; } if (c.pc != 0x0047CD40u) [[unlikely]] return; }
L_0047CD40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047CDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 158u, depth + 1u); else { c.pc = 0x0047E368u; return; } if (c.pc != 0x0047CD58u) [[unlikely]] return; }
L_0047CD58:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047CDD8; } }
    c.r[19].d[0] = c.r[16].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD80u); set32(c.r[5], 0u - c.r[19].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 158u, depth + 1u); else { c.pc = 0x0047E368u; return; } if (c.pc != 0x0047CD80u) [[unlikely]] return; }
L_0047CD80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0047CDE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 158u, depth + 1u); else { c.pc = 0x0047E368u; return; } if (c.pc != 0x0047CD9Cu) [[unlikely]] return; }
L_0047CD9C:
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[5].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0047CDD8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 16248u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 16272u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
L_0047CDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CDE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047CDE0u) [[unlikely]] return; }
L_0047CDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047CE1C; } }
L_0047CDE8:
    c.r[2].d[0] = c.r[17].d[0] - c.r[16].d[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16272u)));
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE18u); st32((c.r[3].w[0] + 16272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047CE18u) [[unlikely]] return; }
L_0047CE18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0047CE1C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047CE40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047CE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE7Cu);  if (depth < kMaxDepth) unit_00DF(c, 8u, depth + 1u); else { c.pc = 0x0047C2A8u; return; } if (c.pc != 0x0047CE7Cu) [[unlikely]] return; }
L_0047CE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_0047CFF0; } }
L_0047CE84:
    set32(c.r[2], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] + 19u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { goto L_0047CEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_0047CEB4; } }
L_0047CEB0:
    set32(c.r[20], 0u + 16u);
    c.budget -= 1;
L_0047CEB4:
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CEC4u); set32(c.r[5], c.r[5].w[0] + 16u);  if (depth < kMaxDepth) unit_00DF(c, 8u, depth + 1u); else { c.pc = 0x0047C2A8u; return; } if (c.pc != 0x0047CEC4u) [[unlikely]] return; }
L_0047CEC4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0047CED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047CFEC; } }
L_0047CED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CEE0u); set32(c.r[18], c.r[19].w[0] - 8u);  if (depth < kMaxDepth) unit_00DD(c, 253u, depth + 1u); else { c.pc = 0x00476D60u; return; } if (c.pc != 0x0047CEE0u) [[unlikely]] return; }
L_0047CEE0:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CEF0u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x0047CEF0u) [[unlikely]] return; }
L_0047CEF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] + c.r[17].w[0]);  if (t) { goto L_0047CF6C; } }
    set32(c.r[2], 0u - c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[4], 0u + 15u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[16].w[0] - c.r[18].w[0]);
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    if (c.r[4].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[16].w[0] - c.r[18].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CF68u); st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 22u, depth + 1u); else { c.pc = 0x0047C9D8u; return; } if (c.pc != 0x0047CF68u) [[unlikely]] return; }
L_0047CF68:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047CF6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);  goto L_0047CF9C; }
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull - c.r[2].d[0];  if (t) { goto L_0047CFA4; } }
L_0047CF9C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0047CFA4:
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047CFE0; } }
    set32(c.r[6], c.r[18].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[6].w[0] + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[20].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CFE0u); st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 22u, depth + 1u); else { c.pc = 0x0047C9D8u; return; } if (c.pc != 0x0047CFE0u) [[unlikely]] return; }
L_0047CFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CFE8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 256u, depth + 1u); else { c.pc = 0x00476DC0u; return; } if (c.pc != 0x0047CFE8u) [[unlikely]] return; }
L_0047CFE8:
    set32(c.r[2], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_0047CFEC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047CFF0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0047D010:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[5], c.r[30].w[0] - 4447u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 20;
L_0047D060:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D060u | kUnwind; return; } goto L_0047D060; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0047D090; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_0047D09C; } }
L_0047D090:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0047D0A0; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_0047D09C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0047D0A0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0047D0B0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0047D0DC; } }
L_0047D0B0:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_0047D0DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_0047D0D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0047D0DC; } }
L_0047D0D0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[19], 0u + 16u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 3;
L_0047D0DC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_0047D0F0; } }
    set32(c.r[19], 0u + 10u);
    c.r[2].d[0] = c.r[17].d[0] ^ 48ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_0047D0F0:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 63;
    set32(c.r[20], 0u - 1u);
    c.r[20].d[0] = c.r[20].d[0] >> 1;
    if (c.r[23].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D114u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x0047D114u) [[unlikely]] return; }
L_0047D114:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D12Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 44u, depth + 1u); else { c.pc = 0x00488D58u; return; } if (c.pc != 0x0047D12Cu) [[unlikely]] return; }
L_0047D12C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0047D184; } }
L_0047D138:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D1BC; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0; c.r[2].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0047D168; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], 0u - 1u);  goto L_0047D17C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[20].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0047D170; } }
    c.r[2].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D170; } }
L_0047D168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u - 1u);  if (t) { goto L_0047D17C; } }
L_0047D170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D178u); set32(c.r[21], 0u + 1u);  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00205F20u; return; } if (c.pc != 0x0047D178u) [[unlikely]] return; }
L_0047D178:
    c.r[4].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 1;
L_0047D17C:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0047D184:
    set32(c.r[2], c.r[30].w[0] - 4447u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_0047D1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D138u | kUnwind; return; } goto L_0047D138; } }
L_0047D1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - 87u);  if (t) { goto L_0047D1BC; } }
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] - 55u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D138u | kUnwind; return; } goto L_0047D138; } }
L_0047D1BC:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0; c.r[2].d[0] = 0ull - c.r[4].d[0];  if (t) { goto L_0047D1E8; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 63;
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 1;
    if (c.r[23].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[3], 0u + 34u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0047D1EC; } }
L_0047D1E8:
    if (c.r[23].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_0047D1EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0047D208; } }
    set32(c.r[2], c.r[18].w[0] - 1u);
    if (c.r[21].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0047D208:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0047D240:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 14268u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D268u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 45u, depth + 1u); else { c.pc = 0x0047D010u; return; } if (c.pc != 0x0047D268u) [[unlikely]] return; }
L_0047D268:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047D278:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 4447u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0047D298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 1360u);  c.pc = t; return; }
L_0047D2A8:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0047D2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 14268u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D2C8u);  if (depth < kMaxDepth) unit_00DF(c, 54u, depth + 1u); else { c.pc = 0x0047D298u; return; } if (c.pc != 0x0047D2C8u) [[unlikely]] return; }
L_0047D2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047D2D8:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0047D380; } }
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047D380; } }
    c.r[3].d[0] = c.r[5].d[0] << 8;
    c.r[2].d[0] = 0ull | 32896ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[2].d[0] << 9;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[10].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = 0ull | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    mmi::pcpyh(c.r[8], c.r[10]);
    mmi::pcpyld(c.r[9], c.r[8], c.r[8]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::pcpyld(c.r[8], c.r[3], c.r[3]);
    c.budget -= 20;
L_0047D340:
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    mmi::pxor(c.r[2], c.r[2], c.r[9]);
    mmi::pcpyld(c.r[10], c.r[4], c.r[4]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[10]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[9]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[7].d[0] + 0ull;  goto L_0047D380; }
    set32(c.r[6], c.r[6].w[0] - 16u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D340u | kUnwind; return; } goto L_0047D340; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0047D380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0047D3B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 2;
L_0047D39C:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0047D3BC; } }
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D39Cu | kUnwind; return; } goto L_0047D39C; } }
L_0047D3B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0047D3BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0047D3C8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[17], c.r[3].w[0] - 1023u);
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047D4C4; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0047D468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D420u); c.r[5].d[0] = ld64((c.r[2].w[0] - 1256u));  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047D420u) [[unlikely]] return; }
L_0047D420:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D42Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047D42Cu) [[unlikely]] return; }
L_0047D42C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047D564; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0047D448; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047D564; } }
L_0047D448:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D564; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0047D564; } }
L_0047D468:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[3].d[0] = c.r[16].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047D590; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D48Cu); c.r[5].d[0] = ld64((c.r[2].w[0] - 1256u));  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047D48Cu) [[unlikely]] return; }
L_0047D48C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047D498u) [[unlikely]] return; }
L_0047D498:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047D564; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[20].d[0]);  if (t) { goto L_0047D4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[20].d[0]);
    c.budget -= 4;
L_0047D4B8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];  if (t) { goto L_0047D564; } }
L_0047D4C4:
    c.r[2].d[0] = c.r[17].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] - 1043u);  if (t) { goto L_0047D4EC; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047D594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D4E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047D4E4u) [[unlikely]] return; }
L_0047D4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);  if (t) { goto L_0047D598; } }
L_0047D4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[20], c.r[2].w[0] >> (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[20].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047D590; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D510u); c.r[5].d[0] = ld64((c.r[2].w[0] - 1256u));  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047D510u) [[unlikely]] return; }
L_0047D510:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D51Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047D51Cu) [[unlikely]] return; }
L_0047D51C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047D564; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[20].d[0]);  if (t) { goto L_0047D560; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 52u);  if (t) { goto L_0047D540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0047D55C; } }
L_0047D540:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
L_0047D55C:
    c.r[2].d[0] = ~(0ull | c.r[20].d[0]);
    c.budget -= 1;
L_0047D560:
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0047D564:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 11;
L_0047D590:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0047D594:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047D598:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047D5B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[14].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[15].d[0] = c.r[10].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[13].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[9].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[7].d[0] ^ c.r[13].d[0];  if (t) { goto L_0047D650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047D654; } }
    set32(c.r[2], 0u - c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[10].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 31);
    c.r[2].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  if (t) { goto L_0047D680; } }
L_0047D650:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047D654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D65Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047D65Cu) [[unlikely]] return; }
L_0047D65C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D66Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047D66Cu) [[unlikely]] return; }
L_0047D66C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D678u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0047D678u) [[unlikely]] return; }
L_0047D678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  if (t) { goto L_0047D9E8; } }
L_0047D680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0047D6AC; } }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047D9E4; } }
    c.r[2].d[0] = c.r[8].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047D9E4; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[10].d[0]; set32(c.r[3], c.r[13].w[0] >> 31);  if (t) { goto L_0047D98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_0047D6AC:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 20));  goto L_0047D718; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 11);  if (t) { goto L_0047D6F0; } }
    set32(c.r[5], 0u - 1043u);
    c.budget -= 3;
    { const bool t = c.r[14].sd[0] <= 0; c.r[2].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0047D71C; } }
L_0047D6D0:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D6D0u | kUnwind; return; } goto L_0047D6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0047D720; } }
L_0047D6F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], 0u - 1022u);  if (t) { goto L_0047D71C; } }
L_0047D6F8:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D6F8u | kUnwind; return; } goto L_0047D6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0047D720; } }
L_0047D718:
    set32(c.r[5], c.r[2].w[0] - 1023u);
    c.budget -= 1;
L_0047D71C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_0047D720:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 20));  if (t) { goto L_0047D798; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[4], 0u - 1022u);  if (t) { goto L_0047D768; } }
    set32(c.r[4], 0u - 1043u);
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].sd[0] <= 0; c.r[3].d[0] = c.r[5].sd[0] < -1022ll ? 1ull : 0ull;  if (t) { goto L_0047D7A0; } }
L_0047D748:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D748u | kUnwind; return; } goto L_0047D748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D7A0; } }
L_0047D768:
    set32(c.r[2], c.r[9].w[0] << 11);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = c.r[5].sd[0] < -1022ll ? 1ull : 0ull;  if (t) { goto L_0047D7A0; } }
    c.budget -= 1;
L_0047D778:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D778u | kUnwind; return; } goto L_0047D778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D7A0; } }
L_0047D798:
    c.r[3].d[0] = c.r[5].sd[0] < -1022ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] - 1023u);
    c.budget -= 2;
L_0047D7A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1022u);  if (t) { goto L_0047D7C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_0047D7EC; } }
L_0047D7C0:
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - c.r[6].w[0]);  if (t) { goto L_0047D7E4; } }
    set32(c.r[3], c.r[7].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[14].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[8], c.r[14].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_0047D7EC; } }
L_0047D7E4:
    set32(c.r[7], c.r[14].w[0] << (c.r[6].w[0] & 31u));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0047D7EC:
    c.r[2].d[0] = c.r[4].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1022u);  if (t) { goto L_0047D810; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_0047D83C; } }
L_0047D810:
    set32(c.r[6], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - c.r[6].w[0]);  if (t) { goto L_0047D834; } }
    set32(c.r[3], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[15].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[10], c.r[15].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_0047D83C; } }
L_0047D834:
    set32(c.r[9], c.r[15].w[0] << (c.r[6].w[0] & 31u));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0047D83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_0047D888; } }
    c.budget -= 1;
L_0047D848:
    set32(c.r[3], c.r[7].w[0] - c.r[9].w[0]);
    c.r[2].d[0] = c.r[8].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], c.r[8].w[0] - c.r[10].w[0]);  if (t) { goto L_0047D870; } }
    set32(c.r[2], c.r[8].w[0] >> 31);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] << 1);  if (t) { goto L_0047D888; } }
L_0047D870:
    c.r[2].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_0047D988; } }
    set32(c.r[2], c.r[5].w[0] >> 31);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[5].w[0] << 1);
    c.budget -= 3;
L_0047D888:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D848u | kUnwind; return; } goto L_0047D848; } }
    set32(c.r[3], c.r[7].w[0] - c.r[9].w[0]);
    c.r[2].d[0] = c.r[8].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[8].w[0] - c.r[10].w[0]);  if (t) { goto L_0047D8B0; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0047D8B0:
    c.r[2].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[13].w[0] >> 31);  if (t) { goto L_0047D98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < -1022ll ? 1ull : 0ull;  if (t) { goto L_0047D8F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 2;
L_0047D8D8:
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] >> 31);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047D8D8u | kUnwind; return; } goto L_0047D8D8; } }
    c.r[2].d[0] = c.r[4].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 1;
L_0047D8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1022u);  if (t) { goto L_0047D948; } }
    set32(c.r[4], c.r[4].w[0] + 1023u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 20);
    c.r[7].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[7].d[0] | c.r[13].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[8].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[11].d[0] | c.r[3].d[0];  if (t) { goto L_0047D9E0; } }
L_0047D948:
    set32(c.r[6], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - c.r[6].w[0]);  if (t) { goto L_0047D96C; } }
    set32(c.r[3], c.r[8].w[0] >> (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[6].w[0] & 31u)));  if (t) { goto L_0047D9AC; } }
L_0047D96C:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - c.r[6].w[0]);  if (t) { goto L_0047D9A4; } }
    set32(c.r[3], c.r[8].w[0] >> (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_0047D9A8; } }
L_0047D988:
    set32(c.r[3], c.r[13].w[0] >> 31);
    c.budget -= 1;
L_0047D98C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 1240u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[3].w[0]));  if (t) { goto L_0047D9E4; } }
L_0047D9A4:
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[6].w[0] & 31u)));
    c.budget -= 1;
L_0047D9A8:
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_0047D9AC:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] | c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[8].d[0] << 32;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[12].d[0] | c.r[3].d[0];
    c.budget -= 13;
L_0047D9E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047D9E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047D9E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0047DA00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_0047DAB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047DA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[3].w[0] - 1136u));  if (t) { goto L_0047DFFC; } }
    c.budget -= 1;
L_0047DA78:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0047DA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA88u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DA88u) [[unlikely]] return; }
L_0047DA88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0047DA94u) [[unlikely]] return; }
L_0047DA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_0047E000; } }
L_0047DA9C:
    c.r[5].d[0] = 0ull | 34464ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DAACu); set32(c.r[30], 0u - 54u);  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DAACu) [[unlikely]] return; }
L_0047DAAC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
L_0047DAB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0047DAE0; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DAD8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DAD8u) [[unlikely]] return; }
L_0047DAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_0047E000; } }
L_0047DAE0:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 20));
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[2].d[0] = c.r[2].d[0] | 24420ull;
    c.r[19].d[0] = c.r[19].d[0] & c.r[16].d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[30].w[0] - 1023u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[30], c.r[3].w[0] + c.r[4].w[0]);
    c.r[20].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[20].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 20));
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    set32(c.r[30], c.r[30].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DB44u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DB44u) [[unlikely]] return; }
L_0047DB44:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047DCB4; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DB68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047DB68u) [[unlikely]] return; }
L_0047DB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0047DBE0; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0047DFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DB80u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0047DB80u) [[unlikely]] return; }
L_0047DB80:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 65432ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 47371ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 64384ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBA4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DBA4u) [[unlikely]] return; }
L_0047DBA4:
    c.r[5].d[0] = 0ull | 63400ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 59324ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 54756ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | 15478ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBCCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DBCCu) [[unlikely]] return; }
L_0047DBCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DBD8u) [[unlikely]] return; }
L_0047DBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_0047E000; } }
L_0047DBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBE8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DBE8u) [[unlikely]] return; }
L_0047DBE8:
    c.r[5].d[0] = 0ull | 65365ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 43690ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 43690ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 5461ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC10u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DC10u) [[unlikely]] return; }
L_0047DC10:
    c.r[4].d[0] = 0ull | 65408ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DC20u) [[unlikely]] return; }
L_0047DC20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DC2Cu) [[unlikely]] return; }
L_0047DC2C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047DC40; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047DFF4; } }
L_0047DC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC48u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0047DC48u) [[unlikely]] return; }
L_0047DC48:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 65432ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 47371ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 64384ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC6Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DC6Cu) [[unlikely]] return; }
L_0047DC6C:
    c.r[5].d[0] = 0ull | 63400ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 59324ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 54756ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | 15478ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC94u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DC94u) [[unlikely]] return; }
L_0047DC94:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DCA0u) [[unlikely]] return; }
L_0047DCA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCACu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DCACu) [[unlikely]] return; }
L_0047DCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0047DFF0; } }
L_0047DCB4:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCC4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DCC4u) [[unlikely]] return; }
L_0047DCC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCD0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0047DCD0u) [[unlikely]] return; }
L_0047DCD0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCDCu); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0047DCDCu) [[unlikely]] return; }
L_0047DCDC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCECu); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DCECu) [[unlikely]] return; }
L_0047DCEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 60294ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DD08u) [[unlikely]] return; }
L_0047DD08:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | 47185ull;
    c.r[5].d[0] = 0ull | 65294ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 53326ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 33734ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 1695ull;
    set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DD3Cu) [[unlikely]] return; }
L_0047DD3C:
    c.r[20].d[0] = c.r[20].d[0] | c.r[16].d[0];
    c.r[5].d[0] = 0ull | 65329ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 50964ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 60531ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 6319ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DD64u) [[unlikely]] return; }
L_0047DD64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DD70u) [[unlikely]] return; }
L_0047DD70:
    c.r[5].d[0] = 0ull | 65382ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 52428ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 52415ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 6660ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DD94u) [[unlikely]] return; }
L_0047DD94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DDA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DDA0u) [[unlikely]] return; }
L_0047DDA0:
    c.r[5].d[0] = 0ull | 65291ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 50251ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 63986ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 4676ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DDC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DDC8u) [[unlikely]] return; }
L_0047DDC8:
    c.r[5].d[0] = 0ull | 65309ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    c.r[5].d[0] = c.r[5].d[0] | 52370ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 55648ull;
    c.r[5].d[0] = c.r[5].d[0] << 11;
    c.r[5].d[0] = c.r[5].d[0] | 990ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DDECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DDECu) [[unlikely]] return; }
L_0047DDEC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DDF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DDF8u) [[unlikely]] return; }
L_0047DDF8:
    c.r[5].d[0] = 0ull | 65353ull;
    c.r[5].d[0] = c.r[5].d[0] << 18;
    c.r[5].d[0] = c.r[5].d[0] | 37449ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 33874ull;
    c.r[5].d[0] = c.r[5].d[0] << 11;
    c.r[5].d[0] = c.r[5].d[0] | 857ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DE1Cu) [[unlikely]] return; }
L_0047DE1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DE28u) [[unlikely]] return; }
L_0047DE28:
    c.r[5].d[0] = 0ull | 65429ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 43690ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 43690ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 5523ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DE4Cu) [[unlikely]] return; }
L_0047DE4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DE58u) [[unlikely]] return; }
L_0047DE58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DE64u) [[unlikely]] return; }
L_0047DE64:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047DF4C; } }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE7Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DE7Cu) [[unlikely]] return; }
L_0047DE7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE88u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DE88u) [[unlikely]] return; }
L_0047DE88:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047DEBC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DE9Cu) [[unlikely]] return; }
L_0047DE9C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DEA8u) [[unlikely]] return; }
L_0047DEA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DEB4u) [[unlikely]] return; }
L_0047DEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0047DFF0; } }
L_0047DEBC:
    c.r[5].d[0] = 0ull | 65432ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 47371ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 64384ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEDCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DEDCu) [[unlikely]] return; }
L_0047DEDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DEECu) [[unlikely]] return; }
L_0047DEEC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DEF8u) [[unlikely]] return; }
L_0047DEF8:
    c.r[5].d[0] = 0ull | 63400ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 59324ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 54756ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | 15478ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF20u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DF20u) [[unlikely]] return; }
L_0047DF20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047DF2Cu) [[unlikely]] return; }
L_0047DF2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DF38u) [[unlikely]] return; }
L_0047DF38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF44u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DF44u) [[unlikely]] return; }
L_0047DF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047DFF0; } }
L_0047DF4C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047DFD8; } }
    c.r[5].d[0] = 0ull | 65432ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 47371ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 64384ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF74u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DF74u) [[unlikely]] return; }
L_0047DF74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF84u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DF84u) [[unlikely]] return; }
L_0047DF84:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DF90u) [[unlikely]] return; }
L_0047DF90:
    c.r[5].d[0] = 0ull | 63400ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 59324ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 54756ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | 15478ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFB8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DFB8u) [[unlikely]] return; }
L_0047DFB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DFC4u) [[unlikely]] return; }
L_0047DFC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFD0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DFD0u) [[unlikely]] return; }
L_0047DFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047DFF0; } }
L_0047DFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFE0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DFE0u) [[unlikely]] return; }
L_0047DFE0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047DFECu) [[unlikely]] return; }
L_0047DFEC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0047DFF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047DFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFFCu);  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047DFFCu) [[unlikely]] return; }
L_0047DFFC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E000:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0047E030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0047E0D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047E090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[3].w[0] - 1104u));  if (t) { goto L_0047E1D8; } }
    c.budget -= 1;
L_0047E090:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047E0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E0A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047E0A0u) [[unlikely]] return; }
L_0047E0A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E0ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0047E0ACu) [[unlikely]] return; }
L_0047E0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  if (t) { goto L_0047E1DC; } }
L_0047E0B4:
    c.r[5].d[0] = 0ull | 34464ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E0C4u); set32(c.r[18], 0u - 54u);  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047E0C4u) [[unlikely]] return; }
L_0047E0C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
L_0047E0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047E1C8; }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));
    set32(c.r[4], c.r[18].w[0] - 1023u);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[4], c.r[18].w[0] >> 31);
    set32(c.r[2], 0u + 1023u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 20);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E118u); set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0047E118u) [[unlikely]] return; }
L_0047E118:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[17].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E13Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 80u, depth + 1u); else { c.pc = 0x0047DA00u; return; } if (c.pc != 0x0047E13Cu) [[unlikely]] return; }
L_0047E13C:
    c.r[5].d[0] = 0ull | 62823ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 64460ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 36745ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 2870ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E164u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047E164u) [[unlikely]] return; }
L_0047E164:
    c.r[5].d[0] = 0ull | 65391ull;
    c.r[5].d[0] = c.r[5].d[0] << 18;
    c.r[5].d[0] = c.r[5].d[0] | 47025ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 42204ull;
    c.r[5].d[0] = c.r[5].d[0] << 11;
    c.r[5].d[0] = c.r[5].d[0] | 1294ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E18Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047E18Cu) [[unlikely]] return; }
L_0047E18C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E198u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047E198u) [[unlikely]] return; }
L_0047E198:
    c.r[5].d[0] = 0ull | 65357ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    c.r[5].d[0] = c.r[5].d[0] | 33386ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    c.r[5].d[0] = c.r[5].d[0] | 40800ull;
    c.r[5].d[0] = c.r[5].d[0] << 8;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E1BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047E1BCu) [[unlikely]] return; }
L_0047E1BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047E1D0; } }
L_0047E1C8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0047E1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E1D8u);  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047E1D8u) [[unlikely]] return; }
L_0047E1D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E1DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0047E1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E214u); st32((c.r[16].w[0] + 8276u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 112u, depth + 1u); else { c.pc = 0x00480520u; return; } if (c.pc != 0x0047E214u) [[unlikely]] return; }
L_0047E214:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_0047E234; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8276u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0047E230; }
L_0047E230:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E234:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E248:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E270u); st32((c.r[17].w[0] + 8276u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 118u, depth + 1u); else { c.pc = 0x004805E0u; return; } if (c.pc != 0x0047E270u) [[unlikely]] return; }
L_0047E270:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_0047E290; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8276u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0047E28C; }
L_0047E28C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E290:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E2A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 8276u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E2D4u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 113u, depth + 1u); else { c.pc = 0x00480528u; return; } if (c.pc != 0x0047E2D4u) [[unlikely]] return; }
L_0047E2D4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_0047E2F4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8276u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0047E2F0; }
L_0047E2F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E2F4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E308:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 8276u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E334u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 109u, depth + 1u); else { c.pc = 0x004804A8u; return; } if (c.pc != 0x0047E334u) [[unlikely]] return; }
L_0047E334:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_0047E354; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8276u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0047E350; }
L_0047E350:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E354:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E368:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E38Cu); st32((c.r[17].w[0] + 8276u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 114u, depth + 1u); else { c.pc = 0x00480530u; return; } if (c.pc != 0x0047E38Cu) [[unlikely]] return; }
L_0047E38C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_0047E3B0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8276u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0047E3AC; }
L_0047E3AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E3B0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E3C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 8276u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E3F4u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 106u, depth + 1u); else { c.pc = 0x00480428u; return; } if (c.pc != 0x0047E3F4u) [[unlikely]] return; }
L_0047E3F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_0047E414; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8276u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0047E410; }
L_0047E410:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E414:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E428:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047E460; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 14268u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E458u); set32(c.r[5], c.r[5].w[0] - 7128u);  if (depth < kMaxDepth) unit_00DD(c, 100u, depth + 1u); else { c.pc = 0x004755C8u; return; } if (c.pc != 0x0047E458u) [[unlikely]] return; }
L_0047E458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  if (t) { goto L_0047E520; } }
L_0047E460:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_0047E480; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14268u)));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
L_0047E480:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  goto L_0047E498; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E494u);  if (depth < kMaxDepth) unit_00DF(c, 170u, depth + 1u); else { c.pc = 0x0047E5A0u; return; } if (c.pc != 0x0047E494u) [[unlikely]] return; }
L_0047E494:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0047E498:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047E51C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0047E4CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  if (t) { goto L_0047E520; } }
L_0047E4B8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0047E51C; } }
L_0047E4CC:
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);  if (t) { goto L_0047E4E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0047E4E4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[17].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0047E518; } }
    c.budget -= 1;
L_0047E4F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E504u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E504u) [[unlikely]] return; }
L_0047E504:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E4B8u | kUnwind; return; } goto L_0047E4B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E4F0u | kUnwind; return; } goto L_0047E4F0; } }
L_0047E518:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0047E51C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E520:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0047E538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 23096u);
    set32(c.r[3], c.r[3].w[0] + 23200u);
    set32(c.r[8], c.r[8].w[0] + 23328u);
    set32(c.r[9], c.r[9].w[0] + 23432u);
    st32((c.r[4].w[0] + 84u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[9].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[4].w[0]);  c.pc = t; return; }
L_0047E590:
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_0047E5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 21880u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], c.r[16].w[0] + 484u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E5E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 168u, depth + 1u); else { c.pc = 0x0047E538u; return; } if (c.pc != 0x0047E5E0u) [[unlikely]] return; }
L_0047E5E0:
    set32(c.r[4], c.r[16].w[0] + 572u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E5F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00DF(c, 168u, depth + 1u); else { c.pc = 0x0047E538u; return; } if (c.pc != 0x0047E5F4u) [[unlikely]] return; }
L_0047E5F4:
    set32(c.r[4], c.r[16].w[0] + 660u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E608u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00DF(c, 168u, depth + 1u); else { c.pc = 0x0047E538u; return; } if (c.pc != 0x0047E608u) [[unlikely]] return; }
L_0047E608:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 480u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 472u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E630:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[12]);
    st32((c.r[29].w[0] + 68u), c.f[14]);
    st32((c.r[29].w[0] + 72u), c.f[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E668u); st32((c.r[29].w[0] + 76u), c.f[18]);  if (depth < kMaxDepth) unit_00DE(c, 278u, depth + 1u); else { c.pc = 0x0047B108u; return; } if (c.pc != 0x0047E668u) [[unlikely]] return; }
L_0047E668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047E678:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] - 1u);  if (t) { goto L_0047E6A0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 2;
L_0047E688:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E688u | kUnwind; return; } goto L_0047E688; } }
L_0047E6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047E6A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[22].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047E700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047E794; } }
L_0047E6E8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { breakpoint(c, 0x0047E6ECu);  goto L_0047E6F0; }
L_0047E6F0:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_0047E798; } }
L_0047E700:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0047E70C; }
L_0047E70C:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0047E768; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0047E728:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E738u); set32(c.r[19], c.r[19].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 176u, depth + 1u); else { c.pc = 0x0047E678u; return; } if (c.pc != 0x0047E738u) [[unlikely]] return; }
L_0047E738:
    set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E750u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 111u, depth + 1u); else { c.pc = 0x004757B0u; return; } if (c.pc != 0x0047E750u) [[unlikely]] return; }
L_0047E750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] - c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E6E8u | kUnwind; return; } goto L_0047E6E8; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E728u | kUnwind; return; } goto L_0047E728; }
L_0047E768:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E778u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 176u, depth + 1u); else { c.pc = 0x0047E678u; return; } if (c.pc != 0x0047E778u) [[unlikely]] return; }
L_0047E778:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_0047E794:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0047E798:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047E7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047E940; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_0047E800; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14268u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 5;
L_0047E800:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0047E818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E814u);  if (depth < kMaxDepth) unit_00DF(c, 170u, depth + 1u); else { c.pc = 0x0047E5A0u; return; } if (c.pc != 0x0047E814u) [[unlikely]] return; }
L_0047E814:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0047E818:
    c.r[3].d[0] = c.r[2].d[0] & 65503ull;
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0047E86C; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_0047E8A0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0047E864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 162u, depth + 1u); else { c.pc = 0x0047E428u; return; } if (c.pc != 0x0047E844u) [[unlikely]] return; }
L_0047E844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0047E940; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 6;
L_0047E864:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0047E86C:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0047E8C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0047E8A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 1088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E8A0u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_00E0(c, 106u, depth + 1u); else { c.pc = 0x00480428u; return; } if (c.pc != 0x0047E8A0u) [[unlikely]] return; }
L_0047E8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0047E940; } }
L_0047E8A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0047E940; } }
L_0047E8C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0047E90C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0047E90C; }
    c.r[2].d[0] = ld8((c.r[4].w[0] - 1u));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0047E90C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0047E940; } }
L_0047E90C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[16].w[0] + 64u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[16].w[0] + 66u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[6].w[0]);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 13;
L_0047E940:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E958:
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0047E964u);  goto L_0047E968; }
L_0047E968:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0047E990; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[6].d[0] = ld32((c.r[29].w[0]));  if (t) { goto L_0047E9A8; } }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0047E99C; } }
L_0047E990:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0047E9A4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0047E99C:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_0047E9A4:
    c.r[6].d[0] = ld32((c.r[29].w[0]));
    c.budget -= 1;
L_0047E9A8:
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047E9D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047EA0C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EA04u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00DF(c, 258u, depth + 1u); else { c.pc = 0x0047F978u; return; } if (c.pc != 0x0047EA04u) [[unlikely]] return; }
L_0047EA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0047EA54; } }
L_0047EA0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047EA30; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0047EA60; } }
L_0047EA30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EA48u); set32(c.r[6], c.r[6].w[0] + 20u);  if (depth < kMaxDepth) unit_00DF(c, 258u, depth + 1u); else { c.pc = 0x0047F978u; return; } if (c.pc != 0x0047EA48u) [[unlikely]] return; }
L_0047EA48:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[3].w[0] + 4u), c.r[17].w[0]);  goto L_0047EA5C; }
L_0047EA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047EA6C; } }
L_0047EA5C:
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_0047EA60:
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 3;
L_0047EA6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047EA80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047EAAC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 9;
L_0047EAAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047EAB8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[17].w[0] + 20u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 14;
L_0047EAF0:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = c.r[9].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] >> 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[4].w[0] >> 16);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] << 16);
    set32(c.r[19], c.r[3].w[0] >> 16);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EAF0u | kUnwind; return; } goto L_0047EAF0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047EBA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_0047EB8C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB5Cu); set32(c.r[5], c.r[5].w[0] + 1u);  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047EB5Cu) [[unlikely]] return; }
L_0047EB5C:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 12u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB78u); set32(c.r[6], c.r[6].w[0] + 8u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047EB78u) [[unlikely]] return; }
L_0047EB78:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB84u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x0047EB84u) [[unlikely]] return; }
L_0047EB84:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0047EB8C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_0047EBA0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047EBC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 9u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[20].w[0] + 8u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 17;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0047EC00u);  goto L_0047EC04; }
L_0047EC04:
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0047EC38; } }
    c.budget -= 1;
L_0047EC20:
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EC20u | kUnwind; return; } goto L_0047EC20; } }
L_0047EC38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC44u); set32(c.r[17], 0u + 9u);  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047EC44u) [[unlikely]] return; }
L_0047EC44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 20u), c.r[21].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0047EC98; } }
    set32(c.r[16], c.r[16].w[0] + 9u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
L_0047EC68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC80u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00DF(c, 193u, depth + 1u); else { c.pc = 0x0047EAB8u; return; } if (c.pc != 0x0047EC80u) [[unlikely]] return; }
L_0047EC80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EC68u | kUnwind; return; } goto L_0047EC68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0047EC9C; } }
L_0047EC98:
    set32(c.r[16], c.r[16].w[0] + 10u);
    c.budget -= 1;
L_0047EC9C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] - c.r[17].w[0]);  if (t) { goto L_0047ECCC; } }
L_0047ECA8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ECC4u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00DF(c, 193u, depth + 1u); else { c.pc = 0x0047EAB8u; return; } if (c.pc != 0x0047ECC4u) [[unlikely]] return; }
L_0047ECC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047ECA8u | kUnwind; return; } goto L_0047ECA8; } }
L_0047ECCC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0047ECF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0047ED10; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.budget -= 2;
L_0047ED10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0047ED28; } }
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.budget -= 2;
L_0047ED28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0047ED40; } }
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 2;
L_0047ED40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0047ED58; } }
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 2;
L_0047ED58:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0047ED70; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0047ED74; } }
L_0047ED70:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0047ED74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047ED80:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0047EDC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 2ull;  if (t) { goto L_0047EDA0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0047EDA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] >> 2);  goto L_0047EDB8; }
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0047EDB8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0047EDC4:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0047EDD8; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.budget -= 2;
L_0047EDD8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_0047EDF0; } }
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 3;
L_0047EDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_0047EE04; } }
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 3;
L_0047EE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0047EE18; } }
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
L_0047EE18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[4].w[0]), c.r[3].w[0]);  goto L_0047EE38; }
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0047EE34; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 32u);  c.pc = t; return; }
L_0047EE34:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0047EE38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0047EE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EE58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047EE58u) [[unlikely]] return; }
L_0047EE58:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047EE78:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[24].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0047EEC0; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 2;
L_0047EEC0:
    set32(c.r[21], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[18], c.r[21].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EEE0u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047EEE0u) [[unlikely]] return; }
L_0047EEE0:
    c.r[24].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[10], c.r[24].w[0] + 20u);
    set32(c.r[25], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_0047EF20; } }
    st32((c.r[10].w[0]), 0u);
    c.budget -= 2;
L_0047EF08:
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[2].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[10].w[0]), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EF08u | kUnwind; return; } goto L_0047EF08; }
L_0047EF20:
    c.r[14].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[20], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[15], c.r[24].w[0] + 20u);
    set32(c.r[16], c.r[25].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = c.r[15].d[0] + 0ull;
    c.r[2].d[0] = c.r[14].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[18].w[0] << 2);  if (t) { goto L_0047F034; } }
L_0047EF48:
    c.r[12].d[0] = ld16((c.r[14].w[0]));
    set32(c.r[19], c.r[14].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[17], c.r[15].w[0] + 4u);  if (t) { goto L_0047EFBC; } }
    c.r[10].d[0] = c.r[25].d[0] + 0ull;
    c.r[8].d[0] = c.r[15].d[0] + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0047EF68:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[6].d[0] = c.r[10].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] >> 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] >> 16);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[13], c.r[2].w[0] >> 16);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[3].w[0] + c.r[13].w[0]);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[13], c.r[5].w[0] >> 16);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EF68u | kUnwind; return; } goto L_0047EF68; } }
    st32((c.r[8].w[0]), c.r[13].w[0]);
    c.budget -= 1;
L_0047EFBC:
    c.r[12].d[0] = ld16((c.r[14].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull; c.r[8].d[0] = c.r[15].d[0] + 0ull;  if (t) { goto L_0047F024; } }
    c.r[10].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0047EFD8:
    c.r[2].d[0] = ld16((c.r[10].w[0]));
    c.r[3].d[0] = ld16((c.r[8].w[0] + 2u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[13], c.r[2].w[0] >> 16);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[2].d[0] = ld16((c.r[10].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[10].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[13].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[13], c.r[5].w[0] >> 16);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFD8u | kUnwind; return; } goto L_0047EFD8; } }
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0047F024:
    c.r[14].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[14].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EF48u | kUnwind; return; } goto L_0047EF48; } }
L_0047F034:
    set32(c.r[8], c.r[22].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_0047F038:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { st32((c.r[24].w[0] + 16u), c.r[18].w[0]);  goto L_0047F054; }
    set32(c.r[8], c.r[8].w[0] - 4u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F038u | kUnwind; return; } goto L_0047F038; }
    st32((c.r[24].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_0047F054:
    c.r[2].d[0] = c.r[24].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047F080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[17].d[0] & 3ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047F0D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 1016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F0CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 193u, depth + 1u); else { c.pc = 0x0047EAB8u; return; } if (c.pc != 0x0047F0CCu) [[unlikely]] return; }
L_0047F0CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047F0D0:
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047F164; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] & 1ull;  if (t) { goto L_0047F130; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F0F4u); set32(c.r[5], 0u + 625u);  if (depth < kMaxDepth) unit_00DF(c, 211u, depth + 1u); else { c.pc = 0x0047EE40u; return; } if (c.pc != 0x0047F0F4u) [[unlikely]] return; }
L_0047F0F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_0047F12C; } }
    c.budget -= 1;
L_0047F108:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0047F12C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F120u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 213u, depth + 1u); else { c.pc = 0x0047EE78u; return; } if (c.pc != 0x0047F120u) [[unlikely]] return; }
L_0047F120:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0047F12C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 1;
L_0047F130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047F154; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F144u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 213u, depth + 1u); else { c.pc = 0x0047EE78u; return; } if (c.pc != 0x0047F144u) [[unlikely]] return; }
L_0047F144:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F154u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x0047F154u) [[unlikely]] return; }
L_0047F154:
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F108u | kUnwind; return; } goto L_0047F108; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0047F164:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0047F180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 5));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0047F1E8; } }
    c.budget -= 1;
L_0047F1D0:
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F1D0u | kUnwind; return; } goto L_0047F1D0; } }
L_0047F1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F1F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047F1F0u) [[unlikely]] return; }
L_0047F1F0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] & 31ull;
    set32(c.r[3], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[8], c.r[19].w[0] + 20u);  if (t) { goto L_0047F220; } }
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047F208:
    st32((c.r[8].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F208u | kUnwind; return; } goto L_0047F208; } }
L_0047F220:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0047F280; } }
    set32(c.r[2], 0u + 32u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[9], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_0047F248:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] >> (c.r[5].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F248u | kUnwind; return; } goto L_0047F248; } }
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[9].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_0047F298; } }
    c.budget -= 1;
L_0047F280:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F280u | kUnwind; return; } goto L_0047F280; } }
L_0047F298:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F2ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x0047F2ACu) [[unlikely]] return; }
L_0047F2AC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0047F2D8:
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] << 2);  if (t) { goto L_0047F304; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047F2F4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0047F304:
    set32(c.r[7], c.r[4].w[0] + 20u);
    set32(c.r[2], c.r[5].w[0] + 20u);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 5;
L_0047F318:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F2F4u | kUnwind; return; } goto L_0047F2F4; }
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F318u | kUnwind; return; } goto L_0047F318; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0047F340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 234u, depth + 1u); else { c.pc = 0x0047F2D8u; return; } if (c.pc != 0x0047F370u) [[unlikely]] return; }
L_0047F370:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0047F398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047F384u) [[unlikely]] return; }
L_0047F384:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[11].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[11].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0047F4AC; } }
L_0047F398:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047F3B0; } }
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], 0u + 1u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 4;
L_0047F3B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F3BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047F3BCu) [[unlikely]] return; }
L_0047F3BC:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 20u);
    st32((c.r[11].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[9], c.r[18].w[0] + 20u);
    set32(c.r[7], c.r[11].w[0] + 20u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[12], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[12].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[13], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[9].w[0] + c.r[2].w[0]);
    c.budget -= 13;
L_0047F3F0:
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] >> 16);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 16);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F3F0u | kUnwind; return; } goto L_0047F3F0; } }
    c.r[2].d[0] = c.r[8].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] - 4u);  goto L_0047F480; }
L_0047F448:
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[8].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 16);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[2].w[0] + c.r[10].w[0]);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F448u | kUnwind; return; } goto L_0047F448; } }
    set32(c.r[7], c.r[7].w[0] - 4u);
    c.budget -= 1;
L_0047F480:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[11].w[0] + 16u), c.r[12].w[0]);  goto L_0047F4AC; }
    c.budget -= 1;
L_0047F490:
    set32(c.r[7], c.r[7].w[0] - 4u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F490u | kUnwind; return; } goto L_0047F490; } }
    st32((c.r[11].w[0] + 16u), c.r[12].w[0]);
    c.budget -= 1;
L_0047F4AC:
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0047F4D0:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFCC00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[2], 0u - c.r[4].w[0]);  if (t) { goto L_0047F510; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (t) { goto L_0047F590; } }
L_0047F510:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0047F548; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (t) { goto L_0047F590; } }
L_0047F548:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[4], c.r[4].w[0] - 20u);
    c.r[2].d[0] = c.r[4].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (t) { goto L_0047F574; } }
    set32(c.r[2], 0u + 31u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_0047F578; } }
L_0047F574:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0047F578:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_0047F590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0047F598:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[4].w[0] + 20u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - 4u);
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F5D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 205u, depth + 1u); else { c.pc = 0x0047ECF8u; return; } if (c.pc != 0x0047F5D8u) [[unlikely]] return; }
L_0047F5D8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 32u);
    c.r[3].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F658; } }
    set32(c.r[2], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[2], c.r[19].w[0] >> (c.r[2].w[0] & 31u));
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0047F628; } }
    set32(c.r[4], ld32((c.r[18].w[0] - 4u)));
    c.budget -= 1;
L_0047F628:
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], c.r[6].w[0] + 21u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[19].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[4].w[0] >> (c.r[2].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] >> 32;  if (t) { goto L_0047F708; } }
L_0047F658:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0047F66C; } }
    set32(c.r[18], c.r[18].w[0] - 4u);
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_0047F66C:
    set32(c.r[6], c.r[6].w[0] - 11u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u - c.r[6].w[0]);  if (t) { goto L_0047F6D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    set32(c.r[2], c.r[7].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[19].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0047F6B0; } }
    set32(c.r[19], ld32((c.r[18].w[0] - 4u)));
    c.budget -= 1;
L_0047F6B0:
    set32(c.r[2], 0u - c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[19].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] >> 32;  if (t) { goto L_0047F708; } }
L_0047F6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[17].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 12;
L_0047F708:
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047F730:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F764u); c.r[21].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x0047F764u) [[unlikely]] return; }
L_0047F764:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[19], c.r[17].w[0] + 20u);
    c.r[18].d[0] = c.r[16].d[0] >> 52;
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0047F7B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0047F7B4:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F7CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 206u, depth + 1u); else { c.pc = 0x0047ED80u; return; } if (c.pc != 0x0047F7CCu) [[unlikely]] return; }
L_0047F7CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0047F7FC; } }
    set32(c.r[4], 0u - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] >> (c.r[5].w[0] & 31u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0047F804; } }
L_0047F7FC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0047F804:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0047F844; } }
L_0047F824:
    c.r[4].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F830u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00DF(c, 206u, depth + 1u); else { c.pc = 0x0047ED80u; return; } if (c.pc != 0x0047F830u) [[unlikely]] return; }
L_0047F830:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 32u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 5;
L_0047F844:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1075u);  if (t) { goto L_0047F860; } }
    set32(c.r[3], 0u + 53u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F880; } }
L_0047F860:
    set32(c.r[3], c.r[5].w[0] - 1074u);
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F878u); set32(c.r[4], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_00DF(c, 205u, depth + 1u); else { c.pc = 0x0047ECF8u; return; } if (c.pc != 0x0047F878u) [[unlikely]] return; }
L_0047F878:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_0047F880:
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047F8B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F8D4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 246u, depth + 1u); else { c.pc = 0x0047F598u; return; } if (c.pc != 0x0047F8D4u) [[unlikely]] return; }
L_0047F8D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F8E4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 246u, depth + 1u); else { c.pc = 0x0047F598u; return; } if (c.pc != 0x0047F8E4u) [[unlikely]] return; }
L_0047F8E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] << 20);  if (t) { goto L_0047F930; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[18].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];  if (t) { goto L_0047F94C; } }
L_0047F930:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 7;
L_0047F94C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F958u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0047F958u) [[unlikely]] return; }
L_0047F958:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0047F970:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0047F978:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F994u);  if (depth < kMaxDepth) unit_00DF(c, 8u, depth + 1u); else { c.pc = 0x0047C2A8u; return; } if (c.pc != 0x0047F994u) [[unlikely]] return; }
L_0047F994:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] - 4u)));  goto L_0047F9A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047FA24; } }
L_0047F9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[3].w[0] - 4u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;  if (t) { goto L_0047FA14; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0047FA00; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0047FA00; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_0047FA00; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], c.r[16].w[0] + 24u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 3;
L_0047FA00:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0047FA20; } }
L_0047FA14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FA20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0047FA20u) [[unlikely]] return; }
L_0047FA20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047FA24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047FA40:
    set32(c.r[3], 0u);
    c.budget -= 1;
    c.pc = 0x0047FA48u; syscall(c, 0x0047FA44u); if (c.pc != 0x0047FA48u) return;
    c.budget -= 1;
L_0047FA48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FA50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
    c.pc = 0x0047FA58u; syscall(c, 0x0047FA54u); if (c.pc != 0x0047FA58u) return;
    c.budget -= 1;
L_0047FA58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FA60:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
    c.pc = 0x0047FA68u; syscall(c, 0x0047FA64u); if (c.pc != 0x0047FA68u) return;
    c.budget -= 1;
L_0047FA68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FA70:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
    c.pc = 0x0047FA78u; syscall(c, 0x0047FA74u); if (c.pc != 0x0047FA78u) return;
    c.budget -= 1;
L_0047FA78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FA80:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    c.pc = 0x0047FA88u; syscall(c, 0x0047FA84u); if (c.pc != 0x0047FA88u) return;
    c.budget -= 1;
L_0047FA88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FA90:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
    c.pc = 0x0047FA98u; syscall(c, 0x0047FA94u); if (c.pc != 0x0047FA98u) return;
    c.budget -= 1;
L_0047FA98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FAA0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
    c.pc = 0x0047FAA8u; syscall(c, 0x0047FAA4u); if (c.pc != 0x0047FAA8u) return;
    c.budget -= 1;
L_0047FAA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FAB0:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
    c.pc = 0x0047FAB8u; syscall(c, 0x0047FAB4u); if (c.pc != 0x0047FAB8u) return;
    c.budget -= 1;
L_0047FAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FAC0:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
    c.pc = 0x0047FAC8u; syscall(c, 0x0047FAC4u); if (c.pc != 0x0047FAC8u) return;
    c.budget -= 1;
L_0047FAC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FAD0:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
    c.pc = 0x0047FAD8u; syscall(c, 0x0047FAD4u); if (c.pc != 0x0047FAD8u) return;
    c.budget -= 1;
L_0047FAD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FAE0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
    c.pc = 0x0047FAE8u; syscall(c, 0x0047FAE4u); if (c.pc != 0x0047FAE8u) return;
    c.budget -= 1;
L_0047FAE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FAF0:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
    c.pc = 0x0047FAF8u; syscall(c, 0x0047FAF4u); if (c.pc != 0x0047FAF8u) return;
    c.budget -= 1;
L_0047FAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB00:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
    c.pc = 0x0047FB08u; syscall(c, 0x0047FB04u); if (c.pc != 0x0047FB08u) return;
    c.budget -= 1;
L_0047FB08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB10:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
    c.pc = 0x0047FB18u; syscall(c, 0x0047FB14u); if (c.pc != 0x0047FB18u) return;
    c.budget -= 1;
L_0047FB18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB20:
    set32(c.r[3], 0u + 14u);
    c.budget -= 1;
    c.pc = 0x0047FB28u; syscall(c, 0x0047FB24u); if (c.pc != 0x0047FB28u) return;
    c.budget -= 1;
L_0047FB28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB30:
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
    c.pc = 0x0047FB38u; syscall(c, 0x0047FB34u); if (c.pc != 0x0047FB38u) return;
    c.budget -= 1;
L_0047FB38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB40:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x0047FB48u; syscall(c, 0x0047FB44u); if (c.pc != 0x0047FB48u) return;
    c.budget -= 1;
L_0047FB48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB50:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x0047FB58u; syscall(c, 0x0047FB54u); if (c.pc != 0x0047FB58u) return;
    c.budget -= 1;
L_0047FB58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB60:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
    c.pc = 0x0047FB68u; syscall(c, 0x0047FB64u); if (c.pc != 0x0047FB68u) return;
    c.budget -= 1;
L_0047FB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB70:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x0047FB78u; syscall(c, 0x0047FB74u); if (c.pc != 0x0047FB78u) return;
    c.budget -= 1;
L_0047FB78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB80:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x0047FB88u; syscall(c, 0x0047FB84u); if (c.pc != 0x0047FB88u) return;
    c.budget -= 1;
L_0047FB88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FB90:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
    c.pc = 0x0047FB98u; syscall(c, 0x0047FB94u); if (c.pc != 0x0047FB98u) return;
    c.budget -= 1;
L_0047FB98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FBA0:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
    c.pc = 0x0047FBA8u; syscall(c, 0x0047FBA4u); if (c.pc != 0x0047FBA8u) return;
    c.budget -= 1;
L_0047FBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FBB0:
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
    c.pc = 0x0047FBB8u; syscall(c, 0x0047FBB4u); if (c.pc != 0x0047FBB8u) return;
    c.budget -= 1;
L_0047FBB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FBC0:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
    c.pc = 0x0047FBC8u; syscall(c, 0x0047FBC4u); if (c.pc != 0x0047FBC8u) return;
    c.budget -= 1;
L_0047FBC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FBD0:
    set32(c.r[3], 0u + 23u);
    c.budget -= 1;
    c.pc = 0x0047FBD8u; syscall(c, 0x0047FBD4u); if (c.pc != 0x0047FBD8u) return;
    c.budget -= 1;
L_0047FBD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FBE0:
    set32(c.r[3], 0u + 252u);
    c.budget -= 1;
    c.pc = 0x0047FBE8u; syscall(c, 0x0047FBE4u); if (c.pc != 0x0047FBE8u) return;
    c.budget -= 1;
L_0047FBE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FBF0:
    set32(c.r[3], 0u + 253u);
    c.budget -= 1;
    c.pc = 0x0047FBF8u; syscall(c, 0x0047FBF4u); if (c.pc != 0x0047FBF8u) return;
    c.budget -= 1;
L_0047FBF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC00:
    set32(c.r[3], 0u - 26u);
    c.budget -= 1;
    c.pc = 0x0047FC08u; syscall(c, 0x0047FC04u); if (c.pc != 0x0047FC08u) return;
    c.budget -= 1;
L_0047FC08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC10:
    set32(c.r[3], 0u - 27u);
    c.budget -= 1;
    c.pc = 0x0047FC18u; syscall(c, 0x0047FC14u); if (c.pc != 0x0047FC18u) return;
    c.budget -= 1;
L_0047FC18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC20:
    set32(c.r[3], 0u - 28u);
    c.budget -= 1;
    c.pc = 0x0047FC28u; syscall(c, 0x0047FC24u); if (c.pc != 0x0047FC28u) return;
    c.budget -= 1;
L_0047FC28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC30:
    set32(c.r[3], 0u - 29u);
    c.budget -= 1;
    c.pc = 0x0047FC38u; syscall(c, 0x0047FC34u); if (c.pc != 0x0047FC38u) return;
    c.budget -= 1;
L_0047FC38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC40:
    set32(c.r[3], 0u - 254u);
    c.budget -= 1;
    c.pc = 0x0047FC48u; syscall(c, 0x0047FC44u); if (c.pc != 0x0047FC48u) return;
    c.budget -= 1;
L_0047FC48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC50:
    set32(c.r[3], 0u - 255u);
    c.budget -= 1;
    c.pc = 0x0047FC58u; syscall(c, 0x0047FC54u); if (c.pc != 0x0047FC58u) return;
    c.budget -= 1;
L_0047FC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC60:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
    c.pc = 0x0047FC68u; syscall(c, 0x0047FC64u); if (c.pc != 0x0047FC68u) return;
    c.budget -= 1;
L_0047FC68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC70:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
    c.pc = 0x0047FC78u; syscall(c, 0x0047FC74u); if (c.pc != 0x0047FC78u) return;
    c.budget -= 1;
L_0047FC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC80:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
    c.pc = 0x0047FC88u; syscall(c, 0x0047FC84u); if (c.pc != 0x0047FC88u) return;
    c.budget -= 1;
L_0047FC88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC90:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x0047FC98u; syscall(c, 0x0047FC94u); if (c.pc != 0x0047FC98u) return;
    c.budget -= 1;
L_0047FC98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FCA0:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
    c.pc = 0x0047FCA8u; syscall(c, 0x0047FCA4u); if (c.pc != 0x0047FCA8u) return;
    c.budget -= 1;
L_0047FCA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FCB0:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
    c.pc = 0x0047FCB8u; syscall(c, 0x0047FCB4u); if (c.pc != 0x0047FCB8u) return;
    c.budget -= 1;
L_0047FCB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FCC0:
    set32(c.r[3], 0u - 38u);
    c.budget -= 1;
    c.pc = 0x0047FCC8u; syscall(c, 0x0047FCC4u); if (c.pc != 0x0047FCC8u) return;
    c.budget -= 1;
L_0047FCC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FCD0:
    set32(c.r[3], 0u + 39u);
    c.budget -= 1;
    c.pc = 0x0047FCD8u; syscall(c, 0x0047FCD4u); if (c.pc != 0x0047FCD8u) return;
    c.budget -= 1;
L_0047FCD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FCE0:
    set32(c.r[3], 0u + 40u);
    c.budget -= 1;
    c.pc = 0x0047FCE8u; syscall(c, 0x0047FCE4u); if (c.pc != 0x0047FCE8u) return;
    c.budget -= 1;
L_0047FCE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FCF0:
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
    c.pc = 0x0047FCF8u; syscall(c, 0x0047FCF4u); if (c.pc != 0x0047FCF8u) return;
    c.budget -= 1;
L_0047FCF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD00:
    set32(c.r[3], 0u - 42u);
    c.budget -= 1;
    c.pc = 0x0047FD08u; syscall(c, 0x0047FD04u); if (c.pc != 0x0047FD08u) return;
    c.budget -= 1;
L_0047FD08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD10:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
    c.pc = 0x0047FD18u; syscall(c, 0x0047FD14u); if (c.pc != 0x0047FD18u) return;
    c.budget -= 1;
L_0047FD18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD20:
    set32(c.r[3], 0u - 44u);
    c.budget -= 1;
    c.pc = 0x0047FD28u; syscall(c, 0x0047FD24u); if (c.pc != 0x0047FD28u) return;
    c.budget -= 1;
L_0047FD28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD30:
    set32(c.r[3], 0u + 45u);
    c.budget -= 1;
    c.pc = 0x0047FD38u; syscall(c, 0x0047FD34u); if (c.pc != 0x0047FD38u) return;
    c.budget -= 1;
L_0047FD38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD40:
    set32(c.r[3], 0u - 46u);
    c.budget -= 1;
    c.pc = 0x0047FD48u; syscall(c, 0x0047FD44u); if (c.pc != 0x0047FD48u) return;
    c.budget -= 1;
L_0047FD48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD50:
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
    c.pc = 0x0047FD58u; syscall(c, 0x0047FD54u); if (c.pc != 0x0047FD58u) return;
    c.budget -= 1;
L_0047FD58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD60:
    set32(c.r[3], 0u + 48u);
    c.budget -= 1;
    c.pc = 0x0047FD68u; syscall(c, 0x0047FD64u); if (c.pc != 0x0047FD68u) return;
    c.budget -= 1;
L_0047FD68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD70:
    set32(c.r[3], 0u - 49u);
    c.budget -= 1;
    c.pc = 0x0047FD78u; syscall(c, 0x0047FD74u); if (c.pc != 0x0047FD78u) return;
    c.budget -= 1;
L_0047FD78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD80:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
    c.pc = 0x0047FD88u; syscall(c, 0x0047FD84u); if (c.pc != 0x0047FD88u) return;
    c.budget -= 1;
L_0047FD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FD90:
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
    c.pc = 0x0047FD98u; syscall(c, 0x0047FD94u); if (c.pc != 0x0047FD98u) return;
    c.budget -= 1;
L_0047FD98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FDA0:
    set32(c.r[3], 0u - 52u);
    c.budget -= 1;
    c.pc = 0x0047FDA8u; syscall(c, 0x0047FDA4u); if (c.pc != 0x0047FDA8u) return;
    c.budget -= 1;
L_0047FDA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FDB0:
    set32(c.r[3], 0u + 53u);
    c.budget -= 1;
    c.pc = 0x0047FDB8u; syscall(c, 0x0047FDB4u); if (c.pc != 0x0047FDB8u) return;
    c.budget -= 1;
L_0047FDB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FDC0:
    set32(c.r[3], 0u - 54u);
    c.budget -= 1;
    c.pc = 0x0047FDC8u; syscall(c, 0x0047FDC4u); if (c.pc != 0x0047FDC8u) return;
    c.budget -= 1;
L_0047FDC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FDD0:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
    c.pc = 0x0047FDD8u; syscall(c, 0x0047FDD4u); if (c.pc != 0x0047FDD8u) return;
    c.budget -= 1;
L_0047FDD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FDE0:
    set32(c.r[3], 0u - 56u);
    c.budget -= 1;
    c.pc = 0x0047FDE8u; syscall(c, 0x0047FDE4u); if (c.pc != 0x0047FDE8u) return;
    c.budget -= 1;
L_0047FDE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FDF0:
    set32(c.r[3], 0u + 57u);
    c.budget -= 1;
    c.pc = 0x0047FDF8u; syscall(c, 0x0047FDF4u); if (c.pc != 0x0047FDF8u) return;
    c.budget -= 1;
L_0047FDF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE00:
    set32(c.r[3], 0u - 58u);
    c.budget -= 1;
    c.pc = 0x0047FE08u; syscall(c, 0x0047FE04u); if (c.pc != 0x0047FE08u) return;
    c.budget -= 1;
L_0047FE08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE10:
    set32(c.r[3], 0u + 59u);
    c.budget -= 1;
    c.pc = 0x0047FE18u; syscall(c, 0x0047FE14u); if (c.pc != 0x0047FE18u) return;
    c.budget -= 1;
L_0047FE18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE20:
    set32(c.r[3], 0u + 60u);
    c.budget -= 1;
    c.pc = 0x0047FE28u; syscall(c, 0x0047FE24u); if (c.pc != 0x0047FE28u) return;
    c.budget -= 1;
L_0047FE28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE30:
    set32(c.r[3], 0u + 61u);
    c.budget -= 1;
    c.pc = 0x0047FE38u; syscall(c, 0x0047FE34u); if (c.pc != 0x0047FE38u) return;
    c.budget -= 1;
L_0047FE38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE40:
    set32(c.r[3], 0u + 62u);
    c.budget -= 1;
    c.pc = 0x0047FE48u; syscall(c, 0x0047FE44u); if (c.pc != 0x0047FE48u) return;
    c.budget -= 1;
L_0047FE48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE50:
    set32(c.r[3], 0u + 63u);
    c.budget -= 1;
    c.pc = 0x0047FE58u; syscall(c, 0x0047FE54u); if (c.pc != 0x0047FE58u) return;
    c.budget -= 1;
L_0047FE58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE60:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
    c.pc = 0x0047FE68u; syscall(c, 0x0047FE64u); if (c.pc != 0x0047FE68u) return;
    c.budget -= 1;
L_0047FE68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE70:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
    c.pc = 0x0047FE78u; syscall(c, 0x0047FE74u); if (c.pc != 0x0047FE78u) return;
    c.budget -= 1;
L_0047FE78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE80:
    set32(c.r[3], 0u + 66u);
    c.budget -= 1;
    c.pc = 0x0047FE88u; syscall(c, 0x0047FE84u); if (c.pc != 0x0047FE88u) return;
    c.budget -= 1;
L_0047FE88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FE90:
    set32(c.r[3], 0u - 67u);
    c.budget -= 1;
    c.pc = 0x0047FE98u; syscall(c, 0x0047FE94u); if (c.pc != 0x0047FE98u) return;
    c.budget -= 1;
L_0047FE98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FEA0:
    set32(c.r[3], 0u + 68u);
    c.budget -= 1;
    c.pc = 0x0047FEA8u; syscall(c, 0x0047FEA4u); if (c.pc != 0x0047FEA8u) return;
    c.budget -= 1;
L_0047FEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FEB0:
    set32(c.r[3], 0u + 69u);
    c.budget -= 1;
    c.pc = 0x0047FEB8u; syscall(c, 0x0047FEB4u); if (c.pc != 0x0047FEB8u) return;
    c.budget -= 1;
L_0047FEB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FEC0:
    set32(c.r[3], 0u - 70u);
    c.budget -= 1;
    c.pc = 0x0047FEC8u; syscall(c, 0x0047FEC4u); if (c.pc != 0x0047FEC8u) return;
    c.budget -= 1;
L_0047FEC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FED0:
    set32(c.r[3], 0u + 71u);
    c.budget -= 1;
    c.pc = 0x0047FED8u; syscall(c, 0x0047FED4u); if (c.pc != 0x0047FED8u) return;
    c.budget -= 1;
L_0047FED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FEE0:
    set32(c.r[3], 0u - 72u);
    c.budget -= 1;
    c.pc = 0x0047FEE8u; syscall(c, 0x0047FEE4u); if (c.pc != 0x0047FEE8u) return;
    c.budget -= 1;
L_0047FEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FEF0:
    set32(c.r[3], 0u + 73u);
    c.budget -= 1;
    c.pc = 0x0047FEF8u; syscall(c, 0x0047FEF4u); if (c.pc != 0x0047FEF8u) return;
    c.budget -= 1;
L_0047FEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF00:
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
    c.pc = 0x0047FF08u; syscall(c, 0x0047FF04u); if (c.pc != 0x0047FF08u) return;
    c.budget -= 1;
L_0047FF08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF10:
    set32(c.r[3], 0u + 75u);
    c.budget -= 1;
    c.pc = 0x0047FF18u; syscall(c, 0x0047FF14u); if (c.pc != 0x0047FF18u) return;
    c.budget -= 1;
L_0047FF18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF20:
    set32(c.r[3], 0u + 76u);
    c.budget -= 1;
    c.pc = 0x0047FF28u; syscall(c, 0x0047FF24u); if (c.pc != 0x0047FF28u) return;
    c.budget -= 1;
L_0047FF28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF30:
    set32(c.r[3], 0u + 77u);
    c.budget -= 1;
    c.pc = 0x0047FF38u; syscall(c, 0x0047FF34u); if (c.pc != 0x0047FF38u) return;
    c.budget -= 1;
L_0047FF38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF40:
    set32(c.r[3], 0u + 78u);
    c.budget -= 1;
    c.pc = 0x0047FF48u; syscall(c, 0x0047FF44u); if (c.pc != 0x0047FF48u) return;
    c.budget -= 1;
L_0047FF48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF50:
    set32(c.r[3], 0u + 79u);
    c.budget -= 1;
    c.pc = 0x0047FF58u; syscall(c, 0x0047FF54u); if (c.pc != 0x0047FF58u) return;
    c.budget -= 1;
L_0047FF58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF60:
    set32(c.r[3], 0u + 80u);
    c.budget -= 1;
    c.pc = 0x0047FF68u; syscall(c, 0x0047FF64u); if (c.pc != 0x0047FF68u) return;
    c.budget -= 1;
L_0047FF68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF70:
    set32(c.r[3], 0u + 81u);
    c.budget -= 1;
    c.pc = 0x0047FF78u; syscall(c, 0x0047FF74u); if (c.pc != 0x0047FF78u) return;
    c.budget -= 1;
L_0047FF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF80:
    set32(c.r[3], 0u + 82u);
    c.budget -= 1;
    c.pc = 0x0047FF88u; syscall(c, 0x0047FF84u); if (c.pc != 0x0047FF88u) return;
    c.budget -= 1;
L_0047FF88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FF90:
    set32(c.r[3], 0u - 83u);
    c.budget -= 1;
    c.pc = 0x0047FF98u; syscall(c, 0x0047FF94u); if (c.pc != 0x0047FF98u) return;
    c.budget -= 1;
L_0047FF98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FFA0:
    set32(c.r[3], 0u + 84u);
    c.budget -= 1;
    c.pc = 0x0047FFA8u; syscall(c, 0x0047FFA4u); if (c.pc != 0x0047FFA8u) return;
    c.budget -= 1;
L_0047FFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FFB0:
    set32(c.r[3], 0u - 85u);
    c.budget -= 1;
    c.pc = 0x0047FFB8u; syscall(c, 0x0047FFB4u); if (c.pc != 0x0047FFB8u) return;
    c.budget -= 1;
L_0047FFB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FFC0:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x0047FFC8u; syscall(c, 0x0047FFC4u); if (c.pc != 0x0047FFC8u) return;
    c.budget -= 1;
L_0047FFC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FFD0:
    set32(c.r[3], 0u + 87u);
    c.budget -= 1;
    c.pc = 0x0047FFD8u; syscall(c, 0x0047FFD4u); if (c.pc != 0x0047FFD8u) return;
    c.budget -= 1;
L_0047FFD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FFE0:
    set32(c.r[3], 0u - 88u);
    c.budget -= 1;
    c.pc = 0x0047FFE8u; syscall(c, 0x0047FFE4u); if (c.pc != 0x0047FFE8u) return;
    c.budget -= 1;
L_0047FFE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FFF0:
    set32(c.r[3], 0u + 89u);
    c.budget -= 1;
    c.pc = 0x0047FFF8u; syscall(c, 0x0047FFF4u); if (c.pc != 0x0047FFF8u) return;
    c.budget -= 1;
L_0047FFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
