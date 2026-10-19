#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0026BCF8;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0,
    163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0,
    0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0,
    0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_0026800C;
    case 3u: goto L_00268024;
    case 4u: goto L_00268038;
    case 5u: goto L_00268058;
    case 6u: goto L_00268068;
    case 7u: goto L_00268084;
    case 8u: goto L_002680B0;
    case 9u: goto L_002680C0;
    case 10u: goto L_002680DC;
    case 11u: goto L_002680F0;
    case 12u: goto L_00268108;
    case 13u: goto L_00268134;
    case 14u: goto L_00268148;
    case 15u: goto L_00268158;
    case 16u: goto L_00268168;
    case 17u: goto L_00268198;
    case 18u: goto L_002681A4;
    case 19u: goto L_002681B4;
    case 20u: goto L_002681CC;
    case 21u: goto L_002681D8;
    case 22u: goto L_002681E4;
    case 23u: goto L_002681F0;
    case 24u: goto L_00268218;
    case 25u: goto L_00268370;
    case 26u: goto L_00268384;
    case 27u: goto L_002683A0;
    case 28u: goto L_002683F8;
    case 29u: goto L_0026844C;
    case 30u: goto L_00268530;
    case 31u: goto L_00268580;
    case 32u: goto L_00268600;
    case 33u: goto L_00268620;
    case 34u: goto L_00268638;
    case 35u: goto L_00268648;
    case 36u: goto L_0026868C;
    case 37u: goto L_0026869C;
    case 38u: goto L_002686A8;
    case 39u: goto L_00268758;
    case 40u: goto L_00268770;
    case 41u: goto L_00268780;
    case 42u: goto L_002687BC;
    case 43u: goto L_002687CC;
    case 44u: goto L_002687E0;
    case 45u: goto L_002687F0;
    case 46u: goto L_00268800;
    case 47u: goto L_00268810;
    case 48u: goto L_00268820;
    case 49u: goto L_00268830;
    case 50u: goto L_00268848;
    case 51u: goto L_00268870;
    case 52u: goto L_00268890;
    case 53u: goto L_002688E4;
    case 54u: goto L_002688FC;
    case 55u: goto L_00268910;
    case 56u: goto L_00268954;
    case 57u: goto L_00268964;
    case 58u: goto L_0026897C;
    case 59u: goto L_0026898C;
    case 60u: goto L_0026899C;
    case 61u: goto L_002689AC;
    case 62u: goto L_002689BC;
    case 63u: goto L_002689CC;
    case 64u: goto L_002689DC;
    case 65u: goto L_002689EC;
    case 66u: goto L_00268A04;
    case 67u: goto L_00268A28;
    case 68u: goto L_00268A4C;
    case 69u: goto L_00268A6C;
    case 70u: goto L_00268A8C;
    case 71u: goto L_00268A98;
    case 72u: goto L_00268AA4;
    case 73u: goto L_00268AE0;
    case 74u: goto L_00268B90;
    case 75u: goto L_00268BA0;
    case 76u: goto L_00268BB0;
    case 77u: goto L_00268BF0;
    case 78u: goto L_00268C0C;
    case 79u: goto L_00268C20;
    case 80u: goto L_00268C34;
    case 81u: goto L_00268C40;
    case 82u: goto L_00268C4C;
    case 83u: goto L_00268C5C;
    case 84u: goto L_00268C70;
    case 85u: goto L_00268C84;
    case 86u: goto L_00268C9C;
    case 87u: goto L_00268CAC;
    case 88u: goto L_00268CD0;
    case 89u: goto L_00268CF8;
    case 90u: goto L_00268D1C;
    case 91u: goto L_00268D48;
    case 92u: goto L_00268D54;
    case 93u: goto L_00268D6C;
    case 94u: goto L_00268D84;
    case 95u: goto L_00268D94;
    case 96u: goto L_00268DD8;
    case 97u: goto L_00268DF8;
    case 98u: goto L_00268E0C;
    case 99u: goto L_00268E20;
    case 100u: goto L_00268E38;
    case 101u: goto L_00268E54;
    case 102u: goto L_00268E74;
    case 103u: goto L_00268E8C;
    case 104u: goto L_00268E98;
    case 105u: goto L_00268EA4;
    case 106u: goto L_00268EC0;
    case 107u: goto L_00268F4C;
    case 108u: goto L_00268FFC;
    case 109u: goto L_0026900C;
    case 110u: goto L_0026901C;
    case 111u: goto L_0026905C;
    case 112u: goto L_00269074;
    case 113u: goto L_00269088;
    case 114u: goto L_0026909C;
    case 115u: goto L_002690A8;
    case 116u: goto L_002690B4;
    case 117u: goto L_002690C4;
    case 118u: goto L_002690D8;
    case 119u: goto L_002690EC;
    case 120u: goto L_00269108;
    case 121u: goto L_00269118;
    case 122u: goto L_0026913C;
    case 123u: goto L_00269170;
    case 124u: goto L_002692A0;
    case 125u: goto L_002692B0;
    case 126u: goto L_002692C0;
    case 127u: goto L_00269300;
    case 128u: goto L_00269318;
    case 129u: goto L_0026932C;
    case 130u: goto L_00269340;
    case 131u: goto L_0026934C;
    case 132u: goto L_00269358;
    case 133u: goto L_00269368;
    case 134u: goto L_0026937C;
    case 135u: goto L_00269390;
    case 136u: goto L_002693AC;
    case 137u: goto L_002693BC;
    case 138u: goto L_002693E0;
    case 139u: goto L_00269500;
    case 140u: goto L_00269510;
    case 141u: goto L_00269520;
    case 142u: goto L_00269560;
    case 143u: goto L_00269578;
    case 144u: goto L_0026958C;
    case 145u: goto L_002695A0;
    case 146u: goto L_002695AC;
    case 147u: goto L_002695B8;
    case 148u: goto L_002695C8;
    case 149u: goto L_002695DC;
    case 150u: goto L_002695F0;
    case 151u: goto L_0026960C;
    case 152u: goto L_0026961C;
    case 153u: goto L_00269640;
    case 154u: goto L_00269678;
    case 155u: goto L_002696B0;
    case 156u: goto L_002696E4;
    case 157u: goto L_00269744;
    case 158u: goto L_00269768;
    case 159u: goto L_0026978C;
    case 160u: goto L_002697A8;
    case 161u: goto L_002697E8;
    case 162u: goto L_002697F4;
    case 163u: goto L_00269800;
    case 164u: goto L_0026980C;
    case 165u: goto L_00269818;
    case 166u: goto L_00269820;
    case 167u: goto L_00269900;
    case 168u: goto L_00269948;
    case 169u: goto L_0026997C;
    case 170u: goto L_002699EC;
    case 171u: goto L_00269A10;
    case 172u: goto L_00269A34;
    case 173u: goto L_00269A60;
    case 174u: goto L_00269AB8;
    case 175u: goto L_00269AC4;
    case 176u: goto L_00269AD0;
    case 177u: goto L_00269ADC;
    case 178u: goto L_00269AE8;
    case 179u: goto L_00269AF0;
    case 180u: goto L_00269BD8;
    case 181u: goto L_00269C6C;
    case 182u: goto L_00269CA0;
    case 183u: goto L_00269CE4;
    case 184u: goto L_00269D14;
    case 185u: goto L_00269D28;
    case 186u: goto L_00269DD0;
    case 187u: goto L_00269E10;
    case 188u: goto L_00269E28;
    case 189u: goto L_00269E58;
    case 190u: goto L_00269E68;
    case 191u: goto L_00269F10;
    case 192u: goto L_00269F38;
    case 193u: goto L_00269FD8;
    case 194u: goto L_0026A080;
    case 195u: goto L_0026A0C0;
    case 196u: goto L_0026A0D8;
    case 197u: goto L_0026A108;
    case 198u: goto L_0026A118;
    case 199u: goto L_0026A1C0;
    case 200u: goto L_0026A1E8;
    case 201u: goto L_0026A25C;
    case 202u: goto L_0026A2B0;
    case 203u: goto L_0026A32C;
    case 204u: goto L_0026A370;
    case 205u: goto L_0026A394;
    case 206u: goto L_0026A3B0;
    case 207u: goto L_0026A430;
    case 208u: goto L_0026A454;
    case 209u: goto L_0026A470;
    case 210u: goto L_0026A528;
    case 211u: goto L_0026A560;
    case 212u: goto L_0026A65C;
    case 213u: goto L_0026A6AC;
    case 214u: goto L_0026A6C4;
    case 215u: goto L_0026A6FC;
    case 216u: goto L_0026A714;
    case 217u: goto L_0026A738;
    case 218u: goto L_0026A788;
    case 219u: goto L_0026A7E8;
    case 220u: goto L_0026A928;
    case 221u: goto L_0026AA1C;
    case 222u: goto L_0026AA40;
    case 223u: goto L_0026AA70;
    case 224u: goto L_0026AA88;
    case 225u: goto L_0026AAC4;
    case 226u: goto L_0026AADC;
    case 227u: goto L_0026AB08;
    case 228u: goto L_0026AB88;
    case 229u: goto L_0026AC18;
    case 230u: goto L_0026AD78;
    case 231u: goto L_0026AE54;
    case 232u: goto L_0026AE90;
    case 233u: goto L_0026AED0;
    case 234u: goto L_0026AF18;
    case 235u: goto L_0026AF64;
    case 236u: goto L_0026AFA4;
    case 237u: goto L_0026AFC8;
    case 238u: goto L_0026B030;
    case 239u: goto L_0026B060;
    case 240u: goto L_0026B074;
    case 241u: goto L_0026B090;
    case 242u: goto L_0026B0F4;
    case 243u: goto L_0026B150;
    case 244u: goto L_0026B1A4;
    case 245u: goto L_0026B1D8;
    case 246u: goto L_0026B20C;
    case 247u: goto L_0026B218;
    case 248u: goto L_0026B230;
    case 249u: goto L_0026B240;
    case 250u: goto L_0026B384;
    case 251u: goto L_0026B398;
    case 252u: goto L_0026B46C;
    case 253u: goto L_0026B484;
    case 254u: goto L_0026B498;
    case 255u: goto L_0026B4B8;
    case 256u: goto L_0026B4D0;
    case 257u: goto L_0026B4E4;
    case 258u: goto L_0026B4F0;
    case 259u: goto L_0026B508;
    case 260u: goto L_0026B514;
    case 261u: goto L_0026B548;
    case 262u: goto L_0026B6B0;
    case 263u: goto L_0026B6D0;
    case 264u: goto L_0026B6E0;
    case 265u: goto L_0026B6FC;
    case 266u: goto L_0026B710;
    case 267u: goto L_0026B768;
    case 268u: goto L_0026B784;
    case 269u: goto L_0026B79C;
    case 270u: goto L_0026B7A4;
    case 271u: goto L_0026B7B0;
    case 272u: goto L_0026B7C0;
    case 273u: goto L_0026B7C8;
    case 274u: goto L_0026B808;
    case 275u: goto L_0026B83C;
    case 276u: goto L_0026B868;
    case 277u: goto L_0026B958;
    case 278u: goto L_0026B96C;
    case 279u: goto L_0026B97C;
    case 280u: goto L_0026B998;
    case 281u: goto L_0026B9A8;
    case 282u: goto L_0026B9C4;
    case 283u: goto L_0026B9D4;
    case 284u: goto L_0026B9F0;
    case 285u: goto L_0026BA38;
    case 286u: goto L_0026BA58;
    case 287u: goto L_0026BAB0;
    case 288u: goto L_0026BAB4;
    case 289u: goto L_0026BAC0;
    case 290u: goto L_0026BAD0;
    case 291u: goto L_0026BB00;
    case 292u: goto L_0026BB64;
    case 293u: goto L_0026BB78;
    case 294u: goto L_0026BB88;
    case 295u: goto L_0026BB94;
    case 296u: goto L_0026BBA8;
    case 297u: goto L_0026BBE8;
    case 298u: goto L_0026BC00;
    case 299u: goto L_0026BC2C;
    case 300u: goto L_0026BC50;
    case 301u: goto L_0026BC60;
    case 302u: goto L_0026BC70;
    case 303u: goto L_0026BC84;
    case 304u: goto L_0026BC90;
    case 305u: goto L_0026BC9C;
    case 306u: goto L_0026BCAC;
    case 307u: goto L_0026BCC0;
    case 308u: goto L_0026BCF8;
    case 309u: goto L_0026BD70;
    case 310u: goto L_0026BDA0;
    case 311u: goto L_0026BE30;
    case 312u: goto L_0026BE88;
    case 313u: goto L_0026BE98;
    case 314u: goto L_0026BEAC;
    case 315u: goto L_0026BEC4;
    case 316u: goto L_0026BEEC;
    case 317u: goto L_0026BF00;
    case 318u: goto L_0026BF90;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    c.r[6].d[0] = c.r[6].d[0] | 72ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026800Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026800Cu) [[unlikely]] return; }
