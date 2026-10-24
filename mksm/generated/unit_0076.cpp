#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_002D8040;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0076[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0076(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D8000;
    case 2u: goto L_002D800C;
    case 3u: goto L_002D801C;
    case 4u: goto L_002D802C;
    case 5u: goto L_002D8034;
    case 6u: goto L_002D8040;
    case 7u: goto L_002D8098;
    case 8u: goto L_002D810C;
    case 9u: goto L_002D8210;
    case 10u: goto L_002D8238;
    case 11u: goto L_002D82B0;
    case 12u: goto L_002D82D8;
    case 13u: goto L_002D82EC;
    case 14u: goto L_002D833C;
    case 15u: goto L_002D8388;
    case 16u: goto L_002D83D8;
    case 17u: goto L_002D8428;
    case 18u: goto L_002D8478;
    case 19u: goto L_002D84C4;
    case 20u: goto L_002D8510;
    case 21u: goto L_002D8564;
    case 22u: goto L_002D85BC;
    case 23u: goto L_002D861C;
    case 24u: goto L_002D8668;
    case 25u: goto L_002D86B4;
    case 26u: goto L_002D8700;
    case 27u: goto L_002D874C;
    case 28u: goto L_002D8798;
    case 29u: goto L_002D87E4;
    case 30u: goto L_002D8830;
    case 31u: goto L_002D8880;
    case 32u: goto L_002D88D8;
    case 33u: goto L_002D8938;
    case 34u: goto L_002D8984;
    case 35u: goto L_002D89D0;
    case 36u: goto L_002D8A1C;
    case 37u: goto L_002D8A68;
    case 38u: goto L_002D8AB4;
    case 39u: goto L_002D8B00;
    case 40u: goto L_002D8B4C;
    case 41u: goto L_002D8B9C;
    case 42u: goto L_002D8BF4;
    case 43u: goto L_002D8C54;
    case 44u: goto L_002D8CA0;
    case 45u: goto L_002D8CEC;
    case 46u: goto L_002D8D40;
    case 47u: goto L_002D8D90;
    case 48u: goto L_002D8DC0;
    case 49u: goto L_002D8DE0;
    case 50u: goto L_002D8E10;
    case 51u: goto L_002D8E30;
    case 52u: goto L_002D8E80;
    case 53u: goto L_002D8ED0;
    case 54u: goto L_002D8F28;
    case 55u: goto L_002D8F84;
    case 56u: goto L_002D8FD0;
    case 57u: goto L_002D9020;
    case 58u: goto L_002D9034;
    case 59u: goto L_002D9050;
    case 60u: goto L_002D9088;
    case 61u: goto L_002D91BC;
    case 62u: goto L_002D91D8;
    case 63u: goto L_002D91E4;
    case 64u: goto L_002D91F4;
    case 65u: goto L_002D9214;
    case 66u: goto L_002D9228;
    case 67u: goto L_002D9274;
    case 68u: goto L_002D92B8;
    case 69u: goto L_002D92F8;
    case 70u: goto L_002D9310;
    case 71u: goto L_002D9338;
    case 72u: goto L_002D9348;
    case 73u: goto L_002D93DC;
    case 74u: goto L_002D93F0;
    case 75u: goto L_002D9404;
    case 76u: goto L_002D9434;
    case 77u: goto L_002D9450;
    case 78u: goto L_002D9460;
    case 79u: goto L_002D94B4;
    case 80u: goto L_002D94CC;
    case 81u: goto L_002D94E4;
    case 82u: goto L_002D9508;
    case 83u: goto L_002D9550;
    case 84u: goto L_002D9584;
    case 85u: goto L_002D9608;
    case 86u: goto L_002D9644;
    case 87u: goto L_002D9654;
    case 88u: goto L_002D9674;
    case 89u: goto L_002D96A8;
    case 90u: goto L_002D9700;
    case 91u: goto L_002D9750;
    case 92u: goto L_002D97C8;
    case 93u: goto L_002D97DC;
    case 94u: goto L_002D97F0;
    case 95u: goto L_002D9804;
    case 96u: goto L_002D9818;
    case 97u: goto L_002D982C;
    case 98u: goto L_002D9840;
    case 99u: goto L_002D9854;
    case 100u: goto L_002D9868;
    case 101u: goto L_002D987C;
    case 102u: goto L_002D9890;
    case 103u: goto L_002D989C;
    case 104u: goto L_002D98B0;
    case 105u: goto L_002D98C0;
    case 106u: goto L_002D98E4;
    case 107u: goto L_002D9908;
    case 108u: goto L_002D992C;
    case 109u: goto L_002D9954;
    case 110u: goto L_002D99D0;
    case 111u: goto L_002D9A38;
    case 112u: goto L_002D9AA8;
    case 113u: goto L_002D9AB8;
    case 114u: goto L_002D9AE8;
    case 115u: goto L_002D9B1C;
    case 116u: goto L_002D9B48;
    case 117u: goto L_002D9B78;
    case 118u: goto L_002D9BC8;
    case 119u: goto L_002D9C14;
    case 120u: goto L_002D9C60;
    case 121u: goto L_002D9C98;
    case 122u: goto L_002D9CC8;
    case 123u: goto L_002D9CF0;
    case 124u: goto L_002D9D04;
    case 125u: goto L_002D9D10;
    case 126u: goto L_002D9D24;
    case 127u: goto L_002D9D48;
    case 128u: goto L_002D9D80;
    case 129u: goto L_002D9DA4;
    case 130u: goto L_002D9DC8;
    case 131u: goto L_002D9E20;
    case 132u: goto L_002D9E4C;
    case 133u: goto L_002D9E5C;
    case 134u: goto L_002D9E7C;
    case 135u: goto L_002D9EA0;
    case 136u: goto L_002D9EF8;
    case 137u: goto L_002D9F0C;
    case 138u: goto L_002D9F40;
    case 139u: goto L_002D9F64;
    case 140u: goto L_002D9F8C;
    case 141u: goto L_002D9FF4;
    case 142u: goto L_002DA048;
    case 143u: goto L_002DA080;
    case 144u: goto L_002DA12C;
    case 145u: goto L_002DA140;
    case 146u: goto L_002DA180;
    case 147u: goto L_002DA230;
    case 148u: goto L_002DA270;
    case 149u: goto L_002DA2E8;
    case 150u: goto L_002DA30C;
    case 151u: goto L_002DA340;
    case 152u: goto L_002DA354;
    case 153u: goto L_002DA408;
    case 154u: goto L_002DA478;
    case 155u: goto L_002DA4F0;
    case 156u: goto L_002DA5B0;
    case 157u: goto L_002DA668;
    case 158u: goto L_002DA6F0;
    case 159u: goto L_002DA710;
    case 160u: goto L_002DA7A8;
    case 161u: goto L_002DA838;
    case 162u: goto L_002DA998;
    case 163u: goto L_002DA9B8;
    case 164u: goto L_002DAA08;
    case 165u: goto L_002DAF58;
    case 166u: goto L_002DAFE8;
    case 167u: goto L_002DB0A0;
    case 168u: goto L_002DB214;
    case 169u: goto L_002DB234;
    case 170u: goto L_002DB284;
    case 171u: goto L_002DB900;
    case 172u: goto L_002DB920;
    case 173u: goto L_002DB998;
    case 174u: goto L_002DB9DC;
    case 175u: goto L_002DB9F0;
    case 176u: goto L_002DBA2C;
    case 177u: goto L_002DBA50;
    case 178u: goto L_002DBA64;
    case 179u: goto L_002DBA78;
    case 180u: goto L_002DBA9C;
    case 181u: goto L_002DBAD0;
    case 182u: goto L_002DBADC;
    case 183u: goto L_002DBAF0;
    case 184u: goto L_002DBBA8;
    case 185u: goto L_002DBBC0;
    case 186u: goto L_002DBBF8;
    case 187u: goto L_002DBC1C;
    case 188u: goto L_002DBC60;
    case 189u: goto L_002DBCD0;
    case 190u: goto L_002DBCEC;
    case 191u: goto L_002DBCFC;
    case 192u: goto L_002DBD28;
    case 193u: goto L_002DBD40;
    case 194u: goto L_002DBD78;
    case 195u: goto L_002DBDB0;
    case 196u: goto L_002DBDC0;
    case 197u: goto L_002DBDD0;
    case 198u: goto L_002DBDE8;
    case 199u: goto L_002DBE00;
    case 200u: goto L_002DBE38;
    case 201u: goto L_002DBE80;
    case 202u: goto L_002DBEC8;
    case 203u: goto L_002DBF08;
    case 204u: goto L_002DBF38;
    default: bad_entry(c, 0x002D8000u); return;
    }
