#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0,
};

void unit_001B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0016C000;
    case 2u: goto L_0016C03C;
    case 3u: goto L_0016C07C;
    case 4u: goto L_0016C098;
    case 5u: goto L_0016C0C0;
    case 6u: goto L_0016C0F4;
    case 7u: goto L_0016C10C;
    case 8u: goto L_0016C140;
    case 9u: goto L_0016C1B0;
    case 10u: goto L_0016C1D8;
    case 11u: goto L_0016C228;
    case 12u: goto L_0016C234;
    case 13u: goto L_0016C27C;
    case 14u: goto L_0016C2B0;
    case 15u: goto L_0016C2E8;
    case 16u: goto L_0016C37C;
    case 17u: goto L_0016C3A4;
    case 18u: goto L_0016C3F4;
    case 19u: goto L_0016C420;
    case 20u: goto L_0016C430;
    case 21u: goto L_0016C45C;
    case 22u: goto L_0016C478;
    case 23u: goto L_0016C4C8;
    case 24u: goto L_0016C4D4;
    case 25u: goto L_0016C524;
    case 26u: goto L_0016C558;
    case 27u: goto L_0016C5A4;
    case 28u: goto L_0016C5B0;
    case 29u: goto L_0016C630;
    case 30u: goto L_0016C76C;
    case 31u: goto L_0016C788;
    case 32u: goto L_0016C7FC;
    case 33u: goto L_0016C81C;
    case 34u: goto L_0016C83C;
    case 35u: goto L_0016C8B0;
    case 36u: goto L_0016C968;
    case 37u: goto L_0016C9D8;
    case 38u: goto L_0016CA54;
    case 39u: goto L_0016CAF0;
    case 40u: goto L_0016CB50;
    case 41u: goto L_0016CB80;
    case 42u: goto L_0016CBD0;
    case 43u: goto L_0016CBDC;
    case 44u: goto L_0016CC24;
    case 45u: goto L_0016CCB8;
    case 46u: goto L_0016CD08;
    case 47u: goto L_0016CD28;
    case 48u: goto L_0016CD40;
    case 49u: goto L_0016CDDC;
    case 50u: goto L_0016CE20;
    case 51u: goto L_0016CE5C;
    case 52u: goto L_0016CEBC;
    case 53u: goto L_0016CF1C;
    case 54u: goto L_0016CF3C;
    case 55u: goto L_0016CF7C;
    case 56u: goto L_0016CFAC;
    case 57u: goto L_0016CFBC;
    case 58u: goto L_0016CFCC;
    case 59u: goto L_0016CFD8;
    case 60u: goto L_0016D13C;
    case 61u: goto L_0016D18C;
    case 62u: goto L_0016D1A4;
    case 63u: goto L_0016D20C;
    case 64u: goto L_0016D24C;
    case 65u: goto L_0016D264;
    case 66u: goto L_0016D2C4;
    case 67u: goto L_0016D314;
    case 68u: goto L_0016D370;
    case 69u: goto L_0016D3C4;
    case 70u: goto L_0016D414;
    case 71u: goto L_0016D420;
    case 72u: goto L_0016D43C;
    case 73u: goto L_0016D454;
    case 74u: goto L_0016D46C;
    case 75u: goto L_0016D478;
    case 76u: goto L_0016D49C;
    case 77u: goto L_0016D4AC;
    case 78u: goto L_0016D4E8;
    case 79u: goto L_0016D4F8;
    case 80u: goto L_0016D50C;
    case 81u: goto L_0016D520;
    case 82u: goto L_0016D53C;
    case 83u: goto L_0016D558;
    case 84u: goto L_0016D56C;
    case 85u: goto L_0016D594;
    case 86u: goto L_0016D5B0;
    case 87u: goto L_0016D5C4;
    case 88u: goto L_0016D5D8;
    case 89u: goto L_0016D5F4;
    case 90u: goto L_0016D608;
    case 91u: goto L_0016D614;
    case 92u: goto L_0016D628;
    case 93u: goto L_0016D634;
    case 94u: goto L_0016D648;
    case 95u: goto L_0016D65C;
    case 96u: goto L_0016D6A0;
    case 97u: goto L_0016D6B8;
    case 98u: goto L_0016D6C8;
    case 99u: goto L_0016D6DC;
    case 100u: goto L_0016D710;
    case 101u: goto L_0016D76C;
    case 102u: goto L_0016D7A8;
    case 103u: goto L_0016D7D0;
    case 104u: goto L_0016D800;
    case 105u: goto L_0016D83C;
    case 106u: goto L_0016D8D4;
    case 107u: goto L_0016D8E8;
    case 108u: goto L_0016D914;
    case 109u: goto L_0016D950;
    case 110u: goto L_0016D96C;
    case 111u: goto L_0016D9A4;
    case 112u: goto L_0016D9D8;
    case 113u: goto L_0016D9F0;
    case 114u: goto L_0016DA04;
    case 115u: goto L_0016DA18;
    case 116u: goto L_0016DA2C;
    case 117u: goto L_0016DA54;
    case 118u: goto L_0016DA88;
    case 119u: goto L_0016DAC4;
    case 120u: goto L_0016DAE0;
    case 121u: goto L_0016DB50;
    case 122u: goto L_0016DBA0;
    case 123u: goto L_0016DBAC;
    case 124u: goto L_0016DBF0;
    case 125u: goto L_0016DC40;
    case 126u: goto L_0016DC4C;
    case 127u: goto L_0016DCA0;
    case 128u: goto L_0016DCEC;
    case 129u: goto L_0016DD28;
    case 130u: goto L_0016DD90;
    case 131u: goto L_0016DD9C;
    case 132u: goto L_0016DDB4;
    case 133u: goto L_0016DDC8;
    case 134u: goto L_0016DDE4;
    case 135u: goto L_0016DE00;
    case 136u: goto L_0016DE0C;
    case 137u: goto L_0016DE40;
    case 138u: goto L_0016DE90;
    case 139u: goto L_0016DE9C;
    case 140u: goto L_0016DED8;
    case 141u: goto L_0016DEE4;
    case 142u: goto L_0016DF18;
    case 143u: goto L_0016DF68;
    case 144u: goto L_0016DF74;
    case 145u: goto L_0016DFB0;
    case 146u: goto L_0016DFC8;
    case 147u: goto L_0016DFE0;
    case 148u: goto L_0016DFF4;
    case 149u: goto L_0016E028;
    case 150u: goto L_0016E078;
    case 151u: goto L_0016E08C;
    case 152u: goto L_0016E0E0;
    case 153u: goto L_0016E14C;
    case 154u: goto L_0016E17C;
    case 155u: goto L_0016E190;
    case 156u: goto L_0016E1DC;
    case 157u: goto L_0016E2F0;
    case 158u: goto L_0016E360;
    case 159u: goto L_0016E3C0;
    case 160u: goto L_0016E404;
    case 161u: goto L_0016E414;
    case 162u: goto L_0016E450;
    case 163u: goto L_0016E4A0;
    case 164u: goto L_0016E4AC;
    case 165u: goto L_0016E4E8;
    case 166u: goto L_0016E510;
    case 167u: goto L_0016E554;
    case 168u: goto L_0016E56C;
    case 169u: goto L_0016E584;
    case 170u: goto L_0016E5B8;
    case 171u: goto L_0016E6D8;
    case 172u: goto L_0016E6F0;
    case 173u: goto L_0016E70C;
    case 174u: goto L_0016E724;
    case 175u: goto L_0016E740;
    case 176u: goto L_0016E758;
    case 177u: goto L_0016E778;
    case 178u: goto L_0016E790;
    case 179u: goto L_0016E7AC;
    case 180u: goto L_0016E7C4;
    case 181u: goto L_0016E7E0;
    case 182u: goto L_0016E7F8;
    case 183u: goto L_0016E818;
    case 184u: goto L_0016E858;
    case 185u: goto L_0016E868;
    case 186u: goto L_0016E8A0;
    case 187u: goto L_0016E8F4;
    case 188u: goto L_0016E900;
    case 189u: goto L_0016E938;
    case 190u: goto L_0016E940;
    case 191u: goto L_0016E950;
    case 192u: goto L_0016E9B0;
    case 193u: goto L_0016EA00;
    case 194u: goto L_0016EA0C;
    case 195u: goto L_0016EA68;
    case 196u: goto L_0016EA90;
    case 197u: goto L_0016EAA0;
    case 198u: goto L_0016EABC;
    case 199u: goto L_0016EAE8;
    case 200u: goto L_0016EAF8;
    case 201u: goto L_0016EB2C;
    case 202u: goto L_0016EB54;
    case 203u: goto L_0016EBA4;
    case 204u: goto L_0016EBC0;
    case 205u: goto L_0016EBD0;
    case 206u: goto L_0016EBDC;
    case 207u: goto L_0016EC08;
    case 208u: goto L_0016EC18;
    case 209u: goto L_0016EC28;
    case 210u: goto L_0016EC34;
    case 211u: goto L_0016EC60;
    case 212u: goto L_0016EC70;
    case 213u: goto L_0016ECF0;
    case 214u: goto L_0016ED00;
    case 215u: goto L_0016ED18;
    case 216u: goto L_0016ED28;
    case 217u: goto L_0016ED38;
    case 218u: goto L_0016ED54;
    case 219u: goto L_0016ED60;
    case 220u: goto L_0016ED70;
    case 221u: goto L_0016ED80;
    case 222u: goto L_0016ED90;
    case 223u: goto L_0016EDD8;
    case 224u: goto L_0016EE20;
    case 225u: goto L_0016EEE0;
    case 226u: goto L_0016EF50;
    case 227u: goto L_0016EF6C;
    case 228u: goto L_0016EF78;
    case 229u: goto L_0016EFA4;
    case 230u: goto L_0016EFB0;
    case 231u: goto L_0016EFC8;
    case 232u: goto L_0016EFF0;
    case 233u: goto L_0016F020;
    case 234u: goto L_0016F05C;
    case 235u: goto L_0016F0A8;
    case 236u: goto L_0016F0D8;
    case 237u: goto L_0016F130;
    case 238u: goto L_0016F148;
    case 239u: goto L_0016F188;
    case 240u: goto L_0016F1D0;
    case 241u: goto L_0016F1E8;
    case 242u: goto L_0016F1F8;
    case 243u: goto L_0016F22C;
    case 244u: goto L_0016F260;
    case 245u: goto L_0016F274;
    case 246u: goto L_0016F2D8;
    case 247u: goto L_0016F2E8;
    case 248u: goto L_0016F300;
    case 249u: goto L_0016F330;
    case 250u: goto L_0016F348;
    case 251u: goto L_0016F368;
    case 252u: goto L_0016F3B8;
    case 253u: goto L_0016F3F0;
    case 254u: goto L_0016F42C;
    case 255u: goto L_0016F498;
    case 256u: goto L_0016F4C4;
    case 257u: goto L_0016F500;
    case 258u: goto L_0016F550;
    case 259u: goto L_0016F55C;
    case 260u: goto L_0016F598;
    case 261u: goto L_0016F5C0;
    case 262u: goto L_0016F5F0;
    case 263u: goto L_0016F620;
    case 264u: goto L_0016F650;
    case 265u: goto L_0016F668;
    case 266u: goto L_0016F6A0;
    case 267u: goto L_0016F6B8;
    case 268u: goto L_0016F6CC;
    case 269u: goto L_0016F6E0;
    case 270u: goto L_0016F6F4;
    case 271u: goto L_0016F718;
    case 272u: goto L_0016F730;
    case 273u: goto L_0016F740;
    case 274u: goto L_0016F750;
    case 275u: goto L_0016F760;
    case 276u: goto L_0016F7C4;
    case 277u: goto L_0016F7E8;
    case 278u: goto L_0016F810;
    case 279u: goto L_0016F868;
    case 280u: goto L_0016F884;
    case 281u: goto L_0016F8D0;
    case 282u: goto L_0016F8EC;
    case 283u: goto L_0016F950;
    case 284u: goto L_0016F988;
    case 285u: goto L_0016F9C4;
    case 286u: goto L_0016FA28;
    case 287u: goto L_0016FA58;
    case 288u: goto L_0016FA64;
    case 289u: goto L_0016FA84;
    case 290u: goto L_0016FA98;
    case 291u: goto L_0016FAB8;
    case 292u: goto L_0016FBA0;
    case 293u: goto L_0016FBB0;
    case 294u: goto L_0016FBC0;
    case 295u: goto L_0016FCB8;
    case 296u: goto L_0016FCC8;
    case 297u: goto L_0016FCD8;
    case 298u: goto L_0016FD28;
    case 299u: goto L_0016FDAC;
    case 300u: goto L_0016FDC4;
    case 301u: goto L_0016FDE8;
    case 302u: goto L_0016FE20;
    case 303u: goto L_0016FE30;
    case 304u: goto L_0016FE48;
    case 305u: goto L_0016FE58;
    case 306u: goto L_0016FE70;
    case 307u: goto L_0016FE80;
    case 308u: goto L_0016FE90;
    case 309u: goto L_0016FEA0;
    case 310u: goto L_0016FEB0;
    case 311u: goto L_0016FF58;
    case 312u: goto L_0016FF70;
    case 313u: goto L_0016FF98;
    case 314u: goto L_0016FFA0;
    case 315u: goto L_0016FFB0;
    case 316u: goto L_0016FFC0;
    case 317u: goto L_0016FFD8;
    case 318u: goto L_0016FFE8;
    default: bad_entry(c, 0x0016C000u); return;
    }
