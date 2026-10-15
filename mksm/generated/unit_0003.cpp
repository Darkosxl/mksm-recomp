#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0003[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
};

void unit_0003(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0010C000;
    case 2u: goto L_0010C004;
    case 3u: goto L_0010C01C;
    case 4u: goto L_0010C048;
    case 5u: goto L_0010C050;
    case 6u: goto L_0010C060;
    case 7u: goto L_0010C06C;
    case 8u: goto L_0010C090;
    case 9u: goto L_0010C0D0;
    case 10u: goto L_0010C0E4;
    case 11u: goto L_0010C100;
    case 12u: goto L_0010C11C;
    case 13u: goto L_0010C138;
    case 14u: goto L_0010C148;
    case 15u: goto L_0010C158;
    case 16u: goto L_0010C194;
    case 17u: goto L_0010C1B8;
    case 18u: goto L_0010C218;
    case 19u: goto L_0010C258;
    case 20u: goto L_0010C344;
    case 21u: goto L_0010C364;
    case 22u: goto L_0010C3C8;
    case 23u: goto L_0010C3D4;
    case 24u: goto L_0010C3F0;
    case 25u: goto L_0010C400;
    case 26u: goto L_0010C410;
    case 27u: goto L_0010C44C;
    case 28u: goto L_0010C45C;
    case 29u: goto L_0010C498;
    case 30u: goto L_0010C4E4;
    case 31u: goto L_0010C4F8;
    case 32u: goto L_0010C4FC;
    case 33u: goto L_0010C538;
    case 34u: goto L_0010C5B0;
    case 35u: goto L_0010C600;
    case 36u: goto L_0010C658;
    case 37u: goto L_0010C7A8;
    case 38u: goto L_0010C7DC;
    case 39u: goto L_0010C824;
    case 40u: goto L_0010C8B0;
    case 41u: goto L_0010C8C4;
    case 42u: goto L_0010C8E0;
    case 43u: goto L_0010C998;
    case 44u: goto L_0010C9E4;
    case 45u: goto L_0010CA0C;
    case 46u: goto L_0010CA20;
    case 47u: goto L_0010CA68;
    case 48u: goto L_0010CA7C;
    case 49u: goto L_0010CAA4;
    case 50u: goto L_0010CAF8;
    case 51u: goto L_0010CBC0;
    case 52u: goto L_0010CC18;
    case 53u: goto L_0010CC70;
    case 54u: goto L_0010CC84;
    case 55u: goto L_0010CD20;
    case 56u: goto L_0010CD40;
    case 57u: goto L_0010CD70;
    case 58u: goto L_0010CD94;
    case 59u: goto L_0010CDA4;
    case 60u: goto L_0010CE50;
    case 61u: goto L_0010CE98;
    case 62u: goto L_0010CF08;
    case 63u: goto L_0010CF70;
    case 64u: goto L_0010D008;
    case 65u: goto L_0010D190;
    case 66u: goto L_0010D224;
    case 67u: goto L_0010D238;
    case 68u: goto L_0010D24C;
    case 69u: goto L_0010D278;
    case 70u: goto L_0010D2B0;
    case 71u: goto L_0010D308;
    case 72u: goto L_0010D354;
    case 73u: goto L_0010D368;
    case 74u: goto L_0010D38C;
    case 75u: goto L_0010D3AC;
    case 76u: goto L_0010D3D0;
    case 77u: goto L_0010D3E0;
    case 78u: goto L_0010D48C;
    case 79u: goto L_0010D4D4;
    case 80u: goto L_0010D544;
    case 81u: goto L_0010D58C;
    case 82u: goto L_0010D5BC;
    case 83u: goto L_0010D654;
    case 84u: goto L_0010D7E0;
    case 85u: goto L_0010D878;
    case 86u: goto L_0010D88C;
    case 87u: goto L_0010D8A0;
    case 88u: goto L_0010D8D8;
    case 89u: goto L_0010D910;
    case 90u: goto L_0010D94C;
    case 91u: goto L_0010D964;
    case 92u: goto L_0010D980;
    case 93u: goto L_0010D998;
    case 94u: goto L_0010D9B4;
    case 95u: goto L_0010D9CC;
    case 96u: goto L_0010D9DC;
    case 97u: goto L_0010D9EC;
    case 98u: goto L_0010D9FC;
    case 99u: goto L_0010DA38;
    case 100u: goto L_0010DA6C;
    case 101u: goto L_0010DA98;
    case 102u: goto L_0010DAE8;
    case 103u: goto L_0010DAF0;
    case 104u: goto L_0010DB10;
    case 105u: goto L_0010DB50;
    case 106u: goto L_0010DB78;
    case 107u: goto L_0010DB90;
    case 108u: goto L_0010DBA0;
    case 109u: goto L_0010DBC4;
    case 110u: goto L_0010DBE8;
    case 111u: goto L_0010DBF8;
    case 112u: goto L_0010DC08;
    case 113u: goto L_0010DC44;
    case 114u: goto L_0010DC58;
    case 115u: goto L_0010DC6C;
    case 116u: goto L_0010DD28;
    case 117u: goto L_0010DD40;
    case 118u: goto L_0010DD4C;
    case 119u: goto L_0010DDB8;
    case 120u: goto L_0010DDD4;
    case 121u: goto L_0010DDE8;
    case 122u: goto L_0010DE00;
    case 123u: goto L_0010DE10;
    case 124u: goto L_0010DE28;
    case 125u: goto L_0010DE38;
    case 126u: goto L_0010DEC8;
    case 127u: goto L_0010DEDC;
    case 128u: goto L_0010DFB8;
    case 129u: goto L_0010E018;
    case 130u: goto L_0010E034;
    case 131u: goto L_0010E048;
    case 132u: goto L_0010E05C;
    case 133u: goto L_0010E070;
    case 134u: goto L_0010E09C;
    case 135u: goto L_0010E0B0;
    case 136u: goto L_0010E0DC;
    case 137u: goto L_0010E0F0;
    case 138u: goto L_0010E108;
    case 139u: goto L_0010E11C;
    case 140u: goto L_0010E13C;
    case 141u: goto L_0010E150;
    case 142u: goto L_0010E168;
    case 143u: goto L_0010E17C;
    case 144u: goto L_0010E1A0;
    case 145u: goto L_0010E1B4;
    case 146u: goto L_0010E1CC;
    case 147u: goto L_0010E1E0;
    case 148u: goto L_0010E200;
    case 149u: goto L_0010E214;
    case 150u: goto L_0010E258;
    case 151u: goto L_0010E280;
    case 152u: goto L_0010E2D8;
    case 153u: goto L_0010E304;
    case 154u: goto L_0010E330;
    case 155u: goto L_0010E338;
    case 156u: goto L_0010E350;
    case 157u: goto L_0010E360;
    case 158u: goto L_0010E378;
    case 159u: goto L_0010E388;
    case 160u: goto L_0010E3E0;
    case 161u: goto L_0010E40C;
    case 162u: goto L_0010E438;
    case 163u: goto L_0010E450;
    case 164u: goto L_0010E460;
    case 165u: goto L_0010E478;
    case 166u: goto L_0010E488;
    case 167u: goto L_0010E4FC;
    case 168u: goto L_0010E514;
    case 169u: goto L_0010E52C;
    case 170u: goto L_0010E53C;
    case 171u: goto L_0010E558;
    case 172u: goto L_0010E56C;
    case 173u: goto L_0010E57C;
    case 174u: goto L_0010E598;
    case 175u: goto L_0010E5AC;
    case 176u: goto L_0010E618;
    case 177u: goto L_0010E634;
    case 178u: goto L_0010E660;
    case 179u: goto L_0010E680;
    case 180u: goto L_0010E6A0;
    case 181u: goto L_0010E6B8;
    case 182u: goto L_0010E6C8;
    case 183u: goto L_0010E6E0;
    case 184u: goto L_0010E738;
    case 185u: goto L_0010E7E4;
    case 186u: goto L_0010E814;
    case 187u: goto L_0010E864;
    case 188u: goto L_0010E874;
    case 189u: goto L_0010E884;
    case 190u: goto L_0010E8A0;
    case 191u: goto L_0010E8B0;
    case 192u: goto L_0010E8D8;
    case 193u: goto L_0010E904;
    case 194u: goto L_0010E91C;
    case 195u: goto L_0010E974;
    case 196u: goto L_0010E98C;
    case 197u: goto L_0010E998;
    case 198u: goto L_0010E9CC;
    case 199u: goto L_0010E9F4;
    case 200u: goto L_0010EA10;
    case 201u: goto L_0010EA28;
    case 202u: goto L_0010EA44;
    case 203u: goto L_0010EA6C;
    case 204u: goto L_0010EA88;
    case 205u: goto L_0010EAB0;
    case 206u: goto L_0010EB08;
    case 207u: goto L_0010EB20;
    case 208u: goto L_0010EB84;
    case 209u: goto L_0010EB90;
    case 210u: goto L_0010EBCC;
    case 211u: goto L_0010EC1C;
    case 212u: goto L_0010EC38;
    case 213u: goto L_0010EC50;
    case 214u: goto L_0010EC70;
    case 215u: goto L_0010EC94;
    case 216u: goto L_0010ECAC;
    case 217u: goto L_0010ECCC;
    case 218u: goto L_0010ED08;
    case 219u: goto L_0010ED18;
    case 220u: goto L_0010ED60;
    case 221u: goto L_0010EDAC;
    case 222u: goto L_0010EE18;
    case 223u: goto L_0010EE40;
    case 224u: goto L_0010EE78;
    case 225u: goto L_0010EEA0;
    case 226u: goto L_0010EEEC;
    case 227u: goto L_0010EF04;
    case 228u: goto L_0010EF80;
    case 229u: goto L_0010EFBC;
    case 230u: goto L_0010EFDC;
    case 231u: goto L_0010F010;
    case 232u: goto L_0010F034;
    case 233u: goto L_0010F080;
    case 234u: goto L_0010F098;
    case 235u: goto L_0010F0B4;
    case 236u: goto L_0010F0F8;
    case 237u: goto L_0010F108;
    case 238u: goto L_0010F16C;
    case 239u: goto L_0010F1AC;
    case 240u: goto L_0010F1D0;
    case 241u: goto L_0010F1E4;
    case 242u: goto L_0010F204;
    case 243u: goto L_0010F224;
    case 244u: goto L_0010F238;
    case 245u: goto L_0010F264;
    case 246u: goto L_0010F274;
    case 247u: goto L_0010F2B4;
    case 248u: goto L_0010F2D0;
    case 249u: goto L_0010F2DC;
    case 250u: goto L_0010F2F4;
    case 251u: goto L_0010F31C;
    case 252u: goto L_0010F334;
    case 253u: goto L_0010F344;
    case 254u: goto L_0010F354;
    case 255u: goto L_0010F364;
    case 256u: goto L_0010F390;
    case 257u: goto L_0010F3BC;
    case 258u: goto L_0010F3C8;
    case 259u: goto L_0010F3D8;
    case 260u: goto L_0010F448;
    case 261u: goto L_0010F4C0;
    case 262u: goto L_0010F50C;
    case 263u: goto L_0010F53C;
    case 264u: goto L_0010F588;
    case 265u: goto L_0010F594;
    case 266u: goto L_0010F5BC;
    case 267u: goto L_0010F5CC;
    case 268u: goto L_0010F5F4;
    case 269u: goto L_0010F608;
    case 270u: goto L_0010F668;
    case 271u: goto L_0010F674;
    case 272u: goto L_0010F69C;
    case 273u: goto L_0010F6AC;
    case 274u: goto L_0010F6D4;
    case 275u: goto L_0010F6E8;
    case 276u: goto L_0010F6FC;
    case 277u: goto L_0010F75C;
    case 278u: goto L_0010F790;
    case 279u: goto L_0010F7D0;
    case 280u: goto L_0010F7FC;
    case 281u: goto L_0010F828;
    case 282u: goto L_0010F890;
    case 283u: goto L_0010F8A8;
    case 284u: goto L_0010F8B8;
    case 285u: goto L_0010F8D0;
    case 286u: goto L_0010F8E0;
    case 287u: goto L_0010F928;
    case 288u: goto L_0010F940;
    case 289u: goto L_0010F964;
    case 290u: goto L_0010F9A4;
    case 291u: goto L_0010FA60;
    case 292u: goto L_0010FA84;
    case 293u: goto L_0010FAC8;
    case 294u: goto L_0010FB20;
    case 295u: goto L_0010FB80;
    case 296u: goto L_0010FB90;
    case 297u: goto L_0010FBB0;
    case 298u: goto L_0010FBD8;
    case 299u: goto L_0010FC14;
    case 300u: goto L_0010FC28;
    case 301u: goto L_0010FC4C;
    case 302u: goto L_0010FC98;
    case 303u: goto L_0010FCD0;
    case 304u: goto L_0010FD0C;
    case 305u: goto L_0010FD28;
    case 306u: goto L_0010FDA0;
    case 307u: goto L_0010FDC4;
    case 308u: goto L_0010FDEC;
    case 309u: goto L_0010FE38;
    case 310u: goto L_0010FE80;
    case 311u: goto L_0010FEA4;
    case 312u: goto L_0010FEE0;
    case 313u: goto L_0010FF2C;
    case 314u: goto L_0010FF48;
    case 315u: goto L_0010FF70;
    case 316u: goto L_0010FF94;
    case 317u: goto L_0010FFFC;
    default: bad_entry(c, 0x0010C000u); return;
    }