L_002D8000:
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D800C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st8((c.r[2].w[0] - 18940u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D801C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st8((c.r[2].w[0] - 18939u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D802C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st16((c.r[2].w[0] - 18928u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 2;
L_002D8034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8040:
    if (::decomp::hook_002D8040.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_002D8040, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 19740u)));
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D80BC; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8098u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8098u) [[unlikely]] return; }
L_002D8098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D80BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 14664u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D810C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002D80BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D8130; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D80E4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D80F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8188; } }
L_002D80E4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D815C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8188; } }
L_002D80F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 19742u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8118; } }
L_002D810C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8214; } }
L_002D8118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[17].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20120u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81C8; } }
L_002D8130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 19738u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D810Cu | kUnwind; return; } goto L_002D810C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[17].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20116u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81C8; } }
L_002D815C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 19734u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D810Cu | kUnwind; return; } goto L_002D810C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[17].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20112u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81C8; } }
L_002D8188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[16].w[0] - 3u);
    set32(c.r[4], c.r[4].w[0] - 19744u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 200u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D810Cu | kUnwind; return; } goto L_002D810C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20120u);
    set32(c.r[5], c.r[17].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_002D81C8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D81EC; } }
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 7;
L_002D81EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D8210; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D8210; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8210u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D8210u) [[unlikely]] return; }
L_002D8210:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D8214:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8238:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9050; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9050; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9050; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9050; } }
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82B0u);  if (depth < kMaxDepth) unit_0085(c, 294u, depth + 1u); else { c.pc = 0x00317278u; return; } if (c.pc != 0x002D82B0u) [[unlikely]] return; }
L_002D82B0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D9050; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9004; } }
    c.budget -= 1;
L_002D82D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82ECu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D82ECu) [[unlikely]] return; }
L_002D82EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8328; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8310; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8310:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8328:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D833Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D833Cu) [[unlikely]] return; }
L_002D833C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8374; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8364; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8364:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8374:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8388u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8388u) [[unlikely]] return; }
L_002D8388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D83C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D83AC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D83AC:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D83C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83D8u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D83D8u) [[unlikely]] return; }
L_002D83D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8414; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D83FC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D83FC:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8414:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8428u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8428u) [[unlikely]] return; }
L_002D8428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8464; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D844C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D844C:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8464:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8478u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8478u) [[unlikely]] return; }
L_002D8478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D84B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D84A0; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D84A0:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D84B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D84C4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D84C4u) [[unlikely]] return; }
L_002D84C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D84FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D84EC; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D84EC:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D84FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8510u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8510u) [[unlikely]] return; }
L_002D8510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D854C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8534; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8534:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D854C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24600u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8564u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8564u) [[unlikely]] return; }
L_002D8564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D85A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D858C; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D858C:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D85A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24584u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85BCu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D85BCu) [[unlikely]] return; }
L_002D85BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D85FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D85E4; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 140u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D85E4:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[17].w[0] + 140u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D85FC:
    set32(c.r[2], 0u + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 24568u);
    set32(c.r[16], c.r[3].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D861Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D861Cu) [[unlikely]] return; }
L_002D861C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8654; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8644; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8644:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8654:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8668u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8668u) [[unlikely]] return; }
L_002D8668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D86A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8690; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8690:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D86A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86B4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D86B4u) [[unlikely]] return; }
L_002D86B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D86EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D86DC; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D86DC:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D86EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8700u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8700u) [[unlikely]] return; }
L_002D8700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8738; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8728; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8728:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8738:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D874Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D874Cu) [[unlikely]] return; }
L_002D874C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8784; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8774; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8774:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8784:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8798u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8798u) [[unlikely]] return; }
L_002D8798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D87D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D87C0; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D87C0:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D87D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87E4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D87E4u) [[unlikely]] return; }
L_002D87E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D881C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D880C; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D880C:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D881C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8830u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8830u) [[unlikely]] return; }
L_002D8830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8868; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8858; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8858:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8868:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24472u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8880u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8880u) [[unlikely]] return; }
L_002D8880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D88C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D88A8; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D88A8:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D88C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24464u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88D8u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D88D8u) [[unlikely]] return; }
L_002D88D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8918; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8900; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8900:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[17].w[0] + 164u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8918:
    set32(c.r[2], 0u + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 24456u);
    set32(c.r[16], c.r[3].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8938u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8938u) [[unlikely]] return; }
L_002D8938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8970; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8960; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8960:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8970:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8984u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8984u) [[unlikely]] return; }
L_002D8984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D89BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D89AC; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 172u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D89AC:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 172u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D89BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89D0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D89D0u) [[unlikely]] return; }
L_002D89D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8A08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D89F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 176u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D89F8:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 176u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8A08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A1Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8A1Cu) [[unlikely]] return; }
L_002D8A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8A54; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8A44; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 180u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8A44:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 180u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8A54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A68u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8A68u) [[unlikely]] return; }
L_002D8A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8AA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8A8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8A8C:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8AA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AB4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8AB4u) [[unlikely]] return; }
L_002D8AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8AEC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8AD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8AD8:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8AEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B00u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8B00u) [[unlikely]] return; }
L_002D8B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8B38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8B24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8B24:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8B38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B4Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8B4Cu) [[unlikely]] return; }
L_002D8B4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8B84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8B70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8B70:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 60u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8B84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24368u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B9Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8B9Cu) [[unlikely]] return; }
L_002D8B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8BDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8BC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8BC0:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8BDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24360u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BF4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8BF4u) [[unlikely]] return; }
L_002D8BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8C34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8C18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8C18:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8C34:
    set32(c.r[2], 0u + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 24352u);
    set32(c.r[16], c.r[3].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C54u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8C54u) [[unlikely]] return; }