L_0026800C:
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_00268110; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268024u);  if (depth < kMaxDepth) unit_005D(c, 108u, depth + 1u); else { c.pc = 0x00275618u; return; } if (c.pc != 0x00268024u) [[unlikely]] return; }
L_00268024:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268038u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268038u) [[unlikely]] return; }
L_00268038:
    set32(c.r[2], ld32((c.r[21].w[0] - 18600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026809C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[16].w[0] + 17616u);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268058u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x00268058u) [[unlikely]] return; }
L_00268058:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.r[17].d[0] = c.r[2].d[0] << 4;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268068u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x00268068u) [[unlikely]] return; }
L_00268068:
    set32(c.r[3], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268084u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x00268084u) [[unlikely]] return; }
L_00268084:
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002680E8; } }
L_0026809C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[16].w[0] + 17616u);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680B0u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x002680B0u) [[unlikely]] return; }
L_002680B0:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.r[17].d[0] = c.r[2].d[0] << 4;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680C0u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x002680C0u) [[unlikely]] return; }
L_002680C0:
    set32(c.r[3], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680DCu);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x002680DCu) [[unlikely]] return; }
L_002680DC:
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_002680E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680F0u);  if (depth < kMaxDepth) unit_00E2(c, 23u, depth + 1u); else { c.pc = 0x00488560u; return; } if (c.pc != 0x002680F0u) [[unlikely]] return; }
L_002680F0:
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268108u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268108u) [[unlikely]] return; }
L_00268108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268148; } }
L_00268110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 356u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268134u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00268134u) [[unlikely]] return; }
L_00268134:
    c.r[6].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268148u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268148u) [[unlikely]] return; }
L_00268148:
    set32(c.r[18], c.r[20].w[0] - 7424u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268158u);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x00268158u) [[unlikely]] return; }
L_00268158:
    set32(c.r[5], ld32((c.r[20].w[0] - 7424u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268168u);  if (depth < kMaxDepth) unit_005A(c, 24u, depth + 1u); else { c.pc = 0x00268218u; return; } if (c.pc != 0x00268168u) [[unlikely]] return; }
L_00268168:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002681F0; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 7424u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[21].w[0] - 18600u);
    st32((c.r[20].w[0] - 7424u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268198u);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x00268198u) [[unlikely]] return; }
L_00268198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681A4u);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x002681A4u) [[unlikely]] return; }
L_002681A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681B4u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x002681B4u) [[unlikely]] return; }
L_002681B4:
    set32(c.r[5], 0u + 78u);
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681CCu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x002681CCu) [[unlikely]] return; }
L_002681CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681D8u);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x002681D8u) [[unlikely]] return; }
L_002681D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681E4u);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x002681E4u) [[unlikely]] return; }
L_002681E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681F0u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x002681F0u) [[unlikely]] return; }
L_002681F0:
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
L_00268218:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 4u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00268270; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00268274; } }
L_00268270:
    set32(c.r[5], 0u + 68u);
    c.budget -= 1;
L_00268274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u + 8u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] + 17616u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026829C; } }
    set32(c.r[2], 0u + 16u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0026829C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002682B0; } }
    set32(c.r[2], 0u + 256u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002682B0:
    c.r[3].d[0] = c.r[5].d[0] << 47;
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 31;
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[22].w[0]), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1042u);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002682EC; } }
    set32(c.r[2], 0u + 1043u);
    c.budget -= 1;
L_002682EC:
    st64((c.r[22].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[22], c.r[22].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002684F4; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[19], c.r[19].w[0] + 17664u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[29].w[0] + 28u), c.f[22]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[17], c.r[20].w[0] + 32080u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[18], c.r[18].w[0] + 3872u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268370u);  if (depth < kMaxDepth) unit_0044(c, 272u, depth + 1u); else { c.pc = 0x00213BD8u; return; } if (c.pc != 0x00268370u) [[unlikely]] return; }
