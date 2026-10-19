#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0022C308;
extern ps2::DecompFn hook_0022C620;
extern ps2::DecompFn hook_0022C630;
extern ps2::DecompFn hook_0022C838;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96,
    0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0022C000;
    case 2u: goto L_0022C00C;
    case 3u: goto L_0022C020;
    case 4u: goto L_0022C034;
    case 5u: goto L_0022C048;
    case 6u: goto L_0022C058;
    case 7u: goto L_0022C068;
    case 8u: goto L_0022C160;
    case 9u: goto L_0022C180;
    case 10u: goto L_0022C260;
    case 11u: goto L_0022C308;
    case 12u: goto L_0022C5B0;
    case 13u: goto L_0022C620;
    case 14u: goto L_0022C630;
    case 15u: goto L_0022C658;
    case 16u: goto L_0022C71C;
    case 17u: goto L_0022C728;
    case 18u: goto L_0022C748;
    case 19u: goto L_0022C798;
    case 20u: goto L_0022C7A8;
    case 21u: goto L_0022C7C4;
    case 22u: goto L_0022C7D8;
    case 23u: goto L_0022C828;
    case 24u: goto L_0022C838;
    case 25u: goto L_0022C85C;
    case 26u: goto L_0022C920;
    case 27u: goto L_0022C980;
    case 28u: goto L_0022CA10;
    case 29u: goto L_0022CB28;
    case 30u: goto L_0022CB78;
    case 31u: goto L_0022CBC8;
    case 32u: goto L_0022CC20;
    case 33u: goto L_0022CC90;
    case 34u: goto L_0022CCB8;
    case 35u: goto L_0022CE08;
    case 36u: goto L_0022CE98;
    case 37u: goto L_0022CF04;
    case 38u: goto L_0022CF1C;
    case 39u: goto L_0022D040;
    case 40u: goto L_0022D140;
    case 41u: goto L_0022D1A0;
    case 42u: goto L_0022D240;
    case 43u: goto L_0022D298;
    case 44u: goto L_0022D2E8;
    case 45u: goto L_0022D3F8;
    case 46u: goto L_0022D408;
    case 47u: goto L_0022D530;
    case 48u: goto L_0022D540;
    case 49u: goto L_0022D570;
    case 50u: goto L_0022D590;
    case 51u: goto L_0022D6DC;
    case 52u: goto L_0022D6F8;
    case 53u: goto L_0022D748;
    case 54u: goto L_0022D760;
    case 55u: goto L_0022D778;
    case 56u: goto L_0022D830;
    case 57u: goto L_0022D894;
    case 58u: goto L_0022D9D4;
    case 59u: goto L_0022DA08;
    case 60u: goto L_0022DA50;
    case 61u: goto L_0022DA88;
    case 62u: goto L_0022DB40;
    case 63u: goto L_0022DCB8;
    case 64u: goto L_0022DCF0;
    case 65u: goto L_0022DD48;
    case 66u: goto L_0022DD68;
    case 67u: goto L_0022DDA0;
    case 68u: goto L_0022DE60;
    case 69u: goto L_0022DFD8;
    case 70u: goto L_0022E020;
    case 71u: goto L_0022E110;
    case 72u: goto L_0022E164;
    case 73u: goto L_0022E17C;
    case 74u: goto L_0022E198;
    case 75u: goto L_0022E248;
    case 76u: goto L_0022E2A4;
    case 77u: goto L_0022E3F0;
    case 78u: goto L_0022E428;
    case 79u: goto L_0022E480;
    case 80u: goto L_0022E494;
    case 81u: goto L_0022E4A4;
    case 82u: goto L_0022E548;
    case 83u: goto L_0022E574;
    case 84u: goto L_0022E580;
    case 85u: goto L_0022E598;
    case 86u: goto L_0022E5A8;
    case 87u: goto L_0022E5D0;
    case 88u: goto L_0022E5E0;
    case 89u: goto L_0022E5F0;
    case 90u: goto L_0022E600;
    case 91u: goto L_0022E628;
    case 92u: goto L_0022E638;
    case 93u: goto L_0022E648;
    case 94u: goto L_0022E658;
    case 95u: goto L_0022E664;
    case 96u: goto L_0022E67C;
    case 97u: goto L_0022E688;
    case 98u: goto L_0022E698;
    case 99u: goto L_0022E6A4;
    case 100u: goto L_0022E6B4;
    case 101u: goto L_0022E6C4;
    case 102u: goto L_0022E6F8;
    case 103u: goto L_0022E728;
    case 104u: goto L_0022E758;
    case 105u: goto L_0022E7F8;
    case 106u: goto L_0022E858;
    case 107u: goto L_0022E880;
    case 108u: goto L_0022E910;
    case 109u: goto L_0022E968;
    case 110u: goto L_0022E9B8;
    case 111u: goto L_0022EBBC;
    case 112u: goto L_0022EC14;
    case 113u: goto L_0022ED50;
    case 114u: goto L_0022EE80;
    case 115u: goto L_0022F038;
    case 116u: goto L_0022F24C;
    case 117u: goto L_0022F280;
    case 118u: goto L_0022F498;
    case 119u: goto L_0022F4F0;
    case 120u: goto L_0022F6D0;
    case 121u: goto L_0022F800;
    case 122u: goto L_0022F9D0;
    case 123u: goto L_0022FC84;
    case 124u: goto L_0022FCC0;
    case 125u: goto L_0022FEAC;
    case 126u: goto L_0022FFB8;
    default: bad_entry(c, 0x0022C000u); return;
    }
L_0022C000:
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C00Cu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0022C00Cu) [[unlikely]] return; }
L_0022C00C:
    c.f[12] = fp::mul(c.f[23], c.f[22]);
    c.f[13] = c.f[21];
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C020u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0022C020u) [[unlikely]] return; }
L_0022C020:
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    c.f[21] = fp::add(c.f[0], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C034u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0022C034u) [[unlikely]] return; }
L_0022C034:
    c.f[21] = fp::mul(c.f[21], c.f[22]);
    c.f[23] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C048u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0022C048u) [[unlikely]] return; }
L_0022C048:
    set32(c.r[16], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C058u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0022C058u) [[unlikely]] return; }
L_0022C058:
    c.f[20] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C068u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0022C068u) [[unlikely]] return; }
