#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0054[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0,
    0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0,
};

void unit_0054(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00250000;
    case 2u: goto L_00250004;
    case 3u: goto L_00250018;
    case 4u: goto L_0025002C;
    case 5u: goto L_0025004C;
    case 6u: goto L_00250104;
    case 7u: goto L_00250120;
    case 8u: goto L_00250134;
    case 9u: goto L_0025014C;
    case 10u: goto L_00250160;
    case 11u: goto L_0025016C;
    case 12u: goto L_00250198;
    case 13u: goto L_002501AC;
    case 14u: goto L_002501B8;
    case 15u: goto L_00250240;
    case 16u: goto L_0025026C;
    case 17u: goto L_0025028C;
    case 18u: goto L_002502A0;
    case 19u: goto L_002502B0;
    case 20u: goto L_002502C4;
    case 21u: goto L_002502D4;
    case 22u: goto L_002502E4;
    case 23u: goto L_002502F8;
    case 24u: goto L_0025030C;
    case 25u: goto L_00250320;
    case 26u: goto L_00250330;
    case 27u: goto L_0025034C;
    case 28u: goto L_00250358;
    case 29u: goto L_00250374;
    case 30u: goto L_002503D0;
    case 31u: goto L_002503E0;
    case 32u: goto L_00250450;
    case 33u: goto L_002504F4;
    case 34u: goto L_00250544;
    case 35u: goto L_00250554;
    case 36u: goto L_0025056C;
    case 37u: goto L_00250580;
    case 38u: goto L_002505A0;
    case 39u: goto L_002505B0;
    case 40u: goto L_002505C0;
    case 41u: goto L_00250618;
    case 42u: goto L_00250688;
    case 43u: goto L_002506EC;
    case 44u: goto L_0025075C;
    case 45u: goto L_002507B0;
    case 46u: goto L_002507E4;
    case 47u: goto L_002507F4;
    case 48u: goto L_0025080C;
    case 49u: goto L_0025085C;
    case 50u: goto L_00250908;
    case 51u: goto L_00250954;
    case 52u: goto L_00250968;
    case 53u: goto L_0025097C;
    case 54u: goto L_002509C8;
    case 55u: goto L_002509DC;
    case 56u: goto L_002509F0;
    case 57u: goto L_00250A40;
    case 58u: goto L_00250A54;
    case 59u: goto L_00250A68;
    case 60u: goto L_00250AC0;
    case 61u: goto L_00250AD4;
    case 62u: goto L_00250AE8;
    case 63u: goto L_00250B10;
    case 64u: goto L_00250B40;
    case 65u: goto L_00250C10;
    case 66u: goto L_00250C30;
    case 67u: goto L_00250C44;
    case 68u: goto L_00250C5C;
    case 69u: goto L_00250C70;
    case 70u: goto L_00250C7C;
    case 71u: goto L_00250CA8;
    case 72u: goto L_00250CBC;
    case 73u: goto L_00250CC8;
    case 74u: goto L_00250D08;
    case 75u: goto L_00250D30;
    case 76u: goto L_00250D58;
    case 77u: goto L_00250DB8;
    case 78u: goto L_00250DC8;
    case 79u: goto L_00250E38;
    case 80u: goto L_00250FD0;
    case 81u: goto L_00251058;
    case 82u: goto L_00251070;
    case 83u: goto L_002510C0;
    case 84u: goto L_002510E8;
    case 85u: goto L_00251178;
    case 86u: goto L_0025119C;
    case 87u: goto L_002511B8;
    case 88u: goto L_002511CC;
    case 89u: goto L_002511EC;
    case 90u: goto L_00251238;
    case 91u: goto L_00251248;
    case 92u: goto L_00251250;
    case 93u: goto L_002512B8;
    case 94u: goto L_00251338;
    case 95u: goto L_00251398;
    case 96u: goto L_00251418;
    case 97u: goto L_00251484;
    case 98u: goto L_002514C0;
    case 99u: goto L_002514F4;
    case 100u: goto L_00251510;
    case 101u: goto L_00251588;
    case 102u: goto L_002515D8;
    case 103u: goto L_0025176C;
    case 104u: goto L_002517E4;
    case 105u: goto L_00251800;
    case 106u: goto L_0025181C;
    case 107u: goto L_00251878;
    case 108u: goto L_00251940;
    case 109u: goto L_00251960;
    case 110u: goto L_00251974;
    case 111u: goto L_0025198C;
    case 112u: goto L_002519A0;
    case 113u: goto L_002519AC;
    case 114u: goto L_002519CC;
    case 115u: goto L_002519E0;
    case 116u: goto L_002519EC;
    case 117u: goto L_00251B2C;
    case 118u: goto L_00251B48;
    case 119u: goto L_00251B5C;
    case 120u: goto L_00251B6C;
    case 121u: goto L_00251B80;
    case 122u: goto L_00251B94;
    case 123u: goto L_00251BA8;
    case 124u: goto L_00251BBC;
    case 125u: goto L_00251BD4;
    case 126u: goto L_00251C40;
    case 127u: goto L_00251C58;
    case 128u: goto L_00251C6C;
    case 129u: goto L_00251C8C;
    case 130u: goto L_00251CA0;
    case 131u: goto L_00251CC4;
    case 132u: goto L_00251CC8;
    case 133u: goto L_00251CE0;
    case 134u: goto L_00251D18;
    case 135u: goto L_00251D2C;
    case 136u: goto L_00251DA0;
    case 137u: goto L_00251DB4;
    case 138u: goto L_00251DE8;
    case 139u: goto L_00251DF4;
    case 140u: goto L_00251E00;
    case 141u: goto L_00251E60;
    case 142u: goto L_00251EB8;
    case 143u: goto L_00251ED8;
    case 144u: goto L_0025203C;
    case 145u: goto L_00252054;
    case 146u: goto L_0025206C;
    case 147u: goto L_002520BC;
    case 148u: goto L_00252148;
    case 149u: goto L_00252270;
    case 150u: goto L_0025227C;
    case 151u: goto L_00252290;
    case 152u: goto L_002522A8;
    case 153u: goto L_002522B0;
    case 154u: goto L_002522F8;
    case 155u: goto L_00252320;
    case 156u: goto L_00252348;
    case 157u: goto L_00252374;
    case 158u: goto L_00252444;
    case 159u: goto L_00252460;
    case 160u: goto L_00252474;
    case 161u: goto L_0025248C;
    case 162u: goto L_002524A0;
    case 163u: goto L_002524AC;
    case 164u: goto L_002524CC;
    case 165u: goto L_002524E0;
    case 166u: goto L_002524EC;
    case 167u: goto L_00252508;
    case 168u: goto L_0025251C;
    case 169u: goto L_00252530;
    case 170u: goto L_00252544;
    case 171u: goto L_00252564;
    case 172u: goto L_002525E8;
    case 173u: goto L_00252614;
    case 174u: goto L_00252628;
    case 175u: goto L_0025266C;
    case 176u: goto L_00252678;
    case 177u: goto L_00252684;
    case 178u: goto L_002526D0;
    case 179u: goto L_00252854;
    case 180u: goto L_00252864;
    case 181u: goto L_00252874;
    case 182u: goto L_00252884;
    case 183u: goto L_002528C0;
    case 184u: goto L_002528D8;
    case 185u: goto L_00252908;
    case 186u: goto L_00252A64;
    case 187u: goto L_00252A74;
    case 188u: goto L_00252A84;
    case 189u: goto L_00252A94;
    case 190u: goto L_00252AD0;
    case 191u: goto L_00252AE8;
    case 192u: goto L_00252B18;
    case 193u: goto L_00252C90;
    case 194u: goto L_00252CA0;
    case 195u: goto L_00252CB0;
    case 196u: goto L_00252CC0;
    case 197u: goto L_00252CFC;
    case 198u: goto L_00252D14;
    case 199u: goto L_00252D40;
    case 200u: goto L_00252DB0;
    case 201u: goto L_00252DBC;
    case 202u: goto L_00252DCC;
    case 203u: goto L_00252DE0;
    case 204u: goto L_00252DF4;
    case 205u: goto L_00252E14;
    case 206u: goto L_00252E28;
    case 207u: goto L_00252E3C;
    case 208u: goto L_00252E4C;
    case 209u: goto L_00252E5C;
    case 210u: goto L_00252EA0;
    case 211u: goto L_00252EF4;
    case 212u: goto L_00252F14;
    case 213u: goto L_00252F70;
    case 214u: goto L_00252F84;
    case 215u: goto L_00252F94;
    case 216u: goto L_00252FA4;
    case 217u: goto L_00252FD0;
    case 218u: goto L_00252FE0;
    case 219u: goto L_00252FF0;
    case 220u: goto L_00253004;
    case 221u: goto L_0025302C;
    case 222u: goto L_00253038;
    case 223u: goto L_00253050;
    case 224u: goto L_0025308C;
    case 225u: goto L_002530A8;
    case 226u: goto L_002530B4;
    case 227u: goto L_00253108;
    case 228u: goto L_00253174;
    case 229u: goto L_00253180;
    case 230u: goto L_00253190;
    case 231u: goto L_002531A4;
    case 232u: goto L_002531B8;
    case 233u: goto L_002531E0;
    case 234u: goto L_00253228;
    case 235u: goto L_00253298;
    case 236u: goto L_002532C0;
    case 237u: goto L_0025331C;
    case 238u: goto L_0025332C;
    case 239u: goto L_0025333C;
    case 240u: goto L_0025334C;
    case 241u: goto L_00253378;
    case 242u: goto L_002533A0;
    case 243u: goto L_002533FC;
    case 244u: goto L_00253410;
    case 245u: goto L_00253420;
    case 246u: goto L_00253430;
    case 247u: goto L_00253460;
    case 248u: goto L_00253470;
    case 249u: goto L_00253480;
    case 250u: goto L_00253494;
    case 251u: goto L_002534BC;
    case 252u: goto L_002534D0;
    case 253u: goto L_002534E4;
    case 254u: goto L_002534F4;
    case 255u: goto L_00253538;
    case 256u: goto L_00253554;
    case 257u: goto L_00253560;
    case 258u: goto L_002535A8;
    case 259u: goto L_00253614;
    case 260u: goto L_00253624;
    case 261u: goto L_00253634;
    case 262u: goto L_00253640;
    case 263u: goto L_0025365C;
    case 264u: goto L_0025367C;
    case 265u: goto L_0025369C;
    case 266u: goto L_002536B8;
    case 267u: goto L_002536D0;
    case 268u: goto L_002536E0;
    case 269u: goto L_00253704;
    case 270u: goto L_00253718;
    case 271u: goto L_00253728;
    case 272u: goto L_00253738;
    case 273u: goto L_0025374C;
    case 274u: goto L_0025375C;
    case 275u: goto L_002537B0;
    case 276u: goto L_002537C0;
    case 277u: goto L_002537DC;
    case 278u: goto L_002537F0;
    case 279u: goto L_00253800;
    case 280u: goto L_00253810;
    case 281u: goto L_00253824;
    case 282u: goto L_00253834;
    case 283u: goto L_00253888;
    case 284u: goto L_00253898;
    case 285u: goto L_002538D8;
    case 286u: goto L_0025392C;
    case 287u: goto L_0025394C;
    case 288u: goto L_00253968;
    case 289u: goto L_00253984;
    case 290u: goto L_002539A4;
    case 291u: goto L_00253A00;
    case 292u: goto L_00253A10;
    case 293u: goto L_00253A34;
    case 294u: goto L_00253A48;
    case 295u: goto L_00253A58;
    case 296u: goto L_00253A68;
    case 297u: goto L_00253A7C;
    case 298u: goto L_00253A8C;
    case 299u: goto L_00253AD8;
    case 300u: goto L_00253AE8;
    case 301u: goto L_00253B04;
    case 302u: goto L_00253B18;
    case 303u: goto L_00253B28;
    case 304u: goto L_00253B38;
    case 305u: goto L_00253B4C;
    case 306u: goto L_00253B5C;
    case 307u: goto L_00253BA8;
    case 308u: goto L_00253BB8;
    case 309u: goto L_00253BD0;
    case 310u: goto L_00253C20;
    case 311u: goto L_00253C30;
    case 312u: goto L_00253C6C;
    case 313u: goto L_00253C78;
    case 314u: goto L_00253CD0;
    case 315u: goto L_00253D4C;
    case 316u: goto L_00253D58;
    case 317u: goto L_00253D68;
    case 318u: goto L_00253D74;
    case 319u: goto L_00253D90;
    case 320u: goto L_00253DE0;
    case 321u: goto L_00253E40;
    case 322u: goto L_00253E60;
    case 323u: goto L_00253E7C;
    case 324u: goto L_00253E98;
    case 325u: goto L_00253EB8;
    case 326u: goto L_00253F18;
    case 327u: goto L_00253F2C;
    case 328u: goto L_00253F40;
    case 329u: goto L_00253F54;
    case 330u: goto L_00253F64;
    case 331u: goto L_00253F74;
    case 332u: goto L_00253F88;
    case 333u: goto L_00253F98;
    case 334u: goto L_00253FE4;
    case 335u: goto L_00253FF4;
    default: bad_entry(c, 0x00250000u); return;
    }