L_0016C000:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[4], 0u - 9u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C0E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016C0E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C03Cu);  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0016B950u; return; } if (c.pc != 0x0016C03Cu) [[unlikely]] return; }
L_0016C03C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C058; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C05C; } }
L_0016C058:
    set32(c.r[19], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_0016C05C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_0016C07C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C07Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016C07Cu) [[unlikely]] return; }
L_0016C07C:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 46u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C09C; } }
L_0016C098:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016C09C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C0D4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0C0u);  if (depth < kMaxDepth) unit_0079(c, 137u, depth + 1u); else { c.pc = 0x002E6198u; return; } if (c.pc != 0x0016C0C0u) [[unlikely]] return; }
L_0016C0C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C098u | kUnwind; return; } goto L_0016C098; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0016C0D4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0016C0E4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BFC4u | kUnwind; return; } [[clang::musttail]] return unit_001A(c, 302u, depth); } }
L_0016C0E4:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016C0E8:
    set32(c.r[17], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C000u | kUnwind; return; } goto L_0016C000; } }
L_0016C0F4:
    st32((c.r[18].w[0] + 588u), c.r[30].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    st16((c.r[18].w[0] + 10274u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st16((c.r[18].w[0] + 7724u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0016C10C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C140:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 128u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[17].w[0] + 8944u), 0u);
    st32((c.r[17].w[0] + 8948u), 0u);
    st32((c.r[17].w[0] + 7700u), 0u);
    st8((c.r[17].w[0] + 13163u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st64((c.r[17].w[0] + 560u), c.r[3].d[0]);
    st8((c.r[17].w[0] + 13160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13162u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1B0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016C1B0u) [[unlikely]] return; }
L_0016C1B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[21], c.r[3].w[0] - 5000u);
    set32(c.r[16], c.r[5].w[0] + 27456u);
    c.budget -= 10;
L_0016C1D8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C234; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C228u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016C228u) [[unlikely]] return; }
L_0016C228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C234u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016C234u) [[unlikely]] return; }
L_0016C234:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C1D8u | kUnwind; return; } goto L_0016C1D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 31496u)));
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016C284; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C27Cu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x0016C27Cu) [[unlikely]] return; }
L_0016C27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C2C0; } }
L_0016C284:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C2B0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0016C2B0u) [[unlikely]] return; }
L_0016C2B0:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 4;
L_0016C2C0:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0016C2D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C2E8; } }
L_0016C2D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C2E8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016C2E8u) [[unlikely]] return; }
L_0016C2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C340; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016C340; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C324; } }
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C338; } }
L_0016C324:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_0016C338:
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016C340:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0016C3FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], c.r[23].w[0] - 31864u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], ld32((c.r[3].w[0] + 31480u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], 0u + 56u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C37Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0016C37Cu) [[unlikely]] return; }
L_0016C37C:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0016C394; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C3A4; } }
L_0016C394:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C3A4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016C3A4u) [[unlikely]] return; }
L_0016C3A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C3C0; } }
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C3C4; } }
L_0016C3C0:
    st64((c.r[29].w[0] + 8u), 0ull);
    c.budget -= 1;
