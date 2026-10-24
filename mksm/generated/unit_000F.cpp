#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0013CD80;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_000F[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0,
    0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0,
    0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242,
    0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292,
    0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0,
    0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0,
};

void unit_000F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0013C000;
    case 2u: goto L_0013C008;
    case 3u: goto L_0013C020;
    case 4u: goto L_0013C050;
    case 5u: goto L_0013C074;
    case 6u: goto L_0013C08C;
    case 7u: goto L_0013C094;
    case 8u: goto L_0013C100;
    case 9u: goto L_0013C118;
    case 10u: goto L_0013C130;
    case 11u: goto L_0013C148;
    case 12u: goto L_0013C1A4;
    case 13u: goto L_0013C1AC;
    case 14u: goto L_0013C1B0;
    case 15u: goto L_0013C1F4;
    case 16u: goto L_0013C218;
    case 17u: goto L_0013C2E8;
    case 18u: goto L_0013C30C;
    case 19u: goto L_0013C34C;
    case 20u: goto L_0013C380;
    case 21u: goto L_0013C4DC;
    case 22u: goto L_0013C4F4;
    case 23u: goto L_0013C50C;
    case 24u: goto L_0013C534;
    case 25u: goto L_0013C60C;
    case 26u: goto L_0013C724;
    case 27u: goto L_0013C730;
    case 28u: goto L_0013C744;
    case 29u: goto L_0013C754;
    case 30u: goto L_0013C774;
    case 31u: goto L_0013C78C;
    case 32u: goto L_0013C7A0;
    case 33u: goto L_0013C7B4;
    case 34u: goto L_0013C814;
    case 35u: goto L_0013C830;
    case 36u: goto L_0013C848;
    case 37u: goto L_0013C8B4;
    case 38u: goto L_0013C90C;
    case 39u: goto L_0013C938;
    case 40u: goto L_0013C954;
    case 41u: goto L_0013C998;
    case 42u: goto L_0013C9D8;
    case 43u: goto L_0013C9F0;
    case 44u: goto L_0013CA94;
    case 45u: goto L_0013CAE8;
    case 46u: goto L_0013CB14;
    case 47u: goto L_0013CB3C;
    case 48u: goto L_0013CC14;
    case 49u: goto L_0013CC3C;
    case 50u: goto L_0013CC54;
    case 51u: goto L_0013CCA8;
    case 52u: goto L_0013CCE8;
    case 53u: goto L_0013CCF4;
    case 54u: goto L_0013CD80;
    case 55u: goto L_0013CDC0;
    case 56u: goto L_0013CE40;
    case 57u: goto L_0013CED0;
    case 58u: goto L_0013CFCC;
    case 59u: goto L_0013D028;
    case 60u: goto L_0013D054;
    case 61u: goto L_0013D0AC;
    case 62u: goto L_0013D0F8;
    case 63u: goto L_0013D154;
    case 64u: goto L_0013D180;
    case 65u: goto L_0013D1D8;
    case 66u: goto L_0013D238;
    case 67u: goto L_0013D2D0;
    case 68u: goto L_0013D2E4;
    case 69u: goto L_0013D2EC;
    case 70u: goto L_0013D300;
    case 71u: goto L_0013D340;
    case 72u: goto L_0013D360;
    case 73u: goto L_0013D3CC;
    case 74u: goto L_0013D4D8;
    case 75u: goto L_0013D4F8;
    case 76u: goto L_0013D570;
    case 77u: goto L_0013D5C4;
    case 78u: goto L_0013D5F8;
    case 79u: goto L_0013D610;
    case 80u: goto L_0013D618;
    case 81u: goto L_0013D638;
    case 82u: goto L_0013D694;
    case 83u: goto L_0013D6A0;
    case 84u: goto L_0013D6A8;
    case 85u: goto L_0013D6B0;
    case 86u: goto L_0013D6C0;
    case 87u: goto L_0013D6E0;
    case 88u: goto L_0013D6F0;
    case 89u: goto L_0013D708;
    case 90u: goto L_0013D748;
    case 91u: goto L_0013D820;
    case 92u: goto L_0013D830;
    case 93u: goto L_0013D8C0;
    case 94u: goto L_0013D92C;
    case 95u: goto L_0013D9C0;
    case 96u: goto L_0013DACC;
    case 97u: goto L_0013DAE8;
    case 98u: goto L_0013DB88;
    case 99u: goto L_0013DBF0;
    case 100u: goto L_0013DC44;
    case 101u: goto L_0013DC88;
    case 102u: goto L_0013DCC0;
    case 103u: goto L_0013DCD8;
    case 104u: goto L_0013DD80;
    case 105u: goto L_0013DD9C;
    case 106u: goto L_0013DDC0;
    case 107u: goto L_0013DDF4;
    case 108u: goto L_0013DE10;
    case 109u: goto L_0013DE2C;
    case 110u: goto L_0013DED8;
    case 111u: goto L_0013DF30;
    case 112u: goto L_0013DF40;
    case 113u: goto L_0013DF5C;
    case 114u: goto L_0013DF70;
    case 115u: goto L_0013DF78;
    case 116u: goto L_0013DF98;
    case 117u: goto L_0013DFB8;
    case 118u: goto L_0013E040;
    case 119u: goto L_0013E06C;
    case 120u: goto L_0013E090;
    case 121u: goto L_0013E0E0;
    case 122u: goto L_0013E174;
    case 123u: goto L_0013E190;
    case 124u: goto L_0013E21C;
    case 125u: goto L_0013E250;
    case 126u: goto L_0013E268;
    case 127u: goto L_0013E294;
    case 128u: goto L_0013E2B0;
    case 129u: goto L_0013E2F0;
    case 130u: goto L_0013E374;
    case 131u: goto L_0013E380;
    case 132u: goto L_0013E38C;
    case 133u: goto L_0013E398;
    case 134u: goto L_0013E3A4;
    case 135u: goto L_0013E3B0;
    case 136u: goto L_0013E3BC;
    case 137u: goto L_0013E3C8;
    case 138u: goto L_0013E3D4;
    case 139u: goto L_0013E3E0;
    case 140u: goto L_0013E3EC;
    case 141u: goto L_0013E3F8;
    case 142u: goto L_0013E404;
    case 143u: goto L_0013E410;
    case 144u: goto L_0013E41C;
    case 145u: goto L_0013E434;
    case 146u: goto L_0013E444;
    case 147u: goto L_0013E4C8;
    case 148u: goto L_0013E4E8;
    case 149u: goto L_0013E594;
    case 150u: goto L_0013E5D4;
    case 151u: goto L_0013E604;
    case 152u: goto L_0013E62C;
    case 153u: goto L_0013E664;
    case 154u: goto L_0013E698;
    case 155u: goto L_0013E6C0;
    case 156u: goto L_0013E6F4;
    case 157u: goto L_0013E724;
    case 158u: goto L_0013E754;
    case 159u: goto L_0013E798;
    case 160u: goto L_0013E82C;
    case 161u: goto L_0013E864;
    case 162u: goto L_0013E878;
    case 163u: goto L_0013E890;
    case 164u: goto L_0013E8D4;
    case 165u: goto L_0013E8F0;
    case 166u: goto L_0013E914;
    case 167u: goto L_0013E928;
    case 168u: goto L_0013E934;
    case 169u: goto L_0013E948;
    case 170u: goto L_0013E968;
    case 171u: goto L_0013E9B8;
    case 172u: goto L_0013E9F0;
    case 173u: goto L_0013EA34;
    case 174u: goto L_0013EA5C;
    case 175u: goto L_0013EA7C;
    case 176u: goto L_0013EA84;
    case 177u: goto L_0013EA8C;
    case 178u: goto L_0013EA9C;
    case 179u: goto L_0013EAA4;
    case 180u: goto L_0013EAAC;
    case 181u: goto L_0013EAE8;
    case 182u: goto L_0013EB50;
    case 183u: goto L_0013EB78;
    case 184u: goto L_0013EB88;
    case 185u: goto L_0013EB9C;
    case 186u: goto L_0013EBAC;
    case 187u: goto L_0013EBBC;
    case 188u: goto L_0013EBE8;
    case 189u: goto L_0013EC00;
    case 190u: goto L_0013EC10;
    case 191u: goto L_0013EC20;
    case 192u: goto L_0013EC38;
    case 193u: goto L_0013EC68;
    case 194u: goto L_0013EC98;
    case 195u: goto L_0013ECA4;
    case 196u: goto L_0013ECB8;
    case 197u: goto L_0013ECC8;
    case 198u: goto L_0013ECD8;
    case 199u: goto L_0013ECF0;
    case 200u: goto L_0013ED10;
    case 201u: goto L_0013ED18;
    case 202u: goto L_0013ED20;
    case 203u: goto L_0013ED2C;
    case 204u: goto L_0013ED3C;
    case 205u: goto L_0013ED44;
    case 206u: goto L_0013ED4C;
    case 207u: goto L_0013ED60;
    case 208u: goto L_0013ED84;
    case 209u: goto L_0013ED90;
    case 210u: goto L_0013EDA8;
    case 211u: goto L_0013EDC0;
    case 212u: goto L_0013EDF8;
    case 213u: goto L_0013EE10;
    case 214u: goto L_0013EE28;
    case 215u: goto L_0013EE40;
    case 216u: goto L_0013EE78;
    case 217u: goto L_0013EE88;
    case 218u: goto L_0013EEB0;
    case 219u: goto L_0013EED0;
    case 220u: goto L_0013EEE8;
    case 221u: goto L_0013EF10;
    case 222u: goto L_0013EF2C;
    case 223u: goto L_0013EF48;
    case 224u: goto L_0013EF88;
    case 225u: goto L_0013EFA8;
    case 226u: goto L_0013F008;
    case 227u: goto L_0013F028;
    case 228u: goto L_0013F030;
    case 229u: goto L_0013F040;
    case 230u: goto L_0013F06C;
    case 231u: goto L_0013F078;
    case 232u: goto L_0013F084;
    case 233u: goto L_0013F090;
    case 234u: goto L_0013F09C;
    case 235u: goto L_0013F0A8;
    case 236u: goto L_0013F0B4;
    case 237u: goto L_0013F0C0;
    case 238u: goto L_0013F0CC;
    case 239u: goto L_0013F0D8;
    case 240u: goto L_0013F0E4;
    case 241u: goto L_0013F0F0;
    case 242u: goto L_0013F0FC;
    case 243u: goto L_0013F108;
    case 244u: goto L_0013F114;
    case 245u: goto L_0013F120;
    case 246u: goto L_0013F130;
    case 247u: goto L_0013F148;
    case 248u: goto L_0013F158;
    case 249u: goto L_0013F170;
    case 250u: goto L_0013F180;
    case 251u: goto L_0013F26C;
    case 252u: goto L_0013F2A4;
    case 253u: goto L_0013F2C8;
    case 254u: goto L_0013F2E0;
    case 255u: goto L_0013F310;
    case 256u: goto L_0013F420;
    case 257u: goto L_0013F430;
    case 258u: goto L_0013F440;
    case 259u: goto L_0013F494;
    case 260u: goto L_0013F4D0;
    case 261u: goto L_0013F4F8;
    case 262u: goto L_0013F51C;
    case 263u: goto L_0013F548;
    case 264u: goto L_0013F594;
    case 265u: goto L_0013F5A8;
    case 266u: goto L_0013F5E0;
    case 267u: goto L_0013F5EC;
    case 268u: goto L_0013F600;
    case 269u: goto L_0013F648;
    case 270u: goto L_0013F6A4;
    case 271u: goto L_0013F6C0;
    case 272u: goto L_0013F6D8;
    case 273u: goto L_0013F6E4;
    case 274u: goto L_0013F718;
    case 275u: goto L_0013F71C;
    case 276u: goto L_0013F738;
    case 277u: goto L_0013F790;
    case 278u: goto L_0013F7A4;
    case 279u: goto L_0013F7DC;
    case 280u: goto L_0013F7E8;
    case 281u: goto L_0013F7FC;
    case 282u: goto L_0013F844;
    case 283u: goto L_0013F880;
    case 284u: goto L_0013F898;
    case 285u: goto L_0013F8A0;
    case 286u: goto L_0013F8AC;
    case 287u: goto L_0013F8E0;
    case 288u: goto L_0013F910;
    case 289u: goto L_0013F918;
    case 290u: goto L_0013F950;
    case 291u: goto L_0013F970;
    case 292u: goto L_0013F97C;
    case 293u: goto L_0013F98C;
    case 294u: goto L_0013F994;
    case 295u: goto L_0013F9D0;
    case 296u: goto L_0013FA08;
    case 297u: goto L_0013FA24;
    case 298u: goto L_0013FA48;
    case 299u: goto L_0013FA80;
    case 300u: goto L_0013FA8C;
    case 301u: goto L_0013FAB0;
    case 302u: goto L_0013FAD4;
    case 303u: goto L_0013FAF0;
    case 304u: goto L_0013FB08;
    case 305u: goto L_0013FB1C;
    case 306u: goto L_0013FB24;
    case 307u: goto L_0013FB64;
    case 308u: goto L_0013FB84;
    case 309u: goto L_0013FBBC;
    case 310u: goto L_0013FBC4;
    case 311u: goto L_0013FBE4;
    case 312u: goto L_0013FBEC;
    case 313u: goto L_0013FBFC;
    case 314u: goto L_0013FC04;
    case 315u: goto L_0013FC24;
    case 316u: goto L_0013FC2C;
    case 317u: goto L_0013FC40;
    case 318u: goto L_0013FC60;
    case 319u: goto L_0013FC68;
    case 320u: goto L_0013FC70;
    case 321u: goto L_0013FC90;
    case 322u: goto L_0013FCA0;
    case 323u: goto L_0013FCBC;
    case 324u: goto L_0013FCCC;
    case 325u: goto L_0013FCDC;
    case 326u: goto L_0013FCF4;
    case 327u: goto L_0013FD04;
    case 328u: goto L_0013FD38;
    case 329u: goto L_0013FD44;
    case 330u: goto L_0013FD4C;
    case 331u: goto L_0013FD58;
    case 332u: goto L_0013FD5C;
    case 333u: goto L_0013FD88;
    case 334u: goto L_0013FE98;
    case 335u: goto L_0013FEA8;
    case 336u: goto L_0013FEE0;
    case 337u: goto L_0013FEE8;
    case 338u: goto L_0013FEF4;
    case 339u: goto L_0013FF14;
    case 340u: goto L_0013FF28;
    case 341u: goto L_0013FF48;
    case 342u: goto L_0013FF68;
    case 343u: goto L_0013FF78;
    case 344u: goto L_0013FF8C;
    case 345u: goto L_0013FF94;
    case 346u: goto L_0013FFC8;
    case 347u: goto L_0013FFF0;
    case 348u: goto L_0013FFF8;
    default: bad_entry(c, 0x0013C000u); return;
    }