L_002D8C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8C8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8C78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8C78:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8C8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CA0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8CA0u) [[unlikely]] return; }
L_002D8CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8CD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8CC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8CC4:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 76u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8CD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CECu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8CECu) [[unlikely]] return; }
L_002D8CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8D28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8D10; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8D10:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8D28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] - 24328u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D40u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8D40u) [[unlikely]] return; }
L_002D8D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8D7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8D64; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8D64:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8D7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D90u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8D90u) [[unlikely]] return; }
L_002D8D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8DCC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8DB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8DB4:
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DC0u);  if (depth < kMaxDepth) unit_0040(c, 364u, depth + 1u); else { c.pc = 0x00203768u; return; } if (c.pc != 0x002D8DC0u) [[unlikely]] return; }
L_002D8DC0:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8DCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DE0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8DE0u) [[unlikely]] return; }
L_002D8DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8E1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8E04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8E04:
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E10u);  if (depth < kMaxDepth) unit_0040(c, 364u, depth + 1u); else { c.pc = 0x00203768u; return; } if (c.pc != 0x002D8E10u) [[unlikely]] return; }
L_002D8E10:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8E1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E30u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8E30u) [[unlikely]] return; }
L_002D8E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8E6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8E54; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8E54:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8E6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E80u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8E80u) [[unlikely]] return; }
L_002D8E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8EBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8EA4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8EA4:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8EBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8ED0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8ED0u) [[unlikely]] return; }
L_002D8ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8F14; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8EF4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8EF4:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8F14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F28u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8F28u) [[unlikely]] return; }
L_002D8F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8F68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8F50; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8F50:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8F68:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 24256u);
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F84u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8F84u) [[unlikely]] return; }
L_002D8F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8FBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8FAC; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 236u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8FAC:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 236u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9000; } }
L_002D8FBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FD0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D8FD0u) [[unlikely]] return; }
L_002D8FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9000; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8FF0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8FFC; } }
L_002D8FF0:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 3;
L_002D8FFC:
    st16((c.r[17].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D9000:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002D9004:
    set32(c.r[2], 0u + 28u);
    set32(c.r[5], c.r[21].w[0] - 24688u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9020u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002D9020u) [[unlikely]] return; }
L_002D9020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D82D8u | kUnwind; return; } goto L_002D82D8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9034u);  if (depth < kMaxDepth) unit_0059(c, 119u, depth + 1u); else { c.pc = 0x00265A00u; return; } if (c.pc != 0x002D9034u) [[unlikely]] return; }
L_002D9034:
    set32(c.r[4], ld32((c.r[30].w[0] - 3028u)));
    set32(c.r[6], c.r[22].w[0] - 24224u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[23].w[0] - 24176u);
    set32(c.r[8], 0u + 561u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9050u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002D9050u) [[unlikely]] return; }
L_002D9050:
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
L_002D9088:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[4] = c.r[11].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.r[2].d[0] = c.r[10].d[0] & 32768ull;
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D90C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002D90C4:
    c.r[2].d[0] = c.r[11].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D90D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002D90D8:
    c.r[2].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D90EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002D90EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002D9140; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9114; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9170; } }
L_002D9114:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002D9158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9170; } }
L_002D9128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[9].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20120u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D918C; } }
L_002D9140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[9].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20116u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D918C; } }
L_002D9158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[9].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20112u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D918C; } }
L_002D9170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20120u);
    set32(c.r[5], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_002D918C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9308; } }
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24144u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D91BC:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002D91D8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D91D8:
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65503ull;
    c.budget -= 3;
L_002D91E4:
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D91F4:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002D9214; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9214:
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D91E4u | kUnwind; return; } goto L_002D91E4; } }
L_002D9228:
    c.f[1] = c.r[10].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[5].w[0] + 224u), c.f[1]);
    st32((c.r[5].w[0] + 228u), c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[5].w[0] + 192u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 220u), c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[5].w[0] + 196u), 0u);
    st32((c.r[5].w[0] + 216u), c.f[3]);
    st32((c.r[5].w[0] + 208u), c.f[2]);
    st32((c.r[5].w[0] + 212u), c.f[0]);
    st32((c.r[5].w[0] + 200u), 0u);
    st32((c.r[5].w[0] + 204u), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D92B8:
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.f[1] = c.r[11].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[5].w[0] + 104u), c.r[2].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 108u), c.f[2]);
    st32((c.r[5].w[0] + 112u), c.f[1]);
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D92F8:
    st32((c.r[5].w[0] + 116u), 0u);
    st32((c.r[5].w[0] + 104u), 0u);
    st32((c.r[5].w[0] + 108u), 0u);
    st32((c.r[5].w[0] + 112u), 0u);
    c.budget -= 4;
L_002D9308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9338; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9338u);  if (depth < kMaxDepth) unit_0075(c, 162u, depth + 1u); else { c.pc = 0x002D7120u; return; } if (c.pc != 0x002D9338u) [[unlikely]] return; }
L_002D9338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9348:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D9388; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9434; } }
L_002D9388:
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    st32((c.r[17].w[0] + 12u), c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9404; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93DCu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D93DCu) [[unlikely]] return; }
L_002D93DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93F0u);  if (depth < kMaxDepth) unit_0049(c, 63u, depth + 1u); else { c.pc = 0x002250F0u; return; } if (c.pc != 0x002D93F0u) [[unlikely]] return; }
L_002D93F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9404u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D9404u) [[unlikely]] return; }
L_002D9404:
    set32(c.r[5], ld32((c.r[16].w[0] + 492u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9434; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9434; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 144u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9434u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D9434u) [[unlikely]] return; }
L_002D9434:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9460:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D94B4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9488; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D949C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D94E4; } }
L_002D9488:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D94CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D94E4; } }
L_002D949C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20120u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D94B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20116u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D94CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[3], ld32((c.r[2].w[0] - 20112u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D94E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20120u);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9508:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[2].w[0] - 17920u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[20], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], c.r[22].w[0] - 18688u);
    set32(c.r[18], 0u + 99u);
    c.budget -= 18;
L_002D9550:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D9684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9584; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9584u) [[unlikely]] return; }
L_002D9584:
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D9608; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002D9608; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D9608; } }
    st32((c.r[6].w[0]), c.r[19].w[0]);
    set32(c.r[4], c.r[6].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], ld32((c.r[7].w[0] + 36u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    st32((c.r[6].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st32((c.r[6].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9608u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D9608u) [[unlikely]] return; }
L_002D9608:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002D9684; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9684; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D9684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9644; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9644u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9644u) [[unlikely]] return; }
L_002D9644:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9654u);  if (depth < kMaxDepth) unit_0075(c, 182u, depth + 1u); else { c.pc = 0x002D75E0u; return; } if (c.pc != 0x002D9654u) [[unlikely]] return; }
L_002D9654:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9674; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9674u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002D9674u) [[unlikely]] return; }
L_002D9674:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 4;
L_002D9684:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9550u | kUnwind; return; } goto L_002D9550; } }
    set32(c.r[16], c.r[22].w[0] - 18688u);
    set32(c.r[19], 0u + 1u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], 0u + 11u);
    c.budget -= 5;
