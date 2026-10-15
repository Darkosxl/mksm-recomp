#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0,
    0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0,
    0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E8004;
    case 3u: goto L_002E8020;
    case 4u: goto L_002E8058;
    case 5u: goto L_002E80F4;
    case 6u: goto L_002E8218;
    case 7u: goto L_002E8248;
    case 8u: goto L_002E827C;
    case 9u: goto L_002E82BC;
    case 10u: goto L_002E82EC;
    case 11u: goto L_002E8320;
    case 12u: goto L_002E8350;
    case 13u: goto L_002E83B8;
    case 14u: goto L_002E83DC;
    case 15u: goto L_002E8404;
    case 16u: goto L_002E842C;
    case 17u: goto L_002E8454;
    case 18u: goto L_002E8474;
    case 19u: goto L_002E8484;
    case 20u: goto L_002E8498;
    case 21u: goto L_002E84C0;
    case 22u: goto L_002E84E8;
    case 23u: goto L_002E8510;
    case 24u: goto L_002E8530;
    case 25u: goto L_002E8554;
    case 26u: goto L_002E857C;
    case 27u: goto L_002E85A4;
    case 28u: goto L_002E85CC;
    case 29u: goto L_002E85EC;
    case 30u: goto L_002E8614;
    case 31u: goto L_002E863C;
    case 32u: goto L_002E8664;
    case 33u: goto L_002E868C;
    case 34u: goto L_002E86AC;
    case 35u: goto L_002E86D0;
    case 36u: goto L_002E86F4;
    case 37u: goto L_002E8718;
    case 38u: goto L_002E8728;
    case 39u: goto L_002E8764;
    case 40u: goto L_002E8788;
    case 41u: goto L_002E87E4;
    case 42u: goto L_002E87F8;
    case 43u: goto L_002E8804;
    case 44u: goto L_002E880C;
    case 45u: goto L_002E8820;
    case 46u: goto L_002E882C;
    case 47u: goto L_002E8858;
    case 48u: goto L_002E8868;
    case 49u: goto L_002E8884;
    case 50u: goto L_002E88B8;
    case 51u: goto L_002E88E8;
    case 52u: goto L_002E891C;
    case 53u: goto L_002E898C;
    case 54u: goto L_002E89BC;
    case 55u: goto L_002E89F0;
    case 56u: goto L_002E8A1C;
    case 57u: goto L_002E8AF0;
    case 58u: goto L_002E8B1C;
    case 59u: goto L_002E8B2C;
    case 60u: goto L_002E8B44;
    case 61u: goto L_002E8BAC;
    case 62u: goto L_002E8BD4;
    case 63u: goto L_002E8BEC;
    case 64u: goto L_002E8C34;
    case 65u: goto L_002E8C64;
    case 66u: goto L_002E8C74;
    case 67u: goto L_002E8CEC;
    case 68u: goto L_002E8CF8;
    case 69u: goto L_002E8D04;
    case 70u: goto L_002E8D10;
    case 71u: goto L_002E8D1C;
    case 72u: goto L_002E8D30;
    case 73u: goto L_002E8D54;
    case 74u: goto L_002E8D80;
    case 75u: goto L_002E8DD4;
    case 76u: goto L_002E8E00;
    case 77u: goto L_002E8EB4;
    case 78u: goto L_002E8EFC;
    case 79u: goto L_002E8F2C;
    case 80u: goto L_002E8F64;
    case 81u: goto L_002E8F7C;
    case 82u: goto L_002E8F94;
    case 83u: goto L_002E8FD0;
    case 84u: goto L_002E9028;
    case 85u: goto L_002E9034;
    case 86u: goto L_002E9068;
    case 87u: goto L_002E90D0;
    case 88u: goto L_002E9108;
    case 89u: goto L_002E9118;
    case 90u: goto L_002E9188;
    case 91u: goto L_002E91A0;
    case 92u: goto L_002E91B0;
    case 93u: goto L_002E91D0;
    case 94u: goto L_002E9248;
    case 95u: goto L_002E9258;
    case 96u: goto L_002E92C0;
    case 97u: goto L_002E92EC;
    case 98u: goto L_002E9300;
    case 99u: goto L_002E9314;
    case 100u: goto L_002E9328;
    case 101u: goto L_002E9360;
    case 102u: goto L_002E9388;
    case 103u: goto L_002E93A8;
    case 104u: goto L_002E93BC;
    case 105u: goto L_002E9404;
    case 106u: goto L_002E94D0;
    case 107u: goto L_002E94E4;
    case 108u: goto L_002E9500;
    case 109u: goto L_002E9540;
    case 110u: goto L_002E9584;
    case 111u: goto L_002E9598;
    case 112u: goto L_002E95A0;
    case 113u: goto L_002E95C4;
    case 114u: goto L_002E95E0;
    case 115u: goto L_002E9608;
    case 116u: goto L_002E9638;
    case 117u: goto L_002E9674;
    case 118u: goto L_002E9688;
    case 119u: goto L_002E96A0;
    case 120u: goto L_002E96F0;
    case 121u: goto L_002E9700;
    case 122u: goto L_002E9790;
    case 123u: goto L_002E9894;
    case 124u: goto L_002E98C8;
    case 125u: goto L_002E98E0;
    case 126u: goto L_002E98F8;
    case 127u: goto L_002E9920;
    case 128u: goto L_002E9960;
    case 129u: goto L_002E9970;
    case 130u: goto L_002E99B0;
    case 131u: goto L_002E99C0;
    case 132u: goto L_002E9A50;
    case 133u: goto L_002E9A6C;
    case 134u: goto L_002E9A80;
    case 135u: goto L_002E9A98;
    case 136u: goto L_002E9AA8;
    case 137u: goto L_002E9AB8;
    case 138u: goto L_002E9AE8;
    case 139u: goto L_002E9B04;
    case 140u: goto L_002E9B30;
    case 141u: goto L_002E9B58;
    case 142u: goto L_002E9B68;
    case 143u: goto L_002E9B84;
    case 144u: goto L_002E9BC0;
    case 145u: goto L_002E9BD0;
    case 146u: goto L_002E9BE0;
    case 147u: goto L_002E9C00;
    case 148u: goto L_002E9C18;
    case 149u: goto L_002E9C54;
    case 150u: goto L_002E9C78;
    case 151u: goto L_002E9C90;
    case 152u: goto L_002E9C98;
    case 153u: goto L_002E9CA4;
    case 154u: goto L_002E9CAC;
    case 155u: goto L_002E9CB4;
    case 156u: goto L_002E9CD0;
    case 157u: goto L_002E9D5C;
    case 158u: goto L_002E9D70;
    case 159u: goto L_002E9DF4;
    case 160u: goto L_002E9E08;
    case 161u: goto L_002E9E18;
    case 162u: goto L_002E9E70;
    case 163u: goto L_002E9E88;
    case 164u: goto L_002E9EA4;
    case 165u: goto L_002E9EC0;
    case 166u: goto L_002E9ED0;
    case 167u: goto L_002E9F10;
    case 168u: goto L_002E9F30;
    case 169u: goto L_002E9F68;
    case 170u: goto L_002E9F78;
    case 171u: goto L_002E9FBC;
    case 172u: goto L_002E9FD0;
    case 173u: goto L_002EA02C;
    case 174u: goto L_002EA040;
    case 175u: goto L_002EA214;
    case 176u: goto L_002EA2A8;
    case 177u: goto L_002EA350;
    case 178u: goto L_002EA3A0;
    case 179u: goto L_002EA3F4;
    case 180u: goto L_002EA4A4;
    case 181u: goto L_002EA4EC;
    case 182u: goto L_002EA52C;
    case 183u: goto L_002EA568;
    case 184u: goto L_002EA5F0;
    case 185u: goto L_002EA640;
    case 186u: goto L_002EA694;
    case 187u: goto L_002EA6E0;
    case 188u: goto L_002EA760;
    case 189u: goto L_002EA7A8;
    case 190u: goto L_002EA7E8;
    case 191u: goto L_002EA824;
    case 192u: goto L_002EA8C8;
    case 193u: goto L_002EA918;
    case 194u: goto L_002EA96C;
    case 195u: goto L_002EA9B8;
    case 196u: goto L_002EAA20;
    case 197u: goto L_002EAA90;
    case 198u: goto L_002EAAD0;
    case 199u: goto L_002EAB10;
    case 200u: goto L_002EAB44;
    case 201u: goto L_002EAB9C;
    case 202u: goto L_002EABB4;
    case 203u: goto L_002EABC8;
    case 204u: goto L_002EAC24;
    case 205u: goto L_002EAC48;
    case 206u: goto L_002EAC60;
    case 207u: goto L_002EACE0;
    case 208u: goto L_002EAD80;
    case 209u: goto L_002EADE4;
    case 210u: goto L_002EADF8;
    case 211u: goto L_002EAE24;
    case 212u: goto L_002EAE30;
    case 213u: goto L_002EAE44;
    case 214u: goto L_002EAE70;
    case 215u: goto L_002EAE7C;
    case 216u: goto L_002EAECC;
    case 217u: goto L_002EAED8;
    case 218u: goto L_002EAF28;
    case 219u: goto L_002EAF38;
    case 220u: goto L_002EAF94;
    case 221u: goto L_002EAFA8;
    case 222u: goto L_002EAFB8;
    case 223u: goto L_002EB08C;
    case 224u: goto L_002EB0A4;
    case 225u: goto L_002EB178;
    case 226u: goto L_002EB2F0;
    case 227u: goto L_002EB30C;
    case 228u: goto L_002EB33C;
    case 229u: goto L_002EB344;
    case 230u: goto L_002EB38C;
    case 231u: goto L_002EB3D4;
    case 232u: goto L_002EB3E0;
    case 233u: goto L_002EB3FC;
    case 234u: goto L_002EB428;
    case 235u: goto L_002EB45C;
    case 236u: goto L_002EB468;
    case 237u: goto L_002EB4D0;
    case 238u: goto L_002EB51C;
    case 239u: goto L_002EB53C;
    case 240u: goto L_002EB54C;
    case 241u: goto L_002EB55C;
    case 242u: goto L_002EB584;
    case 243u: goto L_002EB5A4;
    case 244u: goto L_002EB5C4;
    case 245u: goto L_002EB5DC;
    case 246u: goto L_002EB5F0;
    case 247u: goto L_002EB600;
    case 248u: goto L_002EB630;
    case 249u: goto L_002EB670;
    case 250u: goto L_002EB6A4;
    case 251u: goto L_002EB6B8;
    case 252u: goto L_002EB6C8;
    case 253u: goto L_002EB708;
    case 254u: goto L_002EB718;
    case 255u: goto L_002EB750;
    case 256u: goto L_002EB828;
    case 257u: goto L_002EB844;
    case 258u: goto L_002EB874;
    case 259u: goto L_002EB8A8;
    case 260u: goto L_002EB8B8;
    case 261u: goto L_002EB8D0;
    case 262u: goto L_002EB8D8;
    case 263u: goto L_002EB8F0;
    case 264u: goto L_002EB8F8;
    case 265u: goto L_002EB940;
    case 266u: goto L_002EB990;
    case 267u: goto L_002EB9C0;
    case 268u: goto L_002EB9D4;
    case 269u: goto L_002EB9F8;
    case 270u: goto L_002EBA10;
    case 271u: goto L_002EBA18;
    case 272u: goto L_002EBA30;
    case 273u: goto L_002EBA38;
    case 274u: goto L_002EBA50;
    case 275u: goto L_002EBA58;
    case 276u: goto L_002EBA60;
    case 277u: goto L_002EBA68;
    case 278u: goto L_002EBA80;
    case 279u: goto L_002EBA94;
    case 280u: goto L_002EBAB8;
    case 281u: goto L_002EBAD0;
    case 282u: goto L_002EBAD8;
    case 283u: goto L_002EBAF0;
    case 284u: goto L_002EBAF8;
    case 285u: goto L_002EBB10;
    case 286u: goto L_002EBB18;
    case 287u: goto L_002EBB20;
    case 288u: goto L_002EBB28;
    case 289u: goto L_002EBB40;
    case 290u: goto L_002EBB78;
    case 291u: goto L_002EBB8C;
    case 292u: goto L_002EBBA4;
    case 293u: goto L_002EBBB4;
    case 294u: goto L_002EBBD0;
    case 295u: goto L_002EBBF8;
    case 296u: goto L_002EBC08;
    case 297u: goto L_002EBC20;
    case 298u: goto L_002EBC50;
    case 299u: goto L_002EBC6C;
    case 300u: goto L_002EBC80;
    case 301u: goto L_002EBC94;
    case 302u: goto L_002EBCA4;
    case 303u: goto L_002EBCB8;
    case 304u: goto L_002EBCC8;
    case 305u: goto L_002EBCE8;
    case 306u: goto L_002EBD00;
    case 307u: goto L_002EBD1C;
    case 308u: goto L_002EBD30;
    case 309u: goto L_002EBDC0;
    case 310u: goto L_002EBE00;
    case 311u: goto L_002EBE10;
    case 312u: goto L_002EBF14;
    case 313u: goto L_002EBF3C;
    case 314u: goto L_002EBF48;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    c.budget -= 1;