L_00268370:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 18600u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268384u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00268384u) [[unlikely]] return; }
L_00268384:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683A0u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x002683A0u) [[unlikely]] return; }
L_002683A0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 32080u));
    set32(c.r[2], c.r[23].w[0] + 17616u);
    c.f[20] = fp::sub(c.f[20], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[13] = ld32((c.r[2].w[0] + 24u));
    c.f[12] = ld32((c.r[2].w[0] + 20u));
    c.f[14] = c.f[22];
    c.f[2] = fp::add(c.f[2], c.f[20]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[15] = c.f[14];
    st32((c.r[17].w[0] + 16u), c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683F8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002683F8u) [[unlikely]] return; }
L_002683F8:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[11], c.r[11].w[0] + 27264u);
    set32(c.r[10], c.r[10].w[0] + 22464u);
    set32(c.r[13], ld32((c.r[21].w[0])));
    set32(c.r[12], c.r[18].w[0] + 512u);
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[12].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[12].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[12].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[12].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    ctc2(c, 18u, 0u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 21;
L_0026844C:
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[26]);
    vu::ftoi(c.vu0, 15u, 26u, 26u, 0);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 8u, c.vu0.vf[0].w[3]);
    vu::clip(c.vu0, 12u, 12u);
    c.r[4].d[0] = ~(0ull | 0ull);
    set32(c.r[3], cfc2(c, 18u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[6].d[0] = ~(0ull | 0ull);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[6].d[0];
    set32(c.r[5], c.r[5].w[0] >> 1);
    vu::set_vi(c.vu0, 2u, c.r[4].w[0]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 4u, c.vu0.vf[14].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[12].w[3]);
    vu::mulbc(c.vu0, 15u, 12u, 12u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 13u, 12u, 4);
    vu::mfir(c.vu0, 1u, 13u, 2u);
    vu::sub(c.vu0, 12u, 28u, 12u, 9u);
    vu::mul(c.vu0, 12u, 28u, 28u, 11u);
    vu::add(c.vu0, 12u, 28u, 28u, 10u);
    vu::ftoi(c.vu0, 15u, 28u, 28u, 4);
    st128((c.r[22].w[0]) & ~15u, c.vu0.vf[28]);
    set32(c.r[22], c.r[22].w[0] + 16u);
    st128((c.r[22].w[0]) & ~15u, c.vu0.vf[26]);
    set32(c.r[22], c.r[22].w[0] + 16u);
    st128((c.r[22].w[0]) & ~15u, c.vu0.vf[13]);
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.budget -= 40;
    { const bool t = 0ull != c.r[13].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026844Cu | kUnwind; return; } goto L_0026844C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268530; } }
L_002684F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] + 3872u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[9], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 17664u);
    set32(c.r[7], c.r[7].w[0] + 27264u);
    set32(c.r[8], c.r[8].w[0] + 22464u);
    c.r[10].d[0] = c.r[10].d[0] | 65535ull;
    set32(c.r[11], c.r[5].w[0] + 448u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268530u);  if (depth < kMaxDepth) unit_0044(c, 265u, depth + 1u); else { c.pc = 0x00213980u; return; } if (c.pc != 0x00268530u) [[unlikely]] return; }
L_00268530:
    set32(c.r[3], ld32((c.r[21].w[0])));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] << 1);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268580:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002685F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002685F4; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[4].w[0] + 17616u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 17616u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[3]);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 24;
L_002685F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 32064u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268638u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x00268580u; return; } if (c.pc != 0x00268638u) [[unlikely]] return; }
L_00268638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268648:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026868Cu);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x0026868Cu) [[unlikely]] return; }
L_0026868C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026869Cu);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x0026869Cu) [[unlikely]] return; }
L_0026869C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686A8u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x002686A8u) [[unlikely]] return; }
L_002686A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002686C0; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_002686CC; } }
L_002686C0:
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002686D4; } }
L_002686CC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_002686D4:
    c.r[22].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[21].d[0] = ld16((c.r[20].w[0] + 10u));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = ld16((c.r[20].w[0] + 16u));
    c.r[19].d[0] = ld16((c.r[20].w[0] + 12u));
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026872C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026871C; } }
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 1));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 2));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268728; } }
L_0026871C:
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 1));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 1));
    c.budget -= 3;
L_00268728:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026872C:
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld16((c.r[20].w[0] + 32u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[23], c.r[2].w[0] >> 7);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268758u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x00268758u) [[unlikely]] return; }
L_00268758:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 45;
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268770u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268770u) [[unlikely]] return; }
L_00268770:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268780u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268780u) [[unlikely]] return; }
L_00268780:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[3].d[0] << 24;
    c.r[5].d[0] = c.r[17].d[0] | c.r[5].d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] | c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687BCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002687BCu) [[unlikely]] return; }
L_002687BC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687CCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002687CCu) [[unlikely]] return; }
L_002687CC:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] | c.r[5].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687E0u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002687E0u) [[unlikely]] return; }
L_002687E0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687F0u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002687F0u) [[unlikely]] return; }
L_002687F0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268800u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268800u) [[unlikely]] return; }
L_00268800:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268810u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268810u) [[unlikely]] return; }
L_00268810:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268820u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268820u) [[unlikely]] return; }
L_00268820:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268830u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268830u) [[unlikely]] return; }
L_00268830:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268848u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x00268848u) [[unlikely]] return; }
L_00268848:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 15;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268870u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268870u) [[unlikely]] return; }
L_00268870:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268890u);  if (depth < kMaxDepth) unit_00A1(c, 76u, depth + 1u); else { c.pc = 0x00384B20u; return; } if (c.pc != 0x00268890u) [[unlikely]] return; }
L_00268890:
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268A6C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002688BC; } }
    set32(c.r[2], 0u + 16u);
    set32(c.r[16], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002688C4; } }
L_002688BC:
    set32(c.r[2], 0u + 16u);
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_002688C4:
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688E4u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x002688E4u) [[unlikely]] return; }
L_002688E4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 45;
    c.r[5].d[0] = c.r[5].d[0] | 5ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688FCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002688FCu) [[unlikely]] return; }
L_002688FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[5].d[0] = c.r[5].d[0] | 61166ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268910u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268910u) [[unlikely]] return; }
L_00268910:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 14u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 33;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 18u));
    c.r[4].d[0] = c.r[3].d[0] << 24;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268954u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268954u) [[unlikely]] return; }
L_00268954:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268964u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268964u) [[unlikely]] return; }
L_00268964:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[5], 0u + 16u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026897Cu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026897Cu) [[unlikely]] return; }
L_0026897C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026898Cu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026898Cu) [[unlikely]] return; }
L_0026898C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026899Cu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026899Cu) [[unlikely]] return; }
L_0026899C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689ACu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002689ACu) [[unlikely]] return; }
L_002689AC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689BCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002689BCu) [[unlikely]] return; }
L_002689BC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689CCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002689CCu) [[unlikely]] return; }
L_002689CC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689DCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002689DCu) [[unlikely]] return; }
L_002689DC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689ECu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x002689ECu) [[unlikely]] return; }
L_002689EC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A04u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x00268A04u) [[unlikely]] return; }
L_00268A04:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00268A30; } }
    c.r[2].d[0] = c.r[23].d[0] | 32768ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A28u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268A28u) [[unlikely]] return; }
L_00268A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268A4C; } }
L_00268A30:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A4Cu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268A4Cu) [[unlikely]] return; }
L_00268A4C:
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A6Cu);  if (depth < kMaxDepth) unit_00A1(c, 76u, depth + 1u); else { c.pc = 0x00384B20u; return; } if (c.pc != 0x00268A6Cu) [[unlikely]] return; }
L_00268A6C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00268A8C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A8Cu);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x00268A8Cu) [[unlikely]] return; }
L_00268A8C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A98u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x00268A98u) [[unlikely]] return; }
L_00268A98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AA4u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00268AA4u) [[unlikely]] return; }
L_00268AA4:
    set32(c.r[2], ld32((c.r[29].w[0])));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268AE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1072u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 352u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268CD0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00268B3C; } }
    set32(c.r[2], 0u + 16u);
    set32(c.r[20], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268B44; } }
L_00268B3C:
    set32(c.r[2], 0u + 16u);
    set32(c.r[20], 0u + 2u);
    c.budget -= 2;
L_00268B44:
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[2].w[0] >> 2);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00268CD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[2].w[0] + 22464u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 22464u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[16], c.r[16].w[0] - 31776u);
    set32(c.r[19], ld32((c.r[8].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld16((c.r[8].w[0] + 18u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld16((c.r[8].w[0] + 14u));
    st64((c.r[29].w[0]), c.r[6].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B90u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x00268B90u) [[unlikely]] return; }
L_00268B90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BA0u);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x00268BA0u) [[unlikely]] return; }
L_00268BA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BB0u);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x00268BB0u) [[unlikely]] return; }
L_00268BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[18].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] | c.r[18].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[17].d[0];
    set32(c.r[5], 0u + 80u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BF0u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268BF0u) [[unlikely]] return; }
L_00268BF0:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[6], 0u + 16u);
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C0Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268C0Cu) [[unlikely]] return; }
L_00268C0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C20u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268C20u) [[unlikely]] return; }
L_00268C20:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C34u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00268C34u) [[unlikely]] return; }
L_00268C34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C40u);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x00268C40u) [[unlikely]] return; }
L_00268C40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C4Cu);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x00268C4Cu) [[unlikely]] return; }
L_00268C4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C5Cu);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x00268C5Cu) [[unlikely]] return; }
L_00268C5C:
    set32(c.r[6], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C70u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x00268C70u) [[unlikely]] return; }