L_00250000:
    c.budget -= 1;
L_00250004:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[30];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250018u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250018u) [[unlikely]] return; }
L_00250018:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025002Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0025002Cu) [[unlikely]] return; }
L_0025002C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025004Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0025004Cu) [[unlikely]] return; }
L_0025004C:
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.f[23] = ld32((c.r[29].w[0] + 68u));
    c.f[24] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250070; } }
    st32((c.r[18].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_00250070:
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250088; } }
    st32((c.r[18].w[0] + 60u), c.f[20]);
    c.budget -= 1;
L_00250088:
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002500A0; } }
    st32((c.r[18].w[0] + 52u), c.f[23]);
    c.budget -= 1;
L_002500A0:
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002500B8; } }
    st32((c.r[18].w[0] + 64u), c.f[23]);
    c.budget -= 1;
L_002500B8:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002500D0; } }
    st32((c.r[18].w[0] + 56u), c.f[24]);
    c.budget -= 1;
L_002500D0:
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002500E8; } }
    st32((c.r[18].w[0] + 68u), c.f[24]);
    c.budget -= 1;
L_002500E8:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[13] = ld32((c.r[18].w[0] + 52u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250104u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00250104u) [[unlikely]] return; }
L_00250104:
    c.f[13] = ld32((c.r[18].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = ld32((c.r[18].w[0] + 68u));
    c.f[15] = c.f[21];
    c.f[12] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250120u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00250120u) [[unlikely]] return; }
L_00250120:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250134u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00250134u) [[unlikely]] return; }
L_00250134:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025014Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0025014Cu) [[unlikely]] return; }
L_0025014C:
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250160u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00250160u) [[unlikely]] return; }
L_00250160:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025016Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0025016Cu) [[unlikely]] return; }
L_0025016C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250198u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250198u) [[unlikely]] return; }
L_00250198:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501ACu);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x002501ACu) [[unlikely]] return; }
L_002501AC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501B8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002501B8u) [[unlikely]] return; }
L_002501B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].d[0] | 65534ull;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[25] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 21;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00250210; } }
    c.r[17].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 1;
L_00250210:
    set32(c.r[4], c.f[20]);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.f[22] = ld32((c.r[2].w[0] + 40u));
    c.f[20] = ld32((c.r[2].w[0] + 32u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[21] = ld32((c.r[2].w[0] + 36u));
    c.f[22] = fp::mul(c.f[22], c.f[2]);
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[21] = fp::mul(c.f[21], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250240u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00250240u) [[unlikely]] return; }
L_00250240:
    set32(c.r[6], ld32((c.r[29].w[0] + 204u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], c.f[23]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 204u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025026Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025026Cu) [[unlikely]] return; }
L_0025026C:
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[6], c.f[24]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 200u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025028Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025028Cu) [[unlikely]] return; }
L_0025028C:
    set32(c.r[2], c.f[29]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502A0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002502A0u) [[unlikely]] return; }
L_002502A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502B0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002502B0u) [[unlikely]] return; }
L_002502B0:
    set32(c.r[3], c.f[25]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502C4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002502C4u) [[unlikely]] return; }
L_002502C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502D4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002502D4u) [[unlikely]] return; }
L_002502D4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502E4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002502E4u) [[unlikely]] return; }
L_002502E4:
    set32(c.r[4], c.f[20]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502F8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002502F8u) [[unlikely]] return; }
L_002502F8:
    set32(c.r[6], c.f[21]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025030Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025030Cu) [[unlikely]] return; }
L_0025030C:
    set32(c.r[2], c.f[22]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250320u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00250320u) [[unlikely]] return; }
L_00250320:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250330u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00250330u) [[unlikely]] return; }
L_00250330:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[16], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025034Cu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0025034Cu) [[unlikely]] return; }
L_0025034C:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FAE0u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 311u, depth); } }
L_00250358:
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[8], 0u + 48u);
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250374u);  if (depth < kMaxDepth) unit_0057(c, 248u, depth + 1u); else { c.pc = 0x0025F8F0u; return; } if (c.pc != 0x00250374u) [[unlikely]] return; }
L_00250374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FAD0u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 310u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002503E0; } }
    set32(c.r[6], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x00250394u);  goto L_00250398; }
L_00250398:
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 18880u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503D0u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x002503D0u) [[unlikely]] return; }
L_002503D0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503E0u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x002503E0u) [[unlikely]] return; }
L_002503E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FAC0u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 309u, depth); } }
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.f[31] = ld32((c.r[29].w[0] + 472u));
    c.f[30] = ld32((c.r[29].w[0] + 464u));
    c.f[29] = ld32((c.r[29].w[0] + 456u));
    c.f[28] = ld32((c.r[29].w[0] + 448u));
    c.f[27] = ld32((c.r[29].w[0] + 440u));
    c.f[26] = ld32((c.r[29].w[0] + 432u));
    c.f[25] = ld32((c.r[29].w[0] + 424u));
    c.f[24] = ld32((c.r[29].w[0] + 416u));
    c.f[23] = ld32((c.r[29].w[0] + 408u));
    c.f[22] = ld32((c.r[29].w[0] + 400u));
    c.f[21] = ld32((c.r[29].w[0] + 392u));
    c.f[20] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[29], c.r[29].w[0] + 480u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250450:
    set32(c.r[2], 0u + 448u);
    set32(c.r[29], c.r[29].w[0] - 480u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    st32((c.r[29].w[0] + 172u), c.r[10].w[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[3].w[0] + c.r[21].w[0]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] + 80u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[10].w[0] + 48u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[10].w[0] + 80u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] - 18880u);
    st32((c.r[29].w[0] + 472u), c.f[31]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 464u), c.f[30]);
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 456u), c.f[29]);
    st32((c.r[29].w[0] + 448u), c.f[28]);
    st32((c.r[29].w[0] + 440u), c.f[27]);
    st32((c.r[29].w[0] + 432u), c.f[26]);
    st32((c.r[29].w[0] + 424u), c.f[25]);
    st32((c.r[29].w[0] + 416u), c.f[24]);
    st32((c.r[29].w[0] + 408u), c.f[23]);
    st32((c.r[29].w[0] + 400u), c.f[22]);
    st32((c.r[29].w[0] + 392u), c.f[21]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002504F4u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x002504F4u) [[unlikely]] return; }
L_002504F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[30], c.r[5].w[0] - 18800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250544u);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x00250544u) [[unlikely]] return; }
L_00250544:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250554u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x00250554u) [[unlikely]] return; }
L_00250554:
    set32(c.r[4], ld32((c.r[18].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025056Cu);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0025056Cu) [[unlikely]] return; }
L_0025056C:
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 28224u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250580u);  if (depth < kMaxDepth) unit_0090(c, 190u, depth + 1u); else { c.pc = 0x00341CA0u; return; } if (c.pc != 0x00250580u) [[unlikely]] return; }
L_00250580:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 164u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[17], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 212u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 8;
L_002505A0:
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 4;
L_002505B0:
    st32((c.r[29].w[0] + 200u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002505DC; } }
    c.budget -= 1;
L_002505C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250D3C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D3C; } }
L_002505DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0025086C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28228u)));
    st32((c.r[29].w[0] + 180u), c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002506D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250618u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00250618u) [[unlikely]] return; }