L_002D96A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002D9718; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] - 22920u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9700; } }
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = ld32((c.r[16].w[0] + 28u));
    c.f[15] = fp::cvt_s_w(c.f[15]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9700u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002D9700u) [[unlikely]] return; }
L_002D9700:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9718; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002D9718:
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D96A8u | kUnwind; return; } goto L_002D96A8; } }
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
L_002D9750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[29], c.r[29].w[0] - 448u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10160u)));
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[16]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(46ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[9].w[0]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D989C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24112u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D97C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4760u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D97DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4720u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D97F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4680u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D9804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4640u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D9818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4600u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D982C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4560u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D9840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4520u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D9854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4480u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D9868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4440u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D987C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4400u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D989C; } }
L_002D9890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 4360u);
    c.budget -= 3;
L_002D989C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98B0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D98B0u) [[unlikely]] return; }
L_002D98B0:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D99FC; } }
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_002D98C0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D99E8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98E4u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D98E4u) [[unlikely]] return; }
L_002D98E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D998C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 17920u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 2u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[22], 0u + 30u);
    c.budget -= 7;
L_002D9908:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D996C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9924; } }
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 2;
L_002D9924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D992Cu);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002D992Cu) [[unlikely]] return; }
L_002D992C:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9980; } }
    c.f[12] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9954u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002D9954u) [[unlikely]] return; }
L_002D9954:
    st32((c.r[17].w[0]), c.r[21].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9984; } }
L_002D996C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9908u | kUnwind; return; } goto L_002D9908; } }
L_002D9980:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9984:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D9998; } }
L_002D998C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9A00; } }
L_002D9998:
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D99D0u) [[unlikely]] return; }
L_002D99D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22508u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D99E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[2].w[0] + 344u), c.r[30].w[0]);
    c.budget -= 2;
L_002D99E8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D98C0u | kUnwind; return; } goto L_002D98C0; } }
L_002D99FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D9A00:
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 448u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9A38:
    set32(c.r[29], c.r[29].w[0] - 720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[23]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 548u), c.f[0]);
    st32((c.r[29].w[0] + 556u), c.f[1]);
    st32((c.r[29].w[0] + 544u), 0u);
    st32((c.r[29].w[0] + 552u), 0u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AA8u);  if (depth < kMaxDepth) unit_0060(c, 264u, depth + 1u); else { c.pc = 0x00283C88u; return; } if (c.pc != 0x002D9AA8u) [[unlikely]] return; }
L_002D9AA8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_002D9C28; } }
L_002D9AB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[20], c.r[4].w[0] + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[19], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9AE8; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9B0C; } }
L_002D9AE8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9B0C; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9AE8u | kUnwind; return; } goto L_002D9AE8; } }
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002D9B0C:
    set32(c.r[4], ld32((c.r[17].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B1Cu);  if (depth < kMaxDepth) unit_007B(c, 67u, depth + 1u); else { c.pc = 0x002ECA40u; return; } if (c.pc != 0x002D9B1Cu) [[unlikely]] return; }
L_002D9B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9B68; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B48u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002D9B48u) [[unlikely]] return; }
L_002D9B48:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    st32((c.r[29].w[0] + 532u), c.f[1]);
    st32((c.r[29].w[0] + 536u), c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9BA8; } }
L_002D9B68:
    set32(c.r[4], ld32((c.r[17].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B78u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x002D9B78u) [[unlikely]] return; }
L_002D9B78:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9BA8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 532u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 9;
L_002D9BA8:
    c.r[3].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_002D9BEC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9BDC; } }
L_002D9BC8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9BEC; } }
L_002D9BDC:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9BC8u | kUnwind; return; } goto L_002D9BC8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_002D9BEC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9C14; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 528u);
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C14u);  if (depth < kMaxDepth) unit_0076(c, 91u, depth + 1u); else { c.pc = 0x002D9750u; return; } if (c.pc != 0x002D9C14u) [[unlikely]] return; }
L_002D9C14:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9AB8u | kUnwind; return; } goto L_002D9AB8; } }
L_002D9C28:
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    set32(c.r[29], c.r[29].w[0] + 720u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9C60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9CD8; } }
    set32(c.r[16], c.r[18].w[0] - 17920u);
    set32(c.r[17], c.r[16].w[0] + 4800u);
    c.budget -= 2;
L_002D9C98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9CC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9CC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9CC8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9CC8u) [[unlikely]] return; }
L_002D9CC8:
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9C98u | kUnwind; return; } goto L_002D9C98; } }
L_002D9CD8:
    set32(c.r[4], c.r[18].w[0] - 17920u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4800u);
    set32(c.r[16], c.r[19].w[0] - 27384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CF0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D9CF0u) [[unlikely]] return; }
L_002D9CF0:
    set32(c.r[4], c.r[20].w[0] - 18688u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D04u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D9D04u) [[unlikely]] return; }
L_002D9D04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D10u);  if (depth < kMaxDepth) unit_007E(c, 100u, depth + 1u); else { c.pc = 0x002F8BE8u; return; } if (c.pc != 0x002D9D10u) [[unlikely]] return; }
L_002D9D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9D24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D24u);  if (depth < kMaxDepth) unit_007E(c, 98u, depth + 1u); else { c.pc = 0x002F8B40u; return; } if (c.pc != 0x002D9D24u) [[unlikely]] return; }
L_002D9D24:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9D48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[2].w[0] - 17920u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u - 2u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[19], 0u + 30u);
    c.budget -= 14;
L_002D9D80:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9DE4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9D9C; } }
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 2;
L_002D9D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DA4u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002D9DA4u) [[unlikely]] return; }
L_002D9DA4:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9DF8; } }
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DC8u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002D9DC8u) [[unlikely]] return; }
L_002D9DC8:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9DFC; } }
L_002D9DE4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9D80u | kUnwind; return; } goto L_002D9D80; } }
L_002D9DF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9DFC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D9E8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9E4C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E4Cu) [[unlikely]] return; }
L_002D9E4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E5Cu);  if (depth < kMaxDepth) unit_0075(c, 182u, depth + 1u); else { c.pc = 0x002D75E0u; return; } if (c.pc != 0x002D9E5Cu) [[unlikely]] return; }
L_002D9E5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9E7C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E7Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002D9E7Cu) [[unlikely]] return; }
L_002D9E7C:
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 4;
L_002D9E8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9EA0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EF8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D9EF8u) [[unlikely]] return; }
L_002D9EF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F0Cu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D9F0Cu) [[unlikely]] return; }
L_002D9F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9F20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA014; } }
L_002D9F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 17920u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 2u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[20], 0u + 30u);
    c.budget -= 8;
L_002D9F40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9FA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9F5C; } }
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 2;
L_002D9F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F64u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002D9F64u) [[unlikely]] return; }
L_002D9F64:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9FB8; } }
    c.f[12] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F8Cu);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002D9F8Cu) [[unlikely]] return; }