L_0010C000:
    c.budget -= 1;
L_0010C004:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], 0u + 1722u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C01Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010C01Cu) [[unlikely]] return; }
L_0010C01C:
    set32(c.r[4], 0u + 6u);
    st32((c.r[19].w[0] + 7700u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C038; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0010C038:
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C048u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010C048u) [[unlikely]] return; }
L_0010C048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C4F8; } }
L_0010C050:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C060u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C060u) [[unlikely]] return; }
L_0010C060:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BF90u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 434u, depth); } }
L_0010C06C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C0A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C090u);  if (depth < kMaxDepth) unit_0089(c, 20u, depth + 1u); else { c.pc = 0x00324568u; return; } if (c.pc != 0x0010C090u) [[unlikely]] return; }
L_0010C090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] - 31096u), 0u);
    st32((c.r[2].w[0] - 31100u), 0u);
    c.budget -= 4;
L_0010C0A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 1721u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010C328; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C22C; } }
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0D0u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C0D0u) [[unlikely]] return; }
L_0010C0D0:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0E4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010C0E4u) [[unlikely]] return; }
L_0010C0E4:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010C0F0u);  goto L_0010C0F4; }
L_0010C0F4:
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C15C; } }
L_0010C100:
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C130; } }
L_0010C11C:
    set32(c.r[2], ld32((c.r[7].w[0] + 128u)));
    set32(c.r[5], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_0010C130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C138u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010C138u) [[unlikely]] return; }
L_0010C138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31128u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C22C; } }
L_0010C148:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C158u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C158u) [[unlikely]] return; }
L_0010C158:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010C15C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C184; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C148u | kUnwind; return; } goto L_0010C148; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C148u | kUnwind; return; } goto L_0010C148; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_0010C184:
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C194u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C194u) [[unlikely]] return; }
L_0010C194:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C22C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0010C22C; } }
    c.r[21].d[0] = c.r[17].sd[0] < 76ll ? 1ull : 0ull;
    set32(c.r[30], 0u + 66u);
    c.r[17].d[0] = c.r[17].sd[0] < 51ll ? 1ull : 0ull;
    set32(c.r[23], 0u + 67u);
    c.budget -= 4;
L_0010C1B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010C208; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0010C208; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0010C208; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0010C22C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 234u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_0010C200; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C100u | kUnwind; return; } goto L_0010C100; } }
L_0010C200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C11Cu | kUnwind; return; } goto L_0010C11C; } }
L_0010C208:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C218u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C218u) [[unlikely]] return; }
L_0010C218:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C22C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C1B8u | kUnwind; return; } goto L_0010C1B8; } }
L_0010C22C:
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], 0u + 1721u);
    st32((c.r[4].w[0] - 31096u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] - 31100u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C258u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010C258u) [[unlikely]] return; }
L_0010C258:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC50D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[8], c.r[4].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 15032ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[6], 0u + 6u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46E20000u);
    c.r[1].d[0] = c.r[1].d[0] | 27136ull;
    c.f[2] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 132u), c.f[1]);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 136u), c.f[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 212u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 216u), 0u);
    st32((c.r[19].w[0] + 7700u), c.r[6].w[0]);
    c.budget -= 52;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C4FC; } }
L_0010C328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31096u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C4F8; } }
    set32(c.r[4], 0u + 1721u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C344u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010C344u) [[unlikely]] return; }
L_0010C344:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C364u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010C364u) [[unlikely]] return; }
L_0010C364:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010C378; } }
    st32((c.r[19].w[0] + 28u), 0u);
    c.budget -= 1;
