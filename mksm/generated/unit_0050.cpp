#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_00242FF8;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0050[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19,
    0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0050(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00240000;
    case 2u: goto L_00240010;
    case 3u: goto L_00240018;
    case 4u: goto L_00240040;
    case 5u: goto L_0024004C;
    case 6u: goto L_0024006C;
    case 7u: goto L_00240078;
    case 8u: goto L_00240094;
    case 9u: goto L_002400AC;
    case 10u: goto L_002400C8;
    case 11u: goto L_002400D4;
    case 12u: goto L_002400EC;
    case 13u: goto L_002400F4;
    case 14u: goto L_00240108;
    case 15u: goto L_00240124;
    case 16u: goto L_00240144;
    case 17u: goto L_00240164;
    case 18u: goto L_00240170;
    case 19u: goto L_0024017C;
    case 20u: goto L_00240188;
    case 21u: goto L_00240198;
    case 22u: goto L_002401A4;
    case 23u: goto L_002401C8;
    case 24u: goto L_002401D4;
    case 25u: goto L_002401E0;
    case 26u: goto L_0024020C;
    case 27u: goto L_0024023C;
    case 28u: goto L_00240260;
    case 29u: goto L_00240288;
    case 30u: goto L_0024029C;
    case 31u: goto L_002402D0;
    case 32u: goto L_002402E8;
    case 33u: goto L_002402F4;
    case 34u: goto L_00240324;
    case 35u: goto L_0024034C;
    case 36u: goto L_0024038C;
    case 37u: goto L_00240394;
    case 38u: goto L_002403A0;
    case 39u: goto L_002403A8;
    case 40u: goto L_002403B8;
    case 41u: goto L_002403DC;
    case 42u: goto L_002403E4;
    case 43u: goto L_00240404;
    case 44u: goto L_00240438;
    case 45u: goto L_00240454;
    case 46u: goto L_00240498;
    case 47u: goto L_002404E0;
    case 48u: goto L_00240560;
    case 49u: goto L_002405A8;
    case 50u: goto L_002405F0;
    case 51u: goto L_00240660;
    case 52u: goto L_00240710;
    case 53u: goto L_00240794;
    case 54u: goto L_002407A4;
    case 55u: goto L_00240810;
    case 56u: goto L_00240820;
    case 57u: goto L_00240878;
    case 58u: goto L_00240888;
    case 59u: goto L_002409C0;
    case 60u: goto L_00240A7C;
    case 61u: goto L_00240A8C;
    case 62u: goto L_00240B10;
    case 63u: goto L_00240B20;
    case 64u: goto L_00240BE8;
    case 65u: goto L_00240C68;
    case 66u: goto L_00240CE0;
    case 67u: goto L_00240CEC;
    case 68u: goto L_00240D00;
    case 69u: goto L_00240D98;
    case 70u: goto L_00240E14;
    case 71u: goto L_00240E24;
    case 72u: goto L_00240E90;
    case 73u: goto L_00240EA0;
    case 74u: goto L_00240EF8;
    case 75u: goto L_00240F08;
    case 76u: goto L_00241040;
    case 77u: goto L_00241114;
    case 78u: goto L_00241124;
    case 79u: goto L_002411D0;
    case 80u: goto L_002411E0;
    case 81u: goto L_002412C8;
    case 82u: goto L_00241318;
    case 83u: goto L_00241388;
    case 84u: goto L_002413E0;
    case 85u: goto L_00241410;
    case 86u: goto L_00241464;
    case 87u: goto L_00241470;
    case 88u: goto L_002414F8;
    case 89u: goto L_00241558;
    case 90u: goto L_0024156C;
    case 91u: goto L_002415C4;
    case 92u: goto L_002415D8;
    case 93u: goto L_002415EC;
    case 94u: goto L_0024161C;
    case 95u: goto L_00241630;
    case 96u: goto L_00241638;
    case 97u: goto L_00241660;
    case 98u: goto L_0024166C;
    case 99u: goto L_00241688;
    case 100u: goto L_0024169C;
    case 101u: goto L_002416BC;
    case 102u: goto L_002416C4;
    case 103u: goto L_002416CC;
    case 104u: goto L_002416E8;
    case 105u: goto L_00241768;
    case 106u: goto L_00241834;
    case 107u: goto L_00241858;
    case 108u: goto L_00241878;
    case 109u: goto L_0024188C;
    case 110u: goto L_0024189C;
    case 111u: goto L_002418AC;
    case 112u: goto L_002418CC;
    case 113u: goto L_002418D8;
    case 114u: goto L_002418E8;
    case 115u: goto L_00241914;
    case 116u: goto L_00241924;
    case 117u: goto L_00241930;
    case 118u: goto L_00241940;
    case 119u: goto L_00241970;
    case 120u: goto L_0024198C;
    case 121u: goto L_002419A4;
    case 122u: goto L_002419B0;
    case 123u: goto L_002419B8;
    case 124u: goto L_002419C0;
    case 125u: goto L_002419E4;
    case 126u: goto L_002419FC;
    case 127u: goto L_00241A14;
    case 128u: goto L_00241A1C;
    case 129u: goto L_00241A40;
    case 130u: goto L_00241A60;
    case 131u: goto L_00241A98;
    case 132u: goto L_00241AE0;
    case 133u: goto L_00241B74;
    case 134u: goto L_00241BB0;
    case 135u: goto L_00241BB8;
    case 136u: goto L_00241BC4;
    case 137u: goto L_00241C74;
    case 138u: goto L_00241C7C;
    case 139u: goto L_00241C88;
    case 140u: goto L_00241D10;
    case 141u: goto L_00241D38;
    case 142u: goto L_00241D6C;
    case 143u: goto L_00241DA0;
    case 144u: goto L_00241E88;
    case 145u: goto L_00241ED8;
    case 146u: goto L_00241EEC;
    case 147u: goto L_00241FA4;
    case 148u: goto L_002420DC;
    case 149u: goto L_00242128;
    case 150u: goto L_002421C4;
    case 151u: goto L_002421D8;
    case 152u: goto L_002421EC;
    case 153u: goto L_00242230;
    case 154u: goto L_00242320;
    case 155u: goto L_00242344;
    case 156u: goto L_00242358;
    case 157u: goto L_0024236C;
    case 158u: goto L_002423A0;
    case 159u: goto L_00242434;
    case 160u: goto L_0024244C;
    case 161u: goto L_00242468;
    case 162u: goto L_00242480;
    case 163u: goto L_00242520;
    case 164u: goto L_002425C0;
    case 165u: goto L_0024263C;
    case 166u: goto L_00242698;
    case 167u: goto L_002427A8;
    case 168u: goto L_00242968;
    case 169u: goto L_002429C0;
    case 170u: goto L_00242A38;
    case 171u: goto L_00242A98;
    case 172u: goto L_00242AD0;
    case 173u: goto L_00242B78;
    case 174u: goto L_00242BC8;
    case 175u: goto L_00242BE8;
    case 176u: goto L_00242CC4;
    case 177u: goto L_00242D08;
    case 178u: goto L_00242D38;
    case 179u: goto L_00242DDC;
    case 180u: goto L_00242E24;
    case 181u: goto L_00242E40;
    case 182u: goto L_00242E5C;
    case 183u: goto L_00242E78;
    case 184u: goto L_00242E8C;
    case 185u: goto L_00242EA4;
    case 186u: goto L_00242EC4;
    case 187u: goto L_00242FF8;
    case 188u: goto L_00243158;
    case 189u: goto L_002431A8;
    case 190u: goto L_002434FC;
    case 191u: goto L_0024355C;
    case 192u: goto L_00243738;
    case 193u: goto L_002437FC;
    case 194u: goto L_00243864;
    case 195u: goto L_002438D8;
    case 196u: goto L_00243914;
    case 197u: goto L_00243920;
    case 198u: goto L_00243A5C;
    case 199u: goto L_00243A84;
    case 200u: goto L_00243B38;
    case 201u: goto L_00243BF0;
    case 202u: goto L_00243CF8;
    case 203u: goto L_00243E50;
    case 204u: goto L_00243F88;
    case 205u: goto L_00243FC8;
    default: bad_entry(c, 0x00240000u); return;
    }
L_00240000:
    set32(c.r[4], c.r[16].w[0] - 18608u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240010u);  if (depth < kMaxDepth) unit_005F(c, 126u, depth + 1u); else { c.pc = 0x0027D3F0u; return; } if (c.pc != 0x00240010u) [[unlikely]] return; }
L_00240010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240018u);  if (depth < kMaxDepth) unit_0052(c, 90u, depth + 1u); else { c.pc = 0x0024AC88u; return; } if (c.pc != 0x00240018u) [[unlikely]] return; }
L_00240018:
    c.r[19].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[21], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[23].d[0];  if (t) { goto L_002400AC; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 19808u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002400AC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240040u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x00240040u) [[unlikely]] return; }