L_002D9F8C:
    st32((c.r[16].w[0]), c.r[19].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9FBC; } }
L_002D9FA4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9F40u | kUnwind; return; } goto L_002D9F40; } }
L_002D9FB8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9FBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DA014; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 36u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[22].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 44u), c.r[23].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 4u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FF4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D9FF4u) [[unlikely]] return; }
L_002D9FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22508u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA010; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 3;
L_002DA010:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DA014:
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
L_002DA048:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA118; } }
L_002DA080:
    ld128((c.r[3].w[0] + 400u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA114; } }
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA114; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA114; } }
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA114; } }
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA114; } }
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA114; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 2;
L_002DA114:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DA118:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002DA134; } }
    set32(c.r[4], c.r[17].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA12Cu);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002DA12Cu) [[unlikely]] return; }
L_002DA12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA140; } }
L_002DA134:
    set32(c.r[4], c.r[17].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA140u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002DA140u) [[unlikely]] return; }
L_002DA140:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA080u | kUnwind; return; } goto L_002DA080; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 4640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA170; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] - 13120u);
    st32((c.r[19].w[0] - 4640u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 416u), 0u);
    st32((c.r[3].w[0] + 316u), 0u);
    st32((c.r[3].w[0] + 8464u), 0u);
    c.budget -= 6;
L_002DA170:
    set32(c.r[5], ld32((c.r[18].w[0] - 13120u)));
    set32(c.r[16], c.r[18].w[0] - 13120u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DA24C; } }
L_002DA180:
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA23C; } }
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA23C; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA23C; } }
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA23C; } }
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA23C; } }
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA23C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 308u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA230u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DA230u) [[unlikely]] return; }
L_002DA230:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA244; } }
L_002DA23C:
    set32(c.r[16], c.r[5].w[0] + 24u);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 2;
L_002DA244:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA180u | kUnwind; return; } goto L_002DA180; } }
L_002DA24C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DA270:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 280u), c.f[29]);
    st32((c.r[29].w[0] + 272u), c.f[28]);
    st32((c.r[29].w[0] + 264u), c.f[27]);
    st32((c.r[29].w[0] + 256u), c.f[26]);
    st32((c.r[29].w[0] + 248u), c.f[25]);
    st32((c.r[29].w[0] + 240u), c.f[24]);
    st32((c.r[29].w[0] + 232u), c.f[23]);
    st32((c.r[29].w[0] + 224u), c.f[22]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA318; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DA318; } }
    c.budget -= 1;
L_002DA2E8:
    set32(c.r[2], ld32((c.r[5].w[0] + 308u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA30Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DA30Cu) [[unlikely]] return; }
L_002DA30C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA2E8u | kUnwind; return; } goto L_002DA2E8; } }
L_002DA318:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[18].d[0] = c.r[18].d[0] | 1024ull;
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002DB938; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA340u);  if (depth < kMaxDepth) unit_0075(c, 108u, depth + 1u); else { c.pc = 0x002D5BC8u; return; } if (c.pc != 0x002DA340u) [[unlikely]] return; }
L_002DA340:
    ld128((c.r[17].w[0] + 368u) & ~15u, c.r[4]);
    c.f[12] = c.f[0];
    st32((c.r[17].w[0] + 340u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA354u);  if (depth < kMaxDepth) unit_004B(c, 20u, depth + 1u); else { c.pc = 0x0022C7A8u; return; } if (c.pc != 0x002DA354u) [[unlikely]] return; }
L_002DA354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DA380; } }
    c.f[23] = c.r[2].w[0];
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA39C; } }
L_002DA380:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[23] = c.r[2].w[0];
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.f[23] = fp::add(c.f[23], c.f[23]);
    c.budget -= 7;
L_002DA39C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 54304ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 20u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 54288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 54272ull;
    set32(c.r[2], 0u + 257u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA420; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 2;
L_002DA408:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA408u | kUnwind; return; } goto L_002DA408; } }
L_002DA420:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF2F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 37386ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1048u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA5D4; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[22].d[0] = c.r[22].d[0] | 54304ull;
    c.r[21].d[0] = c.r[21].d[0] | 54288ull;
    c.r[20].d[0] = c.r[20].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] | 54272ull;
    set32(c.r[30], 0u + 12u);
    c.budget -= 12;
L_002DA478:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[22].w[0]), c.r[30].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[4], 0u + 257u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[23].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    c.f[1] = ld32((c.r[18].w[0] + 188u));
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    fpu_div(c, 3u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA4F8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4F0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DA4F0u) [[unlikely]] return; }
L_002DA4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA588; } }
L_002DA4F8:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.f[2] = fp::sub(c.f[20], c.f[3]);
    ld128((c.r[4].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    set32(c.r[5], c.r[19].w[0] + 64u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[20].d[0];
    st128((c.r[18].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[17], c.r[19].w[0] + 24u);
    ld128((c.r[4].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[8], c.f[3]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[18].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    ld128((c.r[18].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[18].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 36;
L_002DA588:
    set32(c.r[19], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA5C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 2;
L_002DA5B0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA5B0u | kUnwind; return; } goto L_002DA5B0; } }
L_002DA5C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA478u | kUnwind; return; } goto L_002DA478; } }
L_002DA5D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DA5F8; } }
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA614; } }
L_002DA5F8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002DA614:
    c.f[0] = ld32((c.r[19].w[0] + 184u));
    c.f[1] = ld32((c.r[19].w[0] + 188u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 3u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA670; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA668u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DA668u) [[unlikely]] return; }
L_002DA668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA6D0; } }
L_002DA670:
    set32(c.r[2], c.r[19].w[0] + 64u);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    ld128((c.r[2].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[19].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[8], c.f[3]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[19].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    c.f[1] = ld32((c.r[2].w[0] + 116u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    ld128((c.r[19].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[19].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.budget -= 24;
L_002DA6D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 54272ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA708; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 2;
L_002DA6F0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA6F0u | kUnwind; return; } goto L_002DA6F0; } }
L_002DA708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 53248ull;
    c.budget -= 2;
L_002DA710:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA710u | kUnwind; return; } goto L_002DA710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB938; } }
L_002DA730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1048u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB00C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 54288ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[27] = c.r[1].w[0];
    set32(c.r[21], c.r[5].w[0] - 4624u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[26] = c.r[1].w[0];
    c.r[30].d[0] = c.r[30].d[0] | 54272ull;
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    c.r[22].d[0] = c.r[22].d[0] | 53248ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[29] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[24] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[28] = c.r[1].w[0];
    c.budget -= 26;
L_002DA7A8:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 54304ull;
    set32(c.r[2], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 257u);
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    c.f[1] = ld32((c.r[18].w[0] + 188u));
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    fpu_div(c, 3u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[3]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA840; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA838u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DA838u) [[unlikely]] return; }
L_002DA838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAFC0; } }
L_002DA840:
    set32(c.r[16], c.r[18].w[0] + 64u);
    set32(c.r[17], ld32((c.r[16].w[0] + 140u)));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 32768ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA960; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 134u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DA89C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.f[21] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 65466ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA968; } }