L_0010C378:
    c.f[0] = ld32((c.r[30].w[0] - 31132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(301ll) ? 1ull : 0ull;
    st32((c.r[30].w[0] - 31132u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31128u)));
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[20].w[0] + 9872u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C3C8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C3C8u) [[unlikely]] return; }
L_0010C3C8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C410; } }
L_0010C3D4:
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C3F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010C3F0u) [[unlikely]] return; }
L_0010C3F0:
    st32((c.r[30].w[0] - 31128u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C4F8; } }
    c.budget -= 1;
L_0010C400:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C410u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C410u) [[unlikely]] return; }
L_0010C410:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C43C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C400u | kUnwind; return; } goto L_0010C400; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C400u | kUnwind; return; } goto L_0010C400; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0010C43C:
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C44Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C44Cu) [[unlikely]] return; }
L_0010C44C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C45Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010C45Cu) [[unlikely]] return; }
L_0010C45C:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010C468u);  goto L_0010C46C; }
L_0010C46C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C4F8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    c.r[17].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    set32(c.r[23], 0u + 32u);
    set32(c.r[22], 0u + 19u);
    set32(c.r[21], 0u + 66u);
    set32(c.r[19], 0u + 67u);
    c.budget -= 6;
L_0010C498:
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010C4D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_0010C4D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_0010C4D4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 234u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C3D4u | kUnwind; return; } goto L_0010C3D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C3D4u | kUnwind; return; } goto L_0010C3D4; } }
L_0010C4D4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4E4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C4E4u) [[unlikely]] return; }
L_0010C4E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C4F8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C498u | kUnwind; return; } goto L_0010C498; } }
L_0010C4F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010C4FC:
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
L_0010C538:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 1u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 9760u)));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 184u), c.f[23]);
    st32((c.r[29].w[0] + 176u), c.f[22]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0010C9AC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010C9AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C5B0u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C5B0u) [[unlikely]] return; }
L_0010C5B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010CAA4; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5210000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[23] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 15032ull;
    c.f[22] = c.r[1].w[0];
    set32(c.r[21], c.r[22].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46BA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52992ull;
    c.f[21] = c.r[1].w[0];
    set32(c.r[30], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], 0u + 13248u);
    set32(c.r[23], 0u + 211u);
    c.budget -= 17;
L_0010C600:
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010C870; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 234u)));
    set32(c.r[2], 0u + 65u);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 234u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010C768; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[22].w[0] + 14208u);
    set32(c.r[4], 0u + 1734u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0010C984; } }
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[5], 0u + 1734u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C658u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010C658u) [[unlikely]] return; }
L_0010C658:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 128u), c.f[23]);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 132u), c.f[22]);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 136u), c.f[21]);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 208u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 212u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 216u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st64((c.r[2].w[0] + 560u), c.r[30].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 60;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C74C; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0010C74C:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[23].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C984; } }
L_0010C768:
    set32(c.r[2], c.r[4].w[0] - 66u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C870; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[17], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010C984; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010C7A8u) [[unlikely]] return; }
L_0010C7A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[3], 0u + 66u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010C804; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010C7DC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[5], 0u + 1747u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7DCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010C7DCu) [[unlikely]] return; }
L_0010C7DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5790000u);
    c.r[1].d[0] = c.r[1].d[0] | 61440ull;
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46B00000u);
    c.r[1].d[0] = c.r[1].d[0] | 27136ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C840; } }
L_0010C804:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010C824; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[5], 0u + 1782u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C824u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010C824u) [[unlikely]] return; }
L_0010C824:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC33E0000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46B10000u);
    c.r[1].d[0] = c.r[1].d[0] | 26112ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 7;
L_0010C840:
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0] + 132u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 136u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C984; } }
L_0010C870:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C984; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010C984; } }
    set32(c.r[17], c.r[22].w[0] + 14208u);
    set32(c.r[18], 0u + 13248u);
    set32(c.r[4], c.r[17].w[0] + 13248u);
    set32(c.r[3], 0u + 1733u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0010C984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8B0u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x0010C8B0u) [[unlikely]] return; }
L_0010C8B0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[5], 0u + 1733u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8C4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010C8C4u) [[unlikely]] return; }
L_0010C8C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 128u), c.f[23]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
L_0010C8E0:
    st32((c.r[3].w[0] + 132u), c.f[22]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 136u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 148u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[23].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 208u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 212u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 216u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st64((c.r[2].w[0] + 560u), c.r[30].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st16((c.r[3].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st16((c.r[3].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.budget -= 41;
L_0010C984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C998u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010C998u) [[unlikely]] return; }
L_0010C998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C600u | kUnwind; return; } goto L_0010C600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010CAA4; } }
L_0010C9AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 1734u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0010CAB0; } }
    set32(c.r[4], 0u + 1734u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9E4u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010C9E4u) [[unlikely]] return; }
L_0010C9E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010CAA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA0Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010CA0Cu) [[unlikely]] return; }
L_0010CA0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010CA88; } }
    set32(c.r[17], 0u + 19u);
    c.budget -= 2;
L_0010CA20:
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010CA68; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 234u));
    set32(c.r[2], c.r[2].w[0] - 66u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010CA68; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010CA68; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010CA68u) [[unlikely]] return; }
L_0010CA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA7Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010CA7Cu) [[unlikely]] return; }
L_0010CA7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA20u | kUnwind; return; } goto L_0010CA20; } }
L_0010CA88:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010CAA4u) [[unlikely]] return; }
L_0010CAA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010CAB4; } }
L_0010CAB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010CAB4:
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
    c.f[23] = ld32((c.r[29].w[0] + 184u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CAF8:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[12], c.r[13].w[0] + 9760u);
    set32(c.r[2], c.r[2].w[0] - 15048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[11], ld32((c.r[12].w[0] + 592u)));
    st32((c.r[3].w[0] - 31140u), 0u);
    st32((c.r[4].w[0] - 31136u), 0u);
    st32((c.r[5].w[0] - 31132u), 0u);
    st32((c.r[6].w[0] - 31128u), 0u);
    st32((c.r[7].w[0] - 31104u), 0u);
    st32((c.r[8].w[0] - 31100u), 0u);
    st32((c.r[9].w[0] - 31096u), 0u);
    st32((c.r[10].w[0] - 31092u), 0u);
    st32((c.r[12].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0010CB5C; } }
    st32((c.r[13].w[0] + 9760u), 0u);
    c.budget -= 1;
L_0010CB5C:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[12].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[12].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[12].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[12].w[0] + 108u), 0u);
    st32((c.r[12].w[0] + 56u), 0u);
    st32((c.r[12].w[0] + 60u), 0u);
    st32((c.r[12].w[0] + 64u), 0u);
    st32((c.r[12].w[0] + 68u), 0u);
    st32((c.r[12].w[0] + 72u), 0u);
    st32((c.r[12].w[0] + 76u), 0u);
    st32((c.r[12].w[0] + 24u), 0u);
    st32((c.r[12].w[0] + 28u), 0u);
    st32((c.r[12].w[0] + 92u), 0u);
    st32((c.r[12].w[0] + 32u), 0u);
    st32((c.r[12].w[0] + 96u), 0u);
    st32((c.r[12].w[0] + 36u), 0u);
    st32((c.r[12].w[0] + 100u), 0u);
    st32((c.r[12].w[0] + 40u), 0u);
    st32((c.r[12].w[0] + 44u), 0u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CBC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0010CC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC18u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010CC18u) [[unlikely]] return; }
L_0010CC18:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010CC40; } }
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 1;
L_0010CC40:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010D168; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0010D16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC70u);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EB990u; return; } if (c.pc != 0x0010CC70u) [[unlikely]] return; }
L_0010CC70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010CF70; } }
    set32(c.r[4], c.r[19].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC84u);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EB990u; return; } if (c.pc != 0x0010CC84u) [[unlikely]] return; }
L_0010CC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010CF70; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[17], 0u + 1814u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0010CCB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 5;
L_0010CCB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0010CCF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5500000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46C40000u);
    c.r[1].d[0] = c.r[1].d[0] | 5632ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 148u), c.f[1]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D16C; } }
L_0010CCF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0010CD34; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[18].w[0] + 10090u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD20u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0010CD20u) [[unlikely]] return; }
L_0010CD20:
    st32((c.r[16].w[0] + 496u), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 7700u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D16C; } }
L_0010CD34:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD40u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010CD40u) [[unlikely]] return; }
L_0010CD40:
    set32(c.r[6], c.r[2].w[0] - 2u);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1810u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010CDD4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010CDD4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD70u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0010CD70u) [[unlikely]] return; }
L_0010CD70:
    set32(c.r[3], 0u + 1811u);
    set32(c.r[5], 0u + 19u);
    st32((c.r[2].w[0] + 676u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010CD94u) [[unlikely]] return; }