L_002E8004:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002E883C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E883C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8778; } }
L_002E8020:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E87C0; } }
    c.r[2].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E87A4; } }
    set32(c.r[2], 0u + 6631u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E87DC; } }
    set32(c.r[2], 0u + 6632u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E87F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E8058:
    set32(c.r[2], 0u + 12661u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E83C8; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12662ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E80BC; } }
    set32(c.r[2], 0u + 6636u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8204; } }
    c.r[2].d[0] = c.r[17].sd[0] < 6637ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E809C; } }
    set32(c.r[2], 0u + 6634u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E809C:
    set32(c.r[2], 0u + 9648u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E82A8; } }
    set32(c.r[2], 0u + 12660u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E83A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E80BC:
    set32(c.r[2], 0u + 12663u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8418; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12663ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E83F0; } }
    set32(c.r[2], 0u + 12664u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8440; } }
    set32(c.r[2], 0u + 12665u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E80F4:
    set32(c.r[2], 0u + 12675u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E85D8; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12676ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E817C; } }
    set32(c.r[2], 0u + 12670u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E851C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12671ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8144; } }
    set32(c.r[2], 0u + 12668u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E84D4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12669ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E84FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E84AC; } }
L_002E8144:
    set32(c.r[2], 0u + 12672u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8568; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12672ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8540; } }
    set32(c.r[2], 0u + 12673u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8590; } }
    set32(c.r[2], 0u + 12674u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E85B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E817C:
    set32(c.r[2], 0u + 12686u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8698; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12687ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E81CC; } }
    set32(c.r[2], 0u + 12677u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8628; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12677ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8600; } }
    set32(c.r[2], 0u + 12678u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8650; } }
    set32(c.r[2], 0u + 12679u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E81CC:
    set32(c.r[2], 0u + 12688u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E86E0; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12688ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E86BC; } }
    set32(c.r[2], 0u + 12689u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8704; } }
    set32(c.r[2], 0u + 12690u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E883C; } }
L_002E8204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8218u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8218u) [[unlikely]] return; }
L_002E8218:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8380; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8248u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E8248u) [[unlikely]] return; }
L_002E8248:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8380; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E826C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8280; } }
L_002E826C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E827Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E827Cu) [[unlikely]] return; }
L_002E827C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E8280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 74u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 924u)));
    st32((c.r[4].w[0] - 5024u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8370; } }
L_002E82A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82BCu);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E82BCu) [[unlikely]] return; }
L_002E82BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8380; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82ECu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E82ECu) [[unlikely]] return; }
L_002E82EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8380; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E8310; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8324; } }
L_002E8310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8320u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E8320u) [[unlikely]] return; }
L_002E8320:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E8324:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 74u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 924u)));
    st32((c.r[4].w[0] - 5024u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8384; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8350u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002E8350u) [[unlikely]] return; }
L_002E8350:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002E835Cu);  goto L_002E8360; }
L_002E8360:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8380; } }
L_002E8370:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8384; } }
L_002E8380:
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_002E8384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8840; } }
L_002E83A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83B8u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E83B8u) [[unlikely]] return; }
L_002E83B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E83C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83DCu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E83DCu) [[unlikely]] return; }
L_002E83DC:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E83F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8404u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8404u) [[unlikely]] return; }
L_002E8404:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8418:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E842Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E842Cu) [[unlikely]] return; }
L_002E842C:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8440:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8454u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8454u) [[unlikely]] return; }
L_002E8454:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E8460:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8474u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8474u) [[unlikely]] return; }
L_002E8474:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8484:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8498u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8498u) [[unlikely]] return; }
L_002E8498:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E84AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84C0u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E84C0u) [[unlikely]] return; }
L_002E84C0:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E84D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84E8u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E84E8u) [[unlikely]] return; }
L_002E84E8:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E84FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8510u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8510u) [[unlikely]] return; }
L_002E8510:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E851C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8530u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8530u) [[unlikely]] return; }
L_002E8530:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8540:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8554u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8554u) [[unlikely]] return; }
L_002E8554:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8568:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E857Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E857Cu) [[unlikely]] return; }
L_002E857C:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8590:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85A4u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E85A4u) [[unlikely]] return; }
L_002E85A4:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E85B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85CCu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E85CCu) [[unlikely]] return; }
L_002E85CC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E85D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85ECu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E85ECu) [[unlikely]] return; }
L_002E85EC:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8600:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8614u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8614u) [[unlikely]] return; }
L_002E8614:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8628:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E863Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E863Cu) [[unlikely]] return; }
L_002E863C:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8650:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8664u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8664u) [[unlikely]] return; }
L_002E8664:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8678:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E868Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E868Cu) [[unlikely]] return; }
L_002E868C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E8698:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 23u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86ACu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E86ACu) [[unlikely]] return; }
L_002E86AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E86BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 24u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86D0u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E86D0u) [[unlikely]] return; }
L_002E86D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E86E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86F4u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E86F4u) [[unlikely]] return; }
L_002E86F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8704:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8718u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002E8718u) [[unlikely]] return; }
L_002E8718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E8728:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 62u)));
    c.r[16].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[5].d[0];  if (t) { goto L_002E8840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8764u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8764u) [[unlikely]] return; }
