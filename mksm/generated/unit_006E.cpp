#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B8000;
    case 2u: goto L_002B801C;
    case 3u: goto L_002B8048;
    case 4u: goto L_002B8078;
    case 5u: goto L_002B80D4;
    case 6u: goto L_002B80E8;
    case 7u: goto L_002B8100;
    case 8u: goto L_002B8178;
    case 9u: goto L_002B8194;
    case 10u: goto L_002B81A8;
    case 11u: goto L_002B81C8;
    case 12u: goto L_002B8210;
    case 13u: goto L_002B8270;
    case 14u: goto L_002B82AC;
    case 15u: goto L_002B82C4;
    case 16u: goto L_002B833C;
    case 17u: goto L_002B8358;
    case 18u: goto L_002B836C;
    case 19u: goto L_002B83B0;
    case 20u: goto L_002B83C8;
    case 21u: goto L_002B83F0;
    case 22u: goto L_002B8418;
    case 23u: goto L_002B8458;
    case 24u: goto L_002B8478;
    case 25u: goto L_002B84A0;
    case 26u: goto L_002B84C8;
    case 27u: goto L_002B84F8;
    case 28u: goto L_002B8520;
    case 29u: goto L_002B8530;
    case 30u: goto L_002B8570;
    case 31u: goto L_002B85A0;
    case 32u: goto L_002B85C8;
    case 33u: goto L_002B8618;
    case 34u: goto L_002B8638;
    case 35u: goto L_002B8658;
    case 36u: goto L_002B8688;
    case 37u: goto L_002B86AC;
    case 38u: goto L_002B86CC;
    case 39u: goto L_002B871C;
    case 40u: goto L_002B8734;
    case 41u: goto L_002B875C;
    case 42u: goto L_002B8788;
    case 43u: goto L_002B87C0;
    case 44u: goto L_002B8808;
    case 45u: goto L_002B8858;
    case 46u: goto L_002B8868;
    case 47u: goto L_002B88D0;
    case 48u: goto L_002B88E4;
    case 49u: goto L_002B8920;
    case 50u: goto L_002B8930;
    case 51u: goto L_002B8948;
    case 52u: goto L_002B896C;
    case 53u: goto L_002B89A4;
    case 54u: goto L_002B89D4;
    case 55u: goto L_002B8A20;
    case 56u: goto L_002B8A38;
    case 57u: goto L_002B8A74;
    case 58u: goto L_002B8AD8;
    case 59u: goto L_002B8B68;
    case 60u: goto L_002B8B84;
    case 61u: goto L_002B8BAC;
    case 62u: goto L_002B8C00;
    case 63u: goto L_002B8C4C;
    case 64u: goto L_002B8C6C;
    case 65u: goto L_002B8C80;
    case 66u: goto L_002B8CD0;
    case 67u: goto L_002B8D10;
    case 68u: goto L_002B8D68;
    case 69u: goto L_002B8DB0;
    case 70u: goto L_002B8DFC;
    case 71u: goto L_002B8E40;
    case 72u: goto L_002B8EA8;
    case 73u: goto L_002B8EF4;
    case 74u: goto L_002B8F00;
    case 75u: goto L_002B8F34;
    case 76u: goto L_002B8F40;
    case 77u: goto L_002B8F58;
    case 78u: goto L_002B8F78;
    case 79u: goto L_002B8F94;
    case 80u: goto L_002B8FB4;
    case 81u: goto L_002B8FE0;
    case 82u: goto L_002B9008;
    case 83u: goto L_002B9014;
    case 84u: goto L_002B9030;
    case 85u: goto L_002B90B8;
    case 86u: goto L_002B90D0;
    case 87u: goto L_002B9114;
    case 88u: goto L_002B9120;
    case 89u: goto L_002B9160;
    case 90u: goto L_002B91A0;
    case 91u: goto L_002B920C;
    case 92u: goto L_002B9228;
    case 93u: goto L_002B9260;
    case 94u: goto L_002B9270;
    case 95u: goto L_002B92C8;
    case 96u: goto L_002B92F4;
    case 97u: goto L_002B933C;
    case 98u: goto L_002B9358;
    case 99u: goto L_002B93B8;
    case 100u: goto L_002B93C8;
    case 101u: goto L_002B9420;
    case 102u: goto L_002B9490;
    case 103u: goto L_002B94A0;
    case 104u: goto L_002B94B4;
    case 105u: goto L_002B94E0;
    case 106u: goto L_002B9510;
    case 107u: goto L_002B95B0;
    case 108u: goto L_002B95C4;
    case 109u: goto L_002B95D8;
    case 110u: goto L_002B95F0;
    case 111u: goto L_002B9610;
    case 112u: goto L_002B9660;
    case 113u: goto L_002B96B0;
    case 114u: goto L_002B96C0;
    case 115u: goto L_002B9714;
    case 116u: goto L_002B9728;
    case 117u: goto L_002B9740;
    case 118u: goto L_002B9758;
    case 119u: goto L_002B9780;
    case 120u: goto L_002B979C;
    case 121u: goto L_002B97F0;
    case 122u: goto L_002B9830;
    case 123u: goto L_002B984C;
    case 124u: goto L_002B9890;
    case 125u: goto L_002B98AC;
    case 126u: goto L_002B98F8;
    case 127u: goto L_002B992C;
    case 128u: goto L_002B9940;
    case 129u: goto L_002B9960;
    case 130u: goto L_002B9970;
    case 131u: goto L_002B99C4;
    case 132u: goto L_002B99E4;
    case 133u: goto L_002B9A08;
    case 134u: goto L_002B9A38;
    case 135u: goto L_002B9A68;
    case 136u: goto L_002B9A98;
    case 137u: goto L_002B9AB8;
    case 138u: goto L_002B9AD0;
    case 139u: goto L_002B9B14;
    case 140u: goto L_002B9B28;
    case 141u: goto L_002B9B50;
    case 142u: goto L_002B9B70;
    case 143u: goto L_002B9B8C;
    case 144u: goto L_002B9BA0;
    case 145u: goto L_002B9BB8;
    case 146u: goto L_002B9BC8;
    case 147u: goto L_002B9BF4;
    case 148u: goto L_002B9C0C;
    case 149u: goto L_002B9C40;
    case 150u: goto L_002B9D1C;
    case 151u: goto L_002B9EC0;
    case 152u: goto L_002B9EF8;
    case 153u: goto L_002B9F28;
    case 154u: goto L_002B9F3C;
    case 155u: goto L_002B9F5C;
    case 156u: goto L_002B9F7C;
    case 157u: goto L_002B9FC8;
    case 158u: goto L_002B9FD8;
    case 159u: goto L_002BA06C;
    case 160u: goto L_002BA088;
    case 161u: goto L_002BA0C8;
    case 162u: goto L_002BA0E4;
    case 163u: goto L_002BA1D4;
    case 164u: goto L_002BA220;
    case 165u: goto L_002BA238;
    case 166u: goto L_002BA258;
    case 167u: goto L_002BA334;
    case 168u: goto L_002BA388;
    case 169u: goto L_002BA3A0;
    case 170u: goto L_002BA420;
    case 171u: goto L_002BA488;
    case 172u: goto L_002BA588;
    case 173u: goto L_002BA5A0;
    case 174u: goto L_002BA620;
    case 175u: goto L_002BA638;
    case 176u: goto L_002BA680;
    case 177u: goto L_002BA720;
    case 178u: goto L_002BA73C;
    case 179u: goto L_002BA768;
    case 180u: goto L_002BA7C8;
    case 181u: goto L_002BA814;
    case 182u: goto L_002BA82C;
    case 183u: goto L_002BA850;
    case 184u: goto L_002BA8A8;
    case 185u: goto L_002BA8C0;
    case 186u: goto L_002BA968;
    case 187u: goto L_002BA9E0;
    case 188u: goto L_002BAA4C;
    case 189u: goto L_002BAACC;
    case 190u: goto L_002BAAFC;
    case 191u: goto L_002BAB30;
    case 192u: goto L_002BAB70;
    case 193u: goto L_002BABB4;
    case 194u: goto L_002BABE8;
    case 195u: goto L_002BAC5C;
    case 196u: goto L_002BAC9C;
    case 197u: goto L_002BACB4;
    case 198u: goto L_002BAD50;
    case 199u: goto L_002BAD80;
    case 200u: goto L_002BADBC;
    case 201u: goto L_002BAE00;
    case 202u: goto L_002BAE30;
    case 203u: goto L_002BAE6C;
    case 204u: goto L_002BAEA8;
    case 205u: goto L_002BAFB8;
    case 206u: goto L_002BB004;
    case 207u: goto L_002BB02C;
    case 208u: goto L_002BB0AC;
    case 209u: goto L_002BB0CC;
    case 210u: goto L_002BB150;
    case 211u: goto L_002BB1FC;
    case 212u: goto L_002BB224;
    case 213u: goto L_002BB298;
    case 214u: goto L_002BB2B8;
    case 215u: goto L_002BB2D4;
    case 216u: goto L_002BB2E4;
    case 217u: goto L_002BB314;
    case 218u: goto L_002BB450;
    case 219u: goto L_002BB518;
    case 220u: goto L_002BB540;
    case 221u: goto L_002BB76C;
    case 222u: goto L_002BB7D8;
    case 223u: goto L_002BB818;
    case 224u: goto L_002BB82C;
    case 225u: goto L_002BB840;
    case 226u: goto L_002BB850;
    case 227u: goto L_002BB88C;
    case 228u: goto L_002BB8A0;
    case 229u: goto L_002BB8D8;
    case 230u: goto L_002BB8F4;
    case 231u: goto L_002BB9C0;
    case 232u: goto L_002BB9D4;
    case 233u: goto L_002BBA18;
    case 234u: goto L_002BBA44;
    case 235u: goto L_002BBA68;
    case 236u: goto L_002BBA80;
    case 237u: goto L_002BBAD0;
    case 238u: goto L_002BBAFC;
    case 239u: goto L_002BBB10;
    case 240u: goto L_002BBB20;
    case 241u: goto L_002BBB8C;
    case 242u: goto L_002BBC10;
    case 243u: goto L_002BBCF0;
    case 244u: goto L_002BBD2C;
    case 245u: goto L_002BBD48;
    case 246u: goto L_002BBD70;
    case 247u: goto L_002BBDA0;
    case 248u: goto L_002BBE00;
    case 249u: goto L_002BBE1C;
    case 250u: goto L_002BBE28;
    case 251u: goto L_002BBE44;
    case 252u: goto L_002BBECC;
    case 253u: goto L_002BBF44;
    case 254u: goto L_002BBF70;
    case 255u: goto L_002BBFB0;
    default: bad_entry(c, 0x002B8000u); return;
    }