L_00250618:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u - 32768u);
    c.r[3].d[0] = ld64((c.r[4].w[0] - 18800u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], c.r[7].w[0] - 18768u);
    c.r[8].d[0] = ld64((c.r[30].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[4], 0u - 16u);
    set32(c.r[5], ld32((c.r[7].w[0] + 320u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], 0u + 14u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    set32(c.r[4], ld32((c.r[7].w[0] - 364u)));
    st64((c.r[2].w[0] - 18800u), c.r[3].d[0]);
    st64((c.r[30].w[0] + 8u), c.r[8].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250688u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00250688u) [[unlikely]] return; }
L_00250688:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 21;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250794; } }
L_002506D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002506ECu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002506ECu) [[unlikely]] return; }
L_002506EC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u - 32768u);
    c.r[3].d[0] = ld64((c.r[7].w[0] - 18800u));
    set32(c.r[4], 0u - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[8].d[0] = ld64((c.r[30].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[7], c.r[7].w[0] - 18768u);
    set32(c.r[5], ld32((c.r[7].w[0] + 320u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], 0u + 14u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[7].w[0] - 364u)));
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    st64((c.r[2].w[0] - 18800u), c.r[3].d[0]);
    st64((c.r[30].w[0] + 8u), c.r[8].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025075Cu);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0025075Cu) [[unlikely]] return; }
L_0025075C:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_00250794:
    st64((c.r[5].w[0] - 18832u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002507B0u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002507B0u) [[unlikely]] return; }
L_002507B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], 0u + 108u);
    set32(c.r[7], c.r[7].w[0] - 18768u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[3], ld32((c.r[7].w[0] + 320u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002507E4u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x002507E4u) [[unlikely]] return; }
L_002507E4:
    ld128((c.r[30].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002507F4u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x002507F4u) [[unlikely]] return; }
L_002507F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 18832u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025080Cu);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0025080Cu) [[unlikely]] return; }
L_0025080C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[2], c.r[2].w[0] - 18848u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[23].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[7].w[0] - 4848u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[7].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025085Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0025085Cu) [[unlikely]] return; }
L_0025085C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 4;
L_0025086C:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[16], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0] + 108u));
    c.f[23] = ld32((c.r[2].w[0] + 88u));
    c.f[13] = c.f[12];
    c.f[25] = ld32((c.r[2].w[0] + 92u));
    c.f[14] = c.f[12];
    c.f[24] = ld32((c.r[2].w[0] + 96u));
    c.f[15] = c.f[12];
    c.f[29] = ld32((c.r[2].w[0] + 100u));
    c.f[31] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 112u));
    st32((c.r[29].w[0] + 188u), c.f[1]);
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 120u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[1] = ld32((c.r[2].w[0] + 124u));
    c.f[30] = fp::mul(c.f[0], c.f[2]);
    c.f[21] = ld32((c.r[2].w[0] + 76u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] + 128u));
    c.f[28] = fp::mul(c.f[1], c.f[0]);
    c.f[22] = ld32((c.r[2].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.f[20] = ld32((c.r[2].w[0] + 84u));
    c.f[26] = fp::mul(c.f[2], c.f[1]);
    c.f[27] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250908u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00250908u) [[unlikely]] return; }
L_00250908:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0025097C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], 0u + 448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 64u), c.f[21]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.f[22]);
    st32((c.r[29].w[0] + 72u), c.f[20]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250954u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00250954u) [[unlikely]] return; }
L_00250954:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[28];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250968u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250968u) [[unlikely]] return; }
L_00250968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025097Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0025097Cu) [[unlikely]] return; }
L_0025097C:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002509F0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u + 448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 64u), c.f[23]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.f[25]);
    st32((c.r[29].w[0] + 72u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509C8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002509C8u) [[unlikely]] return; }
L_002509C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[26];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509DCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002509DCu) [[unlikely]] return; }
L_002509DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509F0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002509F0u) [[unlikely]] return; }
L_002509F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00250A68; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], 0u + 448u);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[29].w[0] + 64u), c.f[29]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.f[31]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A40u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00250A40u) [[unlikely]] return; }
L_00250A40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[27];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A54u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250A54u) [[unlikely]] return; }
L_00250A54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A68u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00250A68u) [[unlikely]] return; }
L_00250A68:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00250AE8; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], 0u + 448u);
    c.f[2] = ld32((c.r[29].w[0] + 188u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    st32((c.r[29].w[0] + 76u), c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250AC0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00250AC0u) [[unlikely]] return; }
L_00250AC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[30];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250AD4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250AD4u) [[unlikely]] return; }
L_00250AD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250AE8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00250AE8u) [[unlikely]] return; }
L_00250AE8:
    c.f[12] = fp::add(c.f[28], c.f[26]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::add(c.f[12], c.f[27]);
    c.f[12] = fp::add(c.f[12], c.f[30]);
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B10u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250B10u) [[unlikely]] return; }
L_00250B10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B40u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00250B40u) [[unlikely]] return; }
L_00250B40:
    c.f[21] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.f[20] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250B60; } }
    st32((c.r[19].w[0] + 48u), c.f[21]);
    c.budget -= 1;
L_00250B60:
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250B78; } }
    st32((c.r[19].w[0] + 60u), c.f[21]);
    c.budget -= 1;
L_00250B78:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250B90; } }
    st32((c.r[19].w[0] + 52u), c.f[22]);
    c.budget -= 1;
L_00250B90:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250BA8; } }
    st32((c.r[19].w[0] + 64u), c.f[22]);
    c.budget -= 1;
L_00250BA8:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250BC0; } }
    st32((c.r[19].w[0] + 56u), c.f[20]);
    c.budget -= 1;
L_00250BC0:
    c.f[0] = ld32((c.r[19].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250BD8; } }
    st32((c.r[19].w[0] + 68u), c.f[20]);
    c.budget -= 1;
L_00250BD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[13] = ld32((c.r[19].w[0] + 52u));
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.f[14] = ld32((c.r[19].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C10u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00250C10u) [[unlikely]] return; }
L_00250C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[13] = ld32((c.r[19].w[0] + 64u));
    c.f[14] = ld32((c.r[19].w[0] + 68u));
    c.f[12] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C30u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00250C30u) [[unlikely]] return; }
L_00250C30:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C44u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00250C44u) [[unlikely]] return; }
L_00250C44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C5Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250C5Cu) [[unlikely]] return; }
L_00250C5C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C70u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00250C70u) [[unlikely]] return; }
L_00250C70:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C7Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00250C7Cu) [[unlikely]] return; }
L_00250C7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250CA8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00250CA8u) [[unlikely]] return; }
L_00250CA8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250CBCu);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x00250CBCu) [[unlikely]] return; }
L_00250CBC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250CC8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00250CC8u) [[unlikely]] return; }
L_00250CC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], c.r[2].w[0] - 18880u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[7], ld32((c.r[29].w[0] + 200u)));
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.f[14] = c.f[20];
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 72u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D08u);  if (depth < kMaxDepth) unit_0057(c, 239u, depth + 1u); else { c.pc = 0x0025F708u; return; } if (c.pc != 0x00250D08u) [[unlikely]] return; }
L_00250D08:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D30u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00250D30u) [[unlikely]] return; }
L_00250D30:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002505C0u | kUnwind; return; } goto L_002505C0; } }
L_00250D3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[8], 0u + 48u);
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D58u);  if (depth < kMaxDepth) unit_0057(c, 248u, depth + 1u); else { c.pc = 0x0025F8F0u; return; } if (c.pc != 0x00250D58u) [[unlikely]] return; }
L_00250D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002505B0u | kUnwind; return; } goto L_002505B0; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00250DC8; } }
    set32(c.r[2], 0u + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00250D78u);  goto L_00250D7C; }
L_00250D7C:
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 18880u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DB8u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00250DB8u) [[unlikely]] return; }
L_00250DB8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DC8u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00250DC8u) [[unlikely]] return; }
L_00250DC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002505A0u | kUnwind; return; } goto L_002505A0; } }
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.f[31] = ld32((c.r[29].w[0] + 472u));
    c.f[30] = ld32((c.r[29].w[0] + 464u));
    c.f[29] = ld32((c.r[29].w[0] + 456u));
    c.f[28] = ld32((c.r[29].w[0] + 448u));
    c.f[27] = ld32((c.r[29].w[0] + 440u));
    c.f[26] = ld32((c.r[29].w[0] + 432u));
    c.f[25] = ld32((c.r[29].w[0] + 424u));
    c.f[24] = ld32((c.r[29].w[0] + 416u));
    c.f[23] = ld32((c.r[29].w[0] + 408u));
    c.f[22] = ld32((c.r[29].w[0] + 400u));
    c.f[21] = ld32((c.r[29].w[0] + 392u));
    c.f[20] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[29], c.r[29].w[0] + 480u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250E38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 18652u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250E80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].d[0] = ld64((c.r[2].w[0] - 18848u));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st64((c.r[2].w[0] - 18848u), c.r[3].d[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250F40; } }
L_00250E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 31;
    c.r[3].d[0] = ld64((c.r[2].w[0] - 18848u));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[2].w[0] - 18848u), c.r[4].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00250ED0; } }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[3].d[0] = 0ull | 57344ull;
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250EF4; } }
L_00250ED0:
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[3].d[0] = 0ull | 55296ull;
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.budget -= 9;
L_00250EF4:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[8].w[0] - 18848u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[8].w[0] - 18848u));
    set32(c.r[5], 0u + 64u);
    c.r[4].d[0] = 0ull | 64512ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 15;
    c.r[4].d[0] = c.r[4].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] >> 47;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 47;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[8].w[0] - 18848u), c.r[3].d[0]);
    c.budget -= 19;
L_00250F40:
    set32(c.r[7], c.r[8].w[0] - 18848u);
    c.r[2].d[0] = ld64((c.r[8].w[0] - 18848u));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    set32(c.r[4], 0u - 16u);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 4;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull | 49152ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[5].w[0] + 19232u)));
    st64((c.r[8].w[0] - 18848u), c.r[2].d[0]);
    st64((c.r[7].w[0] + 8u), c.r[6].d[0]);
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00250FB4; } }
    set32(c.r[2], 0u - 3841u);
    set32(c.r[3], 0u + 1280u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250FBC; } }
L_00250FB4:
    set32(c.r[2], 0u - 3841u);
    set32(c.r[3], 0u + 1024u);
    c.budget -= 2;