L_0013C000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C050; } }
L_0013C008:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0013C050; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C020u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C020u) [[unlikely]] return; }
L_0013C020:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 14216u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C050u);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x0013C050u) [[unlikely]] return; }
L_0013C050:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 828u)));
    c.r[2].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CD40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[5].w[0] - 23944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C074u);  if (depth < kMaxDepth) unit_009D(c, 281u, depth + 1u); else { c.pc = 0x00377D48u; return; } if (c.pc != 0x0013C074u) [[unlikely]] return; }
L_0013C074:
    set32(c.r[3], ld32((c.r[2].w[0] + 672u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013CD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C08Cu);  if (depth < kMaxDepth) unit_000E(c, 387u, depth + 1u); else { c.pc = 0x0013B050u; return; } if (c.pc != 0x0013C08Cu) [[unlikely]] return; }
L_0013C08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013C094:
    c.r[3].d[0] = c.r[4].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0013C0BC; } }
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0013C0C8; } }
L_0013C0BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C0CC; } }
L_0013C0C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013C0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013CD40; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 828u)));
    c.r[2].d[0] = c.r[2].sd[0] < 39ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CD40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 17200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C100u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x0013C100u) [[unlikely]] return; }
L_0013C100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C120; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C118u);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x0013C118u) [[unlikely]] return; }
L_0013C118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C148; } }
L_0013C120:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C130u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x0013C130u) [[unlikely]] return; }
L_0013C130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C148; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C148u);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x0013C148u) [[unlikely]] return; }
L_0013C148:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[4].w[0] + 672u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013CD40; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013CD40; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013C180; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 832u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013CD40; } }
L_0013C180:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] - 23944u);
    set32(c.r[21], c.r[20].w[0] + 76u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[22], c.r[20].w[0] + 68u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C1A4u);  if (depth < kMaxDepth) unit_000E(c, 401u, depth + 1u); else { c.pc = 0x0013B228u; return; } if (c.pc != 0x0013C1A4u) [[unlikely]] return; }
L_0013C1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C1ACu);  if (depth < kMaxDepth) unit_000E(c, 387u, depth + 1u); else { c.pc = 0x0013B050u; return; } if (c.pc != 0x0013C1ACu) [[unlikely]] return; }
L_0013C1AC:
    c.budget -= 1;
L_0013C1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[19], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 28u);
    mmi::madd(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C60C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 28u);
    mmi::madd(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C1F4u);  if (depth < kMaxDepth) unit_009D(c, 187u, depth + 1u); else { c.pc = 0x00376E18u; return; } if (c.pc != 0x0013C1F4u) [[unlikely]] return; }
L_0013C1F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013C51C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[20].w[0] + 60u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21976u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C218u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C218u) [[unlikely]] return; }
L_0013C218:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 23944u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] - 14216u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[23].d[0];  if (t) { goto L_0013C290; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C290; } }
    set32(c.r[2], c.r[23].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_0013C290; } }
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[6].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    c.budget -= 5;
L_0013C290:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013C394; } }
    set32(c.r[2], c.r[23].w[0] - c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1944u));
    set32(c.r[19], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[30], c.r[18].w[0] + 6u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[18], c.r[29].w[0] + 24u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C308; } }
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], c.r[2].w[0] - 14216u);
    c.budget -= 4;