L_002B8000:
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 7;
L_002B801C:
    mmi::mult(c, 0, c.r[17].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] - 13248u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B8048; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[19].d[0];
    c.budget -= 4;
L_002B8048:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8078:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[21], c.r[2].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002B80C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B80D4; } }
L_002B80C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80D4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002B80D4u) [[unlikely]] return; }
L_002B80D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B83C8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80E8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002B80E8u) [[unlikely]] return; }
L_002B80E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8100u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002B8100u) [[unlikely]] return; }
L_002B8100:
    c.r[2].d[0] = c.r[20].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B81E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002B8130; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 7;
L_002B8130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[19], c.r[2].w[0] - 6080u);
    st32((c.r[18].w[0] + 7700u), 0u);
    st32((c.r[18].w[0] + 208u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 216u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 76u), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8178u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B8178u) [[unlikely]] return; }
L_002B8178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8194u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002B8194u) [[unlikely]] return; }
L_002B8194:
    c.f[12] = ld32((c.r[19].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81A8u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002B81A8u) [[unlikely]] return; }
L_002B81A8:
    c.r[2].d[0] = c.r[20].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B81C8; } }
    c.f[12] = ld32((c.r[19].w[0] + 132u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81C8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002B81C8u) [[unlikely]] return; }
L_002B81C8:
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 7;
L_002B81E4:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B82B4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B8218; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8210u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002B8210u) [[unlikely]] return; }
L_002B8210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B82C4; } }
L_002B8218:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] + 14208u);
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B8294; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8270u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002B8270u) [[unlikely]] return; }
L_002B8270:
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 27868u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B8294; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002B8294:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82ACu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002B82ACu) [[unlikely]] return; }
L_002B82AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B82C4; } }
L_002B82B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82C4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002B82C4u) [[unlikely]] return; }
L_002B82C4:
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B82D8; } }
    set32(c.r[2], 0u + 168u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 2;
L_002B82D8:
    c.r[2].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B82F4; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 4;
L_002B82F4:
    c.r[2].d[0] = c.r[20].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B836C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[17], c.r[17].w[0] - 6080u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B833Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B833Cu) [[unlikely]] return; }
L_002B833C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8358u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002B8358u) [[unlikely]] return; }
L_002B8358:
    c.f[12] = ld32((c.r[17].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B836Cu);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002B836Cu) [[unlikely]] return; }
L_002B836C:
    c.r[2].d[0] = c.r[20].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B83C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[0] = ld32((c.r[2].w[0] - 27872u));
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83B0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B83B0u) [[unlikely]] return; }
L_002B83B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83C8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002B83C8u) [[unlikely]] return; }
L_002B83C8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B83F0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B844C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B844C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
L_002B8418:
    st32((c.r[2].w[0] + 132u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 144u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8418u | kUnwind; return; } goto L_002B8418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] - 27860u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 16752u), c.f[0]);
    c.budget -= 7;