L_0016C3C4:
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C3F4u);  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x0016AC90u; return; } if (c.pc != 0x0016C3F4u) [[unlikely]] return; }
L_0016C3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C420; } }
L_0016C3FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[23].w[0] - 31864u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C420u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x0016C420u) [[unlikely]] return; }
L_0016C420:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C430u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x0016C430u) [[unlikely]] return; }
L_0016C430:
    set32(c.r[16], c.r[30].w[0] + 27456u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 7700u), 0u);
    st32((c.r[17].w[0] + 7704u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 13152u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C45Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016C45Cu) [[unlikely]] return; }
L_0016C45C:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[21], c.r[3].w[0] - 5000u);
    set32(c.r[20], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 7;
L_0016C478:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C4D4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4C8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016C4C8u) [[unlikely]] return; }
L_0016C4C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4D4u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016C4D4u) [[unlikely]] return; }
L_0016C4D4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C478u | kUnwind; return; } goto L_0016C478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    st16((c.r[17].w[0] + 7712u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 7710u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016C524; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C524u) [[unlikely]] return; }
L_0016C524:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 10016u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C580; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C588; } }
L_0016C580:
    set32(c.r[2], ld32((c.r[16].w[0] + 10020u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0016C588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C5B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5A4u);  if (depth < kMaxDepth) unit_007D(c, 2u, depth + 1u); else { c.pc = 0x002F4010u; return; } if (c.pc != 0x0016C5A4u) [[unlikely]] return; }
L_0016C5A4:
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_0016C5BC; } }
L_0016C5B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C770; } }
L_0016C5BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6940u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C5B0u | kUnwind; return; } goto L_0016C5B0; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].d[0] & 64ull;
    c.r[5].d[0] = c.r[8].d[0] & 32ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[6].d[0] = c.r[8].d[0] & 128ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[8].d[0] & 16ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[9].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C5B0u | kUnwind; return; } goto L_0016C5B0; } }
    c.r[3].d[0] = c.r[8].d[0] & 65ull;
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C638; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C630u);  if (depth < kMaxDepth) unit_001A(c, 134u, depth + 1u); else { c.pc = 0x001699D8u; return; } if (c.pc != 0x0016C630u) [[unlikely]] return; }
L_0016C630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C5B0u | kUnwind; return; } goto L_0016C5B0; } }
L_0016C638:
    set32(c.r[4], ld32((c.r[16].w[0] + 13172u)));
    set32(c.r[2], 0u - 6u);
    set32(c.r[3], ld32((c.r[16].w[0] + 10020u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016C668; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 10016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C668; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C5B0u | kUnwind; return; } goto L_0016C5B0; } }
L_0016C668:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0016C738; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016C738; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13160u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C6B8; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C6D0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13161u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C6C4; } }
L_0016C6B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C6D0; } }
L_0016C6C4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_0016C6D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C5B0u | kUnwind; return; } goto L_0016C5B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016C738; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C710; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C724; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13161u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C71C; } }
L_0016C710:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C724; } }
L_0016C71C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_0016C724:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C738; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    if (c.r[2].d[0] != 0) c.r[6].d[0] = 0ull;
    c.budget -= 2;
L_0016C738:
    set32(c.r[3], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[3].d[0] & 246ull;
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016C760; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[16].w[0] + 13168u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st32((c.r[16].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 5;
L_0016C760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C76Cu);  if (depth < kMaxDepth) unit_001B(c, 8u, depth + 1u); else { c.pc = 0x0016C140u; return; } if (c.pc != 0x0016C76Cu) [[unlikely]] return; }
L_0016C76C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016C770:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C788:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 28;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C7CC; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C7E0; } }
L_0016C7CC:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 29;
    set32(c.r[19], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 5;
L_0016C7E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0016C8E0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7FCu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0016C7FCu) [[unlikely]] return; }
L_0016C7FC:
    c.r[16].d[0] = c.r[16].d[0] & 240ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] + 17200u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C81Cu);  if (depth < kMaxDepth) unit_0071(c, 312u, depth + 1u); else { c.pc = 0x002C74B8u; return; } if (c.pc != 0x0016C81Cu) [[unlikely]] return; }
L_0016C81C:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C8D0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C83Cu);  if (depth < kMaxDepth) unit_0071(c, 313u, depth + 1u); else { c.pc = 0x002C7508u; return; } if (c.pc != 0x0016C83Cu) [[unlikely]] return; }
L_0016C83C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 31500u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 31504u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0016C864:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0016C880; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 31504u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_0016C880:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016C8D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C8C4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8B0u);  if (depth < kMaxDepth) unit_0071(c, 313u, depth + 1u); else { c.pc = 0x002C7508u; return; } if (c.pc != 0x0016C8B0u) [[unlikely]] return; }
L_0016C8B0:
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C8D4; } }
L_0016C8C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C8D4; } }
L_0016C8D0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016C8D4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C944; } }
L_0016C8E0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 26u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[4].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 22u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 20u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0016C92C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0016C940; } }
L_0016C92C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_0016C940; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C944; } }
L_0016C940:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016C944:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C968:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10089u)));
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016CACC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016CA24; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CA24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016CA24; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CA24; } }
L_0016C9D8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016CA18; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CA18; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CA18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 3;
L_0016CA18:
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C9D8u | kUnwind; return; } goto L_0016C9D8; } }
L_0016CA24:
    set32(c.r[3], 0u + 40u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7718u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[7].w[0] - 5000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA54u);  if (depth < kMaxDepth) unit_001B(c, 251u, depth + 1u); else { c.pc = 0x0016F368u; return; } if (c.pc != 0x0016CA54u) [[unlikely]] return; }
L_0016CA54:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld16((c.r[17].w[0] + 7718u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10126u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 7722u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[7].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 10126u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 7722u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    st16((c.r[17].w[0] + 7718u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016CAB4; } }
    st16((c.r[17].w[0] + 7718u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0016CAB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7718u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 6;
L_0016CACC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016CAF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 10104u)));
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016CDE8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB50u);  if (depth < kMaxDepth) unit_001A(c, 300u, depth + 1u); else { c.pc = 0x0016BF48u; return; } if (c.pc != 0x0016CB50u) [[unlikely]] return; }
L_0016CB50:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016CC6C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[22], c.r[4].w[0] - 5000u);
    set32(c.r[21], c.r[18].w[0] << (c.r[2].w[0] & 31u));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_0016CB80:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CBDC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBD0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016CBD0u) [[unlikely]] return; }
L_0016CBD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBDCu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016CBDCu) [[unlikely]] return; }
L_0016CBDC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CB80u | kUnwind; return; } goto L_0016CB80; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CC18; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 7724u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[17].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CC24; } }
L_0016CC18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC24u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016CC24u) [[unlikely]] return; }
L_0016CC24:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 588u)));
    set32(c.r[5], c.r[5].w[0] - 26128u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 7724u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 624u), c.r[6].w[0]);
    st16((c.r[17].w[0] + 7726u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 592u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 596u), c.r[20].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 560u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 84u));
    set32(c.r[4], ld32((c.r[17].w[0] + 620u)));
    st16((c.r[17].w[0] + 7728u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 628u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 568u), c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CDEC; } }