L_00240040:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024004Cu);  if (depth < kMaxDepth) unit_004F(c, 59u, depth + 1u); else { c.pc = 0x0023CC00u; return; } if (c.pc != 0x0024004Cu) [[unlikely]] return; }
L_0024004C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] - 1792u);
    set32(c.r[16], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[5], c.r[2].w[0] + 8368u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024006Cu);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x0024006Cu) [[unlikely]] return; }
L_0024006C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_002400A0; } }
    c.budget -= 1;
L_00240078:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240094u);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024CF08u; return; } if (c.pc != 0x00240094u) [[unlikely]] return; }
L_00240094:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240078u | kUnwind; return; } goto L_00240078; } }
L_002400A0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400ACu);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002400ACu) [[unlikely]] return; }
L_002400AC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00240144; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], 0u + 4u);
    if (c.r[18].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400C8u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002400C8u) [[unlikely]] return; }
L_002400C8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400D4u);  if (depth < kMaxDepth) unit_004F(c, 59u, depth + 1u); else { c.pc = 0x0023CC00u; return; } if (c.pc != 0x002400D4u) [[unlikely]] return; }
L_002400D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 23824u);
    set32(c.r[4], c.r[3].w[0] + 8368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400ECu);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x002400ECu) [[unlikely]] return; }
L_002400EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400F4u);  if (depth < kMaxDepth) unit_0052(c, 97u, depth + 1u); else { c.pc = 0x0024AFA0u; return; } if (c.pc != 0x002400F4u) [[unlikely]] return; }
L_002400F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00240130; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00240108:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240124u);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024CF08u; return; } if (c.pc != 0x00240124u) [[unlikely]] return; }
L_00240124:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240108u | kUnwind; return; } goto L_00240108; } }
L_00240130:
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], 0u + 5u);
    if (c.r[18].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240144u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x00240144u) [[unlikely]] return; }
L_00240144:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[23].d[0];  if (t) { goto L_002401A4; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 19808u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024017C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240164u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x00240164u) [[unlikely]] return; }
L_00240164:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240170u);  if (depth < kMaxDepth) unit_004F(c, 184u, depth + 1u); else { c.pc = 0x0023FCC0u; return; } if (c.pc != 0x00240170u) [[unlikely]] return; }
L_00240170:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024017Cu);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x0024017Cu) [[unlikely]] return; }
L_0024017C:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240188u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x00240188u) [[unlikely]] return; }
L_00240188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 356u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240198u);  if (depth < kMaxDepth) unit_0059(c, 117u, depth + 1u); else { c.pc = 0x002659B0u; return; } if (c.pc != 0x00240198u) [[unlikely]] return; }
L_00240198:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401A4u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002401A4u) [[unlikely]] return; }
L_002401A4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002401E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20620u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002401E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401C8u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002401C8u) [[unlikely]] return; }
L_002401C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401D4u);  if (depth < kMaxDepth) unit_004F(c, 82u, depth + 1u); else { c.pc = 0x0023DF70u; return; } if (c.pc != 0x002401D4u) [[unlikely]] return; }
L_002401D4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401E0u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002401E0u) [[unlikely]] return; }
L_002401E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20608u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024020C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 352u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024020Cu);  if (depth < kMaxDepth) unit_0058(c, 197u, depth + 1u); else { c.pc = 0x00263428u; return; } if (c.pc != 0x0024020Cu) [[unlikely]] return; }
L_0024020C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0024029C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24428u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024029C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] - 7120u);
    set32(c.r[5], c.r[3].w[0] - 1792u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024023Cu);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x0024023Cu) [[unlikely]] return; }
L_0024023C:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], ld32((c.r[20].w[0] + 88u)));
    st32((c.r[4].w[0] + 6380u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240294; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00240260:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 3u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240288u);  if (depth < kMaxDepth) unit_0051(c, 101u, depth + 1u); else { c.pc = 0x00246CF0u; return; } if (c.pc != 0x00240288u) [[unlikely]] return; }
L_00240288:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240260u | kUnwind; return; } goto L_00240260; } }
L_00240294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024029Cu);  if (depth < kMaxDepth) unit_0052(c, 90u, depth + 1u); else { c.pc = 0x0024AC88u; return; } if (c.pc != 0x0024029Cu) [[unlikely]] return; }
L_0024029C:
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240018u | kUnwind; return; } goto L_00240018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[30].w[0] - 360u)));
    set32(c.r[16], c.r[2].w[0] - 7272u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402D0u);  if (depth < kMaxDepth) unit_0059(c, 145u, depth + 1u); else { c.pc = 0x00266858u; return; } if (c.pc != 0x002402D0u) [[unlikely]] return; }
L_002402D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[30].w[0] - 360u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402E8u);  if (depth < kMaxDepth) unit_0059(c, 171u, depth + 1u); else { c.pc = 0x002670A0u; return; } if (c.pc != 0x002402E8u) [[unlikely]] return; }
L_002402E8:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402F4u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002402F4u) [[unlikely]] return; }
L_002402F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024032C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 32064u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240324u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240324u) [[unlikely]] return; }
L_00240324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024034C; } }
L_0024032C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 32064u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024034Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024034Cu) [[unlikely]] return; }
L_0024034C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19232u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024038C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + 19264u);
    st32((c.r[2].w[0] + 200u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[3].w[0] + 19240u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] - 18608u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024038Cu);  if (depth < kMaxDepth) unit_005F(c, 26u, depth + 1u); else { c.pc = 0x0027C898u; return; } if (c.pc != 0x0024038Cu) [[unlikely]] return; }
L_0024038C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240394u);  if (depth < kMaxDepth) unit_0049(c, 332u, depth + 1u); else { c.pc = 0x00227CD0u; return; } if (c.pc != 0x00240394u) [[unlikely]] return; }
L_00240394:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403A0u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x002403A0u) [[unlikely]] return; }
L_002403A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403A8u);  if (depth < kMaxDepth) unit_0052(c, 97u, depth + 1u); else { c.pc = 0x0024AFA0u; return; } if (c.pc != 0x002403A8u) [[unlikely]] return; }
L_002403A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[3].w[0] - 18608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403B8u);  if (depth < kMaxDepth) unit_005F(c, 126u, depth + 1u); else { c.pc = 0x0027D3F0u; return; } if (c.pc != 0x002403B8u) [[unlikely]] return; }
L_002403B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] - 7272u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], ld32((c.r[30].w[0] - 360u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403DCu);  if (depth < kMaxDepth) unit_0059(c, 145u, depth + 1u); else { c.pc = 0x00266858u; return; } if (c.pc != 0x002403DCu) [[unlikely]] return; }
L_002403DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403E4u);  if (depth < kMaxDepth) unit_004A(c, 17u, depth + 1u); else { c.pc = 0x002282F8u; return; } if (c.pc != 0x002403E4u) [[unlikely]] return; }
L_002403E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[2], c.r[3].w[0] + 13640u);
    st32((c.r[3].w[0] + 13640u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240404u);  if (depth < kMaxDepth) unit_0048(c, 305u, depth + 1u); else { c.pc = 0x00223FA8u; return; } if (c.pc != 0x00240404u) [[unlikely]] return; }
L_00240404:
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
L_00240438:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00240454; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240454:
    c.f[1] = ld32((c.r[4].w[0] + 364u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00240518; } }
    c.f[1] = ld32((c.r[4].w[0] + 356u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002404B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[1].w[0];
    c.budget -= 2;
L_00240498:
    c.f[0] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.f[1] = c.f[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240498u | kUnwind; return; } goto L_00240498; } }
    st32((c.r[4].w[0] + 356u), c.f[0]);
    c.budget -= 1;
L_002404B4:
    c.f[1] = ld32((c.r[4].w[0] + 356u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002404FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.budget -= 3;
L_002404E0:
    c.f[0] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.f[1] = c.f[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002404E0u | kUnwind; return; } goto L_002404E0; } }
    st32((c.r[4].w[0] + 356u), c.f[0]);
    c.budget -= 1;
L_002404FC:
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 356u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 356u), c.f[1]);
    c.budget -= 7;
L_00240518:
    c.f[1] = ld32((c.r[4].w[0] + 368u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002405E0; } }
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024057C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[1].w[0];
    c.budget -= 3;
L_00240560:
    c.f[0] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.f[1] = c.f[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240560u | kUnwind; return; } goto L_00240560; } }
    st32((c.r[4].w[0] + 360u), c.f[0]);
    c.budget -= 1;
L_0024057C:
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002405C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.budget -= 3;
L_002405A8:
    c.f[0] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.f[1] = c.f[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002405A8u | kUnwind; return; } goto L_002405A8; } }
    st32((c.r[4].w[0] + 360u), c.f[0]);
    c.budget -= 1;
