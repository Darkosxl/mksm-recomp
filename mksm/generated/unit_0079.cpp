#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0079[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0079(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E4000;
    case 2u: goto L_002E4020;
    case 3u: goto L_002E4064;
    case 4u: goto L_002E4084;
    case 5u: goto L_002E40BC;
    case 6u: goto L_002E4110;
    case 7u: goto L_002E4130;
    case 8u: goto L_002E4168;
    case 9u: goto L_002E4188;
    case 10u: goto L_002E41A8;
    case 11u: goto L_002E4244;
    case 12u: goto L_002E4270;
    case 13u: goto L_002E429C;
    case 14u: goto L_002E42C8;
    case 15u: goto L_002E42D4;
    case 16u: goto L_002E4344;
    case 17u: goto L_002E4358;
    case 18u: goto L_002E444C;
    case 19u: goto L_002E4534;
    case 20u: goto L_002E4570;
    case 21u: goto L_002E45DC;
    case 22u: goto L_002E4648;
    case 23u: goto L_002E4698;
    case 24u: goto L_002E46CC;
    case 25u: goto L_002E46E4;
    case 26u: goto L_002E4718;
    case 27u: goto L_002E4764;
    case 28u: goto L_002E477C;
    case 29u: goto L_002E47A0;
    case 30u: goto L_002E4808;
    case 31u: goto L_002E4828;
    case 32u: goto L_002E4864;
    case 33u: goto L_002E488C;
    case 34u: goto L_002E48C8;
    case 35u: goto L_002E4910;
    case 36u: goto L_002E4954;
    case 37u: goto L_002E4964;
    case 38u: goto L_002E4994;
    case 39u: goto L_002E49D8;
    case 40u: goto L_002E49F8;
    case 41u: goto L_002E4A40;
    case 42u: goto L_002E4A60;
    case 43u: goto L_002E4AA4;
    case 44u: goto L_002E4ABC;
    case 45u: goto L_002E4AD4;
    case 46u: goto L_002E4B34;
    case 47u: goto L_002E4B40;
    case 48u: goto L_002E4B50;
    case 49u: goto L_002E4B84;
    case 50u: goto L_002E4B94;
    case 51u: goto L_002E4BE0;
    case 52u: goto L_002E4C00;
    case 53u: goto L_002E4C2C;
    case 54u: goto L_002E4C48;
    case 55u: goto L_002E4C4C;
    case 56u: goto L_002E4C78;
    case 57u: goto L_002E4CE8;
    case 58u: goto L_002E4D28;
    case 59u: goto L_002E4D54;
    case 60u: goto L_002E4D74;
    case 61u: goto L_002E4DA4;
    case 62u: goto L_002E4DD4;
    case 63u: goto L_002E4DF0;
    case 64u: goto L_002E4E1C;
    case 65u: goto L_002E4E9C;
    case 66u: goto L_002E4EB4;
    case 67u: goto L_002E4EF0;
    case 68u: goto L_002E4F80;
    case 69u: goto L_002E4FF8;
    case 70u: goto L_002E5028;
    case 71u: goto L_002E5088;
    case 72u: goto L_002E50B0;
    case 73u: goto L_002E50D0;
    case 74u: goto L_002E50E0;
    case 75u: goto L_002E5114;
    case 76u: goto L_002E5140;
    case 77u: goto L_002E5164;
    case 78u: goto L_002E51E8;
    case 79u: goto L_002E5228;
    case 80u: goto L_002E5240;
    case 81u: goto L_002E52E0;
    case 82u: goto L_002E53A8;
    case 83u: goto L_002E5414;
    case 84u: goto L_002E5420;
    case 85u: goto L_002E5454;
    case 86u: goto L_002E54A0;
    case 87u: goto L_002E54B0;
    case 88u: goto L_002E54E4;
    case 89u: goto L_002E5510;
    case 90u: goto L_002E5550;
    case 91u: goto L_002E5578;
    case 92u: goto L_002E5598;
    case 93u: goto L_002E55A4;
    case 94u: goto L_002E55B0;
    case 95u: goto L_002E5614;
    case 96u: goto L_002E563C;
    case 97u: goto L_002E5648;
    case 98u: goto L_002E56A8;
    case 99u: goto L_002E5758;
    case 100u: goto L_002E57A8;
    case 101u: goto L_002E57C0;
    case 102u: goto L_002E57E4;
    case 103u: goto L_002E57FC;
    case 104u: goto L_002E5818;
    case 105u: goto L_002E5830;
    case 106u: goto L_002E5848;
    case 107u: goto L_002E5850;
    case 108u: goto L_002E59A0;
    case 109u: goto L_002E59D0;
    case 110u: goto L_002E59E8;
    case 111u: goto L_002E5A58;
    case 112u: goto L_002E5B14;
    case 113u: goto L_002E5C1C;
    case 114u: goto L_002E5C4C;
    case 115u: goto L_002E5CC0;
    case 116u: goto L_002E5D58;
    case 117u: goto L_002E5DC0;
    case 118u: goto L_002E5DF0;
    case 119u: goto L_002E5E04;
    case 120u: goto L_002E5E3C;
    case 121u: goto L_002E5E50;
    case 122u: goto L_002E5E64;
    case 123u: goto L_002E5E78;
    case 124u: goto L_002E5E8C;
    case 125u: goto L_002E5EA0;
    case 126u: goto L_002E5EEC;
    case 127u: goto L_002E5F94;
    case 128u: goto L_002E5FC0;
    case 129u: goto L_002E6098;
    case 130u: goto L_002E60B8;
    case 131u: goto L_002E60E4;
    case 132u: goto L_002E6110;
    case 133u: goto L_002E6118;
    case 134u: goto L_002E6120;
    case 135u: goto L_002E6138;
    case 136u: goto L_002E6164;
    case 137u: goto L_002E6198;
    case 138u: goto L_002E61E8;
    case 139u: goto L_002E621C;
    case 140u: goto L_002E6248;
    case 141u: goto L_002E6278;
    case 142u: goto L_002E6284;
    case 143u: goto L_002E62C0;
    case 144u: goto L_002E62E8;
    case 145u: goto L_002E6324;
    case 146u: goto L_002E6398;
    case 147u: goto L_002E63CC;
    case 148u: goto L_002E63E8;
    case 149u: goto L_002E63F0;
    case 150u: goto L_002E6408;
    case 151u: goto L_002E6468;
    case 152u: goto L_002E6478;
    case 153u: goto L_002E64A4;
    case 154u: goto L_002E64C4;
    case 155u: goto L_002E64FC;
    case 156u: goto L_002E651C;
    case 157u: goto L_002E653C;
    case 158u: goto L_002E6568;
    case 159u: goto L_002E656C;
    case 160u: goto L_002E65A0;
    case 161u: goto L_002E65D4;
    case 162u: goto L_002E65EC;
    case 163u: goto L_002E6628;
    case 164u: goto L_002E6668;
    case 165u: goto L_002E66A0;
    case 166u: goto L_002E66E4;
    case 167u: goto L_002E6710;
    case 168u: goto L_002E6754;
    case 169u: goto L_002E67A8;
    case 170u: goto L_002E67E4;
    case 171u: goto L_002E6810;
    case 172u: goto L_002E6874;
    case 173u: goto L_002E6878;
    case 174u: goto L_002E68BC;
    case 175u: goto L_002E68E0;
    case 176u: goto L_002E6948;
    case 177u: goto L_002E699C;
    case 178u: goto L_002E69B4;
    case 179u: goto L_002E69D8;
    case 180u: goto L_002E6A78;
    case 181u: goto L_002E6A88;
    case 182u: goto L_002E6B58;
    case 183u: goto L_002E6B68;
    case 184u: goto L_002E6BD8;
    case 185u: goto L_002E6C04;
    case 186u: goto L_002E6C18;
    case 187u: goto L_002E6C54;
    case 188u: goto L_002E6C6C;
    case 189u: goto L_002E6CCC;
    case 190u: goto L_002E6D40;
    case 191u: goto L_002E6DA0;
    case 192u: goto L_002E6DB4;
    case 193u: goto L_002E6DD0;
    case 194u: goto L_002E6DD8;
    case 195u: goto L_002E6E38;
    case 196u: goto L_002E6E68;
    case 197u: goto L_002E6F3C;
    case 198u: goto L_002E6F98;
    case 199u: goto L_002E6FFC;
    case 200u: goto L_002E7010;
    case 201u: goto L_002E7024;
    case 202u: goto L_002E7030;
    case 203u: goto L_002E70A0;
    case 204u: goto L_002E7138;
    case 205u: goto L_002E715C;
    case 206u: goto L_002E7190;
    case 207u: goto L_002E71C8;
    case 208u: goto L_002E71F8;
    case 209u: goto L_002E7240;
    case 210u: goto L_002E7374;
    case 211u: goto L_002E74B8;
    case 212u: goto L_002E74D0;
    case 213u: goto L_002E74F8;
    case 214u: goto L_002E7554;
    case 215u: goto L_002E7568;
    case 216u: goto L_002E7580;
    case 217u: goto L_002E7598;
    case 218u: goto L_002E75F8;
    case 219u: goto L_002E7674;
    case 220u: goto L_002E7690;
    case 221u: goto L_002E7734;
    case 222u: goto L_002E7778;
    case 223u: goto L_002E77A8;
    case 224u: goto L_002E7810;
    case 225u: goto L_002E7960;
    case 226u: goto L_002E7980;
    case 227u: goto L_002E79F8;
    case 228u: goto L_002E7A64;
    case 229u: goto L_002E7AD0;
    case 230u: goto L_002E7AFC;
    case 231u: goto L_002E7B10;
    case 232u: goto L_002E7B64;
    case 233u: goto L_002E7B90;
    case 234u: goto L_002E7BFC;
    case 235u: goto L_002E7C3C;
    case 236u: goto L_002E7C5C;
    case 237u: goto L_002E7C68;
    case 238u: goto L_002E7C9C;
    case 239u: goto L_002E7CB8;
    case 240u: goto L_002E7CEC;
    case 241u: goto L_002E7D14;
    case 242u: goto L_002E7D5C;
    case 243u: goto L_002E7DB4;
    case 244u: goto L_002E7DC4;
    case 245u: goto L_002E7DE8;
    case 246u: goto L_002E7DF8;
    case 247u: goto L_002E7E3C;
    case 248u: goto L_002E7E50;
    case 249u: goto L_002E7E6C;
    case 250u: goto L_002E7E88;
    case 251u: goto L_002E7EA4;
    case 252u: goto L_002E7EB4;
    case 253u: goto L_002E7EC4;
    case 254u: goto L_002E7ED4;
    case 255u: goto L_002E7EE4;
    case 256u: goto L_002E7EF4;
    case 257u: goto L_002E7F08;
    case 258u: goto L_002E7F30;
    case 259u: goto L_002E7FAC;
    default: bad_entry(c, 0x002E4000u); return;
    }
