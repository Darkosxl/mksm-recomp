#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0021F618;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0047[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0,
    279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
};

void unit_0047(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0021C000;
    case 2u: goto L_0021C014;
    case 3u: goto L_0021C07C;
    case 4u: goto L_0021C094;
    case 5u: goto L_0021C0FC;
    case 6u: goto L_0021C114;
    case 7u: goto L_0021C17C;
    case 8u: goto L_0021C194;
    case 9u: goto L_0021C1F4;
    case 10u: goto L_0021C214;
    case 11u: goto L_0021C288;
    case 12u: goto L_0021C2A4;
    case 13u: goto L_0021C30C;
    case 14u: goto L_0021C32C;
    case 15u: goto L_0021C3A0;
    case 16u: goto L_0021C3BC;
    case 17u: goto L_0021C430;
    case 18u: goto L_0021C44C;
    case 19u: goto L_0021C4BC;
    case 20u: goto L_0021C4E0;
    case 21u: goto L_0021C564;
    case 22u: goto L_0021C588;
    case 23u: goto L_0021C604;
    case 24u: goto L_0021C624;
    case 25u: goto L_0021C6A0;
    case 26u: goto L_0021C6C0;
    case 27u: goto L_0021C73C;
    case 28u: goto L_0021C75C;
    case 29u: goto L_0021C7D0;
    case 30u: goto L_0021C7F8;
    case 31u: goto L_0021C86C;
    case 32u: goto L_0021C890;
    case 33u: goto L_0021C90C;
    case 34u: goto L_0021C92C;
    case 35u: goto L_0021C99C;
    case 36u: goto L_0021C9C0;
    case 37u: goto L_0021CA38;
    case 38u: goto L_0021CA58;
    case 39u: goto L_0021CAE4;
    case 40u: goto L_0021CB04;
    case 41u: goto L_0021CB80;
    case 42u: goto L_0021CBA0;
    case 43u: goto L_0021CC10;
    case 44u: goto L_0021CC34;
    case 45u: goto L_0021CCAC;
    case 46u: goto L_0021CCD0;
    case 47u: goto L_0021CD44;
    case 48u: goto L_0021CD60;
    case 49u: goto L_0021CDD4;
    case 50u: goto L_0021CDF0;
    case 51u: goto L_0021CE5C;
    case 52u: goto L_0021CE7C;
    case 53u: goto L_0021CEF0;
    case 54u: goto L_0021CF0C;
    case 55u: goto L_0021CF80;
    case 56u: goto L_0021CF9C;
    case 57u: goto L_0021D010;
    case 58u: goto L_0021D02C;
    case 59u: goto L_0021D094;
    case 60u: goto L_0021D0B4;
    case 61u: goto L_0021D128;
    case 62u: goto L_0021D144;
    case 63u: goto L_0021D1B8;
    case 64u: goto L_0021D1D4;
    case 65u: goto L_0021D248;
    case 66u: goto L_0021D264;
    case 67u: goto L_0021D2D0;
    case 68u: goto L_0021D2F0;
    case 69u: goto L_0021D364;
    case 70u: goto L_0021D380;
    case 71u: goto L_0021D3F0;
    case 72u: goto L_0021D428;
    case 73u: goto L_0021D49C;
    case 74u: goto L_0021D4CC;
    case 75u: goto L_0021D53C;
    case 76u: goto L_0021D56C;
    case 77u: goto L_0021D5E0;
    case 78u: goto L_0021D610;
    case 79u: goto L_0021D674;
    case 80u: goto L_0021D6AC;
    case 81u: goto L_0021D71C;
    case 82u: goto L_0021D74C;
    case 83u: goto L_0021D7BC;
    case 84u: goto L_0021D7EC;
    case 85u: goto L_0021D85C;
    case 86u: goto L_0021D88C;
    case 87u: goto L_0021D8F0;
    case 88u: goto L_0021D928;
    case 89u: goto L_0021D998;
    case 90u: goto L_0021D9C8;
    case 91u: goto L_0021DA38;
    case 92u: goto L_0021DA68;
    case 93u: goto L_0021DAD8;
    case 94u: goto L_0021DB08;
    case 95u: goto L_0021DB74;
    case 96u: goto L_0021DBAC;
    case 97u: goto L_0021DC24;
    case 98u: goto L_0021DC54;
    case 99u: goto L_0021DCD4;
    case 100u: goto L_0021DD04;
    case 101u: goto L_0021DD7C;
    case 102u: goto L_0021DDAC;
    case 103u: goto L_0021DE24;
    case 104u: goto L_0021DE5C;
    case 105u: goto L_0021DED8;
    case 106u: goto L_0021DF08;
    case 107u: goto L_0021DF90;
    case 108u: goto L_0021DFBC;
    case 109u: goto L_0021DFF0;
    case 110u: goto L_0021E058;
    case 111u: goto L_0021E080;
    case 112u: goto L_0021E0A8;
    case 113u: goto L_0021E0BC;
    case 114u: goto L_0021E134;
    case 115u: goto L_0021E168;
    case 116u: goto L_0021E1D8;
    case 117u: goto L_0021E200;
    case 118u: goto L_0021E230;
    case 119u: goto L_0021E244;
    case 120u: goto L_0021E2C0;
    case 121u: goto L_0021E300;
    case 122u: goto L_0021E368;
    case 123u: goto L_0021E390;
    case 124u: goto L_0021E3BC;
    case 125u: goto L_0021E3D0;
    case 126u: goto L_0021E44C;
    case 127u: goto L_0021E480;
    case 128u: goto L_0021E4A0;
    case 129u: goto L_0021E4C4;
    case 130u: goto L_0021E4D8;
    case 131u: goto L_0021E4E8;
    case 132u: goto L_0021E518;
    case 133u: goto L_0021E52C;
    case 134u: goto L_0021E578;
    case 135u: goto L_0021E598;
    case 136u: goto L_0021E5D0;
    case 137u: goto L_0021E5EC;
    case 138u: goto L_0021E600;
    case 139u: goto L_0021E618;
    case 140u: goto L_0021E660;
    case 141u: goto L_0021E674;
    case 142u: goto L_0021E6B8;
    case 143u: goto L_0021E6D0;
    case 144u: goto L_0021E6D8;
    case 145u: goto L_0021E700;
    case 146u: goto L_0021E72C;
    case 147u: goto L_0021E740;
    case 148u: goto L_0021E764;
    case 149u: goto L_0021E770;
    case 150u: goto L_0021E784;
    case 151u: goto L_0021E7A8;
    case 152u: goto L_0021E7BC;
    case 153u: goto L_0021E818;
    case 154u: goto L_0021E84C;
    case 155u: goto L_0021E8C8;
    case 156u: goto L_0021E8D8;
    case 157u: goto L_0021E900;
    case 158u: goto L_0021E91C;
    case 159u: goto L_0021E930;
    case 160u: goto L_0021E960;
    case 161u: goto L_0021E9A8;
    case 162u: goto L_0021E9CC;
    case 163u: goto L_0021E9D8;
    case 164u: goto L_0021E9E0;
    case 165u: goto L_0021E9F8;
    case 166u: goto L_0021EA20;
    case 167u: goto L_0021EA98;
    case 168u: goto L_0021EAC4;
    case 169u: goto L_0021EACC;
    case 170u: goto L_0021EB00;
    case 171u: goto L_0021EB24;
    case 172u: goto L_0021EB2C;
    case 173u: goto L_0021EB34;
    case 174u: goto L_0021EB58;
    case 175u: goto L_0021EB80;
    case 176u: goto L_0021EB98;
    case 177u: goto L_0021EBB4;
    case 178u: goto L_0021EBE0;
    case 179u: goto L_0021EC28;
    case 180u: goto L_0021EC60;
    case 181u: goto L_0021EC6C;
    case 182u: goto L_0021ECC0;
    case 183u: goto L_0021ECF4;
    case 184u: goto L_0021ED08;
    case 185u: goto L_0021ED18;
    case 186u: goto L_0021ED28;
    case 187u: goto L_0021ED64;
    case 188u: goto L_0021ED7C;
    case 189u: goto L_0021ED9C;
    case 190u: goto L_0021EDA8;
    case 191u: goto L_0021EDBC;
    case 192u: goto L_0021EDE0;
    case 193u: goto L_0021EDF4;
    case 194u: goto L_0021EE58;
    case 195u: goto L_0021EE70;
    case 196u: goto L_0021EE84;
    case 197u: goto L_0021EEA0;
    case 198u: goto L_0021EEC4;
    case 199u: goto L_0021EED0;
    case 200u: goto L_0021EED8;
    case 201u: goto L_0021EEF0;
    case 202u: goto L_0021EF04;
    case 203u: goto L_0021EF18;
    case 204u: goto L_0021EF28;
    case 205u: goto L_0021EF38;
    case 206u: goto L_0021EF5C;
    case 207u: goto L_0021EF90;
    case 208u: goto L_0021EFC0;
    case 209u: goto L_0021EFF4;
    case 210u: goto L_0021F03C;
    case 211u: goto L_0021F078;
    case 212u: goto L_0021F09C;
    case 213u: goto L_0021F0D0;
    case 214u: goto L_0021F0F4;
    case 215u: goto L_0021F160;
    case 216u: goto L_0021F184;
    case 217u: goto L_0021F1E4;
    case 218u: goto L_0021F208;
    case 219u: goto L_0021F234;
    case 220u: goto L_0021F250;
    case 221u: goto L_0021F2A8;
    case 222u: goto L_0021F318;
    case 223u: goto L_0021F340;
    case 224u: goto L_0021F358;
    case 225u: goto L_0021F380;
    case 226u: goto L_0021F39C;
    case 227u: goto L_0021F3D4;
    case 228u: goto L_0021F3F0;
    case 229u: goto L_0021F40C;
    case 230u: goto L_0021F424;
    case 231u: goto L_0021F444;
    case 232u: goto L_0021F460;
    case 233u: goto L_0021F474;
    case 234u: goto L_0021F4E0;
    case 235u: goto L_0021F508;
    case 236u: goto L_0021F520;
    case 237u: goto L_0021F548;
    case 238u: goto L_0021F564;
    case 239u: goto L_0021F5B0;
    case 240u: goto L_0021F5D0;
    case 241u: goto L_0021F5F4;
    case 242u: goto L_0021F618;
    case 243u: goto L_0021F630;
    case 244u: goto L_0021F654;
    case 245u: goto L_0021F6D0;
    case 246u: goto L_0021F6F4;
    case 247u: goto L_0021F76C;
    case 248u: goto L_0021F7A0;
    case 249u: goto L_0021F7B0;
    case 250u: goto L_0021F7C0;
    case 251u: goto L_0021F7F8;
    case 252u: goto L_0021F814;
    case 253u: goto L_0021F848;
    case 254u: goto L_0021F880;
    case 255u: goto L_0021F8C0;
    case 256u: goto L_0021F908;
    case 257u: goto L_0021F970;
    case 258u: goto L_0021F994;
    case 259u: goto L_0021F9C8;
    case 260u: goto L_0021F9E8;
    case 261u: goto L_0021FA08;
    case 262u: goto L_0021FA2C;
    case 263u: goto L_0021FAB4;
    case 264u: goto L_0021FAC0;
    case 265u: goto L_0021FAE8;
    case 266u: goto L_0021FB10;
    case 267u: goto L_0021FBC4;
    case 268u: goto L_0021FBD8;
    case 269u: goto L_0021FBF8;
    case 270u: goto L_0021FC30;
    case 271u: goto L_0021FC50;
    case 272u: goto L_0021FC68;
    case 273u: goto L_0021FC78;
    case 274u: goto L_0021FCE4;
    case 275u: goto L_0021FD14;
    case 276u: goto L_0021FD44;
    case 277u: goto L_0021FD5C;
    case 278u: goto L_0021FD74;
    case 279u: goto L_0021FD80;
    case 280u: goto L_0021FD98;
    case 281u: goto L_0021FDE4;
    case 282u: goto L_0021FE00;
    case 283u: goto L_0021FE40;
    case 284u: goto L_0021FE80;
    case 285u: goto L_0021FEC0;
    case 286u: goto L_0021FF34;
    case 287u: goto L_0021FF50;
    case 288u: goto L_0021FF94;
    case 289u: goto L_0021FFD0;
    case 290u: goto L_0021FFF8;
    default: bad_entry(c, 0x0021C000u); return;
    }