L_0013C2E8:
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0013C388; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C2E8u | kUnwind; return; } goto L_0013C2E8; } }
L_0013C308:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0013C30C:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 1944u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 14216u);
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C34Cu);  if (depth < kMaxDepth) unit_000E(c, 410u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x0013C34Cu) [[unlikely]] return; }
L_0013C34C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0] + 24u), c.r[30].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] - 4976u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C380u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013C380u) [[unlikely]] return; }
L_0013C380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C60C; } }
L_0013C388:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C30Cu | kUnwind; return; } goto L_0013C30C; } }
L_0013C394:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 4u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013C3D4; } }
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[4].w[0] - c.r[18].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C424; } }
L_0013C3D4:
    set32(c.r[2], c.r[23].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0013C40C; } }
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C40C; } }
    set32(c.r[6], 0u + 7u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C424; } }
L_0013C40C:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.budget -= 6;
L_0013C424:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 14216u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[10].w[0] - c.r[18].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[11], 0u + 12u);
    set32(c.r[9], c.r[16].w[0] + c.r[17].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[11].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[9].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[18].w[0] + 5u);
    set32(c.r[3], c.r[22].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C48C; } }
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    if (c.r[3].d[0] == 0) c.r[8].d[0] = 0ull;
    c.budget -= 6;
L_0013C48C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0013C4CC; } }
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 840u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 1176u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 832u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C4CC; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_0013C4CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C4DCu);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x0013C4DCu) [[unlikely]] return; }
L_0013C4DC:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[18].w[0] + 6u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C4F4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013C4F4u) [[unlikely]] return; }
L_0013C4F4:
    set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C50Cu);  if (depth < kMaxDepth) unit_000E(c, 410u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x0013C50Cu) [[unlikely]] return; }
L_0013C50C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 4976u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C60C; } }
L_0013C51C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[23].d[0];  if (t) { goto L_0013C60C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C534u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C534u) [[unlikely]] return; }
L_0013C534:
    set32(c.r[3], c.r[20].w[0] + 60u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013C57C; } }
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[4].w[0] - c.r[18].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C5CC; } }
L_0013C57C:
    set32(c.r[2], c.r[23].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0013C5B4; } }
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C5B4; } }
    set32(c.r[6], 0u + 7u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C5CC; } }
L_0013C5B4:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.budget -= 6;
L_0013C5CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], c.r[7].w[0] - 14216u);
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[18].w[0] + 5u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[7], 0u + 12u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[7].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C60Cu);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x0013C60Cu) [[unlikely]] return; }
L_0013C60C:
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C1B0u | kUnwind; return; } goto L_0013C1B0; } }
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_0013C640; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
L_0013C640:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013CA10; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[5], 0u + 5u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0013C680; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013C680; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0013C680:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], 0u + 12u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 6u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C6AC; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0013C6AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[5], 0u + 840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1176u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 832u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C7BC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 832u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C7BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[4].w[0] - 23944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C74C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 24376u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C724u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013C724u) [[unlikely]] return; }
L_0013C724:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C730u);  if (depth < kMaxDepth) unit_000C(c, 151u, depth + 1u); else { c.pc = 0x00131240u; return; } if (c.pc != 0x0013C730u) [[unlikely]] return; }
L_0013C730:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C744u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0013C744u) [[unlikely]] return; }
L_0013C744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013C74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C754u);  if (depth < kMaxDepth) unit_000B(c, 202u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0013C754u) [[unlikely]] return; }
L_0013C754:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[16], c.r[5].w[0] + 17200u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C774u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013C774u) [[unlikely]] return; }
L_0013C774:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14688u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C78Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013C78Cu) [[unlikely]] return; }
L_0013C78C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7A0u);  if (depth < kMaxDepth) unit_0071(c, 300u, depth + 1u); else { c.pc = 0x002C7248u; return; } if (c.pc != 0x0013C7A0u) [[unlikely]] return; }
L_0013C7A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7B4u);  if (depth < kMaxDepth) unit_0071(c, 300u, depth + 1u); else { c.pc = 0x002C7248u; return; } if (c.pc != 0x0013C7B4u) [[unlikely]] return; }
L_0013C7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013C7BC:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u + 840u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[8].w[0] + 1176u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 832u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C87C; } }
    set32(c.r[18], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[17], c.r[20].w[0] + 80u);
    set32(c.r[2], 0u + 372u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[16], 0u + 350u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[19], 0u + 1u);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C814u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013C814u) [[unlikely]] return; }
L_0013C814:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 190u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C830u);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x0013C830u) [[unlikely]] return; }
L_0013C830:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C848u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013C848u) [[unlikely]] return; }
L_0013C848:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 460u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CC80; } }
L_0013C87C:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 832u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C95C; } }
    set32(c.r[18], 0u + 12u);
    set32(c.r[17], c.r[20].w[0] + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], 0u + 350u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C8B4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013C8B4u) [[unlikely]] return; }
L_0013C8B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 190u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], 0u + 348u);
    set32(c.r[7], 0u + 72u);
    set32(c.r[8], 0u + 2u);
    c.f[13] = c.f[12];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.f[15] = c.f[14];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C90Cu);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012D248u; return; } if (c.pc != 0x0013C90Cu) [[unlikely]] return; }
L_0013C90C:
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[4], 0u + 372u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C938u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013C938u) [[unlikely]] return; }
L_0013C938:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 460u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C954u);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x0013C954u) [[unlikely]] return; }
L_0013C954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013C95C:
    set32(c.r[17], 0u + 12u);
    set32(c.r[16], c.r[20].w[0] + 80u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[21] = c.r[1].w[0];
    set32(c.r[18], 0u + 6u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C998u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013C998u) [[unlikely]] return; }
L_0013C998:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 190u);
    set32(c.r[6], 0u + 348u);
    set32(c.r[7], 0u + 72u);
    set32(c.r[8], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.f[14] = c.f[21];
    c.f[15] = c.f[21];
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C9D8u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012D248u; return; } if (c.pc != 0x0013C9D8u) [[unlikely]] return; }
L_0013C9D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C9F0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013C9F0u) [[unlikely]] return; }
L_0013C9F0:
    c.f[12] = c.f[20];
    c.f[14] = c.f[21];
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[5], 0u + 460u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CC80; } }
L_0013CA10:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_0013CA28; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_0013CA28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013CB74; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[19], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013CA54; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0013CA54:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[7], 0u + 840u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] + 1176u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 832u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013CB44; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[20].w[0] + 80u);
    set32(c.r[16], 0u + 350u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CA94u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CA94u) [[unlikely]] return; }
L_0013CA94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.f[12];
    set32(c.r[5], 0u + 190u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u + 348u);
    set32(c.r[7], 0u + 72u);
    set32(c.r[8], 0u + 2u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.f[15] = c.f[14];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CAE8u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012D248u; return; } if (c.pc != 0x0013CAE8u) [[unlikely]] return; }
L_0013CAE8:
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[4], 0u + 372u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB14u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CB14u) [[unlikely]] return; }
L_0013CB14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 460u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB3Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013CB3Cu) [[unlikely]] return; }
L_0013CB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013CB44:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013CD40; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CCD8; } }
L_0013CB74:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0013CB90; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 4;
L_0013CB90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013CCFC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[19], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013CBBC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0013CBBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[7], 0u + 840u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] + 1176u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 832u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013CCB0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[17], c.r[20].w[0] + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 372u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[16], 0u + 350u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC14u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CC14u) [[unlikely]] return; }
L_0013CC14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 80u);
    c.f[13] = c.f[12];
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 190u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC3Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013CC3Cu) [[unlikely]] return; }
L_0013CC3C:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC54u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CC54u) [[unlikely]] return; }
L_0013CC54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 460u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 11;
L_0013CC80:
    set32(c.r[6], 0u + 348u);
    set32(c.r[7], 0u + 72u);
    set32(c.r[8], 0u + 2u);
    c.f[13] = c.f[12];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.f[15] = c.f[14];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCA8u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012D248u; return; } if (c.pc != 0x0013CCA8u) [[unlikely]] return; }
L_0013CCA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013CCB0:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0013CD40; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 40u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 7;
L_0013CCD8:
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCE8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013CCE8u) [[unlikely]] return; }
L_0013CCE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCF4u);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x0013CCF4u) [[unlikely]] return; }
L_0013CCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD40; } }
L_0013CCFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013CD20; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0013CD20:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013CD40; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0013CD40:
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
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013CD80:
    if (::decomp::hook_0013CD80.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0013CD80, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CDC0u);  if (depth < kMaxDepth) unit_000B(c, 191u, depth + 1u); else { c.pc = 0x0012E2E8u; return; } if (c.pc != 0x0013CDC0u) [[unlikely]] return; }
L_0013CDC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 832u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013E008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 23944u);
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013CF24; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CF24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013CE94; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], 0u + 350u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], 0u + 80u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 127u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 348u);
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE40u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CE40u) [[unlikely]] return; }
L_0013CE40:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013CE60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 3;
L_0013CE60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013CE7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 3;
L_0013CE7C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D0A0; } }
L_0013CE94:
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], 0u + 372u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], 0u + 80u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 127u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 370u);
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CED0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CED0u) [[unlikely]] return; }
L_0013CED0:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013CEF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 3;
L_0013CEF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013CF0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 3;
L_0013CF0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D0A0; } }
L_0013CF24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] - 23944u);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013CF54; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0013CF60; } }
L_0013CF54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CF64; } }
L_0013CF60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013CF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D1D8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013D1D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013D0B4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[23], 0u + 12u);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[20], c.r[19].w[0] + 80u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], 0u + 350u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[22], 0u + 348u);
    set32(c.r[16], 0u + 80u);
    set32(c.r[21], 0u + 127u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[21].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[22].d[0];
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CFCCu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013CFCCu) [[unlikely]] return; }
L_0013CFCC:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013CFEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 3;
L_0013CFEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D008; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 3;
L_0013D008:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 190u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[17], 0u + 350u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D028u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013D028u) [[unlikely]] return; }
L_0013D028:
    set32(c.r[16], 0u + 80u);
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[21].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[22].d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D054u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013D054u) [[unlikely]] return; }
L_0013D054:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D074; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 3;
L_0013D074:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D090; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 3;
L_0013D090:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 460u);
    c.budget -= 4;