L_002E8764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002E8840; } }
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8840; } }
L_002E8778:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8788u);  if (depth < kMaxDepth) unit_006F(c, 87u, depth + 1u); else { c.pc = 0x002BD3D8u; return; } if (c.pc != 0x002E8788u) [[unlikely]] return; }
L_002E8788:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8840; } }
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8840; } }
L_002E87A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14692u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E87C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14692u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E882C; } }
L_002E87DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87E4u);  if (depth < kMaxDepth) unit_0061(c, 293u, depth + 1u); else { c.pc = 0x00286CC8u; return; } if (c.pc != 0x002E87E4u) [[unlikely]] return; }
L_002E87E4:
    set32(c.r[3], 0u + 12744u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E87F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87F8u);  if (depth < kMaxDepth) unit_0061(c, 293u, depth + 1u); else { c.pc = 0x00286CC8u; return; } if (c.pc != 0x002E87F8u) [[unlikely]] return; }
L_002E87F8:
    set32(c.r[3], 0u + 12745u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E8804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E880Cu);  if (depth < kMaxDepth) unit_0061(c, 293u, depth + 1u); else { c.pc = 0x00286CC8u; return; } if (c.pc != 0x002E880Cu) [[unlikely]] return; }
L_002E880C:
    set32(c.r[3], 0u + 12746u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8824; } }
L_002E8818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8820u);  if (depth < kMaxDepth) unit_0061(c, 293u, depth + 1u); else { c.pc = 0x00286CC8u; return; } if (c.pc != 0x002E8820u) [[unlikely]] return; }
L_002E8820:
    set32(c.r[3], 0u + 12747u);
    c.budget -= 1;
L_002E8824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8840; } }
L_002E882C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8840; } }
L_002E883C:
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_002E8840:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] - 6617u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8858u);  if (depth < kMaxDepth) unit_0079(c, 246u, depth + 1u); else { c.pc = 0x002E7DF8u; return; } if (c.pc != 0x002E8858u) [[unlikely]] return; }
L_002E8858:
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8868u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E8868u) [[unlikely]] return; }
L_002E8868:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8894; } }
    st32((c.r[29].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8884u);  if (depth < kMaxDepth) unit_0061(c, 158u, depth + 1u); else { c.pc = 0x00285C68u; return; } if (c.pc != 0x002E8884u) [[unlikely]] return; }
L_002E8884:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002E8894; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8894:
    set32(c.r[2], c.r[17].w[0] - 6637u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3010ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88B8u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E88B8u) [[unlikely]] return; }
L_002E88B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E894C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[21].w[0] + 9872u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88E8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E88E8u) [[unlikely]] return; }
L_002E88E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E894C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E890C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8920; } }
L_002E890C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E891Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E891Cu) [[unlikely]] return; }
L_002E891C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E8920:
    set32(c.r[4], ld32((c.r[16].w[0] + 924u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 74u)));
    st32((c.r[3].w[0] - 5024u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8950; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8950; } }
L_002E894C:
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_002E8950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8968; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_002E8968:
    set32(c.r[2], c.r[17].w[0] - 9649u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3010ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E898Cu);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E898Cu) [[unlikely]] return; }
L_002E898C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8A4C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[21].w[0] + 9872u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89BCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E89BCu) [[unlikely]] return; }
L_002E89BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8A4C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002E89E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E89F4; } }
L_002E89E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89F0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002E89F0u) [[unlikely]] return; }
L_002E89F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E89F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 924u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 74u)));
    st32((c.r[3].w[0] - 5024u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8A50; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A1Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002E8A1Cu) [[unlikely]] return; }
L_002E8A1C:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002E8A28u);  goto L_002E8A2C; }
L_002E8A2C:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A4C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8A50; } }
L_002E8A4C:
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_002E8A50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8A68; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_002E8A68:
    set32(c.r[3], c.r[17].w[0] - 17u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3010ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8A8C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8A8C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8A8C:
    set32(c.r[3], c.r[17].w[0] - 3028u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3010ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8AB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8AB0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8AB0:
    set32(c.r[2], 0u + 6635u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8AD0; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 1532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8AD0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8AD0:
    set32(c.r[2], 0u + 6039u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8B04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AF0u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8AF0u) [[unlikely]] return; }
L_002E8AF0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8B04; } }
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E8B04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B1Cu);  if (depth < kMaxDepth) unit_0088(c, 307u, depth + 1u); else { c.pc = 0x003237C8u; return; } if (c.pc != 0x002E8B1Cu) [[unlikely]] return; }
L_002E8B1C:
    set32(c.r[19], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B2Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002E8B2Cu) [[unlikely]] return; }
L_002E8B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002E8B4C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B44u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x002E8B44u) [[unlikely]] return; }
L_002E8B44:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] != 0) c.r[21].d[0] = 0ull;
    c.budget -= 2;
L_002E8B4C:
    set32(c.r[2], 0u + 6316u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8B94; } }
    set32(c.r[2], 0u + 6317u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8B6C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002E8B94; } }
L_002E8B6C:
    set32(c.r[4], c.r[17].w[0] - 12717u);
    set32(c.r[3], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8B94; } }
    set32(c.r[2], 0u + 12722u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8D30; } }
L_002E8B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BACu);  if (depth < kMaxDepth) unit_0088(c, 307u, depth + 1u); else { c.pc = 0x003237C8u; return; } if (c.pc != 0x002E8BACu) [[unlikely]] return; }
L_002E8BAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8D30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8D30; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BD4u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8BD4u) [[unlikely]] return; }
L_002E8BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8D30; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BECu);  if (depth < kMaxDepth) unit_0089(c, 62u, depth + 1u); else { c.pc = 0x00324E10u; return; } if (c.pc != 0x002E8BECu) [[unlikely]] return; }
L_002E8BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8D30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8C3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 19740u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 252u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8C34u) [[unlikely]] return; }
L_002E8C34:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 2;
L_002E8C3C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E8D30; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 12722u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8CA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C64u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E8C64u) [[unlikely]] return; }
L_002E8C64:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C74u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002E8C74u) [[unlikely]] return; }
L_002E8C74:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 2704u));
    c.f[20] = c.f[20] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E8D30; } }
    st32((c.r[29].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8D30; } }
L_002E8CA0:
    set32(c.r[4], c.r[17].w[0] - 12717u);
    set32(c.r[3], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8D30; } }
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E8D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22096u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E8CEC:
    set32(c.r[5], 0u + 12681u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8D20; } }
L_002E8CF8:
    set32(c.r[5], 0u + 12682u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8D20; } }
L_002E8D04:
    set32(c.r[5], 0u + 12683u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8D20; } }
L_002E8D10:
    set32(c.r[5], 0u + 12684u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8D20; } }
L_002E8D1C:
    set32(c.r[5], 0u + 12685u);
    c.budget -= 1;
L_002E8D20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D30u);  if (depth < kMaxDepth) unit_0079(c, 246u, depth + 1u); else { c.pc = 0x002E7DF8u; return; } if (c.pc != 0x002E8D30u) [[unlikely]] return; }
L_002E8D30:
    set32(c.r[2], 0u + 6318u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D54u);  if (depth < kMaxDepth) unit_0088(c, 307u, depth + 1u); else { c.pc = 0x003237C8u; return; } if (c.pc != 0x002E8D54u) [[unlikely]] return; }
L_002E8D54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8DA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8968u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002E8DA8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D80u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8D80u) [[unlikely]] return; }
L_002E8D80:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_002E8DA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8DA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8DA8; } }
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E8DA8:
    set32(c.r[2], 0u + 6319u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8E28; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002E8E28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DD4u);  if (depth < kMaxDepth) unit_0088(c, 307u, depth + 1u); else { c.pc = 0x003237C8u; return; } if (c.pc != 0x002E8DD4u) [[unlikely]] return; }
L_002E8DD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8E28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8968u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002E8E28; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E00u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8E00u) [[unlikely]] return; }
L_002E8E00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_002E8E28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8E28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8E28; } }
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E8E28:
    set32(c.r[2], 0u + 6320u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8E48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8E48; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8E48:
    set32(c.r[2], 0u + 6321u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2700u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8E6C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8E6C:
    set32(c.r[2], 0u + 12691u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8E90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 11216u)));
    c.r[2].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8E90; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8E90:
    set32(c.r[6], c.r[17].w[0] - 6040u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8EC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EB4u);  if (depth < kMaxDepth) unit_0088(c, 310u, depth + 1u); else { c.pc = 0x00323860u; return; } if (c.pc != 0x002E8EB4u) [[unlikely]] return; }