L_002405C4:
    c.f[0] = ld32((c.r[4].w[0] + 368u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 360u), c.f[1]);
    c.budget -= 7;
L_002405E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002405F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[8].w[0] + 20728u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[11], c.r[2].w[0] - 7424u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[12].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[9].d[0] = ld64((c.r[8].w[0] + 20728u));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 7424u)));
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240678; } }
L_00240660:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240660u | kUnwind; return; } goto L_00240660; } }
L_00240678:
    set32(c.r[5], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024069C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0024069C:
    st32((c.r[11].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[11].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    st32((c.r[11].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[21], c.r[7].w[0] << 4);
    st32((c.r[11].w[0]), c.r[5].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[11].w[0] + 12u), 0u);
    set32(c.r[23], c.r[8].w[0] << 4);
    set32(c.r[22], c.r[12].w[0] << 4);
    set32(c.r[7], c.r[18].w[0] - 7424u);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024072C; } }
    c.budget -= 1;
L_00240710:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240710u | kUnwind; return; } goto L_00240710; } }
L_0024072C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[20], c.r[18].w[0] - 7424u);
    set32(c.r[6], 0u + 63u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[17], c.r[3].w[0] - 18600u);
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[20].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240794u);  if (depth < kMaxDepth) unit_005D(c, 71u, depth + 1u); else { c.pc = 0x00275260u; return; } if (c.pc != 0x00240794u) [[unlikely]] return; }
L_00240794:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407A4u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x002407A4u) [[unlikely]] return; }
L_002407A4:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 78u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], 0u + 71u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[6].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240810u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00240810u) [[unlikely]] return; }
L_00240810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240820u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00240820u) [[unlikely]] return; }
L_00240820:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], 0u + 2048u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] - c.r[16].d[0];
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    c.r[3].d[0] = c.r[3].d[0] << 4;
    set32(c.r[5], 0u + 24u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[18].w[0] - 7424u), c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240878u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00240878u) [[unlikely]] return; }
L_00240878:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240888u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00240888u) [[unlikely]] return; }
L_00240888:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = c.r[16].d[0] << 16;
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[4], 0u + 64u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[5], 0u + 168u);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[8], 0u + 66u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[4], 0u + 128u);
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[11], 0u + 6u);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] + 48u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[9], 0u + 513u);
    st32((c.r[18].w[0] - 7424u), c.r[6].w[0]);
    set32(c.r[10], 0u + 20u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.r[2].d[0] = ld64((c.r[19].w[0] + 560u));
    set32(c.r[12], 0u + 2u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[9].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 58;
    { const bool t = c.r[3].d[0] == c.r[12].d[0];  if (t) { goto L_00240998; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00240984u);  goto L_00240988; }
L_00240988:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00240998:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[20].w[0] + 20u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002409D8; } }
    c.budget -= 1;
L_002409C0:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002409C0u | kUnwind; return; } goto L_002409C0; } }
L_002409D8:
    set32(c.r[2], c.r[30].w[0] + 21008u);
    c.r[3].d[0] = ld64((c.r[30].w[0] + 21008u));
    c.r[4].d[0] = ld64((c.r[2].w[0] + 8u));
    set32(c.r[19], c.r[18].w[0] - 7424u);
    st32((c.r[20].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[17], c.r[2].w[0] - 18600u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[8], 0u + 342u);
    set32(c.r[5], ld32((c.r[18].w[0] - 7424u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[5], c.r[2].w[0] + 20u);
    st32((c.r[18].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 24u);
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + 28u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[8], c.r[2].w[0] + 32u);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[5], c.r[2].w[0] + 36u);
    st32((c.r[18].w[0] - 7424u), c.r[7].w[0]);
    set32(c.r[9], c.r[2].w[0] + 40u);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[18].w[0] - 7424u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[10].w[0]);
    st32((c.r[18].w[0] - 7424u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[18].w[0] - 7424u), c.r[9].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A7Cu);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00240A7Cu) [[unlikely]] return; }
L_00240A7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A8Cu);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00240A8Cu) [[unlikely]] return; }
L_00240A8C:
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st32((c.r[18].w[0] - 7424u), c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[23].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[18].w[0] - 7424u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] - 7424u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B10u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00240B10u) [[unlikely]] return; }
L_00240B10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B20u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00240B20u) [[unlikely]] return; }
L_00240B20:
    set32(c.r[3], c.r[21].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 20u)));
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[4].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[3].w[0] - 2u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[3], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 30;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00240BC0; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00240BACu);  goto L_00240BB0; }
L_00240BB0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00240BC0:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240C00; } }
    c.budget -= 1;
L_00240BE8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240BE8u | kUnwind; return; } goto L_00240BE8; } }
L_00240C00:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[18].w[0] - 7424u);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[18].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] >> 2);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240C68:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 24448u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[3].w[0] + 20728u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[8].d[0] = ld64((c.r[3].w[0] + 20728u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    st64((c.r[29].w[0]), c.r[8].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CE0u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00240CE0u) [[unlikely]] return; }
L_00240CE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CECu);  if (depth < kMaxDepth) unit_004D(c, 117u, depth + 1u); else { c.pc = 0x00236BA0u; return; } if (c.pc != 0x00240CECu) [[unlikely]] return; }
L_00240CEC:
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240D18; } }
    c.budget -= 1;
L_00240D00:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240D00u | kUnwind; return; } goto L_00240D00; } }
L_00240D18:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00240D3C; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00240D3C:
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + 12u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], 0u - 16u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[2], c.r[6].w[0] + 8u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 28u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    if (c.r[4].d[0] != 0) c.r[7].d[0] = c.r[3].d[0];
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00240DB4; } }
L_00240D98:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240D98u | kUnwind; return; } goto L_00240D98; } }
L_00240DB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[7], 0u + 63u);
    set32(c.r[17], c.r[22].w[0] - 18600u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 36u), c.r[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240E14u);  if (depth < kMaxDepth) unit_005D(c, 71u, depth + 1u); else { c.pc = 0x00275260u; return; } if (c.pc != 0x00240E14u) [[unlikely]] return; }
L_00240E14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240E24u);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x00240E24u) [[unlikely]] return; }
L_00240E24:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 78u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[5], 0u + 71u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240E90u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00240E90u) [[unlikely]] return; }
L_00240E90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240EA0u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00240EA0u) [[unlikely]] return; }
L_00240EA0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], 0u + 2048u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] - c.r[16].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] << 4;
    set32(c.r[5], 0u + 24u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240EF8u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00240EF8u) [[unlikely]] return; }
L_00240EF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F08u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00240F08u) [[unlikely]] return; }
L_00240F08:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = c.r[16].d[0] << 16;
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[4], 0u + 64u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[5], 0u + 168u);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[8], 0u + 66u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 128u);
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[11], 0u + 6u);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] + 48u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[9], 0u + 513u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[10], 0u + 20u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    set32(c.r[12], 0u + 2u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[9].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 58;
    { const bool t = c.r[3].d[0] == c.r[12].d[0];  if (t) { goto L_00241018; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00241004u);  goto L_00241008; }
L_00241008:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00241018:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241058; } }
    c.budget -= 1;
L_00241040:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241040u | kUnwind; return; } goto L_00241040; } }
L_00241058:
    set32(c.r[2], c.r[21].w[0] + 21008u);
    c.r[3].d[0] = ld64((c.r[21].w[0] + 21008u));
    c.r[4].d[0] = ld64((c.r[2].w[0] + 8u));
    set32(c.r[8], 0u + 342u);
    st64((c.r[29].w[0] + 80u), c.r[3].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    st64((c.r[29].w[0] + 88u), c.r[4].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[17], c.r[22].w[0] - 18600u);
    st32((c.r[29].w[0] + 36u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[18].d[0] = 0ull | 32768ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + 20u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[5].w[0] + 24u);
    st32((c.r[5].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[2], c.r[5].w[0] + 28u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[8], c.r[5].w[0] + 32u);
    st32((c.r[5].w[0] + 20u), 0u);
    set32(c.r[9], c.r[5].w[0] + 36u);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[10], c.r[5].w[0] + 40u);
    st32((c.r[5].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[5].w[0] + 32u), c.r[6].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241114u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00241114u) [[unlikely]] return; }
L_00241114:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241124u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x00241124u) [[unlikely]] return; }
L_00241124:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[8], c.r[6].w[0] + 8u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[9], c.r[6].w[0] + 12u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411D0u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x002411D0u) [[unlikely]] return; }
L_002411D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411E0u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x002411E0u) [[unlikely]] return; }
L_002411E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    set32(c.r[16], c.r[16].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 36u)));
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 39;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002412A4; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00241290u);  goto L_00241294; }
L_00241294:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_002412A4:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002412E0; } }
L_002412C8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002412C8u | kUnwind; return; } goto L_002412C8; } }
L_002412E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - 4u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241330; } }
L_00241318:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241318u | kUnwind; return; } goto L_00241318; } }
L_00241330:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241354; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00241354:
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 8u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241388u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00241388u) [[unlikely]] return; }
L_00241388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 57376ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 36912ull;
    c.r[6].d[0] = c.r[6].d[0] | 57360ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 325u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002413E0u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x002413E0u) [[unlikely]] return; }