L_0021C000:
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 19912u), static_cast<std::uint8_t>(c.r[30].w[0]));
    set32(c.r[6], 0u + 299u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C014u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C014u) [[unlikely]] return; }
L_0021C014:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 11592u));
    set32(c.r[9], 0u + 1000u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[10], 0u + 40u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[11], 0u + 30u);
    st32((c.r[19].w[0] + 300u), c.r[9].w[0]);
    set32(c.r[2], c.r[19].w[0] + 312u);
    st32((c.r[19].w[0] + 304u), c.r[10].w[0]);
    set32(c.r[12], 0u + 2u);
    st32((c.r[19].w[0] + 308u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[19].w[0] + 316u), c.r[12].w[0]);
    st32((c.r[19].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 332u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C07Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C07Cu) [[unlikely]] return; }
L_0021C07C:
    set32(c.r[4], c.r[19].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C094u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C094u) [[unlikely]] return; }
L_0021C094:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[13].w[0] + 11592u));
    set32(c.r[9], 0u + 1013u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[10], 0u + 195u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[11], 0u + 70u);
    st32((c.r[19].w[0] + 300u), c.r[9].w[0]);
    set32(c.r[2], c.r[19].w[0] + 312u);
    st32((c.r[19].w[0] + 308u), c.r[10].w[0]);
    set32(c.r[12], 0u + 2u);
    st32((c.r[19].w[0] + 304u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[19].w[0] + 316u), c.r[12].w[0]);
    st32((c.r[19].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 332u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0FCu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C0FCu) [[unlikely]] return; }
L_0021C0FC:
    set32(c.r[4], c.r[19].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C114u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C114u) [[unlikely]] return; }
L_0021C114:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[13].w[0] + 11592u));
    set32(c.r[9], 0u + 1012u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[10], 0u + 225u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[11], 0u + 70u);
    st32((c.r[19].w[0] + 300u), c.r[9].w[0]);
    set32(c.r[2], c.r[19].w[0] + 312u);
    st32((c.r[19].w[0] + 308u), c.r[10].w[0]);
    set32(c.r[12], 0u + 2u);
    st32((c.r[19].w[0] + 304u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[19].w[0] + 316u), c.r[12].w[0]);
    st32((c.r[19].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 332u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C17Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C17Cu) [[unlikely]] return; }
L_0021C17C:
    set32(c.r[4], c.r[19].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C194u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C194u) [[unlikely]] return; }
L_0021C194:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[7].d[0] = ld8((c.r[13].w[0] + 11592u));
    set32(c.r[10], 0u + 121u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[11], 0u + 265u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[12], 0u + 1001u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[19].w[0] + 312u);
    st32((c.r[19].w[0] + 304u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 308u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st8((c.r[19].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[19].w[0] + 300u), c.r[12].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[19].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C1F4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C1F4u) [[unlikely]] return; }
L_0021C1F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[13].w[0] + 21240u), static_cast<std::uint8_t>(c.r[30].w[0]));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[6], 0u + 299u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C214u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C214u) [[unlikely]] return; }
L_0021C214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[10], 0u + 1000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[11], 0u + 40u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[12], 0u + 30u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[9].w[0] + 300u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[9].w[0] + 304u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[9].w[0] + 308u), c.r[12].w[0]);
    st8((c.r[9].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[9].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[9].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[9], c.r[9].w[0] + 332u);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C288u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C288u) [[unlikely]] return; }
L_0021C288:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C2A4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C2A4u) [[unlikely]] return; }
L_0021C2A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[11], 0u + 1001u);
    c.r[9].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[7], 0u + 160u);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[13], 0u + 250u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    st32((c.r[6].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    set32(c.r[12], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[12].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[12].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 316u), c.r[21].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C30Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C30Cu) [[unlikely]] return; }
L_0021C30C:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 21904u), static_cast<std::uint8_t>(c.r[30].w[0]));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[6], 0u + 299u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C32Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C32Cu) [[unlikely]] return; }
L_0021C32C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[10], 0u + 1000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 11592u));
    set32(c.r[11], 0u + 40u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[12], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[9].w[0] + 300u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[9].w[0] + 304u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[9].w[0] + 308u), c.r[12].w[0]);
    st8((c.r[9].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[9].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[9].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[9], c.r[9].w[0] + 332u);
    st32((c.r[29].w[0] + 12u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3A0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C3A0u) [[unlikely]] return; }
L_0021C3A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3BCu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C3BCu) [[unlikely]] return; }
L_0021C3BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[10], 0u + 1011u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[11], 0u + 180u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[12], 0u + 70u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[9].w[0] + 300u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[9].w[0] + 308u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[9].w[0] + 304u), c.r[12].w[0]);
    st8((c.r[9].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[9].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[9].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[9], c.r[9].w[0] + 332u);
    st32((c.r[29].w[0] + 12u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C430u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C430u) [[unlikely]] return; }
L_0021C430:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C44Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C44Cu) [[unlikely]] return; }
L_0021C44C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[11], 0u + 1010u);
    c.r[9].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 70u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[13], 0u + 210u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] + 22904u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4BCu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C4BCu) [[unlikely]] return; }
L_0021C4BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 22904u), static_cast<std::uint8_t>(c.r[30].w[0]));
    set32(c.r[5], c.r[5].w[0] + 22904u);
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4E0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C4E0u) [[unlikely]] return; }
L_0021C4E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[7], c.r[7].w[0] + 22904u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 11592u);
    c.r[8].d[0] = ld8((c.r[6].w[0] + 11592u));
    set32(c.r[2], c.r[7].w[0] + 312u);
    set32(c.r[10], c.r[10].w[0] + 11592u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[11], c.r[11].w[0] + 22904u);
    c.r[7].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[12], 0u + 1000u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[13], 0u + 40u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 50u);
    st32((c.r[11].w[0] + 300u), c.r[12].w[0]);
    st32((c.r[11].w[0] + 304u), c.r[13].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C564u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C564u) [[unlikely]] return; }
L_0021C564:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    st8((c.r[4].w[0] + 23240u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C588u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C588u) [[unlikely]] return; }
L_0021C588:
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 11592u));
    set32(c.r[2], c.r[8].w[0] + 312u);
    set32(c.r[9], c.r[9].w[0] + 11592u);
    set32(c.r[11], 0u + 1000u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[12], 0u + 40u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C604u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C604u) [[unlikely]] return; }
L_0021C604:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C624u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C624u) [[unlikely]] return; }
L_0021C624:
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 11592u));
    set32(c.r[2], c.r[7].w[0] + 312u);
    set32(c.r[9], c.r[9].w[0] + 11592u);
    set32(c.r[11], 0u + 1010u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[12], 0u + 70u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], 0u + 195u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6A0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C6A0u) [[unlikely]] return; }
L_0021C6A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6C0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C6C0u) [[unlikely]] return; }
L_0021C6C0:
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 11592u));
    set32(c.r[2], c.r[7].w[0] + 312u);
    set32(c.r[9], c.r[9].w[0] + 11592u);
    set32(c.r[11], 0u + 1011u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[12], 0u + 70u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], 0u + 225u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C73Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C73Cu) [[unlikely]] return; }
L_0021C73C:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C75Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C75Cu) [[unlikely]] return; }
L_0021C75C:
    set32(c.r[9], ld32((c.r[29].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 16u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 11592u));
    set32(c.r[2], c.r[9].w[0] + 312u);
    set32(c.r[10], c.r[10].w[0] + 11592u);
    set32(c.r[12], 0u + 1001u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[13], 0u + 121u);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] + 24568u);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 332u);
    set32(c.r[7], 0u + 265u);
    st32((c.r[11].w[0] + 300u), c.r[12].w[0]);
    st32((c.r[11].w[0] + 304u), c.r[13].w[0]);
    st32((c.r[11].w[0] + 308u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7D0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C7D0u) [[unlikely]] return; }
L_0021C7D0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 4u));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 24568u);
    st8((c.r[8].w[0] + 24568u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[10].w[0] + 1u);
    set32(c.r[6], 0u + 299u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7F8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C7F8u) [[unlikely]] return; }