L_00268C70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C84u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00268C84u) [[unlikely]] return; }
L_00268C84:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C9Cu);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x00268C9Cu) [[unlikely]] return; }
L_00268C9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CACu);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x00268CACu) [[unlikely]] return; }
L_00268CAC:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CD0u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00268CD0u) [[unlikely]] return; }
L_00268CD0:
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
L_00268CF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D1Cu);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x00268D1Cu) [[unlikely]] return; }
L_00268D1C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[17].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], c.r[5].w[0] + 32160u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] >> 7);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D48u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x00268D48u) [[unlikely]] return; }
L_00268D48:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D54u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x00268D54u) [[unlikely]] return; }
L_00268D54:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D6Cu);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x00268D6Cu) [[unlikely]] return; }
L_00268D6C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 45;
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D84u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268D84u) [[unlikely]] return; }
L_00268D84:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D94u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268D94u) [[unlikely]] return; }
L_00268D94:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[18].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[3].d[0] << 16;
    c.r[7].d[0] = c.r[2].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[5], 0u + 80u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[18].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DD8u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00268DD8u) [[unlikely]] return; }
L_00268DD8:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 10u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 82u);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DF8u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00268DF8u) [[unlikely]] return; }
L_00268DF8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E0Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00268E0Cu) [[unlikely]] return; }
L_00268E0C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E20u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00268E20u) [[unlikely]] return; }
L_00268E20:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E38u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x00268E38u) [[unlikely]] return; }
L_00268E38:
    c.r[5].d[0] = c.r[17].d[0] | 32768ull;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E54u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x00268E54u) [[unlikely]] return; }
L_00268E54:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E74u);  if (depth < kMaxDepth) unit_00A1(c, 76u, depth + 1u); else { c.pc = 0x00384B20u; return; } if (c.pc != 0x00268E74u) [[unlikely]] return; }
L_00268E74:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E8Cu);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x00268E8Cu) [[unlikely]] return; }
L_00268E8C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E98u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x00268E98u) [[unlikely]] return; }
L_00268E98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268EA4u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00268EA4u) [[unlikely]] return; }
L_00268EA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268EC0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u + 1072u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10u));
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[30], ld32((c.r[16].w[0])));
    set32(c.r[23], ld32((c.r[16].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[2].w[0] >> 7);
    c.budget -= 27;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00268F4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 10408u)));
    set32(c.r[5], c.r[5].w[0] + 22480u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F4Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00268F4Cu) [[unlikely]] return; }
L_00268F4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[17].d[0] = ld16((c.r[16].w[0] + 10u));
    c.r[19].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[18].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268FC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00268F90; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[17].w[0] + 3u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[17].d[0];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268F9C; } }
L_00268F90:
    set32(c.r[2], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 3;
L_00268F9C:
    set32(c.r[2], c.r[19].w[0] >> 31);
    set32(c.r[3], c.r[18].w[0] >> 31);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268FC4; } }
L_00268FC0:
    c.r[21].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_00268FC4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0026913C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[2].w[0] + 22464u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 22464u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[16], c.r[16].w[0] - 31776u);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FFCu);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x00268FFCu) [[unlikely]] return; }
L_00268FFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026900Cu);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x0026900Cu) [[unlikely]] return; }
L_0026900C:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026901Cu);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x0026901Cu) [[unlikely]] return; }
L_0026901C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[3].d[0] << 24;
    c.r[6].d[0] = c.r[30].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[23].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 80u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026905Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026905Cu) [[unlikely]] return; }
L_0026905C:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u + 82u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269074u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269074u) [[unlikely]] return; }
L_00269074:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269088u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269088u) [[unlikely]] return; }
L_00269088:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026909Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026909Cu) [[unlikely]] return; }
L_0026909C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690A8u);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x002690A8u) [[unlikely]] return; }
L_002690A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690B4u);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x002690B4u) [[unlikely]] return; }
L_002690B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690C4u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x002690C4u) [[unlikely]] return; }
L_002690C4:
    set32(c.r[6], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690D8u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x002690D8u) [[unlikely]] return; }
L_002690D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690ECu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x002690ECu) [[unlikely]] return; }
L_002690EC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269108u);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x00269108u) [[unlikely]] return; }
L_00269108:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269118u);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x00269118u) [[unlikely]] return; }
L_00269118:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026913Cu);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x0026913Cu) [[unlikely]] return; }
L_0026913C:
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
L_00269170:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u + 1072u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269640; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    set32(c.r[20], c.r[2].w[0] >> 1);
    set32(c.r[9], ld32((c.r[19].w[0] + 352u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = ld16((c.r[19].w[0] + 16u));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    if (c.r[17].d[0] == 0) c.r[17].d[0] = c.r[7].d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[23], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[2].w[0] >> 3);
    set32(c.r[22], c.r[2].w[0] >> 9);
    set32(c.r[30], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00269260; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_00269238; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[18].w[0] + 3u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[18].d[0];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026923C; } }
L_00269238:
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.budget -= 1;
L_0026923C:
    set32(c.r[2], c.r[20].w[0] >> 31);
    set32(c.r[3], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269264; } }
L_00269260:
    c.r[21].d[0] = ld16((c.r[19].w[0] + 12u));
    c.budget -= 1;
L_00269264:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002693E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[2].w[0] + 22464u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 22464u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[16], c.r[16].w[0] - 31776u);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692A0u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x002692A0u) [[unlikely]] return; }
L_002692A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692B0u);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x002692B0u) [[unlikely]] return; }
L_002692B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692C0u);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x002692C0u) [[unlikely]] return; }
L_002692C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[3].d[0] << 24;
    c.r[6].d[0] = c.r[30].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[23].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 80u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269300u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269300u) [[unlikely]] return; }
L_00269300:
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u + 82u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269318u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269318u) [[unlikely]] return; }
L_00269318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026932Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026932Cu) [[unlikely]] return; }
L_0026932C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269340u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269340u) [[unlikely]] return; }
L_00269340:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026934Cu);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x0026934Cu) [[unlikely]] return; }
L_0026934C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269358u);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x00269358u) [[unlikely]] return; }
L_00269358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269368u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x00269368u) [[unlikely]] return; }
L_00269368:
    set32(c.r[6], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026937Cu);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x0026937Cu) [[unlikely]] return; }
L_0026937C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269390u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00269390u) [[unlikely]] return; }
L_00269390:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693ACu);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x002693ACu) [[unlikely]] return; }
L_002693AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693BCu);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x002693BCu) [[unlikely]] return; }
L_002693BC:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693E0u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x002693E0u) [[unlikely]] return; }
L_002693E0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269640; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 8u));
    set32(c.r[10], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    set32(c.r[8], 0u + 1u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld16((c.r[19].w[0] + 16u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[11], ld32((c.r[19].w[0] + 352u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 3u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[18].w[0] + 3u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[17].d[0];
    c.r[5].d[0] = c.r[10].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[10].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[20].w[0] + 3u);
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[18].d[0];
    set32(c.r[7], ld32((c.r[19].w[0])));
    if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[20].d[0];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] >> 3);
    set32(c.r[4], c.r[3].w[0] >> 5);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[3].w[0] >> 11);
    set32(c.r[23], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    if (c.r[17].d[0] == 0) c.r[17].d[0] = c.r[8].d[0];
    set32(c.r[21], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));
    c.budget -= 33;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002694C0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_00269498; } }
    c.r[3].d[0] = c.r[10].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[18].w[0] + 3u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[18].d[0];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026949C; } }
L_00269498:
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.budget -= 1;
L_0026949C:
    set32(c.r[2], c.r[20].w[0] >> 31);
    set32(c.r[3], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002694C4; } }
L_002694C0:
    c.r[19].d[0] = ld16((c.r[19].w[0] + 12u));
    c.budget -= 1;
L_002694C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[2].w[0] + 22464u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 22464u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[16], c.r[16].w[0] - 31776u);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269500u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x00269500u) [[unlikely]] return; }
L_00269500:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269510u);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x00269510u) [[unlikely]] return; }
L_00269510:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269520u);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x00269520u) [[unlikely]] return; }
L_00269520:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[3].d[0] << 24;
    c.r[6].d[0] = c.r[23].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 80u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269560u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269560u) [[unlikely]] return; }
L_00269560:
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u + 82u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269578u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x00269578u) [[unlikely]] return; }
L_00269578:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026958Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026958Cu) [[unlikely]] return; }
L_0026958C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695A0u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x002695A0u) [[unlikely]] return; }
L_002695A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695ACu);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x002695ACu) [[unlikely]] return; }
L_002695AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695B8u);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x002695B8u) [[unlikely]] return; }
L_002695B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695C8u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x002695C8u) [[unlikely]] return; }
L_002695C8:
    set32(c.r[6], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695DCu);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x002695DCu) [[unlikely]] return; }