L_0010CD94:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDA4u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010CDA4u) [[unlikely]] return; }
L_0010CDA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC56A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 28672ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] - 13116u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D16C; } }
L_0010CDD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010CF10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1201ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010D168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 5008u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010D168; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] - 31128u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010CE1C; } }
    st32((c.r[4].w[0] - 31128u), 0u);
    c.budget -= 1;
L_0010CE1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010CE30; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0010CE30:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 1812u);
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[20].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE50u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010CE50u) [[unlikely]] return; }
L_0010CE50:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010CE98u) [[unlikely]] return; }
L_0010CE98:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44A80000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[1] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46EE0000u);
    c.r[1].d[0] = c.r[1].d[0] | 44032ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 132u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 136u), c.f[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF08u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010CF08u) [[unlikely]] return; }
L_0010CF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D168; } }
L_0010CF10:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0010CF34; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0010CF7C; } }
L_0010CF34:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1805u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010D168; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010D168; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 29u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010CF70u) [[unlikely]] return; }
L_0010CF70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D16C; } }
L_0010CF7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0010CFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010CFB4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
L_0010CFB4:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[19], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0010CFD0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010D168; } }
L_0010CFD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[20].w[0] + 14208u);
    set32(c.r[4], 0u + 1805u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[5], 0u + 1805u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D008u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010D008u) [[unlikely]] return; }
L_0010D008:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5AF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 63898ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[1] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46D90000u);
    c.r[1].d[0] = c.r[1].d[0] | 13056ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 208u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 212u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 216u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 132u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 136u), c.f[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st64((c.r[2].w[0] + 560u), c.r[4].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 75;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0010D150; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
L_0010D150:
    set32(c.r[2], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF70u | kUnwind; return; } goto L_0010CF70; } }
L_0010D168:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010D16C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[4].w[0] + 10360u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 13376u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 592u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010D1C8; } }
    st32((c.r[4].w[0] + 10360u), 0u);
    c.budget -= 1;
L_0010D1C8:
    set32(c.r[6], 0u + 64u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 31088u);
    st32((c.r[18].w[0] + 88u), c.r[6].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[17], 0u + 8u);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 64u), 0u);
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D224u);  if (depth < kMaxDepth) unit_0064(c, 84u, depth + 1u); else { c.pc = 0x00291A10u; return; } if (c.pc != 0x0010D224u) [[unlikely]] return; }
L_0010D224:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D238u);  if (depth < kMaxDepth) unit_0064(c, 85u, depth + 1u); else { c.pc = 0x00291A30u; return; } if (c.pc != 0x0010D238u) [[unlikely]] return; }
L_0010D238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D24Cu);  if (depth < kMaxDepth) unit_0064(c, 86u, depth + 1u); else { c.pc = 0x00291A48u; return; } if (c.pc != 0x0010D24Cu) [[unlikely]] return; }
L_0010D24C:
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 96u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st32((c.r[18].w[0] + 28u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 11;
L_0010D278:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 20u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D278u | kUnwind; return; } goto L_0010D278; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D2B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0010D330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D308u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010D308u) [[unlikely]] return; }
L_0010D308:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010D330; } }
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 1;
L_0010D330:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010D7B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D354u);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EB990u; return; } if (c.pc != 0x0010D354u) [[unlikely]] return; }
L_0010D354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010D5BC; } }
    set32(c.r[4], c.r[17].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D368u);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EB990u; return; } if (c.pc != 0x0010D368u) [[unlikely]] return; }
L_0010D368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010D5BC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1773u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010D410; } }
    set32(c.r[4], 0u + 1773u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D38Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010D38Cu) [[unlikely]] return; }
L_0010D38C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010D410; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3ACu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0010D3ACu) [[unlikely]] return; }
L_0010D3AC:
    set32(c.r[3], 0u + 1774u);
    set32(c.r[5], 0u + 19u);
    st32((c.r[2].w[0] + 672u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D3D0u) [[unlikely]] return; }
L_0010D3D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3E0u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010D3E0u) [[unlikely]] return; }
L_0010D3E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 14336ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] - 13116u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D7B8; } }
L_0010D410:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010D54C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1201ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010D7B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 5008u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010D7B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] - 31128u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010D458; } }
    st32((c.r[4].w[0] - 31128u), 0u);
    c.budget -= 1;
L_0010D458:
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010D46C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0010D46C:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 1775u);
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[20].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D48Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010D48Cu) [[unlikely]] return; }
L_0010D48C:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D4D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D4D4u) [[unlikely]] return; }
L_0010D4D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5C40000u);
    c.r[1].d[0] = c.r[1].d[0] | 6963ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[1] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46CF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 55808ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 132u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 136u), c.f[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D544u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010D544u) [[unlikely]] return; }
L_0010D544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D7B4; } }
L_0010D54C:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0010D570; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0010D5C8; } }
L_0010D570:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1768u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010D7B4; } }
    set32(c.r[4], 0u + 1768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D58Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010D58Cu) [[unlikely]] return; }
L_0010D58C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010D7B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 27u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D5BCu) [[unlikely]] return; }
L_0010D5BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D7B8; } }
L_0010D5C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0010D600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010D600; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
L_0010D600:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[19], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0010D61C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010D7B4; } }
L_0010D61C:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[20].w[0] + 14208u);
    set32(c.r[4], 0u + 1768u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[5], 0u + 1768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D654u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010D654u) [[unlikely]] return; }
L_0010D654:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44270000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[1] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46D70000u);
    c.r[1].d[0] = c.r[1].d[0] | 18688ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 132u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 136u), c.f[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 208u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 212u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 216u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st64((c.r[2].w[0] + 560u), c.r[4].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 75;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0010D79C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
L_0010D79C:
    set32(c.r[2], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5BCu | kUnwind; return; } goto L_0010D5BC; } }
L_0010D7B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010D7B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D7E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[4].w[0] + 10960u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 11600u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 592u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010D81C; } }
    st32((c.r[4].w[0] + 10960u), 0u);
    c.budget -= 1;
L_0010D81C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 64u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 31048u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), 0u);
    set32(c.r[18], 0u + 8u);
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 68u), 0u);
    st32((c.r[19].w[0] + 72u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 84u), 0u);
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D878u);  if (depth < kMaxDepth) unit_0064(c, 84u, depth + 1u); else { c.pc = 0x00291A10u; return; } if (c.pc != 0x0010D878u) [[unlikely]] return; }
L_0010D878:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D88Cu);  if (depth < kMaxDepth) unit_0064(c, 85u, depth + 1u); else { c.pc = 0x00291A30u; return; } if (c.pc != 0x0010D88Cu) [[unlikely]] return; }
L_0010D88C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8A0u);  if (depth < kMaxDepth) unit_0064(c, 86u, depth + 1u); else { c.pc = 0x00291A48u; return; } if (c.pc != 0x0010D8A0u) [[unlikely]] return; }
L_0010D8A0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 148u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st32((c.r[19].w[0] + 96u), c.r[18].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 92u), 0u);
    st32((c.r[19].w[0] + 32u), 0u);
    st32((c.r[19].w[0] + 36u), 0u);
    st32((c.r[19].w[0] + 100u), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 116u), c.r[17].w[0]);
    c.budget -= 14;
L_0010D8D8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 20u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D8D8u | kUnwind; return; } goto L_0010D8D8; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010DA24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010DA04; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 9712u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D94Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010D94Cu) [[unlikely]] return; }
L_0010D94C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15264u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D964u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0010D964u) [[unlikely]] return; }
L_0010D964:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 9728u);
    set32(c.r[2], c.r[2].w[0] - 15192u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D980u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010D980u) [[unlikely]] return; }
L_0010D980:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15248u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D998u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0010D998u) [[unlikely]] return; }
L_0010D998:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 9744u);
    set32(c.r[2], c.r[2].w[0] - 15216u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9B4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010D9B4u) [[unlikely]] return; }
L_0010D9B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15232u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9CCu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0010D9CCu) [[unlikely]] return; }
L_0010D9CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9DCu);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010D9DCu) [[unlikely]] return; }
L_0010D9DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 10360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9ECu);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010D9ECu) [[unlikely]] return; }
L_0010D9EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 10960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9FCu);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010D9FCu) [[unlikely]] return; }
L_0010D9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010DA24; } }
L_0010DA04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 11556u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 10356u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 10956u), c.r[2].w[0]);
    c.budget -= 8;