L_002DA89C:
    c.f[1] = ld32((c.r[20].w[0] + 144u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA8FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DA8DC; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA8F8; } }
L_002DA8DC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002DA8F8:
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.budget -= 1;
L_002DA8FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DA920; } }
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA93C; } }
L_002DA920:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_002DA93C:
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 124u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 21u, c.f[3], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA964; } }
L_002DA960:
    c.f[21] = c.f[3];
    c.budget -= 1;
L_002DA964:
    c.f[22] = fp::sub(c.f[25], c.f[21]);
    c.budget -= 1;
L_002DA968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAA08; } }
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6] = c.vu0.vf[1];
    mmi::prot3w(c.r[6], c.r[6]);
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.f[20] = c.r[6].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA998u);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D7458u; return; } if (c.pc != 0x002DA998u) [[unlikely]] return; }
L_002DA998:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAA08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9B8u);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D7458u; return; } if (c.pc != 0x002DA9B8u) [[unlikely]] return; }
L_002DA9B8:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[16].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[4] = c.r[2];
    vu::mr32(c.vu0, 15u, 4u, 4u);
    vu::mr32(c.vu0, 15u, 4u, 4u);
    vu::mr32(c.vu0, 4u, 2u, 4u);
    vu::mul(c.vu0, 15u, 3u, 3u, 1u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DAA08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 244u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 404u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAA08u) [[unlikely]] return; }
L_002DAA08:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAB70; } }
    ld128((c.r[16].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    set32(c.r[8], c.f[21]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAB70; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 135u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::mul(c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[4]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAB28; } }
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 23016u)));
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0]));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[6], c.f[3]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[0]);
    set32(c.r[5], c.f[1]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[5], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st32((c.r[29].w[0] + 12u), c.f[1]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002DAAD0; } }
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAAEC; } }
L_002DAAD0:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002DAAEC:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[16].w[0] + 120u), c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAB70; } }
L_002DAB28:
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0]));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[6], c.f[3]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st32((c.r[29].w[0] + 12u), c.f[0]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 18;
L_002DAB70:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAB94; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.budget -= 6;
L_002DAB94:
    c.r[2].d[0] = c.r[17].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAC38; } }
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DABD4; } }
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DACA4; } }
L_002DABD4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[4] = ld32((c.r[5].w[0] - 4624u));
    c.f[3] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    set32(c.r[6], c.f[4]);
    set32(c.r[2], c.f[3]);
    set32(c.r[3], c.f[2]);
    set32(c.r[4], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    c.f[1] = fp::mul(c.f[1], c.f[27]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    c.budget -= 25;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DACA0; } }
L_002DAC38:
    c.r[2].d[0] = c.r[17].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DACA4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[4] = ld32((c.r[5].w[0] - 4624u));
    c.f[3] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    set32(c.r[6], c.f[4]);
    set32(c.r[2], c.f[3]);
    set32(c.r[3], c.f[2]);
    set32(c.r[4], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    c.f[1] = fp::mul(c.f[1], c.f[27]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[5].w[0]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    c.budget -= 23;
L_002DACA0:
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 1;
L_002DACA4:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DACE4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[27]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[25]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAD24; } }
L_002DACE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAD28; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    c.f[1] = c.f[21] ^ fp::kSign;
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[27]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[25]);
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.budget -= 12;
L_002DAD24:
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 1;
L_002DAD28:
    c.r[2].d[0] = c.r[17].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAD7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] - 4608u));
    set32(c.r[5], c.r[5].w[0] - 4608u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[6], c.f[2]);
    set32(c.r[2], c.f[3]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 18;
L_002DAD7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAD9C; } }
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 4;
L_002DAD9C:
    c.r[2].d[0] = c.r[17].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DADBC; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 5;
L_002DADBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAEA8; } }
    c.f[2] = ld32((c.r[16].w[0] + 168u));
    c.f[4] = ld32((c.r[16].w[0] + 172u));
    c.f[2] = fp::mul(c.f[2], c.f[26]);
    c.f[3] = ld32((c.r[16].w[0] + 176u));
    c.f[5] = ld32((c.r[16].w[0] + 156u));
    c.f[4] = fp::mul(c.f[4], c.f[26]);
    c.f[3] = fp::mul(c.f[3], c.f[26]);
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[5] = fp::add(c.f[5], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[29]) < fp::key(c.f[5]));
    st32((c.r[16].w[0] + 156u), c.f[5]);
    st32((c.r[16].w[0] + 160u), c.f[1]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAE20; } }
    c.f[0] = fp::sub(c.f[5], c.f[24]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAE34; } }
L_002DAE20:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[28]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAE38; } }
    c.f[0] = fp::add(c.f[5], c.f[24]);
    c.budget -= 1;
L_002DAE34:
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.budget -= 1;
L_002DAE38:
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[29]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAE58; } }
    c.f[0] = fp::sub(c.f[0], c.f[24]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAE6C; } }
L_002DAE58:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[28]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAE70; } }
    c.f[0] = fp::add(c.f[0], c.f[24]);
    c.budget -= 1;
L_002DAE6C:
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_002DAE70:
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[29]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAE90; } }
    c.f[0] = fp::sub(c.f[0], c.f[24]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAEA4; } }
L_002DAE90:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[28]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAEA8; } }
    c.f[0] = fp::add(c.f[0], c.f[24]);
    c.budget -= 1;
L_002DAEA4:
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.budget -= 1;
L_002DAEA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAF24; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 129u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 130u));
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 16;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002DAEF4u);  goto L_002DAEF8; }
L_002DAEF8:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
L_002DAF24:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[8], c.r[19].w[0] + 24u);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    set32(c.r[7], c.r[19].w[0] + 64u);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAF70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 53248ull;
    c.budget -= 3;
L_002DAF58:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAF58u | kUnwind; return; } goto L_002DAF58; } }
L_002DAF70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 53280ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 16u);
    c.r[3].d[0] = c.r[20].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 53376ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 53264ull;
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[3], 0u + 256u);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 20;
L_002DAFC0:
    set32(c.r[19], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB000; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 2;
L_002DAFE8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAFE8u | kUnwind; return; } goto L_002DAFE8; } }
L_002DB000:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA7A8u | kUnwind; return; } goto L_002DA7A8; } }
L_002DB00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DB030; } }
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB04C; } }
L_002DB030:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002DB04C:
    c.f[0] = ld32((c.r[19].w[0] + 184u));
    c.f[1] = ld32((c.r[19].w[0] + 188u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 3u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB0A8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0A0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DB0A0u) [[unlikely]] return; }
L_002DB0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB8DC; } }
L_002DB0A8:
    set32(c.r[16], c.r[19].w[0] + 64u);
    set32(c.r[17], ld32((c.r[16].w[0] + 140u)));
    c.r[2].d[0] = c.r[17].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB1DC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 134u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DB108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.f[22] = c.f[2];
    c.r[2].d[0] = c.r[2].d[0] | 65466ull;
    c.f[21] = 0u;
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB1E4; } }
L_002DB108:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB168; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DB148; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB164; } }
L_002DB148:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002DB164:
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.budget -= 1;
L_002DB168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 23016u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DB18C; } }
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB1A8; } }
L_002DB18C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::add(c.f[4], c.f[4]);
    c.budget -= 7;