L_0016CC6C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0016CDE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10089u)));
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[20], ld32((c.r[17].w[0] + 36u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CCE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 5000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0016CCB8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CCD0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[30].d[0] = c.r[5].d[0];
    c.budget -= 3;
L_0016CCD0:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CCB8u | kUnwind; return; } goto L_0016CCB8; } }
L_0016CCE0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_0016CCF4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD08; } }
L_0016CCF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD08u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016CD08u) [[unlikely]] return; }
L_0016CD08:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 46u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] - 5024u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0016CD60; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0016CD28:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD40u);  if (depth < kMaxDepth) unit_0079(c, 137u, depth + 1u); else { c.pc = 0x002E6198u; return; } if (c.pc != 0x0016CD40u) [[unlikely]] return; }
L_0016CD40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[23].d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CD28u | kUnwind; return; } goto L_0016CD28; } }
L_0016CD60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10089u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CDE8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0016CDE8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016CDE8; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0016CDE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0016CDE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 588u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 7724u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 624u), c.r[5].w[0]);
    st16((c.r[17].w[0] + 7726u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 592u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 596u), c.r[22].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 560u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] - 26044u));
    set32(c.r[3], ld32((c.r[17].w[0] + 620u)));
    st16((c.r[17].w[0] + 7728u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 568u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 628u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CDDCu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016CDDCu) [[unlikely]] return; }
L_0016CDDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CDEC; } }
L_0016CDE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016CDEC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016CE20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE5Cu);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x0016CE5Cu) [[unlikely]] return; }
L_0016CE5C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0016D33C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 1480u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0016D33C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0016CEBC; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016CEBCu) [[unlikely]] return; }
L_0016CEBC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 624u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 632u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 616u), c.r[20].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016CF24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016CF24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 596u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0016CF08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] - 26044u));
    st16((c.r[17].w[0] + 7728u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0016CF08:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF1Cu);  if (depth < kMaxDepth) unit_001A(c, 256u, depth + 1u); else { c.pc = 0x0016B138u; return; } if (c.pc != 0x0016CF1Cu) [[unlikely]] return; }
L_0016CF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D33C; } }
L_0016CF24:
    set32(c.r[2], ld32((c.r[17].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016CF3C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF3Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016CF3Cu) [[unlikely]] return; }
L_0016CF3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 620u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7724u)));
    c.r[22].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016CF58; } }
    c.r[2].d[0] = c.r[16].d[0] & 61440ull;
    c.r[22].d[0] = c.r[22].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0016CF58:
    c.r[2].d[0] = c.r[16].d[0] & c.r[22].d[0];
    st32((c.r[17].w[0] + 620u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 604u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 608u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016CF90; } }
    st32((c.r[17].w[0] + 536u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CF94; } }
L_0016CF7C:
    st16((c.r[17].w[0] + 7724u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st32((c.r[17].w[0] + 588u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 608u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D300; } }
L_0016CF90:
    st32((c.r[17].w[0] + 608u), c.r[2].w[0]);
    c.budget -= 1;
L_0016CF94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 588u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 608u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFACu);  if (depth < kMaxDepth) unit_0089(c, 178u, depth + 1u); else { c.pc = 0x00325F58u; return; } if (c.pc != 0x0016CFACu) [[unlikely]] return; }
L_0016CFAC:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFBCu);  if (depth < kMaxDepth) unit_0089(c, 182u, depth + 1u); else { c.pc = 0x00325FC8u; return; } if (c.pc != 0x0016CFBCu) [[unlikely]] return; }
L_0016CFBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0016D33C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0016D300; } }
L_0016CFCC:
    c.r[21].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[30], 0u + 1u);
    c.r[21].d[0] = c.r[21].d[0] | 2559ull;
    c.budget -= 3;
L_0016CFD8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], 0u - 2u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[19].d[0] = c.r[19].d[0] & c.r[4].d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 6u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0016D020; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[20].d[0] = c.r[20].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[19].d[0] = c.r[19].d[0] & c.r[21].d[0];
    st32((c.r[17].w[0] + 612u), c.r[3].w[0]);
    c.budget -= 7;
L_0016D020:
    set32(c.r[2], ld32((c.r[17].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D050; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D050; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u - 9u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0016D050:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_0016D0C8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016D0C8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[6], c.r[6].w[0] - 12408u);
    set32(c.r[3], 0u + 108u);
    c.lo.d[0] = c.r[6].d[0];
    set32(c.r[4], 0u + 56u);
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] - 40u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D0CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D0B8; } }
    st8((c.r[17].w[0] + 10139u), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D0CC; } }
L_0016D0B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10139u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D0CC; } }
    st32((c.r[17].w[0] + 536u), 0u);
    c.budget -= 1;
L_0016D0C8:
    st8((c.r[17].w[0] + 10139u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0016D0CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 536u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D0EC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7722u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D0F8; } }
L_0016D0EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D0FC; } }
L_0016D0F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016D0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D290; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 26u));
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[23].d[0] = c.r[16].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D130; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D150; } }
L_0016D130:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D13Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0016D13Cu) [[unlikely]] return; }
L_0016D13C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0016D150:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[30].d[0];  if (t) { goto L_0016D16C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1024ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0016D16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D194; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D18Cu);  if (depth < kMaxDepth) unit_001B(c, 31u, depth + 1u); else { c.pc = 0x0016C788u; return; } if (c.pc != 0x0016D18Cu) [[unlikely]] return; }
L_0016D18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D290; } }
L_0016D194:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1A4u);  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0016B950u; return; } if (c.pc != 0x0016D1A4u) [[unlikely]] return; }
L_0016D1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D290; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 9u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016D1EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 1536u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 62u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 11;
L_0016D1EC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016D290; } }
    st32((c.r[17].w[0] + 536u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D20Cu);  if (depth < kMaxDepth) unit_001B(c, 36u, depth + 1u); else { c.pc = 0x0016C968u; return; } if (c.pc != 0x0016D20Cu) [[unlikely]] return; }
L_0016D20C:
    st32((c.r[17].w[0] + 608u), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7724u));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7724u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 588u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D240; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 588u), c.r[3].w[0]);
    st16((c.r[17].w[0] + 7724u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D24C; } }
L_0016D240:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D24Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016D24Cu) [[unlikely]] return; }
L_0016D24C:
    st32((c.r[17].w[0] + 608u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D264u);  if (depth < kMaxDepth) unit_001B(c, 39u, depth + 1u); else { c.pc = 0x0016CAF0u; return; } if (c.pc != 0x0016D264u) [[unlikely]] return; }
L_0016D264:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016D300; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CF7Cu | kUnwind; return; } goto L_0016CF7C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D300; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D300; } }
L_0016D290:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0016D2A4; } }
    set32(c.r[18], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CFCCu | kUnwind; return; } goto L_0016CFCC; } }
L_0016D2A4:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0016D2F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D2F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D2C4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016D2C4u) [[unlikely]] return; }
L_0016D2C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[4], 0u + 6u);
    st32((c.r[17].w[0] + 536u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0016D2E4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016D2EC; } }