L_0013D0A0:
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D0ACu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013D0ACu) [[unlikely]] return; }
L_0013D0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D1D8; } }
L_0013D0B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[23], 0u + 12u);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[20], c.r[19].w[0] + 80u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], 0u + 372u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[22], 0u + 370u);
    set32(c.r[16], 0u + 80u);
    set32(c.r[21], 0u + 127u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[21].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[22].d[0];
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D0F8u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013D0F8u) [[unlikely]] return; }
L_0013D0F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D118; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 3;
L_0013D118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D134; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 3;
L_0013D134:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 190u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[17], 0u + 372u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D154u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013D154u) [[unlikely]] return; }
L_0013D154:
    set32(c.r[16], 0u + 80u);
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[21].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[22].d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D180u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013D180u) [[unlikely]] return; }
L_0013D180:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D1A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 3;
L_0013D1A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0013D1BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 3;
L_0013D1BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 460u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D1D8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013D1D8u) [[unlikely]] return; }
L_0013D1D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] - 23944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013D6C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14336u)));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013D6C8; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D3A0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D3A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D238u) [[unlikely]] return; }
L_0013D238:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], c.r[19].w[0] + 76u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 6460u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D27C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D284; } }
L_0013D27C:
    set32(c.r[2], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_0013D284:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0013D310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6460u)));
    set32(c.r[9], 0u + 12u);
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 9;
L_0013D2D0:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 194u);
    c.r[10].d[0] = c.r[31].d[0] | 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D2E4u); set32(c.r[4], 0u);  if (depth < kMaxDepth) unit_0099(c, 131u, depth + 1u); else { c.pc = 0x00365958u; return; } if (c.pc != 0x0013D2E4u) [[unlikely]] return; }
L_0013D2E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[10].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013D2EC:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 142u);
    c.r[10].d[0] = c.r[31].d[0] | 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D300u); set32(c.r[4], 0u);  if (depth < kMaxDepth) unit_0099(c, 131u, depth + 1u); else { c.pc = 0x00365958u; return; } if (c.pc != 0x0013D300u) [[unlikely]] return; }
L_0013D300:
    c.budget -= 3;
    { const std::uint32_t t = c.r[10].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013D310:
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 2u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] + 96u);
    set32(c.r[21], 0u + 5u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[17], c.r[3].w[0] + 1176u);
    set32(c.r[20], 0u + 6u);
    c.budget -= 12;
L_0013D340:
    set32(c.r[3], ld32((c.r[17].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013D360; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D360u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013D360u) [[unlikely]] return; }
L_0013D360:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0013D374; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0013D380; } }
L_0013D374:
    st32((c.r[17].w[0] + 732u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D384; } }
L_0013D380:
    st32((c.r[17].w[0] + 732u), c.r[19].w[0]);
    c.budget -= 1;
L_0013D384:
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D340u | kUnwind; return; } goto L_0013D340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013D3A0:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D538; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D3CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D3CCu) [[unlikely]] return; }
L_0013D3CC:
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], c.r[19].w[0] + 76u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] - 6460u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013D418; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D41C; } }
L_0013D418:
    set32(c.r[2], c.r[7].w[0] + 4u);
    c.budget -= 1;
L_0013D41C:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0013D4A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6460u)));
    set32(c.r[9], 0u + 12u);
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 25;
L_0013D4A8:
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 2u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] + 96u);
    set32(c.r[21], 0u + 5u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[17], c.r[3].w[0] + 1176u);
    set32(c.r[20], 0u + 6u);
    c.budget -= 12;
L_0013D4D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013D4F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D4F8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013D4F8u) [[unlikely]] return; }
L_0013D4F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0013D50C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0013D518; } }
L_0013D50C:
    st32((c.r[17].w[0] + 732u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D51C; } }
L_0013D518:
    st32((c.r[17].w[0] + 732u), c.r[19].w[0]);
    c.budget -= 1;
L_0013D51C:
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D4D8u | kUnwind; return; } goto L_0013D4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013D538:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D588; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D570u) [[unlikely]] return; }
L_0013D570:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] - 14336u);
    st32((c.r[17].w[0] - 14336u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013D588:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D678; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D6B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[19].w[0] + 76u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[19].w[0] + 172u);
    set32(c.r[22], 0u + 5u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D5C4u) [[unlikely]] return; }
L_0013D5C4:
    set32(c.r[21], 0u + 6u);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[19].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5F8u);  if (depth < kMaxDepth) unit_000E(c, 410u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x0013D5F8u) [[unlikely]] return; }
L_0013D5F8:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D610u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013D610u) [[unlikely]] return; }
L_0013D610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[2].w[0] + 1176u);
    c.budget -= 2;
L_0013D618:
    set32(c.r[3], ld32((c.r[16].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013D638; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D638u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013D638u) [[unlikely]] return; }
L_0013D638:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_0013D64C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0013D658; } }
L_0013D64C:
    st32((c.r[16].w[0] + 732u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D65C; } }
L_0013D658:
    st32((c.r[16].w[0] + 732u), c.r[20].w[0]);
    c.budget -= 1;
L_0013D65C:
    set32(c.r[17], c.r[17].w[0] + 12u);
    set32(c.r[16], c.r[16].w[0] + 840u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D618u | kUnwind; return; } goto L_0013D618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013D678:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D694u) [[unlikely]] return; }
L_0013D694:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6A0u);  if (depth < kMaxDepth) unit_000E(c, 448u, depth + 1u); else { c.pc = 0x0013BB30u; return; } if (c.pc != 0x0013D6A0u) [[unlikely]] return; }
L_0013D6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6A8u);  if (depth < kMaxDepth) unit_000A(c, 366u, depth + 1u); else { c.pc = 0x0012ABF8u; return; } if (c.pc != 0x0013D6A8u) [[unlikely]] return; }
L_0013D6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013D6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D6C0u) [[unlikely]] return; }
L_0013D6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013D6C8:
    set32(c.r[4], c.r[19].w[0] + 32u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[30], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6E0u);  if (depth < kMaxDepth) unit_009E(c, 39u, depth + 1u); else { c.pc = 0x003784E0u; return; } if (c.pc != 0x0013D6E0u) [[unlikely]] return; }
L_0013D6E0:
    set32(c.r[5], c.r[19].w[0] + 60u);
    set32(c.r[6], c.r[19].w[0] + 76u);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 4;
L_0013D6F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D708u);  if (depth < kMaxDepth) unit_009E(c, 44u, depth + 1u); else { c.pc = 0x00378640u; return; } if (c.pc != 0x0013D708u) [[unlikely]] return; }
L_0013D708:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[3].w[0] - 14304u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_0013DFF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[16], c.r[2].w[0] + 17200u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D748u);  if (depth < kMaxDepth) unit_0071(c, 311u, depth + 1u); else { c.pc = 0x002C7468u; return; } if (c.pc != 0x0013D748u) [[unlikely]] return; }
L_0013D748:
    c.r[2].d[0] = c.r[2].d[0] & 40960ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DAD8; } }
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[6], c.r[19].w[0] + 68u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D6B0u | kUnwind; return; } goto L_0013D6B0; } }
    set32(c.r[5], c.r[19].w[0] + 60u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] + 76u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013D7B4; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D80C; } }
L_0013D7B4:
    set32(c.r[2], c.r[17].w[0] + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013D80C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013D808; } }
    set32(c.r[2], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_0013D80C; } }
    set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], 0u + 7u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D80C; } }
L_0013D808:
    st32((c.r[4].w[0]), c.r[30].w[0]);
    c.budget -= 1;
L_0013D80C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[21].w[0] + 17200u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D820u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D820u) [[unlikely]] return; }
L_0013D820:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D830u);  if (depth < kMaxDepth) unit_0071(c, 311u, depth + 1u); else { c.pc = 0x002C7468u; return; } if (c.pc != 0x0013D830u) [[unlikely]] return; }
L_0013D830:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D91C; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 6460u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D86C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D874; } }
L_0013D86C:
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_0013D874:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013DA14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], 0u + 12u);
    set32(c.r[2], ld32((c.r[3].w[0] - 6460u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
L_0013D8C0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D8E8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D8EC; } }
L_0013D8E8:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_0013D8EC:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D8C0u | kUnwind; return; } goto L_0013D8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DA14; } }
L_0013D91C:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D92Cu);  if (depth < kMaxDepth) unit_0071(c, 311u, depth + 1u); else { c.pc = 0x002C7468u; return; } if (c.pc != 0x0013D92Cu) [[unlikely]] return; }
L_0013D92C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DA14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0] - 6460u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D96C; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D970; } }
L_0013D96C:
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.budget -= 1;
L_0013D970:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013DA14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], 0u + 12u);
    set32(c.r[2], ld32((c.r[3].w[0] - 6460u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 8;
L_0013D9C0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D9E8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D9EC; } }
L_0013D9E8:
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_0013D9EC:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D9C0u | kUnwind; return; } goto L_0013D9C0; } }
L_0013DA14:
    set32(c.r[6], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0013DAA4; } }
    set32(c.r[2], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0013DA6C; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DA6C:
    set32(c.r[2], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013DA88; } }
    set32(c.r[6], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0013DF78; } }