L_002B844C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8458:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8478:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B84A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B84C8:
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 132u), c.r[5].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B84F8:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8530u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B8530u) [[unlikely]] return; }
L_002B8530:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_002B8548; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B855C; } }
L_002B8548:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002B855C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8570:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B85A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85C8u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B85C8u) [[unlikely]] return; }
L_002B85C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8638; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8618u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B8618u) [[unlikely]] return; }
L_002B8618:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8638u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002B8638u) [[unlikely]] return; }
L_002B8638:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8658:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8688u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B8688u) [[unlikely]] return; }
L_002B8688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8764; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2144u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86ACu);  if (depth < kMaxDepth) unit_001B(c, 278u, depth + 1u); else { c.pc = 0x0016F810u; return; } if (c.pc != 0x002B86ACu) [[unlikely]] return; }
L_002B86AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B8764; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86CCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002B86CCu) [[unlikely]] return; }
L_002B86CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_002B8764; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[7], 0u + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] & 1ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14592u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[18].d[0];  if (t) { goto L_002B8744; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 144u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B871Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002B871Cu) [[unlikely]] return; }
L_002B871C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8734u);  if (depth < kMaxDepth) unit_006D(c, 109u, depth + 1u); else { c.pc = 0x002B6D88u; return; } if (c.pc != 0x002B8734u) [[unlikely]] return; }
L_002B8734:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8764; } }
L_002B8744:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B875Cu);  if (depth < kMaxDepth) unit_006D(c, 109u, depth + 1u); else { c.pc = 0x002B6D88u; return; } if (c.pc != 0x002B875Cu) [[unlikely]] return; }
L_002B875C:
    set32(c.r[3], 0u + 6u);
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 2;
L_002B8764:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8788:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 14592u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 144u);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87C0u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B87C0u) [[unlikely]] return; }
L_002B87C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B87D8; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B87DC; } }
L_002B87D8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B87DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B87EC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_002B87EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8808:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[17].w[0] + 14592u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16768u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8858u);  if (depth < kMaxDepth) unit_006E(c, 119u, depth + 1u); else { c.pc = 0x002B9780u; return; } if (c.pc != 0x002B8858u) [[unlikely]] return; }
L_002B8858:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8868u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B8868u) [[unlikely]] return; }
L_002B8868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B8884; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8888; } }
L_002B8884:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8888:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B88E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], 0u + 144u);
    set32(c.r[4], c.r[4].w[0] + 14592u);
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B88E4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[18].w[0] + 224u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88D0u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002B88D0u) [[unlikely]] return; }
L_002B88D0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0] + 232u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88E4u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002B88E4u) [[unlikely]] return; }
L_002B88E4:
    st32((c.r[21].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B88F4; } }
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_002B88F4:
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
L_002B8920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8930u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B8930u) [[unlikely]] return; }
L_002B8930:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8948:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B896Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B896Cu) [[unlikely]] return; }
L_002B896C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B89FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[19], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + 14592u);
    set32(c.r[16], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B89FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89A4u);  if (depth < kMaxDepth) unit_006D(c, 150u, depth + 1u); else { c.pc = 0x002B75B8u; return; } if (c.pc != 0x002B89A4u) [[unlikely]] return; }
L_002B89A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B89B0; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002B89B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002B89FC; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89D4u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B89D4u) [[unlikely]] return; }
L_002B89D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B89EC; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B89F0; } }
L_002B89EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B89F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B89FC; } }
    st32((c.r[2].w[0] + 60u), 0u);
    c.budget -= 1;
L_002B89FC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A38u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B8A38u) [[unlikely]] return; }
L_002B8A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8AA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8AA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A74u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B8A74u) [[unlikely]] return; }
L_002B8A74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002B8A9C; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8AA0; } }
L_002B8A9C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8AA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8AB4; } }
L_002B8AA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8AC4; } }
L_002B8AB4:
    c.f[0] = ld32((c.r[16].w[0] + 12920u));
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    st32((c.r[3].w[0] + 12920u), c.f[0]);
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_002B8AC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8AD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 144u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B8B8C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8B8C; } }
    st32((c.r[17].w[0] + 324u), c.r[3].w[0]);
    set32(c.r[6], 0u + 268u);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], ld32((c.r[8].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 14152u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B68u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x002B8B68u) [[unlikely]] return; }
L_002B8B68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.f[12] = ld32((c.r[3].w[0] + 16752u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 336u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B84u);  if (depth < kMaxDepth) unit_008A(c, 201u, depth + 1u); else { c.pc = 0x0032AC98u; return; } if (c.pc != 0x002B8B84u) [[unlikely]] return; }
L_002B8B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8BE4; } }
L_002B8B8C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BACu);  if (depth < kMaxDepth) unit_0049(c, 61u, depth + 1u); else { c.pc = 0x00225058u; return; } if (c.pc != 0x002B8BACu) [[unlikely]] return; }
L_002B8BAC:
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[3] = ld32((c.r[2].w[0] - 27860u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = ld32((c.r[17].w[0] + 13144u));
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 13144u), c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[2]);
    c.budget -= 14;
L_002B8BE4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8C00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[20] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C4Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002B8C4Cu) [[unlikely]] return; }
L_002B8C4C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[15] = c.f[21];
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C6Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002B8C6Cu) [[unlikely]] return; }
L_002B8C6C:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C80u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002B8C80u) [[unlikely]] return; }
L_002B8C80:
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_div(c, 2u, c.f[2], c.f[20]);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CD0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002B8CD0u) [[unlikely]] return; }
L_002B8CD0:
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8D10:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8D60; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[10].w[0]);
    c.budget -= 8;
L_002B8D60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8D68:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8DA4; } }
    st32((c.r[4].w[0] + 88u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 3;
L_002B8DA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[7], c.r[7].w[0] + 14736u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8E20; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DFCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002B8DFCu) [[unlikely]] return; }
L_002B8DFC:
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 27868u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B8E20; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002B8E20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8E40:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8E9C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8E9C; } }
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 8;
L_002B8E9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8EA8:
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 144u);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ~(0ull | c.r[4].d[0]);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8EF4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8EF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 304u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8F34u) [[unlikely]] return; }
L_002B8F34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F40u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002B8F40u) [[unlikely]] return; }
L_002B8F40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8F58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F78u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002B8F78u) [[unlikely]] return; }
L_002B8F78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B8FB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F94u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002B8F94u) [[unlikely]] return; }
L_002B8F94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8FB4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8FB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FB4u);  if (depth < kMaxDepth) unit_0061(c, 305u, depth + 1u); else { c.pc = 0x002870C0u; return; } if (c.pc != 0x002B8FB4u) [[unlikely]] return; }
L_002B8FB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], 0u + 144u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FE0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B8FE0u) [[unlikely]] return; }
L_002B8FE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 324u), 0u);
    set32(c.r[6], ld32((c.r[3].w[0] + 19740u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 304u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9008u) [[unlikely]] return; }
L_002B9008:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9014u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002B9014u) [[unlikely]] return; }
L_002B9014:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] + 14736u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B907C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B90BC; } }
L_002B907C:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002B90B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002B90A4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B90A8; } }
L_002B90A4:
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 1;
L_002B90A8:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90B8u);  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8078u; return; } if (c.pc != 0x002B90B8u) [[unlikely]] return; }
L_002B90B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B90BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B90D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9118; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B9114; } }
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9114:
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 1;
L_002B9118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9120:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9154; } }
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 1;
L_002B9154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9160:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9194; } }
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 1;
L_002B9194:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B91A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 14736u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[3].d[0]);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9210; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 10172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B9200; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9214; } }
L_002B9200:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B920Cu);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x002B920Cu) [[unlikely]] return; }
L_002B920C:
    st32((c.r[16].w[0] + 10172u), 0u);
    c.budget -= 1;