L_0021C7F8:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[13].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[13], c.r[13].w[0] + 11592u);
    c.r[9].d[0] = ld8((c.r[11].w[0] + 11592u));
    c.r[8].d[0] = ld8((c.r[13].w[0] + 1u));
    set32(c.r[12], c.r[12].w[0] + 24568u);
    c.r[7].d[0] = ld8((c.r[13].w[0] + 2u));
    set32(c.r[10], 0u + 50u);
    c.r[3].d[0] = ld8((c.r[13].w[0] + 3u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    st32((c.r[12].w[0] + 308u), c.r[10].w[0]);
    set32(c.r[11], 0u + 1000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[13], 0u + 40u);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[12].w[0] + 300u), c.r[11].w[0]);
    st32((c.r[12].w[0] + 304u), c.r[13].w[0]);
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C86Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C86Cu) [[unlikely]] return; }
L_0021C86C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], 0u + 299u);
    st8((c.r[3].w[0] + 24904u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C890u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C890u) [[unlikely]] return; }
L_0021C890:
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 11592u));
    set32(c.r[2], c.r[7].w[0] + 312u);
    set32(c.r[9], c.r[9].w[0] + 11592u);
    set32(c.r[11], 0u + 1000u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[12], 0u + 40u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 20u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C90Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C90Cu) [[unlikely]] return; }
L_0021C90C:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C92Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C92Cu) [[unlikely]] return; }
L_0021C92C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[12], ld32((c.r[29].w[0] + 20u)));
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[9].w[0] + 11592u));
    set32(c.r[11], c.r[11].w[0] + 11592u);
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[3], 0u + 150u);
    c.r[9].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[13], 0u + 1003u);
    c.r[7].d[0] = ld8((c.r[11].w[0] + 3u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    st32((c.r[12].w[0] + 308u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 121u);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[12].w[0] + 300u), c.r[13].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[12].w[0] + 304u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[12].w[0] + 316u), c.r[7].w[0]);
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C99Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C99Cu) [[unlikely]] return; }
L_0021C99C:
    c.r[9].d[0] = ld8((c.r[29].w[0] + 4u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0] + 25568u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[10].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C9C0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021C9C0u) [[unlikely]] return; }
L_0021C9C0:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[12], ld32((c.r[29].w[0] + 24u)));
    c.r[13].d[0] = c.r[11].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[11].w[0] + 11592u));
    set32(c.r[13], c.r[13].w[0] + 11592u);
    set32(c.r[9], 0u + 40u);
    c.r[8].d[0] = ld8((c.r[13].w[0] + 1u));
    set32(c.r[10], 0u + 30u);
    c.r[7].d[0] = ld8((c.r[13].w[0] + 2u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[13].w[0] + 3u));
    set32(c.r[11], 0u + 2u);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1000u);
    st32((c.r[12].w[0] + 304u), c.r[9].w[0]);
    st32((c.r[12].w[0] + 308u), c.r[10].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[12].w[0] + 300u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[12].w[0] + 316u), c.r[11].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[12], c.r[12].w[0] + 332u);
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA38u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CA38u) [[unlikely]] return; }
L_0021CA38:
    set32(c.r[12], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[13].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[12].w[0] + 1u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA58u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CA58u) [[unlikely]] return; }
L_0021CA58:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 11592u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 312u);
    set32(c.r[9], c.r[9].w[0] + 11592u);
    set32(c.r[5], c.r[5].w[0] + 11592u);
    set32(c.r[6], c.r[6].w[0] + 11592u);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[11], 0u + 1010u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[12], 0u + 195u);
    set32(c.r[13], 0u + 70u);
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[12].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 304u), c.r[13].w[0]);
    set32(c.r[6], 0u + 332u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 24u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAE4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CAE4u) [[unlikely]] return; }
L_0021CAE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB04u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CB04u) [[unlikely]] return; }
L_0021CB04:
    set32(c.r[8], ld32((c.r[29].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 11592u));
    set32(c.r[2], c.r[8].w[0] + 312u);
    set32(c.r[9], c.r[9].w[0] + 11592u);
    set32(c.r[11], 0u + 1011u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[12], 0u + 70u);
    c.r[4].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], 0u + 225u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 24u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB80u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CB80u) [[unlikely]] return; }
L_0021CB80:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBA0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CBA0u) [[unlikely]] return; }
L_0021CBA0:
    set32(c.r[9], ld32((c.r[29].w[0] + 24u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 11592u));
    set32(c.r[2], c.r[9].w[0] + 312u);
    set32(c.r[10], c.r[10].w[0] + 11592u);
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[12], 0u + 121u);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[13], 0u + 265u);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 332u);
    set32(c.r[7], 0u + 1003u);
    st32((c.r[11].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[11].w[0] + 308u), c.r[13].w[0]);
    st32((c.r[11].w[0] + 300u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC10u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CC10u) [[unlikely]] return; }
L_0021CC10:
    c.r[9].d[0] = ld8((c.r[29].w[0] + 4u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0] + 26896u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[10].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC34u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CC34u) [[unlikely]] return; }
L_0021CC34:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[12], ld32((c.r[29].w[0] + 28u)));
    c.r[13].d[0] = c.r[11].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[11].w[0] + 11592u));
    set32(c.r[13], c.r[13].w[0] + 11592u);
    set32(c.r[9], 0u + 1000u);
    c.r[7].d[0] = ld8((c.r[13].w[0] + 3u));
    set32(c.r[10], 0u + 40u);
    c.r[4].d[0] = ld8((c.r[13].w[0] + 1u));
    set32(c.r[11], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[13].w[0] + 2u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    st32((c.r[12].w[0] + 300u), c.r[9].w[0]);
    set32(c.r[13], 0u + 2u);
    st32((c.r[12].w[0] + 304u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[12].w[0] + 308u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[12].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[12], c.r[12].w[0] + 332u);
    st32((c.r[29].w[0] + 28u), c.r[12].w[0]);
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCACu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CCACu) [[unlikely]] return; }
L_0021CCAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[17].d[0] = ld8((c.r[3].w[0] + 19664u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[6], 0u + 299u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCD0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CCD0u) [[unlikely]] return; }
L_0021CCD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[11], 0u + 1010u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 70u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 195u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 28u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD44u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CD44u) [[unlikely]] return; }
L_0021CD44:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD60u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CD60u) [[unlikely]] return; }
L_0021CD60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[11], 0u + 1011u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 70u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 225u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 28u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDD4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CDD4u) [[unlikely]] return; }
L_0021CDD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDF0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CDF0u) [[unlikely]] return; }
L_0021CDF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[12], 0u + 1003u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], 0u + 265u);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[13], 0u + 121u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    st32((c.r[6].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[6], 0u + 332u);
    set32(c.r[11], ld32((c.r[29].w[0] + 28u)));
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[11].w[0] + 300u), c.r[12].w[0]);
    st32((c.r[11].w[0] + 304u), c.r[13].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE5Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CE5Cu) [[unlikely]] return; }
L_0021CE5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 28224u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE7Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CE7Cu) [[unlikely]] return; }
L_0021CE7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[10], 0u + 1000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 11592u));
    set32(c.r[11], 0u + 40u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[12], 0u + 30u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[6].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[9].w[0] + 300u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[9].w[0] + 304u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[9].w[0] + 308u), c.r[12].w[0]);
    st8((c.r[9].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[9].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[9].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[9], c.r[9].w[0] + 332u);
    st32((c.r[29].w[0] + 32u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CEF0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CEF0u) [[unlikely]] return; }
L_0021CEF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF0Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CF0Cu) [[unlikely]] return; }
L_0021CF0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[11], 0u + 1011u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 70u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 190u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 32u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF80u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CF80u) [[unlikely]] return; }
L_0021CF80:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF9Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021CF9Cu) [[unlikely]] return; }
L_0021CF9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[12], 0u + 70u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[11], 0u + 1010u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 220u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 32u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D010u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D010u) [[unlikely]] return; }
L_0021D010:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D02Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D02Cu) [[unlikely]] return; }
L_0021D02C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[9].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[5], 0u + 165u);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], 0u + 1005u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 280u);
    st32((c.r[4].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[11].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[11].w[0] + 308u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D094u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D094u) [[unlikely]] return; }
L_0021D094:
    set32(c.r[13], ld32((c.r[29].w[0] + 36u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st8((c.r[12].w[0] + 29552u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[13].w[0] + 1u);
    set32(c.r[6], 0u + 299u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D0B4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D0B4u) [[unlikely]] return; }
L_0021D0B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 11592u));
    set32(c.r[10], 0u + 1000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 312u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[11], 0u + 40u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[12], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[9].w[0] + 300u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[9].w[0] + 304u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[9].w[0] + 308u), c.r[12].w[0]);
    st8((c.r[9].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[9].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[9].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[9], c.r[9].w[0] + 332u);
    st32((c.r[29].w[0] + 36u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D128u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D128u) [[unlikely]] return; }
L_0021D128:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D144u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D144u) [[unlikely]] return; }
L_0021D144:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[11], 0u + 1013u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 70u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 270u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 36u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1B8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D1B8u) [[unlikely]] return; }
L_0021D1B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1D4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D1D4u) [[unlikely]] return; }
L_0021D1D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[11], 0u + 1012u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 70u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 300u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 36u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D248u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D248u) [[unlikely]] return; }
L_0021D248:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 299u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D264u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D264u) [[unlikely]] return; }
L_0021D264:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[12], 0u + 121u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], 0u + 1001u);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[6], 0u + 330u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    st32((c.r[5].w[0] + 300u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[11].w[0] + 308u), c.r[6].w[0]);
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], 0u + 332u);
    st32((c.r[11].w[0] + 304u), c.r[12].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D2D0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D2D0u) [[unlikely]] return; }
L_0021D2D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[13].w[0] + 30880u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[6], 0u + 299u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D2F0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D2F0u) [[unlikely]] return; }
L_0021D2F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[11], 0u + 1000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[12], 0u + 40u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 20u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 40u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D364u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D364u) [[unlikely]] return; }
L_0021D364:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D380u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D380u) [[unlikely]] return; }
L_0021D380:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[11], 0u + 121u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[13], 0u + 1003u);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[7], 0u + 100u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    st32((c.r[6].w[0] + 304u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    set32(c.r[12], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[12].w[0] + 308u), c.r[7].w[0]);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[12].w[0] + 300u), c.r[13].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D3F0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D3F0u) [[unlikely]] return; }
L_0021D3F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[8].w[0] + 19672u);
    set32(c.r[11], c.r[7].w[0] + 31544u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1u)));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[4], c.r[3].w[0] + 2u);
    set32(c.r[6], 0u + 298u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D428u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D428u) [[unlikely]] return; }