L_0013DA88:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DABC; } }
L_0013DAA4:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
L_0013DABC:
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DACC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DC14; } }
L_0013DAD8:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DAE8u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0013DAE8u) [[unlikely]] return; }
L_0013DAE8:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DCC8; } }
    set32(c.r[2], c.r[19].w[0] + 68u);
    set32(c.r[21], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013DCAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 32128u);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013DC74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 23944u);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013DC74; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = ld8((c.r[23].w[0] + 1944u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013DC74; } }
    set32(c.r[2], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_0013DC74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[19].w[0] + 76u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    set32(c.r[18], c.r[19].w[0] + 60u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DB88u) [[unlikely]] return; }
L_0013DB88:
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013DBBC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 12u);
    mmi::madd(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 7u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_0013DBBC:
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[23].w[0] + 1944u));
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[21], c.r[29].w[0] + 8u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013DC10; } }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[4].w[0] - 14216u);
    c.budget -= 4;
L_0013DBF0:
    set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DACCu | kUnwind; return; } goto L_0013DACC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DBF0u | kUnwind; return; } goto L_0013DBF0; } }
L_0013DC10:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0013DC14:
    set32(c.r[4], c.r[4].w[0] - 14216u);
    set32(c.r[2], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC44u);  if (depth < kMaxDepth) unit_000E(c, 410u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x0013DC44u) [[unlikely]] return; }
L_0013DC44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[17].w[0] + 5u);
    st32((c.r[23].w[0] - 4976u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] + 6u);
    set32(c.r[2], c.r[5].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DDE8; } }
L_0013DC74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[19].w[0] + 76u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21968u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DC88u) [[unlikely]] return; }
L_0013DC88:
    set32(c.r[6], 0u + 28u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] - 14304u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0]), c.r[30].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DCAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[19].w[0] + 76u);
    set32(c.r[2], ld32((c.r[5].w[0] - 21972u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DCC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DCC0u) [[unlikely]] return; }
L_0013DCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DCC8:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DCD8u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0013DCD8u) [[unlikely]] return; }
L_0013DCD8:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DDFC; } }
    set32(c.r[2], c.r[19].w[0] + 68u);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_0013DD70; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[18], c.r[19].w[0] + 60u);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0013DD88; } }
    set32(c.r[2], c.r[22].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[30].d[0];  if (t) { goto L_0013DD88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 23944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[30].d[0];  if (t) { goto L_0013DD88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 32128u);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013DD88; } }
L_0013DD70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[5].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DD80u) [[unlikely]] return; }
L_0013DD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E008; } }
L_0013DD88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[19].w[0] + 76u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21976u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DD9Cu) [[unlikely]] return; }
L_0013DD9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] - 4976u), 0u);
    st32((c.r[3].w[0]), c.r[30].w[0]);
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDC0u);  if (depth < kMaxDepth) unit_000E(c, 410u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x0013DDC0u) [[unlikely]] return; }
L_0013DDC0:
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[17].w[0] + 6u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] + 5u);
    c.lo.d[0] = c.r[6].d[0];
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], 0u + 12u);
    set32(c.r[5], c.r[29].w[0] + 12u);
    mmi::madd(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
L_0013DDE8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDF4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013DDF4u) [[unlikely]] return; }
L_0013DDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DDFC:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], c.r[19].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE10u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0013DE10u) [[unlikely]] return; }
L_0013DE10:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DF78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DE2Cu) [[unlikely]] return; }
L_0013DE2C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + 68u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[30].d[0];  if (t) { goto L_0013DEFC; } }
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013DE88; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[18], c.r[19].w[0] + 60u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[17].w[0] + 2u);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 12u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DEA4; } }
L_0013DE88:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[18], c.r[19].w[0] + 60u);
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[4], 0u + 12u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 7;
L_0013DEA4:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + 2u);
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 1176u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 840u);
    mmi::madd(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DED8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013DED8u) [[unlikely]] return; }
L_0013DED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1176u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 840u);
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[2].w[0] + 732u), c.r[30].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DEFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013DF78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21176u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0013DF64; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] - 24376u);
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF30u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013DF30u) [[unlikely]] return; }
L_0013DF30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 24376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF40u);  if (depth < kMaxDepth) unit_000C(c, 61u, depth + 1u); else { c.pc = 0x001305B0u; return; } if (c.pc != 0x0013DF40u) [[unlikely]] return; }
L_0013DF40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 24376u);
    set32(c.r[4], c.r[5].w[0] + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF5Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0013DF5Cu) [[unlikely]] return; }
L_0013DF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DF78; } }
L_0013DF64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF70u);  if (depth < kMaxDepth) unit_000E(c, 448u, depth + 1u); else { c.pc = 0x0013BB30u; return; } if (c.pc != 0x0013DF70u) [[unlikely]] return; }
L_0013DF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF78u);  if (depth < kMaxDepth) unit_000A(c, 366u, depth + 1u); else { c.pc = 0x0012ABF8u; return; } if (c.pc != 0x0013DF78u) [[unlikely]] return; }
L_0013DF78:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[16].w[0] + 96u);
    set32(c.r[17], c.r[2].w[0] + 1176u);
    set32(c.r[22], 0u + 5u);
    set32(c.r[21], 0u + 6u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 8;
L_0013DF98:
    set32(c.r[3], ld32((c.r[17].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013DFB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFB8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013DFB8u) [[unlikely]] return; }
L_0013DFB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_0013DFCC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0013DFD8; } }
L_0013DFCC:
    st32((c.r[17].w[0] + 732u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DFDC; } }
L_0013DFD8:
    st32((c.r[17].w[0] + 732u), c.r[20].w[0]);
    c.budget -= 1;
L_0013DFDC:
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DF98u | kUnwind; return; } goto L_0013DF98; } }
L_0013DFF0:
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D6F0u | kUnwind; return; } goto L_0013D6F0; } }
L_0013E008:
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
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 14628u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E06Cu);  if (depth < kMaxDepth) unit_0010(c, 159u, depth + 1u); else { c.pc = 0x00142150u; return; } if (c.pc != 0x0013E06Cu) [[unlikely]] return; }
L_0013E06C:
    set32(c.r[16], c.r[16].w[0] - 60u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[17], c.r[3].w[0] - 14208u);
    set32(c.r[6], 0u + 36u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E090u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013E090u) [[unlikely]] return; }
L_0013E090:
    set32(c.r[4], ld32((c.r[16].w[0] + 348u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[15], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[2].w[0] + 1945u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0013E148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[12].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[14], c.r[2].w[0] - 32128u);
    set32(c.r[13], c.r[3].w[0] - 26584u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_0013E0E0:
    set32(c.r[2], c.r[7].w[0] + 360u);
    set32(c.r[3], c.r[7].w[0] + 391u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { goto L_0013E134; } }
    c.r[2].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_0013E134:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E0E0u | kUnwind; return; } goto L_0013E0E0; } }
    st8((c.r[17].w[0] + 1945u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_0013E148:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14248u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[15].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E174u);  if (depth < kMaxDepth) unit_009D(c, 186u, depth + 1u); else { c.pc = 0x00376DF0u; return; } if (c.pc != 0x0013E174u) [[unlikely]] return; }