L_0010DA24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DA38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[3], 0u + 195u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0010DA6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 31132u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DA6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] - 31132u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010DA98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[2].w[0] - 31144u));
    fpu_div(c, 2u, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010DAD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 100u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
L_0010DAD8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DAE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010DB40; } }
L_0010DB10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010DB40; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] - 26u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010DB40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010DB60; } }
L_0010DB40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB50u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010DB50u) [[unlikely]] return; }
L_0010DB50:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB10u | kUnwind; return; } goto L_0010DB10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DB60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DB78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31124u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31124u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 12584u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010DBD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBC4u);  if (depth < kMaxDepth) unit_001B(c, 295u, depth + 1u); else { c.pc = 0x0016FCB8u; return; } if (c.pc != 0x0010DBC4u) [[unlikely]] return; }
L_0010DBC4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010DBD8; } }
L_0010DBD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DBD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DBE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DBF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DC08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    set32(c.r[16], ld32((c.r[5].w[0] + 16u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC44u);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x0010DC44u) [[unlikely]] return; }
L_0010DC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010DD08; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC58u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0010DC58u) [[unlikely]] return; }
L_0010DC58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC6Cu);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0010DC6Cu) [[unlikely]] return; }
L_0010DC6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] - 31124u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] - 31124u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010DD08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010DD08; } }
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 5548u)));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010DCEC; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010DCEC; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010DCEC; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010DCEC; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0010DD08; } }
L_0010DCEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31140u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 31136u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010DD0C; } }
L_0010DD08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DD0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DD28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
L_0010DD40:
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD4Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010DD4Cu) [[unlikely]] return; }
L_0010DD4C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0010DDA0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DD40u | kUnwind; return; } goto L_0010DD40; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DD40u | kUnwind; return; } goto L_0010DD40; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 228u)));
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 1724u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0010DDA4; } }
L_0010DDA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DDA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DDB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010DDD4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DDD4:
    st32((c.r[3].w[0] - 31104u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DDE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE00u);  if (depth < kMaxDepth) unit_0003(c, 89u, depth + 1u); else { c.pc = 0x0010D910u; return; } if (c.pc != 0x0010DE00u) [[unlikely]] return; }
L_0010DE00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE28u);  if (depth < kMaxDepth) unit_0003(c, 89u, depth + 1u); else { c.pc = 0x0010D910u; return; } if (c.pc != 0x0010DE28u) [[unlikely]] return; }
L_0010DE28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DE38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 6u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 11584u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0010DF90; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[19], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[18], c.r[3].w[0] + 14208u);
    set32(c.r[4], 0u + 1849u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0] + 10090u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 496u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0010DED0; } }
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[5], 0u + 1849u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEC8u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010DEC8u) [[unlikely]] return; }
L_0010DEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010DF04; } }
L_0010DED0:
    set32(c.r[4], 0u + 1849u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEDCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010DEDCu) [[unlikely]] return; }
L_0010DEDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010DF04; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 5;
L_0010DF04:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    set32(c.r[7], c.r[20].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46E40000u);
    c.r[1].d[0] = c.r[1].d[0] | 59392ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 132u), c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 136u), c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 148u), c.f[3]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010DF94; } }
L_0010DF90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010DF94:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DFB8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 8648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[22], c.r[21].w[0] + 11584u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] - 29616u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 4u);
    st32((c.r[22].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E018u);  if (depth < kMaxDepth) unit_0064(c, 86u, depth + 1u); else { c.pc = 0x00291A48u; return; } if (c.pc != 0x0010E018u) [[unlikely]] return; }
L_0010E018:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 29568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E034u);  if (depth < kMaxDepth) unit_0064(c, 89u, depth + 1u); else { c.pc = 0x00291A78u; return; } if (c.pc != 0x0010E034u) [[unlikely]] return; }
L_0010E034:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E048u);  if (depth < kMaxDepth) unit_0064(c, 89u, depth + 1u); else { c.pc = 0x00291A78u; return; } if (c.pc != 0x0010E048u) [[unlikely]] return; }
L_0010E048:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E05Cu);  if (depth < kMaxDepth) unit_0064(c, 89u, depth + 1u); else { c.pc = 0x00291A78u; return; } if (c.pc != 0x0010E05Cu) [[unlikely]] return; }
L_0010E05C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E070u);  if (depth < kMaxDepth) unit_0064(c, 89u, depth + 1u); else { c.pc = 0x00291A78u; return; } if (c.pc != 0x0010E070u) [[unlikely]] return; }
L_0010E070:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 64u);
    set32(c.r[16], c.r[16].w[0] - 29752u);
    st32((c.r[22].w[0] + 88u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[22].w[0] + 24u), c.r[20].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E09Cu);  if (depth < kMaxDepth) unit_0064(c, 84u, depth + 1u); else { c.pc = 0x00291A10u; return; } if (c.pc != 0x0010E09Cu) [[unlikely]] return; }
L_0010E09C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E0B0u);  if (depth < kMaxDepth) unit_0064(c, 85u, depth + 1u); else { c.pc = 0x00291A30u; return; } if (c.pc != 0x0010E0B0u) [[unlikely]] return; }
L_0010E0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 192u);
    set32(c.r[23], c.r[2].w[0] - 29880u);
    st32((c.r[22].w[0] + 92u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[22].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E0DCu);  if (depth < kMaxDepth) unit_0064(c, 91u, depth + 1u); else { c.pc = 0x00291AA0u; return; } if (c.pc != 0x0010E0DCu) [[unlikely]] return; }
L_0010E0DC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E0F0u);  if (depth < kMaxDepth) unit_0064(c, 92u, depth + 1u); else { c.pc = 0x00291AC0u; return; } if (c.pc != 0x0010E0F0u) [[unlikely]] return; }
L_0010E0F0:
    set32(c.r[7], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E108u);  if (depth < kMaxDepth) unit_0064(c, 84u, depth + 1u); else { c.pc = 0x00291A10u; return; } if (c.pc != 0x0010E108u) [[unlikely]] return; }
L_0010E108:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E11Cu);  if (depth < kMaxDepth) unit_0064(c, 85u, depth + 1u); else { c.pc = 0x00291A30u; return; } if (c.pc != 0x0010E11Cu) [[unlikely]] return; }
L_0010E11C:
    set32(c.r[7], c.r[16].w[0] + 40u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[22].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[22].w[0] + 96u), c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E13Cu);  if (depth < kMaxDepth) unit_0064(c, 84u, depth + 1u); else { c.pc = 0x00291A10u; return; } if (c.pc != 0x0010E13Cu) [[unlikely]] return; }
L_0010E13C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E150u);  if (depth < kMaxDepth) unit_0064(c, 85u, depth + 1u); else { c.pc = 0x00291A30u; return; } if (c.pc != 0x0010E150u) [[unlikely]] return; }
L_0010E150:
    set32(c.r[7], c.r[23].w[0] + 32u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E168u);  if (depth < kMaxDepth) unit_0064(c, 91u, depth + 1u); else { c.pc = 0x00291AA0u; return; } if (c.pc != 0x0010E168u) [[unlikely]] return; }
L_0010E168:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E17Cu);  if (depth < kMaxDepth) unit_0064(c, 92u, depth + 1u); else { c.pc = 0x00291AC0u; return; } if (c.pc != 0x0010E17Cu) [[unlikely]] return; }
L_0010E17C:
    set32(c.r[2], 0u + 7u);
    set32(c.r[7], c.r[23].w[0] + 64u);
    st32((c.r[22].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    st32((c.r[22].w[0] + 100u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1A0u);  if (depth < kMaxDepth) unit_0064(c, 91u, depth + 1u); else { c.pc = 0x00291AA0u; return; } if (c.pc != 0x0010E1A0u) [[unlikely]] return; }
L_0010E1A0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1B4u);  if (depth < kMaxDepth) unit_0064(c, 92u, depth + 1u); else { c.pc = 0x00291AC0u; return; } if (c.pc != 0x0010E1B4u) [[unlikely]] return; }
L_0010E1B4:
    set32(c.r[7], c.r[16].w[0] + 60u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1CCu);  if (depth < kMaxDepth) unit_0064(c, 84u, depth + 1u); else { c.pc = 0x00291A10u; return; } if (c.pc != 0x0010E1CCu) [[unlikely]] return; }
L_0010E1CC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1E0u);  if (depth < kMaxDepth) unit_0064(c, 85u, depth + 1u); else { c.pc = 0x00291A30u; return; } if (c.pc != 0x0010E1E0u) [[unlikely]] return; }
L_0010E1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 29648u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E200u);  if (depth < kMaxDepth) unit_0064(c, 95u, depth + 1u); else { c.pc = 0x00291B10u; return; } if (c.pc != 0x0010E200u) [[unlikely]] return; }
L_0010E200:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E214u);  if (depth < kMaxDepth) unit_0064(c, 96u, depth + 1u); else { c.pc = 0x00291B30u; return; } if (c.pc != 0x0010E214u) [[unlikely]] return; }
L_0010E214:
    set32(c.r[2], ld32((c.r[22].w[0] + 592u)));
    st32((c.r[22].w[0] + 64u), c.r[20].w[0]);
    st32((c.r[22].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[22].w[0] + 40u), 0u);
    st32((c.r[22].w[0] + 104u), c.r[17].w[0]);
    st32((c.r[22].w[0] + 60u), 0u);
    st32((c.r[22].w[0] + 68u), c.r[17].w[0]);
    st32((c.r[22].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E240; } }
    st32((c.r[21].w[0] + 11584u), 0u);
    c.budget -= 1;