L_0021D428:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[10], 0u + 1000u);
    c.r[4].d[0] = ld8((c.r[13].w[0] + 11592u));
    set32(c.r[2], c.r[3].w[0] + 312u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[11], 0u + 40u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[12], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st32((c.r[9].w[0] + 300u), c.r[10].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[9].w[0] + 304u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[9].w[0] + 308u), c.r[12].w[0]);
    st8((c.r[9].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[9].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[9].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[9], c.r[9].w[0] + 332u);
    st32((c.r[29].w[0] + 44u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D49Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D49Cu) [[unlikely]] return; }
L_0021D49C:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[10], c.r[3].w[0] + 19672u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D4CCu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D4CCu) [[unlikely]] return; }
L_0021D4CC:
    set32(c.r[12], ld32((c.r[29].w[0] + 44u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[7].d[0] = ld8((c.r[11].w[0] + 11592u));
    set32(c.r[4], 0u + 210u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 1010u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[12].w[0] + 308u), c.r[4].w[0]);
    set32(c.r[6], 0u + 332u);
    set32(c.r[4], 0u + 70u);
    st32((c.r[12].w[0] + 300u), c.r[13].w[0]);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[12].w[0] + 304u), c.r[4].w[0]);
    set32(c.r[7], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[12].w[0] + 316u), c.r[7].w[0]);
    st32((c.r[12].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[12], c.r[12].w[0] + 332u);
    st32((c.r[29].w[0] + 44u), c.r[12].w[0]);
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D53Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D53Cu) [[unlikely]] return; }
L_0021D53C:
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[13], c.r[9].w[0] + 19672u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[4], c.r[8].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D56Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D56Cu) [[unlikely]] return; }
L_0021D56C:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 11592u));
    set32(c.r[11], 0u + 1011u);
    set32(c.r[10], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] + 312u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[12], 0u + 70u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], 0u + 240u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 2u);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[10].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[10].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 44u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5E0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D5E0u) [[unlikely]] return; }
L_0021D5E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[10], c.r[3].w[0] + 19672u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D610u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D610u) [[unlikely]] return; }
L_0021D610:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[12], ld32((c.r[29].w[0] + 44u)));
    c.r[7].d[0] = ld8((c.r[11].w[0] + 11592u));
    set32(c.r[10], 0u + 290u);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[13], 0u + 1003u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[6], 0u + 332u);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], 0u + 140u);
    st32((c.r[12].w[0] + 308u), c.r[10].w[0]);
    st32((c.r[12].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[12].w[0] + 300u), c.r[13].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D674u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D674u) [[unlikely]] return; }
L_0021D674:
    set32(c.r[11], ld32((c.r[29].w[0] + 48u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[13].w[0] + 19672u);
    set32(c.r[7], c.r[12].w[0] - 32664u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[11].w[0] + 2u);
    set32(c.r[6], 0u + 298u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D6ACu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D6ACu) [[unlikely]] return; }
L_0021D6AC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 48u)));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 11592u));
    set32(c.r[11], 0u + 1000u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[12], 0u + 40u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[13], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[10].w[0] + 312u);
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 48u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D71Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D71Cu) [[unlikely]] return; }
L_0021D71C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[11], c.r[7].w[0] + 19672u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D74Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D74Cu) [[unlikely]] return; }
L_0021D74C:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], ld32((c.r[29].w[0] + 48u)));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 11592u));
    set32(c.r[9], 0u + 70u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[10], 0u + 260u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[13].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[11], 0u + 2u);
    st8((c.r[13].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1013u);
    st32((c.r[13].w[0] + 304u), c.r[9].w[0]);
    st32((c.r[13].w[0] + 308u), c.r[10].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[13].w[0] + 300u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[13].w[0] + 316u), c.r[11].w[0]);
    st32((c.r[13].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[13].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[13], c.r[13].w[0] + 332u);
    st32((c.r[29].w[0] + 48u), c.r[13].w[0]);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7BCu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D7BCu) [[unlikely]] return; }
L_0021D7BC:
    set32(c.r[12], ld32((c.r[29].w[0] + 48u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[8], c.r[13].w[0] + 19672u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[12].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7ECu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D7ECu) [[unlikely]] return; }
L_0021D7EC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 48u)));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 11592u));
    set32(c.r[11], 0u + 1012u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[12], 0u + 70u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[13], 0u + 290u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[10].w[0] + 312u);
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 304u), c.r[12].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 308u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 48u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D85Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D85Cu) [[unlikely]] return; }
L_0021D85C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[11], c.r[7].w[0] + 19672u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D88Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D88Cu) [[unlikely]] return; }
L_0021D88C:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], ld32((c.r[29].w[0] + 48u)));
    c.r[7].d[0] = ld8((c.r[12].w[0] + 11592u));
    set32(c.r[10], 0u + 1003u);
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[11], 0u + 140u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[12], 0u + 290u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[13].w[0] + 312u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[13].w[0] + 300u), c.r[10].w[0]);
    set32(c.r[6], 0u + 332u);
    st8((c.r[13].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[13].w[0] + 304u), c.r[11].w[0]);
    st32((c.r[13].w[0] + 308u), c.r[12].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[13].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[13].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[13].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D8F0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D8F0u) [[unlikely]] return; }
L_0021D8F0:
    set32(c.r[13], ld32((c.r[29].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[3].w[0] + 19672u);
    set32(c.r[9], c.r[2].w[0] - 31336u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[13].w[0] + 2u);
    set32(c.r[6], 0u + 298u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D928u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D928u) [[unlikely]] return; }
L_0021D928:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[12], ld32((c.r[29].w[0] + 52u)));
    c.r[7].d[0] = ld8((c.r[11].w[0] + 11592u));
    set32(c.r[9], 0u + 40u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[10], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[13], 0u + 1000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[12].w[0] + 312u);
    st8((c.r[12].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[11], 0u + 2u);
    st32((c.r[12].w[0] + 304u), c.r[9].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[12].w[0] + 308u), c.r[10].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[12].w[0] + 300u), c.r[13].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[12].w[0] + 316u), c.r[11].w[0]);
    st32((c.r[12].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[12].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[12], c.r[12].w[0] + 332u);
    st32((c.r[29].w[0] + 52u), c.r[12].w[0]);
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D998u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D998u) [[unlikely]] return; }
L_0021D998:
    set32(c.r[12], ld32((c.r[29].w[0] + 52u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[8], c.r[13].w[0] + 19672u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[12].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D9C8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021D9C8u) [[unlikely]] return; }
L_0021D9C8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 52u)));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 11592u));
    set32(c.r[11], 0u + 1013u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[12], 0u + 260u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[13], 0u + 70u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[10].w[0] + 312u);
    st32((c.r[10].w[0] + 300u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 308u), c.r[12].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[10].w[0] + 304u), c.r[13].w[0]);
    st8((c.r[10].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[10].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[10].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[10], c.r[10].w[0] + 332u);
    st32((c.r[29].w[0] + 52u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA38u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DA38u) [[unlikely]] return; }
L_0021DA38:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[11], c.r[7].w[0] + 19672u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA68u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DA68u) [[unlikely]] return; }
L_0021DA68:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], ld32((c.r[29].w[0] + 52u)));
    c.r[8].d[0] = ld8((c.r[12].w[0] + 11592u));
    set32(c.r[9], 0u + 1012u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[10], 0u + 70u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[11], 0u + 290u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[13].w[0] + 312u);
    st32((c.r[13].w[0] + 300u), c.r[9].w[0]);
    set32(c.r[12], 0u + 2u);
    st8((c.r[13].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[13].w[0] + 304u), c.r[10].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[13].w[0] + 308u), c.r[11].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[13].w[0] + 316u), c.r[12].w[0]);
    st32((c.r[13].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[13].w[0] + 320u), c.r[21].w[0]);
    set32(c.r[13], c.r[13].w[0] + 332u);
    st32((c.r[29].w[0] + 52u), c.r[13].w[0]);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DAD8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DAD8u) [[unlikely]] return; }
L_0021DAD8:
    set32(c.r[13], ld32((c.r[29].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[9], c.r[2].w[0] + 19672u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[13].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB08u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DB08u) [[unlikely]] return; }
L_0021DB08:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[11], ld32((c.r[29].w[0] + 52u)));
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[10].w[0] + 11592u));
    set32(c.r[12], c.r[12].w[0] + 11592u);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[8].d[0] = ld8((c.r[12].w[0] + 2u));
    set32(c.r[10], 0u + 290u);
    c.r[3].d[0] = ld8((c.r[12].w[0] + 3u));
    set32(c.r[13], 0u + 1003u);
    c.r[9].d[0] = ld8((c.r[12].w[0] + 1u));
    set32(c.r[2], c.r[11].w[0] + 312u);
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 140u);
    st32((c.r[11].w[0] + 308u), c.r[10].w[0]);
    st32((c.r[11].w[0] + 304u), c.r[7].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[11].w[0] + 300u), c.r[13].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB74u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DB74u) [[unlikely]] return; }
L_0021DB74:
    set32(c.r[11], ld32((c.r[29].w[0] + 56u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[13].w[0] + 19672u);
    set32(c.r[7], c.r[12].w[0] - 30008u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[11].w[0] + 2u);
    set32(c.r[6], 0u + 298u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DBACu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DBACu) [[unlikely]] return; }
L_0021DBAC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[11], ld32((c.r[29].w[0] + 56u)));
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[9].w[0] + 11592u));
    set32(c.r[10], c.r[10].w[0] + 11592u);
    set32(c.r[12], 0u + 1000u);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[13], 0u + 40u);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[4], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[2], c.r[11].w[0] + 312u);
    st32((c.r[11].w[0] + 300u), c.r[12].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 304u), c.r[13].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[11].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[11], c.r[11].w[0] + 332u);
    st32((c.r[29].w[0] + 56u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC24u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DC24u) [[unlikely]] return; }