L_002E4000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002E4020; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 64u)));
    set32(c.r[2], 0u + 1500u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E4020; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 10085u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E4020:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E40D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 936u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E41C0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4064u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002E4064u) [[unlikely]] return; }
L_002E4064:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E41B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4084u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x002E4084u) [[unlikely]] return; }
L_002E4084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4098; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E40AC; } }
L_002E4098:
    set32(c.r[2], ld32((c.r[18].w[0] + 13076u)));
    set32(c.r[16], 0u + 105u);
    set32(c.r[3], 0u + 118u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002E40AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E40BCu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E40BCu) [[unlikely]] return; }
L_002E40BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 940u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4174; } }
L_002E40D0:
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E41C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 932u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E41C0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4110u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002E4110u) [[unlikely]] return; }
L_002E4110:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E41B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4130u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x002E4130u) [[unlikely]] return; }
L_002E4130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4144; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4158; } }
L_002E4144:
    set32(c.r[2], ld32((c.r[18].w[0] + 13076u)));
    set32(c.r[16], 0u + 105u);
    set32(c.r[3], 0u + 118u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002E4158:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4168u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E4168u) [[unlikely]] return; }
L_002E4168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 940u)));
    c.budget -= 3;
L_002E4174:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4188u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E4188u) [[unlikely]] return; }
L_002E4188:
    set32(c.r[3], ld32((c.r[18].w[0] + 13072u)));
    set32(c.r[2], 0u + 2u);
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E41A8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E41A8u) [[unlikely]] return; }
L_002E41A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E41B8; } }
L_002E41B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E41B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002E5648; } }
L_002E41C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E41FC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E41FC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9978u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E41FC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 10140u));
    st32((c.r[18].w[0] + 7700u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[18].w[0] + 10140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002E41FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10099u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E42D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[7].d[0] = 0ull + 0ull;
    c.lo.d[0] = c.r[3].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    mmi::madd(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4244u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E4244u) [[unlikely]] return; }
L_002E4244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[2].w[0] + 944u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[4].w[0] - 6080u);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4270u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E4270u) [[unlikely]] return; }
L_002E4270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[5], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E429Cu);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x002E429Cu) [[unlikely]] return; }
L_002E429C:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[22].w[0] << (c.r[20].w[0] & 31u));
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 212u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E42C8u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E42C8u) [[unlikely]] return; }
L_002E42C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E42D4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E42D4u) [[unlikely]] return; }
L_002E42D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9022u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4300; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 13176u));
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E4300; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002E4300:
    set32(c.r[2], ld32((c.r[18].w[0] + 9276u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E4328; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2640u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002E4C6C; } }
L_002E4328:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E43A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4344u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002E4344u) [[unlikely]] return; }
L_002E4344:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[16].w[0] + 17200u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4358u);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002E4358u) [[unlikely]] return; }
L_002E4358:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 10800u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E43A8; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E43A8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    st8((c.r[18].w[0] + 9818u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E43A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.lo.d[0] = c.r[4].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st8((c.r[2].w[0] + 9818u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002E43A8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9819u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E43BC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 9819u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E43BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8938u)));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8938u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E43DC; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4C6C; } }
L_002E43DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4400; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9819u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E45F8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E45F8; } }
L_002E4400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E4434; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[4].w[0] - 26368u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E45E4; } }
L_002E4434:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E45E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E444Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E444Cu) [[unlikely]] return; }
L_002E444C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E44D4; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 9820u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9817u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[18].w[0] + 9820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E4488; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E44B4; } }
L_002E4488:
    set32(c.r[2], c.r[3].w[0] << 16);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E44C0; } }
    st32((c.r[18].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E44C0; } }
L_002E44B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002E44C0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 9820u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st16((c.r[18].w[0] + 9820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4C6C; } }
L_002E44D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4544; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E4544; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7678u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[22].d[0];  if (t) { goto L_002E4C6C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4534u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002E4534u) [[unlikely]] return; }
L_002E4534:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E45E8; } }
L_002E4544:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E45E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E45E4; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002E4570:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 9820u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 16);
    st16((c.r[18].w[0] + 9820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4570u | kUnwind; return; } goto L_002E4570; } }
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9817u)));
    st16((c.r[18].w[0] + 9820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E45B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E45E4; } }
L_002E45B4:
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E45E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E45DCu);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x002E45DCu) [[unlikely]] return; }
L_002E45DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4C6C; } }
L_002E45E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_002E45E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4C6C; } }
L_002E45F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7678u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E4C6C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E4648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4648u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E4648u) [[unlikely]] return; }
L_002E4648:
    st32((c.r[23].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E565C; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    st8((c.r[18].w[0] + 10079u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E46FC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 113u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 13232u)));
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E46FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u + 24u);
    set32(c.r[17], c.r[2].w[0] - 2848u);
    c.budget -= 4;
L_002E4698:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E46E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E46D4; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E46CCu);  if (depth < kMaxDepth) unit_006C(c, 335u, depth + 1u); else { c.pc = 0x002B3810u; return; } if (c.pc != 0x002E46CCu) [[unlikely]] return; }
L_002E46CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E46E4; } }
L_002E46D4:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E46E4u);  if (depth < kMaxDepth) unit_006C(c, 335u, depth + 1u); else { c.pc = 0x002B3810u; return; } if (c.pc != 0x002E46E4u) [[unlikely]] return; }
L_002E46E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 13232u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4698u | kUnwind; return; } goto L_002E4698; } }
L_002E46FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4718; } }
    st32((c.r[18].w[0] + 40u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4718u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E4718u) [[unlikely]] return; }