L_0013E174:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 672u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0013E21C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], 0u + 320u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 345u);
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[7], 0u + 72u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 2u);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    c.f[13] = c.f[12];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.f[15] = c.f[14];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E21Cu);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012D248u; return; } if (c.pc != 0x0013E21Cu) [[unlikely]] return; }
L_0013E21C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] + 672u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0013E294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14248u)));
    set32(c.r[4], c.r[3].w[0] - 14248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0013E294; } }
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E250u);  if (depth < kMaxDepth) unit_009D(c, 187u, depth + 1u); else { c.pc = 0x00376E18u; return; } if (c.pc != 0x0013E250u) [[unlikely]] return; }
L_0013E250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E294; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E268u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E268u) [[unlikely]] return; }
L_0013E268:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E294u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E294u) [[unlikely]] return; }
L_0013E294:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E2B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2F0u);  if (depth < kMaxDepth) unit_009D(c, 276u, depth + 1u); else { c.pc = 0x00377CD8u; return; } if (c.pc != 0x0013E2F0u) [[unlikely]] return; }
L_0013E2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E9B8; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[7].w[0] + 360u);
    set32(c.r[4], c.r[7].w[0] + 391u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - 26584u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E44C; } }
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E428; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013E374:
    set32(c.r[4], 0u + 306u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E380:
    set32(c.r[4], 0u + 307u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E38C:
    set32(c.r[4], 0u + 308u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E398:
    set32(c.r[4], 0u + 309u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3A4:
    set32(c.r[4], 0u + 310u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3B0:
    set32(c.r[4], 0u + 311u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3BC:
    set32(c.r[4], 0u + 312u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3C8:
    set32(c.r[4], 0u + 313u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3D4:
    set32(c.r[4], 0u + 314u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3E0:
    set32(c.r[4], 0u + 315u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3EC:
    set32(c.r[4], 0u + 316u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E3F8:
    set32(c.r[4], 0u + 317u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E404:
    set32(c.r[4], 0u + 318u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E410:
    set32(c.r[4], 0u + 319u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E41C:
    set32(c.r[4], 0u + 320u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E42C; } }
L_0013E428:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0013E42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E434u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013E434u) [[unlikely]] return; }
L_0013E434:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E444u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0013E444u) [[unlikely]] return; }
L_0013E444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E464; } }
L_0013E44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[2].w[0] + 14560u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 14560u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 8u));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st16((c.r[29].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
L_0013E464:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[3], c.r[3].w[0] - 21776u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 672u)));
    st32((c.r[4].w[0] - 21968u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0013E62C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 23004u)));
    set32(c.r[5], 0u + 367u);
    set32(c.r[3], 0u + 345u);
    set32(c.r[4], 0u + 320u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[6], 0u + 127u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4C8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013E4C8u) [[unlikely]] return; }
L_0013E4C8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 127u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[22], 0u + 137u);
    set32(c.r[21], 0u + 137u);
    set32(c.r[20], 0u + 137u);
    set32(c.r[19], 0u + 137u);
    c.budget -= 8;
L_0013E4E8:
    set32(c.r[2], c.r[16].w[0] + 360u);
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] + 391u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26584u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 32128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013E59C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013E56C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], 0u + 60u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 371u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E57C; } }
L_0013E56C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], 0u + 60u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 397u);
    c.budget -= 4;
L_0013E57C:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    set32(c.r[7], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[17].d[0];
    set32(c.r[8], c.r[30].w[0] + 14576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E594u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013E594u) [[unlikely]] return; }
L_0013E594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E604; } }
L_0013E59C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013E5DC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], 0u + 60u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 371u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    set32(c.r[7], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[17].d[0];
    set32(c.r[8], c.r[23].w[0] + 14584u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E5D4u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013E5D4u) [[unlikely]] return; }
L_0013E5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E604; } }
L_0013E5DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], 0u + 60u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 397u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    set32(c.r[7], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[17].d[0];
    set32(c.r[8], c.r[23].w[0] + 14584u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E604u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013E604u) [[unlikely]] return; }
L_0013E604:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 25u);
    set32(c.r[21], c.r[21].w[0] + 25u);
    set32(c.r[20], c.r[20].w[0] + 25u);
    set32(c.r[19], c.r[19].w[0] + 25u);
    c.r[2].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E4E8u | kUnwind; return; } goto L_0013E4E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E62Cu);  if (depth < kMaxDepth) unit_000E(c, 387u, depth + 1u); else { c.pc = 0x0013B050u; return; } if (c.pc != 0x0013E62Cu) [[unlikely]] return; }
L_0013E62C:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E6C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14248u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013E6C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E664u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E664u) [[unlikely]] return; }
L_0013E664:
    set32(c.r[2], ld32((c.r[18].w[0] + 348u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E6A0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    set32(c.r[5], c.r[18].w[0] + 52u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E698u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E698u) [[unlikely]] return; }
L_0013E698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E6A0:
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6C0u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E6C0u) [[unlikely]] return; }
L_0013E6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E6C8:
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E75C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14248u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013E75C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E6F4u) [[unlikely]] return; }
L_0013E6F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013E72C; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 36u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E724u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E724u) [[unlikely]] return; }
L_0013E724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E72C:
    set32(c.r[2], ld32((c.r[18].w[0] + 348u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E754u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E754u) [[unlikely]] return; }
L_0013E754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E75C:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E7AC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 14248u)));
    set32(c.r[17], c.r[16].w[0] - 14248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013E7AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E798u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E798u) [[unlikely]] return; }
L_0013E798:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[16].w[0] - 14248u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E7AC:
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14248u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013E898; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] - 26584u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] + 360u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 391u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] - 32128u);
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E82Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E82Cu) [[unlikely]] return; }
L_0013E82C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[4].w[0] + 12228u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 10160u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E864u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E864u) [[unlikely]] return; }
L_0013E864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E878u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00377D18u; return; } if (c.pc != 0x0013E878u) [[unlikely]] return; }
L_0013E878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E890u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E890u) [[unlikely]] return; }
L_0013E890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E9B8; } }
L_0013E898:
    c.r[2].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013E9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14248u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013E9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 14864u);
    set32(c.r[22], 0u + 5u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E8D4u) [[unlikely]] return; }
L_0013E8D4:
    set32(c.r[19], c.r[17].w[0] + 76u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8F0u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013E8F0u) [[unlikely]] return; }
L_0013E8F0:
    set32(c.r[21], 0u + 6u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 17200u);
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E914u);  if (depth < kMaxDepth) unit_0071(c, 300u, depth + 1u); else { c.pc = 0x002C7248u; return; } if (c.pc != 0x0013E914u) [[unlikely]] return; }
L_0013E914:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E928u);  if (depth < kMaxDepth) unit_0071(c, 300u, depth + 1u); else { c.pc = 0x002C7248u; return; } if (c.pc != 0x0013E928u) [[unlikely]] return; }
L_0013E928:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E934u);  if (depth < kMaxDepth) unit_000E(c, 421u, depth + 1u); else { c.pc = 0x0013B578u; return; } if (c.pc != 0x0013E934u) [[unlikely]] return; }
L_0013E934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1176u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 6720u);
    c.budget -= 5;
L_0013E948:
    set32(c.r[3], ld32((c.r[16].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013E968; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E968u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013E968u) [[unlikely]] return; }
L_0013E968:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_0013E97C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0013E988; } }
L_0013E97C:
    st32((c.r[16].w[0] + 732u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E98C; } }
L_0013E988:
    st32((c.r[16].w[0] + 732u), c.r[20].w[0]);
    c.budget -= 1;
L_0013E98C:
    set32(c.r[16], c.r[16].w[0] + 840u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E948u | kUnwind; return; } goto L_0013E948; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[23].w[0] - 14864u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9B8u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0013E9B8u) [[unlikely]] return; }
L_0013E9B8:
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
L_0013E9F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0013EBC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013EB38; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 14864u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA34u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013EA34u) [[unlikely]] return; }
L_0013EA34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], c.r[2].w[0] - 14688u);
    set32(c.r[3], c.r[3].w[0] + 14728u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA5Cu);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013EA5Cu) [[unlikely]] return; }
L_0013EA5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 14656u);
    set32(c.r[4], c.r[17].w[0] + 60u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 288u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA7Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013EA7Cu) [[unlikely]] return; }
L_0013EA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EAAC; } }
L_0013EA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA8Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0013EA8Cu) [[unlikely]] return; }
L_0013EA8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA9Cu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013EA9Cu) [[unlikely]] return; }
L_0013EA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EA84u | kUnwind; return; } goto L_0013EA84; } }
L_0013EAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EAACu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0013EAACu) [[unlikely]] return; }
L_0013EAAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 10000u);
    set32(c.r[2], c.r[3].w[0] - 14336u);
    st32((c.r[3].w[0] - 14336u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] - 14304u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 15;
L_0013EAE8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] + 28u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EAE8u | kUnwind; return; } goto L_0013EAE8; } }
    set32(c.r[2], c.r[6].w[0] - 14248u);
    st32((c.r[6].w[0] - 14248u), 0u);
    set32(c.r[3], 0u + 10000u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EBC0; } }
L_0013EB38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 14248u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB50u);  if (depth < kMaxDepth) unit_000F(c, 188u, depth + 1u); else { c.pc = 0x0013EBE8u; return; } if (c.pc != 0x0013EB50u) [[unlikely]] return; }
L_0013EB50:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013EB90; } }
    set32(c.r[16], c.r[2].w[0] + 56u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0013EB90; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0013EB78:
    set32(c.r[16], c.r[16].w[0] - 28u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB88u);  if (depth < kMaxDepth) unit_000F(c, 188u, depth + 1u); else { c.pc = 0x0013EBE8u; return; } if (c.pc != 0x0013EB88u) [[unlikely]] return; }
L_0013EB88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EB78u | kUnwind; return; } goto L_0013EB78; } }
L_0013EB90:
    set32(c.r[4], c.r[18].w[0] - 14336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB9Cu);  if (depth < kMaxDepth) unit_000F(c, 188u, depth + 1u); else { c.pc = 0x0013EBE8u; return; } if (c.pc != 0x0013EB9Cu) [[unlikely]] return; }
L_0013EB9C:
    set32(c.r[4], c.r[19].w[0] - 14688u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EBACu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013EBACu) [[unlikely]] return; }
L_0013EBAC:
    set32(c.r[4], c.r[20].w[0] - 14864u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EBBCu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013EBBCu) [[unlikely]] return; }
L_0013EBBC:
    c.budget -= 1;