L_002B9210:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B9214:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9228:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9260:
    st32((c.r[4].w[0] + 10172u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9270:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 144u);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[3].d[0]);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B92BC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7676u)));
    c.r[2].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B92BC; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[5].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B92BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B92C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92F4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002B92F4u) [[unlikely]] return; }
L_002B92F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B933C; } }
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B933Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002B933Cu) [[unlikely]] return; }
L_002B933C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9358:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[2].w[0] + 14736u);
    set32(c.r[7], 0u + 144u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[3].d[0]);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B93B8; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B93B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B93C8:
    set32(c.r[9], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[10], 0u + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[9].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9418; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[7].w[0]);
    c.budget -= 8;
L_002B9418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[17].d[0]);
    if (c.r[3].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B94EC; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B94EC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[16], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002B94EC; } }
    goto L_002B9494;
L_002B9490:
    c.budget -= 1;
L_002B9494:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94A0u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x002B94A0u) [[unlikely]] return; }
L_002B94A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94B4u);  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8078u; return; } if (c.pc != 0x002B94B4u) [[unlikely]] return; }
L_002B94B4:
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94E0u);  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8078u; return; } if (c.pc != 0x002B94E0u) [[unlikely]] return; }
L_002B94E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B94F0; } }
L_002B94EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B94F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].d[0] = ~(0ull | c.r[4].d[0]);
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B95F0; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002B95F0; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[16], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002B95F0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95B0u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x002B95B0u) [[unlikely]] return; }
L_002B95B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95C4u);  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8078u; return; } if (c.pc != 0x002B95C4u) [[unlikely]] return; }
L_002B95C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95D8u);  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8078u; return; } if (c.pc != 0x002B95D8u) [[unlikely]] return; }
L_002B95D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95F0u);  if (depth < kMaxDepth) unit_0088(c, 325u, depth + 1u); else { c.pc = 0x00323CA8u; return; } if (c.pc != 0x002B95F0u) [[unlikely]] return; }
L_002B95F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9610:
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[7], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9654; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 5;
L_002B9654:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9660:
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], 0u + 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B96B0; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B96B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B96C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9714; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 14592u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9714u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B9714u) [[unlikely]] return; }
L_002B9714:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9728:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9740u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002B9740u) [[unlikely]] return; }
L_002B9740:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9758u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002B9758u) [[unlikely]] return; }
L_002B9758:
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B979Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B979Cu) [[unlikely]] return; }
L_002B979C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B97B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B981C; } }
L_002B97B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B97E4; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B981C; } }
L_002B97E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97F0u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B97F0u) [[unlikely]] return; }
L_002B97F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002B9818; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B981C; } }
L_002B9818:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B981C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B984Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B984Cu) [[unlikely]] return; }
L_002B984C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9878; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B987C; } }
L_002B9878:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B987C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98ACu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B98ACu) [[unlikely]] return; }
L_002B98AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B98DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B98E0; } }
L_002B98DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B98E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B98F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B992Cu);  if (depth < kMaxDepth) unit_001B(c, 261u, depth + 1u); else { c.pc = 0x0016F5C0u; return; } if (c.pc != 0x002B992Cu) [[unlikely]] return; }
L_002B992C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9948; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9940u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B9940u) [[unlikely]] return; }
L_002B9940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9954; } }
L_002B9948:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B99E8; } }
L_002B9954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9960u);  if (depth < kMaxDepth) unit_006E(c, 28u, depth + 1u); else { c.pc = 0x002B8520u; return; } if (c.pc != 0x002B9960u) [[unlikely]] return; }
L_002B9960:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9970u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002B9970u) [[unlikely]] return; }
L_002B9970:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9998; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
L_002B9998:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B99CC; } }
    set32(c.r[4], c.r[19].w[0] - 2144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99C4u);  if (depth < kMaxDepth) unit_001B(c, 273u, depth + 1u); else { c.pc = 0x0016F740u; return; } if (c.pc != 0x002B99C4u) [[unlikely]] return; }
L_002B99C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B99E4; } }
L_002B99CC:
    set32(c.r[4], c.r[19].w[0] - 2144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99E4u);  if (depth < kMaxDepth) unit_001B(c, 271u, depth + 1u); else { c.pc = 0x0016F718u; return; } if (c.pc != 0x002B99E4u) [[unlikely]] return; }
L_002B99E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B99E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9A08:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9A38:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9A68:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9A98:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AB8u);  if (depth < kMaxDepth) unit_006D(c, 109u, depth + 1u); else { c.pc = 0x002B6D88u; return; } if (c.pc != 0x002B9AB8u) [[unlikely]] return; }
L_002B9AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B9B50; } }
    set32(c.r[18], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B14u);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x002B9B14u) [[unlikely]] return; }
L_002B9B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9B30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B28u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x002B9B28u) [[unlikely]] return; }
L_002B9B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9B50; } }
L_002B9B30:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B50u);  if (depth < kMaxDepth) unit_006D(c, 109u, depth + 1u); else { c.pc = 0x002B6D88u; return; } if (c.pc != 0x002B9B50u) [[unlikely]] return; }
L_002B9B50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B8Cu);  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8078u; return; } if (c.pc != 0x002B9B8Cu) [[unlikely]] return; }
L_002B9B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BB8u);  if (depth < kMaxDepth) unit_006E(c, 21u, depth + 1u); else { c.pc = 0x002B83F0u; return; } if (c.pc != 0x002B9BB8u) [[unlikely]] return; }
L_002B9BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9BC8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BF4u);  if (depth < kMaxDepth) unit_0097(c, 106u, depth + 1u); else { c.pc = 0x0035CEF0u; return; } if (c.pc != 0x002B9BF4u) [[unlikely]] return; }
L_002B9BF4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9C0Cu) [[unlikely]] return; }
L_002B9C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9ED0; } }
L_002B9C2C:
    set32(c.r[18], 0u + 1u);
    set32(c.r[20], c.r[16].w[0] - 13248u);
    set32(c.r[17], 0u + 13u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 5;
L_002B9C40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002B9EC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002B9EC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9014u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 9014u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9C74; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 9014u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9C74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9016u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 9016u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9C8C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 9016u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9C8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10224u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10224u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CA4; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 10224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9CA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CB8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 2;
L_002B9CB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10094u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10094u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CD0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 10094u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9CD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10037u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10037u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CE8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 10037u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9CE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B9D50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002B9D10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9D1C; } }
L_002B9D10:
    set32(c.r[4], c.r[19].w[0] + 12288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D1Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002B9D1Cu) [[unlikely]] return; }