L_002695DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695F0u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x002695F0u) [[unlikely]] return; }
L_002695F0:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026960Cu);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x0026960Cu) [[unlikely]] return; }
L_0026960C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026961Cu);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x0026961Cu) [[unlikely]] return; }
L_0026961C:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269640u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00269640u) [[unlikely]] return; }
L_00269640:
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
L_00269678:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696B0u);  if (depth < kMaxDepth) unit_005A(c, 284u, depth + 1u); else { c.pc = 0x0026B9F0u; return; } if (c.pc != 0x002696B0u) [[unlikely]] return; }
L_002696B0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002698D8; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1072u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696E4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002696E4u) [[unlikely]] return; }
L_002696E4:
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00269754; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269710; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00269730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002697B0; } }
L_00269710:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00269778; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00269794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002697B0; } }
L_00269730:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269744u);  if (depth < kMaxDepth) unit_005A(c, 185u, depth + 1u); else { c.pc = 0x00269D28u; return; } if (c.pc != 0x00269744u) [[unlikely]] return; }
L_00269744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002697B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002698D4; } }
L_00269754:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269768u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A2B0u; return; } if (c.pc != 0x00269768u) [[unlikely]] return; }
L_00269768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002697B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002698D4; } }
L_00269778:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026978Cu);  if (depth < kMaxDepth) unit_005A(c, 230u, depth + 1u); else { c.pc = 0x0026AD78u; return; } if (c.pc != 0x0026978Cu) [[unlikely]] return; }
L_0026978C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002698D4; } }
L_00269794:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697A8u);  if (depth < kMaxDepth) unit_005A(c, 211u, depth + 1u); else { c.pc = 0x0026A560u; return; } if (c.pc != 0x002697A8u) [[unlikely]] return; }
L_002697A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002698D4; } }
L_002697B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002698D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[2].w[0] - 4u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(29ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22608u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002697E8:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269820; } }
L_002697F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026981C; } }
L_00269800:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026981C; } }
L_0026980C:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026981C; } }
L_00269818:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0026981C:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00269820:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 576u), c.r[21].w[0]);
    set32(c.r[4], c.r[3].w[0] + 63u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 126u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    c.r[5].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    set32(c.r[2], c.r[6].w[0] - 19u);
    st16((c.r[16].w[0] + 580u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269888; } }
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00269888; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00269888; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002698B4; } }
L_00269888:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002698C4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002698BC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002698C0; } }
L_002698B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002698C4; } }
L_002698BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002698C0:
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002698C4:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002698D8; } }
L_002698D4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002698D8:
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
L_00269900:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269948u);  if (depth < kMaxDepth) unit_005A(c, 284u, depth + 1u); else { c.pc = 0x0026B9F0u; return; } if (c.pc != 0x00269948u) [[unlikely]] return; }
L_00269948:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_00269BA8; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1072u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026997Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026997Cu) [[unlikely]] return; }
L_0026997C:
    set32(c.r[3], 0u - 129u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002699FC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002699B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002699D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269A68; } }
L_002699B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269A20; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269A68; } }
L_002699D4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699ECu);  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00269FD8u; return; } if (c.pc != 0x002699ECu) [[unlikely]] return; }
L_002699EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269BA4; } }
L_002699FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A10u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A2B0u; return; } if (c.pc != 0x00269A10u) [[unlikely]] return; }
L_00269A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269BA4; } }
L_00269A20:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A34u);  if (depth < kMaxDepth) unit_005A(c, 230u, depth + 1u); else { c.pc = 0x0026AD78u; return; } if (c.pc != 0x00269A34u) [[unlikely]] return; }
L_00269A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269BA4; } }
L_00269A44:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] & 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A60u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x0026A928u; return; } if (c.pc != 0x00269A60u) [[unlikely]] return; }
L_00269A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269BA4; } }
L_00269A68:
    c.r[2].d[0] = c.r[19].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269A80; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00269A80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00269BA4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[2].w[0] - 4u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(29ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269AF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22736u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00269AB8:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269AF0; } }
L_00269AC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269AEC; } }
L_00269AD0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269AEC; } }
L_00269ADC:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269AEC; } }
L_00269AE8:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00269AEC:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00269AF0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 576u), c.r[23].w[0]);
    set32(c.r[4], c.r[3].w[0] + 63u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 126u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    c.r[5].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    set32(c.r[2], c.r[6].w[0] - 19u);
    st16((c.r[16].w[0] + 580u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269B58; } }
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00269B58; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00269B58; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00269B84; } }
L_00269B58:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269B94; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269B8C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269B90; } }
L_00269B84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00269B94; } }
L_00269B8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00269B90:
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00269B94:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269BA8; } }
L_00269BA4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00269BA8:
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
L_00269BD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269C74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269C34; } }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 16u));
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[10].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 10u));
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[10], c.r[10].w[0] >> 1);
    set32(c.r[4], c.r[16].w[0] + 160u);
    set32(c.r[11], c.r[11].w[0] >> 2);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269C58; } }
L_00269C34:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 16u));
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[10].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 10u));
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[10], c.r[10].w[0] >> 1);
    set32(c.r[4], c.r[16].w[0] + 160u);
    set32(c.r[11], c.r[11].w[0] >> 1);
    c.budget -= 9;
L_00269C58:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C6Cu);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00269C6Cu) [[unlikely]] return; }
L_00269C6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269CA0; } }
L_00269C74:
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CA0u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00269CA0u) [[unlikely]] return; }
L_00269CA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269D14; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269CEC; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[4], c.r[16].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CE4u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00269CE4u) [[unlikely]] return; }
L_00269CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269D14; } }
L_00269CEC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[4], c.r[16].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D14u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00269D14u) [[unlikely]] return; }
L_00269D14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269D28:
    set32(c.r[29], c.r[29].w[0] - 1216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[19]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[21]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 1200u), c.f[20]);
    set32(c.r[22], c.r[16].w[0] + 2u);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[23]);
    set32(c.r[8], c.r[8].w[0] + 22856u);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[30]);
    set32(c.r[9], 0u + 1599u);
    st64((c.r[29].w[0] + 1040u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 18708u)));
    set32(c.r[30], ld32((c.r[22].w[0] + 20u)));
    c.r[2].d[0] = ld16((c.r[22].w[0] + 26u));
    set32(c.r[23], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[17], c.r[30].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[30].w[0], c.r[23].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DD0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00269DD0u) [[unlikely]] return; }
L_00269DD0:
    st32((c.r[29].w[0] + 1024u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00269E38; } }
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1024u)));
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[20], 0u - c.r[18].w[0]);
    mmi::madd(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 11;
L_00269E10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E28u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00269E28u) [[unlikely]] return; }
L_00269E28:
    set32(c.r[16], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269E10u | kUnwind; return; } goto L_00269E10; } }
L_00269E38:
    set32(c.r[16], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[2], 0u + 256u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] + 52u);
    if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[6], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E58u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00269E58u) [[unlikely]] return; }
L_00269E58:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00269EE4; } }
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00269E68:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(220ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269EAC; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269EAC; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(220ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269EAC; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00269EAC:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[4].w[0] << 24);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269E68u | kUnwind; return; } goto L_00269E68; } }
L_00269EE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 18708u)));
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] + 22512u);
    set32(c.r[8], c.r[5].w[0] + 22856u);
    set32(c.r[9], 0u + 1643u);
    set32(c.r[5], c.r[16].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F10u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00269F10u) [[unlikely]] return; }
L_00269F10:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 56u), c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00269F70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[10], 0u - 32u);
    set32(c.r[9], c.r[2].w[0] - 25800u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
L_00269F38:
    c.r[3].d[0] = c.r[6].d[0] & 31ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[10].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F38u | kUnwind; return; } goto L_00269F38; } }
L_00269F70:
    st16((c.r[21].w[0] + 360u), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[4], 0u + 1u);
    st16((c.r[21].w[0] + 362u), static_cast<std::uint16_t>(c.r[30].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[23].w[0]));
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[30].w[0]));
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[22].w[0] + 26u));
    set32(c.r[5], ld32((c.r[29].w[0] + 1024u)));
    st32((c.r[21].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1040u));
    c.f[20] = ld32((c.r[29].w[0] + 1200u));
    set32(c.r[29], c.r[29].w[0] + 1216u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269FD8:
    set32(c.r[29], c.r[29].w[0] - 1216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 1024u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[20]);
    set32(c.r[8], c.r[8].w[0] + 22872u);
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 1200u), c.f[20]);
    set32(c.r[22], c.r[16].w[0] + 2u);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[21]);
    set32(c.r[9], 0u + 1684u);
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 1040u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1024u)));
    set32(c.r[30], ld32((c.r[22].w[0] + 20u)));
    c.r[2].d[0] = ld16((c.r[22].w[0] + 26u));
    set32(c.r[23], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[17], c.r[30].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[30].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A080u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026A080u) [[unlikely]] return; }