L_0022C068:
    set32(c.r[4], c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[3] = c.f[23] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], c.f[3]);
    mmi::pextlw(c.r[8], c.r[6], c.r[2]);
    mmi::pextlw(c.r[9], c.r[2], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[4] = c.r[8];
    set32(c.r[7], c.f[0]);
    mmi::pextlw(c.r[8], c.r[2], c.r[5]);
    mmi::pextlw(c.r[9], c.r[2], c.r[16]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    mmi::pextlw(c.r[8], c.r[7], c.r[2]);
    mmi::pextlw(c.r[9], c.r[2], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[3] = c.r[8];
    set32(c.r[5], c.f[2]);
    set32(c.r[4], c.f[1]);
    mmi::pextlw(c.r[8], c.r[2], c.r[2]);
    mmi::pextlw(c.r[9], c.r[2], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[6] = c.r[8];
    set32(c.r[6], c.f[23]);
    mmi::pextlw(c.r[8], c.r[2], c.r[2]);
    mmi::pextlw(c.r[9], c.r[2], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[5] = c.r[8];
    mmi::pextlw(c.r[8], c.r[2], c.r[6]);
    mmi::pextlw(c.r[9], c.r[2], c.r[16]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.r[3].w[0] - 17840u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    set32(c.r[5], c.r[5].w[0] + 3424u);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    set32(c.r[7], c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[6], c.f[2]);
    mmi::pextlw(c.r[8], c.r[3], c.r[7]);
    mmi::pextlw(c.r[9], c.r[2], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C160u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0022C160u) [[unlikely]] return; }
L_0022C160:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[8]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[7]);
    set32(c.r[3], 0u + 5u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    c.budget -= 8;
L_0022C180:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 7u, c.vu0.vf[1].w[0]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc(c.vu0, 15u, 4u, c.vu0.vf[1].w[2]);
    vu::maddbc(c.vu0, 15u, 1u, 3u, c.vu0.vf[1].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 1u, 8u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.f[0]);
    c.vu0.vf[2] = c.r[4];
    vu::mr32(c.vu0, 1u, 1u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C180u | kUnwind; return; } goto L_0022C180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    c.f[3] = ld32((c.r[2].w[0] + 16820u));
    c.r[5] = c.vu0.vf[2];
    mmi::pcpyud(c.r[5], c.r[5], c.r[0]);
    mmi::prot3w(c.r[5], c.r[5]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6] = c.vu0.vf[1];
    mmi::pcpyud(c.r[6], c.r[6], c.r[0]);
    mmi::prot3w(c.r[6], c.r[6]);
    c.f[2] = ld32((c.r[2].w[0] + 16824u));
    c.f[0] = c.r[5].w[0];
    c.r[11].d[0] = 0ull + 0ull;
    c.f[1] = c.r[6].w[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[10].d[0] = 0ull + 0ull;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[15], c.r[17].w[0] + 128u);
    set32(c.r[14], c.r[17].w[0] + 144u);
    set32(c.r[13], c.r[17].w[0] + 160u);
    set32(c.r[7], c.f[0]);
    set32(c.r[12], c.r[17].w[0] + 176u);
    set32(c.r[2], c.f[1]);
    c.vu0.vf[3] = c.r[7];
    vu::mr32(c.vu0, 1u, 2u, 3u);
    c.vu0.vf[4] = c.r[2];
    vu::mr32(c.vu0, 1u, 1u, 4u);
    st128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[24], 0u + 3u);
    set32(c.r[16], 0u + 4u);
    set32(c.r[9], 0u + 5u);
    c.budget -= 35;
L_0022C260:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[11].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[10].w[0] << 6);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[15].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[14].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[6], c.r[13].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[12].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != c.r[24].d[0];  if (t) { goto L_0022C2C8; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_0022C2C8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[16].d[0];  if (t) { goto L_0022C2D8; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_0022C2D8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C260u | kUnwind; return; } goto L_0022C260; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 152u));
    c.f[22] = ld32((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C308:
    if (::decomp::hook_0022C308.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0022C308, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.vu0.vf[2] = c.r[5];
    ld128((c.r[4].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[2] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[1] = c.f[12] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C354; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C368; } }
L_0022C354:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C368; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C57C; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[2] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[1] = c.f[12] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[3] = c.f[1];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C3C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C3D4; } }
L_0022C3C0:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C3D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C57C; } }
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C428; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C43C; } }
L_0022C428:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C43C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C57C; } }
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C490; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C4A4; } }
L_0022C490:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C4A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C57C; } }
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C4F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C50C; } }
L_0022C4F8:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C50C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C57C; } }
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C560; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C574; } }
L_0022C560:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C574; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022C588; } }
L_0022C57C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C5A4; } }
L_0022C588:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] ^ 6ull;
    set32(c.r[2], 0u + 2u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 7;
L_0022C5A4:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C5B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.vu0.vf[1] = c.r[5];
    c.vu0.vf[2] = c.r[4];
    vu::mul(c.vu0, 14u, 5u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[2] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[1] = c.f[12] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C60C; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C610; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C610; } }
L_0022C60C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C610:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C620:
    if (::decomp::hook_0022C620.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0022C620, depth)) return; }
    st32((c.r[4].w[0] + 256u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C630:
    if (::decomp::hook_0022C630.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0022C630, depth)) return; }
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[18]);
    set32(c.r[9], c.r[4].w[0] + 128u);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[17]);
    set32(c.r[6], c.r[6].w[0] + 96u);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    set32(c.r[7], 0u - 1u);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[15]);
    c.f[0] = ld32((c.r[4].w[0] + 256u));
    set32(c.r[5], 0u + 7u);
    c.budget -= 10;
L_0022C658:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[14]);
    vu::mulabc(c.vu0, 15u, 18u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 17u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 16u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 14u, 15u, c.vu0.vf[14].w[3]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[9].w[0] + 64u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[9].w[0] + 80u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[9].w[0] + 96u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[9].w[0] + 112u) & ~15u, c.vu0.vf[12]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[13] = c.r[8];
    vu::mulbc(c.vu0, 1u, 13u, 0u, c.vu0.vf[13].w[0]);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 8u, c.vu0.vf[0].w[3]);
    vu::mulabc(c.vu0, 15u, 9u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 10u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 11u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 7u, 12u, c.vu0.vf[0].w[3]);
    vu::clip(c.vu0, 8u, 13u);
    vu::clip(c.vu0, 7u, 13u);
    set32(c.r[2], cfc2(c, 18u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 39;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C658u | kUnwind; return; } goto L_0022C658; } }
    c.r[2].d[0] = c.r[7].d[0] & 2730ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022C71C; } }
    c.r[3].d[0] = c.r[7].d[0] & 1365ull;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1365ull;
    set32(c.r[2], 0u + 2u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C71C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 1760u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C748:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], c.r[4].w[0] - 1760u);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.f[0]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[6], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[6], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[5] = c.vu0.vf[1];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C798u);  if (depth < kMaxDepth) unit_004B(c, 24u, depth + 1u); else { c.pc = 0x0022C838u; return; } if (c.pc != 0x0022C798u) [[unlikely]] return; }
L_0022C798:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C7A8:
    mmi::por(c.r[5], c.r[0], c.r[4]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 1760u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7C4u);  if (depth < kMaxDepth) unit_004B(c, 24u, depth + 1u); else { c.pc = 0x0022C838u; return; } if (c.pc != 0x0022C7C4u) [[unlikely]] return; }
L_0022C7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C7D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], c.r[4].w[0] - 384u);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.f[0]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[6], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[6], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[5] = c.vu0.vf[1];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C828u);  if (depth < kMaxDepth) unit_004B(c, 24u, depth + 1u); else { c.pc = 0x0022C838u; return; } if (c.pc != 0x0022C828u) [[unlikely]] return; }
L_0022C828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C838:
    if (::decomp::hook_0022C838.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0022C838, depth)) return; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16816u)));
    c.vu0.vf[14] = c.r[5];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C85Cu);  if (depth < kMaxDepth) unit_004B(c, 11u, depth + 1u); else { c.pc = 0x0022C308u; return; } if (c.pc != 0x0022C85Cu) [[unlikely]] return; }