L_002B9D1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 30u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9D4C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10098u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9D50; } }
L_002B9D4C:
    st8((c.r[16].w[0] + 10098u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B9D50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10052u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10052u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B9D68; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 10052u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9D68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10091u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10091u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9D90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B9D90; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st8((c.r[16].w[0] + 10091u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9D90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10148u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10148u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9DA8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 10148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9DA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10096u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10096u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9DC0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 10096u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9DC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10095u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10095u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9DD8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 10095u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9DD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8935u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8935u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9DF0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 8935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9DF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8934u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8934u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9E08; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 8934u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9E08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8933u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9E30; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[16].w[0] + 8933u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9E34; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 8934u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9E30:
    st8((c.r[16].w[0] + 8932u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B9E34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B9E60; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8938u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B9E90; } }
L_002B9E60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10012u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10012u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9E78; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 10012u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9E78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10014u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10014u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9E90; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 10014u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B9E90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7728u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7728u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9EC0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9EC0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EC0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002B9EC0u) [[unlikely]] return; }
L_002B9EC0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9C40u | kUnwind; return; } goto L_002B9C40; } }
L_002B9ED0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9EF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] - 25396u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002B9F5C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9F28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9F3C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9F28:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B9F7C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23956u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B9FBC; } }
    st32((c.r[5].w[0] - 25396u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 27840u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9FBC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[5].w[0] - 25396u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[5], c.r[3].w[0] + 14208u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1422u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B9FAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46000000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_002B9FAC:
    st32((c.r[5].w[0] + 26680u), c.f[0]);
    st32((c.r[5].w[0] + 26672u), c.f[0]);
    st32((c.r[5].w[0] + 26676u), c.f[0]);
    c.budget -= 4;
L_002B9FBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9FC8:
    st8((c.r[4].w[0] + 9943u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 9942u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9FD8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    mmi::mult(c, 0, c.r[30].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[9], ld32((c.r[2].w[0] - 25268u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 24;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002BA050; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002BA050; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7696u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA3EC; } }
L_002BA050:
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[19], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002BA078; } }
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA08C; } }
L_002BA06C:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA168; } }
L_002BA078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA088u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002BA088u) [[unlikely]] return; }
L_002BA088:
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_002BA08C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA0B0; } }
    st32((c.r[21].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_002BA0B0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002BA0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 27456u);
    set32(c.r[22], 0u - 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 6;
L_002BA0C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002BA154; } }
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA0E4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002BA0E4u) [[unlikely]] return; }
L_002BA0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA154; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[30].d[0];  if (t) { goto L_002BA154; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 7694u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002BA11C; } }
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BA154; } }
L_002BA11C:
    set32(c.r[2], c.r[4].w[0] << 16);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7694u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BA154; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA148; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA154; } }
L_002BA148:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA06Cu | kUnwind; return; } goto L_002BA06C; } }
L_002BA154:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA0C8u | kUnwind; return; } goto L_002BA0C8; } }
L_002BA168:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002BA3D8; } }
    st32((c.r[21].w[0]), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[22], c.r[3].w[0] - 14152u);
    set32(c.r[16], 0u + 268u);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[6], 0u + 13248u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[19], c.r[3].w[0] - 6080u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[10], 0u + 1u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1D4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA1D4u) [[unlikely]] return; }
L_002BA1D4:
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 132u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 136u));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA220u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA220u) [[unlikely]] return; }
L_002BA220:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[14] = ld32((c.r[19].w[0] + 128u));
    c.f[15] = ld32((c.r[19].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA238u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002BA238u) [[unlikely]] return; }
L_002BA238:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA3EC; } }
    set32(c.r[22], 0u + 268u);
    c.budget -= 2;
L_002BA258:
    set32(c.r[17], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[30].d[0];  if (t) { goto L_002BA3C0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002BA298; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 13248u);
    mmi::madd(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BA3C0; } }
L_002BA298:
    set32(c.r[4], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] + 27456u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BA3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002BA3C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA2F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA3C0; } }
L_002BA2F0:
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA334u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA334u) [[unlikely]] return; }
L_002BA334:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[2] = ld32((c.r[19].w[0] + 128u));
    mmi::madd(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[2]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA388u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA388u) [[unlikely]] return; }
L_002BA388:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[14] = ld32((c.r[19].w[0] + 128u));
    c.f[15] = ld32((c.r[19].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3A0u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002BA3A0u) [[unlikely]] return; }
L_002BA3A0:
    c.f[1] = c.f[0];
    c.f[0] = ld32((c.r[23].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA3C0; } }
    st32((c.r[21].w[0]), c.r[18].w[0]);
    st32((c.r[23].w[0]), c.f[1]);
    c.budget -= 2;
L_002BA3C0:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA258u | kUnwind; return; } goto L_002BA258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA3EC; } }
L_002BA3D8:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x467A0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.budget -= 5;
L_002BA3EC:
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
L_002BA420:
    set32(c.r[29], c.r[29].w[0] - 640u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 632u), c.f[21]);
    st32((c.r[29].w[0] + 624u), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BA490; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BA490; } }
    set32(c.r[19], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA488u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002BA488u) [[unlikely]] return; }
L_002BA488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA49C; } }
L_002BA490:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA6F0; } }
L_002BA49C:
    mmi::mult(c, 0, c.r[16].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9942u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA4C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9943u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA4C8; } }
    c.f[1] = ld32((c.r[3].w[0] + 9948u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA68C; } }
L_002BA4C8:
    set32(c.r[6], 0u + 13248u);
    set32(c.r[5], c.r[20].w[0] + 14208u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BA53C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BA53C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002BA53C; } }
    mmi::mult(c, 0, c.r[18].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9942u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA53C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9943u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA53C; } }
    c.f[1] = ld32((c.r[3].w[0] + 9948u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA68C; } }
L_002BA53C:
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], 0u + 268u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[20].w[0] + 14208u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 14152u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[4].w[0] + c.r[6].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA588u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA588u) [[unlikely]] return; }
L_002BA588:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 136u));
    c.f[14] = ld32((c.r[29].w[0] + 128u));
    c.f[15] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5A0u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002BA5A0u) [[unlikely]] return; }