L_002E8EB4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8EC8; } }
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E8EC8:
    set32(c.r[3], c.r[17].w[0] - 6322u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8EEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8EEC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8EEC:
    set32(c.r[4], c.r[23].w[0] - 6944u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EFCu);  if (depth < kMaxDepth) unit_0091(c, 4u, depth + 1u); else { c.pc = 0x00344070u; return; } if (c.pc != 0x002E8EFCu) [[unlikely]] return; }
L_002E8EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].d[0] = c.r[17].d[0] ^ 6415ull;
    set32(c.r[22], c.r[2].w[0] - 19312u);
    set32(c.r[21], c.r[17].w[0] - 6508u);
    set32(c.r[2], c.r[17].w[0] - 6415u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[21].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F2Cu);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x002E8F2Cu) [[unlikely]] return; }
L_002E8F2C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002E8FE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F64u);  if (depth < kMaxDepth) unit_0088(c, 305u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x002E8F64u) [[unlikely]] return; }
L_002E8F64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { goto L_002E8FE0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F7Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002E8F7Cu) [[unlikely]] return; }
L_002E8F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002E8F9C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F94u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x002E8F94u) [[unlikely]] return; }
L_002E8F94:
    c.r[2].d[0] = c.r[20].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] != 0) c.r[19].d[0] = 0ull;
    c.budget -= 2;
L_002E8F9C:
    set32(c.r[2], 0u + 6414u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8FD8; } }
    set32(c.r[2], 0u + 6507u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8FBC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E8FD8; } }
L_002E8FBC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FD0u);  if (depth < kMaxDepth) unit_0088(c, 310u, depth + 1u); else { c.pc = 0x00323860u; return; } if (c.pc != 0x002E8FD0u) [[unlikely]] return; }
L_002E8FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002E8FE0; } }
L_002E8FD8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8FE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8FFC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E8FFC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E8FFC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9030; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9030; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9028u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9028u) [[unlikely]] return; }
L_002E9028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9034; } }
L_002E9030:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002E9034:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9068:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[19], 0u + 3u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[6].w[0]);
    c.budget -= 26;
L_002E90D0:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 11;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E90D0u | kUnwind; return; } goto L_002E90D0; } }
    set32(c.r[7], c.r[7].w[0] + 64u);
    set32(c.r[19], 0u + 4u);
    c.budget -= 3;
L_002E9108:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], 0u + 3u);
    c.budget -= 4;
L_002E9118:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E9144; } }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_002E9144:
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9118u | kUnwind; return; } goto L_002E9118; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9108u | kUnwind; return; } goto L_002E9108; } }
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[19].d[0] = 0ull + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[21], 0u - 1u);
    c.f[14] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9188u);  if (depth < kMaxDepth) unit_007A(c, 168u, depth + 1u); else { c.pc = 0x002E9F30u; return; } if (c.pc != 0x002E9188u) [[unlikely]] return; }
L_002E9188:
    set32(c.r[2], 0u + 1u);
    c.f[20] = c.f[0] & fp::kAbs;
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 6;
L_002E91A0:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
L_002E91B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { goto L_002E91F8; } }
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 8u));
    c.f[14] = ld32((c.r[17].w[0]));
    c.f[15] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91D0u);  if (depth < kMaxDepth) unit_007A(c, 168u, depth + 1u); else { c.pc = 0x002E9F30u; return; } if (c.pc != 0x002E91D0u) [[unlikely]] return; }
L_002E91D0:
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E91F8; } }
    st32((c.r[29].w[0] + 80u), c.r[19].w[0]);
    c.f[20] = c.f[0];
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[21].w[0]);
    c.budget -= 5;
L_002E91F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E91B0u | kUnwind; return; } goto L_002E91B0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E91A0u | kUnwind; return; } goto L_002E91A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 10;
L_002E9248:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9274; } }
L_002E9258:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9278; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9258u | kUnwind; return; } goto L_002E9258; } }
L_002E9274:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002E9278:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E9288; } }
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_002E9288:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9248u | kUnwind; return; } goto L_002E9248; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[19], 0u + 3u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 10;
L_002E92C0:
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 6;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E92C0u | kUnwind; return; } goto L_002E92C0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92ECu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002E92ECu) [[unlikely]] return; }
L_002E92EC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9300u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x002E9300u) [[unlikely]] return; }
L_002E9300:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9314u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002E9314u) [[unlikely]] return; }
L_002E9314:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9328u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x002E9328u) [[unlikely]] return; }
L_002E9328:
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
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9388u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x002E9388u) [[unlikely]] return; }
L_002E9388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9520; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93A8u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002E93A8u) [[unlikely]] return; }
L_002E93A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93BCu);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x002E93BCu) [[unlikely]] return; }
L_002E93BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9404u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002E9404u) [[unlikely]] return; }
L_002E9404:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] + 3104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E9494; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9468; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E9488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E94D0; } }
L_002E9468:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E94A0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E94AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E94D0; } }
L_002E9488:
    set32(c.r[17], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E94D0; } }
L_002E9494:
    set32(c.r[17], 0u + 82u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E94D0; } }
L_002E94A0:
    set32(c.r[17], 0u + 85u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E94D0; } }
L_002E94AC:
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[17], 0u + 203u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[18].w[0] + 148u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94D0u);  if (depth < kMaxDepth) unit_008B(c, 165u, depth + 1u); else { c.pc = 0x0032D470u; return; } if (c.pc != 0x002E94D0u) [[unlikely]] return; }
L_002E94D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[17].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94E4u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002E94E4u) [[unlikely]] return; }
L_002E94E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[0];
    set32(c.r[6], 0u + 11u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9500u);  if (depth < kMaxDepth) unit_006F(c, 66u, depth + 1u); else { c.pc = 0x002BCEA8u; return; } if (c.pc != 0x002E9500u) [[unlikely]] return; }
L_002E9500:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] - 1384u), c.r[5].w[0]);
    c.budget -= 8;
L_002E9520:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 10228u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9584; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + 15024u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9584u);  if (depth < kMaxDepth) unit_0093(c, 140u, depth + 1u); else { c.pc = 0x0034DA00u; return; } if (c.pc != 0x002E9584u) [[unlikely]] return; }
L_002E9584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E95A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 10228u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95C4u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002E95C4u) [[unlikely]] return; }
L_002E95C4:
    st32((c.r[16].w[0] + 10228u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E95E0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[4].w[0] + 9304u);
    st8((c.r[5].w[0] + 9296u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[5].w[0] + 9304u);
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 9297u));
    st8((c.r[5].w[0] + 9298u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 31u);
    st8((c.r[5].w[0] + 9297u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002E9608:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[6].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 16u);
    st64((c.r[7].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9608u | kUnwind; return; } goto L_002E9608; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9638:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] - 18128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] - 18128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9674u);  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E7240u; return; } if (c.pc != 0x002E9674u) [[unlikely]] return; }
L_002E9674:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9688u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002E9688u) [[unlikely]] return; }
L_002E9688:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E96A0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E96E4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E96D8; } }
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E96F0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E96F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E96E4; } }
L_002E96D8:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002E96F0; } }
L_002E96E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E96F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9700:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 8);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[30].d[0] = c.r[6].d[0] >> 48;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.r[23].d[0] = c.r[3].d[0] << 32;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 32);
    c.r[17].d[0] = c.r[6].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9790u);  if (depth < kMaxDepth) unit_006E(c, 124u, depth + 1u); else { c.pc = 0x002B9890u; return; } if (c.pc != 0x002E9790u) [[unlikely]] return; }
L_002E9790:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002E9894; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18128u)));
    set32(c.r[5], c.r[3].w[0] - 18128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E97BC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002E97BC:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E9800; } }
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E97F4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E980C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E980C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9800; } }
L_002E97F4:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E980C; } }
L_002E9800:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9810; } }
L_002E980C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E9810:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9860; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002E9860; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002E9860; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E985C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9860; } }
L_002E985C:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002E9860:
    c.r[2].d[0] = c.r[16].d[0] ^ 254ull;
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[30].w[0]);
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[16].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9894u);  if (depth < kMaxDepth) unit_0073(c, 118u, depth + 1u); else { c.pc = 0x002CDDB8u; return; } if (c.pc != 0x002E9894u) [[unlikely]] return; }
L_002E9894:
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
L_002E98C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 6;
L_002E98E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 12288u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98F8u);  if (depth < kMaxDepth) unit_006C(c, 144u, depth + 1u); else { c.pc = 0x002B1898u; return; } if (c.pc != 0x002E98F8u) [[unlikely]] return; }
L_002E98F8:
    c.r[3].d[0] = c.r[16].sd[0] < 3010ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E98E0u | kUnwind; return; } goto L_002E98E0; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9920:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 15024u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], 0u + 2u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9960u);  if (depth < kMaxDepth) unit_0093(c, 140u, depth + 1u); else { c.pc = 0x0034DA00u; return; } if (c.pc != 0x002E9960u) [[unlikely]] return; }
L_002E9960:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9970:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st16((c.r[16].w[0] + 7708u), static_cast<std::uint16_t>(0u));
    set32(c.r[18], 0u + 322u);
    c.budget -= 16;