L_00250FBC:
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[7].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250FD0:
    set32(c.r[29], c.r[29].w[0] - 544u);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[20], c.r[6].w[0] + 48u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 528u), c.f[28]);
    st32((c.r[29].w[0] + 520u), c.f[27]);
    st32((c.r[29].w[0] + 512u), c.f[26]);
    st32((c.r[29].w[0] + 504u), c.f[25]);
    st32((c.r[29].w[0] + 496u), c.f[24]);
    st32((c.r[29].w[0] + 488u), c.f[23]);
    st32((c.r[29].w[0] + 480u), c.f[22]);
    st32((c.r[29].w[0] + 472u), c.f[21]);
    st32((c.r[29].w[0] + 464u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28224u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[29].w[0] + 84u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[10].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251058u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x00251058u) [[unlikely]] return; }
L_00251058:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28224u)));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251070u);  if (depth < kMaxDepth) unit_0090(c, 190u, depth + 1u); else { c.pc = 0x00341CA0u; return; } if (c.pc != 0x00251070u) [[unlikely]] return; }
L_00251070:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[20].w[0] + 72u), 0u);
    st32((c.r[20].w[0] + 76u), 0u);
    st32((c.r[20].w[0] + 80u), 0u);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    st32((c.r[20].w[0] + 68u), c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    st32((c.r[20].w[0] + 60u), c.f[1]);
    st32((c.r[20].w[0] + 64u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510C0u);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x002510C0u) [[unlikely]] return; }
L_002510C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 18880u);
    c.r[3].d[0] = c.r[5].d[0] & 12ull;
    st32((c.r[6].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[2].w[0] - 18880u), c.r[17].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251100; } }
    c.budget -= 1;
L_002510E8:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002510E8u | kUnwind; return; } goto L_002510E8; } }
L_00251100:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00251124; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00251124:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x60000000u);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 300u)));
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    c.budget -= 18;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_00251DD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 48759ull;
    c.f[28] = c.r[1].w[0];
    c.budget -= 3;
L_00251178:
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025119Cu);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0025119Cu) [[unlikely]] return; }
L_0025119C:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 300u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002511D0; } }
L_002511B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511CCu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002511CCu) [[unlikely]] return; }
L_002511CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002511D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00251DBC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511ECu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002511ECu) [[unlikely]] return; }
L_002511EC:
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] - 18768u);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[6], ld32((c.r[7].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002511B8u | kUnwind; return; } goto L_002511B8; } }
L_00251218:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00251DBC; } }
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[27] = c.r[1].w[0];
    st32((c.r[29].w[0] + 116u), c.r[6].w[0]);
    c.budget -= 6;
L_00251238:
    st32((c.r[29].w[0] + 92u), 0u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00251248:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00251250:
    c.r[7].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[2], c.r[23].w[0] + 1u);
    set32(c.r[3], c.r[22].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[29].w[0] + 120u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00251888; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28228u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251384; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002512B8u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002512B8u) [[unlikely]] return; }
L_002512B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], 0u - 32768u);
    c.r[3].d[0] = ld64((c.r[4].w[0] - 18800u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18800u);
    set32(c.r[4], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[8].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    set32(c.r[7], c.r[7].w[0] - 18768u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    set32(c.r[5], ld32((c.r[7].w[0] + 320u)));
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], 0u + 14u);
    st64((c.r[2].w[0] - 18800u), c.r[3].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    set32(c.r[4], ld32((c.r[7].w[0] - 364u)));
    set32(c.r[3], c.r[3].w[0] - 18800u);
    st64((c.r[3].w[0] + 8u), c.r[8].d[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251338u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00251338u) [[unlikely]] return; }
L_00251338:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 21;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251450; } }
L_00251384:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251398u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00251398u) [[unlikely]] return; }
L_00251398:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u - 32768u);
    c.r[3].d[0] = ld64((c.r[7].w[0] - 18800u));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18800u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[7], c.r[7].w[0] - 18768u);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 8u));
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    set32(c.r[5], ld32((c.r[7].w[0] + 320u)));
    set32(c.r[4], 0u - 16u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[2].w[0] - 18800u), c.r[3].d[0]);
    set32(c.r[6], 0u + 14u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] - 364u)));
    set32(c.r[3], c.r[3].w[0] - 18800u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    st64((c.r[3].w[0] + 8u), c.r[8].d[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251418u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00251418u) [[unlikely]] return; }
L_00251418:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_00251450:
    st64((c.r[5].w[0] - 18832u), c.r[3].d[0]);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 104u), c.r[23].w[0]);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.r[18].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 108u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[22].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251484u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00251484u) [[unlikely]] return; }
L_00251484:
    st32((c.r[29].w[0] + 120u), c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18768u);
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002514C0u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x002514C0u) [[unlikely]] return; }
L_002514C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], 0u - 32768u);
    c.r[2].d[0] = ld64((c.r[6].w[0] - 18800u));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[6].w[0] - 18800u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 18800u);
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002514F4u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x002514F4u) [[unlikely]] return; }
L_002514F4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[7], c.r[7].w[0] - 18832u);
    ld128((c.r[7].w[0]) & ~15u, c.r[5]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251510u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00251510u) [[unlikely]] return; }
L_00251510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025181C; } }
L_00251518:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 300u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002517A4; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[30], c.r[21].w[0] - 18800u);
    set32(c.r[6], 0u - 32768u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[11], 0u - 1u);
    c.r[11].d[0] = c.r[11].d[0] >> 4;
    c.r[13].d[0] = 0ull | 32768ull;
    c.r[13].d[0] = c.r[13].d[0] << 45;
    set32(c.r[7], 0u - 16u);
    set32(c.r[14], 0u + 14u);
    set32(c.r[23], 0u - 1u);
    c.r[23].d[0] = c.r[23].d[0] >> 3;
    c.r[9].d[0] = 0ull | 32768ull;
    c.r[9].d[0] = c.r[9].d[0] << 46;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | 65535ull;
    c.r[10].d[0] = c.r[10].d[0] << 6;
    c.r[10].d[0] = c.r[10].d[0] | 63ull;
    c.r[12].d[0] = 0ull | 32768ull;
    c.r[12].d[0] = c.r[12].d[0] << 19;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[15], 0u + 7u);
    c.budget -= 23;
L_00251588:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[17], c.r[18].w[0] << 5);
    set32(c.r[16], ld32((c.r[4].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[7]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[8]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[9]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[11]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[12]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[13]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[14]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[15]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[25]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515D8u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002515D8u) [[unlikely]] return; }
L_002515D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[6]);
    set32(c.r[4], c.r[4].w[0] - 18768u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[7]);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[9]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[10]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[11]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[12]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[13]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[14]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[15]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[25]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025178C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 28228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002516CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.r[3].d[0] = ld64((c.r[21].w[0] - 18800u));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[4].d[0] = ld64((c.r[30].w[0] + 8u));
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[6].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st64((c.r[21].w[0] - 18800u), c.r[3].d[0]);
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 21;
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[30].w[0] + 8u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[7], c.r[7].w[0] - 18832u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[25].w[0] - 18832u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] - 18240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[4].w[0] + 8u), c.r[15].w[0]);
    set32(c.r[7], 0u + 52u);
    st64((c.r[5].w[0] - 18256u), c.r[6].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18256u);
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st64((c.r[2].w[0] - 18240u), 0ull);
    c.budget -= 40;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251758; } }
L_002516CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = ld64((c.r[21].w[0] - 18800u));
    set32(c.r[5], ld32((c.r[3].w[0] + 444u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[4].d[0] = ld64((c.r[30].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    st64((c.r[21].w[0] - 18800u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    st64((c.r[30].w[0] + 8u), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 18832u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[12].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[25].w[0] - 18832u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], c.r[7].w[0] - 18240u);
    st32((c.r[7].w[0] + 8u), c.r[15].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[2].w[0] - 18256u), c.r[6].d[0]);
    set32(c.r[4], 0u + 52u);
    set32(c.r[3], c.r[3].w[0] - 18256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st64((c.r[5].w[0] - 18240u), 0ull);
    c.budget -= 35;
L_00251758:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025176Cu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0025176Cu) [[unlikely]] return; }
L_0025176C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], c.r[7].w[0] - 18768u);
    set32(c.r[3], ld32((c.r[7].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002517A4; } }
L_0025178C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 300u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251588u | kUnwind; return; } goto L_00251588; } }
L_002517A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], 0u - 32768u);
    c.r[2].d[0] = ld64((c.r[4].w[0] - 18800u));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[6], 0u + 108u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[8], 0u + 4u);
    st64((c.r[3].w[0] - 18800u), c.r[2].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002517E4u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x002517E4u) [[unlikely]] return; }
L_002517E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18800u);
    ld128((c.r[4].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251800u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00251800u) [[unlikely]] return; }
L_00251800:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[6], c.r[6].w[0] - 18832u);
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025181Cu);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0025181Cu) [[unlikely]] return; }
L_0025181C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[7].w[0] - 18848u);
    set32(c.r[6], ld32((c.r[3].w[0] - 18880u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] - 18880u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[7].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 4848u)));
    set32(c.r[6], 0u + 16u);
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[2].w[0] - 4848u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[7].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251878u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00251878u) [[unlikely]] return; }
L_00251878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18880u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[2].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 4;
L_00251888:
    c.f[21] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[22] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.f[23] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002518A8; } }
    st32((c.r[20].w[0] + 48u), c.f[21]);
    c.budget -= 1;
L_002518A8:
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002518C0; } }
    st32((c.r[20].w[0] + 60u), c.f[21]);
    c.budget -= 1;
L_002518C0:
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002518D8; } }
    st32((c.r[20].w[0] + 52u), c.f[22]);
    c.budget -= 1;
L_002518D8:
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002518F0; } }
    st32((c.r[20].w[0] + 64u), c.f[22]);
    c.budget -= 1;
L_002518F0:
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251908; } }
    st32((c.r[20].w[0] + 56u), c.f[23]);
    c.budget -= 1;
L_00251908:
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251920; } }
    st32((c.r[20].w[0] + 68u), c.f[23]);
    c.budget -= 1;
L_00251920:
    c.f[12] = ld32((c.r[20].w[0] + 48u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251940u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00251940u) [[unlikely]] return; }
L_00251940:
    c.f[13] = ld32((c.r[20].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[20].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251960u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00251960u) [[unlikely]] return; }