L_0021DC24:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[11], c.r[7].w[0] + 19672u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC54u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DC54u) [[unlikely]] return; }
L_0021DC54:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[13], c.r[13].w[0] + 11592u);
    c.r[8].d[0] = ld8((c.r[12].w[0] + 11592u));
    c.r[10].d[0] = ld8((c.r[13].w[0] + 1u));
    set32(c.r[3], 0u + 1013u);
    c.r[9].d[0] = ld8((c.r[13].w[0] + 2u));
    set32(c.r[12], 0u + 70u);
    c.r[7].d[0] = ld8((c.r[13].w[0] + 3u));
    set32(c.r[4], 0u + 260u);
    st32((c.r[6].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + 312u);
    set32(c.r[13], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[6], 0u + 332u);
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[11].w[0] + 304u), c.r[12].w[0]);
    st32((c.r[11].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[11].w[0] + 316u), c.r[13].w[0]);
    st32((c.r[11].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[11], c.r[11].w[0] + 332u);
    st32((c.r[29].w[0] + 56u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCD4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DCD4u) [[unlikely]] return; }
L_0021DCD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[10], c.r[3].w[0] + 19672u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD04u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DD04u) [[unlikely]] return; }
L_0021DD04:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], ld32((c.r[29].w[0] + 56u)));
    c.r[12].d[0] = c.r[11].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[11].w[0] + 11592u));
    set32(c.r[12], c.r[12].w[0] + 11592u);
    set32(c.r[4], 0u + 1012u);
    c.r[9].d[0] = ld8((c.r[12].w[0] + 1u));
    set32(c.r[2], c.r[13].w[0] + 312u);
    c.r[8].d[0] = ld8((c.r[12].w[0] + 2u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[12].w[0] + 3u));
    set32(c.r[6], 0u + 332u);
    st32((c.r[13].w[0] + 300u), c.r[4].w[0]);
    st8((c.r[13].w[0] + 312u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], 0u + 290u);
    set32(c.r[7], 0u + 70u);
    st32((c.r[13].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[13].w[0] + 304u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], 0u + 2u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[13].w[0] + 316u), c.r[8].w[0]);
    st32((c.r[13].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[13].w[0] + 324u), c.r[21].w[0]);
    set32(c.r[13], c.r[13].w[0] + 332u);
    st32((c.r[29].w[0] + 56u), c.r[13].w[0]);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD7Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DD7Cu) [[unlikely]] return; }
L_0021DD7C:
    set32(c.r[9], ld32((c.r[29].w[0] + 56u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[2], c.r[10].w[0] + 19672u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[9].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DDACu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DDACu) [[unlikely]] return; }
L_0021DDAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11592u);
    set32(c.r[11], ld32((c.r[29].w[0] + 56u)));
    c.r[9].d[0] = ld8((c.r[3].w[0] + 11592u));
    set32(c.r[6], c.r[6].w[0] + 11592u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], 0u + 1003u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[13], 0u + 140u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[7], 0u + 340u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[2], c.r[5].w[0] + 312u);
    st32((c.r[11].w[0] + 300u), c.r[12].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 304u), c.r[13].w[0]);
    set32(c.r[6], 0u + 332u);
    st32((c.r[11].w[0] + 308u), c.r[7].w[0]);
    st8((c.r[11].w[0] + 312u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[11].w[0] + 328u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 316u), c.r[21].w[0]);
    st32((c.r[11].w[0] + 324u), c.r[21].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE24u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DE24u) [[unlikely]] return; }
L_0021DE24:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[7].w[0] + 19672u);
    set32(c.r[10], c.r[3].w[0] - 28680u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[2].w[0] + 2u);
    set32(c.r[6], 0u + 298u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE5Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DE5Cu) [[unlikely]] return; }
L_0021DE5C:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], ld32((c.r[29].w[0] + 60u)));
    c.r[3].d[0] = c.r[12].d[0] + 0ull;
    c.r[9].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 11592u);
    c.r[4].d[0] = ld8((c.r[12].w[0] + 11592u));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[9], c.r[9].w[0] + 11592u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[11], 0u + 40u);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[10], 0u + 1000u);
    st32((c.r[13].w[0] + 300u), c.r[10].w[0]);
    set32(c.r[2], c.r[13].w[0] + 312u);
    st32((c.r[13].w[0] + 308u), c.r[11].w[0]);
    set32(c.r[12], 0u + 2u);
    st32((c.r[13].w[0] + 304u), c.r[11].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[13].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 332u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[13].w[0] + 316u), c.r[12].w[0]);
    st32((c.r[13].w[0] + 324u), c.r[21].w[0]);
    st32((c.r[13].w[0] + 328u), c.r[21].w[0]);
    set32(c.r[13], c.r[13].w[0] + 332u);
    st32((c.r[29].w[0] + 60u), c.r[13].w[0]);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DED8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DED8u) [[unlikely]] return; }
L_0021DED8:
    set32(c.r[13], ld32((c.r[29].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 298u);
    set32(c.r[9], c.r[2].w[0] + 19672u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[13].w[0] + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DF08u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0021DF08u) [[unlikely]] return; }
L_0021DF08:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 11592u));
    c.r[13].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[13], c.r[13].w[0] + 11592u);
    c.r[8].d[0] = ld8((c.r[13].w[0] + 3u));
    set32(c.r[3], 0u + 1001u);
    c.r[7].d[0] = ld8((c.r[13].w[0] + 1u));
    set32(c.r[5], 0u + 80u);
    c.r[6].d[0] = ld8((c.r[13].w[0] + 2u));
    set32(c.r[2], c.r[4].w[0] + 312u);
    st32((c.r[10].w[0] + 300u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], 0u + 70u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[13], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[10], c.r[4].w[0] - 28016u);
    set32(c.r[12], 0u + 1u);
    st32((c.r[13].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[13].w[0] + 308u), c.r[5].w[0]);
    set32(c.r[3], c.r[10].w[0] + 20u);
    st8((c.r[13].w[0] + 312u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[13].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[4].w[0] - 28016u), c.r[11].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[13].w[0] + 316u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 12u), 0u);
    st32((c.r[10].w[0] + 16u), 0u);
    c.budget -= 34;
L_0021DF90:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[12].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DF90u | kUnwind; return; } goto L_0021DF90; } }
    st32((c.r[10].w[0] + 72u), 0u);
    st32((c.r[10].w[0] + 128u), 0u);
    c.budget -= 2;
L_0021DFBC:
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
L_0021DFF0:
    set32(c.r[29], c.r[29].w[0] - 528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[29].w[0] + 336u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2448u)));
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 352u), c.r[6].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0021E090; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], 0u + 108u);
    set32(c.r[17], c.r[22].w[0] + 11600u);
    c.budget -= 4;
L_0021E058:
    set32(c.r[2], ld32((c.r[19].w[0] + 14636u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 300u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 332u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E080u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E080u) [[unlikely]] return; }
L_0021E080:
    set32(c.r[3], ld32((c.r[20].w[0] + 2448u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E058u | kUnwind; return; } goto L_0021E058; } }
L_0021E090:
    set32(c.r[16], c.r[22].w[0] + 11600u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0A8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0021E0A8u) [[unlikely]] return; }
L_0021E0A8:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 300u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0BCu);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E0BCu) [[unlikely]] return; }
L_0021E0BC:
    c.r[2].d[0] = ld8((c.r[30].w[0] + 11588u));
    set32(c.r[3], c.r[30].w[0] + 11588u);
    c.r[10].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[13], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[12], 0u + 64u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[29].w[0] + 337u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[11], ld32((c.r[20].w[0] + 2448u)));
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    st8((c.r[29].w[0] + 338u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] + 19676u);
    st8((c.r[29].w[0] + 339u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[5], c.r[5].w[0] + 19680u);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19684u);
    set32(c.r[7], c.r[7].w[0] + 19688u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E134u);  if (depth < kMaxDepth) unit_007E(c, 141u, depth + 1u); else { c.pc = 0x002F9530u; return; } if (c.pc != 0x0021E134u) [[unlikely]] return; }
L_0021E134:
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E168:
    set32(c.r[29], c.r[29].w[0] - 528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 2472u)));
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 352u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0021E210; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], 0u + 124u);
    set32(c.r[17], c.r[23].w[0] + 18248u);
    c.budget -= 4;
L_0021E1D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 14636u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 300u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 332u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E200u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E200u) [[unlikely]] return; }
L_0021E200:
    set32(c.r[3], ld32((c.r[20].w[0] + 2472u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E1D8u | kUnwind; return; } goto L_0021E1D8; } }
L_0021E210:
    set32(c.r[16], c.r[23].w[0] + 18248u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[30].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E230u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0021E230u) [[unlikely]] return; }
L_0021E230:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 300u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E244u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E244u) [[unlikely]] return; }
L_0021E244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + 11588u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 11588u));
    c.r[10].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[12], 0u + 64u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[29].w[0] + 337u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] + 19772u);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[11], ld32((c.r[20].w[0] + 2472u)));
    set32(c.r[5], c.r[5].w[0] + 19776u);
    st8((c.r[29].w[0] + 338u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], c.r[6].w[0] + 19780u);
    st8((c.r[29].w[0] + 339u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], c.r[7].w[0] + 19784u);
    set32(c.r[9], ld32((c.r[29].w[0] + 356u)));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E2C0u);  if (depth < kMaxDepth) unit_007E(c, 141u, depth + 1u); else { c.pc = 0x002F9530u; return; } if (c.pc != 0x0021E2C0u) [[unlikely]] return; }
L_0021E2C0:
    set32(c.r[4], 0u + 1011u);
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E300:
    set32(c.r[29], c.r[29].w[0] - 528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2520u)));
    set32(c.r[30], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 352u), c.r[7].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0021E3A0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], 0u + 252u);
    set32(c.r[17], c.r[23].w[0] + 29552u);
    c.budget -= 4;
L_0021E368:
    set32(c.r[2], ld32((c.r[19].w[0] + 14636u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 300u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 332u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E390u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E390u) [[unlikely]] return; }
L_0021E390:
    set32(c.r[3], ld32((c.r[20].w[0] + 2520u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E368u | kUnwind; return; } goto L_0021E368; } }
L_0021E3A0:
    set32(c.r[16], c.r[23].w[0] + 29552u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[22].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E3BCu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0021E3BCu) [[unlikely]] return; }