L_002E99B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99C0u);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x002E99C0u) [[unlikely]] return; }
L_002E99C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] - 21452u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E9A2C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7708u)));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 7708u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_002E9A1C; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 8);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002E9A1C; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9A2C; } }
L_002E9A1C:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[16].w[0] + 7708u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E99B0u | kUnwind; return; } goto L_002E99B0; } }
L_002E9A2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9A50:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A6Cu);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E9A6Cu) [[unlikely]] return; }
L_002E9A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A98u);  if (depth < kMaxDepth) unit_006C(c, 146u, depth + 1u); else { c.pc = 0x002B18D0u; return; } if (c.pc != 0x002E9A98u) [[unlikely]] return; }
L_002E9A98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9AA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9AB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[5].w[0] - 6617u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AE8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E9AE8u) [[unlikely]] return; }
L_002E9AE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9B14; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B04u);  if (depth < kMaxDepth) unit_0061(c, 158u, depth + 1u); else { c.pc = 0x00285C68u; return; } if (c.pc != 0x002E9B04u) [[unlikely]] return; }
L_002E9B04:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E9B14; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E9B14:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9B30:
    c.r[5].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E9B4C; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9B50; } }
L_002E9B4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E9B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9B58:
    set32(c.r[2], c.r[4].w[0] - 12717u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9B68:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B84u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002E9B84u) [[unlikely]] return; }
L_002E9B84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9BC0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 824u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9BAC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 824u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9BC0; } }
L_002E9BAC:
    set32(c.r[4], c.r[4].w[0] + 456u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 372u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BC0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002E9BC0u) [[unlikely]] return; }
L_002E9BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9BD0:
    st32((c.r[4].w[0] + 9852u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 9856u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9BE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 9856u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9BF4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 9860u), c.r[2].w[0]);
    c.budget -= 2;
L_002E9BF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9C00:
    st32((c.r[4].w[0] + 9860u), 0u);
    st32((c.r[4].w[0] + 9856u), 0u);
    st32((c.r[4].w[0] + 9852u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 9860u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9C60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 9852u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 9852u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E9C60; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 9856u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C54u);  if (depth < kMaxDepth) unit_007A(c, 150u, depth + 1u); else { c.pc = 0x002E9C78u; return; } if (c.pc != 0x002E9C54u) [[unlikely]] return; }
L_002E9C54:
    st32((c.r[16].w[0] + 9860u), 0u);
    st32((c.r[16].w[0] + 9856u), 0u);
    st32((c.r[16].w[0] + 9852u), 0u);
    c.budget -= 3;
L_002E9C60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9C78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002E9CBC; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002E9C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C98u);  if (depth < kMaxDepth) unit_0037(c, 94u, depth + 1u); else { c.pc = 0x001DCB20u; return; } if (c.pc != 0x002E9C98u) [[unlikely]] return; }
L_002E9C98:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CA4u);  if (depth < kMaxDepth) unit_0035(c, 378u, depth + 1u); else { c.pc = 0x001D6730u; return; } if (c.pc != 0x002E9CA4u) [[unlikely]] return; }
L_002E9CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CACu);  if (depth < kMaxDepth) unit_0083(c, 295u, depth + 1u); else { c.pc = 0x0030FA38u; return; } if (c.pc != 0x002E9CACu) [[unlikely]] return; }
L_002E9CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CB4u);  if (depth < kMaxDepth) unit_007D(c, 51u, depth + 1u); else { c.pc = 0x002F4638u; return; } if (c.pc != 0x002E9CB4u) [[unlikely]] return; }
L_002E9CB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9C90u | kUnwind; return; } goto L_002E9C90; } }
L_002E9CBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9CD0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.r[14].d[0] = c.r[6].d[0] >> 48;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[13].d[0] = c.r[3].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[11].d[0] = c.r[9].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[12].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[9].d[0] = c.r[6].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[10].w[0] - 18128u)));
    set32(c.r[15], c.r[10].w[0] - 18128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9D40; } }
    set32(c.r[3], ld32((c.r[15].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002E9D40:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[14].w[0]);
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    c.r[9].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D5Cu);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D9088u; return; } if (c.pc != 0x002E9D5Cu) [[unlikely]] return; }
L_002E9D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9D70:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    c.r[11].d[0] = c.r[6].d[0] >> 48;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[13].d[0] = c.r[3].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[10].d[0] = c.r[8].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[12].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[9].w[0] - 18128u)));
    set32(c.r[14], c.r[9].w[0] - 18128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9DE0; } }
    set32(c.r[3], ld32((c.r[14].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002E9DE0:
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[9].d[0] = c.r[13].d[0] + 0ull;
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DF4u);  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CD558u; return; } if (c.pc != 0x002E9DF4u) [[unlikely]] return; }
L_002E9DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st16((c.r[2].w[0] + 2824u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9E18:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2824u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002E9EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[20], 0u - 1u);
    c.budget -= 7;
L_002E9E70:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0] + 9488u)));
    set32(c.r[16], c.r[5].w[0] >> 16);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E88u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E9E88u) [[unlikely]] return; }
L_002E9E88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[20].d[0];  if (t) { goto L_002E9ED0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 9488u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EA4u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x002E9EA4u) [[unlikely]] return; }
L_002E9EA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_002E9ED0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EC0u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x002E9EC0u) [[unlikely]] return; }
L_002E9EC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9ED0u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x002E9ED0u) [[unlikely]] return; }
L_002E9ED0:
    set32(c.r[19], c.r[19].w[0] - 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9E70u | kUnwind; return; } goto L_002E9E70; } }
L_002E9EE0:
    st16((c.r[22].w[0] + 2824u), static_cast<std::uint16_t>(0u));
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
L_002E9F10:
    c.f[0] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9F28; } }
    c.f[0] = c.f[13];
    c.budget -= 1;
L_002E9F28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9F30:
    c.f[12] = fp::sub(c.f[12], c.f[14]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[13] = fp::sub(c.f[13], c.f[15]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = fp::mul(c.f[12], c.f[12]);
    c.f[13] = fp::mul(c.f[13], c.f[13]);
    c.f[12] = fp::add(c.f[12], c.f[13]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F68u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002E9F68u) [[unlikely]] return; }
L_002E9F68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9F78:
    c.f[12] = fp::sub(c.f[12], c.f[15]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[13] = fp::sub(c.f[13], c.f[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = fp::sub(c.f[14], c.f[17]);
    c.f[12] = fp::mul(c.f[12], c.f[12]);
    c.f[13] = fp::mul(c.f[13], c.f[13]);
    c.f[14] = fp::mul(c.f[14], c.f[14]);
    c.f[12] = fp::add(c.f[12], c.f[13]);
    c.f[12] = fp::add(c.f[12], c.f[14]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FBCu);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002E9FBCu) [[unlikely]] return; }
L_002E9FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[3] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
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
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA02Cu);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002EA02Cu) [[unlikely]] return; }
L_002EA02C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA040:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4992u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 21440u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4996u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002EA0A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[7].w[0] + 5000u), 0u);
    st32((c.r[2].w[0] + 5004u), 0u);
    st32((c.r[8].w[0] + 4996u), c.r[4].w[0]);
    c.budget -= 4;
L_002EA0A8:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002EA0C4; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 5000u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA0DC; } }
L_002EA0C4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002EA134; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 5000u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA134; } }
L_002EA0DC:
    set32(c.r[5], ld32((c.r[16].w[0] - 21440u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    st32((c.r[2].w[0] + 5004u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA118; } }
    st32((c.r[8].w[0] + 4996u), 0u);
    st32((c.r[7].w[0] + 5000u), 0u);
    st32((c.r[16].w[0] - 21440u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA1AC; } }
L_002EA118:
    set32(c.r[2], 0u - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[8].w[0] + 4996u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 5000u), c.r[3].w[0]);
    st32((c.r[16].w[0] - 21440u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA1AC; } }
L_002EA134:
    set32(c.r[4], ld32((c.r[16].w[0] - 21440u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EA1A0; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 5000u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002EA158; } }
    st32((c.r[7].w[0] + 5000u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA1AC; } }
L_002EA158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 5004u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[7].w[0] + 5000u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002EA17C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA190; } }
L_002EA17C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002EA1AC; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA1AC; } }
L_002EA190:
    set32(c.r[2], ld32((c.r[16].w[0] - 21440u)));
    st32((c.r[7].w[0] + 5000u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA1AC; } }
L_002EA1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[7].w[0] + 5000u), 0u);
    st32((c.r[2].w[0] + 5004u), 0u);
    c.budget -= 3;