L_002E4718:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E473C; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 7686u));
    set32(c.r[2], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4740; } }
L_002E473C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002E4740:
    st16((c.r[18].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E4764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4764u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E4764u) [[unlikely]] return; }
L_002E4764:
    st32((c.r[23].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E565C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E477Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E477Cu) [[unlikely]] return; }
L_002E477C:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E47B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E47A0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E47A0u) [[unlikely]] return; }
L_002E47A0:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E484C; } }
L_002E47B8:
    set32(c.r[3], ld32((c.r[23].w[0] - 5024u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E484C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.lo.d[0] = c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    mmi::madd(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4808u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E4808u) [[unlikely]] return; }
L_002E4808:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4828u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002E4828u) [[unlikely]] return; }
L_002E4828:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], c.r[4].w[0] - 6080u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 9;
L_002E484C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4864u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x002E4864u) [[unlikely]] return; }
L_002E4864:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 64u), c.r[30].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E488Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E488Cu) [[unlikely]] return; }
L_002E488C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E48B0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9818u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E48B0; } }
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_002E48B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E48C8u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002E48C8u) [[unlikely]] return; }
L_002E48C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E4A10; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_002E48F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E4930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4A60; } }
L_002E48F4:
    set32(c.r[5], ld32((c.r[18].w[0] + 9000u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9004u)));
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 9008u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4910u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E4910u) [[unlikely]] return; }
L_002E4910:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 10132u));
    st16((c.r[18].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), 0u);
    st8((c.r[18].w[0] + 10132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4A60; } }
L_002E4930:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    st16((c.r[18].w[0] + 9008u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E4954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4954u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E4954u) [[unlikely]] return; }
L_002E4954:
    st32((c.r[23].w[0] - 5024u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4964u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E4964u) [[unlikely]] return; }
L_002E4964:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E49AC; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9006u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 79u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4994u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E4994u) [[unlikely]] return; }
L_002E4994:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E49F8; } }
L_002E49AC:
    set32(c.r[3], ld32((c.r[23].w[0] - 5024u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E49E0; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9006u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49D8u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E49D8u) [[unlikely]] return; }
L_002E49D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E49F8; } }
L_002E49E0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9006u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49F8u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E49F8u) [[unlikely]] return; }
L_002E49F8:
    st16((c.r[18].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 9000u), 0u);
    st8((c.r[18].w[0] + 10132u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4A60; } }
L_002E4A10:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4A60; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E4A40; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A40u);  if (depth < kMaxDepth) unit_0078(c, 113u, depth + 1u); else { c.pc = 0x002E1790u; return; } if (c.pc != 0x002E4A40u) [[unlikely]] return; }
L_002E4A40:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E4A60; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A60u);  if (depth < kMaxDepth) unit_0078(c, 113u, depth + 1u); else { c.pc = 0x002E1790u; return; } if (c.pc != 0x002E4A60u) [[unlikely]] return; }
L_002E4A60:
    set32(c.r[7], ld32((c.r[18].w[0] + 664u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[30].d[0];  if (t) { goto L_002E4C6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7710u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 27456u);
    set32(c.r[3], 0u + 189u);
    set32(c.r[19], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E4AAC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 190u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4AA4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E4AA4u) [[unlikely]] return; }
L_002E4AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4ABC; } }
L_002E4AAC:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4ABCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E4ABCu) [[unlikely]] return; }
L_002E4ABC:
    set32(c.r[5], ld32((c.r[18].w[0] + 664u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4AD4u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002E4AD4u) [[unlikely]] return; }
L_002E4AD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[21] = c.r[1].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[17], 0u + 1u);
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 148u));
    st32((c.r[18].w[0] + 148u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 152u));
    st32((c.r[18].w[0] + 152u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B34u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002E4B34u) [[unlikely]] return; }
L_002E4B34:
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B40u);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002E4B40u) [[unlikely]] return; }
L_002E4B40:
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B50u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002E4B50u) [[unlikely]] return; }
L_002E4B50:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[20] = fp::mul(c.f[20], c.f[24]);
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B84u);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002E4B84u) [[unlikely]] return; }
L_002E4B84:
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B94u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002E4B94u) [[unlikely]] return; }
L_002E4B94:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    c.f[12] = fp::add(c.f[12], c.f[21]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 128u), c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4BE0u);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002E4BE0u) [[unlikely]] return; }
L_002E4BE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[12] = fp::add(c.f[12], c.f[21]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C00u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002E4C00u) [[unlikely]] return; }
L_002E4C00:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], 0u - c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[6], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C2Cu);  if (depth < kMaxDepth) unit_006B(c, 130u, depth + 1u); else { c.pc = 0x002AEA48u; return; } if (c.pc != 0x002E4C2Cu) [[unlikely]] return; }
L_002E4C2C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 113u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 10087u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C48u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x002E4C48u) [[unlikely]] return; }
L_002E4C48:
    st32((c.r[18].w[0] + 664u), c.r[30].w[0]);
    c.budget -= 1;
L_002E4C4C:
    st8((c.r[18].w[0] + 10084u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[19].w[0] + 10084u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 104u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 7710u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 7712u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002E4C6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C78u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E4C78u) [[unlikely]] return; }
L_002E4C78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 45u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E4CC4; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4CC4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4CB8; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5244; } }
L_002E4CB8:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4CF8; } }
L_002E4CC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5244; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4CE8u);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x002E4CE8u) [[unlikely]] return; }
L_002E4CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4CFC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002E4CF8:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_002E4CFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5244; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9930u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4D74; } }
    set32(c.r[4], c.r[29].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4D28u);  if (depth < kMaxDepth) unit_0039(c, 422u, depth + 1u); else { c.pc = 0x001E7F60u; return; } if (c.pc != 0x002E4D28u) [[unlikely]] return; }
L_002E4D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 14208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 5552u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4D54u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E4D54u) [[unlikely]] return; }
L_002E4D54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 5552u);
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    c.f[12] = c.f[0];
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4D74u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x002E4D74u) [[unlikely]] return; }
L_002E4D74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10038u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4DFC; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4DAC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4DA4u);  if (depth < kMaxDepth) unit_0079(c, 171u, depth + 1u); else { c.pc = 0x002E6810u; return; } if (c.pc != 0x002E4DA4u) [[unlikely]] return; }
L_002E4DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4DF0; } }
L_002E4DAC:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4DDC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4DD4u);  if (depth < kMaxDepth) unit_0079(c, 167u, depth + 1u); else { c.pc = 0x002E6710u; return; } if (c.pc != 0x002E4DD4u) [[unlikely]] return; }
L_002E4DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4DF0; } }
L_002E4DDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4DF0u);  if (depth < kMaxDepth) unit_0079(c, 163u, depth + 1u); else { c.pc = 0x002E6628u; return; } if (c.pc != 0x002E4DF0u) [[unlikely]] return; }
L_002E4DF0:
    st16((c.r[18].w[0] + 10038u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5648; } }