L_0016D2E4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0016D2EC:
    set32(c.r[19], ld32((c.r[17].w[0] + 608u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 588u)));
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_0016D2F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CFD8u | kUnwind; return; } goto L_0016CFD8; } }
L_0016D300:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0016D33C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D314u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016D314u) [[unlikely]] return; }
L_0016D314:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 536u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016D334; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016D33C; } }
L_0016D334:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0016D33C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D370:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[30], c.r[2].w[0] - 19312u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D3C4u);  if (depth < kMaxDepth) unit_0089(c, 50u, depth + 1u); else { c.pc = 0x00324C48u; return; } if (c.pc != 0x0016D3C4u) [[unlikely]] return; }
L_0016D3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D6DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[19], c.r[2].w[0] - 1u);
    set32(c.r[20], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0016D6DC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10272u)));
    set32(c.r[22], 0u + 1u);
    c.r[23].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D414; } }
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D414u);  if (depth < kMaxDepth) unit_0089(c, 37u, depth + 1u); else { c.pc = 0x00324998u; return; } if (c.pc != 0x0016D414u) [[unlikely]] return; }
L_0016D414:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D420u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x0016D420u) [[unlikely]] return; }
L_0016D420:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[22].d[0];  if (t) { goto L_0016D46C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D43Cu);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x0016D43Cu) [[unlikely]] return; }
L_0016D43C:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D454u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x0016D454u) [[unlikely]] return; }
L_0016D454:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D46Cu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x0016D46Cu) [[unlikely]] return; }
L_0016D46C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D478u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x0016D478u) [[unlikely]] return; }
L_0016D478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D488; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0016D4AC; } }
L_0016D488:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D49Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0016D49Cu) [[unlikely]] return; }
L_0016D49C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4ACu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0016D4ACu) [[unlikely]] return; }
L_0016D4AC:
    st16((c.r[17].w[0] + 7712u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st16((c.r[17].w[0] + 7710u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[16], c.r[2].w[0] - 19312u);
    st16((c.r[18].w[0] + 7710u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[6], 0u + 8u);
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7712u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[18].w[0] + 7712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 7700u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4E8u);  if (depth < kMaxDepth) unit_0089(c, 6u, depth + 1u); else { c.pc = 0x00324080u; return; } if (c.pc != 0x0016D4E8u) [[unlikely]] return; }
L_0016D4E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4F8u);  if (depth < kMaxDepth) unit_0089(c, 6u, depth + 1u); else { c.pc = 0x00324080u; return; } if (c.pc != 0x0016D4F8u) [[unlikely]] return; }
L_0016D4F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D50Cu);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0016D50Cu) [[unlikely]] return; }
L_0016D50C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D520u);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0016D520u) [[unlikely]] return; }
L_0016D520:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 113u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D53Cu);  if (depth < kMaxDepth) unit_006E(c, 122u, depth + 1u); else { c.pc = 0x002B9830u; return; } if (c.pc != 0x0016D53Cu) [[unlikely]] return; }
L_0016D53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D558; } }
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D558u);  if (depth < kMaxDepth) unit_0089(c, 15u, depth + 1u); else { c.pc = 0x00324420u; return; } if (c.pc != 0x0016D558u) [[unlikely]] return; }
L_0016D558:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0016D648; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D56Cu);  if (depth < kMaxDepth) unit_0089(c, 174u, depth + 1u); else { c.pc = 0x00325ED8u; return; } if (c.pc != 0x0016D56Cu) [[unlikely]] return; }
L_0016D56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D59C; } }
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D594u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0016D594u) [[unlikely]] return; }
L_0016D594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D5D8; } }
L_0016D59C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5B0u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x0016D5B0u) [[unlikely]] return; }
L_0016D5B0:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5C4u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x0016D5C4u) [[unlikely]] return; }
L_0016D5C4:
    c.f[12] = ld32((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5D8u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x0016D5D8u) [[unlikely]] return; }
L_0016D5D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5F4u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x0016D5F4u) [[unlikely]] return; }
L_0016D5F4:
    c.f[12] = ld32((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D608u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x0016D608u) [[unlikely]] return; }
L_0016D608:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D614u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0016D614u) [[unlikely]] return; }
L_0016D614:
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D628u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016D628u) [[unlikely]] return; }
L_0016D628:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D634u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0016D634u) [[unlikely]] return; }
L_0016D634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D648u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016D648u) [[unlikely]] return; }
L_0016D648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D65Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0016D65Cu) [[unlikely]] return; }
L_0016D65C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] == c.r[2].d[0];  if (t) { goto L_0016D688; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D6A0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D6A0; } }
L_0016D688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6A0u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016D6A0u) [[unlikely]] return; }
L_0016D6A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6B8u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0016D6B8u) [[unlikely]] return; }
L_0016D6B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6C8u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0016D6C8u) [[unlikely]] return; }
L_0016D6C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6DCu);  if (depth < kMaxDepth) unit_0079(c, 190u, depth + 1u); else { c.pc = 0x002E6D40u; return; } if (c.pc != 0x0016D6DCu) [[unlikely]] return; }
L_0016D6DC:
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
L_0016D710:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 15;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_0016D758; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D76C; } }
L_0016D758:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D76Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016D76Cu) [[unlikely]] return; }
L_0016D76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D780; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D788; } }
L_0016D780:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0016D788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D8AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7A8u);  if (depth < kMaxDepth) unit_006E(c, 126u, depth + 1u); else { c.pc = 0x002B98F8u; return; } if (c.pc != 0x0016D7A8u) [[unlikely]] return; }
L_0016D7A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016DA54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 31508u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D7DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D7D0u) [[unlikely]] return; }
L_0016D7D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D888; } }
L_0016D7DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 9848u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016D850; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D800u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0016D800u) [[unlikely]] return; }
L_0016D800:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D850; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D850; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016D850; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D83Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D83Cu) [[unlikely]] return; }
L_0016D83C:
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0016D850:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7696u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0016D870; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0016D870:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016D884; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016D884:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016D888:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0016D8AC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016D8B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D8B8; } }
L_0016D8AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DA58; } }
L_0016D8B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 13192u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016D934; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8D4u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x0016D8D4u) [[unlikely]] return; }
L_0016D8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D934; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8E8u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0016D8E8u) [[unlikely]] return; }
L_0016D8E8:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016DA54; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D914u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0016D914u) [[unlikely]] return; }
L_0016D914:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016DA54; } }
L_0016D934:
    set32(c.r[16], ld32((c.r[17].w[0] + 13192u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016D998; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D950u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x0016D950u) [[unlikely]] return; }
L_0016D950:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0016D998; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D96Cu);  if (depth < kMaxDepth) unit_006E(c, 72u, depth + 1u); else { c.pc = 0x002B8EA8u; return; } if (c.pc != 0x0016D96Cu) [[unlikely]] return; }
L_0016D96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D998; } }
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DA58; } }
L_0016D998:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9A4u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x0016D9A4u) [[unlikely]] return; }
L_0016D9A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016DA34; } }
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[17].w[0] + 132u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9D8u);  if (depth < kMaxDepth) unit_001B(c, 275u, depth + 1u); else { c.pc = 0x0016F760u; return; } if (c.pc != 0x0016D9D8u) [[unlikely]] return; }
L_0016D9D8:
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9F0u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016D9F0u) [[unlikely]] return; }
L_0016D9F0:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA04u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016DA04u) [[unlikely]] return; }
L_0016DA04:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA18u);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0016DA18u) [[unlikely]] return; }
L_0016DA18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA2Cu);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0016DA2Cu) [[unlikely]] return; }
L_0016DA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DA54; } }
L_0016DA34:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA54u);  if (depth < kMaxDepth) unit_001B(c, 275u, depth + 1u); else { c.pc = 0x0016F760u; return; } if (c.pc != 0x0016DA54u) [[unlikely]] return; }
L_0016DA54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016DA58:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DA88:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAC4u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0016DAC4u) [[unlikely]] return; }
L_0016DAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DC70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAE0u);  if (depth < kMaxDepth) unit_0088(c, 318u, depth + 1u); else { c.pc = 0x00323A18u; return; } if (c.pc != 0x0016DAE0u) [[unlikely]] return; }
L_0016DAE0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016DC70; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016DB0C; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DB24; } }
L_0016DB0C:
    set32(c.r[3], ld32((c.r[20].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016DB24; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[20].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 2;
L_0016DB24:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7710u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[22], c.r[3].w[0] - 5000u);
    set32(c.r[16], c.r[5].w[0] + 27456u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_0016DB50:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DBAC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBA0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016DBA0u) [[unlikely]] return; }
L_0016DBA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBACu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016DBACu) [[unlikely]] return; }
L_0016DBAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DB50u | kUnwind; return; } goto L_0016DB50; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st16((c.r[18].w[0] + 7712u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[2].w[0] - 5000u);
    st16((c.r[18].w[0] + 7710u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[23].w[0] + 27456u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7712u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 11;
L_0016DBF0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DC4C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC40u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016DC40u) [[unlikely]] return; }
L_0016DC40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC4Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016DC4Cu) [[unlikely]] return; }
L_0016DC4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DBF0u | kUnwind; return; } goto L_0016DBF0; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[20].w[0] + 7712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 7710u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016DC70:
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
L_0016DCA0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[3].w[0] - 19312u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    st32((c.r[2].w[0] - 17288u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCECu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0016DCECu) [[unlikely]] return; }
L_0016DCEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DFB8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0016DFF4; } }
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD28u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x0016DD28u) [[unlikely]] return; }
L_0016DD28:
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[5] = ld32((c.r[17].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[3] = ld32((c.r[17].w[0] + 136u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[19].w[0] + 128u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 31532u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 31536u)));
    set32(c.r[4], c.r[4].w[0] - 2144u);
    st32((c.r[29].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[5]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD90u);  if (depth < kMaxDepth) unit_001B(c, 68u, depth + 1u); else { c.pc = 0x0016D370u; return; } if (c.pc != 0x0016DD90u) [[unlikely]] return; }
L_0016DD90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD9Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0016DD9Cu) [[unlikely]] return; }
L_0016DD9C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDB4u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016DDB4u) [[unlikely]] return; }
L_0016DDB4:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDC8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016DDC8u) [[unlikely]] return; }
L_0016DDC8:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDE4u);  if (depth < kMaxDepth) unit_0088(c, 328u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x0016DDE4u) [[unlikely]] return; }
L_0016DDE4:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE00u);  if (depth < kMaxDepth) unit_0088(c, 328u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x0016DE00u) [[unlikely]] return; }
L_0016DE00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE0Cu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016DE0Cu) [[unlikely]] return; }
L_0016DE0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016DEB4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[22], c.r[3].w[0] - 5000u);
    set32(c.r[21], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_0016DE40:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DE9C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE90u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016DE90u) [[unlikely]] return; }