L_0021E3BC:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 300u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E3D0u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E3D0u) [[unlikely]] return; }
L_0021E3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[13], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + 11588u);
    set32(c.r[12], 0u + 64u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 11588u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[10].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 19964u);
    st8((c.r[29].w[0] + 337u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 19968u);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[11], ld32((c.r[20].w[0] + 2520u)));
    set32(c.r[6], c.r[6].w[0] + 19972u);
    st8((c.r[29].w[0] + 338u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 19976u);
    st8((c.r[29].w[0] + 339u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E44Cu);  if (depth < kMaxDepth) unit_007E(c, 141u, depth + 1u); else { c.pc = 0x002F9530u; return; } if (c.pc != 0x0021E44Cu) [[unlikely]] return; }
L_0021E44C:
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 27776u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ~(0ull | c.r[4].d[0]);
    st32((c.r[3].w[0] - 27776u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 27772u);
    set32(c.r[6], c.r[6].w[0] - 27768u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4C4u);  if (depth < kMaxDepth) unit_00A1(c, 315u, depth + 1u); else { c.pc = 0x00387078u; return; } if (c.pc != 0x0021E4C4u) [[unlikely]] return; }
L_0021E4C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E4D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E4E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0021E554; } }
    set32(c.r[17], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_0021E518:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E52Cu);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x0021E52Cu) [[unlikely]] return; }
L_0021E52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E540; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E558; } }
L_0021E540:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E518u | kUnwind; return; } goto L_0021E518; } }
L_0021E554:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021E558:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E578:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0021E590; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0021E590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021E5C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E5DC; } }
L_0021E5C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5D0u);  if (depth < kMaxDepth) unit_0045(c, 188u, depth + 1u); else { c.pc = 0x00217278u; return; } if (c.pc != 0x0021E5D0u) [[unlikely]] return; }
L_0021E5D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0021E5DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5ECu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0021E5ECu) [[unlikely]] return; }
L_0021E5EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[3].w[0] + 2552u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E618:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2552u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0021E644; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E69C; } }
L_0021E644:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E660u);  if (depth < kMaxDepth) unit_00A1(c, 320u, depth + 1u); else { c.pc = 0x00387198u; return; } if (c.pc != 0x0021E660u) [[unlikely]] return; }
L_0021E660:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E674u);  if (depth < kMaxDepth) unit_00A1(c, 315u, depth + 1u); else { c.pc = 0x00387078u; return; } if (c.pc != 0x0021E674u) [[unlikely]] return; }
L_0021E674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E660u | kUnwind; return; } goto L_0021E660; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E698; } }
    set32(c.r[3], 0u + 60u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E6A0; } }
L_0021E698:
    set32(c.r[3], 0u + 60u);
    c.budget -= 1;
L_0021E69C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E6A0:
    st32((c.r[16].w[0] + 2552u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E6B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0021E6E8; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0021E6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6D8u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x0021E6D8u) [[unlikely]] return; }
L_0021E6D8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E6D0u | kUnwind; return; } goto L_0021E6D0; } }
L_0021E6E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E700:
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[6], 0u + 32u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E72Cu);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021E72Cu) [[unlikely]] return; }
L_0021E72C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E740u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x0021E740u) [[unlikely]] return; }
L_0021E740:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E764u);  if (depth < kMaxDepth) unit_00A1(c, 325u, depth + 1u); else { c.pc = 0x00387318u; return; } if (c.pc != 0x0021E764u) [[unlikely]] return; }
L_0021E764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E7F8; } }
    c.budget -= 1;
L_0021E770:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E784u);  if (depth < kMaxDepth) unit_00A1(c, 315u, depth + 1u); else { c.pc = 0x00387078u; return; } if (c.pc != 0x0021E784u) [[unlikely]] return; }
L_0021E784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E770u | kUnwind; return; } goto L_0021E770; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E7F8; } }
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0021E7A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7BCu);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x0021E7BCu) [[unlikely]] return; }
L_0021E7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E7D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E7E8; } }
L_0021E7D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E7A8u | kUnwind; return; } goto L_0021E7A8; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0021E7E8:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0021E7FC; } }
L_0021E7F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E7FC:
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E818:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E84Cu);  if (depth < kMaxDepth) unit_0046(c, 62u, depth + 1u); else { c.pc = 0x00218B00u; return; } if (c.pc != 0x0021E84Cu) [[unlikely]] return; }
L_0021E84C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021E888; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0021E874; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E980; } }
L_0021E874:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E980; } }
L_0021E888:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E980; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E980; } }
L_0021E8AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    c.r[8].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8C8u);  if (depth < kMaxDepth) unit_00A1(c, 320u, depth + 1u); else { c.pc = 0x00387198u; return; } if (c.pc != 0x0021E8C8u) [[unlikely]] return; }
L_0021E8C8:
    set32(c.r[17], c.r[29].w[0] + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E91C; } }
    c.budget -= 1;
L_0021E8D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021E8F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E90C; } }
L_0021E8F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E900u);  if (depth < kMaxDepth) unit_0045(c, 188u, depth + 1u); else { c.pc = 0x00217278u; return; } if (c.pc != 0x0021E900u) [[unlikely]] return; }
L_0021E900:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0021E90C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E91Cu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0021E91Cu) [[unlikely]] return; }
L_0021E91C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E930u);  if (depth < kMaxDepth) unit_00A1(c, 315u, depth + 1u); else { c.pc = 0x00387078u; return; } if (c.pc != 0x0021E930u) [[unlikely]] return; }
L_0021E930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E8D8u | kUnwind; return; } goto L_0021E8D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E968; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E960u);  if (depth < kMaxDepth) unit_0046(c, 41u, depth + 1u); else { c.pc = 0x002187B0u; return; } if (c.pc != 0x0021E960u) [[unlikely]] return; }
L_0021E960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E980; } }
L_0021E968:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E980; } }
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_0021E980:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E9A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021E9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9CCu);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x0021E9CCu) [[unlikely]] return; }
L_0021E9CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E9D8u) [[unlikely]] return; }
L_0021E9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9E0u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x0021E9E0u) [[unlikely]] return; }
L_0021E9E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E9F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[16].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA20u);  if (depth < kMaxDepth) unit_0047(c, 167u, depth + 1u); else { c.pc = 0x0021EA98u; return; } if (c.pc != 0x0021EA20u) [[unlikely]] return; }
L_0021EA20:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[8], c.r[2].w[0] + 1023u);
    set32(c.r[9], c.r[3].w[0] + 1023u);
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[4].w[0] + 1023u);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 2046u);
    set32(c.r[3], c.r[3].w[0] + 2046u);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[8].d[0];
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[9].d[0];
    c.r[7].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 2046u);
    if (c.r[7].d[0] != 0) c.r[4].d[0] = c.r[10].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EA98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAC4u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x0021EAC4u) [[unlikely]] return; }
L_0021EAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EACCu);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x0021EACCu) [[unlikely]] return; }
L_0021EACC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[16], c.r[16].w[0] - 27880u);
    set32(c.r[17], c.r[17].w[0] - 976u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], c.r[18].w[0] + 84u);
    set32(c.r[6], ld32((c.r[19].w[0] + 18704u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB00u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0021EB00u) [[unlikely]] return; }
L_0021EB00:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[18].w[0] + 92u);
    set32(c.r[6], ld32((c.r[19].w[0] + 18704u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB24u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0021EB24u) [[unlikely]] return; }
L_0021EB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB2Cu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x0021EB2Cu) [[unlikely]] return; }
L_0021EB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB34u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x0021EB34u) [[unlikely]] return; }
L_0021EB34:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EB58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB80u);  if (depth < kMaxDepth) unit_00A1(c, 333u, depth + 1u); else { c.pc = 0x00387470u; return; } if (c.pc != 0x0021EB80u) [[unlikely]] return; }
L_0021EB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021EBC0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB98u);  if (depth < kMaxDepth) unit_0045(c, 137u, depth + 1u); else { c.pc = 0x002165D8u; return; } if (c.pc != 0x0021EB98u) [[unlikely]] return; }
L_0021EB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27768u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021EBC0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBB4u);  if (depth < kMaxDepth) unit_0046(c, 7u, depth + 1u); else { c.pc = 0x00218110u; return; } if (c.pc != 0x0021EBB4u) [[unlikely]] return; }
L_0021EBB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EBC4; } }
L_0021EBC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021EBC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EBE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[2].w[0] + 2556u), 0u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021EC9C; } }
    set32(c.r[2], 0u + 1u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[18], 0u + 24u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
L_0021EC28:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[19].w[0] - 27880u);
    set32(c.r[7], 0u + 5u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC60u);  if (depth < kMaxDepth) unit_0046(c, 11u, depth + 1u); else { c.pc = 0x00218268u; return; } if (c.pc != 0x0021EC60u) [[unlikely]] return; }
L_0021EC60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC6Cu);  if (depth < kMaxDepth) unit_0046(c, 89u, depth + 1u); else { c.pc = 0x00218EF8u; return; } if (c.pc != 0x0021EC6Cu) [[unlikely]] return; }
L_0021EC6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EC28u | kUnwind; return; } goto L_0021EC28; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0021EC98; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 7u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EC9C; } }
L_0021EC98:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_0021EC9C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021ECC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021ECEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021ECF4; } }
L_0021ECEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021ECF4u) [[unlikely]] return; }
L_0021ECF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021ED08:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021ED18:
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021ED28:
    set32(c.r[29], c.r[29].w[0] - 432u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 24u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 32u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED64u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0021ED64u) [[unlikely]] return; }
L_0021ED64:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19344u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED7Cu);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x0021ED7Cu) [[unlikely]] return; }
L_0021ED7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 5u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED9Cu);  if (depth < kMaxDepth) unit_00A1(c, 325u, depth + 1u); else { c.pc = 0x00387318u; return; } if (c.pc != 0x0021ED9Cu) [[unlikely]] return; }
L_0021ED9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021EE30; } }
    c.budget -= 1;