L_00251960:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251974u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00251974u) [[unlikely]] return; }
L_00251974:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025198Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0025198Cu) [[unlikely]] return; }
L_0025198C:
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519A0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002519A0u) [[unlikely]] return; }
L_002519A0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519ACu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002519ACu) [[unlikely]] return; }
L_002519AC:
    c.f[0] = fp::mul(c.f[0], c.f[27]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519CCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002519CCu) [[unlikely]] return; }
L_002519CC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519E0u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x002519E0u) [[unlikely]] return; }
L_002519E0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519ECu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002519ECu) [[unlikely]] return; }
L_002519EC:
    c.f[0] = fp::mul(c.f[0], c.f[27]);
    st32((c.r[20].w[0] + 72u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251A34; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], 0u + 448u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.f[22] = fp::add(c.f[22], c.f[2]);
    c.budget -= 13;
L_00251A34:
    c.f[20] = ld32((c.r[19].w[0] + 44u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], c.r[6].w[0] - 18880u);
    c.f[24] = ld32((c.r[19].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[28]) < fp::key(c.f[20]));
    c.f[1] = c.f[20];
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00251A6C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251A84; } }
L_00251A6C:
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 31;
    c.r[3].d[0] = ld64((c.r[7].w[0] + 304u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[7].w[0] + 304u), c.r[3].d[0]);
    c.budget -= 6;
L_00251A84:
    fpu_compare(c, fp::key(c.f[28]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00251AAC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251AC8; } }
L_00251AAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 304u));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[4].w[0] + 304u), c.r[3].d[0]);
    c.budget -= 7;
L_00251AC8:
    set32(c.r[5], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 40u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.f[25] = ld32((c.r[19].w[0] + 32u));
    c.f[20] = c.r[6].w[0];
    c.f[26] = ld32((c.r[19].w[0] + 36u));
    c.budget -= 16;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00251B14; } }
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[16].d[0] = c.r[16].d[0] | 32768ull;
    c.f[20] = c.r[4].w[0];
    c.budget -= 3;
L_00251B14:
    set32(c.r[2], c.f[21]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B2Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251B2Cu) [[unlikely]] return; }
L_00251B2C:
    set32(c.r[3], c.f[22]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[29].w[0] + 104u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[22], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B48u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251B48u) [[unlikely]] return; }
L_00251B48:
    set32(c.r[4], c.f[23]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B5Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251B5Cu) [[unlikely]] return; }
L_00251B5C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B6Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251B6Cu) [[unlikely]] return; }
L_00251B6C:
    set32(c.r[6], c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B80u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251B80u) [[unlikely]] return; }
L_00251B80:
    set32(c.r[7], c.f[24]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B94u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251B94u) [[unlikely]] return; }
L_00251B94:
    set32(c.r[2], c.f[25]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BA8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251BA8u) [[unlikely]] return; }
L_00251BA8:
    set32(c.r[3], c.f[26]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BBCu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00251BBCu) [[unlikely]] return; }
L_00251BBC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[21], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BD4u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00251BD4u) [[unlikely]] return; }
L_00251BD4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00251BFC; } }
    set32(c.r[22], ld32((c.r[29].w[0] + 100u)));
    c.r[2].d[0] = c.r[22].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251BFC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251250u | kUnwind; return; } goto L_00251250; } }
L_00251BFC:
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00251CA4; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00251CA4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_00251CA4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00251CB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C40u);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x00251C40u) [[unlikely]] return; }
L_00251C40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C58u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00251C58u) [[unlikely]] return; }
L_00251C58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C6Cu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00251C6Cu) [[unlikely]] return; }
L_00251C6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251CB0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[17].w[0] - 3u);
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C8Cu);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00251C8Cu) [[unlikely]] return; }
L_00251C8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CA0u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00251CA0u) [[unlikely]] return; }
L_00251CA0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00251CA4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D38; } }
L_00251CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CC4u);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x00251CC4u) [[unlikely]] return; }
L_00251CC4:
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00251CC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CE0u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00251CE0u) [[unlikely]] return; }
L_00251CE0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251D04; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00251D04; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251CC8u | kUnwind; return; } goto L_00251CC8; } }
L_00251D04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251D18u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00251D18u) [[unlikely]] return; }
L_00251D18:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251D2Cu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00251D2Cu) [[unlikely]] return; }
L_00251D2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
L_00251D38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251248u | kUnwind; return; } goto L_00251248; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251DB4; } }
    set32(c.r[6], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x00251D58u);  goto L_00251D5C; }
L_00251D5C:
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[7].w[0] - 18880u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DA0u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00251DA0u) [[unlikely]] return; }
L_00251DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DB4u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00251DB4u) [[unlikely]] return; }
L_00251DB4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251238u | kUnwind; return; } goto L_00251238; } }
L_00251DBC:
    set32(c.r[16], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251178u | kUnwind; return; } goto L_00251178; } }
L_00251DD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DE8u);  if (depth < kMaxDepth) unit_00A1(c, 99u, depth + 1u); else { c.pc = 0x00384FA0u; return; } if (c.pc != 0x00251DE8u) [[unlikely]] return; }
L_00251DE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DF4u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00251DF4u) [[unlikely]] return; }
L_00251DF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E00u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00251E00u) [[unlikely]] return; }
L_00251E00:
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.f[28] = ld32((c.r[29].w[0] + 528u));
    c.f[27] = ld32((c.r[29].w[0] + 520u));
    c.f[26] = ld32((c.r[29].w[0] + 512u));
    c.f[25] = ld32((c.r[29].w[0] + 504u));
    c.f[24] = ld32((c.r[29].w[0] + 496u));
    c.f[23] = ld32((c.r[29].w[0] + 488u));
    c.f[22] = ld32((c.r[29].w[0] + 480u));
    c.f[21] = ld32((c.r[29].w[0] + 472u));
    c.f[20] = ld32((c.r[29].w[0] + 464u));
    set32(c.r[29], c.r[29].w[0] + 544u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00251E60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 300u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00251FE4; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[21], c.r[20].w[0] - 18800u);
    c.budget -= 4;
L_00251EB8:
    set32(c.r[16], ld32((c.r[19].w[0] + 444u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    set32(c.r[17], c.r[18].w[0] << 5);
    set32(c.r[5], ld32((c.r[30].w[0] + 56u)));
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251ED8u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00251ED8u) [[unlikely]] return; }
L_00251ED8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18768u);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00251FD0; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] - 18800u));
    set32(c.r[6], 0u - 32768u);
    set32(c.r[4], ld32((c.r[19].w[0] + 444u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[5].d[0] = ld64((c.r[21].w[0] + 8u));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    set32(c.r[6], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 3;
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[6].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 19;
    st64((c.r[20].w[0] - 18800u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u + 14u);
    set32(c.r[2], c.r[2].w[0] - 18832u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st64((c.r[21].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[4], 0u + 6u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u + 7u);
    st64((c.r[2].w[0] - 18832u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 18240u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[2].w[0] - 18256u), c.r[6].d[0]);
    set32(c.r[4], 0u + 52u);
    set32(c.r[3], c.r[3].w[0] - 18256u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st64((c.r[23].w[0] - 18240u), 0ull);
    c.budget -= 55;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251FE4; } }
L_00251FD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 300u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251EB8u | kUnwind; return; } goto L_00251EB8; } }
L_00251FE4:
    set32(c.r[3], ld32((c.r[22].w[0] - 18880u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1028ull;
    set32(c.r[16], c.r[22].w[0] - 18880u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[22].w[0] - 18880u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] - 18800u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[22].w[0] - 18880u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025203Cu);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0025203Cu) [[unlikely]] return; }
L_0025203C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 18832u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252054u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252054u) [[unlikely]] return; }
L_00252054:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[4].w[0] - 18256u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025206Cu);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0025206Cu) [[unlikely]] return; }
L_0025206C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 18848u);
    set32(c.r[8], ld32((c.r[22].w[0] - 18880u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[6].w[0] - 4848u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 20u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4848u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    st32((c.r[3].w[0] - 4848u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 4848u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    st32((c.r[3].w[0] - 4848u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002520BCu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002520BCu) [[unlikely]] return; }
L_002520BC:
    set32(c.r[3], ld32((c.r[22].w[0] - 18880u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + 12u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    st32((c.r[22].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 15;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002520F4u);  goto L_002520F8; }
L_002520F8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00252148:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 68u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[15], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] >> 4;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    set32(c.r[11], c.r[4].w[0] - 18848u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull | 32768ull;
    c.r[17].d[0] = c.r[17].d[0] << 45;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[12].d[0] = 0ull | 32768ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[13].d[0] = 0ull | 32768ull;
    c.r[13].d[0] = c.r[13].d[0] << 31;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[9], 0u - 16u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[14].d[0] = 0ull | 64512ull;
    c.r[14].d[0] = c.r[14].d[0] << 17;
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[14].d[0] = c.r[14].d[0] << 16;
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[14].d[0] = c.r[14].d[0] << 15;
    c.r[14].d[0] = c.r[14].d[0] | 32767ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[10].d[0] = 0ull | 37056ull;
    c.r[10].d[0] = c.r[10].d[0] << 41;
    st32((c.r[29].w[0] + 288u), c.f[24]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st32((c.r[29].w[0] + 272u), c.f[22]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 264u), c.f[21]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[20], ld32((c.r[7].w[0])));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    set32(c.r[7], 0u + 4u);
    st32((c.r[19].w[0] + 68u), c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    st32((c.r[19].w[0] + 60u), c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[1]);
    st32((c.r[19].w[0] + 72u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    st32((c.r[19].w[0] + 80u), 0u);
    c.r[2].d[0] = ld64((c.r[4].w[0] - 18848u));
    c.r[3].d[0] = ld64((c.r[11].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    st64((c.r[11].w[0] + 8u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    st32((c.r[29].w[0] + 72u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[4].w[0] - 18848u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 74;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252270u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00252270u) [[unlikely]] return; }
L_00252270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025227Cu);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x0025227Cu) [[unlikely]] return; }
L_0025227C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252290u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00252290u) [[unlikely]] return; }
L_00252290:
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522A8u);  if (depth < kMaxDepth) unit_008F(c, 409u, depth + 1u); else { c.pc = 0x0033FC20u; return; } if (c.pc != 0x002522A8u) [[unlikely]] return; }
L_002522A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002522B0:
    c.r[2].d[0] = c.r[20].sd[0] < 127ll ? 1ull : 0ull;
    set32(c.r[3], 0u + 126u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[20].d[0];
    c.r[30].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00252580; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00252580; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[24] = c.r[1].w[0];
    set32(c.r[17], c.r[21].w[0] - 18880u);
    set32(c.r[23], c.r[4].w[0] - 4848u);
    set32(c.r[18], c.r[19].w[0] + 32u);
    c.budget -= 8;
L_002522F8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00252380; } }
    set32(c.r[7], 0u + 4u);
    set32(c.r[6], 0u + 108u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[22], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252320u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00252320u) [[unlikely]] return; }
L_00252320:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] - 18848u);
    mmi::por(c.r[5], c.r[0], c.r[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] - 18880u)));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st128((c.r[23].w[0]) & ~15u, c.r[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252348u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252348u) [[unlikely]] return; }
L_00252348:
    set32(c.r[3], ld32((c.r[21].w[0] - 18880u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] - 4848u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    st32((c.r[7].w[0] - 4848u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252374u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00252374u) [[unlikely]] return; }
L_00252374:
    set32(c.r[3], ld32((c.r[21].w[0] - 18880u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[21].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 3;
L_00252380:
    c.f[20] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.f[21] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[22] = ld32((c.r[16].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002523A8; } }
    st32((c.r[19].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_002523A8:
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002523C0; } }
    st32((c.r[19].w[0] + 60u), c.f[20]);
    c.budget -= 1;
L_002523C0:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002523D8; } }
    st32((c.r[19].w[0] + 52u), c.f[21]);
    c.budget -= 1;
L_002523D8:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002523F0; } }
    st32((c.r[19].w[0] + 64u), c.f[21]);
    c.budget -= 1;
L_002523F0:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252408; } }
    st32((c.r[19].w[0] + 56u), c.f[22]);
    c.budget -= 1;
L_00252408:
    c.f[0] = ld32((c.r[19].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252420; } }
    st32((c.r[19].w[0] + 68u), c.f[22]);
    c.budget -= 1;
L_00252420:
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 52u));
    c.f[15] = c.f[23];
    c.f[14] = ld32((c.r[19].w[0] + 56u));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252444u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00252444u) [[unlikely]] return; }