L_0010E240:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[22].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[23].w[0] + 104u);
    c.budget -= 6;
L_0010E258:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E258u | kUnwind; return; } goto L_0010E258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] - 29752u);
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.budget -= 4;
L_0010E280:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 20u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E280u | kUnwind; return; } goto L_0010E280; } }
    set32(c.r[3], c.r[21].w[0] + 11584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[2], c.r[2].w[0] - 7376u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010E31C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010E30C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 11584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E304u);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010E304u) [[unlikely]] return; }
L_0010E304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E31C; } }
L_0010E30C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st32((c.r[3].w[0] + 12180u), c.r[2].w[0]);
    c.budget -= 4;
L_0010E31C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E350u);  if (depth < kMaxDepth) unit_0003(c, 152u, depth + 1u); else { c.pc = 0x0010E2D8u; return; } if (c.pc != 0x0010E350u) [[unlikely]] return; }
L_0010E350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E378u);  if (depth < kMaxDepth) unit_0003(c, 152u, depth + 1u); else { c.pc = 0x0010E2D8u; return; } if (c.pc != 0x0010E378u) [[unlikely]] return; }
L_0010E378:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 12184u);
    set32(c.r[2], ld32((c.r[5].w[0] + 592u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E3A0; } }
    st32((c.r[3].w[0] + 12184u), 0u);
    c.budget -= 1;
L_0010E3A0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 96u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 56u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    st32((c.r[5].w[0] + 92u), 0u);
    st32((c.r[5].w[0] + 32u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010E424; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010E414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 12184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E40Cu);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010E40Cu) [[unlikely]] return; }
L_0010E40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E424; } }
L_0010E414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st32((c.r[3].w[0] + 12780u), c.r[2].w[0]);
    c.budget -= 4;
L_0010E424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E450u);  if (depth < kMaxDepth) unit_0003(c, 160u, depth + 1u); else { c.pc = 0x0010E3E0u; return; } if (c.pc != 0x0010E450u) [[unlikely]] return; }
L_0010E450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E478u);  if (depth < kMaxDepth) unit_0003(c, 160u, depth + 1u); else { c.pc = 0x0010E3E0u; return; } if (c.pc != 0x0010E478u) [[unlikely]] return; }
L_0010E478:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E488:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0010E714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8328u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0010E5B8; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E4FCu);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0010E4FCu) [[unlikely]] return; }
L_0010E4FC:
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E514u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0010E514u) [[unlikely]] return; }
L_0010E514:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E52Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0010E52Cu) [[unlikely]] return; }
L_0010E52C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E53Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0010E53Cu) [[unlikely]] return; }
L_0010E53C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E558u);  if (depth < kMaxDepth) unit_0061(c, 285u, depth + 1u); else { c.pc = 0x00286BA8u; return; } if (c.pc != 0x0010E558u) [[unlikely]] return; }
L_0010E558:
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E56Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0010E56Cu) [[unlikely]] return; }
L_0010E56C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E57Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0010E57Cu) [[unlikely]] return; }
L_0010E57C:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E598u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E598u) [[unlikely]] return; }
L_0010E598:
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5ACu);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010E5ACu) [[unlikely]] return; }
L_0010E5AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E714; } }
L_0010E5B8:
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5ACu | kUnwind; return; } goto L_0010E5AC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5ACu | kUnwind; return; } goto L_0010E5AC; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5ACu | kUnwind; return; } goto L_0010E5AC; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5ACu | kUnwind; return; } goto L_0010E5AC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5ACu | kUnwind; return; } goto L_0010E5AC; } }
    set32(c.r[16], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0010E618; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[5], 0u + 137u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E618u);  if (depth < kMaxDepth) unit_0068(c, 303u, depth + 1u); else { c.pc = 0x002A3C78u; return; } if (c.pc != 0x0010E618u) [[unlikely]] return; }
L_0010E618:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 1263u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010E688; } }
    set32(c.r[4], 0u + 1263u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E634u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010E634u) [[unlikely]] return; }
L_0010E634:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E688; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], 0u + 1279u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E660u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010E660u) [[unlikely]] return; }
L_0010E660:
    st32((c.r[19].w[0] + 7700u), c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E680u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E680u) [[unlikely]] return; }
L_0010E680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5ACu | kUnwind; return; } goto L_0010E5AC; } }
L_0010E688:
    set32(c.r[17], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 520u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0010E6A0u) [[unlikely]] return; }
L_0010E6A0:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[18].w[0] + 432u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6B8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0010E6B8u) [[unlikely]] return; }
L_0010E6B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6C8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0010E6C8u) [[unlikely]] return; }
L_0010E6C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[2].w[0] + 948u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6E0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0010E6E0u) [[unlikely]] return; }
L_0010E6E0:
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 52u));
    c.f[5] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    st32((c.r[19].w[0] + 128u), c.f[2]);
    st32((c.r[19].w[0] + 132u), c.f[0]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    c.budget -= 13;
L_0010E714:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E738:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 13248u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 6u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0010E7D0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[2], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] - 4440u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 616u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0010E7C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0010E7C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0010E7D0; } }
L_0010E7C8:
    set32(c.r[2], 0u + 105u);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 2;
L_0010E7D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010EC70; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7E4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0010E7E4u) [[unlikely]] return; }
L_0010E7E4:
    set32(c.r[3], ld32((c.r[2].w[0] + 824u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010ED38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EC70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E814u);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0010E814u) [[unlikely]] return; }
L_0010E814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EC70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 11188u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010E854; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010EC70; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010EC70; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010EC70; } }
L_0010E854:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E864u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0010E864u) [[unlikely]] return; }
L_0010E864:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E874u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010E874u) [[unlikely]] return; }
L_0010E874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E884u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010E884u) [[unlikely]] return; }
L_0010E884:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E8A0u) [[unlikely]] return; }
L_0010E8A0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8B0u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0010E8B0u) [[unlikely]] return; }
L_0010E8B0:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8D8u);  if (depth < kMaxDepth) unit_0061(c, 253u, depth + 1u); else { c.pc = 0x002867B8u; return; } if (c.pc != 0x0010E8D8u) [[unlikely]] return; }
L_0010E8D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.f[21] = c.f[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E90C; } }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E904u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0010E904u) [[unlikely]] return; }
L_0010E904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E91C; } }
L_0010E90C:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E91Cu);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010E91Cu) [[unlikely]] return; }
L_0010E91C:
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 160u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.f[22] = c.f[0];
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010E974; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010E974; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E974u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010E974u) [[unlikely]] return; }
L_0010E974:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E98Cu);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010E98Cu) [[unlikely]] return; }
L_0010E98C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E998u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0010E998u) [[unlikely]] return; }
L_0010E998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010E9BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010ED34; } }
L_0010E9BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9CCu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0010E9CCu) [[unlikely]] return; }
L_0010E9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E9E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E9F4; } }
L_0010E9E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9F4u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0010E9F4u) [[unlikely]] return; }
L_0010E9F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EA10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA10u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010EA10u) [[unlikely]] return; }
L_0010EA10:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010EA28u) [[unlikely]] return; }
L_0010EA28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA44u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0010EA44u) [[unlikely]] return; }
L_0010EA44:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0010EA90; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], 0u + 900u);
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[7], 0u + 180u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA6Cu);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0010EA6Cu) [[unlikely]] return; }
L_0010EA6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EA90; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA88u);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0010EA88u) [[unlikely]] return; }
L_0010EA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EC40; } }
L_0010EA90:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EB84; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EAB0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010EAB0u) [[unlikely]] return; }
L_0010EAB0:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010EABCu);  goto L_0010EAC0; }
L_0010EAC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 838u)));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EB84; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 352u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EB84; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EB10; } }
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB08u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0010EB08u) [[unlikely]] return; }
L_0010EB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EB20; } }
L_0010EB10:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB20u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010EB20u) [[unlikely]] return; }
L_0010EB20:
    c.f[1] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4A180000u);
    c.r[1].d[0] = c.r[1].d[0] | 38528ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010EB84; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010EB84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010EB84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB84u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010EB84u) [[unlikely]] return; }
L_0010EB84:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB90u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010EB90u) [[unlikely]] return; }
L_0010EB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EC70; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0010ED30; } }
    set32(c.r[2], c.r[17].w[0] - 147u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010ED34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 138u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EBCCu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0010EBCCu) [[unlikely]] return; }