L_0022C85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C910; } }
L_0022C864:
    set32(c.r[2], c.r[4].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0] + 64u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[2].w[0] + 80u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 96u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 112u) & ~15u, c.vu0.vf[12]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[13] = c.r[8];
    vu::mulbc(c.vu0, 1u, 13u, 0u, c.vu0.vf[13].w[0]);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 8u, c.vu0.vf[0].w[3]);
    vu::mulabc(c.vu0, 15u, 9u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 10u, c.vu0.vf[14].w[1]);
    vu::maddabc(c.vu0, 15u, 11u, c.vu0.vf[14].w[2]);
    vu::maddbc(c.vu0, 15u, 7u, 12u, c.vu0.vf[0].w[3]);
    vu::clip(c.vu0, 8u, 13u);
    vu::clip(c.vu0, 7u, 13u);
    set32(c.r[3], cfc2(c, 18u));
    set32(c.r[2], 0u + 0u);
    c.r[4].d[0] = c.r[3].d[0] & 2730ull;
    c.budget -= 34;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0022C910; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1365ull;
    set32(c.r[4], 0u + 1365u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C910; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0022C910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 9584u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022CB70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st64((c.r[4].w[0] - 9600u), c.r[2].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[4].w[0] - 9600u);
    set32(c.r[3], 0u + 3822u);
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[9], c.r[5].w[0] - 9664u);
    st32((c.r[9].w[0] + 4u), c.r[8].w[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[5].w[0] - 9664u), c.r[8].w[0]);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    st32((c.r[9].w[0] + 8u), 0u);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C998; } }
    c.budget -= 1;
L_0022C980:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C980u | kUnwind; return; } goto L_0022C980; } }
L_0022C998:
    set32(c.r[4], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022C9BC; } }
    set32(c.r[2], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022C9BC:
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[9].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[7].w[0] + 8u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[6], c.r[11].w[0] - 9664u);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    st32((c.r[9].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022CA2C; } }
L_0022CA10:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CA10u | kUnwind; return; } goto L_0022CA10; } }
L_0022CA2C:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[5], c.r[10].w[0] - 9600u);
    set32(c.r[12], c.r[11].w[0] - 9664u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], 0u + 68u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[6], 0u + 66u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[9], 0u + 71u);
    set32(c.r[4], ld32((c.r[11].w[0] - 9664u)));
    set32(c.r[10], 0u + 2u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[12].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    st32((c.r[11].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[11].w[0] - 9664u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[11].w[0] - 9664u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 44;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_0022CB04; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022CAF0u);  goto L_0022CAF4; }
L_0022CAF4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022CB04:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[12].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CB40; } }
L_0022CB28:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CB28u | kUnwind; return; } goto L_0022CB28; } }
L_0022CB40:
    st32((c.r[12].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[11].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[11].w[0] - 9664u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.budget -= 12;
L_0022CB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022CB78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9584u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022CC9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 7424u);
    set32(c.r[2], ld32((c.r[2].w[0] - 7424u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CC9C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CBE0; } }
    c.budget -= 1;
L_0022CBC8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CBC8u | kUnwind; return; } goto L_0022CBC8; } }
L_0022CBE0:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CC04; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022CC04:
    set32(c.r[5], ld32((c.r[8].w[0] - 9664u)));
    set32(c.r[7], c.r[8].w[0] - 9664u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CC38; } }
L_0022CC20:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CC20u | kUnwind; return; } goto L_0022CC20; } }
L_0022CC38:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022CC5C; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022CC5C:
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[8].w[0] - 9664u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[8].w[0] - 9664u)));
    set32(c.r[4], ld32((c.r[17].w[0] - 7424u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    st32((c.r[7].w[0] + 8u), 0u);
    set32(c.r[16], c.r[16].w[0] >> 4);
    set32(c.r[16], c.r[16].w[0] << 4);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC90u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0022CC90u) [[unlikely]] return; }
L_0022CC90:
    set32(c.r[3], ld32((c.r[17].w[0] - 7424u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] - 7424u), c.r[3].w[0]);
    c.budget -= 3;
L_0022CC9C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022CCB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9584u)));
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022D180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u - 32768u);
    c.r[3].d[0] = ld64((c.r[2].w[0] - 9632u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] - 9632u);
    set32(c.r[4], 0u + 1u);
    c.r[8].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st64((c.r[2].w[0] - 9632u), c.r[8].d[0]);
    c.budget -= 10;
    { const bool t = c.r[11].d[0] != c.r[4].d[0];  if (t) { goto L_0022CD5C; } }
    c.r[2].d[0] = ld64((c.r[9].w[0] + 8u));
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[7], 0u + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[5], 0u - 3841u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull | 49152ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    set32(c.r[5], 0u + 1280u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CD90; } }
L_0022CD5C:
    c.r[2].d[0] = ld64((c.r[9].w[0] + 8u));
    set32(c.r[4], 0u - 16u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    set32(c.r[5], 0u + 80u);
    c.budget -= 13;
L_0022CD90:
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[19].w[0] - 9632u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 8u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[19].w[0] - 9632u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 31;
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 15;
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    c.r[4].d[0] = c.r[10].d[0] & 2047ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 47;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[6], ld32((c.r[3].w[0] - 9664u)));
    st64((c.r[19].w[0] - 9632u), c.r[2].d[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], c.r[3].w[0] - 9664u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CE20; } }
L_0022CE08:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[6].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CE08u | kUnwind; return; } goto L_0022CE08; } }
L_0022CE20:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022CE44; } }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022CE44:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[17].w[0] - 9664u);
    st32((c.r[7].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] - 9664u)));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022CEB4; } }
L_0022CE98:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CE98u | kUnwind; return; } goto L_0022CE98; } }
L_0022CEB4:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0022D05C; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[3], 0u + 3822u);
    set32(c.r[16], c.r[18].w[0] - 9600u);
    st64((c.r[18].w[0] - 9600u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF04u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x0022CF04u) [[unlikely]] return; }
L_0022CF04:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF1Cu);  if (depth < kMaxDepth) unit_005B(c, 121u, depth + 1u); else { c.pc = 0x0026D2E8u; return; } if (c.pc != 0x0022CF1Cu) [[unlikely]] return; }
L_0022CF1C:
    set32(c.r[5], ld32((c.r[17].w[0] - 9664u)));
    set32(c.r[12], c.r[17].w[0] - 9664u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 19;
    st32((c.r[12].w[0] + 20u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[9], 0u + 63u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 6;
    c.r[5].d[0] = c.r[5].d[0] | 63ull;
    set32(c.r[10], 0u + 8u);
    set32(c.r[3], ld32((c.r[17].w[0] - 9664u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[11].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[8], 0u + 6u);
    set32(c.r[4], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    st32((c.r[17].w[0] - 9664u), c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[6], c.r[3].w[0] + 64u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[9], 0u + 2u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[17].w[0] - 9664u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[17].w[0] - 9664u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[11].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[17].w[0] - 9664u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 20u)));
    c.r[5].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.r[3].d[0] = c.r[5].d[0] >> 58;
    set32(c.r[6], c.r[6].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 53;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_0022D018; } }
    c.r[2].d[0] = c.r[5].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022D004u);  goto L_0022D008; }
L_0022D008:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022D018:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[5].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[12].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D058; } }
    c.budget -= 1;