L_002DB1A8:
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 124u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 21u, c.f[4], c.f[1]);
    c.f[22] = fp::sub(c.f[3], c.f[21]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB1E4; } }
L_002DB1DC:
    c.f[21] = c.f[3];
    c.f[22] = fp::sub(c.f[2], c.f[21]);
    c.budget -= 2;
L_002DB1E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB284; } }
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6] = c.vu0.vf[1];
    mmi::prot3w(c.r[6], c.r[6]);
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.f[20] = c.r[6].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB214u);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D7458u; return; } if (c.pc != 0x002DB214u) [[unlikely]] return; }
L_002DB214:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB284; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB234u);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D7458u; return; } if (c.pc != 0x002DB234u) [[unlikely]] return; }
L_002DB234:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[16].w[0] + 192u) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[4] = c.r[2];
    vu::mr32(c.vu0, 15u, 4u, 4u);
    vu::mr32(c.vu0, 15u, 4u, 4u);
    vu::mr32(c.vu0, 4u, 1u, 4u);
    vu::mul(c.vu0, 15u, 3u, 3u, 2u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB284; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 244u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 404u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB284u) [[unlikely]] return; }
L_002DB284:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB3F4; } }
    ld128((c.r[16].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[8], c.f[21]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 1u, 2u, 1u);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB3F4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 135u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::mul(c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB3AC; } }
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 23016u)));
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0]));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[6], c.f[3]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[0]);
    set32(c.r[5], c.f[1]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[5], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st32((c.r[29].w[0] + 12u), c.f[1]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002DB354; } }
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB370; } }
L_002DB354:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002DB370:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[16].w[0] + 120u), c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB3F4; } }
L_002DB3AC:
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0]));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[6], c.f[3]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st32((c.r[29].w[0] + 12u), c.f[0]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 18;
L_002DB3F4:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB418; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.budget -= 6;
L_002DB418:
    c.r[2].d[0] = c.r[17].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB4CC; } }
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB458; } }
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DB548; } }
L_002DB458:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 138u));
    set32(c.r[2], c.r[3].w[0] - 4624u);
    c.f[4] = ld32((c.r[3].w[0] - 4624u));
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[5] = c.r[1].w[0];
    set32(c.r[5], c.f[4]);
    set32(c.r[6], c.f[2]);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    mmi::pextlw(c.r[8], c.r[6], c.r[5]);
    mmi::pextlw(c.r[9], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    c.budget -= 29;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB544; } }
L_002DB4CC:
    c.r[2].d[0] = c.r[17].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB548; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 138u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[3].w[0] - 4624u);
    c.f[4] = ld32((c.r[3].w[0] - 4624u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[5] = c.r[1].w[0];
    set32(c.r[4], c.f[4]);
    set32(c.r[5], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    mmi::pextlw(c.r[8], c.r[5], c.r[4]);
    mmi::pextlw(c.r[9], c.r[2], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.budget -= 27;
L_002DB544:
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    c.budget -= 1;
L_002DB548:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB59C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB5F0; } }
L_002DB59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB5F4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    c.f[1] = c.f[21] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    c.budget -= 17;
L_002DB5F0:
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 1;
L_002DB5F4:
    c.r[2].d[0] = c.r[17].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB644; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[3].w[0] - 4608u);
    c.f[3] = ld32((c.r[3].w[0] - 4608u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.f[3]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    set32(c.r[6], c.f[2]);
    mmi::pextlw(c.r[8], c.r[4], c.r[3]);
    mmi::pextlw(c.r[9], c.r[6], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    c.budget -= 17;
L_002DB644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB664; } }
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 4;
L_002DB664:
    c.r[2].d[0] = c.r[17].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB690; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 8;
L_002DB690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB844; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[4] = ld32((c.r[16].w[0] + 172u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 176u));
    c.f[5] = ld32((c.r[16].w[0] + 156u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.f[5] = fp::add(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    st32((c.r[16].w[0] + 156u), c.f[5]);
    st32((c.r[16].w[0] + 160u), c.f[2]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB71C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB750; } }
L_002DB71C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB754; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[5], c.f[0]);
    c.budget -= 5;
L_002DB750:
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.budget -= 1;
L_002DB754:
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB794; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB7C8; } }
L_002DB794:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB7CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_002DB7C8:
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_002DB7CC:
    c.f[1] = ld32((c.r[16].w[0] + 164u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB80C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB840; } }
L_002DB80C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DB844; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_002DB840:
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.budget -= 1;
L_002DB844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB8CC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 129u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 130u));
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 19;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002DB89Cu);  goto L_002DB8A0; }
L_002DB8A0:
    c.f[3] = fp::mul(c.f[21], c.f[1]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
L_002DB8CC:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 4;
L_002DB8DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 54272ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB918; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 3;
L_002DB900:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB900u | kUnwind; return; } goto L_002DB900; } }
L_002DB918:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 53248ull;
    c.budget -= 2;
L_002DB920:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB920u | kUnwind; return; } goto L_002DB920; } }
L_002DB938:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[29] = ld32((c.r[29].w[0] + 280u));
    c.f[28] = ld32((c.r[29].w[0] + 272u));
    c.f[27] = ld32((c.r[29].w[0] + 264u));
    c.f[26] = ld32((c.r[29].w[0] + 256u));
    c.f[25] = ld32((c.r[29].w[0] + 248u));
    c.f[24] = ld32((c.r[29].w[0] + 240u));
    c.f[23] = ld32((c.r[29].w[0] + 232u));
    c.f[22] = ld32((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DB998:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 19000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9DCu);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002DB9DCu) [[unlikely]] return; }
L_002DB9DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DBC28; } }
    c.f[20] = 0u;
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_002DB9F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBA18; } }
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DBA18; } }
    st32((c.r[17].w[0] + 356u), c.r[22].w[0]);
    c.budget -= 1;
L_002DBA18:
    set32(c.r[16], c.r[17].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA2Cu);  if (depth < kMaxDepth) unit_0077(c, 2u, depth + 1u); else { c.pc = 0x002DC010u; return; } if (c.pc != 0x002DBA2Cu) [[unlikely]] return; }