L_002E4DFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_002E4E1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4E1Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E4E1Cu) [[unlikely]] return; }
L_002E4E1C:
    st32((c.r[23].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4E74; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E4E74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E4E5C; } }
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4E70; } }
L_002E4E5C:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_002E4E70:
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002E4E74:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4E9Cu);  if (depth < kMaxDepth) unit_0091(c, 25u, depth + 1u); else { c.pc = 0x003443C0u; return; } if (c.pc != 0x002E4E9Cu) [[unlikely]] return; }
L_002E4E9C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E4EBC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4EB4u);  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00343738u; return; } if (c.pc != 0x002E4EB4u) [[unlikely]] return; }
L_002E4EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5648; } }
L_002E4EBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9969u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_002E5000; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 11024u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E4EE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002E4EE4; } }
    st32((c.r[18].w[0] + 28u), 0u);
    st8((c.r[18].w[0] + 9969u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002E4EE4:
    set32(c.r[19], c.r[18].w[0] + 9970u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4EFC; } }
L_002E4EF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9969u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002E4FEC; } }
L_002E4EFC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9969u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9028u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[22].d[0];  if (t) { goto L_002E4F28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E4F28; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9824u)));
    st16((c.r[18].w[0] + 9028u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002E4F28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9030u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002E4F48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9969u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002E4F48; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9826u)));
    st16((c.r[18].w[0] + 9030u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002E4F48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[30].d[0];  if (t) { goto L_002E4FBC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9969u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002E4F6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4FBC; } }
L_002E4F6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4F80u);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x002E4F80u) [[unlikely]] return; }
L_002E4F80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9969u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E4FA8; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 654u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4FBC; } }
L_002E4FA8:
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 5;
L_002E4FBC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9969u));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    st8((c.r[18].w[0] + 9969u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002E4FE4; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[18].w[0] + 9969u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E4FE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[30].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4EF0u | kUnwind; return; } goto L_002E4EF0; } }
L_002E4FEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4FF8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E4FF8u) [[unlikely]] return; }
L_002E4FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E50D4; } }
L_002E5000:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { goto L_002E5014; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E502C; } }
L_002E5014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5028u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E5028u) [[unlikely]] return; }
L_002E5028:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E502C:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00060000u);
    st32((c.r[23].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E50E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E50E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5064; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    st8((c.r[18].w[0] + 10091u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E5064:
    set32(c.r[2], ld32((c.r[23].w[0] - 5024u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E5090; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5088u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E5088u) [[unlikely]] return; }
L_002E5088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E50B4; } }
L_002E5090:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E50B4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 53u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E50B0u);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x002E50B0u) [[unlikely]] return; }
L_002E50B0:
    st16((c.r[18].w[0] + 9826u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E50B4:
    set32(c.r[2], 0u + 11u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E50D0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E50D0u) [[unlikely]] return; }
L_002E50D0:
    st16((c.r[18].w[0] + 654u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E50D4:
    set32(c.r[4], c.r[22].w[0] << (c.r[20].w[0] & 31u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E50E0u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E50E0u) [[unlikely]] return; }
L_002E50E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5648; } }
L_002E50E8:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    st16((c.r[18].w[0] + 7708u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E5104; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5118; } }
L_002E5104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5114u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E5114u) [[unlikely]] return; }
L_002E5114:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E5118:
    st32((c.r[23].w[0] - 5024u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E51A0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5140u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E5140u) [[unlikely]] return; }
L_002E5140:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E517C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5164u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E5164u) [[unlikely]] return; }
L_002E5164:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E51A0; } }
L_002E517C:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E51A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5228; } }
L_002E51A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E51C0; } }
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5228; } }
L_002E51C0:
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002E51D8; } }
    c.r[2].d[0] = c.r[16].sd[0] < 94ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E51FC; } }
L_002E51D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E51E8u);  if (depth < kMaxDepth) unit_0032(c, 361u, depth + 1u); else { c.pc = 0x001CB770u; return; } if (c.pc != 0x002E51E8u) [[unlikely]] return; }
L_002E51E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E565C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5228; } }
L_002E51FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20968u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5228; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5228u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5228u) [[unlikely]] return; }
L_002E5228:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7674u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E5244; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5240u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E5240u) [[unlikely]] return; }
L_002E5240:
    st16((c.r[18].w[0] + 7674u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E5244:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10100u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E53C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E53C4; } }
    c.f[2] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E5298; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E52B0; } }
L_002E5298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 132u), c.f[1]);
    c.budget -= 6;
L_002E52B0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8940u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 18));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E52E0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E52E0u) [[unlikely]] return; }
L_002E52E0:
    c.f[2] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5314; } }
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[18].w[0] + 212u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 7;
L_002E5314:
    c.f[2] = ld32((c.r[18].w[0] + 208u));
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E5350; } }
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_002E5350:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9016u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 208u), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002E53C4; } }
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E53C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8940u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 4;
L_002E53A8:
    c.f[0] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.f[1] = c.f[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E53A8u | kUnwind; return; } goto L_002E53A8; } }
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.budget -= 1;
L_002E53C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10884u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002E54A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_002E54A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E5420; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 212u), 0u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E5420; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 106u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5414u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E5414u) [[unlikely]] return; }
L_002E5414:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5420u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E5420u) [[unlikely]] return; }
L_002E5420:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 106u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E54A0; } }
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 212u), 0u);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5454u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E5454u) [[unlikely]] return; }
L_002E5454:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E54A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E54A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E54A0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E54A0u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E54A0u) [[unlikely]] return; }
L_002E54A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[16].w[0] - 14152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E54B0u);  if (depth < kMaxDepth) unit_0079(c, 186u, depth + 1u); else { c.pc = 0x002E6C18u; return; } if (c.pc != 0x002E54B0u) [[unlikely]] return; }
L_002E54B0:
    set32(c.r[17], c.r[17].w[0] - 6080u);
    set32(c.r[2], 0u + 268u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E54E4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E54E4u) [[unlikely]] return; }
L_002E54E4:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.f[20] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5510u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E5510u) [[unlikely]] return; }
L_002E5510:
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5528; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002E5528:
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5550u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E5550u) [[unlikely]] return; }
L_002E5550:
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5568; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002E5568:
    set32(c.r[4], c.r[21].w[0] - 27328u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5578u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x002E5578u) [[unlikely]] return; }
L_002E5578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5584; } }
    c.f[20] = ld32((c.r[17].w[0] + 132u));
    c.budget -= 1;
L_002E5584:
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5598u);  if (depth < kMaxDepth) unit_0079(c, 98u, depth + 1u); else { c.pc = 0x002E56A8u; return; } if (c.pc != 0x002E5598u) [[unlikely]] return; }
L_002E5598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E55A4u);  if (depth < kMaxDepth) unit_0079(c, 107u, depth + 1u); else { c.pc = 0x002E5850u; return; } if (c.pc != 0x002E55A4u) [[unlikely]] return; }
L_002E55A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E55B0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E55B0u) [[unlikely]] return; }
L_002E55B0:
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5604; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E5604; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5604; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5604; } }
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 5;
L_002E5604:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5614u);  if (depth < kMaxDepth) unit_0078(c, 267u, depth + 1u); else { c.pc = 0x002E3A28u; return; } if (c.pc != 0x002E5614u) [[unlikely]] return; }
L_002E5614:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10131u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5630; } }
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], 0u + 4u);
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002E5630:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E563Cu);  if (depth < kMaxDepth) unit_006E(c, 229u, depth + 1u); else { c.pc = 0x002BB8D8u; return; } if (c.pc != 0x002E563Cu) [[unlikely]] return; }
L_002E563C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5648u);  if (depth < kMaxDepth) unit_0079(c, 116u, depth + 1u); else { c.pc = 0x002E5D58u; return; } if (c.pc != 0x002E5648u) [[unlikely]] return; }
L_002E5648:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.r[2].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3F40u | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 292u, depth); } }
L_002E565C:
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
    c.f[24] = ld32((c.r[29].w[0] + 224u));
    c.f[23] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E56A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 9044u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002E5838; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 612u)));
    c.r[2].d[0] = c.r[4].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5838; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5838; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9932u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5760; } }
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E571C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E57B0; } }
L_002E571C:
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E573C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E57B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5798; } }
L_002E573C:
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E57D4; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 93u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5758u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E5758u) [[unlikely]] return; }
L_002E5758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E57FC; } }
L_002E5760:
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5780; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E57B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5798; } }
L_002E5780:
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E57C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E57B0; } }
L_002E5798:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57A8u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E57A8u) [[unlikely]] return; }
L_002E57A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E57FC; } }
L_002E57B0:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57C0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002E57C0u) [[unlikely]] return; }
L_002E57C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E57FC; } }
L_002E57C8:
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E57EC; } }
L_002E57D4:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57E4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E57E4u) [[unlikely]] return; }
L_002E57E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E57FC; } }
L_002E57EC:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 93u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57FCu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E57FCu) [[unlikely]] return; }
L_002E57FC:
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5818u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E5818u) [[unlikely]] return; }
L_002E5818:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5830u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E5830u) [[unlikely]] return; }
L_002E5830:
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 9969u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E5838:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5848:
    c.budget -= 1;
    c.pc = 0x002E584Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_002E5850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9284u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E59D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 9048u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E59D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E58D0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E58D0; } }
    set32(c.r[4], c.r[7].w[0] - 1u);
    set32(c.r[5], 0u + 95u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5998; } }