L_0021EDA8:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDBCu);  if (depth < kMaxDepth) unit_00A1(c, 315u, depth + 1u); else { c.pc = 0x00387078u; return; } if (c.pc != 0x0021EDBCu) [[unlikely]] return; }
L_0021EDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EDA8u | kUnwind; return; } goto L_0021EDA8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021EE30; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.budget -= 3;
L_0021EDE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDF4u);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x0021EDF4u) [[unlikely]] return; }
L_0021EDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021EE08; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EE20; } }
L_0021EE08:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EDE0u | kUnwind; return; } goto L_0021EDE0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0021EE20:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021EE34; } }
L_0021EE30:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EE34:
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EE58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE70u);  if (depth < kMaxDepth) unit_00A1(c, 343u, depth + 1u); else { c.pc = 0x00387610u; return; } if (c.pc != 0x0021EE70u) [[unlikely]] return; }
L_0021EE70:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE84u);  if (depth < kMaxDepth) unit_00A1(c, 315u, depth + 1u); else { c.pc = 0x00387078u; return; } if (c.pc != 0x0021EE84u) [[unlikely]] return; }
L_0021EE84:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021EED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEC4u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x0021EEC4u) [[unlikely]] return; }
L_0021EEC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EED0u) [[unlikely]] return; }
L_0021EED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EED8u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x0021EED8u) [[unlikely]] return; }
L_0021EED8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF04u);  if (depth < kMaxDepth) unit_0047(c, 265u, depth + 1u); else { c.pc = 0x0021FAE8u; return; } if (c.pc != 0x0021EF04u) [[unlikely]] return; }
L_0021EF04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EF18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF28u);  if (depth < kMaxDepth) unit_0047(c, 243u, depth + 1u); else { c.pc = 0x0021F630u; return; } if (c.pc != 0x0021EF28u) [[unlikely]] return; }
L_0021EF28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EF38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF5Cu);  if (depth < kMaxDepth) unit_0045(c, 157u, depth + 1u); else { c.pc = 0x00216AC0u; return; } if (c.pc != 0x0021EF5Cu) [[unlikely]] return; }
L_0021EF5C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021EF78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EF80; } }
L_0021EF78:
    set32(c.r[2], 0u + 1011u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0021EF80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EF90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2560u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021EFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFC0u);  if (depth < kMaxDepth) unit_0046(c, 151u, depth + 1u); else { c.pc = 0x00219640u; return; } if (c.pc != 0x0021EFC0u) [[unlikely]] return; }
L_0021EFC0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F030; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F058; } }
L_0021EFDC:
    set32(c.r[17], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFF4u);  if (depth < kMaxDepth) unit_0045(c, 233u, depth + 1u); else { c.pc = 0x00217E18u; return; } if (c.pc != 0x0021EFF4u) [[unlikely]] return; }
L_0021EFF4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1012u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F044; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1013ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F024; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F054; } }
L_0021F024:
    set32(c.r[2], 0u + 1013u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F054; } }
L_0021F030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F03Cu);  if (depth < kMaxDepth) unit_0046(c, 293u, depth + 1u); else { c.pc = 0x0021AAE0u; return; } if (c.pc != 0x0021F03Cu) [[unlikely]] return; }
L_0021F03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F058; } }
L_0021F044:
    st32((c.r[18].w[0] + 2560u), c.r[17].w[0]);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F058; } }
L_0021F054:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F058:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F078:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F09Cu);  if (depth < kMaxDepth) unit_0045(c, 201u, depth + 1u); else { c.pc = 0x00217590u; return; } if (c.pc != 0x0021F09Cu) [[unlikely]] return; }
L_0021F09C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021F0B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F0C0; } }
L_0021F0B8:
    set32(c.r[2], 0u + 1011u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0021F0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0F4u);  if (depth < kMaxDepth) unit_0045(c, 239u, depth + 1u); else { c.pc = 0x00217F90u; return; } if (c.pc != 0x0021F0F4u) [[unlikely]] return; }
L_0021F0F4:
    set32(c.r[3], 0u + 1012u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021F148; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 9u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F138; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F13C; } }
L_0021F138:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F13C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F14C; } }
L_0021F148:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F14C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F184u);  if (depth < kMaxDepth) unit_0045(c, 239u, depth + 1u); else { c.pc = 0x00217F90u; return; } if (c.pc != 0x0021F184u) [[unlikely]] return; }
L_0021F184:
    set32(c.r[3], 0u + 1012u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021F1D8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 9u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F1C8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F1CC; } }
L_0021F1C8:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F1CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F1F4; } }
L_0021F1D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1E4u);  if (depth < kMaxDepth) unit_0045(c, 133u, depth + 1u); else { c.pc = 0x00216498u; return; } if (c.pc != 0x0021F1E4u) [[unlikely]] return; }
L_0021F1E4:
    c.r[4].d[0] = c.r[2].d[0] ^ 1013ull;
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 2u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0021F1F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F208:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1012u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F234u);  if (depth < kMaxDepth) unit_0045(c, 126u, depth + 1u); else { c.pc = 0x002162D8u; return; } if (c.pc != 0x0021F234u) [[unlikely]] return; }
L_0021F234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0021F29C; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F250u);  if (depth < kMaxDepth) unit_0045(c, 126u, depth + 1u); else { c.pc = 0x002162D8u; return; } if (c.pc != 0x0021F250u) [[unlikely]] return; }
L_0021F250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0021F29C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 10u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F290; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F2B4; } }
L_0021F290:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F2B4; } }
L_0021F29C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2A8u);  if (depth < kMaxDepth) unit_0045(c, 133u, depth + 1u); else { c.pc = 0x00216498u; return; } if (c.pc != 0x0021F2A8u) [[unlikely]] return; }
L_0021F2A8:
    set32(c.r[3], 0u + 1013u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021F2C0; } }
L_0021F2B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F300; } }
L_0021F2C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 3u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F2F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F2FC; } }
L_0021F2F8:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F2FC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F300:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F318:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F340u);  if (depth < kMaxDepth) unit_00A1(c, 333u, depth + 1u); else { c.pc = 0x00387470u; return; } if (c.pc != 0x0021F340u) [[unlikely]] return; }
L_0021F340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F368; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F358u);  if (depth < kMaxDepth) unit_0045(c, 137u, depth + 1u); else { c.pc = 0x002165D8u; return; } if (c.pc != 0x0021F358u) [[unlikely]] return; }
L_0021F358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27768u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021F374; } }
L_0021F368:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F384; } }
L_0021F374:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F380u);  if (depth < kMaxDepth) unit_0046(c, 7u, depth + 1u); else { c.pc = 0x00218110u; return; } if (c.pc != 0x0021F380u) [[unlikely]] return; }
L_0021F380:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F3C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F39Cu);  if (depth < kMaxDepth) unit_0045(c, 143u, depth + 1u); else { c.pc = 0x00216758u; return; } if (c.pc != 0x0021F39Cu) [[unlikely]] return; }
L_0021F39C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021F3B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F3D4; } }
L_0021F3B8:
    set32(c.r[2], 0u + 1011u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F3D4; } }
L_0021F3C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3D4u);  if (depth < kMaxDepth) unit_0046(c, 151u, depth + 1u); else { c.pc = 0x00219640u; return; } if (c.pc != 0x0021F3D4u) [[unlikely]] return; }
L_0021F3D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F40Cu);  if (depth < kMaxDepth) unit_0047(c, 243u, depth + 1u); else { c.pc = 0x0021F630u; return; } if (c.pc != 0x0021F40Cu) [[unlikely]] return; }
L_0021F40C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021F42C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F424u);  if (depth < kMaxDepth) unit_0046(c, 254u, depth + 1u); else { c.pc = 0x0021A6A8u; return; } if (c.pc != 0x0021F424u) [[unlikely]] return; }
L_0021F424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F4C8; } }
L_0021F42C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[17], 0u + 1012u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F444u);  if (depth < kMaxDepth) unit_0045(c, 126u, depth + 1u); else { c.pc = 0x002162D8u; return; } if (c.pc != 0x0021F444u) [[unlikely]] return; }
L_0021F444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0021F4C4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F460u);  if (depth < kMaxDepth) unit_0045(c, 126u, depth + 1u); else { c.pc = 0x002162D8u; return; } if (c.pc != 0x0021F460u) [[unlikely]] return; }
L_0021F460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0021F4C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F474u);  if (depth < kMaxDepth) unit_0047(c, 234u, depth + 1u); else { c.pc = 0x0021F4E0u; return; } if (c.pc != 0x0021F474u) [[unlikely]] return; }
L_0021F474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F4C8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 8u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F4B4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F4B8; } }
L_0021F4B4:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F4B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F4C8; } }
L_0021F4C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F4C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F508u);  if (depth < kMaxDepth) unit_00A1(c, 333u, depth + 1u); else { c.pc = 0x00387470u; return; } if (c.pc != 0x0021F508u) [[unlikely]] return; }
L_0021F508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F530; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F520u);  if (depth < kMaxDepth) unit_0045(c, 137u, depth + 1u); else { c.pc = 0x002165D8u; return; } if (c.pc != 0x0021F520u) [[unlikely]] return; }
L_0021F520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27768u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021F53C; } }
L_0021F530:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F54C; } }
L_0021F53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F548u);  if (depth < kMaxDepth) unit_0046(c, 7u, depth + 1u); else { c.pc = 0x00218110u; return; } if (c.pc != 0x0021F548u) [[unlikely]] return; }
L_0021F548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F590; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F564u);  if (depth < kMaxDepth) unit_0045(c, 143u, depth + 1u); else { c.pc = 0x00216758u; return; } if (c.pc != 0x0021F564u) [[unlikely]] return; }
L_0021F564:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021F580; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F594; } }
L_0021F580:
    set32(c.r[2], 0u + 1011u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F594; } }
L_0021F590:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F594:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5D0u);  if (depth < kMaxDepth) unit_0045(c, 169u, depth + 1u); else { c.pc = 0x00216DD8u; return; } if (c.pc != 0x0021F5D0u) [[unlikely]] return; }
L_0021F5D0:
    set32(c.r[3], 0u + 1011u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021F5E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F604; } }
L_0021F5E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5F4u);  if (depth < kMaxDepth) unit_0045(c, 133u, depth + 1u); else { c.pc = 0x00216498u; return; } if (c.pc != 0x0021F5F4u) [[unlikely]] return; }
L_0021F5F4:
    c.r[4].d[0] = c.r[2].d[0] ^ 1013ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0021F604:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F618:
    if (::decomp::hook_0021F618.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0021F618, depth)) return; }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F654u);  if (depth < kMaxDepth) unit_0045(c, 239u, depth + 1u); else { c.pc = 0x00217F90u; return; } if (c.pc != 0x0021F654u) [[unlikely]] return; }