L_002EA1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[1] = ld32((c.r[7].w[0] + 5000u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[17], c.r[2].w[0] - 17840u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] - 21436u)));
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA1F8; } }
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA230; } }
L_002EA1F8:
    set32(c.r[2], ld32((c.r[16].w[0] - 21440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA238; } }
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA214u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002EA214u) [[unlikely]] return; }
L_002EA214:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[3], 0u - c.r[16].w[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 7;
L_002EA230:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_002EA238:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[18].w[0] - 21436u)));
    set32(c.r[4], ld32((c.r[7].w[0] - 21432u)));
    set32(c.r[6], c.r[19].w[0] - 17840u);
    c.f[0] = ld32((c.r[6].w[0] + 152u));
    set32(c.r[2], c.r[5].w[0] << 1);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    st32((c.r[18].w[0] - 21436u), c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[6].w[0] + 152u), c.f[0]);
    st32((c.r[7].w[0] - 21432u), c.r[3].w[0]);
    c.budget -= 20;
L_002EA288:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA2A8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 144u), c.f[24]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.f[23]);
    c.f[24] = c.f[14];
    st32((c.r[29].w[0] + 128u), c.f[22]);
    c.f[23] = c.f[13];
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[21] = c.f[15];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA440; } }
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EA3A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[20] = 0u;
    c.f[15] = c.f[20];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA350u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA350u) [[unlikely]] return; }
L_002EA350:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.f[15] = c.f[20];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[12] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3A0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA3A0u) [[unlikely]] return; }
L_002EA3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA568; } }
L_002EA3A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[5].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[20] = 0u;
    c.f[15] = c.f[20];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3F4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA3F4u) [[unlikely]] return; }
L_002EA3F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.f[15] = c.f[20];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA560; } }
L_002EA440:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EA580; } }
    set32(c.r[2], 0u + 24u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EA4F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[20] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = c.f[20];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4A4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA4A4u) [[unlikely]] return; }
L_002EA4A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[15] = c.f[20];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA4ECu) [[unlikely]] return; }
L_002EA4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA568; } }
L_002EA4F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[15] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA52Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA52Cu) [[unlikely]] return; }
L_002EA52C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[14] = ld32((c.r[16].w[0] + 12u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[15] = c.f[20];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 13;
L_002EA560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA568u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA568u) [[unlikely]] return; }
L_002EA568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[2].w[0] - 17840u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 152u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAB9C; } }
L_002EA580:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EA6FC; } }
    set32(c.r[2], 0u + 14u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EA648; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[20] = 0u;
    c.f[15] = c.f[20];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5F0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA5F0u) [[unlikely]] return; }
L_002EA5F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.f[15] = c.f[20];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA640u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA640u) [[unlikely]] return; }
L_002EA640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA6E0; } }
L_002EA648:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[5].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[20] = 0u;
    c.f[15] = c.f[20];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA694u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA694u) [[unlikely]] return; }
L_002EA694:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.f[15] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA6E0u) [[unlikely]] return; }
L_002EA6E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.r[1].d[0] = c.r[1].d[0] | 256ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA834; } }
L_002EA6FC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EA85C; } }
    set32(c.r[2], 0u + 28u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EA7B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[20] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = c.f[20];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA760u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA760u) [[unlikely]] return; }
L_002EA760:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[15] = c.f[20];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA7A8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA7A8u) [[unlikely]] return; }
L_002EA7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA824; } }
L_002EA7B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[15] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA7E8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA7E8u) [[unlikely]] return; }
L_002EA7E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[14] = ld32((c.r[16].w[0] + 12u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[15] = c.f[20];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA824u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA824u) [[unlikely]] return; }
L_002EA824:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35800000u);
    c.f[1] = c.r[1].w[0];
    c.budget -= 4;
L_002EA834:
    set32(c.r[4], c.r[3].w[0] - 17840u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAB9C; } }
L_002EA85C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EAA28; } }
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EA920; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[20] = 0u;
    c.f[15] = c.f[20];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA8C8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA8C8u) [[unlikely]] return; }
L_002EA8C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.f[15] = c.f[20];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA918u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA918u) [[unlikely]] return; }
L_002EA918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA9B8; } }
L_002EA920:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[5].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[20] = 0u;
    c.f[15] = c.f[20];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA96Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA96Cu) [[unlikely]] return; }
L_002EA96C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.f[15] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA9B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EA9B8u) [[unlikely]] return; }
L_002EA9B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.r[1].d[0] = c.r[1].d[0] | 256ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[3].w[0] - 17840u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65280ull;
    c.f[2] = c.r[1].w[0];
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 14u));
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[3]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA20u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x002EAA20u) [[unlikely]] return; }
L_002EAA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAB9C; } }
L_002EAA28:
    set32(c.r[2], 0u + 5u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EAB9C; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EAAD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[20] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = c.f[20];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA90u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EAA90u) [[unlikely]] return; }
L_002EAA90:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[15] = c.f[20];
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAD0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EAAD0u) [[unlikely]] return; }
L_002EAAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAB44; } }
L_002EAAD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[15] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB10u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EAB10u) [[unlikely]] return; }
L_002EAB10:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[14] = ld32((c.r[16].w[0] + 12u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = c.f[20];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB44u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EAB44u) [[unlikely]] return; }
L_002EAB44:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], c.r[3].w[0] - 17840u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.f[12] = fp::mul(c.f[12], c.f[3]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB9Cu);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x002EAB9Cu) [[unlikely]] return; }
L_002EAB9C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[21];
    set32(c.r[16], c.r[17].w[0] - 17840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABB4u);  if (depth < kMaxDepth) unit_005B(c, 203u, depth + 1u); else { c.pc = 0x0026E1F0u; return; } if (c.pc != 0x002EABB4u) [[unlikely]] return; }
L_002EABB4:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABC8u);  if (depth < kMaxDepth) unit_005B(c, 203u, depth + 1u); else { c.pc = 0x0026E1F0u; return; } if (c.pc != 0x002EABC8u) [[unlikely]] return; }
L_002EABC8:
    c.f[2] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[22]);
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.f[5] = fp::add(c.f[5], c.f[23]);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[3] = fp::add(c.f[3], c.f[24]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[4] = fp::add(c.f[4], c.f[22]);
    c.f[1] = fp::add(c.f[1], c.f[23]);
    st32((c.r[16].w[0] + 128u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[24]);
    st32((c.r[16].w[0] + 132u), c.f[5]);
    st32((c.r[16].w[0] + 136u), c.f[3]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 208u), c.f[4]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC24u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002EAC24u) [[unlikely]] return; }
L_002EAC24:
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC48u);  if (depth < kMaxDepth) unit_0045(c, 104u, depth + 1u); else { c.pc = 0x00215DA0u; return; } if (c.pc != 0x002EAC48u) [[unlikely]] return; }
L_002EAC48:
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC60u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002EAC60u) [[unlikely]] return; }
L_002EAC60:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[16].w[0] + 144u), c.f[1]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EACA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EACCC; } }
L_002EACA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EACD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_002EACCC:
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.budget -= 1;
L_002EACD0:
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACE0u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002EACE0u) [[unlikely]] return; }
L_002EACE0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[17].w[0] - 17840u);
    c.f[2] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    st32((c.r[3].w[0] + 148u), c.f[2]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAD2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAD4C; } }
L_002EAD2C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAD50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 4;
L_002EAD4C:
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002EAD50:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[24] = ld32((c.r[29].w[0] + 144u));
    c.f[23] = ld32((c.r[29].w[0] + 136u));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EAD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EB48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[17], c.r[2].w[0] + 12320u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADE4u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x002EADE4u) [[unlikely]] return; }
L_002EADE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAEB4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADF8u);  if (depth < kMaxDepth) unit_006C(c, 260u, depth + 1u); else { c.pc = 0x002B2BF0u; return; } if (c.pc != 0x002EADF8u) [[unlikely]] return; }
L_002EADF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002EAEE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 5012u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EAE24; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 5012u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE24u);  if (depth < kMaxDepth) unit_0083(c, 146u, depth + 1u); else { c.pc = 0x0030DE20u; return; } if (c.pc != 0x002EAE24u) [[unlikely]] return; }
L_002EAE24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE30u);  if (depth < kMaxDepth) unit_006C(c, 262u, depth + 1u); else { c.pc = 0x002B2C40u; return; } if (c.pc != 0x002EAE30u) [[unlikely]] return; }
L_002EAE30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE44u);  if (depth < kMaxDepth) unit_006C(c, 243u, depth + 1u); else { c.pc = 0x002B29B8u; return; } if (c.pc != 0x002EAE44u) [[unlikely]] return; }
L_002EAE44:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[7], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE70u);  if (depth < kMaxDepth) unit_007A(c, 176u, depth + 1u); else { c.pc = 0x002EA2A8u; return; } if (c.pc != 0x002EAE70u) [[unlikely]] return; }
L_002EAE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB48C; } }
L_002EAE7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    st16((c.r[2].w[0] + 2746u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 4980u), c.f[0]);
    st16((c.r[3].w[0] + 22266u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAFF0; } }
L_002EAEB4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 5012u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAEE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAECCu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EAECCu) [[unlikely]] return; }
L_002EAECC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAED8u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x002EAED8u) [[unlikely]] return; }
L_002EAED8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 500u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 5012u), 0u);
    c.budget -= 3;
L_002EAEE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 17288u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EAFFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 17312u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EAFF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 27456u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[22], 0u + 8u);
    c.budget -= 6;