L_0022D040:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D040u | kUnwind; return; } goto L_0022D040; } }
L_0022D058:
    st32((c.r[12].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0022D05C:
    set32(c.r[4], ld32((c.r[17].w[0] - 9664u)));
    set32(c.r[2], c.r[18].w[0] - 9600u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[11], c.r[17].w[0] - 9664u);
    st32((c.r[11].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[7], 0u + 68u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u + 66u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[9], 0u + 71u);
    set32(c.r[3], ld32((c.r[17].w[0] - 9664u)));
    set32(c.r[10], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    st32((c.r[17].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[17].w[0] - 9664u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[17].w[0] - 9664u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[11].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 38;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_0022D11C; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022D108u);  goto L_0022D10C; }
L_0022D10C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022D11C:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[11].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D158; } }
L_0022D140:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D140u | kUnwind; return; } goto L_0022D140; } }
L_0022D158:
    st32((c.r[11].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] - 9632u);
    set32(c.r[5], c.r[17].w[0] - 9664u);
    set32(c.r[3], ld32((c.r[17].w[0] - 9664u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[17].w[0] - 9664u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0] - 9664u), c.r[2].w[0]);
    c.budget -= 10;
L_0022D180:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9584u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022D2DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[9], c.r[3].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[3].w[0] - 9664u)));
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022D21C; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022D208u);  goto L_0022D20C; }
L_0022D20C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022D21C:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[10].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D258; } }
L_0022D240:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D240u | kUnwind; return; } goto L_0022D240; } }
L_0022D258:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[10].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[10].w[0] - 9664u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[10].w[0] - 9664u)));
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D2B0; } }
L_0022D298:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D298u | kUnwind; return; } goto L_0022D298; } }
L_0022D2B0:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022D2D4; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022D2D4:
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 2;
L_0022D2DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D2E8:
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = 0ull | 65518ull;
    set32(c.r[2], ld32((c.r[12].w[0])));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022D3F8; } }
    set32(c.r[3], ld32((c.r[12].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022D3F8; } }
    c.r[2].d[0] = 0ull | 65519ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D3F8; } }
    set32(c.r[2], ld32((c.r[12].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D3F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9584u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022D3EC; } }
    c.r[3].d[0] = ld64((c.r[10].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[5].w[0] - 9664u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[5].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 8u);
    st32((c.r[5].w[0] - 9664u), c.r[4].w[0]);
    set32(c.r[7], c.r[2].w[0] + 12u);
    set32(c.r[8], c.r[2].w[0] + 16u);
    set32(c.r[9], c.r[2].w[0] + 20u);
    c.r[3].d[0] = ld64((c.r[10].w[0] + 8u));
    set32(c.r[11], c.r[2].w[0] + 28u);
    set32(c.r[10], c.r[2].w[0] + 24u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[5].w[0] - 9664u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 9664u), c.r[7].w[0]);
    c.r[3].d[0] = ld64((c.r[12].w[0]));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[5].w[0] - 9664u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 9664u), c.r[9].w[0]);
    c.r[3].d[0] = ld64((c.r[12].w[0] + 8u));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[5].w[0] - 9664u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 9664u), c.r[11].w[0]);
    c.budget -= 42;
L_0022D3EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D3F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D408:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.f[2]);
    set32(c.r[7], c.f[1]);
    set32(c.r[10], c.f[4]);
    mmi::pextlw(c.r[8], c.r[7], c.r[2]);
    mmi::pextlw(c.r[9], c.r[3], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    set32(c.r[2], c.f[3]);
    set32(c.r[7], c.f[0]);
    set32(c.r[10], c.f[5]);
    mmi::pextlw(c.r[8], c.r[7], c.r[2]);
    mmi::pextlw(c.r[9], c.r[3], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[0] = c.r[1].w[0];
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    vu::mul(c.vu0, 14u, 5u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[5].w[0]);
    vu::addbc(c.vu0, 14u, 5u, 0u, c.vu0.q);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[10], c.r[6].w[0] >> 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[4]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    mmi::pextlw(c.r[8], c.r[5], c.r[3]);
    mmi::pextlw(c.r[9], c.r[3], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st32((c.r[29].w[0]), c.r[6].w[0]);
    vu::sub(c.vu0, 15u, 2u, 3u, 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    vu::add(c.vu0, 15u, 1u, 3u, 1u);
    vu::mulbc(c.vu0, 1u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mulbc(c.vu0, 1u, 1u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[6], 0u + 5u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[10].w[0]);
    c.budget -= 74;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D530u);  if (depth < kMaxDepth) unit_004C(c, 35u, depth + 1u); else { c.pc = 0x002309E0u; return; } if (c.pc != 0x0022D530u) [[unlikely]] return; }
L_0022D530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D540:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 66u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D570u);  if (depth < kMaxDepth) unit_004B(c, 34u, depth + 1u); else { c.pc = 0x0022CCB8u; return; } if (c.pc != 0x0022D570u) [[unlikely]] return; }
L_0022D570:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0022D6D0; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[12].d[0] = c.r[17].d[0] + 0ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 6;
L_0022D590:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[2]);
    set32(c.r[5], ld32((c.r[15].w[0] + 23004u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1728u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + 1928u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022D5E0; } }
    set32(c.r[2], c.r[4].w[0] + 1920u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 2;
L_0022D5E0:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[14].w[0] - 9584u)));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022D6BC; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[11].w[0] - 9664u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[6].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[9].w[0]);
    c.budget -= 41;
L_0022D6BC:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D590u | kUnwind; return; } goto L_0022D590; } }
L_0022D6D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D6DCu);  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022D1A0u; return; } if (c.pc != 0x0022D6DCu) [[unlikely]] return; }
L_0022D6DC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D6F8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 67u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D748u);  if (depth < kMaxDepth) unit_004B(c, 34u, depth + 1u); else { c.pc = 0x0022CCB8u; return; } if (c.pc != 0x0022D748u) [[unlikely]] return; }
L_0022D748:
    set32(c.r[16], c.r[16].w[0] + 3872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] - 320u);
    set32(c.r[6], c.r[4].w[0] - 448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D760u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0022D760u) [[unlikely]] return; }
L_0022D760:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_0022D9C8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[23], 0u + 120u);
    c.budget -= 3;
L_0022D778:
    mmi::div(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.budget -= 3;
    if (c.r[23].d[0] == 0ull) { breakpoint(c, 0x0022D780u);  goto L_0022D784; }
L_0022D784:
    set32(c.r[21], c.r[18].w[0] + 16u);
    set32(c.r[22], c.r[17].w[0] + 16u);
    set32(c.r[20], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D878; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022D878; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[10], c.r[9].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[9].w[0] - 9664u)));
    set32(c.r[8], ld32((c.r[10].w[0] + 20u)));
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022D80C; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022D7F8u);  goto L_0022D7FC; }
L_0022D7FC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022D80C:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[10].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[9].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D848; } }
L_0022D830:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D830u | kUnwind; return; } goto L_0022D830; } }
L_0022D848:
    st32((c.r[10].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 9632u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] - 9664u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 9664u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0] - 9664u), c.r[2].w[0]);
    c.budget -= 12;
L_0022D878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 3872u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D894u);  if (depth < kMaxDepth) unit_00A1(c, 151u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x0022D894u) [[unlikely]] return; }
L_0022D894:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = 0ull | 65518ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022D9B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022D9B0; } }
    c.r[2].d[0] = 0ull | 65519ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D9B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D9B0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 9584u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022D9AC; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[16].w[0] - 9664u)));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] - 9664u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[16].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[16].w[0] - 9664u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] - 9664u), c.r[6].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] - 9664u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 9664u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] - 9664u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 9664u), c.r[9].w[0]);
    c.budget -= 41;