L_0026A080:
    st32((c.r[29].w[0] + 1028u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0026A0E8; } }
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1028u)));
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[21], 0u - c.r[18].w[0]);
    mmi::madd(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 11;
L_0026A0C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0D8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026A0D8u) [[unlikely]] return; }
L_0026A0D8:
    set32(c.r[16], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A0C0u | kUnwind; return; } goto L_0026A0C0; } }
L_0026A0E8:
    set32(c.r[16], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[2], 0u + 256u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] + 52u);
    if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[6], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A108u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026A108u) [[unlikely]] return; }
L_0026A108:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0026A194; } }
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0026A118:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(220ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A15C; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A15C; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(220ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A15C; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0026A15C:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[4].w[0] << 24);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A118u | kUnwind; return; } goto L_0026A118; } }
L_0026A194:
    set32(c.r[5], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 1024u)));
    set32(c.r[8], c.r[2].w[0] + 22872u);
    set32(c.r[6], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[3].w[0] + 22512u);
    set32(c.r[9], 0u + 1728u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1C0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026A1C0u) [[unlikely]] return; }
L_0026A1C0:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 56u), c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0026A220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[10], 0u - 32u);
    set32(c.r[9], c.r[2].w[0] - 25800u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
L_0026A1E8:
    c.r[3].d[0] = c.r[6].d[0] & 31ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[10].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A1E8u | kUnwind; return; } goto L_0026A1E8; } }
L_0026A220:
    mmi::mult(c, 0, c.r[30].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[23].w[0]));
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[30].w[0]));
    st16((c.r[20].w[0] + 360u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    st16((c.r[20].w[0] + 362u), static_cast<std::uint16_t>(c.r[30].w[0]));
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.r[2].d[0] = ld16((c.r[22].w[0] + 26u));
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A25Cu);  if (depth < kMaxDepth) unit_0040(c, 364u, depth + 1u); else { c.pc = 0x00203768u; return; } if (c.pc != 0x0026A25Cu) [[unlikely]] return; }
L_0026A25C:
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1028u)));
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1040u));
    c.f[20] = ld32((c.r[29].w[0] + 1200u));
    set32(c.r[29], c.r[29].w[0] + 1216u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026A2B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[8], c.r[8].w[0] + 22888u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[9], 0u + 1783u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 18708u)));
    c.r[18].d[0] = ld16((c.r[21].w[0] + 12u));
    c.r[23].d[0] = ld16((c.r[21].w[0] + 14u));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 16u));
    mmi::mult(c, 0, c.r[23].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 3);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A32Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026A32Cu) [[unlikely]] return; }
L_0026A32C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[21].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], 0u + 16u);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[21].d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026A41C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026A4D0; } }
    set32(c.r[16], c.r[23].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0026A4D0; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 3;
L_0026A370:
    mmi::mult(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[30].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A394u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026A394u) [[unlikely]] return; }
L_0026A394:
    set32(c.r[10], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026A408; } }
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 255u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0026A3B0:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[11].d[0]) { breakpoint(c, 0x0026A3B8u);  goto L_0026A3BC; }
L_0026A3BC:
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    mmi::div(c, 0, c.r[3].w[0], c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 19;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A3B0u | kUnwind; return; } goto L_0026A3B0; } }
L_0026A408:
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A370u | kUnwind; return; } goto L_0026A370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A4D0; } }
L_0026A41C:
    set32(c.r[16], c.r[23].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0026A4D0; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 2;
L_0026A430:
    mmi::mult(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[30].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A454u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026A454u) [[unlikely]] return; }
L_0026A454:
    set32(c.r[8], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026A4C4; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull | 64543ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0026A470:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 31ull;
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 224ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 2;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_0026A4B0; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 1;
L_0026A4B0:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A470u | kUnwind; return; } goto L_0026A470; } }
L_0026A4C4:
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A430u | kUnwind; return; } goto L_0026A430; } }
L_0026A4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + 22512u);
    st16((c.r[22].w[0] + 8u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[22].w[0] + 10u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[22].w[0] + 360u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[7], c.r[2].w[0] + 22888u);
    st16((c.r[22].w[0] + 362u), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[8], 0u + 1894u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18708u)));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 16u));
    st32((c.r[22].w[0]), c.r[30].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[22].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A528u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0026A528u) [[unlikely]] return; }
L_0026A528:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026A560:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_0026A5A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A8F4; } }
L_0026A5A8:
    set32(c.r[30], ld32((c.r[20].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[23], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 24u)));
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A5D8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A5E8; } }
L_0026A5D8:
    set32(c.r[3], ld32((c.r[3].w[0] + 32148u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026A5F4; } }
L_0026A5E8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026A5F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A60C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0026A60C:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[21], c.r[20].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A680; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 18708u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[7], c.r[17].w[0] + 22512u);
    set32(c.r[8], c.r[18].w[0] + 22904u);
    set32(c.r[9], 0u + 1937u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A65Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026A65Cu) [[unlikely]] return; }
L_0026A65C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 1);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A6BC; } }
L_0026A680:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 18708u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[17].w[0] + 22512u);
    set32(c.r[8], c.r[18].w[0] + 22904u);
    set32(c.r[9], 0u + 1942u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6ACu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026A6ACu) [[unlikely]] return; }
L_0026A6AC:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 4;
L_0026A6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6C4u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026A6C4u) [[unlikely]] return; }
L_0026A6C4:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A82C; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[7], c.r[17].w[0] + 22512u);
    set32(c.r[4], ld32((c.r[3].w[0] + 18708u)));
    set32(c.r[8], c.r[18].w[0] + 22904u);
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[16], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 1951u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6FCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026A6FCu) [[unlikely]] return; }
L_0026A6FC:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A714u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026A714u) [[unlikely]] return; }
L_0026A714:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026A7CC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 5;
L_0026A738:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0026A75C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A75C; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026A75C:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A738u | kUnwind; return; } goto L_0026A738; } }
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 5;
L_0026A788:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0026A7AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A7AC; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026A7AC:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A788u | kUnwind; return; } goto L_0026A788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A82C; } }
L_0026A7CC:
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A82C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 2;
L_0026A7E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0026A80C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A80C; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026A80C:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A7E8u | kUnwind; return; } goto L_0026A7E8; } }
L_0026A82C:
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 360u), static_cast<std::uint16_t>(c.r[30].w[0]));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 362u), static_cast<std::uint16_t>(c.r[23].w[0]));
    st32((c.r[19].w[0] + 352u), c.r[22].w[0]);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[30].w[0]));
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A874; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A878; } }
L_0026A874:
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0026A878:
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026A894; } }
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A8F0; } }
L_0026A894:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026A8AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A8EC; } }
L_0026A8AC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026A8C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A8EC; } }
L_0026A8C4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026A8DC; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A8EC; } }
L_0026A8DC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026A8F0; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0026A8EC:
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026A8F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026A8F4:
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
L_0026A928:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0026A96C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AD4C; } }
L_0026A96C:
    set32(c.r[21], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[22], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 24u)));
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A9A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32148u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A9A4; } }
    set32(c.r[2], 0u + 4u);
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026A9A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A9BC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0026A9BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0026A9D8; } }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AA88; } }
L_0026A9D8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AA48; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[8], c.r[8].w[0] + 22920u);
    set32(c.r[9], 0u + 2108u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA1Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026AA1Cu) [[unlikely]] return; }
L_0026AA1C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 1);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA40u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026AA40u) [[unlikely]] return; }
L_0026AA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AA88; } }
L_0026AA48:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    set32(c.r[8], c.r[8].w[0] + 22920u);
    set32(c.r[9], 0u + 2113u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA70u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026AA70u) [[unlikely]] return; }
L_0026AA70:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA88u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026AA88u) [[unlikely]] return; }
L_0026AA88:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AC84; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 56u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 22512u);
    set32(c.r[8], c.r[8].w[0] + 22920u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 2121u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAC4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026AAC4u) [[unlikely]] return; }