L_002EAF28:
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF38u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002EAF38u) [[unlikely]] return; }
L_002EAF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAFDC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EAFDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EAFDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002EAF80; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EAF80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_002EAF80:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF94u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002ADC50u; return; } if (c.pc != 0x002EAF94u) [[unlikely]] return; }
L_002EAF94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFA8u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002ADC50u; return; } if (c.pc != 0x002EAFA8u) [[unlikely]] return; }
L_002EAFA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFB8u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002ADC50u; return; } if (c.pc != 0x002EAFB8u) [[unlikely]] return; }
L_002EAFB8:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EAFD0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9968u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[17].d[0];
    c.budget -= 3;
L_002EAFD0:
    st32((c.r[21].w[0] - 17288u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAE7Cu | kUnwind; return; } goto L_002EAE7C; } }
L_002EAFDC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.r[2].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAF28u | kUnwind; return; } goto L_002EAF28; } }
L_002EAFF0:
    set32(c.r[2], ld32((c.r[21].w[0] - 17288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB018; } }
L_002EAFFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 17280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB018; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9968u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB02C; } }
L_002EB018:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002EB030; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9968u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB030; } }
L_002EB02C:
    st32((c.r[21].w[0] - 17288u), 0u);
    c.budget -= 1;
L_002EB030:
    set32(c.r[2], ld32((c.r[21].w[0] - 17288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB408; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 4980u));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB130; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[3].w[0] + 5008u), c.r[2].w[0]);
    st32((c.r[4].w[0] - 17284u), c.r[19].w[0]);
    st32((c.r[20].w[0] - 17280u), c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB08Cu);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x002EB08Cu) [[unlikely]] return; }
L_002EB08C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[12] = c.r[1].w[0];
    st32((c.r[2].w[0] - 17252u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0A4u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x002EB0A4u) [[unlikely]] return; }
L_002EB0A4:
    set32(c.r[2], ld32((c.r[22].w[0] + 4988u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] - 17304u);
    c.f[2] = ld32((c.r[2].w[0] - 17304u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[30].w[0] - 17264u), c.f[0]);
    st32((c.r[23].w[0] - 17268u), c.f[1]);
    st32((c.r[5].w[0] + 4980u), c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB0F8; } }
L_002EB0DC:
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[18].w[0] + 128u));
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[30].w[0] - 17264u), c.f[0]);
    st32((c.r[23].w[0] - 17268u), c.f[1]);
    st32((c.r[2].w[0] + 4980u), c.f[2]);
    c.budget -= 7;
L_002EB0F8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4988u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB114; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 17280u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EB128; } }
L_002EB114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 17260u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB130; } }
L_002EB128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[2].w[0] - 17260u), 0u);
    c.budget -= 2;
L_002EB130:
    set32(c.r[2], ld32((c.r[22].w[0] + 4988u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] - 17292u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB164; } }
L_002EB154:
    set32(c.r[2], ld32((c.r[20].w[0] - 17280u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 4;
L_002EB164:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB178u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EB178u) [[unlikely]] return; }
L_002EB178:
    c.f[20] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB1B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB1DC; } }
L_002EB1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB1DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_002EB1DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17256u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB1FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[2].w[0] - 17272u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB20C; } }
L_002EB1FC:
    set32(c.r[4], ld32((c.r[20].w[0] - 17280u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[3].w[0] - 17272u), c.r[2].w[0]);
    c.budget -= 4;
L_002EB20C:
    set32(c.r[2], ld32((c.r[22].w[0] + 4988u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB238; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 17280u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[3].w[0] + 4980u), c.f[0]);
    st32((c.r[23].w[0] - 17268u), c.f[1]);
    st32((c.r[30].w[0] - 17264u), c.f[2]);
    c.budget -= 8;
L_002EB238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[17], ld32((c.r[21].w[0] - 17288u)));
    set32(c.r[19], ld32((c.r[4].w[0] - 17260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[23] = ld32((c.r[23].w[0] - 17268u));
    set32(c.r[2], 0u + 512u);
    c.f[22] = ld32((c.r[30].w[0] - 17264u));
    set32(c.r[18], ld32((c.r[5].w[0] - 17272u)));
    c.f[21] = ld32((c.r[4].w[0] + 4980u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EB2DC; } }
    set32(c.r[2], 0u + 768u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB288; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB2DC; } }
L_002EB288:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB2A0; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB2DC; } }
L_002EB2A0:
    set32(c.r[2], 0u + 1280u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB2B8; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB2DC; } }
L_002EB2B8:
    set32(c.r[2], 0u + 3072u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB2D0; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB2DC; } }
L_002EB2D0:
    c.r[2].d[0] = c.r[3].d[0] ^ 3328ull;
    set32(c.r[16], 0u + 5u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.budget -= 3;
L_002EB2DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2F0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002EB2F0u) [[unlikely]] return; }
L_002EB2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB314; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB30Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002EB30Cu) [[unlikely]] return; }
L_002EB30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB33C; } }
L_002EB314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.f[12] = c.f[21];
    c.f[13] = c.f[23];
    c.f[14] = c.f[22];
    c.f[15] = c.f[20];
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB33Cu);  if (depth < kMaxDepth) unit_007A(c, 176u, depth + 1u); else { c.pc = 0x002EA2A8u; return; } if (c.pc != 0x002EB33Cu) [[unlikely]] return; }
L_002EB33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB344u);  if (depth < kMaxDepth) unit_0083(c, 124u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x002EB344u) [[unlikely]] return; }
L_002EB344:
    set32(c.r[2], ld32((c.r[21].w[0] - 17288u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[5].w[0] - 17272u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB37C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[20].w[0] - 17280u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 17284u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EB3F4; } }
L_002EB37C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[12] = ld32((c.r[16].w[0] - 17252u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB38Cu);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x002EB38Cu) [[unlikely]] return; }
L_002EB38C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 4976u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[4].w[0] + 5008u), 0u);
    st32((c.r[5].w[0] + 4980u), c.f[0]);
    st32((c.r[2].w[0] - 17284u), 0u);
    st32((c.r[20].w[0] - 17280u), 0u);
    st32((c.r[21].w[0] - 17288u), 0u);
    st32((c.r[16].w[0] - 17252u), 0u);
    st32((c.r[22].w[0] + 4988u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3D4u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EB3D4u) [[unlikely]] return; }
L_002EB3D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3E0u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x002EB3E0u) [[unlikely]] return; }
L_002EB3E0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 500u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB48C; } }
L_002EB3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3FCu);  if (depth < kMaxDepth) unit_007A(c, 174u, depth + 1u); else { c.pc = 0x002EA040u; return; } if (c.pc != 0x002EB3FCu) [[unlikely]] return; }
L_002EB3FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB48C; } }
L_002EB408:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 5008u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB470; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[12] = ld32((c.r[16].w[0] - 17252u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB428u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x002EB428u) [[unlikely]] return; }
L_002EB428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[4].w[0] + 4980u), c.f[0]);
    st32((c.r[3].w[0] - 17280u), 0u);
    st32((c.r[2].w[0] - 17284u), 0u);
    st32((c.r[17].w[0] + 5008u), 0u);
    st32((c.r[16].w[0] - 17252u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB45Cu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EB45Cu) [[unlikely]] return; }
L_002EB45C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB468u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x002EB468u) [[unlikely]] return; }
L_002EB468:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 500u), c.r[3].w[0]);
    c.budget -= 2;
L_002EB470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[21].w[0] - 17288u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4980u), c.f[0]);
    c.budget -= 7;
L_002EB48C:
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
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB4D0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[29].w[0] + 256u);
    c.f[12] = 0u;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.f[15] = c.f[14];
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 376u), c.f[21]);
    st32((c.r[29].w[0] + 368u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB51Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EB51Cu) [[unlikely]] return; }
L_002EB51C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB53Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002EB53Cu) [[unlikely]] return; }
L_002EB53C:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB54Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002EB54Cu) [[unlikely]] return; }
L_002EB54C:
    set32(c.r[18], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB55Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002EB55Cu) [[unlikely]] return; }
L_002EB55C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 17840u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 144u));
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB584u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x002EB584u) [[unlikely]] return; }
L_002EB584:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5A4u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002EB5A4u) [[unlikely]] return; }
L_002EB5A4:
    c.f[12] = ld32((c.r[16].w[0] + 152u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5C4u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x002EB5C4u) [[unlikely]] return; }
L_002EB5C4:
    set32(c.r[16], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5DCu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002EB5DCu) [[unlikely]] return; }
L_002EB5DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5F0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EB5F0u) [[unlikely]] return; }
L_002EB5F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB600u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EB600u) [[unlikely]] return; }
L_002EB600:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 376u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] + 4992u), 0u);
    st32((c.r[3].w[0] + 4996u), 0u);
    st32((c.r[4].w[0] + 5000u), 0u);
    st32((c.r[5].w[0] + 5004u), 0u);
    st32((c.r[6].w[0] - 21440u), 0u);
    st32((c.r[7].w[0] - 21436u), 0u);
    st32((c.r[8].w[0] - 21432u), 0u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6A4u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002ADC50u; return; } if (c.pc != 0x002EB6A4u) [[unlikely]] return; }