L_002413E0:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00241410:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 19264u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[3].w[0] - 7088u), 0u);
    c.budget -= 19;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002414F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241464u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00241464u) [[unlikely]] return; }
L_00241464:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241470u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00241470u) [[unlikely]] return; }
L_00241470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[2].w[0] - 7424u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002414F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002414F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57376ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36912ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    set32(c.r[2], 0u + 325u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 7284u), c.r[2].w[0]);
    c.budget -= 21;
L_002414F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414F8u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002414F8u) [[unlikely]] return; }
L_002414F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 31944u)));
    set32(c.r[3], c.r[3].w[0] - 27280u);
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00241528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10264u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002416AC; } }
L_00241528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 7272u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002415FC; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 5;
L_00241558:
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[23].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024156Cu);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x0024156Cu) [[unlikely]] return; }
L_0024156C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002415EC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002415EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024159C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 28532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002415B4; } }
L_0024159C:
    set32(c.r[2], ld32((c.r[16].w[0] + 3576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002415C4; } }
    set32(c.r[2], ld32((c.r[21].w[0] - 8128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002415C4; } }
L_002415B4:
    st32((c.r[16].w[0] + 4096u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002415C4u);  if (depth < kMaxDepth) unit_0051(c, 47u, depth + 1u); else { c.pc = 0x002457D0u; return; } if (c.pc != 0x002415C4u) [[unlikely]] return; }
L_002415C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002415D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002415D8u);  if (depth < kMaxDepth) unit_0099(c, 271u, depth + 1u); else { c.pc = 0x00367250u; return; } if (c.pc != 0x002415D8u) [[unlikely]] return; }
L_002415D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 3576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002415EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002415ECu);  if (depth < kMaxDepth) unit_005B(c, 254u, depth + 1u); else { c.pc = 0x0026EA60u; return; } if (c.pc != 0x002415ECu) [[unlikely]] return; }
L_002415EC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241558u | kUnwind; return; } goto L_00241558; } }
L_002415FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[3].w[0] - 7272u);
    set32(c.r[19], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00241630; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024161Cu);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x0024161Cu) [[unlikely]] return; }
L_0024161C:
    set32(c.r[4], ld32((c.r[2].w[0] + 3576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241630u);  if (depth < kMaxDepth) unit_005B(c, 254u, depth + 1u); else { c.pc = 0x0026EA60u; return; } if (c.pc != 0x00241630u) [[unlikely]] return; }
L_00241630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241638u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x00241638u) [[unlikely]] return; }
L_00241638:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[5].w[0] - 7272u);
    set32(c.r[3], c.r[6].w[0] - 27280u);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002416AC; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00241660:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024166Cu);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x0024166Cu) [[unlikely]] return; }
L_0024166C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024169C; } }
    st32((c.r[16].w[0] + 4096u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241688u);  if (depth < kMaxDepth) unit_0051(c, 47u, depth + 1u); else { c.pc = 0x002457D0u; return; } if (c.pc != 0x00241688u) [[unlikely]] return; }
L_00241688:
    set32(c.r[4], ld32((c.r[16].w[0] + 3576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024169C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024169Cu);  if (depth < kMaxDepth) unit_005B(c, 254u, depth + 1u); else { c.pc = 0x0026EA60u; return; } if (c.pc != 0x0024169Cu) [[unlikely]] return; }
L_0024169C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241660u | kUnwind; return; } goto L_00241660; } }
L_002416AC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[7].w[0] + 6392u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416BCu);  if (depth < kMaxDepth) unit_0052(c, 113u, depth + 1u); else { c.pc = 0x0024B598u; return; } if (c.pc != 0x002416BCu) [[unlikely]] return; }
L_002416BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416C4u);  if (depth < kMaxDepth) unit_0053(c, 121u, depth + 1u); else { c.pc = 0x0024D758u; return; } if (c.pc != 0x002416C4u) [[unlikely]] return; }
L_002416C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416CCu);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x002416CCu) [[unlikely]] return; }
L_002416CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416E8u);  if (depth < kMaxDepth) unit_004B(c, 30u, depth + 1u); else { c.pc = 0x0022CB78u; return; } if (c.pc != 0x002416E8u) [[unlikely]] return; }
L_002416E8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[8].w[0] + 19616u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002417F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002417F0; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[9].w[0] - 7272u);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002417F0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002417F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 7276u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] - 30952u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002417F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.f[2] = 0u;
    set32(c.r[7], c.r[2].w[0] - 32552u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], 0u + 2u);
    c.budget -= 6;
L_00241768:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002417E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_002417E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002417E0; } }
    c.f[1] = ld32((c.r[4].w[0] + 412u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002417E0; } }
    c.f[0] = ld32((c.r[4].w[0] + 416u));
    set32(c.r[5], ld32((c.r[4].w[0] + 300u)));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 416u), c.f[1]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002417E0; } }
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 416u), c.f[0]);
    c.budget -= 5;
L_002417E0:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241768u | kUnwind; return; } goto L_00241768; } }
L_002417F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20652u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241848; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241848; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241834u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00241834u) [[unlikely]] return; }
L_00241834:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 13024u), c.f[0]);
    c.budget -= 5;
L_00241848:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241858u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00241858u) [[unlikely]] return; }
L_00241858:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20664u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002419B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241878u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00241878u) [[unlikely]] return; }
L_00241878:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[17], c.r[5].w[0] - 18600u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024188Cu);  if (depth < kMaxDepth) unit_005D(c, 74u, depth + 1u); else { c.pc = 0x002752B0u; return; } if (c.pc != 0x0024188Cu) [[unlikely]] return; }
L_0024188C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024189Cu);  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00275300u; return; } if (c.pc != 0x0024189Cu) [[unlikely]] return; }
L_0024189C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418ACu);  if (depth < kMaxDepth) unit_005D(c, 86u, depth + 1u); else { c.pc = 0x002753A0u; return; } if (c.pc != 0x002418ACu) [[unlikely]] return; }
L_002418AC:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[4], 0u + 78u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418CCu);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x002418CCu) [[unlikely]] return; }
L_002418CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418D8u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x002418D8u) [[unlikely]] return; }
L_002418D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418E8u);  if (depth < kMaxDepth) unit_005D(c, 79u, depth + 1u); else { c.pc = 0x00275328u; return; } if (c.pc != 0x002418E8u) [[unlikely]] return; }
L_002418E8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[5], 0u + 2048u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[3].d[0] = c.r[5].d[0] - c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.r[5].d[0] = c.r[5].d[0] - c.r[16].d[0];
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = c.r[5].d[0] << 4;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241914u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x00241914u) [[unlikely]] return; }
L_00241914:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241924u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x00241924u) [[unlikely]] return; }
L_00241924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241930u);  if (depth < kMaxDepth) unit_005D(c, 82u, depth + 1u); else { c.pc = 0x00275360u; return; } if (c.pc != 0x00241930u) [[unlikely]] return; }
L_00241930:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241940u);  if (depth < kMaxDepth) unit_005D(c, 84u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x00241940u) [[unlikely]] return; }
L_00241940:
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[16].w[0] + 63u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 24;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 6));
    set32(c.r[4], 0u + 76u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[18].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241970u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x00241970u) [[unlikely]] return; }