L_0022D9AC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0022D9B0:
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D778u | kUnwind; return; } goto L_0022D778; } }
L_0022D9C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9D4u);  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022D1A0u; return; } if (c.pc != 0x0022D9D4u) [[unlikely]] return; }
L_0022D9D4:
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
L_0022DA08:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 77u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA50u);  if (depth < kMaxDepth) unit_004B(c, 34u, depth + 1u); else { c.pc = 0x0022CCB8u; return; } if (c.pc != 0x0022DA50u) [[unlikely]] return; }
L_0022DA50:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0022DCB0; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[30], c.r[11].w[0] - 9664u);
    set32(c.r[25], 0u + 120u);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[22], 0u + 1u);
    set32(c.r[21], 0u + 2u);
    set32(c.r[20], 0u + 16u);
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 10;
L_0022DA88:
    mmi::div(c, 0, c.r[3].w[0], c.r[25].w[0]);
    c.budget -= 3;
    if (c.r[25].d[0] == c.r[23].d[0]) { breakpoint(c, 0x0022DA90u);  goto L_0022DA94; }
L_0022DA94:
    set32(c.r[14], c.r[4].w[0] + 1u);
    set32(c.r[15], c.r[17].w[0] + 16u);
    set32(c.r[24], c.r[16].w[0] + 16u);
    set32(c.r[13], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022DB80; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022DB80; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[9], c.r[8].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[8].w[0] - 9664u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[22].d[0];
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_0022DB18; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[20].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022DB04u);  goto L_0022DB08; }
L_0022DB08:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022DB18:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[8].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DB58; } }
    c.budget -= 1;
L_0022DB40:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DB40u | kUnwind; return; } goto L_0022DB40; } }
L_0022DB58:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 9632u);
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    st32((c.r[30].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[11].w[0] - 9664u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[11].w[0] - 9664u), c.r[2].w[0]);
    c.budget -= 10;
L_0022DB80:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] - 9584u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 1928u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DC94; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[11].w[0] - 9664u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[6].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[9].w[0]);
    c.budget -= 41;
L_0022DC94:
    c.r[3].d[0] = c.r[13].d[0] + 0ull;
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    c.r[17].d[0] = c.r[15].d[0] + 0ull;
    c.r[16].d[0] = c.r[24].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DA88u | kUnwind; return; } goto L_0022DA88; } }
L_0022DCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCB8u);  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022D1A0u; return; } if (c.pc != 0x0022DCB8u) [[unlikely]] return; }
L_0022DCB8:
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
L_0022DCF0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u + 100u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022DD38u);  goto L_0022DD3C; }
L_0022DD3C:
    c.r[23].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[23].sd[0] < 0;  if (t) { goto L_0022DFE8; } }
L_0022DD48:
    c.r[2].d[0] = c.r[16].sd[0] < 101ll ? 1ull : 0ull;
    set32(c.r[20], 0u + 100u);
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[16].d[0];
    set32(c.r[4], 0u + 75u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[16].w[0] - 100u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD68u);  if (depth < kMaxDepth) unit_004B(c, 34u, depth + 1u); else { c.pc = 0x0022CCB8u; return; } if (c.pc != 0x0022DD68u) [[unlikely]] return; }
L_0022DD68:
    set32(c.r[21], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0022DFCC; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[13], 0u + 120u);
    set32(c.r[30], 0u + 2u);
    set32(c.r[25], 0u + 16u);
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    c.budget -= 7;
L_0022DDA0:
    mmi::div(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { breakpoint(c, 0x0022DDA8u);  goto L_0022DDAC; }
L_0022DDAC:
    set32(c.r[24], c.r[4].w[0] + 1u);
    set32(c.r[18], c.r[20].w[0] << 1);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], c.r[19].w[0] + 8u);
    set32(c.r[15], c.r[17].w[0] + 4u);
    set32(c.r[14], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022DEA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022DEA8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[9], c.r[8].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[8].w[0] - 9664u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_0022DE38; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[25].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022DE24u);  goto L_0022DE28; }
L_0022DE28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022DE38:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[8].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DE78; } }
    c.budget -= 1;
L_0022DE60:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DE60u | kUnwind; return; } goto L_0022DE60; } }
L_0022DE78:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 9632u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 9664u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[11].w[0] - 9664u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[11].w[0] - 9664u), c.r[2].w[0]);
    c.budget -= 12;
L_0022DEA8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] + 1928u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0] - 9584u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DFAC; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[11].w[0] - 9664u)));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[11].w[0] - 9664u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[6].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 9664u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 9664u), c.r[9].w[0]);
    c.budget -= 41;
L_0022DFAC:
    c.r[3].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[24].d[0] + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[15].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DDA0u | kUnwind; return; } goto L_0022DDA0; } }
L_0022DFCC:
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DFD8u);  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022D1A0u; return; } if (c.pc != 0x0022DFD8u) [[unlikely]] return; }
L_0022DFD8:
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[23].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DD48u | kUnwind; return; } goto L_0022DD48; } }
L_0022DFE8:
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
L_0022E020:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[3].w[0] + 3424u);
    c.f[5] = ld32((c.r[3].w[0] + 3424u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] + 32u);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[6], c.r[2].w[0] + 48u);
    set32(c.r[12], c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[7], c.f[5]);
    set32(c.r[10], c.f[3]);
    set32(c.r[11], c.f[1]);
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    mmi::pextlw(c.r[8], c.r[10], c.r[7]);
    mmi::pextlw(c.r[9], c.r[12], c.r[11]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[4] = c.r[8];
    c.f[4] = ld32((c.r[2].w[0] + 16u));
    c.f[9] = ld32((c.r[2].w[0] + 48u));
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[5], c.f[2]);
    set32(c.r[7], c.f[0]);
    c.f[8] = ld32((c.r[6].w[0] + 12u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[7] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[2], c.f[4]);
    set32(c.r[10], c.f[6]);
    mmi::pextlw(c.r[8], c.r[5], c.r[2]);
    mmi::pextlw(c.r[9], c.r[10], c.r[7]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[3] = c.r[8];
    set32(c.r[11], c.f[5]);
    set32(c.r[12], c.f[3]);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.f[7]);
    set32(c.r[5], c.f[9]);
    mmi::pextlw(c.r[8], c.r[12], c.r[11]);
    mmi::pextlw(c.r[9], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    set32(c.r[6], c.f[2]);
    set32(c.r[7], c.f[0]);
    set32(c.r[10], c.f[8]);
    mmi::pextlw(c.r[8], c.r[6], c.r[5]);
    mmi::pextlw(c.r[9], c.r[10], c.r[7]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    c.budget -= 59;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E110:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E164u);  if (depth < kMaxDepth) unit_004B(c, 34u, depth + 1u); else { c.pc = 0x0022CCB8u; return; } if (c.pc != 0x0022E164u) [[unlikely]] return; }
L_0022E164:
    set32(c.r[16], c.r[16].w[0] + 3872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] - 320u);
    set32(c.r[6], c.r[4].w[0] - 448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E17Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0022E17Cu) [[unlikely]] return; }
L_0022E17C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_0022E3E4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[21], 0u + 120u);
    set32(c.r[30], c.r[16].w[0] - 9664u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 5;
L_0022E198:
    mmi::div(c, 0, c.r[19].w[0], c.r[21].w[0]);
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x0022E1A0u);  goto L_0022E1A4; }
L_0022E1A4:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022E288; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0022E288; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[10], c.r[9].w[0] - 9664u);
    set32(c.r[2], ld32((c.r[9].w[0] - 9664u)));
    set32(c.r[8], ld32((c.r[10].w[0] + 20u)));
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[23].d[0];
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022E220; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022E20Cu);  goto L_0022E210; }
L_0022E210:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022E220:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[10].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[9].w[0] - 9664u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E260; } }
    c.budget -= 1;