L_002E58D0:
    c.r[2].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5914; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E5914; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 96u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5994; } }
L_002E5914:
    c.r[2].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5958; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 388u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E5958; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 97u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5994; } }
L_002E5958:
    c.r[2].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E59A4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E59A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 98u);
    c.budget -= 2;
L_002E5994:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_002E5998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59A0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E59A0u) [[unlikely]] return; }
L_002E59A0:
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_002E59A4:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002E59D0; } }
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 9969u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59D0u);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x002E59D0u) [[unlikely]] return; }
L_002E59D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E59E8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 144u), c.f[24]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[29].w[0] + 136u), c.f[23]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] - 14032u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[4].w[0] - 21424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 13u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[20], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[24] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[22] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 28;
L_002E5A58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002E5D00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5D00; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7686u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7686u));
    c.r[2].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5A98; } }
    set32(c.r[2], 0u - c.r[3].w[0]);
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002E5A98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9020u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5AC4; } }
    c.f[2] = ld32((c.r[16].w[0] + 208u));
    c.f[3] = ld32((c.r[16].w[0] + 216u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 8;
L_002E5AC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7688u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 7686u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5C90; } }
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_002E5CF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E5C90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5B14u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E5B14u) [[unlikely]] return; }
L_002E5B14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7692u)));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[5] = ld32((c.r[18].w[0] + 128u));
    c.f[6] = c.r[2].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 136u));
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[4] = ld32((c.r[16].w[0] + 148u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[4] = fp::add(c.f[4], c.f[6]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[24]));
    st32((c.r[16].w[0] + 128u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5B74; } }
    c.f[4] = fp::add(c.f[4], c.f[22]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5B88; } }
L_002E5B74:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5B88; } }
    c.f[4] = fp::sub(c.f[4], c.f[22]);
    c.budget -= 1;
L_002E5B88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5BB4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7692u)));
    set32(c.r[2], 0u + 1024u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E5BB0; } }
    set32(c.r[2], 0u - 1024u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E5BB4; } }
L_002E5BB0:
    c.f[4] = fp::sub(c.f[4], c.f[23]);
    c.budget -= 1;
L_002E5BB4:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5BD0; } }
    c.f[4] = fp::add(c.f[4], c.f[22]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5BE4; } }
L_002E5BD0:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5BE4; } }
    c.f[4] = fp::sub(c.f[4], c.f[22]);
    c.budget -= 1;
L_002E5BE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[4], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7688u)));
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C1Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002E5C1Cu) [[unlikely]] return; }
L_002E5C1C:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7688u)));
    c.f[12] = c.f[20];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[21]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C4Cu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002E5C4Cu) [[unlikely]] return; }
L_002E5C4C:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.f[3] = ld32((c.r[16].w[0] + 10832u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 7688u));
    c.f[0] = ld32((c.r[16].w[0] + 10840u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7690u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 128u), c.f[2]);
    st16((c.r[16].w[0] + 7688u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5CF0; } }
L_002E5C90:
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_002E5CF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5CC0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E5CC0u) [[unlikely]] return; }
L_002E5CC0:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[3] = ld32((c.r[18].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.f[4] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 12;
L_002E5CF0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002E5D00; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E5D00:
    set32(c.r[17], c.r[17].w[0] + 528u);
    set32(c.r[18], c.r[18].w[0] + 528u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.budget -= 6;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E5A58u | kUnwind; return; } goto L_002E5A58; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[24] = ld32((c.r[29].w[0] + 144u));
    c.f[23] = ld32((c.r[29].w[0] + 136u));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5D58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8938u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6080; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9014u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E6080; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 9016u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[12] = ld32((c.r[17].w[0] + 208u));
    set32(c.r[2], ld32((c.r[2].w[0] + 948u)));
    c.f[13] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5DC8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5DC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5DC0u) [[unlikely]] return; }
L_002E5DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5DCC; } }
L_002E5DC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E5DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5E04; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 208u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5DF0u);  if (depth < kMaxDepth) unit_0088(c, 324u, depth + 1u); else { c.pc = 0x00323C40u; return; } if (c.pc != 0x002E5DF0u) [[unlikely]] return; }
L_002E5DF0:
    c.f[12] = ld32((c.r[17].w[0] + 216u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5E04u);  if (depth < kMaxDepth) unit_0088(c, 326u, depth + 1u); else { c.pc = 0x00323D10u; return; } if (c.pc != 0x002E5E04u) [[unlikely]] return; }
L_002E5E04:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7676u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E5F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22480u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E5E3C:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5EF8; } }
L_002E5E50:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D000000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5EF8; } }
L_002E5E64:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5EF8; } }
L_002E5E78:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5EF8; } }
L_002E5E8C:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5EF8; } }
L_002E5EA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9020u)));
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5EEC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5EC4; } }
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    c.budget -= 2;
L_002E5EC4:
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0] + 216u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5F14; } }
L_002E5EEC:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 3;
L_002E5EF8:
    c.f[2] = ld32((c.r[17].w[0] + 208u));
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 216u), c.f[1]);
    st32((c.r[17].w[0] + 208u), c.f[2]);
    c.budget -= 7;
L_002E5F14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7676u)));
    c.r[2].d[0] = c.r[2].sd[0] < -2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6080; } }
    c.f[2] = ld32((c.r[17].w[0] + 208u));
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E5F40; } }
    c.r[3].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002E5F40:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    set32(c.r[3], 0u - 1u);
    c.f[3] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E5F70; } }
    c.r[3].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002E5F70:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E607C; } }
L_002E5F88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5F94u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E5F94u) [[unlikely]] return; }
L_002E5F94:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E6080; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5FC0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E5FC0u) [[unlikely]] return; }
L_002E5FC0:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E6080; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E6080; } }
    c.f[3] = ld32((c.r[17].w[0] + 208u));
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 216u));
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[3]);
    st32((c.r[17].w[0] + 216u), c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E6038; } }
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_002E6038:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E606C; } }
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_002E606C:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 4;
L_002E607C:
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 1;
L_002E6080:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 30168u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E60B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4984u)));
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E60EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E60E4u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x002E60E4u) [[unlikely]] return; }
L_002E60E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E60FC; } }
L_002E60EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6100; } }
L_002E60FC:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002E6100:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002E6120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6110u);  if (depth < kMaxDepth) unit_0078(c, 218u, depth + 1u); else { c.pc = 0x002E2CE8u; return; } if (c.pc != 0x002E6110u) [[unlikely]] return; }
L_002E6110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6118u);  if (depth < kMaxDepth) unit_0078(c, 291u, depth + 1u); else { c.pc = 0x002E3ED0u; return; } if (c.pc != 0x002E6118u) [[unlikely]] return; }
L_002E6118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6120u);  if (depth < kMaxDepth) unit_0079(c, 140u, depth + 1u); else { c.pc = 0x002E6248u; return; } if (c.pc != 0x002E6120u) [[unlikely]] return; }
L_002E6120:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6138:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 92u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6164u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002E6164u) [[unlikely]] return; }
L_002E6164:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6180; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E6180:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6198:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 18u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 92u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 600u)));
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61E8u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002E61E8u) [[unlikely]] return; }
L_002E61E8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6204; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E6204:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6220; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E621Cu);  if (depth < kMaxDepth) unit_0088(c, 111u, depth + 1u); else { c.pc = 0x003212C8u; return; } if (c.pc != 0x002E621Cu) [[unlikely]] return; }
L_002E621C:
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_002E6220:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E62A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], 0u + 13u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.budget -= 4;
L_002E6278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6284u);  if (depth < kMaxDepth) unit_0078(c, 94u, depth + 1u); else { c.pc = 0x002E1150u; return; } if (c.pc != 0x002E6284u) [[unlikely]] return; }
L_002E6284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6298; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10274u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 10274u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002E6298:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6278u | kUnwind; return; } goto L_002E6278; } }
L_002E62A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E62C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E62E8u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x002E62E8u) [[unlikely]] return; }
L_002E62E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E62FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E637C; } }
L_002E62FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E6360; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6360; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6324u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E6324u) [[unlikely]] return; }
L_002E6324:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E6360; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E6380; } }
L_002E6360:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E637C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6380; } }
L_002E637C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E6380:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6398:
    c.f[12] = c.f[12] & fp::kAbs;
    c.f[13] = c.f[13] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E63CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::add(c.f[13], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E63CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E63E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E63F0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002E6400; } }
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002E6400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6408:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6468; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] - 31864u);
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = ld64((c.r[6].w[0] + 560u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 6;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] ^ 49ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6468:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6478:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E64A4u);  if (depth < kMaxDepth) unit_007C(c, 56u, depth + 1u); else { c.pc = 0x002F09E8u; return; } if (c.pc != 0x002E64A4u) [[unlikely]] return; }
L_002E64A4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6548; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E64C4u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x002E64C4u) [[unlikely]] return; }
L_002E64C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E64D8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E64EC; } }
L_002E64D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 13076u)));
    set32(c.r[17], 0u + 105u);
    set32(c.r[3], 0u + 118u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_002E64EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E64FCu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002E64FCu) [[unlikely]] return; }