L_00241970:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[16], c.r[16].w[0] - 18608u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024198Cu);  if (depth < kMaxDepth) unit_005E(c, 4u, depth + 1u); else { c.pc = 0x00278050u; return; } if (c.pc != 0x0024198Cu) [[unlikely]] return; }
L_0024198C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419A4u);  if (depth < kMaxDepth) unit_005E(c, 8u, depth + 1u); else { c.pc = 0x00278520u; return; } if (c.pc != 0x002419A4u) [[unlikely]] return; }
L_002419A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419B0u);  if (depth < kMaxDepth) unit_005F(c, 84u, depth + 1u); else { c.pc = 0x0027CF38u; return; } if (c.pc != 0x002419B0u) [[unlikely]] return; }
L_002419B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419B8u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227F58u; return; } if (c.pc != 0x002419B8u) [[unlikely]] return; }
L_002419B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419C0u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x002419C0u) [[unlikely]] return; }
L_002419C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[6].w[0] + 14664u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002419E4; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 19624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002419E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419E4u);  if (depth < kMaxDepth) unit_007D(c, 174u, depth + 1u); else { c.pc = 0x002F6A90u; return; } if (c.pc != 0x002419E4u) [[unlikely]] return; }
L_002419E4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[7].w[0] - 18600u);
    set32(c.r[16], ld32((c.r[8].w[0] + 15804u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419FCu);  if (depth < kMaxDepth) unit_005D(c, 12u, depth + 1u); else { c.pc = 0x002743D8u; return; } if (c.pc != 0x002419FCu) [[unlikely]] return; }
L_002419FC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[9].w[0] + 19620u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A14u);  if (depth < kMaxDepth) unit_007D(c, 179u, depth + 1u); else { c.pc = 0x002F6B08u; return; } if (c.pc != 0x00241A14u) [[unlikely]] return; }
L_00241A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A1Cu);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00241A1Cu) [[unlikely]] return; }
L_00241A1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[30].w[0] + 19624u)));
    st32((c.r[3].w[0] + 15804u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] - 7272u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 4;
L_00241A40:
    set32(c.r[4], ld32((c.r[18].w[0] - 360u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A60u);  if (depth < kMaxDepth) unit_0059(c, 158u, depth + 1u); else { c.pc = 0x00266D18u; return; } if (c.pc != 0x00241A60u) [[unlikely]] return; }
L_00241A60:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241A40u | kUnwind; return; } goto L_00241A40; } }
L_00241A6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[30].w[0] + 19624u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 19812u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 19812u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241AE0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A98u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00241A98u) [[unlikely]] return; }
L_00241A98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 19836u)));
    set32(c.r[3], c.r[6].w[0] + 23824u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    set32(c.r[2], c.r[6].w[0] + 23824u);
    ldl(c.r[7], (c.r[2].w[0] + 7u));
    ldr(c.r[7], (c.r[2].w[0]));
    ldl(c.r[8], (c.r[2].w[0] + 15u));
    ldr(c.r[8], (c.r[2].w[0] + 8u));
    sdl(c.r[7], (c.r[29].w[0] + 7u));
    sdr(c.r[7], (c.r[29].w[0]));
    sdl(c.r[8], (c.r[29].w[0] + 15u));
    sdr(c.r[8], (c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AE0u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x00241AE0u) [[unlikely]] return; }
L_00241AE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 19816u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 19816u)));
    set32(c.r[4], c.r[5].w[0] + 6856u);
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 19816u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[2].w[0] + 6400u), 0u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[3].w[0] + 6408u), 0u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0] + 6416u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 12304ull;
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 57344ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[7].w[0] + 13284u), 0u);
    st32((c.r[2].w[0] + 13280u), 0u);
    st32((c.r[8].w[0] + 6288u), 0u);
    st32((c.r[9].w[0] + 13288u), 0u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B74u);  if (depth < kMaxDepth) unit_004C(c, 92u, depth + 1u); else { c.pc = 0x002314D8u; return; } if (c.pc != 0x00241B74u) [[unlikely]] return; }
L_00241B74:
    set32(c.r[2], ld32((c.r[30].w[0] + 19624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241D08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[17], c.r[3].w[0] + 19264u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], c.r[2].w[0] - 7288u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BB0u);  if (depth < kMaxDepth) unit_004D(c, 118u, depth + 1u); else { c.pc = 0x00236C80u; return; } if (c.pc != 0x00241BB0u) [[unlikely]] return; }
L_00241BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BB8u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00241BB8u) [[unlikely]] return; }
L_00241BB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BC4u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00241BC4u) [[unlikely]] return; }
L_00241BC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[2].w[0] - 7424u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241D10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 57376ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 36912ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    set32(c.r[2], 0u + 325u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241D10; } }
L_00241C48:
    set32(c.r[16], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00241D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[18], c.r[2].w[0] - 7288u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C74u);  if (depth < kMaxDepth) unit_004D(c, 118u, depth + 1u); else { c.pc = 0x00236C80u; return; } if (c.pc != 0x00241C74u) [[unlikely]] return; }
L_00241C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C7Cu);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00241C7Cu) [[unlikely]] return; }
L_00241C7C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C88u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00241C88u) [[unlikely]] return; }
L_00241C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[2].w[0] - 7424u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241D10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57376ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36912ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    set32(c.r[2], 0u + 325u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241D10; } }
L_00241D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D10u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00241D10u) [[unlikely]] return; }
L_00241D10:
    set32(c.r[2], ld32((c.r[30].w[0] + 19624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241D24; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[30].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 2;
L_00241D24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[18], 0u + 8u);
    set32(c.r[2], c.r[4].w[0] - 7272u);
    st32((c.r[4].w[0] - 7272u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
L_00241D38:
    st32((c.r[2].w[0] + 72u), 0u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241D38u | kUnwind; return; } goto L_00241D38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[5].w[0] + 6280u), 0u);
    st32((c.r[6].w[0] + 6408u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D6Cu);  if (depth < kMaxDepth) unit_0049(c, 249u, depth + 1u); else { c.pc = 0x00226F78u; return; } if (c.pc != 0x00241D6Cu) [[unlikely]] return; }
L_00241D6C:
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
L_00241DA0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.vu0.vf[2] = c.r[5];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    mmi::por(c.r[20], c.r[0], c.r[8]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    mmi::por(c.r[21], c.r[0], c.r[7]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[2].w[0] + 19808u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241F10; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], c.r[16].w[0] + 4768u);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[19], c.r[16].w[0] - 1344u);
    st32((c.r[19].w[0] + 1364u), c.f[0]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[7]);
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[17]);
    mmi::pextlw(c.r[9], c.r[18], c.r[17]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E88u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00241E88u) [[unlikely]] return; }
L_00241E88:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[7]);
    set32(c.r[3], c.f[20]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    mmi::pextlw(c.r[8], c.r[3], c.r[17]);
    mmi::pextlw(c.r[9], c.r[18], c.r[17]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241ED8u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00241ED8u) [[unlikely]] return; }
L_00241ED8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 832u);
    set32(c.r[5], c.r[16].w[0] - 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EECu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00241EECu) [[unlikely]] return; }
L_00241EEC:
    c.f[0] = ld32((c.r[19].w[0] + 568u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xCB980000u);
    c.r[1].d[0] = c.r[1].d[0] | 38528ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 568u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242204; } }
L_00241F10:
    set32(c.r[16], 0u + 48u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[4], c.f[20]);
    c.vu0.vf[1] = c.r[4];
    vu::mr32(c.vu0, 15u, 1u, 1u);
    vu::mr32(c.vu0, 15u, 1u, 1u);
    vu::mr32(c.vu0, 4u, 2u, 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[5], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.f[3]);
    mmi::pextlw(c.r[8], c.r[6], c.r[5]);
    mmi::pextlw(c.r[9], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    vu::sub(c.vu0, 15u, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[5].w[0]);
    vu::addbc(c.vu0, 14u, 5u, 0u, c.vu0.q);
    c.r[8] = c.vu0.vf[5];
    c.f[20] = c.r[8].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6560u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241FA4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00241FA4u) [[unlikely]] return; }