L_0022E248:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E248u | kUnwind; return; } goto L_0022E248; } }
L_0022E260:
    st32((c.r[10].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 9632u);
    set32(c.r[3], ld32((c.r[16].w[0] - 9664u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    st32((c.r[30].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0] - 9664u), c.r[2].w[0]);
    c.budget -= 10;
L_0022E288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 3872u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E2A4u);  if (depth < kMaxDepth) unit_00A1(c, 151u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x0022E2A4u) [[unlikely]] return; }
L_0022E2A4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = 0ull | 65518ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022E3C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022E3C8; } }
    c.r[2].d[0] = 0ull | 65519ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022E3C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022E3C8; } }
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] - 9584u)));
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022E3BC; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[16].w[0] - 9664u)));
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] - 9664u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[16].w[0] - 9664u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[16].w[0] - 9664u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] - 9664u), c.r[6].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] - 9664u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 9664u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] - 9664u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 9664u), c.r[9].w[0]);
    c.budget -= 41;
L_0022E3BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3D0; } }
L_0022E3C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0022E3E4; } }
L_0022E3D0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E198u | kUnwind; return; } goto L_0022E198; } }
L_0022E3E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3F0u);  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022D1A0u; return; } if (c.pc != 0x0022E3F0u) [[unlikely]] return; }
L_0022E3F0:
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
L_0022E428:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[4].w[0] + 2048u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[5].w[0] + 2048u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[6].w[0] + 2048u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[23], c.r[7].w[0] + 2048u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 71u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E480u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0022E480u) [[unlikely]] return; }
L_0022E480:
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[4], 0u + 66u);
    set32(c.r[5], 0u + 68u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E494u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0022E494u) [[unlikely]] return; }
L_0022E494:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4A4u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0022E4A4u) [[unlikely]] return; }
L_0022E4A4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], 0u - 32768u);
    c.r[2].d[0] = ld64((c.r[7].w[0] - 9632u));
    set32(c.r[17], c.r[7].w[0] - 9632u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    c.r[5].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 31;
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull | 64512ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 15;
    c.r[4].d[0] = c.r[4].d[0] | 32767ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], 0u - 241u);
    c.r[4].d[0] = 0ull | 35840ull;
    c.r[4].d[0] = c.r[4].d[0] << 38;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 80u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st64((c.r[7].w[0] - 9632u), c.r[2].d[0]);
    set32(c.r[4], 0u + 2u);
    st64((c.r[17].w[0] + 8u), c.r[5].d[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E548u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0022E548u) [[unlikely]] return; }
L_0022E548:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], c.r[16].w[0] - 9536u);
    st32((c.r[30].w[0] + 5520u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 9520u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E574u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x0022E574u) [[unlikely]] return; }
L_0022E574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E580u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x0022E580u) [[unlikely]] return; }
L_0022E580:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E598u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x0022E598u) [[unlikely]] return; }
L_0022E598:
    ld128((c.r[17].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5A8u);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x0022E5A8u) [[unlikely]] return; }
L_0022E5A8:
    c.r[5].d[0] = ld64((c.r[21].w[0]));
    set32(c.r[19], c.r[19].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] << 4);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5D0u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E5D0u) [[unlikely]] return; }
L_0022E5D0:
    c.r[5].d[0] = ld64((c.r[21].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5E0u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E5E0u) [[unlikely]] return; }
L_0022E5E0:
    c.r[5].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5F0u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E5F0u) [[unlikely]] return; }
L_0022E5F0:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E600u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E600u) [[unlikely]] return; }
L_0022E600:
    c.r[5].d[0] = ld64((c.r[21].w[0]));
    set32(c.r[22], c.r[22].w[0] << 4);
    set32(c.r[23], c.r[23].w[0] << 4);
    st32((c.r[29].w[0]), c.r[22].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[23].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E628u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E628u) [[unlikely]] return; }
L_0022E628:
    c.r[5].d[0] = ld64((c.r[21].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E638u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E638u) [[unlikely]] return; }
L_0022E638:
    c.r[5].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E648u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E648u) [[unlikely]] return; }
L_0022E648:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E658u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0022E658u) [[unlikely]] return; }
L_0022E658:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E664u);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x0022E664u) [[unlikely]] return; }
L_0022E664:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E67Cu);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x0022E67Cu) [[unlikely]] return; }
L_0022E67C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E688u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x0022E688u) [[unlikely]] return; }
L_0022E688:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E698u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0022E698u) [[unlikely]] return; }
L_0022E698:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6A4u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0022E6A4u) [[unlikely]] return; }
L_0022E6A4:
    set32(c.r[4], ld32((c.r[30].w[0] + 5520u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6B4u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0022E6B4u) [[unlikely]] return; }
L_0022E6B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6C4u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0022E6C4u) [[unlikely]] return; }
L_0022E6C4:
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
L_0022E6F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 7424u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E744; } }
L_0022E728:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E728u | kUnwind; return; } goto L_0022E728; } }
L_0022E744:
    set32(c.r[4], ld32((c.r[9].w[0] - 7424u)));
    set32(c.r[8], c.r[9].w[0] - 7424u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E770; } }
L_0022E758:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E758u | kUnwind; return; } goto L_0022E758; } }
L_0022E770:
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022E794; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022E794:
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[7], c.r[9].w[0] - 7424u);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    set32(c.r[4], 0u - 16u);
    st32((c.r[8].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[9].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[9].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E814; } }
L_0022E7F8:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E7F8u | kUnwind; return; } goto L_0022E7F8; } }
L_0022E814:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[5], 0u - 16u);
    set32(c.r[6], c.r[9].w[0] - 7424u);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] - 7424u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E874; } }
    c.budget -= 1;
L_0022E858:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E858u | kUnwind; return; } goto L_0022E858; } }
L_0022E874:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E880:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[9], c.r[3].w[0] - 7424u);
    set32(c.r[2], ld32((c.r[3].w[0] - 7424u)));
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022E8EC; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022E8D8u);  goto L_0022E8DC; }
L_0022E8DC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022E8EC:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[10].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E928; } }
L_0022E910:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E910u | kUnwind; return; } goto L_0022E910; } }
L_0022E928:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[10].w[0] - 7424u);
    set32(c.r[2], ld32((c.r[10].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[10].w[0] - 7424u)));
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E980; } }
L_0022E968:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E968u | kUnwind; return; } goto L_0022E968; } }
L_0022E980:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022E9A4; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0022E9A4:
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E9B8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_0022F24C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] + 17176u);
    c.f[1] = ld32((c.r[2].w[0] + 17176u));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[5] = c.r[1].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.f[3] = c.f[5];
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EA6C; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022EA6C:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EA80; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022EA80:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 33u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EAC4; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022EAC4:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EAD8; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022EAD8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 34u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EB1C; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022EB1C:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EB30; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022EB30:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 35u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EB74; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022EB74:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022EB88; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022EB88:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 32u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 34u));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EBBCu);  if (depth < kMaxDepth) unit_004B(c, 102u, depth + 1u); else { c.pc = 0x0022E6F8u; return; } if (c.pc != 0x0022EBBCu) [[unlikely]] return; }
L_0022EBBC:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0022ED74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[2].w[0] + 20552u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 20552u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[19], c.r[16].w[0] - 7424u);
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 7424u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0] - 7424u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EC14u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0022EC14u) [[unlikely]] return; }
L_0022EC14:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], ld32((c.r[16].w[0] - 7424u)));
    set32(c.r[8], 0u + 96u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[7], 0u + 20u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] + 32u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[9], 0u + 68u);
    st32((c.r[16].w[0] - 7424u), c.r[4].w[0]);
    set32(c.r[10], 0u + 66u);
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + 48u);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[8], 0u + 8u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[6], c.r[2].w[0] + 64u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00050000u);
    st32((c.r[16].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[7], 0u + 71u);
    st32((c.r[2].w[0] + 32u), c.r[9].w[0]);
    set32(c.r[4], c.r[2].w[0] + 80u);
    st32((c.r[5].w[0] + 8u), c.r[10].w[0]);
    c.r[13].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[9], 0u + 2u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[4].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 57;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_0022ED20; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022ED0Cu);  goto L_0022ED10; }