L_002EB6A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6B8u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002ADC50u; return; } if (c.pc != 0x002EB6B8u) [[unlikely]] return; }
L_002EB6B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6C8u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002ADC50u; return; } if (c.pc != 0x002EB6C8u) [[unlikely]] return; }
L_002EB6C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EB6E0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 9968u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[18].d[0];
    c.budget -= 3;
L_002EB6E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB708:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB718:
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EB744; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EB744; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_002EB744:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB750:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 512u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.f[23] = c.f[15];
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.f[22] = c.f[14];
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[21] = c.f[13];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EB814; } }
    set32(c.r[2], 0u + 768u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB7C0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB814; } }
L_002EB7C0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB7D8; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB814; } }
L_002EB7D8:
    set32(c.r[2], 0u + 1280u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB7F0; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB814; } }
L_002EB7F0:
    set32(c.r[2], 0u + 3072u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB808; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB814; } }
L_002EB808:
    c.r[2].d[0] = c.r[3].d[0] ^ 3328ull;
    set32(c.r[16], 0u + 5u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.budget -= 3;
L_002EB814:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB828u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002EB828u) [[unlikely]] return; }
L_002EB828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB84C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB844u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002EB844u) [[unlikely]] return; }
L_002EB844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB874; } }
L_002EB84C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.f[14] = c.f[22];
    c.f[15] = c.f[23];
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB874u);  if (depth < kMaxDepth) unit_007A(c, 176u, depth + 1u); else { c.pc = 0x002EA2A8u; return; } if (c.pc != 0x002EB874u) [[unlikely]] return; }
L_002EB874:
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
L_002EB8A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8B8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EB8B8u) [[unlikely]] return; }
L_002EB8B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB8D0u) [[unlikely]] return; }
L_002EB8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8D8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x002EB8D8u) [[unlikely]] return; }
L_002EB8D8:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB8F0u) [[unlikely]] return; }
L_002EB8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8F8u);  if (depth < kMaxDepth) unit_007A(c, 265u, depth + 1u); else { c.pc = 0x002EB940u; return; } if (c.pc != 0x002EB8F8u) [[unlikely]] return; }
L_002EB8F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 4992u), 0u);
    st32((c.r[3].w[0] + 4996u), 0u);
    st32((c.r[4].w[0] + 5000u), 0u);
    st32((c.r[5].w[0] + 5004u), 0u);
    st32((c.r[6].w[0] - 21440u), 0u);
    st32((c.r[7].w[0] - 21436u), 0u);
    st32((c.r[8].w[0] - 21432u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 4980u), c.f[0]);
    st32((c.r[8].w[0] - 17272u), 0u);
    st32((c.r[3].w[0] - 17288u), 0u);
    st32((c.r[4].w[0] - 17284u), 0u);
    st32((c.r[5].w[0] - 17280u), 0u);
    st32((c.r[6].w[0] + 5008u), 0u);
    st32((c.r[7].w[0] + 5012u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17280u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EB9B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 5008u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EB9B8; } }
L_002EB9B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EB9B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9D4u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002EB9D4u) [[unlikely]] return; }
L_002EB9D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[16], c.r[3].w[0] - 27280u);
    set32(c.r[5], ld32((c.r[4].w[0] + 10264u)));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002EBA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9F8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x002EB9F8u) [[unlikely]] return; }
L_002EB9F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBA10u) [[unlikely]] return; }
L_002EBA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA18u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EBA18u) [[unlikely]] return; }
L_002EBA18:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBA30u) [[unlikely]] return; }
L_002EBA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA38u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EBA38u) [[unlikely]] return; }
L_002EBA38:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBA50u) [[unlikely]] return; }
L_002EBA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA58u);  if (depth < kMaxDepth) unit_007A(c, 174u, depth + 1u); else { c.pc = 0x002EA040u; return; } if (c.pc != 0x002EBA58u) [[unlikely]] return; }
L_002EBA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA60u);  if (depth < kMaxDepth) unit_0083(c, 124u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x002EBA60u) [[unlikely]] return; }
L_002EBA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA68u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002EBA68u) [[unlikely]] return; }
L_002EBA68:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002EBA6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA94u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002EBA94u) [[unlikely]] return; }
L_002EBA94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[16], c.r[3].w[0] - 27280u);
    set32(c.r[5], ld32((c.r[4].w[0] + 10264u)));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002EBB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAB8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x002EBAB8u) [[unlikely]] return; }
L_002EBAB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBAD0u) [[unlikely]] return; }
L_002EBAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAD8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EBAD8u) [[unlikely]] return; }
L_002EBAD8:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBAF0u) [[unlikely]] return; }
L_002EBAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAF8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EBAF8u) [[unlikely]] return; }
L_002EBAF8:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBB10u) [[unlikely]] return; }
L_002EBB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB18u);  if (depth < kMaxDepth) unit_007A(c, 174u, depth + 1u); else { c.pc = 0x002EA040u; return; } if (c.pc != 0x002EBB18u) [[unlikely]] return; }
L_002EBB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB20u);  if (depth < kMaxDepth) unit_0083(c, 124u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x002EBB20u) [[unlikely]] return; }
L_002EBB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB28u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002EBB28u) [[unlikely]] return; }
L_002EBB28:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002EBB2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBB40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], c.r[17].w[0] + 4848u);
    set32(c.r[16], c.r[16].w[0] + 4960u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB78u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x002EBB78u) [[unlikely]] return; }
L_002EBB78:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB8Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002EBB8Cu) [[unlikely]] return; }
L_002EBB8C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBA4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002EBBA4u) [[unlikely]] return; }
L_002EBBA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBB4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EBBB4u) [[unlikely]] return; }
L_002EBBB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 4960u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[5].w[0] - 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBF8u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002EBBF8u) [[unlikely]] return; }
L_002EBBF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC08u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EBC08u) [[unlikely]] return; }
L_002EBC08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBC20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 4960u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], c.r[16].w[0] - 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC50u);  if (depth < kMaxDepth) unit_007A(c, 237u, depth + 1u); else { c.pc = 0x002EB4D0u; return; } if (c.pc != 0x002EBC50u) [[unlikely]] return; }
L_002EBC50:
    set32(c.r[19], c.r[16].w[0] - 32u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4848u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC6Cu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x002EBC6Cu) [[unlikely]] return; }
L_002EBC6C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC80u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002EBC80u) [[unlikely]] return; }
L_002EBC80:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC94u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002EBC94u) [[unlikely]] return; }
L_002EBC94:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCA4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EBCA4u) [[unlikely]] return; }
L_002EBCA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCB8u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002EBCB8u) [[unlikely]] return; }
L_002EBCB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCC8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EBCC8u) [[unlikely]] return; }
L_002EBCC8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBCE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD00u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x002EBD00u) [[unlikely]] return; }
L_002EBD00:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBD1Cu) [[unlikely]] return; }
L_002EBD1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBD98; } }
    c.f[0] = ld32((c.r[5].w[0] + 100u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 104u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 108u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 116u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 120u));
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 3u, depth); } }
L_002EBD98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x489C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC89C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 10;
L_002EBDC0:
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBDC0u | kUnwind; return; } goto L_002EBDC0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBF28; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE00u);  if (depth < kMaxDepth) unit_008F(c, 409u, depth + 1u); else { c.pc = 0x0033FC20u; return; } if (c.pc != 0x002EBE00u) [[unlikely]] return; }
L_002EBE00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 3u, depth); } }
    c.budget -= 1;
L_002EBE10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBE38; } }
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_002EBE38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBE60; } }
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_002EBE60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBE88; } }
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_002EBE88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBEB0; } }
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 1;
L_002EBEB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBED8; } }
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_002EBED8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBF00; } }
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_002EBF00:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF14u);  if (depth < kMaxDepth) unit_008F(c, 413u, depth + 1u); else { c.pc = 0x0033FDF0u; return; } if (c.pc != 0x002EBF14u) [[unlikely]] return; }
L_002EBF14:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBE10u | kUnwind; return; } goto L_002EBE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 3u, depth); } }
L_002EBF28:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF3Cu);  if (depth < kMaxDepth) unit_008F(c, 409u, depth + 1u); else { c.pc = 0x0033FC20u; return; } if (c.pc != 0x002EBF3Cu) [[unlikely]] return; }
L_002EBF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 3u, depth); } }
    c.budget -= 1;
L_002EBF48:
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBF64; } }
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_002EBF64:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBF80; } }
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_002EBF80:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBF9C; } }
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_002EBF9C:
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBFB8; } }
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 1;
L_002EBFB8:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBFD4; } }
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_002EBFD4:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBFF0; } }
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_002EBFF0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC004u);  if (depth < kMaxDepth) unit_008F(c, 413u, depth + 1u); else { c.pc = 0x0033FDF0u; return; } if (c.pc != 0x002EC004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007B(c, 2u, depth);
}

}