L_00241FA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241FCC; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241FFC; } }
L_00241FCC:
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241FF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241FFC; } }
L_00241FF0:
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 3;
L_00241FFC:
    set32(c.r[3], 0u + 48u);
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0] + 24716u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[0] = ld32((c.r[19].w[0] + 4140u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[6] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 6608u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[5] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[5], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[3], c.f[4]);
    set32(c.r[2], c.f[0]);
    mmi::pextlw(c.r[8], c.r[6], c.r[5]);
    mmi::pextlw(c.r[9], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B000000u);
    c.f[14] = c.r[1].w[0];
    set32(c.r[8], c.f[6]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    set32(c.r[8], c.f[3]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.f[15] = c.f[14];
    set32(c.r[8], c.f[5]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.r[6] = c.vu0.vf[1];
    c.r[2] = c.vu0.vf[1];
    mmi::prot3w(c.r[2], c.r[2]);
    c.r[5] = c.vu0.vf[1];
    mmi::pcpyud(c.r[5], c.r[5], c.r[0]);
    c.f[12] = c.r[6].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[12] = fp::add(c.f[12], c.f[14]);
    c.f[13] = fp::add(c.f[13], c.f[14]);
    c.f[14] = fp::add(c.f[0], c.f[14]);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420DCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002420DCu) [[unlikely]] return; }
L_002420DC:
    c.f[0] = 0u;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[2] = c.r[3];
    vu::mr32(c.vu0, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 1u, 1u, 0u, c.vu0.vf[1].w[3]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242174; } }
    c.budget -= 1;
L_00242128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.vu0.vf[2] = c.r[4];
    vu::mr32(c.vu0, 15u, 2u, 2u);
    vu::mr32(c.vu0, 15u, 2u, 2u);
    vu::mr32(c.vu0, 4u, 1u, 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 1u, 1u, 0u, c.vu0.vf[1].w[3]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.budget -= 19;
L_00242174:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    c.r[5] = c.vu0.vf[2];
    mmi::prot3w(c.r[5], c.r[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[5].w[0];
    vu::move(c.vu0, 15u, 1u, 2u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242128u | kUnwind; return; } goto L_00242128; } }
    set32(c.r[16], c.r[16].w[0] + 4768u);
    c.r[5] = c.vu0.vf[2];
    mmi::por(c.r[7], c.r[0], c.r[20]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::por(c.r[6], c.r[0], c.r[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002421C4u);  if (depth < kMaxDepth) unit_0052(c, 58u, depth + 1u); else { c.pc = 0x0024A700u; return; } if (c.pc != 0x002421C4u) [[unlikely]] return; }
L_002421C4:
    set32(c.r[4], c.r[16].w[0] - 832u);
    set32(c.r[5], c.r[16].w[0] - 896u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002421D8u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002421D8u) [[unlikely]] return; }
L_002421D8:
    set32(c.r[4], c.r[16].w[0] - 704u);
    set32(c.r[5], c.r[16].w[0] - 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002421ECu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002421ECu) [[unlikely]] return; }
L_002421EC:
    set32(c.r[16], c.r[16].w[0] - 1344u);
    set32(c.r[2], c.r[17].w[0] + 19264u);
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 568u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 568u), c.f[0]);
    c.budget -= 6;
L_00242204:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00242230:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 13664u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::por(c.r[17], c.r[0], c.r[7]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    mmi::por(c.r[18], c.r[0], c.r[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 4140u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B000000u);
    c.f[13] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    set32(c.r[8], c.f[2]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.f[15] = c.f[13];
    c.r[4] = c.vu0.vf[1];
    mmi::pcpyud(c.r[4], c.r[4], c.r[0]);
    c.f[14] = c.r[4].w[0];
    c.r[4] = c.vu0.vf[1];
    c.f[12] = c.r[4].w[0];
    c.r[4] = c.vu0.vf[1];
    mmi::prot3w(c.r[4], c.r[4]);
    c.f[14] = fp::add(c.f[14], c.f[13]);
    c.f[0] = c.r[4].w[0];
    c.f[12] = fp::add(c.f[12], c.f[13]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[13] = fp::add(c.f[0], c.f[13]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 6608u);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 2u, 1u, c.vu0.vf[5].w[0]);
    st32((c.r[3].w[0] + 24716u), c.f[1]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242320u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00242320u) [[unlikely]] return; }
L_00242320:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    set32(c.r[16], c.r[16].w[0] + 4768u);
    mmi::por(c.r[7], c.r[0], c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::por(c.r[6], c.r[0], c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242344u);  if (depth < kMaxDepth) unit_0052(c, 58u, depth + 1u); else { c.pc = 0x0024A700u; return; } if (c.pc != 0x00242344u) [[unlikely]] return; }
L_00242344:
    set32(c.r[4], c.r[16].w[0] - 832u);
    set32(c.r[5], c.r[16].w[0] - 896u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242358u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242358u) [[unlikely]] return; }
L_00242358:
    set32(c.r[4], c.r[16].w[0] - 704u);
    set32(c.r[5], c.r[16].w[0] - 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024236Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0024236Cu) [[unlikely]] return; }
L_0024236C:
    set32(c.r[16], c.r[16].w[0] - 1344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[16].w[0] + 568u));
    c.f[1] = ld32((c.r[2].w[0] + 19400u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 568u), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002423A0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 3424u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    set32(c.r[8], c.r[7].w[0] + 21040u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.r[10].d[0] = ld64((c.r[3].w[0] + 21024u));
    set32(c.r[6], c.r[3].w[0] + 21024u);
    c.f[0] = ld32((c.r[2].w[0] + 568u));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[11].d[0] = ld64((c.r[6].w[0] + 8u));
    set32(c.r[18], c.r[2].w[0] + 448u);
    c.r[9].d[0] = ld64((c.r[7].w[0] + 21040u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.r[3].d[0] = ld64((c.r[8].w[0] + 8u));
    set32(c.r[17], c.r[2].w[0] + 512u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[4]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[5]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 96u), c.r[10].d[0]);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[3].d[0]);
    st32((c.r[2].w[0] + 568u), c.f[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242434u);  if (depth < kMaxDepth) unit_0045(c, 65u, depth + 1u); else { c.pc = 0x002152F8u; return; } if (c.pc != 0x00242434u) [[unlikely]] return; }
L_00242434:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024244Cu);  if (depth < kMaxDepth) unit_0045(c, 65u, depth + 1u); else { c.pc = 0x002152F8u; return; } if (c.pc != 0x0024244Cu) [[unlikely]] return; }
L_0024244C:
    set32(c.r[16], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242468u);  if (depth < kMaxDepth) unit_0045(c, 65u, depth + 1u); else { c.pc = 0x002152F8u; return; } if (c.pc != 0x00242468u) [[unlikely]] return; }
L_00242468:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242480u);  if (depth < kMaxDepth) unit_0045(c, 65u, depth + 1u); else { c.pc = 0x002152F8u; return; } if (c.pc != 0x00242480u) [[unlikely]] return; }
L_00242480:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00242490; }
L_00242490:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242AA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002424AC; }
L_002424AC:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242AA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002424C8; }
L_002424C8:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242AA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002424E4; }
L_002424E4:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242AA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00242500; }
L_00242500:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242520; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024257C; } }
    c.budget -= 1;
L_00242520:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] - 32768u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00242564; }
L_00242564:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242520u | kUnwind; return; } goto L_00242520; } }
    set32(c.r[2], c.r[6].w[0] - 32768u);
    c.budget -= 1;
L_0024257C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00242584; }
L_00242584:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242520u | kUnwind; return; } goto L_00242520; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002425A0; }
L_002425A0:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002425C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024261C; } }
    c.budget -= 1;
L_002425C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] - 32768u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00242604; }
L_00242604:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002425C0u | kUnwind; return; } goto L_002425C0; } }
    set32(c.r[2], c.r[6].w[0] - 32768u);
    c.budget -= 1;
L_0024261C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00242624; }
L_00242624:
    c.r[2].d[0] = c.r[2].sd[0] < 32753ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002425C0u | kUnwind; return; } goto L_002425C0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024263Cu);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0024263Cu) [[unlikely]] return; }
L_0024263C:
    c.r[13].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[13].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[13].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 23;
L_00242698:
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242698u | kUnwind; return; } goto L_00242698; } }
    set32(c.r[3], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u + 324u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x5A1E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 7710ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.r[11].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[10], 0u + 2u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[6], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 24u);
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + 28u);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] + 32u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[4].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 42;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_00242784; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00242770u);  goto L_00242774; }
L_00242774:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00242784:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002427C0; } }
L_002427A8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002427A8u | kUnwind; return; } goto L_002427A8; } }
L_002427C0:
    st32((c.r[11].w[0]), c.r[3].w[0]);
    c.r[14].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[12], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[6].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + 24u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[6].w[0] + 28u);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[8], c.r[6].w[0] + 32u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[10], c.r[6].w[0] + 36u);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[9], c.r[6].w[0] + 40u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[11], c.r[6].w[0] + 44u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[6].w[0] + 48u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    st32((c.r[6].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0]), c.r[10].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[6].w[0] + 40u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0]), c.r[11].w[0]);
    st32((c.r[6].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[2].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 86;
    { const bool t = c.r[2].d[0] == c.r[12].d[0];  if (t) { goto L_00242940; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0024292Cu);  goto L_00242930; }
L_00242930:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00242940:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242980; } }
    c.budget -= 1;
L_00242968:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242968u | kUnwind; return; } goto L_00242968; } }
L_00242980:
    st32((c.r[14].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002429D8; } }
L_002429C0:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002429C0u | kUnwind; return; } goto L_002429C0; } }
L_002429D8:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002429FC; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002429FC:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242A50; } }
L_00242A38:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242A38u | kUnwind; return; } goto L_00242A38; } }
L_00242A50:
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00242A74; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00242A74:
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[7].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] & 16368ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A98u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x00242A98u) [[unlikely]] return; }
L_00242A98:
    set32(c.r[2], c.r[19].w[0] + 3424u);
    c.f[0] = ld32((c.r[2].w[0] + 568u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[2].w[0] + 568u), c.f[0]);
    c.budget -= 4;