L_0026AAC4:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AADCu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026AADCu) [[unlikely]] return; }
L_0026AADC:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026ABF0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | 255ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 7;
L_0026AB08:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0026AB1C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0026AB1C:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AB34; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0026AB34:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0026AB58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AB58; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026AB58:
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB08u | kUnwind; return; } goto L_0026AB08; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | 255ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 8;
L_0026AB88:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0026AB9C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0026AB9C:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ABB4; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0026ABB4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0026ABD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ABD8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026ABD8:
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB88u | kUnwind; return; } goto L_0026AB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AC84; } }
L_0026ABF0:
    set32(c.r[2], c.r[3].w[0] >> 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AC84; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | 255ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 5;
L_0026AC18:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0026AC2C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0026AC2C:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AC44; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0026AC44:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0026AC68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AC68; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026AC68:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AC18u | kUnwind; return; } goto L_0026AC18; } }
L_0026AC84:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 360u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 362u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st32((c.r[17].w[0] + 352u), c.r[20].w[0]);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ACCC; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026ACD0; } }
L_0026ACCC:
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0026ACD0:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026ACEC; } }
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AD48; } }
L_0026ACEC:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026AD04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AD44; } }
L_0026AD04:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026AD1C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AD44; } }
L_0026AD1C:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026AD34; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AD44; } }
L_0026AD34:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026AD48; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0026AD44:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026AD48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026AD4C:
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
L_0026AD78:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[12], 0u + 256u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[11], 0u + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[16].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    lwl(c.r[3], (c.r[2].w[0] + 3u));
    lwr(c.r[3], (c.r[2].w[0]));
    lwl(c.r[4], (c.r[2].w[0] + 7u));
    lwr(c.r[4], (c.r[2].w[0] + 4u));
    c.r[20].d[0] = ld8((c.r[2].w[0] + 8u));
    set32(c.r[7], c.r[3].w[0] >> 24);
    set32(c.r[9], c.r[3].w[0] << 24);
    set32(c.r[6], c.r[3].w[0] >> 8);
    set32(c.r[5], c.r[4].w[0] >> 24);
    set32(c.r[8], c.r[4].w[0] << 24);
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[10].d[0] = c.r[20].d[0] ^ 4ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[21].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[22].d[0] = c.r[5].d[0] | c.r[4].d[0];
    if (c.r[10].d[0] == 0) c.r[12].d[0] = c.r[11].d[0];
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 44;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[12].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    set32(c.r[8], c.r[8].w[0] + 22936u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 2271u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE54u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026AE54u) [[unlikely]] return; }
L_0026AE54:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_0026AE58:
    set32(c.r[17], c.r[16].w[0] + 33u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 6u));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B0E4; } }
    c.budget -= 1;
L_0026AE90:
    lwl(c.r[2], (c.r[17].w[0] + 3u));
    lwr(c.r[2], (c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 22960u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] >> 24);
    set32(c.r[7], c.r[2].w[0] << 24);
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[18].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AED0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0026AED0u) [[unlikely]] return; }
L_0026AED0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026AF50; } }
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B0E4; } }
    set32(c.r[2], 0u + 3u);
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(0u));
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0026AEF8u);  goto L_0026AEFC; }
L_0026AEFC:
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AF50; } }
    c.budget -= 1;
L_0026AF18:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 3u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AF18u | kUnwind; return; } goto L_0026AF18; } }
L_0026AF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 22968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF64u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0026AF64u) [[unlikely]] return; }
L_0026AF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B060; } }
    mmi::mult(c, 0, c.r[21].w[0], c.r[22].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    set32(c.r[8], c.r[8].w[0] + 22936u);
    set32(c.r[6], 0u + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[20].w[0]);
    set32(c.r[9], 0u + 2320u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFA4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026AFA4u) [[unlikely]] return; }
L_0026AFA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0026AFD0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFC8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026AFC8u) [[unlikely]] return; }
L_0026AFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B060; } }
L_0026AFD0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0026B060; } }
    mmi::divu(c, 0, c.r[20].w[0], c.r[21].w[0]);
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x0026AFE4u);  goto L_0026AFE8; }
L_0026AFE8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0026B008; } }
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B024; } }
L_0026B008:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.budget -= 7;
L_0026B024:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B030u);  if (depth < kMaxDepth) unit_0042(c, 76u, depth + 1u); else { c.pc = 0x0020A078u; return; } if (c.pc != 0x0026B030u) [[unlikely]] return; }
L_0026B030:
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026B060; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B060u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026B060u) [[unlikely]] return; }
L_0026B060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 22976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B074u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0026B074u) [[unlikely]] return; }
L_0026B074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B0B8; } }
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0026B0B8; } }
    c.budget -= 1;
L_0026B090:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B090u | kUnwind; return; } goto L_0026B090; } }
L_0026B0B8:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_0026B0E4:
    set32(c.r[4], c.r[23].w[0] + 22952u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0F4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0026B0F4u) [[unlikely]] return; }
L_0026B0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AE90u | kUnwind; return; } goto L_0026AE90; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st32((c.r[19].w[0] + 352u), c.r[20].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[19].w[0] + 360u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[19].w[0] + 362u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026B150:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[17].w[0] + 416u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] & 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] & 65535ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1A4u);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x0026B1A4u) [[unlikely]] return; }
L_0026B1A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    c.f[20] = ld32((c.r[2].w[0] + 32128u));
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1D8u);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x0026B1D8u) [[unlikely]] return; }
L_0026B1D8:
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[3], 0u + 3822u);
    st64((c.r[17].w[0] + 400u), c.r[2].d[0]);
    st64((c.r[17].w[0] + 408u), c.r[3].d[0]);
    set32(c.r[5], c.r[17].w[0] + 432u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B20Cu);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x0026B20Cu) [[unlikely]] return; }
L_0026B20C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B218u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x0026B218u) [[unlikely]] return; }
L_0026B218:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B230u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x0026B230u) [[unlikely]] return; }
L_0026B230:
    ld128((c.r[17].w[0] + 400u) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B240u);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x0026B240u) [[unlikely]] return; }
L_0026B240:
    c.r[7].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u - 1u);
    c.r[6].d[0] = ld32((c.r[17].w[0] + 44u));
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 3u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[3].d[0] = c.r[3].d[0] << 14;
    if (c.r[9].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[10].d[0] = ld32((c.r[17].w[0] + 48u));
    c.r[7].d[0] = c.r[11].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[10].d[0] = c.r[10].d[0] << 20;
    c.r[3].d[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    c.r[11].d[0] = c.r[11].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    if (c.r[11].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 40;
    set32(c.r[12], ld32((c.r[17].w[0] + 352u)));
    c.r[8].d[0] = c.r[8].d[0] << 54;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[17].w[0] + 568u), c.r[6].d[0]);
    c.budget -= 40;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B3A4; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[2].d[0];  if (t) { goto L_0026B330; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] << 26;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B360; } }
L_0026B330:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] << 26;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 12;
L_0026B360:
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    set32(c.r[18], c.r[17].w[0] + 416u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0026B4E4; } }
    c.r[6].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B384u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B384u) [[unlikely]] return; }
L_0026B384:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B398u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B398u) [[unlikely]] return; }
L_0026B398:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B488; } }
L_0026B3A4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B3F8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[4].d[0] << 26;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[21].d[0] << 37;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    c.r[4].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B42C; } }
L_0026B3F8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[6].d[0] = c.r[6].d[0] << 26;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[3].d[0] = c.r[21].d[0] << 37;
    c.budget -= 13;
L_0026B42C:
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 10;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0026B4A0; } }
    set32(c.r[16], c.r[17].w[0] + 416u);
    c.r[6].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B46Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B46Cu) [[unlikely]] return; }
L_0026B46C:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B484u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B484u) [[unlikely]] return; }
L_0026B484:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026B488:
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B498u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B498u) [[unlikely]] return; }
L_0026B498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B4E4; } }
L_0026B4A0:
    set32(c.r[16], c.r[17].w[0] + 416u);
    c.r[6].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4B8u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B4B8u) [[unlikely]] return; }
L_0026B4B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 96u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4D0u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B4D0u) [[unlikely]] return; }
L_0026B4D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4E4u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0026B4E4u) [[unlikely]] return; }
L_0026B4E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4F0u);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x0026B4F0u) [[unlikely]] return; }
L_0026B4F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B508u);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x0026B508u) [[unlikely]] return; }
L_0026B508:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B514u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x0026B514u) [[unlikely]] return; }
L_0026B514:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026B548:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0026B840; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026B5A4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026B83C; } }
L_0026B5A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026B5C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026B5C8; } }
    set32(c.r[2], 0u + 1072u);
    mmi::madd(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B83C; } }
L_0026B5C8:
    set32(c.r[2], 0u + 1072u);
    mmi::madd(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B840; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B79C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[4], 0u - 1u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 12u));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + 63u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 126u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[3], c.r[6].w[0] - 19u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B654; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B654; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B654; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B694; } }
L_0026B654:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B6A0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B684; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B6A0; } }
L_0026B684:
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B6A0; } }
L_0026B694:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026B6A0; } }
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 1;
L_0026B6A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6B0u);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0026C140u; return; } if (c.pc != 0x0026B6B0u) [[unlikely]] return; }
L_0026B6B0:
    set32(c.r[18], c.r[16].w[0] + 592u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[19].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6D0u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026B6D0u) [[unlikely]] return; }
L_0026B6D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6E0u);  if (depth < kMaxDepth) unit_005A(c, 180u, depth + 1u); else { c.pc = 0x00269BD8u; return; } if (c.pc != 0x0026B6E0u) [[unlikely]] return; }
L_0026B6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6FCu);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0026B6FCu) [[unlikely]] return; }
L_0026B6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
L_0026B710:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B728; } }
    c.r[2].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B710u | kUnwind; return; } goto L_0026B710; } }