L_0016DE90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE9Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016DE9Cu) [[unlikely]] return; }
L_0016DE9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[20], c.r[20].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DE40u | kUnwind; return; } goto L_0016DE40; } }
L_0016DEB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 596u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 612u), 0u);
    st32((c.r[17].w[0] + 13168u), 0u);
    st32((c.r[17].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DED8u);  if (depth < kMaxDepth) unit_0089(c, 176u, depth + 1u); else { c.pc = 0x00325F10u; return; } if (c.pc != 0x0016DED8u) [[unlikely]] return; }
L_0016DED8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEE4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016DEE4u) [[unlikely]] return; }
L_0016DEE4:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016DF8C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[23].w[0] + 27456u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[21], c.r[3].w[0] - 5000u);
    set32(c.r[20], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_0016DF18:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DF74; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF68u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016DF68u) [[unlikely]] return; }
L_0016DF68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF74u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016DF74u) [[unlikely]] return; }
L_0016DF74:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DF18u | kUnwind; return; } goto L_0016DF18; } }
L_0016DF8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 612u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 596u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 620u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 612u), 0u);
    st32((c.r[19].w[0] + 13168u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFB0u);  if (depth < kMaxDepth) unit_0089(c, 176u, depth + 1u); else { c.pc = 0x00325F10u; return; } if (c.pc != 0x0016DFB0u) [[unlikely]] return; }
L_0016DFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DFF4; } }
L_0016DFB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFC8u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x0016DFC8u) [[unlikely]] return; }
L_0016DFC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 31532u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFE0u);  if (depth < kMaxDepth) unit_001B(c, 8u, depth + 1u); else { c.pc = 0x0016C140u; return; } if (c.pc != 0x0016DFE0u) [[unlikely]] return; }
L_0016DFE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFF4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0016DFF4u) [[unlikely]] return; }
L_0016DFF4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E028:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E398; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[20], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + 27456u);
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E078u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0016E078u) [[unlikely]] return; }
L_0016E078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0016E090; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E08Cu);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x0016E08Cu) [[unlikely]] return; }
L_0016E08C:
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0016E090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 31540u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E0B4; } }
    st32((c.r[17].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E398; } }
L_0016E0B4:
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 31544u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016E104; } }
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0E0u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0016E0E0u) [[unlikely]] return; }
L_0016E0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E104; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E104; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
L_0016E104:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016E158; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E398; } }
    set32(c.r[16], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 215u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E14Cu);  if (depth < kMaxDepth) unit_001B(c, 159u, depth + 1u); else { c.pc = 0x0016E3C0u; return; } if (c.pc != 0x0016E14Cu) [[unlikely]] return; }
L_0016E14C:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E398; } }
L_0016E158:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E398; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E398; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E17Cu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0016E17Cu) [[unlikely]] return; }
L_0016E17C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E190u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0016E190u) [[unlikely]] return; }
L_0016E190:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E1B4; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[17].w[0] + 24u), 0u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 5;
L_0016E1B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0016E1E4; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[6], 0u + 216u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E1DCu);  if (depth < kMaxDepth) unit_001B(c, 159u, depth + 1u); else { c.pc = 0x0016E3C0u; return; } if (c.pc != 0x0016E1DCu) [[unlikely]] return; }
L_0016E1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E398; } }
L_0016E1E4:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.f[2] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016E254; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 31552u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E244; } }
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E298; } }
L_0016E244:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E298; } }
L_0016E254:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0016E298; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 31548u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 31552u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 56u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E298; } }
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_0016E298:
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E2F0; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016E2D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 31556u)));
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E398; } }
L_0016E2D4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 216u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E2F0u);  if (depth < kMaxDepth) unit_001B(c, 159u, depth + 1u); else { c.pc = 0x0016E3C0u; return; } if (c.pc != 0x0016E2F0u) [[unlikely]] return; }
L_0016E2F0:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0016E310u);  goto L_0016E314; }
L_0016E314:
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E350; } }
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_0016E350:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
L_0016E360:
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016E37C; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_0016E37C:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016E398; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_0016E398:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E3C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E404u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0016E404u) [[unlikely]] return; }
L_0016E404:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E414u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016E414u) [[unlikely]] return; }
L_0016E414:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016E4C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[21], c.r[3].w[0] - 5000u);
    set32(c.r[20], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[16], c.r[5].w[0] + 27456u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_0016E450:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E4AC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4A0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016E4A0u) [[unlikely]] return; }
L_0016E4A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4ACu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016E4ACu) [[unlikely]] return; }
L_0016E4AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E450u | kUnwind; return; } goto L_0016E450; } }
L_0016E4C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 596u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 612u), 0u);
    st32((c.r[17].w[0] + 13168u), 0u);
    st32((c.r[17].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4E8u);  if (depth < kMaxDepth) unit_0089(c, 176u, depth + 1u); else { c.pc = 0x00325F10u; return; } if (c.pc != 0x0016E4E8u) [[unlikely]] return; }
L_0016E4E8:
    set32(c.r[2], 0u + 216u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_0016E548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 31544u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E510u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0016E510u) [[unlikely]] return; }
L_0016E510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E554; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E554; } }
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E554; } }
L_0016E548:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E554u);  if (depth < kMaxDepth) unit_001B(c, 127u, depth + 1u); else { c.pc = 0x0016DCA0u; return; } if (c.pc != 0x0016E554u) [[unlikely]] return; }
L_0016E554:
    set32(c.r[2], 0u + 12u);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[22].w[0] + 28u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E56Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0016E56Cu) [[unlikely]] return; }
L_0016E56C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016E588; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E584u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x0016E584u) [[unlikely]] return; }
L_0016E584:
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0016E588:
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
L_0016E5B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0016E7F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E7F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[19], ld32((c.r[2].w[0] + 31548u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[17], 0u + 4u);
    st32((c.r[7].w[0] + 31524u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 31528u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] - 12584u);
    st32((c.r[13].w[0] + 31516u), 0u);
    set32(c.r[12], 0u - 1u);
    st32((c.r[14].w[0] + 31520u), c.r[17].w[0]);
    set32(c.r[15], 0u + 6000u);
    st32((c.r[8].w[0] + 31532u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[9].w[0] + 31536u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[10].w[0] + 31540u), 0u);
    set32(c.r[16], c.r[16].w[0] - 12504u);
    st32((c.r[11].w[0] + 31544u), 0u);
    set32(c.r[6], c.r[6].w[0] + 26800u);
    st32((c.r[2].w[0] + 76u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 12u), c.f[3]);
    st32((c.r[2].w[0] + 16u), c.f[2]);
    st32((c.r[2].w[0] + 36u), c.f[1]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    st32((c.r[2].w[0] + 44u), c.r[15].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[18].w[0] - 12584u), 0u);
    st32((c.r[2].w[0] + 56u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E6D8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016E6D8u) [[unlikely]] return; }
L_0016E6D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26576u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E6F0u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0016E6F0u) [[unlikely]] return; }
L_0016E6F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12488u);
    set32(c.r[2], c.r[2].w[0] + 26776u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E70Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016E70Cu) [[unlikely]] return; }
L_0016E70C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26584u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E724u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0016E724u) [[unlikely]] return; }
L_0016E724:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12472u);
    set32(c.r[2], c.r[2].w[0] + 26752u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E740u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016E740u) [[unlikely]] return; }