L_00242AA8:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00242AD0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 132u), c.r[9].w[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 368u), c.f[22]);
    st32((c.r[29].w[0] + 360u), c.f[21]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 128u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 19424u)));
    c.f[2] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    set32(c.r[3], c.f[2]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], c.f[1]);
    set32(c.r[7], c.f[3]);
    set32(c.r[10], c.f[0]);
    mmi::pextlw(c.r[8], c.r[6], c.r[3]);
    mmi::pextlw(c.r[9], c.r[10], c.r[7]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    c.budget -= 38;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00242B94; } }
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00242B94; } }
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00242B78:
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242B78u | kUnwind; return; } goto L_00242B78; } }
L_00242B94:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00242FB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 7072u);
    set32(c.r[3], c.r[30].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 11;
L_00242BC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[18], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] - 16320u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242BE8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BE8u);  if (depth < kMaxDepth) unit_0050(c, 44u, depth + 1u); else { c.pc = 0x00240438u; return; } if (c.pc != 0x00242BE8u) [[unlikely]] return; }
L_00242BE8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u + 448u);
    set32(c.r[6], ld32((c.r[29].w[0] + 128u)));
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 39;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = ld64((c.r[18].w[0] + 304u));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242C2C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242D48; } }
L_00242C2C:
    set32(c.r[3], c.r[18].w[0] + 48u);
    c.f[0] = 0u;
    c.f[4] = ld32((c.r[3].w[0] + 80u));
    set32(c.r[2], c.r[17].w[0] + 160u);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.f[3] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[10], c.f[3]);
    set32(c.r[2], c.f[1]);
    set32(c.r[4], c.f[0]);
    set32(c.r[5], c.f[2]);
    mmi::pextlw(c.r[8], c.r[2], c.r[10]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242CA0; } }
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242CA4; } }
L_00242CA0:
    c.f[20] = ld32((c.r[3].w[0] + 72u));
    c.budget -= 1;
L_00242CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[5] = c.vu0.vf[1];
    set32(c.r[19], c.r[2].w[0] - 1760u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[1]);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CC4u);  if (depth < kMaxDepth) unit_004B(c, 24u, depth + 1u); else { c.pc = 0x0022C838u; return; } if (c.pc != 0x00242CC4u) [[unlikely]] return; }
L_00242CC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[1]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00242CE4; } }
    st32((c.r[18].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242FA0; } }
L_00242CE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00242D48; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[5] = c.vu0.vf[1];
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[6].w[0] - 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D08u);  if (depth < kMaxDepth) unit_004B(c, 24u, depth + 1u); else { c.pc = 0x0022C838u; return; } if (c.pc != 0x00242D08u) [[unlikely]] return; }
L_00242D08:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00242D3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20680u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242D3C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D38u);  if (depth < kMaxDepth) unit_004B(c, 14u, depth + 1u); else { c.pc = 0x0022C630u; return; } if (c.pc != 0x00242D38u) [[unlikely]] return; }
L_00242D38:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_00242D3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242FA0; } }
L_00242D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] - 21472u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00242FA0; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 304u));
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 39;
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242EAC; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[17].w[0] + 80u), c.f[21]);
    set32(c.r[10], c.r[10].w[0] - 17840u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), c.f[21]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), c.f[21]);
    st32((c.r[17].w[0] + 124u), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[10].w[0] + 128u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[10].w[0] + 132u));
    st32((c.r[17].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[10].w[0] + 136u));
    st32((c.r[17].w[0] + 140u), c.f[22]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DDCu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00242DDCu) [[unlikely]] return; }
L_00242DDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EA00000u);
    c.r[1].d[0] = c.r[1].d[0] | 55676ull;
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E24u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x00242E24u) [[unlikely]] return; }
L_00242E24:
    set32(c.r[16], c.r[17].w[0] + 80u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[6].w[0] + 3424u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E40u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242E40u) [[unlikely]] return; }
L_00242E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 3424u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 1536u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E5Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242E5Cu) [[unlikely]] return; }
L_00242E5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 3424u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E78u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242E78u) [[unlikely]] return; }
L_00242E78:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E8Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242E8Cu) [[unlikely]] return; }
L_00242E8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242EA4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242EA4u) [[unlikely]] return; }
L_00242EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242EC4; } }
L_00242EAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[17].w[0] + 272u);
    set32(c.r[5], c.r[6].w[0] + 3872u);
    set32(c.r[6], c.r[17].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242EC4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00242EC4u) [[unlikely]] return; }
L_00242EC4:
    ld128((c.r[17].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 2u, 1u);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    st32((c.r[18].w[0] + 296u), c.f[0]);
    st32((c.r[18].w[0] + 276u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242F94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20676u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242F68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 21468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242F68; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 304u));
    set32(c.r[4], ld32((c.r[6].w[0] + 24376u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 23;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 13896u);
    st64((c.r[18].w[0] + 304u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[6].w[0] + 24376u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242FA0; } }
L_00242F68:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 304u), c.r[2].d[0]);
    st32((c.r[21].w[0]), c.r[18].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242F9C; } }
L_00242F94:
    st32((c.r[21].w[0]), c.r[18].w[0]);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 2;
L_00242F9C:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_00242FA0:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[23], c.r[23].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242BC8u | kUnwind; return; } goto L_00242BC8; } }
L_00242FB0:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[22] = ld32((c.r[29].w[0] + 368u));
    c.f[21] = ld32((c.r[29].w[0] + 360u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00242FF8:
    if (::decomp::hook_00242FF8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_00242FF8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    set32(c.r[3], ld32((c.r[2].w[0] + 19804u)));
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[7].w[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243050; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0] + 19804u), c.r[2].w[0]);
    c.budget -= 3;
L_00243050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 19804u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00243120; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 7072u)));
    set32(c.r[4], c.r[3].w[0] + 20696u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002430AC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20696u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243098; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[6].d[0] = c.r[6].d[0] | 464ull;
    c.budget -= 2;
L_00243098:
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002430B0; } }
L_002430AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_002430B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], 0u + 29u);
    c.r[4].d[0] = c.r[4].d[0] | 54304ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | 54400ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 54288ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 512u);
    c.r[4].d[0] = c.r[4].d[0] | 57376ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    set32(c.r[2], 0u + 257u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 28;
L_00243120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 20688u)));
    st32((c.r[3].w[0] + 6396u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0] - 7080u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0] - 7480u), 0u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 10u, depth); } }
    c.budget -= 1;
L_00243158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 19804u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002432A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] | 54272ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002431C4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[5].w[0] - 7088u)));
    c.r[4].d[0] = c.r[4].d[0] | 54272ull;
    c.budget -= 4;
L_002431A8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002431A8u | kUnwind; return; } goto L_002431A8; } }
    st32((c.r[5].w[0] - 7088u), c.r[3].w[0]);
    c.budget -= 1;
L_002431C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[7].w[0] - 7072u);
    set32(c.r[5], c.r[6].w[0] + 20696u);
    set32(c.r[9], 0u + 29u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00243228; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20696u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 464ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00243214; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[6].d[0] = c.r[6].d[0] | 464ull;
    c.budget -= 2;
L_00243214:
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243230; } }
L_00243228:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 2;
L_00243230:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 54304ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 54400ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 54288ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 512u);
    c.r[4].d[0] = c.r[4].d[0] | 57376ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    set32(c.r[2], 0u + 257u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 30;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002432C8; } }
L_002432A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7072u);
    st32((c.r[29].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 8;
L_002432C8:
    set32(c.r[2], ld32((c.r[10].w[0] + 13392u)));
    set32(c.r[23], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243304; } }
    set32(c.r[4], 0u + 448u);
    set32(c.r[3], ld32((c.r[30].w[0] + 24u)));
    mmi::mult(c, 0, c.r[23].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[20].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243314; } }
L_00243304:
    set32(c.r[2], 0u + 448u);
    set32(c.r[3], ld32((c.r[30].w[0] + 24u)));
    mmi::mult(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00243314:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[20].w[0] + 172u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243344; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 3608u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 9u, depth); } }
L_00243344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[22], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] + 19264u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002433B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002433B0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 39;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002433B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002433B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 192u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 4;
L_002433B0:
    set32(c.r[2], c.r[21].w[0] + 19264u);
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002434D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 5524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243434; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 452u)));
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243404; } }
    set32(c.r[2], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 19604u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] - 7296u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243414; } }
L_00243404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 5528u);
    st32((c.r[3].w[0] - 7296u), c.r[2].w[0]);
    c.budget -= 4;
L_00243414:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 42;
    c.r[4].d[0] = c.r[16].d[0] | 128ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002434A4; } }
L_00243434:
    set32(c.r[5], ld32((c.r[17].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024344C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002434A4; } }
L_0024344C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00243474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 7296u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243494; } }
L_00243474:
    set32(c.r[2], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 19604u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] - 7296u), c.r[2].w[0]);
    c.budget -= 8;