L_0010EBCC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010EBEC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 21u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EC5C; } }
L_0010EBEC:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010ECD4; } }
    set32(c.r[17], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_0010ECD4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], 0u + 900u);
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[7], 0u + 180u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC1Cu);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0010EC1Cu) [[unlikely]] return; }
L_0010EC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010ED34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC38u);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0010EC38u) [[unlikely]] return; }
L_0010EC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EC7C; } }
L_0010EC40:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC50u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0010EC50u) [[unlikely]] return; }
L_0010EC50:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
L_0010EC5C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010EC70u) [[unlikely]] return; }
L_0010EC70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010ED38; } }
L_0010EC7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 145u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC94u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0010EC94u) [[unlikely]] return; }
L_0010EC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010ED34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECACu);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0010ECACu) [[unlikely]] return; }
L_0010ECAC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010ECCCu) [[unlikely]] return; }
L_0010ECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010ED34; } }
L_0010ECD4:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010ED24; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0010ED34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010ED08u) [[unlikely]] return; }
L_0010ED08:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED18u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0010ED18u) [[unlikely]] return; }
L_0010ED18:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EC70u | kUnwind; return; } goto L_0010EC70; } }
L_0010ED24:
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010ED34; } }
L_0010ED30:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_0010ED34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010ED38:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010ED60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010EDB4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0010EDB4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EDACu);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010EDACu) [[unlikely]] return; }
L_0010EDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EDC0; } }
L_0010EDB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EE84; } }
L_0010EDC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010EE00; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] - 863u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EE34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10520u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0010EE34; } }
    set32(c.r[2], 0u + 862u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010EE34; } }
L_0010EE00:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 863u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE18u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010EE18u) [[unlikely]] return; }
L_0010EE18:
    set32(c.r[4], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 7700u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EE84; } }
L_0010EE34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE40u);  if (depth < kMaxDepth) unit_0003(c, 184u, depth + 1u); else { c.pc = 0x0010E738u; return; } if (c.pc != 0x0010EE40u) [[unlikely]] return; }
L_0010EE40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010EE60; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EE84; } }
L_0010EE60:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 864u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE78u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010EE78u) [[unlikely]] return; }
L_0010EE78:
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 3;
L_0010EE84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010EEA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0010F300; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F300; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F300; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEECu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0010EEECu) [[unlikely]] return; }
L_0010EEEC:
    set32(c.r[3], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010F300; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF04u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010EF04u) [[unlikely]] return; }
L_0010EF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F300; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 11188u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0010EF64; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010F300; } }
    set32(c.r[2], 0u + 212u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010F300; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010F300; } }
L_0010EF64:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010EF80u) [[unlikely]] return; }
L_0010EF80:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[17].w[0] + 14208u);
    set32(c.r[6], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0010EFC4; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFBCu);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0010EFBCu) [[unlikely]] return; }
L_0010EFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F334; } }
L_0010EFC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 29088u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFDCu);  if (depth < kMaxDepth) unit_0063(c, 333u, depth + 1u); else { c.pc = 0x0028EF18u; return; } if (c.pc != 0x0010EFDCu) [[unlikely]] return; }
L_0010EFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EFF0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F0A8; } }
L_0010EFF0:
    set32(c.r[2], ld32((c.r[19].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F010; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F010u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0010F010u) [[unlikely]] return; }
L_0010F010:
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F050; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F050; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F034u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0010F034u) [[unlikely]] return; }
L_0010F034:
    set32(c.r[3], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 784u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 192u));
    c.r[4].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0010F368; } }
L_0010F050:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 594u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 594u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0010F074; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0] + 594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F368; } }
L_0010F074:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F080u);  if (depth < kMaxDepth) unit_0061(c, 227u, depth + 1u); else { c.pc = 0x00286450u; return; } if (c.pc != 0x0010F080u) [[unlikely]] return; }
L_0010F080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F300; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F098u);  if (depth < kMaxDepth) unit_0062(c, 146u, depth + 1u); else { c.pc = 0x0028A308u; return; } if (c.pc != 0x0010F098u) [[unlikely]] return; }
L_0010F098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F2FC; } }
L_0010F0A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0B4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010F0B4u) [[unlikely]] return; }
L_0010F0B4:
    set32(c.r[3], 0u + 100u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010F0C4u);  goto L_0010F0C8; }
L_0010F0C8:
    set32(c.r[2], ld32((c.r[5].w[0] - 29084u)));
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010F22C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F100; } }
    c.budget -= 1;
L_0010F0F8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.budget -= 2;
L_0010F100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F108u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010F108u) [[unlikely]] return; }
L_0010F108:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010F154; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F0F8u | kUnwind; return; } goto L_0010F0F8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F0F8u | kUnwind; return; } goto L_0010F0F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[17].w[0] + 14208u);
    set32(c.r[5], 0u + 1085u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F0F8u | kUnwind; return; } goto L_0010F0F8; } }
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0010F154:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0010F22C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F16Cu);  if (depth < kMaxDepth) unit_0061(c, 253u, depth + 1u); else { c.pc = 0x002867B8u; return; } if (c.pc != 0x0010F16Cu) [[unlikely]] return; }
L_0010F16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010F20C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], 0u + 560u);
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[17].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[16], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1ACu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F1ACu) [[unlikely]] return; }
L_0010F1AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1D0u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010F1D0u) [[unlikely]] return; }
L_0010F1D0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 228u)));
    set32(c.r[5], 0u + 1086u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1E4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F1E4u) [[unlikely]] return; }
L_0010F1E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 228u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F204u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010F204u) [[unlikely]] return; }
L_0010F204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F300; } }
L_0010F20C:
    c.f[12] = ld32((c.r[19].w[0] + 548u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[6], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F224u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0010F224u) [[unlikely]] return; }
L_0010F224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F300; } }
L_0010F22C:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F238u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010F238u) [[unlikely]] return; }
L_0010F238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F264; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F264; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[6], 0u + 10u);
    c.f[12] = ld32((c.r[19].w[0] + 548u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F264u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0010F264u) [[unlikely]] return; }
L_0010F264:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F274u);  if (depth < kMaxDepth) unit_0069(c, 69u, depth + 1u); else { c.pc = 0x002A4FC8u; return; } if (c.pc != 0x0010F274u) [[unlikely]] return; }
L_0010F274:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_0010F300; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010F300; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2B4u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0010F2B4u) [[unlikely]] return; }
L_0010F2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0010F30C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2D0u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0010F2D0u) [[unlikely]] return; }
L_0010F2D0:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2DCu);  if (depth < kMaxDepth) unit_0061(c, 227u, depth + 1u); else { c.pc = 0x00286450u; return; } if (c.pc != 0x0010F2DCu) [[unlikely]] return; }
L_0010F2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F30C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2F4u);  if (depth < kMaxDepth) unit_0062(c, 146u, depth + 1u); else { c.pc = 0x0028A308u; return; } if (c.pc != 0x0010F2F4u) [[unlikely]] return; }
L_0010F2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F30C; } }
L_0010F2FC:
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 1;
L_0010F300:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F368; } }
L_0010F30C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F31Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0010F31Cu) [[unlikely]] return; }
L_0010F31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F334; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F334u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010F334u) [[unlikely]] return; }
L_0010F334:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F344u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0010F344u) [[unlikely]] return; }
L_0010F344:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F354u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010F354u) [[unlikely]] return; }
L_0010F354:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F364u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010F364u) [[unlikely]] return; }
L_0010F364:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010F368:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F3BCu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010F3BCu) [[unlikely]] return; }
L_0010F3BC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F3D8; } }
L_0010F3C8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F3D8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010F3D8u) [[unlikely]] return; }
L_0010F3D8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010F428; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F3C8u | kUnwind; return; } goto L_0010F3C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F3C8u | kUnwind; return; } goto L_0010F3C8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1085u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F3C8u | kUnwind; return; } goto L_0010F3C8; } }
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0010F428:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F448:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 13248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12784u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0010F79C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 1559u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010F4B4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[7].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 2;
L_0010F4B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4C0u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010F4C0u) [[unlikely]] return; }
L_0010F4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F4DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1559u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F79C; } }
L_0010F4DC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 28740u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F774; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 28748u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F73C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F50Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010F50Cu) [[unlikely]] return; }
L_0010F50C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[22], c.r[2].w[0] - 2u);
    set32(c.r[2], ld32((c.r[3].w[0] - 28744u)));
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F55C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 1561u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F53Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F53Cu) [[unlikely]] return; }
L_0010F53C:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] - 28740u), 0u);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] - 28744u), 0u);
    st32((c.r[18].w[0] - 28748u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F7A0; } }