L_002E64FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 940u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E651Cu);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E651Cu) [[unlikely]] return; }
L_002E651C:
    set32(c.r[2], ld32((c.r[16].w[0] + 13072u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E653Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E653Cu) [[unlikely]] return; }
L_002E653C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E654C; } }
L_002E6548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E654C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6568:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.budget -= 1;
L_002E656C:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 13232u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E6604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u + 24u);
    set32(c.r[18], c.r[2].w[0] - 2848u);
    c.budget -= 3;
L_002E65A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E65EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E65DC; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65D4u);  if (depth < kMaxDepth) unit_006C(c, 335u, depth + 1u); else { c.pc = 0x002B3810u; return; } if (c.pc != 0x002E65D4u) [[unlikely]] return; }
L_002E65D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E65EC; } }
L_002E65DC:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65ECu);  if (depth < kMaxDepth) unit_006C(c, 335u, depth + 1u); else { c.pc = 0x002B3810u; return; } if (c.pc != 0x002E65ECu) [[unlikely]] return; }
L_002E65EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 13232u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E65A0u | kUnwind; return; } goto L_002E65A0; } }
L_002E6604:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6628:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8928u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6670; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6668u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E6668u) [[unlikely]] return; }
L_002E6668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E66FC; } }
L_002E6670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24424u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E66D0; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 45u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E66A0u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E66A0u) [[unlikely]] return; }
L_002E66A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10037u)));
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E66B8; } }
    set32(c.r[2], c.r[3].w[0] - 12u);
    st16((c.r[16].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E66B8:
    set32(c.r[3], 0u + 46u);
    set32(c.r[2], 0u + 45u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E66FC; } }
L_002E66D0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E66E4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E66E4u) [[unlikely]] return; }
L_002E66E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10037u)));
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E66FC; } }
    set32(c.r[2], c.r[3].w[0] - 12u);
    st16((c.r[16].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E66FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8928u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6778; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[7], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6754u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E6754u) [[unlikely]] return; }
L_002E6754:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10037u)));
    set32(c.r[2], 0u + 12u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E67FC; } }
    set32(c.r[2], c.r[4].w[0] - 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E67F8; } }
L_002E6778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24424u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E67D4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 75u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67A8u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x002E67A8u) [[unlikely]] return; }
L_002E67A8:
    set32(c.r[2], 0u + 46u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10037u)));
    set32(c.r[3], 0u + 45u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 7700u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E67FC; } }
    set32(c.r[2], c.r[4].w[0] - 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E67F8; } }
L_002E67D4:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67E4u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E67E4u) [[unlikely]] return; }
L_002E67E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10037u)));
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E67FC; } }
    set32(c.r[2], c.r[3].w[0] - 12u);
    c.budget -= 1;
L_002E67F8:
    st16((c.r[16].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E67FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8928u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6850; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E68C0; } }
L_002E6850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24424u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E68C4; } }
    c.r[4].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6878u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002E6878u) [[unlikely]] return; }
    goto L_002E6878;
L_002E6874:
    c.budget -= 1;
L_002E6878:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 20520u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E68BCu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002E68BCu) [[unlikely]] return; }
L_002E68BC:
    set32(c.r[2], 0u + 45u);
    c.budget -= 1;
L_002E68C0:
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 1;
L_002E68C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E68E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 13248u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], ld32((c.r[3].w[0] + 928u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[7].d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 6u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6948u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x002E6948u) [[unlikely]] return; }
L_002E6948:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x002E695Cu);  goto L_002E6960; }
L_002E6960:
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[16].w[0] + 576u), c.r[6].d[0]);
    st32((c.r[16].w[0] + 60u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st8((c.r[16].w[0] + 10097u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E699Cu);  if (depth < kMaxDepth) unit_0080(c, 181u, depth + 1u); else { c.pc = 0x00302DF8u; return; } if (c.pc != 0x002E699Cu) [[unlikely]] return; }
L_002E699C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E69B4u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002E69B4u) [[unlikely]] return; }
L_002E69B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E69D8:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 928u)));
    set32(c.r[8], c.r[8].w[0] + 27456u);
    set32(c.r[3], c.r[7].w[0] << 1);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    if (c.r[10].d[0] == 0) c.r[3].d[0] = c.r[7].d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10248u)));
    set32(c.r[9], 0u + 1u);
    st32((c.r[2].w[0] + 44u), c.r[9].w[0]);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[7].w[0] + 2u);
    st32((c.r[2].w[0] + 56u), 0u);
    c.r[7].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[7].d[0] == 0) c.r[3].d[0] = c.r[8].d[0];
    mmi::div(c, 0, c.r[11].w[0], c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 25;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002E6A38u);  goto L_002E6A3C; }
L_002E6A3C:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 113u));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    set32(c.r[7], c.r[9].w[0] - c.r[7].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[6].w[0]);
    st64((c.r[2].w[0] + 576u), c.r[3].d[0]);
    st8((c.r[2].w[0] + 10088u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[2].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 84u), 0u);
    st8((c.r[2].w[0] + 10097u), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = c.lo.d[0];
    st32((c.r[2].w[0] + 52u), c.r[11].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6A78u);  if (depth < kMaxDepth) unit_0080(c, 181u, depth + 1u); else { c.pc = 0x00302DF8u; return; } if (c.pc != 0x002E6A78u) [[unlikely]] return; }
L_002E6A78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6A88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_002E6B58; } }
    set32(c.r[2], ld32((c.r[11].w[0] + 104u)));
    c.r[3].d[0] = c.r[10].sd[0] < -1ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6AD4; } }
    set32(c.r[2], 0u - c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0] + 44u)));
    set32(c.r[10], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6AD4; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[11].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_002E6AD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6AF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002E6AF4:
    set32(c.r[6], 0u + 268u);
    set32(c.r[2], c.r[10].w[0] << 2);
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[9], 0u + 528u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 14032u);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    st32((c.r[11].w[0] + 10832u), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    st16((c.r[11].w[0] + 7686u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[11].w[0] + 10836u), 0u);
    set32(c.r[10], 0u + 1u);
    st32((c.r[11].w[0] + 10840u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B58u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E6B58u) [[unlikely]] return; }
L_002E6B58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[9], ld32((c.r[2].w[0] + 928u)));
    set32(c.r[8], 0u + 13248u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00010000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    if (c.r[9].d[0] == 0) c.r[3].d[0] = c.r[7].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::div(c, 0, c.r[10].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 17;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002E6BA8u);  goto L_002E6BAC; }
L_002E6BAC:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    st64((c.r[4].w[0] + 576u), c.r[2].d[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[10].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 52u), c.r[10].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6BD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 948u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6BFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6C04; } }
L_002E6BFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6C04u) [[unlikely]] return; }
L_002E6C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E6C5C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6C54u) [[unlikely]] return; }
L_002E6C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6D2C; } }
L_002E6C5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6D2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 1;
L_002E6C6C:
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6CBC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8940u));
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 17));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 212u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6D2C; } }
L_002E6CBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6CCCu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x002E6CCCu) [[unlikely]] return; }
L_002E6CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6D2C; } }
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E6D08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.budget -= 6;
L_002E6D08:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8940u));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 17));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.budget -= 9;
L_002E6D2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6D40:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_002E6D8C; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6DA4; } }
L_002E6D8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6DA0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E6DA0u) [[unlikely]] return; }
L_002E6DA0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E6DA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6DB4u);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x002E6DB4u) [[unlikely]] return; }
L_002E6DB4:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] - 21452u), c.r[2].w[0]);
    set32(c.r[23], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6DD0u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E6DD0u) [[unlikely]] return; }