L_00243494:
    set32(c.r[2], ld32((c.r[5].w[0] - 7296u)));
    c.r[4].d[0] = c.r[16].d[0] | 128ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.budget -= 4;
L_002434A4:
    set32(c.r[2], c.r[21].w[0] + 19264u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002434D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002434D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002434D4; } }
L_002434D0:
    c.r[16].d[0] = c.r[16].d[0] | 128ull;
    c.budget -= 1;
L_002434D4:
    c.r[2].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 21056u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002434FC:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 39;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243548; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[3], c.r[3].w[0] + 10304u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u - 129u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243920; } }
L_00243548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024355Cu);  if (depth < kMaxDepth) unit_009E(c, 135u, depth + 1u); else { c.pc = 0x00379988u; return; } if (c.pc != 0x0024355Cu) [[unlikely]] return; }
L_0024355C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002436B4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 448u);
    set32(c.r[6], ld32((c.r[30].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 19608u)));
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00243594; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243654; } }
L_00243594:
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    c.f[3] = ld32((c.r[17].w[0] + 108u));
    c.f[4] = ld32((c.r[17].w[0] + 112u));
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[5] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 116u));
    c.f[4] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002435CC; } }
    c.f[5] = c.f[4];
    c.budget -= 1;
L_002435CC:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002435E0; } }
    c.f[5] = c.f[2];
    c.budget -= 1;
L_002435E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[2] = ld32((c.r[5].w[0] + 160u));
    c.f[0] = ld32((c.r[2].w[0] + 19576u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 19576u);
    c.f[3] = ld32((c.r[3].w[0] + 19572u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 164u));
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 168u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 28;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00243654; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00243654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002436B4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002436B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024369C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 22432u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_0024369C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 21184u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_002436B4:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002436FC; } }
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002436E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 12192u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_002436E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 10304u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_002436FC:
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243720; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 11248u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_00243720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 9552u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_00243738:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243794; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 312u));
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 17872u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_00243770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 14480u);
    set32(c.r[2], c.r[2].w[0] + 8368u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243920; } }
L_00243794:
    set32(c.r[3], c.r[21].w[0] + 19264u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.r[16].d[0] = c.r[16].d[0] | 1026ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002437C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 7120u);
    set32(c.r[2], c.r[2].w[0] - 7120u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_002437C4:
    set32(c.r[2], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002437E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 1792u);
    set32(c.r[2], c.r[2].w[0] - 1792u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_002437E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 13088u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C4; } }
L_002437FC:
    set32(c.r[3], c.r[21].w[0] + 19264u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.r[16].d[0] = c.r[16].d[0] | 6ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024382C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 5344u);
    set32(c.r[2], c.r[2].w[0] - 7120u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_0024382C:
    set32(c.r[2], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243850; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 928u);
    set32(c.r[2], c.r[2].w[0] - 1792u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_00243850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 17840u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C4; } }
L_00243864:
    set32(c.r[3], c.r[21].w[0] + 19264u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.r[16].d[0] = c.r[16].d[0] | 10ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243894; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 3456u);
    set32(c.r[2], c.r[2].w[0] - 7120u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_00243894:
    set32(c.r[2], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002438B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] - 1792u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002438C8; } }
L_002438B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 15648u);
    c.budget -= 3;
L_002438C4:
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.budget -= 1;
L_002438C8:
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243920; } }
L_002438D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 17840u);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 19264u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 18ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243914; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243920; } }
L_00243914:
    set32(c.r[16], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002439F8; } }
L_00243920:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00243938:
    c.r[6].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 27;
    c.r[5].d[0] = c.r[16].d[0] | 16384ull;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 28;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 31;
    c.r[2].d[0] = c.r[16].d[0] | 32768ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] | 4096ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 26;
    c.r[2].d[0] = c.r[16].d[0] | 8192ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 26;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002439A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002439A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002439D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] - 21468u)));
    c.r[5].d[0] = c.r[16].d[0] | 256ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[16].d[0] = c.r[16].d[0] | 512ull;
    c.budget -= 8;
L_002439D4:
    c.f[1] = ld32((c.r[30].w[0] + 4168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002439F8; } }
    c.r[16].d[0] = c.r[16].d[0] | 256ull;
    c.budget -= 1;
L_002439F8:
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 9u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24732u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243A30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    set32(c.r[4], c.r[2].w[0] - 7424u);
    st32((c.r[2].w[0] - 7424u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_00243A30:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243A5C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00243A5C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A5Cu);  if (depth < kMaxDepth) unit_004F(c, 67u, depth + 1u); else { c.pc = 0x0023D2F0u; return; } if (c.pc != 0x00243A5Cu) [[unlikely]] return; }
L_00243A5C:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243A84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 6768u);
    set32(c.r[5], c.r[5].w[0] + 4256u);
    set32(c.r[6], c.r[20].w[0] + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A84u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00243A84u) [[unlikely]] return; }
L_00243A84:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243AA8; } }
    c.f[0] = ld32((c.r[30].w[0] + 4168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[2].w[0] - 7084u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 9u, depth); } }
L_00243AA8:
    c.r[2].d[0] = c.r[16].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243ACC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st32((c.r[4].w[0] - 7084u), c.r[3].w[0]);
    c.budget -= 6;
L_00243ACC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6408u)));
    set32(c.r[2], c.r[21].w[0] + 19264u);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 6408u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243DC4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[8], c.r[29].w[0] + 20u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    set32(c.r[10], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243BD8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[11], c.r[2].w[0] + 5560u);
    c.budget -= 3;
L_00243B38:
    set32(c.r[2], ld32((c.r[17].w[0] + 444u)));
    set32(c.r[3], c.r[9].w[0] << 5);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] << 30);
    set32(c.r[5], c.r[4].w[0] << 29);
    c.r[3].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 28);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243BBC; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243BBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243C88; } }
L_00243BBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243B38u | kUnwind; return; } goto L_00243B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243C88; } }
L_00243BD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00243C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[11], c.r[2].w[0] + 5560u);
    c.budget -= 2;
L_00243BF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 444u)));
    set32(c.r[3], c.r[9].w[0] << 5);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] << 27);
    set32(c.r[5], c.r[4].w[0] << 26);
    c.r[3].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 25);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243C74; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243C74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243C88; } }
L_00243C74:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243BF0u | kUnwind; return; } goto L_00243BF0; } }
L_00243C88:
    c.f[1] = ld32((c.r[17].w[0] + 416u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243CB0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00243CB0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243CD4; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243CD4; } }
    set32(c.r[2], ld32((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243DD4; } }
L_00243CD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00243DD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 26;
    set32(c.r[7], c.r[2].w[0] + 5560u);
    c.budget -= 5;
L_00243CF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 444u)));
    set32(c.r[2], c.r[9].w[0] << 5);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00243D44; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | 6ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243DA8; } }
    c.r[2].d[0] = c.r[5].d[0] | 14ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243DA4; } }
L_00243D44:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | 16ull;
    set32(c.r[2], c.r[3].w[0] << 26);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00243D78; } }
    c.r[2].d[0] = c.r[5].d[0] | 48ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00243D78:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243DA8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 25);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00243DA8; } }
    c.r[2].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 1;
L_00243DA4:
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00243DA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243CF8u | kUnwind; return; } goto L_00243CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243DD4; } }
L_00243DC4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
L_00243DD4:
    set32(c.r[3], c.r[21].w[0] + 19264u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 8u, depth); } }
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0051(c, 8u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00243E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24728u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_00243E1C; } }
L_00243E14:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00243ED4; } }
L_00243E1C:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] - 7424u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] - 7424u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 440u)));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243E68; } }
    c.budget -= 1;
L_00243E50:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243E50u | kUnwind; return; } goto L_00243E50; } }
L_00243E68:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243E8C; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00243E8C:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[8].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[8].w[0] - 7424u), c.r[2].w[0]);
    c.budget -= 18;
L_00243ED4:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243EF8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243EF8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243F20; } }
L_00243EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13536u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243F20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0] - 7424u), c.r[2].w[0]);
    c.budget -= 6;
L_00243F20:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 3u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[1] = ld32((c.r[17].w[0] + 416u));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[4].w[0] + 6280u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 388u)));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 6280u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243FA8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 7424u)));
    set32(c.r[6], c.r[3].w[0] - 7424u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] & 12ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243FE0; } }
    c.budget -= 1;
L_00243F88:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243F88u | kUnwind; return; } goto L_00243F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243FE0; } }
L_00243FA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 420u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 7424u)));
    set32(c.r[6], c.r[3].w[0] - 7424u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243FE0; } }
    c.budget -= 1;
L_00243FC8:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243FC8u | kUnwind; return; } goto L_00243FC8; } }
L_00243FE0:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 2u, depth); } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    [[clang::musttail]] return unit_0051(c, 1u, depth);
}

}