L_0016E740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26600u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E758u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0016E758u) [[unlikely]] return; }
L_0016E758:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12456u);
    set32(c.r[2], c.r[2].w[0] + 26704u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E778u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016E778u) [[unlikely]] return; }
L_0016E778:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26616u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E790u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0016E790u) [[unlikely]] return; }
L_0016E790:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12440u);
    set32(c.r[2], c.r[2].w[0] + 26680u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7ACu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016E7ACu) [[unlikely]] return; }
L_0016E7AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26632u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7C4u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0016E7C4u) [[unlikely]] return; }
L_0016E7C4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12424u);
    set32(c.r[2], c.r[2].w[0] + 26656u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7E0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016E7E0u) [[unlikely]] return; }
L_0016E7E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26640u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7F8u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0016E7F8u) [[unlikely]] return; }
L_0016E7F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E818:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 560u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016E84C; } }
    st8((c.r[4].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 536u), 0u);
    st16((c.r[4].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 624u), 0u);
    c.budget -= 4;
L_0016E84C:
    st64((c.r[4].w[0] + 560u), c.r[5].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E858u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016E858u) [[unlikely]] return; }
L_0016E858:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E868:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], c.r[2].w[0] - 5000u);
    c.budget -= 14;
L_0016E8A0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E900; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E8F4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016E8F4u) [[unlikely]] return; }
L_0016E8F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E900u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016E900u) [[unlikely]] return; }
L_0016E900:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E8A0u | kUnwind; return; } goto L_0016E8A0; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E940:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E950:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 540u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EA38; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[21], c.r[3].w[0] - 5000u);
    set32(c.r[20], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[16], c.r[5].w[0] + 27456u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_0016E9B0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EA0C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA00u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016EA00u) [[unlikely]] return; }
L_0016EA00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA0Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016EA0Cu) [[unlikely]] return; }
L_0016EA0C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E9B0u | kUnwind; return; } goto L_0016E9B0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 10089u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EA3C; } }
L_0016EA38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016EA3C:
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
L_0016EA68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7696u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9040u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EA90:
    set32(c.r[2], ld32((c.r[4].w[0] + 13156u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EAA0:
    set32(c.r[5], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 14192u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EABCu);  if (depth < kMaxDepth) unit_0096(c, 200u, depth + 1u); else { c.pc = 0x0035A9E8u; return; } if (c.pc != 0x0016EABCu) [[unlikely]] return; }
L_0016EABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EAD0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EAD8; } }
L_0016EAD0:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 2;
L_0016EAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EAE8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EAF8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 56u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB2Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0016EB2Cu) [[unlikely]] return; }
L_0016EB2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0016EB44; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EB54; } }
L_0016EB44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB54u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016EB54u) [[unlikely]] return; }
L_0016EB54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EB70; } }
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EB74; } }
L_0016EB70:
    st64((c.r[29].w[0] + 8u), 0ull);
    c.budget -= 1;
L_0016EB74:
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EBA4u);  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x0016AC90u; return; } if (c.pc != 0x0016EBA4u) [[unlikely]] return; }
L_0016EBA4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EBC0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13162u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EBDC; } }
L_0016EBD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EBDC:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EBD0u | kUnwind; return; } goto L_0016EBD0; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 13163u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EC08; } }
    set32(c.r[2], 0u + 191u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EC08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EC18:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13160u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EC34; } }
L_0016EC28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EC34:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EC28u | kUnwind; return; } goto L_0016EC28; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 13161u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EC60; } }
    set32(c.r[2], 0u + 191u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EC60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EC70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13162u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EC9C; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EC9C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13163u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ECA8; } }
L_0016EC9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ECB0; } }
L_0016ECA8:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_0016ECB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016ECE4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13160u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016ECE4; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ECE4; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 13161u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ECF0; } }
L_0016ECE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ECF0:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED00:
    set32(c.r[2], ld32((c.r[4].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 246ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED18:
    set32(c.r[2], ld32((c.r[4].w[0] + 10020u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED28:
    set32(c.r[2], ld32((c.r[4].w[0] + 10016u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED38:
    set32(c.r[2], ld32((c.r[4].w[0] + 10016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016ED54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 10020u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED60:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 10016u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED70:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 10020u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED80:
    st32((c.r[4].w[0] + 10020u), 0u);
    st32((c.r[4].w[0] + 10016u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ED90:
    set32(c.r[6], ld32((c.r[4].w[0] + 13168u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[6].d[0] & 64ull;
    c.r[7].d[0] = c.r[6].d[0] & 32ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[8].d[0] = c.r[6].d[0] & 128ull;
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] & 16ull;
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[4], c.r[3].w[0] + 1u);
    if (c.r[8].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[5], c.r[3].w[0] + 1u);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EDD8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[8].d[0] = ~(0ull | c.r[8].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0016EE14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    st32((c.r[4].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 3;
L_0016EE14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EE20:
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[5], 0u - 2u);
    set32(c.r[4], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 7700u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0016EE98; } }
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 2559ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[8].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 14;
L_0016EE98:
    set32(c.r[2], ld32((c.r[8].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EED8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 7724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EED8; } }
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], 0u - 9u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_0016EED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EEE0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7724u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_0016EF6C; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0016EF6C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    set32(c.r[3], 0u + 108u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 56u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 12408u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] - 40u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EF70; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EF50; } }
    st8((c.r[6].w[0] + 10139u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EF50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10139u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EF70; } }
    st8((c.r[6].w[0] + 10139u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 536u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EF6C:
    st8((c.r[6].w[0] + 10139u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0016EF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EF78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 536u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EF98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7722u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EFA4; } }
L_0016EF98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EFA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EFB0:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 26u));
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016EFC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F008; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EFF0u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0016EFF0u) [[unlikely]] return; }
L_0016EFF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F00C; } }
L_0016F008:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F00C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F050; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F06C; } }
L_0016F050:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F05Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0016F05Cu) [[unlikely]] return; }
L_0016F05C:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
L_0016F06C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F088; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 1024u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016F08C; } }
L_0016F088:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F08C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F0A8:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F124; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F124; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F124; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016F124; } }
L_0016F0D8:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F118; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5u));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F118; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F118; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 3;
L_0016F118:
    set32(c.r[6], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F0D8u | kUnwind; return; } goto L_0016F0D8; } }
L_0016F124:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F148u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016F148u) [[unlikely]] return; }
L_0016F148:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 536u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F168; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F170; } }
L_0016F168:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0016F170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F188:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0016F1C4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], 0u + 1536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 62u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[6].d[0] = 0ull;
    c.budget -= 11;
L_0016F1C4:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1E8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CE20u; return; } if (c.pc != 0x0016F1E8u) [[unlikely]] return; }
L_0016F1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F1F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F22Cu);  if (depth < kMaxDepth) unit_0079(c, 258u, depth + 1u); else { c.pc = 0x002E7F30u; return; } if (c.pc != 0x0016F22Cu) [[unlikely]] return; }
L_0016F22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F2B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7720u)));
    set32(c.r[3], 0u + 120u);
    c.r[18].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 7732u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F2B0; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0016F260:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F274u);  if (depth < kMaxDepth) unit_0079(c, 258u, depth + 1u); else { c.pc = 0x002E7F30u; return; } if (c.pc != 0x0016F274u) [[unlikely]] return; }
L_0016F274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F290; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F2B8; } }
L_0016F290:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F2B0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F260u | kUnwind; return; } goto L_0016F260; } }
L_0016F2B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F2B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016F2B8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F2D8:
    set32(c.r[6], c.r[4].w[0] + 7732u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
L_0016F2E8:
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 116u);
    set32(c.r[3], 0u + 29u);
    c.budget -= 6;
L_0016F300:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F300u | kUnwind; return; } goto L_0016F300; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F2E8u | kUnwind; return; } goto L_0016F2E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F330:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7720u)));
    set32(c.r[3], 0u + 120u);
    set32(c.r[5], 0u + 29u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 7848u);
    c.budget -= 6;
L_0016F348:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F348u | kUnwind; return; } goto L_0016F348; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F368:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 120u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[20], c.r[19].w[0] + 7732u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7720u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 29u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + 116u);
    c.budget -= 20;