L_002E6DD0:
    st16((c.r[17].w[0] + 7708u), static_cast<std::uint16_t>(0u));
    set32(c.r[21], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002E6DD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7708u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 21452u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], 0u - 2u);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002E6E44; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 22u));
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6E44; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6E40; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] - 22208u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E38u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002E6E38u) [[unlikely]] return; }
L_002E6E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6E44; } }
L_002E6E40:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002E6E44:
    c.r[2].d[0] = c.r[16].sd[0] < -2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6E90; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8992u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E6E68; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6E80; } }
L_002E6E68:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_002E6E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6F4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6EA4; } }
L_002E6E90:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6F4C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[23].d[0];  if (t) { goto L_002E6F4C; } }
L_002E6EA4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002E6EC4; } }
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002E6F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6F4C; } }
L_002E6EC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8938u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E6EE0; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[17].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002E6EE0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 16);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    st16((c.r[17].w[0] + 9014u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 9016u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E6F4C; } }
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6F4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6F3Cu);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x002E6F3Cu) [[unlikely]] return; }
L_002E6F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6F4C; } }
L_002E6F44:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    st8((c.r[17].w[0] + 10100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E6F4C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7708u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 7708u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6DD8u | kUnwind; return; } goto L_002E6DD8; } }
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6F98:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 256u), c.r[6].w[0]);
    c.budget -= 17;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_002E6FE8; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7000; } }
L_002E6FE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6FFCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E6FFCu) [[unlikely]] return; }
L_002E6FFC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E7000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7010u);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x002E7010u) [[unlikely]] return; }
L_002E7010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[3].w[0] - 21452u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7024u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E7024u) [[unlikely]] return; }
L_002E7024:
    st16((c.r[17].w[0] + 7708u), static_cast<std::uint16_t>(0u));
    set32(c.r[30], c.r[2].w[0] - 1u);
    c.budget -= 3;
L_002E7030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 21452u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E720C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7708u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[20].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002E70AC; } }
    c.r[2].d[0] = ld16((c.r[23].w[0] + 22u));
    c.r[16].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E70AC; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E70A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] - 22208u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E70A0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002E70A0u) [[unlikely]] return; }
L_002E70A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E70AC; } }
L_002E70A8:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002E70AC:
    c.r[2].d[0] = c.r[16].sd[0] < -2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E70F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8992u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E70D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E70E8; } }
L_002E70D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_002E70E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E71F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7120; } }
L_002E70F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E71F8; } }
    c.r[2].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E71F8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002E71F8; } }
L_002E7120:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E7140; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7138u);  if (depth < kMaxDepth) unit_0079(c, 258u, depth + 1u); else { c.pc = 0x002E7F30u; return; } if (c.pc != 0x002E7138u) [[unlikely]] return; }
L_002E7138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E71F8; } }
L_002E7140:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E715Cu);  if (depth < kMaxDepth) unit_007A(c, 127u, depth + 1u); else { c.pc = 0x002E9920u; return; } if (c.pc != 0x002E715Cu) [[unlikely]] return; }
L_002E715C:
    set32(c.r[2], ld32((c.r[17].w[0] + 10228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7190; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 36u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 15024u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7190u);  if (depth < kMaxDepth) unit_0093(c, 140u, depth + 1u); else { c.pc = 0x0034DA00u; return; } if (c.pc != 0x002E7190u) [[unlikely]] return; }
L_002E7190:
    c.r[2].d[0] = c.r[18].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E71F8; } }
    c.r[2].d[0] = c.r[18].sd[0] < 302ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E71F8; } }
    set32(c.r[2], 0u + 316u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002E71F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71C8u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x002E71C8u) [[unlikely]] return; }
L_002E71C8:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E71F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71F8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002E71F8u) [[unlikely]] return; }
L_002E71F8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7708u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 7708u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7030u | kUnwind; return; } goto L_002E7030; } }
L_002E720C:
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
L_002E7240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21448u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E77DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], c.r[2].w[0] + 14664u);
    st32((c.r[8].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E7368; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 10160u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 18128u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E7304; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[21], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[8].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 12;
L_002E7304:
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7348; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002E7348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[20], c.r[2].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7444; } }
L_002E7348:
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[20], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7444; } }
L_002E7368:
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 3;
L_002E7374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + 2712u);
    set32(c.r[20], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E73D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 2768u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E73D4; } }
    set32(c.r[2], ld32((c.r[9].w[0] - 18128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E77DC; } }
L_002E73D4:
    set32(c.r[2], ld32((c.r[9].w[0] - 18128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7404; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[7].w[0] + 2712u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2768u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
L_002E7404:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E743C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E743C; } }
L_002E7430:
    set32(c.r[2], ld32((c.r[9].w[0] - 18128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E77DC; } }
L_002E743C:
    set32(c.r[22], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 2;
L_002E7444:
    set32(c.r[3], ld32((c.r[9].w[0] - 18128u)));
    set32(c.r[4], c.r[9].w[0] - 18128u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E7470; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 10160u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[22], c.r[3].w[0] - 3010u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 6;
L_002E7470:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 9296u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E752C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002E752C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 9298u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 9297u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9304u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E752C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E751C; } }
    c.budget -= 1;
L_002E74B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E74D8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E74D0u);  if (depth < kMaxDepth) unit_0079(c, 258u, depth + 1u); else { c.pc = 0x002E7F30u; return; } if (c.pc != 0x002E74D0u) [[unlikely]] return; }
L_002E74D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E74F8; } }
L_002E74D8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E74F8u);  if (depth < kMaxDepth) unit_007A(c, 127u, depth + 1u); else { c.pc = 0x002E9920u; return; } if (c.pc != 0x002E74F8u) [[unlikely]] return; }
L_002E74F8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 9298u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 9297u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    st8((c.r[20].w[0] + 9298u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E752C; } }
L_002E751C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E74B8u | kUnwind; return; } goto L_002E74B8; } }
L_002E752C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_002E7540; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7558; } }
L_002E7540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7554u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E7554u) [[unlikely]] return; }
L_002E7554:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E7558:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7568u);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x002E7568u) [[unlikely]] return; }
L_002E7568:
    c.r[23].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[3].w[0] - 21452u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7580u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002E7580u) [[unlikely]] return; }
L_002E7580:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E77C0; } }
    c.budget -= 1;
L_002E7598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[23].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] - 21452u)));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_002E7604; } }
    c.r[2].d[0] = ld16((c.r[30].w[0] + 22u));
    set32(c.r[16], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7604; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E7600; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22208u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75F8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002E75F8u) [[unlikely]] return; }
L_002E75F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7604; } }
L_002E7600:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002E7604:
    c.r[2].d[0] = c.r[16].sd[0] < -2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7650; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8992u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E7628; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7640; } }
L_002E7628:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_002E7640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E77B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7664; } }
L_002E7650:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[21].d[0];  if (t) { goto L_002E77B0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002E77B0; } }
L_002E7664:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7674u);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x002E7674u) [[unlikely]] return; }
L_002E7674:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 21452u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.r[18].d[0] = ld64((c.r[3].w[0] + 8u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E771C; } }
L_002E7690:
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E76C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27992u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 21452u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E76E0; } }
L_002E76C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27992u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 21452u), c.r[4].w[0]);
    c.budget -= 7;
L_002E76E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 21452u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E77DC; } }
    set32(c.r[2], c.r[23].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[18].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[21].d[0];  if (t) { goto L_002E77B0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002E77B0; } }
L_002E771C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E7754; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7734u);  if (depth < kMaxDepth) unit_0079(c, 258u, depth + 1u); else { c.pc = 0x002E7F30u; return; } if (c.pc != 0x002E7734u) [[unlikely]] return; }
L_002E7734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E77B0; } }
    set32(c.r[2], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002E7754; } }
    set32(c.r[2], 0u + 6039u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E77B0; } }