L_0013EBC0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EBE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC10u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013EC10u) [[unlikely]] return; }
L_0013EC10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC38u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013EC38u) [[unlikely]] return; }
L_0013EC38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14728u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EC68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC98u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013EC98u) [[unlikely]] return; }
L_0013EC98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECA4u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x0013ECA4u) [[unlikely]] return; }
L_0013ECA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013ECB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECC8u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013ECC8u) [[unlikely]] return; }
L_0013ECC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013ECD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECF0u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013ECF0u) [[unlikely]] return; }
L_0013ECF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 14656u);
    set32(c.r[4], c.r[16].w[0] + 60u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 288u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED10u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013ED10u) [[unlikely]] return; }
L_0013ED10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013ED20; } }
L_0013ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED20u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0013ED20u) [[unlikely]] return; }
L_0013ED20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013ED4C; } }
L_0013ED2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED3Cu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013ED3Cu) [[unlikely]] return; }
L_0013ED3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ED18u | kUnwind; return; } goto L_0013ED18; } }
L_0013ED44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED4Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0013ED4Cu) [[unlikely]] return; }
L_0013ED4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013ED60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 288u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED84u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013ED84u) [[unlikely]] return; }
L_0013ED84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED90u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x0013ED90u) [[unlikely]] return; }
L_0013ED90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EDA8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EDC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0013EDE4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
L_0013EDE4:
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23892u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EE10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23892u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EE28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23892u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EE40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] - 23892u)));
    c.r[2].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013EE6C; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0013EE78; } }
L_0013EE6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EE78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EE88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 5144u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EEB0u);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0013EEB0u) [[unlikely]] return; }
L_0013EEB0:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[6], 0u + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EED0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013EED0u) [[unlikely]] return; }
L_0013EED0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1944u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013EF3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[2].w[0] - 14216u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
L_0013EF10:
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0013EF2C; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EF2C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EF10u | kUnwind; return; } goto L_0013EF10; } }
L_0013EF3C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EF48:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[4].w[0] + 76u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[16].w[0] + 6720u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], 0u + 5u);
    c.budget -= 16;
L_0013EF88:
    set32(c.r[3], ld32((c.r[16].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013EFA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFA8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013EFA8u) [[unlikely]] return; }
L_0013EFA8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0013EFBC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0013EFC8; } }
L_0013EFBC:
    st32((c.r[16].w[0] + 732u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EFCC; } }
L_0013EFC8:
    st32((c.r[16].w[0] + 732u), c.r[18].w[0]);
    c.budget -= 1;
L_0013EFCC:
    set32(c.r[16], c.r[16].w[0] + 840u);
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EF88u | kUnwind; return; } goto L_0013EF88; } }
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
L_0013F008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] - 5140u)));
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F028u);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0013F028u) [[unlikely]] return; }
L_0013F028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F030u);  if (depth < kMaxDepth) unit_000F(c, 118u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x0013F030u) [[unlikely]] return; }
L_0013F030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F040:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14800u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013F06C:
    set32(c.r[2], 0u + 306u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F078:
    set32(c.r[2], 0u + 307u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F084:
    set32(c.r[2], 0u + 308u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F090:
    set32(c.r[2], 0u + 309u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F09C:
    set32(c.r[2], 0u + 310u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0A8:
    set32(c.r[2], 0u + 311u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0B4:
    set32(c.r[2], 0u + 312u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0C0:
    set32(c.r[2], 0u + 313u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0CC:
    set32(c.r[2], 0u + 314u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0D8:
    set32(c.r[2], 0u + 315u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0E4:
    set32(c.r[2], 0u + 316u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0F0:
    set32(c.r[2], 0u + 317u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0FC:
    set32(c.r[2], 0u + 318u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F108:
    set32(c.r[2], 0u + 319u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F114:
    set32(c.r[2], 0u + 320u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F120:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F148u);  if (depth < kMaxDepth) unit_000F(c, 172u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0013F148u) [[unlikely]] return; }
L_0013F148:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F170u);  if (depth < kMaxDepth) unit_000F(c, 172u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0013F170u) [[unlikely]] return; }
L_0013F170:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F180:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[2].w[0] + 7648u);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 3488u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[3] = ld32((c.r[18].w[0] + 68u));
    c.f[2] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.f[3] = fp::add(c.f[3], c.f[20]);
    c.f[2] = fp::add(c.f[2], c.f[20]);
    c.f[4] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[6] = ld32((c.r[20].w[0] + 28u));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[5] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[7] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[20].w[0] + 1724u)));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[19], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[16], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[1]);
    c.budget -= 49;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0013F2C8; } }
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F26Cu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0013F26Cu) [[unlikely]] return; }
L_0013F26C:
    set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);
    set32(c.r[5], c.r[21].w[0] + 2u);
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[6], 0u + 32u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], 0u + 2u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[16].w[0] + 2u);
    c.f[13] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2A4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013F2A4u) [[unlikely]] return; }
L_0013F2A4:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2C8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013F2C8u) [[unlikely]] return; }
L_0013F2C8:
    c.f[12] = ld32((c.r[18].w[0] + 20u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0] + 24u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2E0u);  if (depth < kMaxDepth) unit_0026(c, 8u, depth + 1u); else { c.pc = 0x00198220u; return; } if (c.pc != 0x0013F2E0u) [[unlikely]] return; }
L_0013F2E0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F310:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[2].w[0] + 7648u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 3488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[2] = ld32((c.r[19].w[0] + 76u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[3] = ld32((c.r[19].w[0] + 72u));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[5] = ld32((c.r[5].w[0] + 28u));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    set32(c.r[4], ld32((c.r[5].w[0] + 1724u)));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[5].w[0] + 24u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[6]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[20], c.f[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[17], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[16], c.f[0]);
    c.budget -= 50;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0013F4F8; } }
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F450; } }
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F450; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15248u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013F420:
    set32(c.r[2], c.r[6].w[0] + 3488u);
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F468; } }
L_0013F430:
    set32(c.r[2], c.r[6].w[0] + 3488u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F468; } }
L_0013F440:
    set32(c.r[2], c.r[6].w[0] + 3488u);
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F468; } }
L_0013F450:
    set32(c.r[2], c.r[21].w[0] + 7648u);
    set32(c.r[4], c.r[6].w[0] + 3488u);
    set32(c.r[3], ld32((c.r[2].w[0] + 1724u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_0013F468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F494u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0013F494u) [[unlikely]] return; }
L_0013F494:
    set32(c.r[17], c.r[17].w[0] - c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], c.r[17].w[0] >> 31);
    set32(c.r[5], c.r[16].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.f[13] = c.f[12];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[6], 0u + 32u);
    set32(c.r[17], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], c.r[17].w[0] + 2u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F4D0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013F4D0u) [[unlikely]] return; }
L_0013F4D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F4F8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013F4F8u) [[unlikely]] return; }
L_0013F4F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] + 7648u);
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F51Cu);  if (depth < kMaxDepth) unit_0025(c, 133u, depth + 1u); else { c.pc = 0x00197E28u; return; } if (c.pc != 0x0013F51Cu) [[unlikely]] return; }
L_0013F51C:
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
L_0013F548:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[6].w[0] + 100u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[17], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F71C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013F594:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F5A8u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x0013F5A8u) [[unlikely]] return; }
L_0013F5A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F5D8; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F5E0; } }
L_0013F5D8:
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_0013F5E0:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F718; } }
L_0013F5EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F600u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x0013F600u) [[unlikely]] return; }
L_0013F600:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F634; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0013F61Cu);  goto L_0013F620; }
L_0013F620:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F5E0u | kUnwind; return; } goto L_0013F5E0; } }
L_0013F634:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F5E0u | kUnwind; return; } goto L_0013F5E0; } }
L_0013F648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[17], c.r[2].w[0] + 7648u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1724u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013F6AC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F67C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013F688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F718; } }
L_0013F67C:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013F718; } }
L_0013F688:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013F6A4u) [[unlikely]] return; }
L_0013F6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F718; } }
L_0013F6AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6C0u);  if (depth < kMaxDepth) unit_0036(c, 413u, depth + 1u); else { c.pc = 0x001DAF90u; return; } if (c.pc != 0x0013F6C0u) [[unlikely]] return; }
L_0013F6C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 29688u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 24088u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6D8u);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x0013F6D8u) [[unlikely]] return; }
L_0013F6D8:
    st32((c.r[17].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F718; } }
L_0013F6E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9372u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013F718; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F70C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013F718; } }
L_0013F70C:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F718u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00140028u; return; } if (c.pc != 0x0013F718u) [[unlikely]] return; }
L_0013F718:
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0013F71C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F738:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[18].w[0] + 100u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FD5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15328u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013F790:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7A4u);  if (depth < kMaxDepth) unit_0026(c, 114u, depth + 1u); else { c.pc = 0x0019AAD0u; return; } if (c.pc != 0x0013F7A4u) [[unlikely]] return; }
L_0013F7A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F7D4; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F7DC; } }
L_0013F7D4:
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_0013F7DC:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013F7E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7FCu);  if (depth < kMaxDepth) unit_0026(c, 114u, depth + 1u); else { c.pc = 0x0019AAD0u; return; } if (c.pc != 0x0013F7FCu) [[unlikely]] return; }
L_0013F7FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F830; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0013F818u);  goto L_0013F81C; }
L_0013F81C:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F7DCu | kUnwind; return; } goto L_0013F7DC; } }
L_0013F830:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F7DCu | kUnwind; return; } goto L_0013F7DC; } }
L_0013F844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7648u);
    set32(c.r[3], ld32((c.r[2].w[0] + 1724u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FD58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15376u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013F880:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F898u);  if (depth < kMaxDepth) unit_0010(c, 84u, depth + 1u); else { c.pc = 0x001419C8u; return; } if (c.pc != 0x0013F898u) [[unlikely]] return; }
L_0013F898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013F8A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8ACu);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x0013F8ACu) [[unlikely]] return; }
L_0013F8AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0013F8E8; } }
    set32(c.r[3], c.r[19].w[0] + 7648u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0] + 1724u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8E0u);  if (depth < kMaxDepth) unit_0010(c, 16u, depth + 1u); else { c.pc = 0x001406D8u; return; } if (c.pc != 0x0013F8E0u) [[unlikely]] return; }