L_00252444:
    c.f[13] = ld32((c.r[19].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[19].w[0] + 68u));
    c.f[15] = c.f[23];
    c.f[12] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252460u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00252460u) [[unlikely]] return; }
L_00252460:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252474u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00252474u) [[unlikely]] return; }
L_00252474:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025248Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0025248Cu) [[unlikely]] return; }
L_0025248C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524A0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002524A0u) [[unlikely]] return; }
L_002524A0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524ACu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002524ACu) [[unlikely]] return; }
L_002524AC:
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524CCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002524CCu) [[unlikely]] return; }
L_002524CC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524E0u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x002524E0u) [[unlikely]] return; }
L_002524E0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524ECu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002524ECu) [[unlikely]] return; }
L_002524EC:
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.f[20]);
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252508u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252508u) [[unlikely]] return; }
L_00252508:
    set32(c.r[3], c.f[21]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025251Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025251Cu) [[unlikely]] return; }
L_0025251C:
    set32(c.r[4], c.f[22]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252530u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252530u) [[unlikely]] return; }
L_00252530:
    set32(c.r[7], c.f[23]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252544u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252544u) [[unlikely]] return; }
L_00252544:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_00252568; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252564u);  if (depth < kMaxDepth) unit_008F(c, 413u, depth + 1u); else { c.pc = 0x0033FDF0u; return; } if (c.pc != 0x00252564u) [[unlikely]] return; }
L_00252564:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00252568:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252580; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002522F8u | kUnwind; return; } goto L_002522F8; } }
L_00252580:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00252628; } }
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 4;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x00252594u);  goto L_00252598; }
L_00252598:
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 18880u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 18880u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002525E8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002525E8u) [[unlikely]] return; }
L_002525E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252614u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00252614u) [[unlikely]] return; }
L_00252614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252628u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00252628u) [[unlikely]] return; }
L_00252628:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002522B0u | kUnwind; return; } goto L_002522B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[4].w[0] - 18880u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00252654u);  goto L_00252658; }
L_00252658:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025266Cu);  if (depth < kMaxDepth) unit_00A1(c, 99u, depth + 1u); else { c.pc = 0x00384FA0u; return; } if (c.pc != 0x0025266Cu) [[unlikely]] return; }
L_0025266C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252678u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00252678u) [[unlikely]] return; }
L_00252678:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252684u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00252684u) [[unlikely]] return; }
L_00252684:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 288u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002526D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[13], 0u - 1u);
    c.r[13].d[0] = c.r[13].d[0] >> 4;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[14], 0u - 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[8], 0u + 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], 0u - 241u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[6], 0u - 32768u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[11].w[0] - 18848u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 120ull;
    c.r[5].d[0] = ld64((c.r[11].w[0] - 18848u));
    set32(c.r[19], c.r[12].w[0] - 18800u);
    c.r[9].d[0] = ld64((c.r[22].w[0] + 8u));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[13].d[0];
    c.r[7].d[0] = ld64((c.r[12].w[0] - 18800u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 31;
    set32(c.r[3], 0u + 16u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], 0u - 3841u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[9].d[0] = c.r[9].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u + 1024u);
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 2047ull;
    c.r[10].d[0] = ld64((c.r[19].w[0] + 8u));
    set32(c.r[17], c.r[23].w[0] - 18832u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[13].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 47;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[17].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st64((c.r[11].w[0] - 18848u), c.r[5].d[0]);
    st64((c.r[12].w[0] - 18800u), c.r[7].d[0]);
    set32(c.r[4], c.r[15].w[0] - 18240u);
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 26;
    c.r[3].d[0] = c.r[3].d[0] | 49153ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[10].d[0] & c.r[14].d[0];
    st64((c.r[23].w[0] - 18832u), c.r[3].d[0]);
    set32(c.r[6], 0u + 14u);
    st64((c.r[22].w[0] + 8u), c.r[9].d[0]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[6].d[0];
    st64((c.r[19].w[0] + 8u), c.r[10].d[0]);
    set32(c.r[13], 0u + 6u);
    st32((c.r[17].w[0] + 8u), c.r[13].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[18].w[0] - 18880u);
    set32(c.r[14], 0u + 52u);
    st64((c.r[15].w[0] - 18240u), 0ull);
    set32(c.r[20], c.r[21].w[0] - 18256u);
    st64((c.r[21].w[0] - 18256u), 0ull);
    st32((c.r[20].w[0] + 8u), c.r[14].w[0]);
    set32(c.r[6], 0u + 108u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 97;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252854u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00252854u) [[unlikely]] return; }
L_00252854:
    ld128((c.r[19].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252864u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252864u) [[unlikely]] return; }
L_00252864:
    ld128((c.r[17].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252874u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252874u) [[unlikely]] return; }
L_00252874:
    ld128((c.r[20].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252884u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252884u) [[unlikely]] return; }
L_00252884:
    ld128((c.r[22].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[18].w[0] - 18880u)));
    set32(c.r[7], c.r[8].w[0] - 4848u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[8].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[8].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002528C0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002528C0u) [[unlikely]] return; }
L_002528C0:
    set32(c.r[3], ld32((c.r[18].w[0] - 18880u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[18].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002528D8u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x002528D8u) [[unlikely]] return; }
L_002528D8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00252908:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[12], 0u - 1u);
    c.r[12].d[0] = c.r[12].d[0] >> 4;
    c.r[5].d[0] = ld64((c.r[8].w[0] - 18848u));
    c.r[13].d[0] = 0ull | 32768ull;
    c.r[13].d[0] = c.r[13].d[0] << 45;
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[12].d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[13].d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 31;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[8].w[0] - 18848u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 32768u);
    c.r[7].d[0] = ld64((c.r[11].w[0] - 18800u));
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[9].d[0] = ld64((c.r[20].w[0] + 8u));
    set32(c.r[6], 0u - 16u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[19], c.r[11].w[0] - 18800u);
    c.r[9].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 120ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    c.r[10].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[4].d[0] & 2047ull;
    set32(c.r[17], c.r[22].w[0] - 18832u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[12].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 47;
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[17].w[0]) & ~15u, c.r[2]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[13].d[0];
    c.r[10].d[0] = c.r[10].d[0] & c.r[6].d[0];
    set32(c.r[3], 0u + 14u);
    st64((c.r[11].w[0] - 18800u), c.r[7].d[0]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[14].w[0] - 18240u);
    st64((c.r[8].w[0] - 18848u), c.r[5].d[0]);
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 26;
    c.r[3].d[0] = c.r[3].d[0] | 49153ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[12], 0u + 6u);
    st64((c.r[22].w[0] - 18832u), c.r[3].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[20].w[0] + 8u), c.r[9].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[19].w[0] + 8u), c.r[10].d[0]);
    set32(c.r[21], c.r[15].w[0] - 18256u);
    st32((c.r[17].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[16], c.r[18].w[0] - 18880u);
    set32(c.r[13], 0u + 52u);
    st64((c.r[14].w[0] - 18240u), 0ull);
    st64((c.r[15].w[0] - 18256u), 0ull);
    set32(c.r[6], 0u + 108u);
    st32((c.r[21].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 87;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A64u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00252A64u) [[unlikely]] return; }
L_00252A64:
    ld128((c.r[19].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A74u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252A74u) [[unlikely]] return; }
L_00252A74:
    ld128((c.r[17].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A84u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252A84u) [[unlikely]] return; }
L_00252A84:
    ld128((c.r[21].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A94u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252A94u) [[unlikely]] return; }
L_00252A94:
    ld128((c.r[20].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[18].w[0] - 18880u)));
    set32(c.r[7], c.r[8].w[0] - 4848u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[8].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[8].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AD0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00252AD0u) [[unlikely]] return; }