L_0022ED10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022ED20:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[9], c.r[20].w[0] << 1);
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[13].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022ED68; } }
    c.budget -= 1;
L_0022ED50:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022ED50u | kUnwind; return; } goto L_0022ED50; } }
L_0022ED68:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022EE9C; } }
L_0022ED74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[2].w[0] + 20568u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 20568u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[12], c.r[6].w[0] - 7424u);
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    set32(c.r[8], 0u + 68u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[7], 0u + 66u);
    set32(c.r[3], ld32((c.r[6].w[0] - 7424u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00050000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[9], 0u + 71u);
    st32((c.r[12].w[0] + 20u), c.r[3].w[0]);
    c.r[13].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[11], 0u + 2u);
    set32(c.r[3], ld32((c.r[6].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    st32((c.r[6].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 45;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_0022EE50; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022EE3Cu);  goto L_0022EE40; }
L_0022EE40:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022EE50:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[9], c.r[20].w[0] << 1);
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[12].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[13].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022EE98; } }
    c.budget -= 1;
L_0022EE80:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EE80u | kUnwind; return; } goto L_0022EE80; } }
L_0022EE98:
    st32((c.r[12].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0022EE9C:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0022EF40; } }
    c.r[2].d[0] = ld64((c.r[8].w[0] - 9632u));
    set32(c.r[6], c.r[8].w[0] - 9632u);
    set32(c.r[3], 0u - 32768u);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 31;
    set32(c.r[3], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 15;
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 42496ull;
    c.r[5].d[0] = c.r[5].d[0] << 38;
    set32(c.r[3], 0u - 3841u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], 0u + 1280u);
    c.budget -= 39;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022EFC4; } }
L_0022EF40:
    c.r[2].d[0] = ld64((c.r[8].w[0] - 9632u));
    set32(c.r[3], 0u - 32768u);
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[6], c.r[8].w[0] - 9632u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 31;
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 15;
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 45056ull;
    c.r[5].d[0] = c.r[5].d[0] << 35;
    set32(c.r[3], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], 0u + 80u);
    c.budget -= 33;
L_0022EFC4:
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[8].w[0] - 9632u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[6].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[2], c.r[13].w[0] - 7424u);
    set32(c.r[4], ld32((c.r[13].w[0] - 7424u)));
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[13].w[0] - 7424u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[13].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[20].w[0]);
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0022F240; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    set32(c.r[16], c.r[2].w[0] - 18600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[9] = c.r[1].w[0];
    set32(c.r[12], c.r[14].w[0] + 17152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[8] = c.r[1].w[0];
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 14;
L_0022F038:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0022F0AC; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    set32(c.r[3], ld32((c.r[11].w[0] - 7424u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[29].w[0] + 56u), c.f[10]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[11].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[6].w[0]);
    c.budget -= 27;
L_0022F0AC:
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = ld32((c.r[12].w[0] + 4u));
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[1] = ld32((c.r[14].w[0] + 17152u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[2] = ld32((c.r[12].w[0] + 16u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[7] = ld32((c.r[12].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[6] = ld32((c.r[12].w[0] + 20u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[3], ld32((c.r[15].w[0] + 23004u)));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[9]);
    fpu_div(c, 1u, c.f[1], c.f[8]);
    fpu_div(c, 0u, c.f[0], c.f[8]);
    c.f[1] = fp::sub(c.f[1], c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[8]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 27648u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 37;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F158; } }
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 30720u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F168; } }
L_0022F158:
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 30848u);
    c.budget -= 4;
L_0022F168:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[3], ld32((c.r[11].w[0] - 7424u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[29].w[0] + 8u), c.r[23].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[11].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[6].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[9].w[0]);
    c.budget -= 54;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F038u | kUnwind; return; } goto L_0022F038; } }
L_0022F240:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F24Cu);  if (depth < kMaxDepth) unit_004B(c, 107u, depth + 1u); else { c.pc = 0x0022E880u; return; } if (c.pc != 0x0022F24Cu) [[unlikely]] return; }
L_0022F24C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022F280:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 22;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0022FC84; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] + 17176u);
    c.f[1] = ld32((c.r[2].w[0] + 17176u));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[5] = c.r[1].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.f[3] = c.f[5];
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F348; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022F348:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F35C; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022F35C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 33u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F3A0; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022F3A0:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F3B4; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022F3B4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 34u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F3F8; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022F3F8:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F40C; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022F40C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 35u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F450; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022F450:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F464; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022F464:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 32u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 34u));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F498u);  if (depth < kMaxDepth) unit_004B(c, 102u, depth + 1u); else { c.pc = 0x0022E6F8u; return; } if (c.pc != 0x0022F498u) [[unlikely]] return; }
L_0022F498:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0022F6F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[2].w[0] + 20552u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 20552u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[16].w[0] - 7424u);
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 7424u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0] - 7424u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4F0u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0022F4F0u) [[unlikely]] return; }
L_0022F4F0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 6;
    c.r[3].d[0] = c.r[3].d[0] | 63ull;
    c.r[4].d[0] = ld64((c.r[20].w[0] + 560u));
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    set32(c.r[12], ld32((c.r[16].w[0] - 7424u)));
    set32(c.r[9], 0u + 6u);
    mmi::por(c.r[2], c.r[0], c.r[4]);
    set32(c.r[8], 0u + 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[12].w[0] + 16u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[5], c.r[12].w[0] + 32u);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[10], 0u + 8u);
    set32(c.r[13], c.r[12].w[0] + 48u);
    c.r[14].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[11], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[12].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[12].w[0]), c.r[2].w[0]);
    st32((c.r[12].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[12].w[0] + 12u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[4].w[0]);
    st32((c.r[12].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[5].w[0]);
    st32((c.r[12].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[16].w[0] - 7424u), c.r[13].w[0]);
    c.budget -= 44;
    { const bool t = c.r[22].d[0] != c.r[11].d[0];  if (t) { goto L_0022F5CC; } }
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 66u);
    st32((c.r[12].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], 0u + 128u);
    st32((c.r[13].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[12].w[0] + 64u);
    st32((c.r[13].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[13].w[0] + 12u), 0u);
    st32((c.r[14].w[0] - 7424u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F61C; } }
L_0022F5CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_0022F5FC; } }
    set32(c.r[2], 0u + 66u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[12].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[12].w[0] + 64u);
    st32((c.r[13].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[13].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[13].w[0] + 12u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F618; } }