L_002DBA2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBA44; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBAC4; } }
L_002DBA44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA50u);  if (depth < kMaxDepth) unit_0075(c, 108u, depth + 1u); else { c.pc = 0x002D5BC8u; return; } if (c.pc != 0x002DBA50u) [[unlikely]] return; }
L_002DBA50:
    ld128((c.r[17].w[0] + 400u) & ~15u, c.r[4]);
    c.f[12] = c.f[0];
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA64u);  if (depth < kMaxDepth) unit_004B(c, 20u, depth + 1u); else { c.pc = 0x0022C7A8u; return; } if (c.pc != 0x002DBA64u) [[unlikely]] return; }
L_002DBA64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBAA8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DBAA8; } }
L_002DBA78:
    set32(c.r[2], ld32((c.r[5].w[0] + 308u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA9Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002DBA9Cu) [[unlikely]] return; }
L_002DBA9C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBA78u | kUnwind; return; } goto L_002DBA78; } }
L_002DBAA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBC10; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBC10; } }
L_002DBAC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAD0u);  if (depth < kMaxDepth) unit_0075(c, 120u, depth + 1u); else { c.pc = 0x002D6598u; return; } if (c.pc != 0x002DBAD0u) [[unlikely]] return; }
L_002DBAD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBADCu);  if (depth < kMaxDepth) unit_0075(c, 108u, depth + 1u); else { c.pc = 0x002D5BC8u; return; } if (c.pc != 0x002DBADCu) [[unlikely]] return; }
L_002DBADC:
    ld128((c.r[17].w[0] + 400u) & ~15u, c.r[4]);
    c.f[12] = c.f[0];
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAF0u);  if (depth < kMaxDepth) unit_004B(c, 20u, depth + 1u); else { c.pc = 0x0022C7A8u; return; } if (c.pc != 0x002DBAF0u) [[unlikely]] return; }
L_002DBAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBC10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBC10; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBB84; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBB84; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBB48; } }
    c.f[0] = ld32((c.r[18].w[0] + 236u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBB84; } }
L_002DBB48:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBB84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBB88; } }
L_002DBB84:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DBB88:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DBC10; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 46u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DBC10; } }
    set32(c.r[20], 0u + 12345u);
    c.budget -= 2;
L_002DBBA8:
    set32(c.r[4], c.r[21].w[0] + 420u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBC0u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x002DBBC0u) [[unlikely]] return; }
L_002DBBC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DBBFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBF8u);  if (depth < kMaxDepth) unit_0075(c, 45u, depth + 1u); else { c.pc = 0x002D4880u; return; } if (c.pc != 0x002DBBF8u) [[unlikely]] return; }
L_002DBBF8:
    st32((c.r[16].w[0] + 100u), c.r[20].w[0]);
    c.budget -= 1;
L_002DBBFC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 46u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBBA8u | kUnwind; return; } goto L_002DBBA8; } }
L_002DBC10:
    set32(c.r[4], c.r[23].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC1Cu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002DBC1Cu) [[unlikely]] return; }
L_002DBC1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB9F0u | kUnwind; return; } goto L_002DB9F0; } }
L_002DBC28:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DBC60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 27936u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DBCAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DBCB8; } }
L_002DBCAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBE50; } }
L_002DBCB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 3716u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DBD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCD0u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002DBCD0u) [[unlikely]] return; }
L_002DBCD0:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCECu);  if (depth < kMaxDepth) unit_0075(c, 170u, depth + 1u); else { c.pc = 0x002D7478u; return; } if (c.pc != 0x002DBCECu) [[unlikely]] return; }
L_002DBCEC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCFCu);  if (depth < kMaxDepth) unit_0075(c, 172u, depth + 1u); else { c.pc = 0x002D74A0u; return; } if (c.pc != 0x002DBCFCu) [[unlikely]] return; }
L_002DBCFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 46u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 268u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002DBD8C; } }
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], 0u + 12345u);
    c.budget -= 2;
L_002DBD28:
    set32(c.r[4], c.r[17].w[0] + 420u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD40u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x002DBD40u) [[unlikely]] return; }
L_002DBD40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DBD7C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD78u);  if (depth < kMaxDepth) unit_0075(c, 45u, depth + 1u); else { c.pc = 0x002D4880u; return; } if (c.pc != 0x002DBD78u) [[unlikely]] return; }
L_002DBD78:
    st32((c.r[16].w[0] + 100u), c.r[22].w[0]);
    c.budget -= 1;
L_002DBD7C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBD28u | kUnwind; return; } goto L_002DBD28; } }
L_002DBD8C:
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBE50; } }
L_002DBD98:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDB0u);  if (depth < kMaxDepth) unit_0075(c, 114u, depth + 1u); else { c.pc = 0x002D6000u; return; } if (c.pc != 0x002DBDB0u) [[unlikely]] return; }
L_002DBDB0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDC0u);  if (depth < kMaxDepth) unit_0075(c, 170u, depth + 1u); else { c.pc = 0x002D7478u; return; } if (c.pc != 0x002DBDC0u) [[unlikely]] return; }
L_002DBDC0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDD0u);  if (depth < kMaxDepth) unit_0075(c, 172u, depth + 1u); else { c.pc = 0x002D74A0u; return; } if (c.pc != 0x002DBDD0u) [[unlikely]] return; }
L_002DBDD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002DBE4C; } }
    set32(c.r[19], 0u + 12345u);
    c.budget -= 2;
L_002DBDE8:
    set32(c.r[4], c.r[17].w[0] + 420u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE00u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x002DBE00u) [[unlikely]] return; }
L_002DBE00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DBE3C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE38u);  if (depth < kMaxDepth) unit_0075(c, 45u, depth + 1u); else { c.pc = 0x002D4880u; return; } if (c.pc != 0x002DBE38u) [[unlikely]] return; }
L_002DBE38:
    st32((c.r[16].w[0] + 100u), c.r[19].w[0]);
    c.budget -= 1;
L_002DBE3C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBDE8u | kUnwind; return; } goto L_002DBDE8; } }
L_002DBE4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DBE50:
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
L_002DBE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[16].w[0] - 3736u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBED0; } }
    c.f[12] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 4608u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEC8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002DBEC8u) [[unlikely]] return; }
L_002DBEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBFF4; } }
L_002DBED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 3720u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002DBEECu);  goto L_002DBEF0; }
L_002DBEF0:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DBF60; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF08u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002DBF08u) [[unlikely]] return; }
L_002DBF08:
    set32(c.r[3], ld32((c.r[16].w[0] - 3736u)));
    c.r[4].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002DBF18u);  goto L_002DBF1C; }
L_002DBF1C:
    c.r[5].d[0] = c.hi.d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] - 3732u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF38u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002DBF38u) [[unlikely]] return; }
L_002DBF38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 3724u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002DBF4Cu);  goto L_002DBF50; }
L_002DBF50:
    set32(c.r[2], ld32((c.r[6].w[0] - 3728u)));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[18].w[0] - 3720u), c.r[2].w[0]);
    c.budget -= 4;
L_002DBF60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[17].w[0] - 3732u));
    c.f[5] = ld32((c.r[5].w[0] - 3712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] - 3740u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[3].w[0] - 3752u));
    c.f[3] = ld32((c.r[2].w[0] - 3748u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] - 3744u));
    c.f[0] = 0u;
    set32(c.r[2], c.f[4]);
    set32(c.r[3], c.f[3]);
    set32(c.r[4], c.f[2]);
    set32(c.r[6], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[6], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 1u, 1u, 0u, c.vu0.vf[1].w[3]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4608u);
    st32((c.r[5].w[0] - 3712u), c.f[1]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 37;
L_002DBFF4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.budget -= 3;
    [[clang::musttail]] return unit_0077(c, 1u, depth);
}

}