L_0013F8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013F8E8:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[19].w[0] + 7648u);
    st32((c.r[3].w[0] + 1724u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F910u);  if (depth < kMaxDepth) unit_0010(c, 18u, depth + 1u); else { c.pc = 0x00140878u; return; } if (c.pc != 0x0013F910u) [[unlikely]] return; }
L_0013F910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013F918:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[3].w[0] - 29688u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 12228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[5].w[0] + 10160u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F950u);  if (depth < kMaxDepth) unit_002E(c, 506u, depth + 1u); else { c.pc = 0x001BB8A8u; return; } if (c.pc != 0x0013F950u) [[unlikely]] return; }
L_0013F950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 14852u)));
    st32((c.r[3].w[0] + 24088u), 0u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { goto L_0013F980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F970u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013F970u) [[unlikely]] return; }
L_0013F970:
    st32((c.r[2].w[0] + 204u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F97Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013F97Cu) [[unlikely]] return; }
L_0013F97C:
    st32((c.r[2].w[0] + 208u), c.r[17].w[0]);
    c.budget -= 1;
L_0013F980:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F98Cu);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140FC0u; return; } if (c.pc != 0x0013F98Cu) [[unlikely]] return; }
L_0013F98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013F994:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[3].w[0] - 29688u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 10160u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 12228u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24088u), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FCEC; } }
L_0013F9D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0013FB78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14852u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0013FA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA08u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FA08u) [[unlikely]] return; }
L_0013FA08:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA24u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FA24u) [[unlikely]] return; }
L_0013FA24:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 208u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FA5C; } }
L_0013FA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA48u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FA48u) [[unlikely]] return; }
L_0013FA48:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 5;
L_0013FA5C:
    set32(c.r[17], c.r[19].w[0] + 7648u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], ld32((c.r[17].w[0] + 1728u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0013FB10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] + 24088u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA80u);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x0013FA80u) [[unlikely]] return; }
L_0013FA80:
    st32((c.r[17].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FA8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0013FB78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FC38; } }
L_0013FAB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0013FB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAD4u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FAD4u) [[unlikely]] return; }
L_0013FAD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 208u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAF0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0013FAF0u) [[unlikely]] return; }
L_0013FAF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013FB10; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB08u);  if (depth < kMaxDepth) unit_0010(c, 14u, depth + 1u); else { c.pc = 0x00140530u; return; } if (c.pc != 0x0013FB08u) [[unlikely]] return; }
L_0013FB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FB10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB1Cu);  if (depth < kMaxDepth) unit_0010(c, 44u, depth + 1u); else { c.pc = 0x00141550u; return; } if (c.pc != 0x0013FB1Cu) [[unlikely]] return; }
L_0013FB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FB24:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013FB78; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013FB8C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12224u);
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141BF8u; return; } if (c.pc != 0x0013FB64u) [[unlikely]] return; }
L_0013FB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 10160u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FB78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB84u);  if (depth < kMaxDepth) unit_0010(c, 41u, depth + 1u); else { c.pc = 0x001413B0u; return; } if (c.pc != 0x0013FB84u) [[unlikely]] return; }
L_0013FB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FB8C:
    set32(c.r[20], c.r[19].w[0] + 7648u);
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15424u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013FBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBC4u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FBC4u) [[unlikely]] return; }
L_0013FBC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 204u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBE4u);  if (depth < kMaxDepth) unit_0010(c, 44u, depth + 1u); else { c.pc = 0x00141550u; return; } if (c.pc != 0x0013FBE4u) [[unlikely]] return; }
L_0013FBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FBEC:
    set32(c.r[3], c.r[19].w[0] + 7648u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FC34; } }
L_0013FBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC04u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FC04u) [[unlikely]] return; }
L_0013FC04:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 208u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC24u);  if (depth < kMaxDepth) unit_0010(c, 44u, depth + 1u); else { c.pc = 0x00141550u; return; } if (c.pc != 0x0013FC24u) [[unlikely]] return; }
L_0013FC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FC2C:
    set32(c.r[3], c.r[19].w[0] + 7648u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_0013FC34:
    st32((c.r[3].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0013FC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC40u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FC40u) [[unlikely]] return; }
L_0013FC40:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 204u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC60u);  if (depth < kMaxDepth) unit_0010(c, 26u, depth + 1u); else { c.pc = 0x00140DE0u; return; } if (c.pc != 0x0013FC60u) [[unlikely]] return; }
L_0013FC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC70u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FC70u) [[unlikely]] return; }
L_0013FC70:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 208u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC90u);  if (depth < kMaxDepth) unit_0010(c, 14u, depth + 1u); else { c.pc = 0x00140530u; return; } if (c.pc != 0x0013FC90u) [[unlikely]] return; }
L_0013FC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCA0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FCA0u) [[unlikely]] return; }
L_0013FCA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCBCu);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x0013FCBCu) [[unlikely]] return; }
L_0013FCBC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FCCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCDCu);  if (depth < kMaxDepth) unit_0036(c, 413u, depth + 1u); else { c.pc = 0x001DAF90u; return; } if (c.pc != 0x0013FCDCu) [[unlikely]] return; }
L_0013FCDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 29688u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 24088u), 0u);
    c.budget -= 4;
L_0013FCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCF4u);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x0013FCF4u) [[unlikely]] return; }
L_0013FCF4:
    set32(c.r[2], c.r[19].w[0] + 7648u);
    st32((c.r[2].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FD04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9372u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FD58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013FD38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD44u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00140028u; return; } if (c.pc != 0x0013FD44u) [[unlikely]] return; }
L_0013FD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FD4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD58u);  if (depth < kMaxDepth) unit_0010(c, 9u, depth + 1u); else { c.pc = 0x00140390u; return; } if (c.pc != 0x0013FD58u) [[unlikely]] return; }
L_0013FD58:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0013FD5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013FD88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.f[5] = ld32((c.r[4].w[0] + 60u));
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[3] = ld32((c.r[4].w[0] + 64u));
    c.f[5] = fp::add(c.f[5], c.f[1]);
    c.f[4] = ld32((c.r[4].w[0] + 72u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[6] = ld32((c.r[2].w[0] + 24u));
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 36u)));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.f[5] = fp::mul(c.f[5], c.f[6]);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    set32(c.r[4], 0u + 7u);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[7]);
    st32((c.r[29].w[0] + 40u), c.r[4].w[0]);
    c.f[5] = fp::add(c.f[5], c.f[7]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[4] = fp::add(c.f[4], c.f[8]);
    st32((c.r[29].w[0] + 32u), c.r[8].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[8]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[0]);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[11], c.f[0]);
    set32(c.r[5], 0u + 12u);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[12], c.f[0]);
    set32(c.r[6], 0u + 120u);
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[3], c.f[0]);
    set32(c.r[9], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[9].w[0] >> 31);
    set32(c.r[11], c.r[7].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[12].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[10].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] - c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));
    set32(c.r[8], 0u + 48u);
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE98u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0013FE98u) [[unlikely]] return; }
L_0013FE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013FEA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 9u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 14;
L_0013FEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FEE8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x0013FEE8u) [[unlikely]] return; }
L_0013FEE8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FEF4u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x0013FEF4u) [[unlikely]] return; }
L_0013FEF4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FEE0u | kUnwind; return; } goto L_0013FEE0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1732u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 15804u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF14u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0013FF14u) [[unlikely]] return; }
L_0013FF14:
    set32(c.r[16], c.r[16].w[0] + 5032u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1740u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF28u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0013FF28u) [[unlikely]] return; }
L_0013FF28:
    set32(c.r[6], ld32((c.r[19].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013FF48u) [[unlikely]] return; }
L_0013FF48:
    set32(c.r[6], ld32((c.r[19].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013FF68u) [[unlikely]] return; }
L_0013FF68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF78u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0013FF78u) [[unlikely]] return; }
L_0013FF78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20712u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF8Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0013FF8Cu) [[unlikely]] return; }
L_0013FF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF94u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0013FF94u) [[unlikely]] return; }
L_0013FF94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 12224u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 200u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013FFC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1740u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFF0u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x0013FFF0u) [[unlikely]] return; }
L_0013FFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFF8u);  if (depth < kMaxDepth) unit_0029(c, 411u, depth + 1u); else { c.pc = 0x001A78B8u; return; } if (c.pc != 0x0013FFF8u) [[unlikely]] return; }
L_0013FFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140000u);  if (depth < kMaxDepth) unit_0029(c, 374u, depth + 1u); else { c.pc = 0x001A7408u; return; } if (c.pc != 0x00140000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0010(c, 1u, depth);
}

}