L_002BA5A0:
    c.f[1] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA5D0; } }
    c.f[21] = ld32((c.r[17].w[0] + 136u));
    c.f[20] = ld32((c.r[17].w[0] + 128u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA5D8; } }
L_002BA5D0:
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 2;
L_002BA5D8:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[18].w[0] - 1u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] - 14152u);
    set32(c.r[6], c.r[20].w[0] + 14208u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA620u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA620u) [[unlikely]] return; }
L_002BA620:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 136u));
    c.f[14] = ld32((c.r[29].w[0] + 128u));
    c.f[15] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA638u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002BA638u) [[unlikely]] return; }
L_002BA638:
    c.f[1] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA668; } }
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA670; } }
L_002BA668:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 2;
L_002BA670:
    c.f[13] = fp::sub(c.f[21], c.f[1]);
    c.f[12] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA680u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BA680u) [[unlikely]] return; }
L_002BA680:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 3;
L_002BA68C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA6C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA6EC; } }
L_002BA6C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA6EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_002BA6EC:
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002BA6F0:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    c.f[21] = ld32((c.r[29].w[0] + 632u));
    c.f[20] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[29], c.r[29].w[0] + 640u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA720:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA73Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002BA73Cu) [[unlikely]] return; }
L_002BA73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA754; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BA758; } }
L_002BA754:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA758:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA768:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[17].w[0] - 14152u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[19], 0u + 268u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7C8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA7C8u) [[unlikely]] return; }
L_002BA7C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[29].w[0]), c.f[2]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA814u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BA814u) [[unlikely]] return; }
L_002BA814:
    c.f[15] = ld32((c.r[16].w[0] + 136u));
    c.f[14] = ld32((c.r[16].w[0] + 128u));
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA82Cu);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002BA82Cu) [[unlikely]] return; }
L_002BA82C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA850:
    c.r[7].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[2], 0u + 1056u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[5], c.r[3].w[0] + 8u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[4].w[0]));
    c.f[13] = ld32((c.r[6].w[0]));
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[15] = ld32((c.r[5].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8A8u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002BA8A8u) [[unlikely]] return; }
L_002BA8A8:
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA8C0:
    c.f[12] = fp::sub(c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA8F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 4;
L_002BA8F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA91C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_002BA91C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA93C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 4;
L_002BA93C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA95C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_002BA95C:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA968:
    c.f[12] = fp::sub(c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA9A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 5;
L_002BA9A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BA9D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 5;
L_002BA9D4:
    c.f[0] = c.f[12];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA9E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 19;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002BAA38; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAA50; } }
L_002BAA38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA4Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002BAA4Cu) [[unlikely]] return; }
L_002BAA4C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BAA50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 58u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BABB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.r[2].d[0] = c.r[16].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAA94; } }
    set32(c.r[16], c.r[16].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAAA4; } }
L_002BAA94:
    set32(c.r[2], 0u - 2049u);
    set32(c.r[3], c.r[16].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_002BAAA4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BAADC; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.r[9].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAACCu);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002BAACCu) [[unlikely]] return; }
L_002BAACC:
    set32(c.r[2], 0u + 192u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAAFC; } }
L_002BAADC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.r[9].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAAFCu);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002BAAFCu) [[unlikely]] return; }
L_002BAAFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.f[12] = c.r[16].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = ld32((c.r[29].w[0]));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[4].d[0] = c.r[29].d[0] | 12ull;
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB30u);  if (depth < kMaxDepth) unit_0045(c, 119u, depth + 1u); else { c.pc = 0x002160A8u; return; } if (c.pc != 0x002BAB30u) [[unlikely]] return; }
L_002BAB30:
    set32(c.r[17], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB70u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BAB70u) [[unlikely]] return; }
L_002BAB70:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.f[3] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BABB4u);  if (depth < kMaxDepth) unit_0049(c, 121u, depth + 1u); else { c.pc = 0x002259F8u; return; } if (c.pc != 0x002BABB4u) [[unlikely]] return; }
L_002BABB4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BABE8:
    set32(c.r[29], c.r[29].w[0] - 640u);
    set32(c.r[2], c.r[4].w[0] - 1u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[20]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 268u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    set32(c.r[19], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[17].w[0] - 14152u);
    st32((c.r[29].w[0] + 632u), c.f[21]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 624u), c.f[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 14208u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC5Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BAC5Cu) [[unlikely]] return; }
L_002BAC5C:
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[10], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC9Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002BAC9Cu) [[unlikely]] return; }
L_002BAC9C:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.f[12] = fp::sub(c.f[20], c.f[12]);
    c.f[13] = fp::sub(c.f[21], c.f[13]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACB4u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BACB4u) [[unlikely]] return; }
L_002BACB4:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BACF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAD20; } }
L_002BACF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BAD20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_002BAD20:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    c.f[0] = c.f[1];
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    c.f[21] = ld32((c.r[29].w[0] + 632u));
    c.f[20] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[29], c.r[29].w[0] + 640u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BAD50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 13u);
    c.budget -= 12;
L_002BAD80:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BAD9C; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BADCC; } }
L_002BAD9C:
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 136u));
    c.f[12] = fp::sub(c.f[1], c.f[12]);
    c.f[13] = fp::sub(c.f[0], c.f[13]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADBCu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BADBCu) [[unlikely]] return; }
L_002BADBC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_002BADCC:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD80u | kUnwind; return; } goto L_002BAD80; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BAE00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 13u);
    c.budget -= 12;
L_002BAE30:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BAE4C; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE70; } }
L_002BAE4C:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.f[15] = ld32((c.r[18].w[0] + 128u));
    c.f[16] = ld32((c.r[18].w[0] + 132u));
    c.f[17] = ld32((c.r[18].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE6Cu);  if (depth < kMaxDepth) unit_007A(c, 170u, depth + 1u); else { c.pc = 0x002E9F78u; return; } if (c.pc != 0x002BAE6Cu) [[unlikely]] return; }
L_002BAE6C:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_002BAE70:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAE30u | kUnwind; return; } goto L_002BAE30; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BAEA8:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[7], 0u + 48u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 40u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 42u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 44u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 67;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BAFB8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 13136u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 612u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB00C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB004u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002BB004u) [[unlikely]] return; }
L_002BB004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB010; } }
L_002BB00C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB010:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002BB124; } }
    st16((c.r[18].w[0] + 11358u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[18].w[0] + 11888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB02Cu);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x002BB02Cu) [[unlikely]] return; }
L_002BB02C:
    set32(c.r[19], ld32((c.r[18].w[0] + 11824u)));
    st32((c.r[18].w[0] + 11316u), c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[16].d[0];  if (t) { goto L_002BB124; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 13096u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB124; } }
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB124; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[20], 0u + 144u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002BB118; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[17], 0u + 880u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[20] = 0u;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 4440u);
    set32(c.r[16], c.r[16].w[0] + 576u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.f[12] = c.f[20];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0ACu);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x002BB0ACu) [[unlikely]] return; }