L_002E7754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 14664u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7778u);  if (depth < kMaxDepth) unit_007A(c, 127u, depth + 1u); else { c.pc = 0x002E9920u; return; } if (c.pc != 0x002E7778u) [[unlikely]] return; }
L_002E7778:
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15024u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], 0u + 5u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E77A8u);  if (depth < kMaxDepth) unit_0093(c, 140u, depth + 1u); else { c.pc = 0x0034DA00u; return; } if (c.pc != 0x002E77A8u) [[unlikely]] return; }
L_002E77A8:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_002E77B0:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E77DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 1;
L_002E77C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7690u | kUnwind; return; } goto L_002E7690; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21452u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7598u | kUnwind; return; } goto L_002E7598; } }
L_002E77DC:
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
L_002E7810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 407u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E79A4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 408ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E78CC; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7D68; } }
    c.r[2].d[0] = c.r[6].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E788C; } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7D30; } }
    c.r[2].d[0] = c.r[6].sd[0] < 39ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7DC8; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E793C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E788C:
    set32(c.r[2], 0u + 305u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7C7C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 306ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E78B8; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E78B8:
    set32(c.r[2], 0u + 398u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E78CC:
    set32(c.r[2], 0u + 411u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7B98; } }
    c.r[2].d[0] = c.r[6].sd[0] < 412ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7904; } }
    set32(c.r[2], 0u + 409u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7A7C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 410ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7A10; } }
L_002E7904:
    set32(c.r[2], 0u + 413u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002E7C44; } }
    c.r[2].d[0] = c.r[6].sd[0] < 413ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7C08; } }
    c.r[2].d[0] = c.r[6].sd[0] < 423ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7DC8; } }
    c.r[2].d[0] = c.r[6].sd[0] < 421ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7B18; } }
L_002E793C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 17856u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7960u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E7960u) [[unlikely]] return; }
L_002E7960:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002E7DC8; } }
    set32(c.r[3], ld32((c.r[18].w[0] - 17856u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7980u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E7980u) [[unlikely]] return; }
L_002E7980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25152u);
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E79A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 52);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    c.r[7].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[3].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E79D8; } }
    c.r[3].d[0] = 0ull - c.r[3].d[0];
    c.budget -= 1;
L_002E79D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002E79E4; } }
    c.r[7].d[0] = 0ull - c.r[7].d[0];
    c.budget -= 1;
L_002E79E4:
    c.r[16].d[0] = c.r[3].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79F8u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E79F8u) [[unlikely]] return; }
L_002E79F8:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 80u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7A10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 52);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    c.r[7].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[3].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E7A44; } }
    c.r[3].d[0] = 0ull - c.r[3].d[0];
    c.budget -= 1;
L_002E7A44:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002E7A50; } }
    c.r[7].d[0] = 0ull - c.r[7].d[0];
    c.budget -= 1;
L_002E7A50:
    c.r[16].d[0] = c.r[3].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A64u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7A64u) [[unlikely]] return; }
L_002E7A64:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 84u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7A7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 52);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    c.r[7].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[3].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E7AB0; } }
    c.r[3].d[0] = 0ull - c.r[3].d[0];
    c.budget -= 1;
L_002E7AB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002E7ABC; } }
    c.r[7].d[0] = 0ull - c.r[7].d[0];
    c.budget -= 1;
L_002E7ABC:
    c.r[16].d[0] = c.r[3].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7AD0u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7AD0u) [[unlikely]] return; }
L_002E7AD0:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 88u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7AFCu);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E7AFCu) [[unlikely]] return; }
L_002E7AFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B10u);  if (depth < kMaxDepth) unit_0094(c, 298u, depth + 1u); else { c.pc = 0x00353368u; return; } if (c.pc != 0x002E7B10u) [[unlikely]] return; }
L_002E7B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7B18:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 45);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[4].d[0] & 32767ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[19].d[0] = c.r[4].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    set32(c.r[4], ld32((c.r[5].w[0] + 9488u)));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    c.r[5].d[0] = c.r[17].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[18].d[0] = c.r[3].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B64u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E7B64u) [[unlikely]] return; }
L_002E7B64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E7DC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B90u);  if (depth < kMaxDepth) unit_0067(c, 248u, depth + 1u); else { c.pc = 0x0029E590u; return; } if (c.pc != 0x002E7B90u) [[unlikely]] return; }
L_002E7B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[5].w[0] + 29712u);
    st32((c.r[5].w[0] + 29712u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7BD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[16].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7BFCu);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7BFCu) [[unlikely]] return; }
L_002E7BFC:
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7C08:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    c.r[6].d[0] = c.r[6].d[0] & 32767ull;
    c.r[4].d[0] = c.r[17].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C3Cu);  if (depth < kMaxDepth) unit_0095(c, 97u, depth + 1u); else { c.pc = 0x00354AB8u; return; } if (c.pc != 0x002E7C3Cu) [[unlikely]] return; }
L_002E7C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7C44:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[4].d[0] = c.r[17].d[0] & 32767ull;
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C5Cu);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7C5Cu) [[unlikely]] return; }
L_002E7C5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C68u);  if (depth < kMaxDepth) unit_0094(c, 232u, depth + 1u); else { c.pc = 0x00352AE8u; return; } if (c.pc != 0x002E7C68u) [[unlikely]] return; }
L_002E7C68:
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 16);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C9Cu);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E7C9Cu) [[unlikely]] return; }
L_002E7C9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E7DC8; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7CB8u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x002E7CB8u) [[unlikely]] return; }
L_002E7CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7CC0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 9488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[16].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7CECu);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E7CECu) [[unlikely]] return; }
L_002E7CEC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E7DC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D14u);  if (depth < kMaxDepth) unit_0067(c, 245u, depth + 1u); else { c.pc = 0x0029E4D0u; return; } if (c.pc != 0x002E7D14u) [[unlikely]] return; }
L_002E7D14:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7D30:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[16].d[0] = c.r[17].d[0] & c.r[16].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D5Cu);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7D5Cu) [[unlikely]] return; }
L_002E7D5C:
    st32((c.r[2].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7DC8; } }
L_002E7D68:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 16);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E7DC8; } }
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] << 16);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    c.r[18].d[0] = c.r[18].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7DB4u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7DB4u) [[unlikely]] return; }
L_002E7DB4:
    st16((c.r[2].w[0] + 40u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7DC4u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x002E7DC4u) [[unlikely]] return; }
L_002E7DC4:
    st32((c.r[2].w[0] + 48u), c.r[18].w[0]);
    c.budget -= 1;
L_002E7DC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E7DE8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E7DF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] - 12680u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7F18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22128u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E7E3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7E50u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E7E50u) [[unlikely]] return; }
L_002E7E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7F18; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7E6Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E7E6Cu) [[unlikely]] return; }
L_002E7E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7F18; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7E88u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E7E88u) [[unlikely]] return; }
L_002E7E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7F18; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EA4u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E7EA4u) [[unlikely]] return; }
L_002E7EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7F10; } }
L_002E7EB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7EFC; } }
L_002E7EC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7EFC; } }
L_002E7ED4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7EFC; } }
L_002E7EE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7EFC; } }
L_002E7EF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 17u);
    c.budget -= 2;
L_002E7EFC:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F08u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E7F08u) [[unlikely]] return; }
L_002E7F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E7F18; } }
L_002E7F10:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E7F18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E7F30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007A(c, 85u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[20], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] - 6944u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[22], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7FACu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E7FACu) [[unlikely]] return; }
L_002E7FAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], 0u + 12666u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007A(c, 19u, depth); } }
    c.r[2].d[0] = c.r[17].sd[0] < 12667ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007A(c, 5u, depth); } }
    set32(c.r[2], 0u + 6633u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007A(c, 43u, depth); } }
    c.r[2].d[0] = c.r[17].sd[0] < 6634ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007A(c, 4u, depth); } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007A(c, 38u, depth); } }
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007A(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007A(c, 46u, depth); } }
    [[clang::musttail]] return unit_007A(c, 2u, depth);
}

}