L_0021F654:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1012u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F670; } }
    set32(c.r[2], 0u + 1013u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F6B8; } }
L_0021F670:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 8u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F6A8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F6AC; } }
L_0021F6A8:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F6AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F6BC; } }
L_0021F6B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F6BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6F4u);  if (depth < kMaxDepth) unit_0045(c, 239u, depth + 1u); else { c.pc = 0x00217F90u; return; } if (c.pc != 0x0021F6F4u) [[unlikely]] return; }
L_0021F6F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1012u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F718; } }
    set32(c.r[2], 0u + 1013u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F784; } }
L_0021F718:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 8u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F750; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F754; } }
L_0021F750:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F754:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F788; } }
L_0021F760:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F76Cu);  if (depth < kMaxDepth) unit_0045(c, 133u, depth + 1u); else { c.pc = 0x00216498u; return; } if (c.pc != 0x0021F76Cu) [[unlikely]] return; }
L_0021F76C:
    c.r[4].d[0] = c.r[2].d[0] ^ 1013ull;
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 2u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F788; } }
L_0021F784:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F788:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7B0u);  if (depth < kMaxDepth) unit_0046(c, 151u, depth + 1u); else { c.pc = 0x00219640u; return; } if (c.pc != 0x0021F7B0u) [[unlikely]] return; }
L_0021F7B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 2560u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1012u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F828; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7F8u);  if (depth < kMaxDepth) unit_0046(c, 151u, depth + 1u); else { c.pc = 0x00219640u; return; } if (c.pc != 0x0021F7F8u) [[unlikely]] return; }
L_0021F7F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0021F81C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F814u);  if (depth < kMaxDepth) unit_0046(c, 293u, depth + 1u); else { c.pc = 0x0021AAE0u; return; } if (c.pc != 0x0021F814u) [[unlikely]] return; }
L_0021F814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F8A0; } }
L_0021F81C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F8A0; } }
L_0021F828:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2556u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F854; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F848u);  if (depth < kMaxDepth) unit_0045(c, 233u, depth + 1u); else { c.pc = 0x00217E18u; return; } if (c.pc != 0x0021F848u) [[unlikely]] return; }
L_0021F848:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 2556u), c.r[3].w[0]);
    c.budget -= 3;
L_0021F854:
    set32(c.r[2], 0u + 1012u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0021F874; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 2560u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F8A0; } }
L_0021F874:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F880u);  if (depth < kMaxDepth) unit_0045(c, 133u, depth + 1u); else { c.pc = 0x00216498u; return; } if (c.pc != 0x0021F880u) [[unlikely]] return; }
L_0021F880:
    set32(c.r[3], 0u + 1013u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021F898; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F8A0; } }
L_0021F898:
    st32((c.r[17].w[0] + 2556u), 0u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 2;
L_0021F8A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F8F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F8FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0021F8F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F958; } }
L_0021F8FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F908u);  if (depth < kMaxDepth) unit_0046(c, 126u, depth + 1u); else { c.pc = 0x002192E8u; return; } if (c.pc != 0x0021F908u) [[unlikely]] return; }
L_0021F908:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021F94C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021F948; } }
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F94C; } }
L_0021F948:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021F94C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F95C; } }
L_0021F958:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021F95C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F994u);  if (depth < kMaxDepth) unit_0045(c, 201u, depth + 1u); else { c.pc = 0x00217590u; return; } if (c.pc != 0x0021F994u) [[unlikely]] return; }
L_0021F994:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021F9B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F9B8; } }
L_0021F9B0:
    set32(c.r[2], 0u + 1011u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0021F9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F9C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9E8u);  if (depth < kMaxDepth) unit_0045(c, 207u, depth + 1u); else { c.pc = 0x00217718u; return; } if (c.pc != 0x0021F9E8u) [[unlikely]] return; }
L_0021F9E8:
    c.r[4].d[0] = c.r[2].d[0] ^ 1011ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FA08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA2Cu);  if (depth < kMaxDepth) unit_0045(c, 239u, depth + 1u); else { c.pc = 0x00217F90u; return; } if (c.pc != 0x0021FA2Cu) [[unlikely]] return; }
L_0021FA2C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1012u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021FA48; } }
    set32(c.r[2], 0u + 1013u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FACC; } }
L_0021FA48:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 8u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021FA80; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FA84; } }
L_0021FA80:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021FA84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 27880u);
    set32(c.r[7], 0u + 5u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAB4u);  if (depth < kMaxDepth) unit_0046(c, 11u, depth + 1u); else { c.pc = 0x00218268u; return; } if (c.pc != 0x0021FAB4u) [[unlikely]] return; }
L_0021FAB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAC0u);  if (depth < kMaxDepth) unit_0046(c, 151u, depth + 1u); else { c.pc = 0x00219640u; return; } if (c.pc != 0x0021FAC0u) [[unlikely]] return; }
L_0021FAC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FAD0; } }
L_0021FACC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0021FAD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FAE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021FBB8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB10u);  if (depth < kMaxDepth) unit_0045(c, 213u, depth + 1u); else { c.pc = 0x002178A8u; return; } if (c.pc != 0x0021FB10u) [[unlikely]] return; }
L_0021FB10:
    set32(c.r[3], 0u + 1010u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021FB64; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 11u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0021FB54; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FB58; } }
L_0021FB54:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021FB58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FBC4; } }
L_0021FB64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FBAC; } }
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FBA8; } }
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FBAC; } }
L_0021FBA8:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_0021FBAC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FBC4; } }
L_0021FBB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FBC4u);  if (depth < kMaxDepth) unit_0046(c, 318u, depth + 1u); else { c.pc = 0x0021B000u; return; } if (c.pc != 0x0021FBC4u) [[unlikely]] return; }
L_0021FBC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FBD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FBF8u);  if (depth < kMaxDepth) unit_0045(c, 225u, depth + 1u); else { c.pc = 0x00217B98u; return; } if (c.pc != 0x0021FBF8u) [[unlikely]] return; }
L_0021FBF8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021FC14; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FC1C; } }
L_0021FC14:
    set32(c.r[2], 0u + 1011u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0021FC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FC30:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC68u);  if (depth < kMaxDepth) unit_0046(c, 325u, depth + 1u); else { c.pc = 0x0021B1C0u; return; } if (c.pc != 0x0021FC68u) [[unlikely]] return; }
L_0021FC68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FC78:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] + 24880u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[17], c.r[17].w[0] + 20128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[18], c.r[18].w[0] + 20088u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    st32((c.r[20].w[0] + 3532u), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCE4u);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x0021FCE4u) [[unlikely]] return; }
L_0021FCE4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 748u);
    set32(c.r[2], ld32((c.r[20].w[0] + 3532u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], 0u + 228u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD14u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0021FD14u) [[unlikely]] return; }
L_0021FD14:
    set32(c.r[16], ld32((c.r[20].w[0] + 3532u)));
    set32(c.r[3], 0u + 304u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[9], 0u + 232u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[20].w[0] + 3536u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD44u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0021FD44u) [[unlikely]] return; }
L_0021FD44:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 3548u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD5Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0021FD5Cu) [[unlikely]] return; }
L_0021FD5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[20].w[0] + 3536u)));
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD74u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x0021FD74u) [[unlikely]] return; }
L_0021FD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FF9C; } }
    c.budget -= 1;
L_0021FD80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[22].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[2].w[0] + 24880u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD98u);  if (depth < kMaxDepth) unit_0090(c, 198u, depth + 1u); else { c.pc = 0x00341DE8u; return; } if (c.pc != 0x0021FD98u) [[unlikely]] return; }
L_0021FD98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021FF80; } }
    st32((c.r[17].w[0]), c.r[30].w[0]);
    set32(c.r[5], c.r[16].w[0] + 644u);
    st32((c.r[17].w[0] + 4u), c.r[22].w[0]);
    set32(c.r[4], c.r[17].w[0] + 716u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 748u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDE4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0021FDE4u) [[unlikely]] return; }
L_0021FDE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0021FE24; } }
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[3], c.r[16].w[0] + 56u);
    c.budget -= 3;
L_0021FE00:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FE00u | kUnwind; return; } goto L_0021FE00; } }
L_0021FE24:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021FE64; } }
    set32(c.r[4], c.r[17].w[0] + 156u);
    set32(c.r[3], c.r[16].w[0] + 188u);
    c.budget -= 3;
L_0021FE40:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FE40u | kUnwind; return; } goto L_0021FE40; } }
L_0021FE64:
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021FEA4; } }
    set32(c.r[4], c.r[17].w[0] + 412u);
    set32(c.r[3], c.r[16].w[0] + 320u);
    c.budget -= 3;
L_0021FE80:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FE80u | kUnwind; return; } goto L_0021FE80; } }
L_0021FEA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021FEEC; } }
    set32(c.r[4], c.r[17].w[0] + 516u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 3;
L_0021FEC0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0] - 40u), c.r[2].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FEC0u | kUnwind; return; } goto L_0021FEC0; } }
L_0021FEEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 3544u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021FF7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FF7C; } }
    st32((c.r[20].w[0] + 3540u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[2].w[0] + 20088u);
    set32(c.r[5], ld32((c.r[16].w[0] + 384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], 0u + 299u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + 20128u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF34u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0021FF34u) [[unlikely]] return; }
L_0021FF34:
    st32((c.r[20].w[0] + 3544u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021FF7C; } }
    set32(c.r[6], c.r[16].w[0] + 388u);
    c.budget -= 2;
L_0021FF50:
    set32(c.r[2], ld32((c.r[20].w[0] + 3544u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FF50u | kUnwind; return; } goto L_0021FF50; } }
L_0021FF7C:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021FF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 24880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF94u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x0021FF94u) [[unlikely]] return; }
L_0021FF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FD80u | kUnwind; return; } goto L_0021FD80; } }
L_0021FF9C:
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
L_0021FFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 3536u)));
    c.r[15].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0048(c, 2u, depth); } }
    c.budget -= 1;
L_0021FFF8:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0048(c, 1u, depth);
}

}