L_0022F5FC:
    set32(c.r[2], 0u + 68u);
    set32(c.r[3], 0u + 66u);
    st32((c.r[12].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[12].w[0] + 64u);
    st32((c.r[13].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[13].w[0] + 12u), 0u);
    st32((c.r[13].w[0] + 4u), 0u);
    c.budget -= 7;
L_0022F618:
    st32((c.r[14].w[0] - 7424u), c.r[4].w[0]);
    c.budget -= 1;
L_0022F61C:
    set32(c.r[3], ld32((c.r[14].w[0] - 7424u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[5], 0u + 71u);
    c.r[2].d[0] = c.r[2].d[0] | 12301ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[9], c.r[14].w[0] - 7424u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[14].w[0] - 7424u), c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[4].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022F6A4; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022F690u);  goto L_0022F694; }
L_0022F694:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022F6A4:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[11], c.r[19].w[0] << 1);
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[14].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F6E8; } }
L_0022F6D0:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F6D0u | kUnwind; return; } goto L_0022F6D0; } }
L_0022F6E8:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F81C; } }
L_0022F6F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[2].w[0] + 20568u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 20568u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[12], c.r[6].w[0] - 7424u);
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    set32(c.r[10], 0u + 68u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[9], 0u + 66u);
    set32(c.r[3], ld32((c.r[6].w[0] - 7424u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00050000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.r[7].d[0] = c.r[7].d[0] | 12301ull;
    st32((c.r[12].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[8], 0u + 71u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[14].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[11], 0u + 2u);
    set32(c.r[3], ld32((c.r[6].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    st32((c.r[6].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 46;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_0022F7D4; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022F7C0u);  goto L_0022F7C4; }
L_0022F7C4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022F7D4:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[11], c.r[19].w[0] << 1);
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[12].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[14].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F818; } }
L_0022F800:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F800u | kUnwind; return; } goto L_0022F800; } }
L_0022F818:
    st32((c.r[12].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0022F81C:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0022F8C0; } }
    c.r[2].d[0] = ld64((c.r[10].w[0] - 9632u));
    set32(c.r[6], c.r[10].w[0] - 9632u);
    set32(c.r[3], 0u - 32768u);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 31;
    set32(c.r[3], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 15;
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 42496ull;
    c.r[5].d[0] = c.r[5].d[0] << 38;
    set32(c.r[3], 0u - 3841u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], 0u + 1280u);
    c.budget -= 39;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F944; } }
L_0022F8C0:
    c.r[2].d[0] = ld64((c.r[10].w[0] - 9632u));
    set32(c.r[3], 0u - 32768u);
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[6], c.r[10].w[0] - 9632u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 31;
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 15;
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 38400ull;
    c.r[5].d[0] = c.r[5].d[0] << 38;
    set32(c.r[3], 0u - 241u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], 0u + 80u);
    c.budget -= 33;
L_0022F944:
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[10].w[0] - 9632u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[6].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[2], c.r[14].w[0] - 7424u);
    set32(c.r[4], ld32((c.r[14].w[0] - 7424u)));
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[14].w[0] - 7424u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[14].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[8], c.r[11].w[0] + c.r[19].w[0]);
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0022FC78; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B000000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[16], c.r[2].w[0] - 18600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[12], c.r[14].w[0] + 17152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[9] = c.r[1].w[0];
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[8] = c.r[1].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[11] = c.r[1].w[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.f[10] = c.r[1].w[0];
    c.budget -= 20;
L_0022F9D0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0022FAD8; } }
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    c.f[6] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[2] = fp::add(c.f[1], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.budget -= 22;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0022FA74; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0022FA74; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 360u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 362u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::mul(c.f[1], c.f[13]);
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 12;
L_0022FA74:
    st32((c.r[29].w[0] + 48u), c.f[4]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    set32(c.r[3], ld32((c.r[11].w[0] - 7424u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[29].w[0] + 56u), c.f[11]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[11].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[6].w[0]);
    c.budget -= 25;
L_0022FAD8:
    c.f[4] = c.r[8].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = ld32((c.r[12].w[0] + 4u));
    c.f[5] = c.r[7].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[1] = ld32((c.r[14].w[0] + 17152u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[2] = ld32((c.r[12].w[0] + 16u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[7] = ld32((c.r[12].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[6] = ld32((c.r[12].w[0] + 20u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[3], ld32((c.r[15].w[0] + 23004u)));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[9]);
    fpu_div(c, 1u, c.f[1], c.f[8]);
    fpu_div(c, 0u, c.f[0], c.f[8]);
    c.f[1] = fp::sub(c.f[1], c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[8]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 27648u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 39;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022FB8C; } }
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 30720u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FB9C; } }
L_0022FB8C:
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 30848u);
    c.budget -= 4;
L_0022FB9C:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = fp::mul(c.f[20], c.f[10]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0] - 7424u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    st32((c.r[11].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] + 8u);
    st32((c.r[11].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 12u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + 20u);
    set32(c.r[10], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 28u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[5].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[8].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[11].w[0] - 7424u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[11].w[0] - 7424u), c.r[9].w[0]);
    c.budget -= 55;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F9D0u | kUnwind; return; } goto L_0022F9D0; } }
L_0022FC78:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC84u);  if (depth < kMaxDepth) unit_004B(c, 107u, depth + 1u); else { c.pc = 0x0022E880u; return; } if (c.pc != 0x0022FC84u) [[unlikely]] return; }
L_0022FC84:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022FCC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_004C(c, 3u, depth); } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] + 17176u);
    c.f[1] = ld32((c.r[2].w[0] + 17176u));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[5] = c.r[1].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.f[3] = c.f[5];
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FD5C; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022FD5C:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FD70; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022FD70:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 33u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FDB4; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022FDB4:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FDC8; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022FDC8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 34u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FE0C; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022FE0C:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FE20; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022FE20:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 35u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    c.f[3] = c.f[5];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FE64; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0022FE64:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[0] = c.f[4];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FE78; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_0022FE78:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 32u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 34u));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEACu);  if (depth < kMaxDepth) unit_004B(c, 102u, depth + 1u); else { c.pc = 0x0022E6F8u; return; } if (c.pc != 0x0022FEACu) [[unlikely]] return; }
L_0022FEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[2].w[0] + 20568u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 20568u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    set32(c.r[12], c.r[6].w[0] - 7424u);
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    set32(c.r[8], 0u + 68u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[7], 0u + 66u);
    set32(c.r[3], ld32((c.r[6].w[0] - 7424u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00050000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[9], 0u + 71u);
    st32((c.r[12].w[0] + 20u), c.r[3].w[0]);
    c.r[13].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[11], 0u + 2u);
    set32(c.r[3], ld32((c.r[6].w[0] - 7424u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    st32((c.r[6].w[0] - 7424u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[3].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 45;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_0022FF88; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0022FF74u);  goto L_0022FF78; }
L_0022FF78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0022FF88:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[9], c.r[17].w[0] << 1);
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    st32((c.r[12].w[0] + 20u), 0u);
    set32(c.r[7], ld32((c.r[13].w[0] - 7424u)));
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FFD0; } }
    c.budget -= 1;
L_0022FFB8:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FFB8u | kUnwind; return; } goto L_0022FFB8; } }
L_0022FFD0:
    c.r[2].d[0] = ld64((c.r[8].w[0] - 9632u));
    set32(c.r[3], 0u - 32768u);
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[6], c.r[8].w[0] - 9632u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 12;
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}