L_0010F55C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 1559u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010F640; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F640; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[16], 0u + 10u);
    c.budget -= 3;
L_0010F588:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F594u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010F594u) [[unlikely]] return; }
L_0010F594:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0010F59Cu);  goto L_0010F5A0; }
L_0010F5A0:
    set32(c.r[2], ld32((c.r[20].w[0] - 28752u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F588u | kUnwind; return; } goto L_0010F588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5BCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010F5BCu) [[unlikely]] return; }
L_0010F5BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5CCu);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010F5CCu) [[unlikely]] return; }
L_0010F5CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F640; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5F4u);  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031F348u; return; } if (c.pc != 0x0010F5F4u) [[unlikely]] return; }
L_0010F5F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 1560u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F608u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F608u) [[unlikely]] return; }
L_0010F608:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC57F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] - 28744u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    st32((c.r[20].w[0] - 28752u), c.r[18].w[0]);
    st32((c.r[21].w[0] - 28744u), c.r[2].w[0]);
    c.budget -= 14;
L_0010F640:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 1560u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010F768; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F768; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[16], 0u + 10u);
    c.budget -= 2;
L_0010F668:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F674u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010F674u) [[unlikely]] return; }
L_0010F674:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0010F67Cu);  goto L_0010F680; }
L_0010F680:
    set32(c.r[2], ld32((c.r[20].w[0] - 28752u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F668u | kUnwind; return; } goto L_0010F668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F69Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010F69Cu) [[unlikely]] return; }
L_0010F69C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6ACu);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010F6ACu) [[unlikely]] return; }
L_0010F6AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F768; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6D4u);  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031F348u; return; } if (c.pc != 0x0010F6D4u) [[unlikely]] return; }
L_0010F6D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 1559u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6E8u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F6E8u) [[unlikely]] return; }
L_0010F6E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 1560u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6FCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F6FCu) [[unlikely]] return; }
L_0010F6FC:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC57F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] - 28744u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    st32((c.r[20].w[0] - 28752u), c.r[18].w[0]);
    st32((c.r[21].w[0] - 28744u), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F768; } }
L_0010F73C:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[5], 0u + 1559u);
    st32((c.r[2].w[0] + 332u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F75Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010F75Cu) [[unlikely]] return; }
L_0010F75C:
    set32(c.r[2], 0u + 6u);
    st32((c.r[18].w[0] - 28748u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 3;
L_0010F768:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F7A0; } }
L_0010F774:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F790u);  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031F348u; return; } if (c.pc != 0x0010F790u) [[unlikely]] return; }
L_0010F790:
    set32(c.r[2], ld32((c.r[16].w[0] - 28740u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] - 28740u), c.r[2].w[0]);
    c.budget -= 3;
L_0010F79C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010F7A0:
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
L_0010F7D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010F814; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010F804; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 12784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F7FCu);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010F7FCu) [[unlikely]] return; }
L_0010F7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F814; } }
L_0010F804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st32((c.r[3].w[0] + 13380u), c.r[2].w[0]);
    c.budget -= 4;
L_0010F814:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F828:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[9], c.r[10].w[0] + 12784u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], ld32((c.r[9].w[0] + 592u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 3000u);
    st32((c.r[3].w[0] - 27136u), 0u);
    st32((c.r[4].w[0] - 28752u), 0u);
    st32((c.r[5].w[0] - 28748u), 0u);
    st32((c.r[6].w[0] - 28744u), 0u);
    st32((c.r[7].w[0] - 28740u), 0u);
    st32((c.r[9].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0010F874; } }
    st32((c.r[10].w[0] + 12784u), 0u);
    c.budget -= 1;
L_0010F874:
    st32((c.r[9].w[0] + 88u), 0u);
    st32((c.r[9].w[0] + 8u), 0u);
    st32((c.r[9].w[0] + 56u), 0u);
    st32((c.r[9].w[0] + 24u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8A8u);  if (depth < kMaxDepth) unit_0003(c, 279u, depth + 1u); else { c.pc = 0x0010F7D0u; return; } if (c.pc != 0x0010F8A8u) [[unlikely]] return; }
L_0010F8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F8B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8D0u);  if (depth < kMaxDepth) unit_0003(c, 279u, depth + 1u); else { c.pc = 0x0010F7D0u; return; } if (c.pc != 0x0010F8D0u) [[unlikely]] return; }
L_0010F8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F8E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F928u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010F928u) [[unlikely]] return; }
L_0010F928:
    set32(c.r[19], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F9B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], c.r[2].w[0] + 13388u);
    c.budget -= 2;
L_0010F940:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F994; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010F994; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F964u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010F964u) [[unlikely]] return; }
L_0010F964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F994; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F994; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_0010F9B4; } }
L_0010F994:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9A4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010F9A4u) [[unlikely]] return; }
L_0010F9A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F940u | kUnwind; return; } goto L_0010F940; } }
L_0010F9B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010F9B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010FA98; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[19], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 10u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0010F9F0; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010FA98; } }
L_0010F9F0:
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 13384u);
    set32(c.r[4], c.r[20].w[0] + 9872u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[21].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA60u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0010FA60u) [[unlikely]] return; }
L_0010FA60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 201u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 960u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 960u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA84u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x0010FA84u) [[unlikely]] return; }
L_0010FA84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[3], 0u + 24u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0] + 9924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0010FA98:
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
L_0010FAC8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + 13384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[18].w[0] + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] << 4);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0010FB68; } }
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB20u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0010FB20u) [[unlikely]] return; }
L_0010FB20:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0010FB70; } }
    set32(c.r[3], c.r[18].w[0] + 12u);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 960u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[6], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st16((c.r[8].w[0] + 960u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FB70; } }
L_0010FB68:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0010FB70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_0010FB80:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010FB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10396u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0010FBD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 13384u);
    c.budget -= 4;
L_0010FBB0:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FBB0u | kUnwind; return; } goto L_0010FBB0; } }
L_0010FBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010FBD8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC14u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010FC14u) [[unlikely]] return; }
L_0010FC14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010FCA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[19], c.r[2].w[0] + 13388u);
    c.budget -= 2;
L_0010FC28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010FC88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0010FC88; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC4Cu);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010FC4Cu) [[unlikely]] return; }
L_0010FC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FC88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FC88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_0010FC88; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FCA8; } }
L_0010FC88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC98u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010FC98u) [[unlikely]] return; }
L_0010FC98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FC28u | kUnwind; return; } goto L_0010FC28; } }
L_0010FCA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010FCA8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010FCD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD0Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010FD0Cu) [[unlikely]] return; }
L_0010FD0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010FDD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[20] = c.r[1].w[0];
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[18], 0u + 27u);
    c.budget -= 4;
L_0010FD28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010FDB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0010FDB4; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] - 26128u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010FDB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FDB4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0010FDB4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDA0u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010FDA0u) [[unlikely]] return; }
L_0010FDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FDB4; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FDD0; } }
L_0010FDB4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDC4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010FDC4u) [[unlikely]] return; }
L_0010FDC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FD28u | kUnwind; return; } goto L_0010FD28; } }
L_0010FDD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010FE0C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 228u)));
    set32(c.r[5], 0u + 202u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDECu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x0010FDECu) [[unlikely]] return; }
L_0010FDEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 228u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 24u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 9924u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_0010FE0C:
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
L_0010FE38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 10368u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0010FEBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 13384u);
    set32(c.r[19], 0u - 1u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 5;
L_0010FE80:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0010FEA4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0010FEA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FEA4u);  if (depth < kMaxDepth) unit_0003(c, 293u, depth + 1u); else { c.pc = 0x0010FAC8u; return; } if (c.pc != 0x0010FEA4u) [[unlikely]] return; }
L_0010FEA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FE80u | kUnwind; return; } goto L_0010FE80; } }
L_0010FEBC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010FEE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010FF2Cu) [[unlikely]] return; }
L_0010FF2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] - 28084u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF48u);  if (depth < kMaxDepth) unit_0068(c, 289u, depth + 1u); else { c.pc = 0x002A3920u; return; } if (c.pc != 0x0010FF48u) [[unlikely]] return; }
L_0010FF48:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0004(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[22], c.r[2].w[0] - 28072u);
    set32(c.r[21], c.r[3].w[0] - 27952u);
    set32(c.r[20], 0u + 1u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_0010FF70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FFDC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010FFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF94u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010FF94u) [[unlikely]] return; }
L_0010FF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FFDC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0010FFDC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 224u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 234u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010FFDC; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010FFE8; } }
L_0010FFDC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
L_0010FFE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010FFFC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFFCu);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0010FFFCu) [[unlikely]] return; }
L_0010FFFC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_0004(c, 1u, depth);
}

}