L_002BB0AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0CCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002BB0CCu) [[unlikely]] return; }
L_002BB0CC:
    c.f[0] = ld32((c.r[18].w[0] + 11872u));
    c.f[1] = ld32((c.r[18].w[0] + 11880u));
    st32((c.r[18].w[0] + 11360u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 216u), c.f[20]);
    st32((c.r[18].w[0] + 7700u), c.r[20].w[0]);
    st32((c.r[18].w[0] + 12992u), c.f[0]);
    st32((c.r[18].w[0] + 13000u), c.f[1]);
    st32((c.r[18].w[0] + 13024u), c.f[20]);
    st32((c.r[18].w[0] + 13028u), c.f[20]);
    st32((c.r[18].w[0] + 13032u), c.f[20]);
    st32((c.r[18].w[0] + 208u), c.f[20]);
    st32((c.r[18].w[0] + 212u), c.f[20]);
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st64((c.r[18].w[0] + 560u), 0ull);
    st32((c.r[18].w[0] + 13128u), 0u);
    c.budget -= 19;
L_002BB118:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB128; } }
L_002BB124:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB128:
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
L_002BB150:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[22]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11352u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1BC; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1BC; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1BC; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB1D8; } }
L_002BB1BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB1D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB1DC; } }
L_002BB1D8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB1DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB8A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB1FCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002BB1FCu) [[unlikely]] return; }
L_002BB1FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BB23C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB23C; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB224u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002BB224u) [[unlikely]] return; }
L_002BB224:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[18].w[0] + 208u), c.f[0]);
    st32((c.r[18].w[0] + 216u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB8A0; } }
L_002BB23C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 11356u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[5].w[0] - 24604u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[18].w[0] + 11356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BB8A0; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] - 24604u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[22] = 0u;
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.f[12] = c.f[22];
    c.f[13] = c.f[22];
    c.f[14] = c.f[22];
    st16((c.r[18].w[0] + 11356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB298u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002BB298u) [[unlikely]] return; }
L_002BB298:
    set32(c.r[2], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2B8u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002BB2B8u) [[unlikely]] return; }
L_002BB2B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 11280u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2D4u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002BB2D4u) [[unlikely]] return; }
L_002BB2D4:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2E4u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002BB2E4u) [[unlikely]] return; }
L_002BB2E4:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB304; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB390; } }
L_002BB304:
    c.f[12] = c.f[20];
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB314u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BB314u) [[unlikely]] return; }
L_002BB314:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB33C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB394; } }
L_002BB33C:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB358; } }
    set32(c.r[19], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB394; } }
L_002BB358:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB374; } }
    set32(c.r[19], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB394; } }
L_002BB374:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB390; } }
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB394; } }
L_002BB390:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB394:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002BB774; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB3D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB3F0; } }
L_002BB3D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB3F0; } }
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_002BB3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[0] = 0u;
    c.f[13] = ld32((c.r[2].w[0] - 17692u));
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB424; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB444; } }
L_002BB424:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB444; } }
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 1;
L_002BB444:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB450u);  if (depth < kMaxDepth) unit_008A(c, 180u, depth + 1u); else { c.pc = 0x0032A770u; return; } if (c.pc != 0x002BB450u) [[unlikely]] return; }
L_002BB450:
    c.f[21] = c.f[0];
    c.f[2] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB488; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB4A8; } }
L_002BB488:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB4A8; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002BB4A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[16], c.r[3].w[0] - 10056u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[17], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[2] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.f[22] = 0u;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[20] = ld32((c.r[2].w[0] + 24u));
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB518u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002BB518u) [[unlikely]] return; }
L_002BB518:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.f[13] = c.f[22];
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = fp::mul(c.f[20], c.f[14]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB540u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002BB540u) [[unlikely]] return; }
L_002BB540:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB744; } }
    c.f[3] = ld32((c.r[18].w[0] + 148u));
    c.f[2] = c.f[21];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB588; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5A8; } }
L_002BB588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB5A8; } }
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 1;
L_002BB5A8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB5D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5F8; } }
L_002BB5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB5F8; } }
    c.f[2] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_002BB5F8:
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB6DC; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB640; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB6C4; } }
L_002BB640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB6D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB694; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB6B4; } }
L_002BB694:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB6B4; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002BB6B4:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB6D0; } }
L_002BB6C4:
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB6E0; } }
L_002BB6D0:
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB6E0; } }
L_002BB6DC:
    c.f[3] = c.f[2];
    c.budget -= 1;
L_002BB6E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB714; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB740; } }
L_002BB714:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB740; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 4;
L_002BB740:
    st32((c.r[18].w[0] + 148u), c.f[3]);
    c.budget -= 1;
L_002BB744:
    set32(c.r[2], c.r[18].w[0] + 13024u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 13144u), c.f[21]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[18].w[0] + 13128u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB76Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BB76Cu) [[unlikely]] return; }
L_002BB76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB840; } }
L_002BB774:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 1384u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002BB7E0; } }
    c.f[0] = ld32((c.r[18].w[0] + 208u));
    set32(c.r[2], c.r[18].w[0] + 13024u);
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[18].w[0] + 216u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7D8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002BB7D8u) [[unlikely]] return; }
L_002BB7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB840; } }
L_002BB7E0:
    set32(c.r[3], 0u + 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] - 10056u);
    set32(c.r[16], c.r[18].w[0] + 13024u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 20u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB818u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BB818u) [[unlikely]] return; }
L_002BB818:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB82Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BB82Cu) [[unlikely]] return; }
L_002BB82C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB840u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BB840u) [[unlikely]] return; }
L_002BB840:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB850u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x002BB850u) [[unlikely]] return; }
L_002BB850:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[22].w[0] - 10056u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB8A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB88Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BB88Cu) [[unlikely]] return; }
L_002BB88C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB8A0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002BB8A0u) [[unlikely]] return; }
L_002BB8A0:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB8D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB8F4u);  if (depth < kMaxDepth) unit_0089(c, 167u, depth + 1u); else { c.pc = 0x00325DC8u; return; } if (c.pc != 0x002BB8F4u) [[unlikely]] return; }
L_002BB8F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BBA68; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB960; } }
    set32(c.r[2], 0u + 175u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB96C; } }
L_002BB960:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB970; } }
L_002BB96C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB970:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002BBA5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBA5C; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB9D4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB9D4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 13024u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9C0u);  if (depth < kMaxDepth) unit_0088(c, 324u, depth + 1u); else { c.pc = 0x00323C40u; return; } if (c.pc != 0x002BB9C0u) [[unlikely]] return; }
L_002BB9C0:
    c.f[12] = ld32((c.r[17].w[0] + 13032u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9D4u);  if (depth < kMaxDepth) unit_0088(c, 326u, depth + 1u); else { c.pc = 0x00323D10u; return; } if (c.pc != 0x002BB9D4u) [[unlikely]] return; }