L_0016F3B8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F3B8u | kUnwind; return; } goto L_0016F3B8; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F468; } }
    set32(c.r[21], 0u - 1u);
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    set32(c.r[22], 0u + 120u);
    c.budget -= 4;
L_0016F3F0:
    set32(c.r[16], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016F45C; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F45C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F42Cu);  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0016B950u; return; } if (c.pc != 0x0016F42Cu) [[unlikely]] return; }
L_0016F42C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F45C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7718u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F468; } }
L_0016F45C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F3F0u | kUnwind; return; } goto L_0016F3F0; } }
L_0016F468:
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
L_0016F498:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4C4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016F4C4u) [[unlikely]] return; }
L_0016F4C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F574; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[21], c.r[3].w[0] - 5000u);
    set32(c.r[20], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[16], c.r[5].w[0] + 27456u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_0016F500:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F55C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F550u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016F550u) [[unlikely]] return; }
L_0016F550:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F55Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016F55Cu) [[unlikely]] return; }
L_0016F55C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F500u | kUnwind; return; } goto L_0016F500; } }
L_0016F574:
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 596u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 612u), 0u);
    st32((c.r[17].w[0] + 13168u), 0u);
    st32((c.r[17].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F598u);  if (depth < kMaxDepth) unit_0089(c, 176u, depth + 1u); else { c.pc = 0x00325F10u; return; } if (c.pc != 0x0016F598u) [[unlikely]] return; }
L_0016F598:
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
L_0016F5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0016F5E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F5F0; } }
L_0016F5E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F5F0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016F5F0u) [[unlikely]] return; }
L_0016F5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F608; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F60C; } }
L_0016F608:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F60C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0016F640; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F650; } }
L_0016F640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F650u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016F650u) [[unlikely]] return; }
L_0016F650:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F668:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.f[20] = ld32((c.r[17].w[0] + 132u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6A0u);  if (depth < kMaxDepth) unit_001B(c, 275u, depth + 1u); else { c.pc = 0x0016F760u; return; } if (c.pc != 0x0016F6A0u) [[unlikely]] return; }
L_0016F6A0:
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6B8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016F6B8u) [[unlikely]] return; }
L_0016F6B8:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6CCu);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016F6CCu) [[unlikely]] return; }
L_0016F6CC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6E0u);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0016F6E0u) [[unlikely]] return; }
L_0016F6E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6F4u);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0016F6F4u) [[unlikely]] return; }
L_0016F6F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F718:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F730u);  if (depth < kMaxDepth) unit_001B(c, 275u, depth + 1u); else { c.pc = 0x0016F760u; return; } if (c.pc != 0x0016F730u) [[unlikely]] return; }
L_0016F730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F750u);  if (depth < kMaxDepth) unit_001B(c, 275u, depth + 1u); else { c.pc = 0x0016F760u; return; } if (c.pc != 0x0016F750u) [[unlikely]] return; }
L_0016F750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F760:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[17].w[0] + 10085u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0016F7B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F7C4; } }
L_0016F7B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7C4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016F7C4u) [[unlikely]] return; }
L_0016F7C4:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7E8u);  if (depth < kMaxDepth) unit_001B(c, 68u, depth + 1u); else { c.pc = 0x0016D370u; return; } if (c.pc != 0x0016F7E8u) [[unlikely]] return; }
L_0016F7E8:
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
L_0016F810:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[18].d[0] | 3392ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[30], 0u + 2u);
    set32(c.r[20], 0u + 13u);
    c.budget -= 22;
L_0016F868:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[19].d[0];  if (t) { goto L_0016F904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F884u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0016F884u) [[unlikely]] return; }
L_0016F884:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F904; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0016F8B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0016F904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F8C8; } }
L_0016F8B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[30].d[0];  if (t) { goto L_0016F8C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_0016F904; } }
L_0016F8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8D0u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0016F8D0u) [[unlikely]] return; }
L_0016F8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F904; } }
    set32(c.r[4], c.r[23].w[0] - 19312u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8ECu);  if (depth < kMaxDepth) unit_0089(c, 27u, depth + 1u); else { c.pc = 0x003246D0u; return; } if (c.pc != 0x0016F8ECu) [[unlikely]] return; }
L_0016F8EC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F904; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0016F904:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F868u | kUnwind; return; } goto L_0016F868; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 9848u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F9D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F988u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0016F988u) [[unlikely]] return; }
L_0016F988:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F9D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F9D8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016F9D8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F9C4u) [[unlikely]] return; }
L_0016F9C4:
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0016F9D8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0016F9F8; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0016F9F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016FA0C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016FA0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FA28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA58u);  if (depth < kMaxDepth) unit_001B(c, 68u, depth + 1u); else { c.pc = 0x0016D370u; return; } if (c.pc != 0x0016FA58u) [[unlikely]] return; }
L_0016FA58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA64u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0016FA64u) [[unlikely]] return; }
L_0016FA64:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[20] = c.f[0];
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA84u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016FA84u) [[unlikely]] return; }
L_0016FA84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA98u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x0016FA98u) [[unlikely]] return; }
L_0016FA98:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FAB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[15], 0u + 4u);
    set32(c.r[16], ld32((c.r[2].w[0] + 31548u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 600u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[7].w[0] + 31524u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 31528u), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[13].w[0] + 31516u), 0u);
    set32(c.r[12], 0u + 6000u);
    st32((c.r[14].w[0] + 31520u), c.r[15].w[0]);
    st32((c.r[8].w[0] + 31532u), 0u);
    st32((c.r[9].w[0] + 31536u), 0u);
    st32((c.r[10].w[0] + 31540u), 0u);
    st32((c.r[11].w[0] + 31544u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 56u), c.r[16].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    st32((c.r[4].w[0] + 16u), c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    st32((c.r[4].w[0] + 48u), c.r[15].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 58;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FBA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FBB0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 4u);
    set32(c.r[17], ld32((c.r[2].w[0] + 31548u)));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], 0u + 2u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], 0u + 600u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[15].w[0] + 31520u), c.r[16].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[8].w[0] + 31524u), c.r[6].w[0]);
    set32(c.r[13], 0u + 6000u);
    st32((c.r[7].w[0] + 31528u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[14].w[0] + 31516u), 0u);
    st32((c.r[9].w[0] + 31532u), 0u);
    st32((c.r[10].w[0] + 31536u), 0u);
    st32((c.r[11].w[0] + 31540u), 0u);
    st32((c.r[12].w[0] + 31544u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0]) & ~15u, c.r[17]);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    st32((c.r[4].w[0] + 12u), c.f[4]);
    st32((c.r[4].w[0] + 16u), c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    st32((c.r[4].w[0] + 44u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FCB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FCC8:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FCD8:
    set32(c.r[2], 0u + 1u);
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 31512u), 0u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FD28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 31512u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[3], 0u + 214u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016FDA4; } }
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 1;
L_0016FDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDACu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0016FDACu) [[unlikely]] return; }
L_0016FDAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[18].d[0];  if (t) { goto L_0016FDC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDC4u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x0016FDC4u) [[unlikely]] return; }
L_0016FDC4:
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_0016FDC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FDE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[5].w[0] + 31540u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FE20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 31540u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE48u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E028u; return; } if (c.pc != 0x0016FE48u) [[unlikely]] return; }
L_0016FE48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 12536u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FE70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12556u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FE80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 12568u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 12532u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FEA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 12572u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FEB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], ld32((c.r[19].w[0] + 31516u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0016FF78; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 12584u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[3], 0u + 214u);
    st32((c.r[2].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 31512u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    st32((c.r[19].w[0] + 31516u), c.r[17].w[0]);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016FF50; } }
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 1;
L_0016FF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF58u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0016FF58u) [[unlikely]] return; }
L_0016FF58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0016FF74; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF70u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x0016FF70u) [[unlikely]] return; }
L_0016FF70:
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_0016FF74:
    st32((c.r[19].w[0] + 31516u), 0u);
    c.budget -= 1;
L_0016FF78:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FF98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FFA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12524u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12540u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FFC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12520u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FFD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12516u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 12584u);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 6;
    [[clang::musttail]] return unit_001C(c, 1u, depth);
}

}