L_00252AD0:
    set32(c.r[3], ld32((c.r[18].w[0] - 18880u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[18].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AE8u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00252AE8u) [[unlikely]] return; }
L_00252AE8:
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
L_00252B18:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[11], 0u - 1u);
    c.r[11].d[0] = c.r[11].d[0] >> 4;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[12], 0u - 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[8], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[3], 0u - 241u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[6], 0u - 32768u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[22], c.r[13].w[0] - 18848u);
    c.r[5].d[0] = ld64((c.r[13].w[0] - 18848u));
    c.r[4].d[0] = c.r[4].d[0] | 104ull;
    c.r[9].d[0] = ld64((c.r[22].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] & 2047ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[11].d[0];
    c.r[7].d[0] = ld64((c.r[14].w[0] - 18800u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[12].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 31;
    set32(c.r[3], 0u + 16u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], 0u - 3841u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] & c.r[3].d[0];
    set32(c.r[19], c.r[14].w[0] - 18800u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 47;
    set32(c.r[2], 0u + 1024u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    c.r[10].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[13].w[0] - 18848u), c.r[5].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[14].w[0] - 18800u), c.r[7].d[0]);
    set32(c.r[4], c.r[8].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 26;
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[10].d[0] = c.r[10].d[0] & c.r[12].d[0];
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[8].w[0] - 18832u), c.r[3].d[0]);
    set32(c.r[12], c.r[20].w[0] - 18240u);
    set32(c.r[11], 0u + 7u);
    set32(c.r[6], 0u + 14u);
    st32((c.r[12].w[0] + 8u), c.r[11].w[0]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[6].d[0];
    st64((c.r[22].w[0] + 8u), c.r[9].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[19].w[0] + 8u), c.r[10].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], c.r[18].w[0] - 18880u);
    set32(c.r[15], 0u + 52u);
    set32(c.r[16], c.r[21].w[0] - 18256u);
    st64((c.r[20].w[0] - 18240u), 0ull);
    st64((c.r[21].w[0] - 18256u), 0ull);
    set32(c.r[6], 0u + 108u);
    st32((c.r[16].w[0] + 8u), c.r[15].w[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 94;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252C90u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00252C90u) [[unlikely]] return; }
L_00252C90:
    ld128((c.r[19].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CA0u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252CA0u) [[unlikely]] return; }
L_00252CA0:
    ld128((c.r[16].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CB0u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252CB0u) [[unlikely]] return; }
L_00252CB0:
    ld128((c.r[16].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CC0u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x00252CC0u) [[unlikely]] return; }
L_00252CC0:
    ld128((c.r[22].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[18].w[0] - 18880u)));
    set32(c.r[7], c.r[8].w[0] - 4848u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[8].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[8].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CFCu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00252CFCu) [[unlikely]] return; }
L_00252CFC:
    set32(c.r[3], ld32((c.r[18].w[0] - 18880u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[18].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252D14u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00252D14u) [[unlikely]] return; }
L_00252D14:
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
L_00252D40:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 216u), c.f[25]);
    st32((c.r[29].w[0] + 208u), c.f[24]);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DB0u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00252DB0u) [[unlikely]] return; }
L_00252DB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DBCu);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x00252DBCu) [[unlikely]] return; }
L_00252DBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DCCu);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00252DCCu) [[unlikely]] return; }
L_00252DCC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00252DE8; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DE0u);  if (depth < kMaxDepth) unit_0054(c, 178u, depth + 1u); else { c.pc = 0x002526D0u; return; } if (c.pc != 0x00252DE0u) [[unlikely]] return; }
L_00252DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252DF4; } }
L_00252DE8:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DF4u);  if (depth < kMaxDepth) unit_0054(c, 192u, depth + 1u); else { c.pc = 0x00252B18u; return; } if (c.pc != 0x00252DF4u) [[unlikely]] return; }
L_00252DF4:
    set32(c.r[16], c.r[30].w[0] - 18880u);
    set32(c.r[6], 0u + 109u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32772ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E14u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00252E14u) [[unlikely]] return; }
L_00252E14:
    set32(c.r[20], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E28u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252E28u) [[unlikely]] return; }
L_00252E28:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E3Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252E3Cu) [[unlikely]] return; }
L_00252E3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E4Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252E4Cu) [[unlikely]] return; }
L_00252E4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E5Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252E5Cu) [[unlikely]] return; }
L_00252E5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00252FBC; } }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[25] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[24] = c.r[1].w[0];
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], 0u + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[23], c.r[2].w[0] << 16);
    c.budget -= 12;
L_00252EA0:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.f[0] = ld32((c.r[3].w[0] + 28372u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.r[3].d[0] = c.r[22].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[22] = ld32((c.r[21].w[0] + 28364u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.f[23] = ld32((c.r[2].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.f[21] = fp::mul(c.f[21], c.f[25]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;
    fpu_div(c, 21u, c.f[21], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252EF4u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00252EF4u) [[unlikely]] return; }
L_00252EF4:
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.f[12] = c.f[21];
    c.f[20] = ld32((c.r[21].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[22] = fp::mul(c.f[22], c.f[24]);
    c.f[23] = fp::add(c.f[23], c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F14u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00252F14u) [[unlikely]] return; }
L_00252F14:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00252F54; } }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252F60; } }
L_00252F54:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_00252F60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F70u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252F70u) [[unlikely]] return; }
L_00252F70:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F84u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252F84u) [[unlikely]] return; }
L_00252F84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F94u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252F94u) [[unlikely]] return; }
L_00252F94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FA4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00252FA4u) [[unlikely]] return; }
L_00252FA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00252EA0u | kUnwind; return; } goto L_00252EA0; } }
L_00252FBC:
    set32(c.r[16], c.r[30].w[0] - 18880u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FD0u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00252FD0u) [[unlikely]] return; }
L_00252FD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FE0u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00252FE0u) [[unlikely]] return; }
L_00252FE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FF0u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00252FF0u) [[unlikely]] return; }
L_00252FF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 65280ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253004u);  if (depth < kMaxDepth) unit_00A1(c, 112u, depth + 1u); else { c.pc = 0x003852B8u; return; } if (c.pc != 0x00253004u) [[unlikely]] return; }
L_00253004:
    set32(c.r[3], 0u + 736u);
    set32(c.r[5], 0u + 247u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[6], 0u + 126u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025302Cu);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x0025302Cu) [[unlikely]] return; }
L_0025302C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_00253060; } }
    c.budget -= 1;
L_00253038:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[30].w[0] - 18880u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    if (c.r[17].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253050u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253050u) [[unlikely]] return; }
L_00253050:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00253038u | kUnwind; return; } goto L_00253038; } }
L_00253060:
    set32(c.r[16], c.r[30].w[0] - 18880u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00253070u);  goto L_00253074; }
L_00253074:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025308Cu);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x0025308Cu) [[unlikely]] return; }
L_0025308C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28260u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28260u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002530A8u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x002530A8u) [[unlikely]] return; }
L_002530A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002530B4u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x002530B4u) [[unlikely]] return; }
L_002530B4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[25] = ld32((c.r[29].w[0] + 216u));
    c.f[24] = ld32((c.r[29].w[0] + 208u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00253108:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[21]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.f[21] = c.f[13];
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253174u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00253174u) [[unlikely]] return; }
L_00253174:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253180u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x00253180u) [[unlikely]] return; }
L_00253180:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253190u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00253190u) [[unlikely]] return; }
L_00253190:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002531AC; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002531A4u);  if (depth < kMaxDepth) unit_0054(c, 178u, depth + 1u); else { c.pc = 0x002526D0u; return; } if (c.pc != 0x002531A4u) [[unlikely]] return; }
L_002531A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002531B8; } }
L_002531AC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002531B8u);  if (depth < kMaxDepth) unit_0054(c, 192u, depth + 1u); else { c.pc = 0x00252B18u; return; } if (c.pc != 0x002531B8u) [[unlikely]] return; }
L_002531B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = 0ull | 32772ull;
    set32(c.r[16], c.r[2].w[0] - 18880u);
    set32(c.r[6], 0u + 109u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002531E0u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x002531E0u) [[unlikely]] return; }
L_002531E0:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28372u)));
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00253448; } }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[2], c.f[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 16);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
L_00253228:
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 28372u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.f[21] = ld32((c.r[21].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    set32(c.r[17], 0u + 1u);
    c.f[22] = ld32((c.r[4].w[0] + 28368u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[23] = fp::add(c.f[0], c.f[3]);
    c.f[12] = c.f[23];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253298u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00253298u) [[unlikely]] return; }
L_00253298:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[12] = c.f[23];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = ld32((c.r[21].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[22] = fp::add(c.f[22], c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532C0u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002532C0u) [[unlikely]] return; }
L_002532C0:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[22]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00253304; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025330C; } }
L_00253304:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 2;
L_0025330C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025331Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025331Cu) [[unlikely]] return; }
L_0025331C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025332Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025332Cu) [[unlikely]] return; }
L_0025332C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025333Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025333Cu) [[unlikely]] return; }
L_0025333C:
    set32(c.r[5], 0u + 4096u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025334Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025334Cu) [[unlikely]] return; }
L_0025334C:
    set32(c.r[2], ld32((c.r[21].w[0] + 28364u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[22] = ld32((c.r[4].w[0] + 28368u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[12] = c.f[23];
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253378u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00253378u) [[unlikely]] return; }
L_00253378:
    set32(c.r[2], ld32((c.r[21].w[0] + 28364u)));
    c.f[12] = c.f[23];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[22] = fp::add(c.f[22], c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002533A0u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002533A0u) [[unlikely]] return; }
L_002533A0:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[22]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002533E4; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002533EC; } }
L_002533E4:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 2;
L_002533EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002533FCu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002533FCu) [[unlikely]] return; }
L_002533FC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253410u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253410u) [[unlikely]] return; }
L_00253410:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253420u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253420u) [[unlikely]] return; }
L_00253420:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253430u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253430u) [[unlikely]] return; }
L_00253430:
    set32(c.r[2], ld32((c.r[22].w[0] + 28372u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00253228u | kUnwind; return; } goto L_00253228; } }
L_00253448:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253460u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00253460u) [[unlikely]] return; }
L_00253460:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253470u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00253470u) [[unlikely]] return; }
L_00253470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253480u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00253480u) [[unlikely]] return; }
L_00253480:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 65280ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253494u);  if (depth < kMaxDepth) unit_00A1(c, 112u, depth + 1u); else { c.pc = 0x003852B8u; return; } if (c.pc != 0x00253494u) [[unlikely]] return; }
L_00253494:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 736u);
    set32(c.r[5], 0u + 247u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[6], 0u + 126u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534BCu);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x002534BCu) [[unlikely]] return; }