L_002BB9D4:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 9016u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBA5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BBA5C; } }
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 9020u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA18u);  if (depth < kMaxDepth) unit_0079(c, 149u, depth + 1u); else { c.pc = 0x002E63F0u; return; } if (c.pc != 0x002BBA18u) [[unlikely]] return; }
L_002BBA18:
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[2]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA44u);  if (depth < kMaxDepth) unit_0079(c, 149u, depth + 1u); else { c.pc = 0x002E63F0u; return; } if (c.pc != 0x002BBA44u) [[unlikely]] return; }
L_002BBA44:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 6;
L_002BBA5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA68u);  if (depth < kMaxDepth) unit_006F(c, 84u, depth + 1u); else { c.pc = 0x002BD2A0u; return; } if (c.pc != 0x002BBA68u) [[unlikely]] return; }
L_002BBA68:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBA80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 120u), c.f[21]);
    set32(c.r[5], 0u + 7u);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAD0u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002BBAD0u) [[unlikely]] return; }
L_002BBAD0:
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBD70; } }
    set32(c.r[2], 0u + 30u);
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 13080u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 13136u), 0u);
    st16((c.r[16].w[0] + 11356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAFCu);  if (depth < kMaxDepth) unit_0070(c, 34u, depth + 1u); else { c.pc = 0x002C06C8u; return; } if (c.pc != 0x002BBAFCu) [[unlikely]] return; }
L_002BBAFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002BBC4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB10u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002BBB10u) [[unlikely]] return; }
L_002BBB10:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB20u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002BBB20u) [[unlikely]] return; }
L_002BBB20:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[20] = ld32((c.r[2].w[0] - 17692u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBB5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBB7C; } }
L_002BBB5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBB7C; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_002BBB7C:
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB8Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002BBB8Cu) [[unlikely]] return; }
L_002BBB8C:
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBBD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBBF0; } }
L_002BBBD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBBF0; } }
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 1;
L_002BBBF0:
    c.f[12] = fp::add(c.f[12], c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[20] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.f[20] = fp::mul(c.f[22], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC10u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002BBC10u) [[unlikely]] return; }
L_002BBC10:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[5], 0u + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11352u)));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    set32(c.r[2], c.r[4].w[0] - 10056u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 208u), c.f[0]);
    st32((c.r[16].w[0] + 216u), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBC70; } }
L_002BBC4C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11352u)));
    set32(c.r[5], 0u + 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[16].w[0] + 208u), 0u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] - 10056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[16].w[0] + 216u), 0u);
    c.budget -= 9;
L_002BBC70:
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 11352u)));
    set32(c.r[2], 0u + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] - 10056u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 13024u), c.f[1]);
    set32(c.r[6], 0u + 1536u);
    st32((c.r[16].w[0] + 13032u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld16((c.r[3].w[0] + 44u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 46u));
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 48u));
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 27;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBD08; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 508u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCF0u);  if (depth < kMaxDepth) unit_0091(c, 69u, depth + 1u); else { c.pc = 0x00344B30u; return; } if (c.pc != 0x002BBCF0u) [[unlikely]] return; }
L_002BBCF0:
    set32(c.r[17], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] - 24600u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 6;
L_002BBD08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002BBD34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD2Cu);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002BBD2Cu) [[unlikely]] return; }
L_002BBD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBD48; } }
L_002BBD34:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD48u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002BBD48u) [[unlikely]] return; }
L_002BBD48:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    set32(c.r[5], 0u + 32u);
    set32(c.r[3], ld32((c.r[16].w[0] + 11280u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st64((c.r[16].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[16].w[0] + 11280u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD70u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002BBD70u) [[unlikely]] return; }
L_002BBD70:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBDA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[15] = c.f[14];
    c.f[21] = 0u;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[22] = c.f[21];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[12] = c.f[22];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = c.f[22];
    st32((c.r[18].w[0] + 13136u), 0u);
    st32((c.r[18].w[0] + 13080u), c.r[7].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE00u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002BBE00u) [[unlikely]] return; }
L_002BBE00:
    set32(c.r[2], ld32((c.r[18].w[0] + 11824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBE2C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 11888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE1Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002BBE1Cu) [[unlikely]] return; }
L_002BBE1C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE28u);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x002BBE28u) [[unlikely]] return; }
L_002BBE28:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_002BBE2C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE44u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002BBE44u) [[unlikely]] return; }
L_002BBE44:
    set32(c.r[2], c.r[19].w[0] << 16);
    c.f[3] = ld32((c.r[29].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[0] = ld32((c.r[18].w[0] + 12992u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = ld32((c.r[18].w[0] + 12996u));
    c.f[2] = ld32((c.r[18].w[0] + 13000u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[18].w[0] + 208u), c.f[3]);
    set32(c.r[16], c.r[16].w[0] - 10056u);
    st16((c.r[18].w[0] + 11352u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[4], 0u + 880u);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 132u), c.f[1]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    set32(c.r[8], c.r[8].w[0] - 4440u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[7], 0u + 8u);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[18].w[0] + 216u), c.f[2]);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    set32(c.r[5], ld32((c.r[8].w[0] + 328u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBECCu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002BBECCu) [[unlikely]] return; }
L_002BBECC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11352u)));
    set32(c.r[2], 0u + 82u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], 0u + 16u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 13144u), c.f[21]);
    st32((c.r[18].w[0] + 13132u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 9924u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[18].w[0] + 148u), c.f[21]);
    set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    st32((c.r[18].w[0] + 13128u), 0u);
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    st16((c.r[18].w[0] + 11356u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[18].w[0] + 11280u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 44u));
    c.r[5].d[0] = c.r[5].d[0] | 64ull;
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 46u));
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 48u));
    st32((c.r[18].w[0] + 12932u), c.f[22]);
    st32((c.r[18].w[0] + 13092u), 0u);
    st32((c.r[18].w[0] + 13124u), 0u);
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 11280u), c.r[5].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF44u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002BBF44u) [[unlikely]] return; }
L_002BBF44:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBF70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[21] = c.f[12];
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBFB0u);  if (depth < kMaxDepth) unit_006E(c, 101u, depth + 1u); else { c.pc = 0x002B9420u; return; } if (c.pc != 0x002BBFB0u) [[unlikely]] return; }
L_002BBFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006F(c, 6u, depth); } }
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1536u);
    set32(c.r[4], ld32((c.r[18].w[0] + 7700u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    st32((c.r[18].w[0] + 13080u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 13072u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 13136u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[22] = 0u;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBFFC; } }
    c.f[22] = ld32((c.r[2].w[0] + 508u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 2;
L_002BBFFC:
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.budget -= 1;
    [[clang::musttail]] return unit_006F(c, 1u, depth);
}

}