L_0026B728:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 41008ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], 0u + 261u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B768u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026B768u) [[unlikely]] return; }
L_0026B768:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B784u);  if (depth < kMaxDepth) unit_005A(c, 243u, depth + 1u); else { c.pc = 0x0026B150u; return; } if (c.pc != 0x0026B784u) [[unlikely]] return; }
L_0026B784:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 63u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B79Cu);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0026B79Cu) [[unlikely]] return; }
L_0026B79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7A4u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x0026B7A4u) [[unlikely]] return; }
L_0026B7A4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7B0u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0026B7B0u) [[unlikely]] return; }
L_0026B7B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 5520u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7C0u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0026B7C0u) [[unlikely]] return; }
L_0026B7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7C8u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x0026B7C8u) [[unlikely]] return; }
L_0026B7C8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0026B83C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3028u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + 22512u);
    set32(c.r[7], c.r[7].w[0] + 22984u);
    set32(c.r[8], 0u + 2752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B808u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0026B808u) [[unlikely]] return; }
L_0026B808:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B83C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3028u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], c.r[6].w[0] + 22512u);
    set32(c.r[7], c.r[7].w[0] + 22984u);
    set32(c.r[8], 0u + 2757u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B83Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0026B83Cu) [[unlikely]] return; }
L_0026B83C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026B840:
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
L_0026B868:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0026B9D8; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B8B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B9D8; } }
L_0026B8B0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[4], 0u - 1u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 12u));
    set32(c.r[5], c.r[3].w[0] + 63u);
    set32(c.r[3], c.r[3].w[0] + 126u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[2], c.r[6].w[0] - 19u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B90C; } }
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0026B90C; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0026B90C; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026B938; } }
L_0026B90C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B948; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B940; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B944; } }
L_0026B938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B948; } }
L_0026B940:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026B944:
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026B948:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B958u);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0026C140u; return; } if (c.pc != 0x0026B958u) [[unlikely]] return; }
L_0026B958:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B96Cu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026B96Cu) [[unlikely]] return; }
L_0026B96C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B97Cu);  if (depth < kMaxDepth) unit_005A(c, 180u, depth + 1u); else { c.pc = 0x00269BD8u; return; } if (c.pc != 0x0026B97Cu) [[unlikely]] return; }
L_0026B97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[16].w[0] + 592u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B998u);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0026B998u) [[unlikely]] return; }
L_0026B998:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9A8u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026B9A8u) [[unlikely]] return; }
L_0026B9A8:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9C4u);  if (depth < kMaxDepth) unit_005A(c, 243u, depth + 1u); else { c.pc = 0x0026B150u; return; } if (c.pc != 0x0026B9C4u) [[unlikely]] return; }
L_0026B9C4:
    set32(c.r[4], 0u + 63u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9D4u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0026B9D4u) [[unlikely]] return; }
L_0026B9D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026B9D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026B9F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 28360u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026BAC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u - 1u);
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 28356u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026BAA0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
L_0026BA38:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BA80; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0026BA78; } }
    set32(c.r[6], ld32((c.r[11].w[0] + 28360u)));
    set32(c.r[3], c.r[9].w[0] + c.r[10].w[0]);
    c.budget -= 2;
L_0026BA58:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1072u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BA78; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BA58u | kUnwind; return; } goto L_0026BA58; } }
L_0026BA78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_0026BAB0; } }
L_0026BA80:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1072u);
    set32(c.r[9], c.r[9].w[0] + 1072u);
    c.r[2].d[0] = c.r[7].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BA38u | kUnwind; return; } goto L_0026BA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BAF0; } }
L_0026BAA0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[12].w[0] + 28356u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026BAB0:
    st32((c.r[12].w[0] + 28356u), c.r[7].w[0]);
    c.budget -= 1;
L_0026BAB4:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026BAC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 4;
L_0026BAD0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BAB4u | kUnwind; return; } goto L_0026BAB4; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1072u);
    c.r[2].d[0] = c.r[7].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BAD0u | kUnwind; return; } goto L_0026BAD0; } }
L_0026BAF0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026BB00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[16].w[0] - 7424u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB64u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x0026BB64u) [[unlikely]] return; }
L_0026BB64:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB78u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x0026BB78u) [[unlikely]] return; }
L_0026BB78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB88u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0026BB88u) [[unlikely]] return; }
L_0026BB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB94u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x0026BB94u) [[unlikely]] return; }
L_0026BB94:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] - 31776u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBA8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026BBA8u) [[unlikely]] return; }
L_0026BBA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BC00; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 580u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0026BC00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BC00; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBE8u);  if (depth < kMaxDepth) unit_005A(c, 73u, depth + 1u); else { c.pc = 0x00268AE0u; return; } if (c.pc != 0x0026BBE8u) [[unlikely]] return; }
L_0026BBE8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC00u);  if (depth < kMaxDepth) unit_005A(c, 106u, depth + 1u); else { c.pc = 0x00268EC0u; return; } if (c.pc != 0x0026BC00u) [[unlikely]] return; }
L_0026BC00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1072u);
    c.r[2].d[0] = c.r[18].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BBA8u | kUnwind; return; } goto L_0026BBA8; } }
    set32(c.r[16], c.r[30].w[0] - 7424u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[23].w[0] - 31776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC2Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026BC2Cu) [[unlikely]] return; }
L_0026BC2C:
    set32(c.r[3], c.r[22].w[0] + 22464u);
    c.r[2].d[0] = ld64((c.r[22].w[0] + 22464u));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC50u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x0026BC50u) [[unlikely]] return; }
L_0026BC50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC60u);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x0026BC60u) [[unlikely]] return; }
L_0026BC60:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC70u);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x0026BC70u) [[unlikely]] return; }
L_0026BC70:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 63u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC84u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026BC84u) [[unlikely]] return; }
L_0026BC84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC90u);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x0026BC90u) [[unlikely]] return; }
L_0026BC90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC9Cu);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x0026BC9Cu) [[unlikely]] return; }
L_0026BC9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCACu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0026BCACu) [[unlikely]] return; }
L_0026BCAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCC0u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x0026BCC0u) [[unlikely]] return; }
L_0026BCC0:
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
L_0026BCF8:
    if (::decomp::hook_0026BCF8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0026BCF8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 7424u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[11], c.r[2].w[0] - 7424u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[8].w[0] + 22464u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[10].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = ld64((c.r[8].w[0] + 22464u));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + 16u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[10].d[0] = c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[7].d[0] = c.r[7].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 8u), c.r[8].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 29;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0026BD8C; } }
    c.budget -= 1;
L_0026BD70:
    set32(c.r[2], ld32((c.r[11].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    st32((c.r[11].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BD70u | kUnwind; return; } goto L_0026BD70; } }
L_0026BD8C:
    set32(c.r[6], ld32((c.r[17].w[0] - 7424u)));
    set32(c.r[7], c.r[17].w[0] - 7424u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDB8; } }
L_0026BDA0:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BDA0u | kUnwind; return; } goto L_0026BDA0; } }
L_0026BDB8:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026BDDC; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0026BDDC:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[17].w[0] - 7424u);
    st32((c.r[7].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] - 7424u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BE48; } }
    c.budget -= 1;
L_0026BE30:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BE30u | kUnwind; return; } goto L_0026BE30; } }
L_0026BE48:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026BE6C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0026BE6C:
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] - 7424u);
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[4], c.r[20].w[0] - 31776u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE88u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026BE88u) [[unlikely]] return; }
L_0026BE88:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026BED4; } }
    c.budget -= 1;
L_0026BE98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEACu);  if (depth < kMaxDepth) unit_005A(c, 73u, depth + 1u); else { c.pc = 0x00268AE0u; return; } if (c.pc != 0x0026BEACu) [[unlikely]] return; }
L_0026BEAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEC4u);  if (depth < kMaxDepth) unit_005A(c, 106u, depth + 1u); else { c.pc = 0x00268EC0u; return; } if (c.pc != 0x0026BEC4u) [[unlikely]] return; }
L_0026BEC4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BE98u | kUnwind; return; } goto L_0026BE98; } }
L_0026BED4:
    set32(c.r[16], c.r[17].w[0] - 7424u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[20].w[0] - 31776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEECu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026BEECu) [[unlikely]] return; }
L_0026BEEC:
    set32(c.r[6], ld32((c.r[17].w[0] - 7424u)));
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BF18; } }
    c.budget -= 1;
L_0026BF00:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BF00u | kUnwind; return; } goto L_0026BF00; } }
L_0026BF18:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026BF3C; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0026BF3C:
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 8u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[7], c.r[17].w[0] - 7424u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] - 7424u)));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BFAC; } }
L_0026BF90:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BF90u | kUnwind; return; } goto L_0026BF90; } }
L_0026BFAC:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], c.r[17].w[0] - 7424u);
    set32(c.r[6], 0u + 63u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], ld32((c.r[17].w[0] - 7424u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[9].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    st32((c.r[17].w[0] - 7424u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 21;
    [[clang::musttail]] return unit_005B(c, 1u, depth);
}

}