L_002534BC:
    set32(c.r[2], ld32((c.r[22].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00253508; } }
    c.budget -= 1;
L_002534D0:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534E4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002534E4u) [[unlikely]] return; }
L_002534E4:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534F4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002534F4u) [[unlikely]] return; }
L_002534F4:
    set32(c.r[2], ld32((c.r[22].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002534D0u | kUnwind; return; } goto L_002534D0; } }
L_00253508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[16], c.r[5].w[0] - 18880u);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00253518u);  goto L_0025351C; }
L_0025351C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253538u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00253538u) [[unlikely]] return; }
L_00253538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28260u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28260u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253554u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00253554u) [[unlikely]] return; }
L_00253554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253560u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00253560u) [[unlikely]] return; }
L_00253560:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002535A8:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 18880u);
    st32((c.r[29].w[0] + 304u), c.f[26]);
    st32((c.r[29].w[0] + 296u), c.f[25]);
    c.f[26] = c.f[12];
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.f[25] = c.f[13];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 312u), c.f[27]);
    st32((c.r[29].w[0] + 288u), c.f[24]);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    st32((c.r[29].w[0] + 272u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253614u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00253614u) [[unlikely]] return; }
L_00253614:
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253624u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x00253624u) [[unlikely]] return; }
L_00253624:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253634u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00253634u) [[unlikely]] return; }
L_00253634:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253640u);  if (depth < kMaxDepth) unit_0054(c, 185u, depth + 1u); else { c.pc = 0x00252908u; return; } if (c.pc != 0x00253640u) [[unlikely]] return; }
L_00253640:
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[6], 0u + 109u);
    c.r[5].d[0] = 0ull | 32772ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025365Cu);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x0025365Cu) [[unlikely]] return; }
L_0025365C:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[26];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025367Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0025367Cu) [[unlikely]] return; }
L_0025367C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025369Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0025369Cu) [[unlikely]] return; }
L_0025369C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002536B8u) [[unlikely]] return; }
L_002536B8:
    c.f[0] = fp::cvt_w_s(c.f[26]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536D0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002536D0u) [[unlikely]] return; }
L_002536D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536E0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002536E0u) [[unlikely]] return; }
L_002536E0:
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002537C8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253704u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253704u) [[unlikely]] return; }
L_00253704:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253718u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253718u) [[unlikely]] return; }
L_00253718:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253728u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253728u) [[unlikely]] return; }
L_00253728:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253738u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253738u) [[unlikely]] return; }
L_00253738:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025374Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0025374Cu) [[unlikely]] return; }
L_0025374C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025375Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0025375Cu) [[unlikely]] return; }
L_0025375C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537B0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002537B0u) [[unlikely]] return; }
L_002537B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537C0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002537C0u) [[unlikely]] return; }
L_002537C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253898; } }
L_002537C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537DCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002537DCu) [[unlikely]] return; }
L_002537DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537F0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002537F0u) [[unlikely]] return; }
L_002537F0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253800u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253800u) [[unlikely]] return; }
L_00253800:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253810u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253810u) [[unlikely]] return; }
L_00253810:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253824u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00253824u) [[unlikely]] return; }
L_00253824:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253834u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253834u) [[unlikely]] return; }
L_00253834:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253888u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253888u) [[unlikely]] return; }
L_00253888:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253898u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253898u) [[unlikely]] return; }
L_00253898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28372u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00253C0C; } }
    c.f[0] = fp::cvt_w_s(c.f[25]);
    set32(c.r[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[27] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[24] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[30], c.r[2].w[0] << 16);
    c.budget -= 9;
L_002538D8:
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.r[16].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 28372u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = ld32((c.r[20].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[22] = fp::mul(c.f[22], c.f[1]);
    c.f[23] = ld32((c.r[22].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    fpu_div(c, 22u, c.f[22], c.f[0]);
    c.f[12] = c.f[22];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025392Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0025392Cu) [[unlikely]] return; }
L_0025392C:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[22];
    c.f[21] = ld32((c.r[20].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[27]);
    c.f[23] = fp::add(c.f[23], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025394Cu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0025394Cu) [[unlikely]] return; }
L_0025394C:
    c.f[14] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[12] = c.f[23];
    c.f[13] = c.f[25];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253968u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00253968u) [[unlikely]] return; }
L_00253968:
    c.f[20] = ld32((c.r[20].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = c.f[22];
    c.f[23] = ld32((c.r[22].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253984u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00253984u) [[unlikely]] return; }
L_00253984:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[22];
    c.f[21] = ld32((c.r[20].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[27]);
    c.f[23] = fp::add(c.f[23], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539A4u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002539A4u) [[unlikely]] return; }
L_002539A4:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002539E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002539EC; } }
L_002539E0:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002539EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[18], c.r[2].w[0] - 18880u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A00u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253A00u) [[unlikely]] return; }
L_00253A00:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A10u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253A10u) [[unlikely]] return; }
L_00253A10:
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00253AF0; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A34u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253A34u) [[unlikely]] return; }
L_00253A34:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A48u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253A48u) [[unlikely]] return; }
L_00253A48:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A58u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253A58u) [[unlikely]] return; }
L_00253A58:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A68u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253A68u) [[unlikely]] return; }
L_00253A68:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A7Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00253A7Cu) [[unlikely]] return; }
L_00253A7C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A8Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253A8Cu) [[unlikely]] return; }
L_00253A8C:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253AD8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253AD8u) [[unlikely]] return; }
L_00253AD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253AE8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253AE8u) [[unlikely]] return; }
L_00253AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253BB8; } }
L_00253AF0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B04u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253B04u) [[unlikely]] return; }
L_00253B04:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B18u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253B18u) [[unlikely]] return; }
L_00253B18:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B28u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253B28u) [[unlikely]] return; }
L_00253B28:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B38u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253B38u) [[unlikely]] return; }
L_00253B38:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B4Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00253B4Cu) [[unlikely]] return; }
L_00253B4C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B5Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253B5Cu) [[unlikely]] return; }
L_00253B5C:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BA8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253BA8u) [[unlikely]] return; }
L_00253BA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BB8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253BB8u) [[unlikely]] return; }
L_00253BB8:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[21].w[0] + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_00253BD0:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00253BD0u | kUnwind; return; } goto L_00253BD0; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28372u)));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002538D8u | kUnwind; return; } goto L_002538D8; } }
L_00253C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[2].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C20u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00253C20u) [[unlikely]] return; }
L_00253C20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C30u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00253C30u) [[unlikely]] return; }
L_00253C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28260u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 28260u), c.r[2].w[0]);
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x00253C54u);  goto L_00253C58; }
L_00253C58:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C6Cu);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00253C6Cu) [[unlikely]] return; }
L_00253C6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C78u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00253C78u) [[unlikely]] return; }
L_00253C78:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 312u));
    c.f[26] = ld32((c.r[29].w[0] + 304u));
    c.f[25] = ld32((c.r[29].w[0] + 296u));
    c.f[24] = ld32((c.r[29].w[0] + 288u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00253CD0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 18880u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 328u), c.f[27]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 312u), c.f[25]);
    c.f[27] = c.f[12];
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    c.f[25] = c.f[13];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 336u), c.f[28]);
    st32((c.r[29].w[0] + 320u), c.f[26]);
    st32((c.r[29].w[0] + 304u), c.f[24]);
    st32((c.r[29].w[0] + 296u), c.f[23]);
    st32((c.r[29].w[0] + 288u), c.f[22]);
    st32((c.r[29].w[0] + 280u), c.f[21]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D4Cu);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00253D4Cu) [[unlikely]] return; }
L_00253D4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D58u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x00253D58u) [[unlikely]] return; }
L_00253D58:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D68u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00253D68u) [[unlikely]] return; }
L_00253D68:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D74u);  if (depth < kMaxDepth) unit_0054(c, 185u, depth + 1u); else { c.pc = 0x00252908u; return; } if (c.pc != 0x00253D74u) [[unlikely]] return; }
L_00253D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32772ull;
    set32(c.r[6], 0u + 109u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D90u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00253D90u) [[unlikely]] return; }
L_00253D90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0055(c, 21u, depth); } }
    c.f[0] = fp::cvt_w_s(c.f[27]);
    set32(c.r[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[26] = c.r[1].w[0];
    c.f[0] = fp::cvt_w_s(c.f[25]);
    set32(c.r[3], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[24] = c.r[1].w[0];
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 15;
L_00253DE0:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 28372u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[20] = ld32((c.r[20].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[18].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[22] = ld32((c.r[30].w[0] + 28368u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[23] = fp::add(c.f[0], c.f[3]);
    c.f[12] = c.f[23];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E40u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00253E40u) [[unlikely]] return; }
L_00253E40:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[23];
    c.f[21] = ld32((c.r[20].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[26]);
    c.f[22] = fp::add(c.f[22], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E60u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00253E60u) [[unlikely]] return; }
L_00253E60:
    c.f[14] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[12] = c.f[22];
    c.f[13] = c.f[27];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E7Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00253E7Cu) [[unlikely]] return; }
L_00253E7C:
    c.f[20] = ld32((c.r[20].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = c.f[23];
    c.f[22] = ld32((c.r[30].w[0] + 28368u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E98u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00253E98u) [[unlikely]] return; }
L_00253E98:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[23];
    c.f[21] = ld32((c.r[20].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[26]);
    c.f[22] = fp::add(c.f[22], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253EB8u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00253EB8u) [[unlikely]] return; }
L_00253EB8:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[22]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00253EFC; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253F08; } }
L_00253EFC:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00253F08:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[23], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F18u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253F18u) [[unlikely]] return; }
L_00253F18:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F2Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253F2Cu) [[unlikely]] return; }
L_00253F2C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F40u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253F40u) [[unlikely]] return; }
L_00253F40:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F54u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00253F54u) [[unlikely]] return; }
L_00253F54:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F64u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253F64u) [[unlikely]] return; }
L_00253F64:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F74u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253F74u) [[unlikely]] return; }
L_00253F74:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F88u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00253F88u) [[unlikely]] return; }
L_00253F88:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F98u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00253F98u) [[unlikely]] return; }
L_00253F98:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FE4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253FE4u) [[unlikely]] return; }
L_00253FE4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FF4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00253FF4u) [[unlikely]] return; }
L_00253FF4:
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0055(c, 1u, depth);
}

}
