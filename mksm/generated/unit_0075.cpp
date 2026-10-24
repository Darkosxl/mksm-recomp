#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_002D44B8;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D401C;
    case 3u: goto L_002D4090;
    case 4u: goto L_002D40A0;
    case 5u: goto L_002D40CC;
    case 6u: goto L_002D40D8;
    case 7u: goto L_002D410C;
    case 8u: goto L_002D4118;
    case 9u: goto L_002D4138;
    case 10u: goto L_002D4184;
    case 11u: goto L_002D4190;
    case 12u: goto L_002D4220;
    case 13u: goto L_002D4230;
    case 14u: goto L_002D4248;
    case 15u: goto L_002D4274;
    case 16u: goto L_002D4288;
    case 17u: goto L_002D42A0;
    case 18u: goto L_002D42B8;
    case 19u: goto L_002D42CC;
    case 20u: goto L_002D4350;
    case 21u: goto L_002D4360;
    case 22u: goto L_002D4368;
    case 23u: goto L_002D4370;
    case 24u: goto L_002D43A0;
    case 25u: goto L_002D43C8;
    case 26u: goto L_002D4470;
    case 27u: goto L_002D4490;
    case 28u: goto L_002D44A8;
    case 29u: goto L_002D44B8;
    case 30u: goto L_002D4514;
    case 31u: goto L_002D4544;
    case 32u: goto L_002D456C;
    case 33u: goto L_002D4580;
    case 34u: goto L_002D4598;
    case 35u: goto L_002D45C8;
    case 36u: goto L_002D46A0;
    case 37u: goto L_002D46D4;
    case 38u: goto L_002D46F8;
    case 39u: goto L_002D4710;
    case 40u: goto L_002D476C;
    case 41u: goto L_002D4790;
    case 42u: goto L_002D47E4;
    case 43u: goto L_002D4808;
    case 44u: goto L_002D4860;
    case 45u: goto L_002D4880;
    case 46u: goto L_002D49B0;
    case 47u: goto L_002D4A20;
    case 48u: goto L_002D4A2C;
    case 49u: goto L_002D4A40;
    case 50u: goto L_002D4A74;
    case 51u: goto L_002D4A88;
    case 52u: goto L_002D4AAC;
    case 53u: goto L_002D4AD4;
    case 54u: goto L_002D4B20;
    case 55u: goto L_002D4B7C;
    case 56u: goto L_002D4BD0;
    case 57u: goto L_002D4C00;
    case 58u: goto L_002D4C38;
    case 59u: goto L_002D4C58;
    case 60u: goto L_002D4CC4;
    case 61u: goto L_002D4D28;
    case 62u: goto L_002D4D58;
    case 63u: goto L_002D4D68;
    case 64u: goto L_002D4DC4;
    case 65u: goto L_002D4DF8;
    case 66u: goto L_002D4E08;
    case 67u: goto L_002D4EEC;
    case 68u: goto L_002D4F6C;
    case 69u: goto L_002D4FF8;
    case 70u: goto L_002D5084;
    case 71u: goto L_002D5110;
    case 72u: goto L_002D5128;
    case 73u: goto L_002D5150;
    case 74u: goto L_002D5184;
    case 75u: goto L_002D51AC;
    case 76u: goto L_002D51CC;
    case 77u: goto L_002D51EC;
    case 78u: goto L_002D5200;
    case 79u: goto L_002D524C;
    case 80u: goto L_002D526C;
    case 81u: goto L_002D5280;
    case 82u: goto L_002D52B4;
    case 83u: goto L_002D52C0;
    case 84u: goto L_002D52D0;
    case 85u: goto L_002D5318;
    case 86u: goto L_002D5348;
    case 87u: goto L_002D5380;
    case 88u: goto L_002D5538;
    case 89u: goto L_002D5700;
    case 90u: goto L_002D5758;
    case 91u: goto L_002D57B0;
    case 92u: goto L_002D580C;
    case 93u: goto L_002D5844;
    case 94u: goto L_002D589C;
    case 95u: goto L_002D5938;
    case 96u: goto L_002D5954;
    case 97u: goto L_002D599C;
    case 98u: goto L_002D59B0;
    case 99u: goto L_002D5A00;
    case 100u: goto L_002D5A14;
    case 101u: goto L_002D5A6C;
    case 102u: goto L_002D5A80;
    case 103u: goto L_002D5AE4;
    case 104u: goto L_002D5AF8;
    case 105u: goto L_002D5B20;
    case 106u: goto L_002D5B48;
    case 107u: goto L_002D5B68;
    case 108u: goto L_002D5BC8;
    case 109u: goto L_002D5E18;
    case 110u: goto L_002D5EE0;
    case 111u: goto L_002D5F98;
    case 112u: goto L_002D5FA8;
    case 113u: goto L_002D5FDC;
    case 114u: goto L_002D6000;
    case 115u: goto L_002D6490;
    case 116u: goto L_002D64B8;
    case 117u: goto L_002D64E8;
    case 118u: goto L_002D64F8;
    case 119u: goto L_002D6530;
    case 120u: goto L_002D6598;
    case 121u: goto L_002D65D8;
    case 122u: goto L_002D668C;
    case 123u: goto L_002D66A4;
    case 124u: goto L_002D66CC;
    case 125u: goto L_002D66E0;
    case 126u: goto L_002D6718;
    case 127u: goto L_002D6740;
    case 128u: goto L_002D67F4;
    case 129u: goto L_002D6818;
    case 130u: goto L_002D688C;
    case 131u: goto L_002D68CC;
    case 132u: goto L_002D694C;
    case 133u: goto L_002D6998;
    case 134u: goto L_002D69B0;
    case 135u: goto L_002D69F4;
    case 136u: goto L_002D6A10;
    case 137u: goto L_002D6A40;
    case 138u: goto L_002D6AF0;
    case 139u: goto L_002D6B3C;
    case 140u: goto L_002D6B54;
    case 141u: goto L_002D6C00;
    case 142u: goto L_002D6C14;
    case 143u: goto L_002D6C44;
    case 144u: goto L_002D6C70;
    case 145u: goto L_002D6C84;
    case 146u: goto L_002D6CA4;
    case 147u: goto L_002D6CBC;
    case 148u: goto L_002D6CDC;
    case 149u: goto L_002D6D28;
    case 150u: goto L_002D6D74;
    case 151u: goto L_002D6D88;
    case 152u: goto L_002D6DE8;
    case 153u: goto L_002D6E0C;
    case 154u: goto L_002D6E7C;
    case 155u: goto L_002D6EBC;
    case 156u: goto L_002D6F4C;
    case 157u: goto L_002D6F94;
    case 158u: goto L_002D6FAC;
    case 159u: goto L_002D6FF0;
    case 160u: goto L_002D700C;
    case 161u: goto L_002D7040;
    case 162u: goto L_002D7120;
    case 163u: goto L_002D7358;
    case 164u: goto L_002D7368;
    case 165u: goto L_002D73BC;
    case 166u: goto L_002D7404;
    case 167u: goto L_002D7420;
    case 168u: goto L_002D7458;
    case 169u: goto L_002D7468;
    case 170u: goto L_002D7478;
    case 171u: goto L_002D748C;
    case 172u: goto L_002D74A0;
    case 173u: goto L_002D74B4;
    case 174u: goto L_002D74C8;
    case 175u: goto L_002D74E8;
    case 176u: goto L_002D7504;
    case 177u: goto L_002D7518;
    case 178u: goto L_002D7530;
    case 179u: goto L_002D7578;
    case 180u: goto L_002D75B4;
    case 181u: goto L_002D75C4;
    case 182u: goto L_002D75E0;
    case 183u: goto L_002D7610;
    case 184u: goto L_002D7618;
    case 185u: goto L_002D7624;
    case 186u: goto L_002D7660;
    case 187u: goto L_002D7680;
    case 188u: goto L_002D7688;
    case 189u: goto L_002D7698;
    case 190u: goto L_002D76B8;
    case 191u: goto L_002D76E8;
    case 192u: goto L_002D76F8;
    case 193u: goto L_002D773C;
    case 194u: goto L_002D7768;
    case 195u: goto L_002D7790;
    case 196u: goto L_002D77A0;
    case 197u: goto L_002D77D0;
    case 198u: goto L_002D77F8;
    case 199u: goto L_002D7820;
    case 200u: goto L_002D7830;
    case 201u: goto L_002D7860;
    case 202u: goto L_002D7888;
    case 203u: goto L_002D78BC;
    case 204u: goto L_002D78E8;
    case 205u: goto L_002D7900;
    case 206u: goto L_002D7910;
    case 207u: goto L_002D7930;
    case 208u: goto L_002D793C;
    case 209u: goto L_002D795C;
    case 210u: goto L_002D796C;
    case 211u: goto L_002D797C;
    case 212u: goto L_002D7994;
    case 213u: goto L_002D799C;
    case 214u: goto L_002D79B4;
    case 215u: goto L_002D79BC;
    case 216u: goto L_002D79CC;
    case 217u: goto L_002D79E4;
    case 218u: goto L_002D79F4;
    case 219u: goto L_002D7A08;
    case 220u: goto L_002D7A28;
    case 221u: goto L_002D7A30;
    case 222u: goto L_002D7A40;
    case 223u: goto L_002D7A64;
    case 224u: goto L_002D7A6C;
    case 225u: goto L_002D7A88;
    case 226u: goto L_002D7AB8;
    case 227u: goto L_002D7AC8;
    case 228u: goto L_002D7B14;
    case 229u: goto L_002D7B24;
    case 230u: goto L_002D7B34;
    case 231u: goto L_002D7B44;
    case 232u: goto L_002D7B90;
    case 233u: goto L_002D7BDC;
    case 234u: goto L_002D7BEC;
    case 235u: goto L_002D7C38;
    case 236u: goto L_002D7C84;
    case 237u: goto L_002D7CD0;
    case 238u: goto L_002D7D1C;
    case 239u: goto L_002D7D68;
    case 240u: goto L_002D7DB4;
    case 241u: goto L_002D7E00;
    case 242u: goto L_002D7E4C;
    case 243u: goto L_002D7E98;
    case 244u: goto L_002D7ED0;
    case 245u: goto L_002D7F08;
    case 246u: goto L_002D7F54;
    case 247u: goto L_002D7F64;
    case 248u: goto L_002D7F74;
    case 249u: goto L_002D7F84;
    case 250u: goto L_002D7FA0;
    case 251u: goto L_002D7FC0;
    case 252u: goto L_002D7FD0;
    case 253u: goto L_002D7FEC;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 255u);
    set32(c.r[6], 0u + 255u);
    set32(c.r[7], 0u + 255u);
    set32(c.r[8], 0u + 105u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D401Cu);  if (depth < kMaxDepth) unit_0075(c, 16u, depth + 1u); else { c.pc = 0x002D4288u; return; } if (c.pc != 0x002D401Cu) [[unlikely]] return; }
L_002D401C:
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], c.r[16].w[0] + 88u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 3u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 400u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] + 96u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], 0u + 50u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 128u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[16].w[0] + 176u);
    st16((c.r[16].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 176u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4090:
    st16((c.r[4].w[0] + 84u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D40A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23160u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002D40CC; } }
    set32(c.r[2], 0u + 2224u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D40CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D40D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23156u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D4124; } }
    set32(c.r[5], c.r[2].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D410Cu);  if (depth < kMaxDepth) unit_0075(c, 11u, depth + 1u); else { c.pc = 0x002D4190u; return; } if (c.pc != 0x002D410Cu) [[unlikely]] return; }
L_002D410C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4118u);  if (depth < kMaxDepth) unit_0075(c, 9u, depth + 1u); else { c.pc = 0x002D4138u; return; } if (c.pc != 0x002D4118u) [[unlikely]] return; }
L_002D4118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4124; } }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002D4124:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4138:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D4150; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002D4150:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002D4184; } }
    set32(c.r[4], 0u + 2224u);
    set32(c.r[2], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 23152u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4184:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4190:
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 16);
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D41C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_002D41C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D41D4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D41FC; } }
L_002D41D4:
    set32(c.r[4], 0u + 2224u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 23152u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 10;
L_002D41FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4228; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4220; } }
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4220:
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D4228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4230:
    st32((c.r[4].w[0] + 28u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4248:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], 0u + 96u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4274u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D4274u) [[unlikely]] return; }
L_002D4274:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4288:
    st32((c.r[4].w[0] + 76u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D42A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 9u);
    c.budget -= 6;
L_002D42B8:
    set32(c.r[4], ld32((c.r[16].w[0] - 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D42CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42CCu);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D42CCu) [[unlikely]] return; }
L_002D42CC:
    st32((c.r[16].w[0] + 2048u), 0u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] - 48u), 0u);
    st16((c.r[16].w[0] - 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] - 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 36u), 0u);
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st16((c.r[16].w[0] - 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] - 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] - 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] - 96u), 0u);
    st16((c.r[16].w[0] - 92u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] - 90u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] - 88u), 0u);
    st32((c.r[16].w[0] - 64u), 0u);
    set32(c.r[16], c.r[16].w[0] + 2224u);
    c.budget -= 27;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D42B8u | kUnwind; return; } goto L_002D42B8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4350:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[2].w[0] + 23152u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[5].w[0] + 16u);
    c.budget -= 12;
L_002D43A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002D43D4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43C8u);  if (depth < kMaxDepth) unit_0074(c, 370u, depth + 1u); else { c.pc = 0x002D3FC0u; return; } if (c.pc != 0x002D43C8u) [[unlikely]] return; }
L_002D43C8:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D43EC; } }
L_002D43D4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 2224u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D43A0u | kUnwind; return; } goto L_002D43A0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D43EC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D4470; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4418; } }
    set32(c.r[8], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D4418:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[7].w[0] + 128u);
    set32(c.r[4], c.r[7].w[0] + 176u);
    st16((c.r[7].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    st16((c.r[7].w[0] + 176u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4470; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] - 8544u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4470u);  if (depth < kMaxDepth) unit_0074(c, 318u, depth + 1u); else { c.pc = 0x002D36A0u; return; } if (c.pc != 0x002D4470u) [[unlikely]] return; }
L_002D4470:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44A8u);  if (depth < kMaxDepth) unit_0074(c, 322u, depth + 1u); else { c.pc = 0x002D3880u; return; } if (c.pc != 0x002D44A8u) [[unlikely]] return; }
L_002D44A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D44B8:
    if (::decomp::hook_002D44B8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_002D44B8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19744u);
    set32(c.r[3], c.r[19].w[0] << 1);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 388u);
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4514u);  if (depth < kMaxDepth) unit_0044(c, 121u, depth + 1u); else { c.pc = 0x002124B0u; return; } if (c.pc != 0x002D4514u) [[unlikely]] return; }
L_002D4514:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], c.r[20].w[0] << 8);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 86u);
    set32(c.r[8], c.r[8].w[0] - 25328u);
    set32(c.r[7], c.r[7].w[0] - 25376u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4544u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002D4544u) [[unlikely]] return; }
L_002D4544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20120u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D456Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D456Cu) [[unlikely]] return; }
L_002D456C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_002D45D4; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
L_002D4580:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4598u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x002D4598u) [[unlikely]] return; }
L_002D4598:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[2].w[0] << 16);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45C8u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8238u; return; } if (c.pc != 0x002D45C8u) [[unlikely]] return; }
L_002D45C8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4580u | kUnwind; return; } goto L_002D4580; } }
L_002D45D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002D4610; } }
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D45FC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D4624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D464C; } }
L_002D45FC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002D4638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D464C; } }
L_002D4610:
    set32(c.r[3], c.r[23].w[0] - 19744u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 390u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D466C; } }
L_002D4624:
    set32(c.r[3], c.r[23].w[0] - 19744u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 388u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D466C; } }
L_002D4638:
    set32(c.r[3], c.r[23].w[0] - 19744u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 392u));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D466C; } }
L_002D464C:
    set32(c.r[4], c.r[23].w[0] - 19744u);
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] - 3u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 388u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 200u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
L_002D466C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D46A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[7].w[0] - 3028u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46D4u);  if (depth < kMaxDepth) unit_0075(c, 29u, depth + 1u); else { c.pc = 0x002D44B8u; return; } if (c.pc != 0x002D46D4u) [[unlikely]] return; }
L_002D46D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 25376u);
    set32(c.r[7], c.r[7].w[0] - 25288u);
    set32(c.r[8], 0u + 162u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46F8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002D46F8u) [[unlikely]] return; }
L_002D46F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 19160u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 20128u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[9], ld32((c.r[5].w[0] + 18708u)));
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 18712u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[8], c.r[8].w[0] + 18080u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D476Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002D476Cu) [[unlikely]] return; }
L_002D476C:
    set32(c.r[2], ld32((c.r[16].w[0] - 20128u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] - 20128u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 19160u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 20128u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + 18080u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 18712u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47E4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002D47E4u) [[unlikely]] return; }
L_002D47E4:
    set32(c.r[2], ld32((c.r[16].w[0] - 20128u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] - 20128u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4808:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 19160u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 20128u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + 18080u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 18712u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4860u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002D4860u) [[unlikely]] return; }
L_002D4860:
    set32(c.r[2], ld32((c.r[16].w[0] - 20128u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] - 20128u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4880:
    set32(c.r[29], c.r[29].w[0] - 1312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 1216u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1200u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1232u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[30]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 1264u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 1248u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 1120u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1304u), c.f[23]);
    st32((c.r[29].w[0] + 1296u), c.f[22]);
    st32((c.r[29].w[0] + 1288u), c.f[21]);
    st32((c.r[29].w[0] + 1280u), c.f[20]);
    st32((c.r[19].w[0] + 244u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 23016u)));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 20u));
    st16((c.r[19].w[0] + 136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 160u));
    st32((c.r[19].w[0] + 124u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 164u));
    st32((c.r[19].w[0] + 112u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 168u));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D4914; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4930; } }
L_002D4914:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D4930:
    st32((c.r[19].w[0] + 120u), c.f[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[19].w[0] + 144u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 32u));
    st8((c.r[19].w[0] + 134u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 36u));
    st8((c.r[19].w[0] + 135u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 22u));
    st16((c.r[19].w[0] + 240u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 172u));
    st32((c.r[19].w[0] + 148u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D49B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.f[12] = ld32((c.r[20].w[0] + 356u));
    c.f[13] = ld32((c.r[20].w[0] + 352u));
    c.f[12] = fp::sub(c.f[1], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[15] = ld32((c.r[19].w[0] + 144u));
    fpu_div(c, 12u, c.f[12], c.f[1]);
    fpu_div(c, 13u, c.f[13], c.f[0]);
    c.f[14] = c.f[12];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D49B0u) [[unlikely]] return; }
L_002D49B0:
    st32((c.r[19].w[0] + 168u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    st32((c.r[19].w[0] + 172u), 0u);
    st32((c.r[19].w[0] + 176u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D49E0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
L_002D49E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st32((c.r[19].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4ADC; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002D4A90; } }
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[17], c.r[20].w[0] + 384u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 368u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A20u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002D4A20u) [[unlikely]] return; }
L_002D4A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A2Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002D4A2Cu) [[unlikely]] return; }
L_002D4A2C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A40u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002D4A40u) [[unlikely]] return; }
L_002D4A40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));
    c.f[12] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A74u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D4A74u) [[unlikely]] return; }
L_002D4A74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A88u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D4A88u) [[unlikely]] return; }
L_002D4A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4BD0; } }
L_002D4A90:
    set32(c.r[2], ld32((c.r[19].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4AB4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D4AACu) [[unlikely]] return; }
L_002D4AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4BD0; } }
L_002D4AB4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AD4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D4AD4u) [[unlikely]] return; }
L_002D4AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4BD0; } }
L_002D4ADC:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4BD0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 248u));
    c.f[0] = ld32((c.r[2].w[0] + 264u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D4B18; } }
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_002D4B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B20u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4B20u) [[unlikely]] return; }
L_002D4B20:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002D4B28u);  goto L_002D4B2C; }
L_002D4B2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 256u));
    c.f[1] = ld32((c.r[2].w[0] + 272u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 248u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D4B60; } }
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_002D4B60:
    c.r[3].d[0] = c.hi.d[0];
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B7Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4B7Cu) [[unlikely]] return; }
L_002D4B7C:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002D4B84u);  goto L_002D4B88; }
L_002D4B88:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 256u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[13] = ld32((c.r[2].w[0] + 252u));
    c.f[13] = fp::add(c.f[13], c.f[2]);
    c.r[3].d[0] = c.hi.d[0];
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[14] = fp::add(c.f[14], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BD0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D4BD0u) [[unlikely]] return; }
L_002D4BD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4C38; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[13] = ld32((c.r[20].w[0] + 260u));
    set32(c.r[16], c.r[16].w[0] - 17840u);
    c.f[14] = ld32((c.r[20].w[0] + 252u));
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 1104u);
    set32(c.r[5], c.r[29].w[0] + 1108u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C00u);  if (depth < kMaxDepth) unit_0045(c, 116u, depth + 1u); else { c.pc = 0x00215FC0u; return; } if (c.pc != 0x002D4C00u) [[unlikely]] return; }
L_002D4C00:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[12] = ld32((c.r[29].w[0] + 1104u));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[13] = ld32((c.r[20].w[0] + 256u));
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.f[14] = ld32((c.r[29].w[0] + 1108u));
    c.f[13] = fp::add(c.f[1], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = fp::add(c.f[2], c.f[14]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C38u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D4C38u) [[unlikely]] return; }
L_002D4C38:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4CA8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C58u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4C58u) [[unlikely]] return; }
L_002D4C58:
    c.f[0] = ld32((c.r[20].w[0] + 176u));
    c.f[2] = 0u;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D4C74u);  goto L_002D4C78; }
L_002D4C78:
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4CA8; } }
    st32((c.r[19].w[0] + 112u), c.f[2]);
    c.budget -= 1;
L_002D4CA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4D18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CC4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4CC4u) [[unlikely]] return; }
L_002D4CC4:
    c.f[0] = ld32((c.r[20].w[0] + 196u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[2]);
    set32(c.r[3], c.r[6].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D4CE8u);  goto L_002D4CEC; }
L_002D4CEC:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 136u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[19].w[0] + 136u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 11;
L_002D4D18:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D28u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D4D28u) [[unlikely]] return; }
L_002D4D28:
    set32(c.r[23], c.r[19].w[0] + 208u);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[22], c.r[19].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4DC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[20] = c.r[1].w[0];
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], 0u + 2u);
    c.budget -= 5;
L_002D4D58:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D68u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4D68u) [[unlikely]] return; }
L_002D4D68:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D4D80u);  goto L_002D4D84; }
L_002D4D84:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 12;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4D58u | kUnwind; return; } goto L_002D4D58; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DC4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002D4DC4u) [[unlikely]] return; }
L_002D4DC4:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4ED0; } }
    c.f[21] = ld32((c.r[19].w[0]));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.f[22] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[17], 0u + 2u);
    c.f[23] = ld32((c.r[19].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 9;
L_002D4DF8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E08u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4E08u) [[unlikely]] return; }
L_002D4E08:
    c.f[0] = ld32((c.r[20].w[0] + 188u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D4E20u);  goto L_002D4E24; }
L_002D4E24:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 12;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4DF8u | kUnwind; return; } goto L_002D4DF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4E7C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4E7C; } }
    st32((c.r[19].w[0]), c.f[21]);
    c.budget -= 1;
L_002D4E7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4EA8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4EA8; } }
    st32((c.r[19].w[0] + 4u), c.f[22]);
    c.budget -= 1;
L_002D4EA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4ED0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4ED0; } }
    st32((c.r[19].w[0] + 8u), c.f[23]);
    c.budget -= 1;
L_002D4ED0:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4F4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EECu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4EECu) [[unlikely]] return; }
L_002D4EEC:
    c.f[0] = ld32((c.r[20].w[0] + 204u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.f[3] = 0u;
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D4F14u);  goto L_002D4F18; }
L_002D4F18:
    c.f[1] = ld32((c.r[19].w[0] + 124u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    st32((c.r[19].w[0] + 124u), c.f[1]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4F4C; } }
    st32((c.r[19].w[0] + 124u), c.f[3]);
    c.budget -= 1;
L_002D4F4C:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4FD8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F6Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4F6Cu) [[unlikely]] return; }
L_002D4F6C:
    c.f[0] = ld32((c.r[20].w[0] + 180u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.f[3] = 0u;
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D4F94u);  goto L_002D4F98; }
L_002D4F98:
    c.f[1] = ld32((c.r[19].w[0] + 76u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    st32((c.r[19].w[0] + 76u), c.f[1]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4FD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.budget -= 4;
L_002D4FD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5064; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FF8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D4FF8u) [[unlikely]] return; }
L_002D4FF8:
    c.f[0] = ld32((c.r[20].w[0] + 184u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.f[3] = 0u;
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D5020u);  goto L_002D5024; }
L_002D5024:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    st32((c.r[19].w[0] + 116u), c.f[1]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5064; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_002D5064:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D50D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5084u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D5084u) [[unlikely]] return; }
L_002D5084:
    c.f[0] = ld32((c.r[20].w[0] + 200u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D50A8u);  goto L_002D50AC; }
L_002D50AC:
    c.f[1] = ld32((c.r[19].w[0] + 148u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 148u), c.f[1]);
    c.budget -= 9;
L_002D50D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5210; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D5210; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D5210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5110u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x002D5110u) [[unlikely]] return; }
L_002D5110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5380; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5128u);  if (depth < kMaxDepth) unit_006C(c, 320u, depth + 1u); else { c.pc = 0x002B3588u; return; } if (c.pc != 0x002D5128u) [[unlikely]] return; }
L_002D5128:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_002D5158; } }
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5150u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D5150u) [[unlikely]] return; }
L_002D5150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5380; } }
L_002D5158:
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5184u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D5184u) [[unlikely]] return; }
L_002D5184:
    set32(c.r[18], c.r[19].w[0] + 48u);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51ACu);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D51ACu) [[unlikely]] return; }
L_002D51AC:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.f[13] = ld32((c.r[29].w[0] + 180u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 184u));
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51CCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D51CCu) [[unlikely]] return; }
L_002D51CC:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[29].w[0] + 704u));
    c.f[13] = ld32((c.r[29].w[0] + 708u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 712u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D51ECu) [[unlikely]] return; }
L_002D51EC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5200u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002D5200u) [[unlikely]] return; }
L_002D5200:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5310; } }
L_002D5210:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5290; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5254; } }
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] - 6096u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D524Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002D524Cu) [[unlikely]] return; }
L_002D524C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D526C; } }
L_002D5254:
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[20].w[0] + 368u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D526Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002D526Cu) [[unlikely]] return; }
L_002D526C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5280u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002D5280u) [[unlikely]] return; }
L_002D5280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5320; } }
L_002D5290:
    c.r[2].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5350; } }
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D52B4u) [[unlikely]] return; }
L_002D52B4:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
L_002D52C0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52D0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D52D0u) [[unlikely]] return; }
L_002D52D0:
    set32(c.r[3], c.r[2].w[0] + 511u);
    c.r[4].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 9));
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D52C0u | kUnwind; return; } goto L_002D52C0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002D5310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5318u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002D5318u) [[unlikely]] return; }
L_002D5318:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002D5320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5348u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D5348u) [[unlikely]] return; }
L_002D5348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5380; } }
L_002D5350:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5380u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D5380u) [[unlikely]] return; }
L_002D5380:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5394; } }
    st32((c.r[19].w[0] + 48u), 0u);
    c.budget -= 1;
L_002D5394:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D53A8; } }
    st32((c.r[19].w[0] + 56u), 0u);
    c.budget -= 1;
L_002D53A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5480; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D547C; } }
    c.f[0] = ld32((c.r[20].w[0] + 224u));
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5424; } }
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5424; } }
    c.f[0] = ld32((c.r[20].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5424; } }
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5480; } }
L_002D5424:
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D546C; } }
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D546C; } }
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D546C; } }
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5480; } }
L_002D546C:
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5480; } }
L_002D547C:
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 1;
L_002D5480:
    c.f[0] = ld32((c.r[20].w[0] + 128u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 112u));
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[15] = c.f[13];
    st32((c.r[19].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 136u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 88u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 140u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[19].w[0] + 28u), c.f[2]);
    st32((c.r[19].w[0] + 92u), c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 144u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 148u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 68u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 152u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 76u), c.f[1]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 4u));
    st8((c.r[19].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 130u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st8((c.r[19].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = ld32((c.r[20].w[0] + 272u));
    c.f[14] = ld32((c.r[20].w[0] + 280u));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5538u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D5538u) [[unlikely]] return; }
L_002D5538:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D57E4; } }
    c.f[2] = ld32((c.r[20].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] + 156u), c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    st32((c.r[19].w[0] + 160u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 232u));
    st32((c.r[19].w[0] + 164u), c.f[0]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5598; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D55CC; } }
L_002D5598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D55D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
L_002D55CC:
    st32((c.r[19].w[0] + 156u), c.f[0]);
    c.budget -= 1;
L_002D55D0:
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5644; } }
L_002D5610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_002D5644:
    st32((c.r[19].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_002D5648:
    c.f[1] = ld32((c.r[19].w[0] + 164u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D56BC; } }
L_002D5688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D56C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_002D56BC:
    st32((c.r[19].w[0] + 164u), c.f[0]);
    c.budget -= 1;
L_002D56C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D57E4; } }
    c.f[0] = ld32((c.r[20].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D5734; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5700u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D5700u) [[unlikely]] return; }
L_002D5700:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002D5710u);  goto L_002D5714; }
L_002D5714:
    c.f[1] = ld32((c.r[19].w[0] + 168u));
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 168u), c.f[1]);
    c.budget -= 8;
L_002D5734:
    c.f[0] = ld32((c.r[20].w[0] + 216u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D578C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5758u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D5758u) [[unlikely]] return; }
L_002D5758:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002D5768u);  goto L_002D576C; }
L_002D576C:
    c.f[1] = ld32((c.r[19].w[0] + 172u));
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 172u), c.f[1]);
    c.budget -= 8;
L_002D578C:
    c.f[0] = ld32((c.r[20].w[0] + 220u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D57E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57B0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D57B0u) [[unlikely]] return; }
L_002D57B0:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002D57C0u);  goto L_002D57C4; }
L_002D57C4:
    c.f[1] = ld32((c.r[19].w[0] + 176u));
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 176u), c.f[1]);
    c.budget -= 8;
L_002D57E4:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D587C; } }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5838; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D580Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D580Cu) [[unlikely]] return; }
L_002D580C:
    set32(c.r[3], 0u + 360u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D5818u);  goto L_002D581C; }
L_002D581C:
    c.r[4].d[0] = c.hi.d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 152u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5880; } }
L_002D5838:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5844u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D5844u) [[unlikely]] return; }
L_002D5844:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 152u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5880; } }
L_002D587C:
    st32((c.r[19].w[0] + 152u), 0u);
    c.budget -= 1;
L_002D5880:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D58F4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D589Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D589Cu) [[unlikely]] return; }
L_002D589C:
    c.f[0] = ld32((c.r[20].w[0] + 208u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    set32(c.r[3], c.r[6].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D58B4u);  goto L_002D58B8; }
L_002D58B8:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 18u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] << 16);
    st16((c.r[20].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D58F4; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[20].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D58F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], ld32((c.r[30].w[0] + 23016u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[20].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5938; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5938; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5938u);  if (depth < kMaxDepth) unit_0075(c, 149u, depth + 1u); else { c.pc = 0x002D6D28u; return; } if (c.pc != 0x002D5938u) [[unlikely]] return; }
L_002D5938:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5954u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D5954u) [[unlikely]] return; }
L_002D5954:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D59B8; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 138u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[5], c.r[5].w[0] - 4624u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D599Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D599Cu) [[unlikely]] return; }
L_002D599C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59B0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D59B0u) [[unlikely]] return; }
L_002D59B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5A14; } }
L_002D59B8:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5A14; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 138u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[5], c.r[5].w[0] - 4624u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A00u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D5A00u) [[unlikely]] return; }
L_002D5A00:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A14u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D5A14u) [[unlikely]] return; }
L_002D5A14:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5A88; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 138u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 124u));
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A6Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D5A6Cu) [[unlikely]] return; }
L_002D5A6C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A80u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D5A80u) [[unlikely]] return; }
L_002D5A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5AF8; } }
L_002D5A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5AF8; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 138u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 124u));
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.f[12] = c.f[12] ^ fp::kSign;
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AE4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D5AE4u) [[unlikely]] return; }
L_002D5AE4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AF8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D5AF8u) [[unlikely]] return; }
L_002D5AF8:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5B20; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 4608u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B20u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D5B20u) [[unlikely]] return; }
L_002D5B20:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5B48; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B48u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D5B48u) [[unlikely]] return; }
L_002D5B48:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5B68; } }
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B68u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D5B68u) [[unlikely]] return; }
L_002D5B68:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5B84; } }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.budget -= 3;
L_002D5B84:
    ld128((c.r[29].w[0] + 1264u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1248u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1232u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1216u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1200u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1120u));
    c.f[23] = ld32((c.r[29].w[0] + 1304u));
    c.f[22] = ld32((c.r[29].w[0] + 1296u));
    c.f[21] = ld32((c.r[29].w[0] + 1288u));
    c.f[20] = ld32((c.r[29].w[0] + 1280u));
    set32(c.r[29], c.r[29].w[0] + 1312u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D5BC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[4] = ld32((c.r[4].w[0] + 160u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.f[6] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5C10; } }
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[4], c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 4;
L_002D5C10:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5C3C; } }
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 7;
L_002D5C3C:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.f[3] = fp::mul(c.f[4], c.f[6]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5C58; } }
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 3;
L_002D5C58:
    c.f[5] = 0u;
    c.r[2].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5CA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 4620u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[5] = fp::add(c.f[0], c.f[5]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5CE0; } }
L_002D5CA0:
    c.r[2].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5CE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] - 4620u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[5] = fp::add(c.f[1], c.f[5]);
    c.budget -= 13;
L_002D5CE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5D28; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5D70; } }
L_002D5D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5D74; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.budget -= 14;
L_002D5D70:
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.budget -= 1;
L_002D5D74:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5D8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 4604u));
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.budget -= 3;
L_002D5D8C:
    c.f[0] = c.f[5] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5DC0; } }
    c.f[3] = c.f[3] ^ fp::kSign;
    c.budget -= 1;
L_002D5DC0:
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5DE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18956u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] - 18956u), c.r[2].w[0]);
    c.budget -= 4;
L_002D5DE0:
    c.f[1] = ld32((c.r[4].w[0] + 168u));
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5E04; } }
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5E08; } }
L_002D5E04:
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 1;
L_002D5E08:
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[0] = c.f[3];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D5E18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    set32(c.r[3], 0u + 25u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[20];
    st32((c.r[16].w[0] + 208u), c.f[20]);
    c.f[15] = c.f[20];
    st32((c.r[16].w[0] + 200u), c.f[20]);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0] + 204u), c.f[20]);
    set32(c.r[17], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 196u), c.f[20]);
    st32((c.r[16].w[0] + 192u), c.f[20]);
    st32((c.r[16].w[0] + 188u), c.f[20]);
    st32((c.r[16].w[0] + 184u), c.f[20]);
    st32((c.r[16].w[0] + 180u), c.f[20]);
    st32((c.r[16].w[0] + 176u), c.f[20]);
    st32((c.r[16].w[0] + 168u), c.f[20]);
    st32((c.r[16].w[0] + 164u), c.f[20]);
    st32((c.r[16].w[0] + 160u), c.f[20]);
    st32((c.r[16].w[0] + 240u), 0u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 328u), 0u);
    st32((c.r[16].w[0] + 324u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5EE0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D5EE0u) [[unlikely]] return; }
L_002D5EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 368u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 376u), c.f[1]);
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 176u), c.f[2]);
    st32((c.r[16].w[0] + 180u), c.f[2]);
    st32((c.r[16].w[0] + 184u), c.f[2]);
    st32((c.r[16].w[0] + 188u), c.f[2]);
    st32((c.r[16].w[0] + 192u), c.f[2]);
    st32((c.r[16].w[0] + 196u), c.f[2]);
    st32((c.r[16].w[0] + 200u), c.f[2]);
    st32((c.r[16].w[0] + 204u), c.f[2]);
    st32((c.r[16].w[0] + 284u), c.f[2]);
    st32((c.r[16].w[0] + 300u), c.f[2]);
    st32((c.r[16].w[0] + 224u), c.f[20]);
    st32((c.r[16].w[0] + 228u), c.f[20]);
    st32((c.r[16].w[0] + 232u), c.f[20]);
    st32((c.r[16].w[0] + 212u), c.f[20]);
    st32((c.r[16].w[0] + 216u), c.f[20]);
    st32((c.r[16].w[0] + 220u), c.f[20]);
    st32((c.r[16].w[0] + 304u), c.f[20]);
    st32((c.r[16].w[0] + 308u), c.f[20]);
    st32((c.r[16].w[0] + 272u), c.f[20]);
    st32((c.r[16].w[0] + 276u), c.f[20]);
    st32((c.r[16].w[0] + 280u), c.f[20]);
    st32((c.r[16].w[0] + 288u), c.f[20]);
    st32((c.r[16].w[0] + 292u), c.f[20]);
    st32((c.r[16].w[0] + 296u), c.f[20]);
    st32((c.r[16].w[0] + 380u), c.f[2]);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F98u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D5F98u) [[unlikely]] return; }
L_002D5F98:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FA8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D5FA8u) [[unlikely]] return; }
L_002D5FA8:
    st32((c.r[16].w[0] + 260u), c.f[20]);
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 252u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 256u), c.f[20]);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 400u), 0u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FDCu);  if (depth < kMaxDepth) unit_0075(c, 108u, depth + 1u); else { c.pc = 0x002D5BC8u; return; } if (c.pc != 0x002D5FDCu) [[unlikely]] return; }
L_002D5FDC:
    st32((c.r[16].w[0] + 340u), c.f[0]);
    st32((c.r[16].w[0] + 316u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 324u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 164u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 10u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 37;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D609C; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D609C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    st32((c.r[16].w[0] + 252u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    st32((c.r[16].w[0] + 256u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    st32((c.r[16].w[0] + 272u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    st32((c.r[16].w[0] + 276u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 200u));
    st32((c.r[16].w[0] + 280u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 204u));
    st32((c.r[16].w[0] + 284u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 208u));
    st32((c.r[16].w[0] + 288u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 212u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    st32((c.r[16].w[0] + 296u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 220u));
    st32((c.r[16].w[0] + 300u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 224u));
    st32((c.r[16].w[0] + 304u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 228u));
    st32((c.r[16].w[0] + 308u), c.f[0]);
    c.budget -= 44;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6154; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D6154:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[3] = 0u;
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    st32((c.r[16].w[0] + 176u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    st32((c.r[16].w[0] + 184u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    st32((c.r[16].w[0] + 192u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    st32((c.r[16].w[0] + 204u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 156u));
    st32((c.r[16].w[0] + 208u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 160u));
    c.f[4] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 212u), c.f[4]);
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[3]));
    c.f[0] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 220u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 172u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 176u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 228u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 180u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.budget -= 66;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D627C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D627C; } }
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 1;
L_002D627C:
    c.f[1] = ld32((c.r[16].w[0] + 216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D62B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D62B8; } }
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.budget -= 1;
L_002D62B8:
    c.f[1] = ld32((c.r[16].w[0] + 220u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D62F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D62F4; } }
    st32((c.r[16].w[0] + 220u), c.f[0]);
    c.budget -= 1;
L_002D62F4:
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6320; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 176u), c.f[0]);
    c.budget -= 4;
L_002D6320:
    c.f[0] = ld32((c.r[16].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6344; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.budget -= 4;
L_002D6344:
    c.f[0] = ld32((c.r[16].w[0] + 184u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6368; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 184u), c.f[0]);
    c.budget -= 4;
L_002D6368:
    c.f[0] = ld32((c.r[16].w[0] + 188u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D638C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.budget -= 4;
L_002D638C:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D63B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_002D63B0:
    c.f[0] = ld32((c.r[16].w[0] + 196u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D63D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 4;
L_002D63D4:
    c.f[0] = ld32((c.r[16].w[0] + 204u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D63F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 204u), c.f[0]);
    c.budget -= 4;
L_002D63F8:
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D641C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.budget -= 4;
L_002D641C:
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6440; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.budget -= 4;
L_002D6440:
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[16].w[0] + 88u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6498; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6490u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D6490u) [[unlikely]] return; }
L_002D6490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D64B8; } }
L_002D6498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[12] = 0u;
    c.f[15] = c.f[13];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D64B8u) [[unlikely]] return; }
L_002D64B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[18], c.r[16].w[0] + 368u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D64E8; } }
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64E8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D64E8u) [[unlikely]] return; }
L_002D64E8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64F8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D64F8u) [[unlikely]] return; }
L_002D64F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D650C; } }
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 2;
L_002D650C:
    st32((c.r[16].w[0] + 332u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 184u));
    st16((c.r[16].w[0] + 336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 186u));
    st32((c.r[16].w[0] + 400u), 0u);
    st16((c.r[16].w[0] + 338u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6530u);  if (depth < kMaxDepth) unit_0075(c, 108u, depth + 1u); else { c.pc = 0x002D5BC8u; return; } if (c.pc != 0x002D6530u) [[unlikely]] return; }
L_002D6530:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[16].w[0] + 340u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D655C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xD0150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 348u), c.f[0]);
    c.budget -= 5;
L_002D655C:
    c.f[0] = ld32((c.r[17].w[0] + 232u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 236u));
    st32((c.r[16].w[0] + 356u), c.f[1]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 240u));
    st32((c.r[16].w[0] + 316u), 0u);
    st16((c.r[16].w[0] + 404u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6598:
    set32(c.r[29], c.r[29].w[0] - 1232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1200u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 1104u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1216u), c.f[20]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65D8u);  if (depth < kMaxDepth) unit_0077(c, 2u, depth + 1u); else { c.pc = 0x002DC010u; return; } if (c.pc != 0x002D65D8u) [[unlikely]] return; }
L_002D65D8:
    c.f[2] = ld32((c.r[17].w[0] + 304u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6608; } }
    c.f[0] = ld32((c.r[17].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D66B0; } }
L_002D6608:
    c.f[0] = ld32((c.r[17].w[0] + 308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[2] = c.f[0];
    st32((c.r[17].w[0] + 304u), c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
L_002D6648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D667C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
L_002D667C:
    c.f[12] = c.f[2];
    st32((c.r[17].w[0] + 304u), c.f[2]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D668Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002D668Cu) [[unlikely]] return; }
L_002D668C:
    c.f[1] = ld32((c.r[17].w[0] + 288u));
    c.f[12] = ld32((c.r[17].w[0] + 304u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 272u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66A4u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002D66A4u) [[unlikely]] return; }
L_002D66A4:
    c.f[1] = ld32((c.r[17].w[0] + 296u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 280u), c.f[0]);
    c.budget -= 3;
L_002D66B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002D66CC; } }
    set32(c.r[4], c.r[17].w[0] + 384u);
    set32(c.r[5], c.r[17].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66CCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D66CCu) [[unlikely]] return; }
L_002D66CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66E0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002D66E0u) [[unlikely]] return; }
L_002D66E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6AB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6AB4; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002D6A18; } }
    set32(c.r[16], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6718u);  if (depth < kMaxDepth) unit_0049(c, 207u, depth + 1u); else { c.pc = 0x002269C8u; return; } if (c.pc != 0x002D6718u) [[unlikely]] return; }
L_002D6718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D67B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 332u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6740u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6740u) [[unlikely]] return; }
L_002D6740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D67B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D67B0; } }
    set32(c.r[2], 0u + 268u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], c.r[3].w[0] - 14152u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D67B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D67B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D67B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D67B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D67B4; } }
L_002D67B0:
    st32((c.r[17].w[0] + 324u), c.r[16].w[0]);
    c.budget -= 1;
L_002D67B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    if (c.r[4].d[0] != 0) c.r[16].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6850; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67F4u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D67F4u) [[unlikely]] return; }
L_002D67F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 10u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6818u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D6818u) [[unlikely]] return; }
L_002D6818:
    c.f[3] = ld32((c.r[17].w[0] + 80u));
    c.f[4] = ld32((c.r[17].w[0] + 84u));
    c.f[5] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 692u));
    c.f[2] = ld32((c.r[29].w[0] + 696u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 688u), c.f[0]);
    st32((c.r[29].w[0] + 692u), c.f[1]);
    st32((c.r[29].w[0] + 696u), c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D68CC; } }
L_002D6850:
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D688Cu);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D688Cu) [[unlikely]] return; }
L_002D688C:
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[9], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[9], c.r[9].w[0] + 10u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D68CCu);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D68CCu) [[unlikely]] return; }
L_002D68CC:
    c.f[6] = ld32((c.r[29].w[0] + 688u));
    set32(c.r[16], c.r[17].w[0] + 368u);
    c.f[5] = ld32((c.r[29].w[0] + 692u));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[4] = ld32((c.r[29].w[0] + 696u));
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 400u)));
    st32((c.r[17].w[0] + 368u), c.f[6]);
    st32((c.r[17].w[0] + 372u), c.f[5]);
    st32((c.r[17].w[0] + 376u), c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D69CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D6954; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 316u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D694Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D694Cu) [[unlikely]] return; }
L_002D694C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D69C4; } }
L_002D6954:
    set32(c.r[3], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 1088u), c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 1092u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 1100u), 0u);
    st32((c.r[29].w[0] + 1096u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 1096u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6998u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D6998u) [[unlikely]] return; }
L_002D6998:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 400u)));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69B0u);  if (depth < kMaxDepth) unit_0098(c, 339u, depth + 1u); else { c.pc = 0x00363E40u; return; } if (c.pc != 0x002D69B0u) [[unlikely]] return; }
L_002D69B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D69C4; } }
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D69CC; } }
L_002D69C4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 2;
L_002D69CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6B70; } }
    set32(c.r[16], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69F4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002D69F4u) [[unlikely]] return; }
L_002D69F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A10u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002D6A10u) [[unlikely]] return; }
L_002D6A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6B70; } }
L_002D6A18:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6A40; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A40u);  if (depth < kMaxDepth) unit_0049(c, 76u, depth + 1u); else { c.pc = 0x00225340u; return; } if (c.pc != 0x002D6A40u) [[unlikely]] return; }
L_002D6A40:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6A90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 136u), c.f[0]);
    c.budget -= 15;
L_002D6A90:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[17].w[0] + 372u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[17].w[0] + 376u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6B70; } }
L_002D6AB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[16], c.r[17].w[0] + 368u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D6AF8; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 316u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6AF0u) [[unlikely]] return; }
L_002D6AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6B68; } }
L_002D6AF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B3Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D6B3Cu) [[unlikely]] return; }
L_002D6B3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 400u)));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B54u);  if (depth < kMaxDepth) unit_0098(c, 339u, depth + 1u); else { c.pc = 0x00363E40u; return; } if (c.pc != 0x002D6B54u) [[unlikely]] return; }
L_002D6B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6B68; } }
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6B70; } }
L_002D6B68:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 2;
L_002D6B70:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6B98; } }
    c.f[0] = ld32((c.r[17].w[0] + 236u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 236u), c.f[0]);
    c.budget -= 6;
L_002D6B98:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6CFC; } }
    c.f[1] = ld32((c.r[17].w[0] + 348u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xD0150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6CFC; } }
    c.f[20] = 0u;
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    set32(c.r[18], c.r[17].w[0] + 368u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C00u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D6C00u) [[unlikely]] return; }
L_002D6C00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C14u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D6C14u) [[unlikely]] return; }
L_002D6C14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    set32(c.r[20], c.r[29].w[0] + 64u);
    set32(c.r[21], c.r[2].w[0] - 11856u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C44u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x002D6C44u) [[unlikely]] return; }
L_002D6C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6CE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C70u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D6C70u) [[unlikely]] return; }
L_002D6C70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C84u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002D6C84u) [[unlikely]] return; }
L_002D6C84:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CA4u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x002D6CA4u) [[unlikely]] return; }
L_002D6CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6CE4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CBCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D6CBCu) [[unlikely]] return; }
L_002D6CBC:
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CDCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D6CDCu) [[unlikely]] return; }
L_002D6CDC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 328u), c.r[2].w[0]);
    c.budget -= 2;
L_002D6CE4:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 348u), c.f[0]);
    c.budget -= 6;
L_002D6CFC:
    ld128((c.r[29].w[0] + 1200u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1104u));
    c.f[20] = ld32((c.r[29].w[0] + 1216u));
    set32(c.r[29], c.r[29].w[0] + 1232u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6D28:
    set32(c.r[29], c.r[29].w[0] - 1184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 1104u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002D6D74; } }
    set32(c.r[4], c.r[17].w[0] + 384u);
    set32(c.r[5], c.r[17].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D74u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D6D74u) [[unlikely]] return; }
L_002D6D74:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D88u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002D6D88u) [[unlikely]] return; }
L_002D6D88:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D70CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D70CC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002D7014; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6E44; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DE8u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D6DE8u) [[unlikely]] return; }
L_002D6DE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 10u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E0Cu);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D6E0Cu) [[unlikely]] return; }
L_002D6E0C:
    c.f[3] = ld32((c.r[17].w[0] + 80u));
    c.f[4] = ld32((c.r[17].w[0] + 84u));
    c.f[5] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 692u));
    c.f[2] = ld32((c.r[29].w[0] + 696u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 688u), c.f[0]);
    st32((c.r[29].w[0] + 692u), c.f[1]);
    st32((c.r[29].w[0] + 696u), c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6EBC; } }
L_002D6E44:
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[2]);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E7Cu);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D6E7Cu) [[unlikely]] return; }
L_002D6E7C:
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[9], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[9], c.r[9].w[0] + 10u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EBCu);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002D6EBCu) [[unlikely]] return; }
L_002D6EBC:
    c.f[4] = ld32((c.r[16].w[0]));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 688u));
    c.f[5] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 692u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[6] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0]), c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 400u)));
    st32((c.r[29].w[0] + 16u), c.f[6]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D6F54; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 316u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6F4Cu) [[unlikely]] return; }
L_002D6F4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6FC0; } }
L_002D6F54:
    set32(c.r[3], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 1088u), c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 1092u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0]), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 1096u), c.f[1]);
    st32((c.r[29].w[0] + 1100u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F94u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D6F94u) [[unlikely]] return; }
L_002D6F94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 400u)));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FACu);  if (depth < kMaxDepth) unit_0098(c, 339u, depth + 1u); else { c.pc = 0x00363E40u; return; } if (c.pc != 0x002D6FACu) [[unlikely]] return; }
L_002D6FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6FC0; } }
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6FC8; } }
L_002D6FC0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 2;
L_002D6FC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D70FC; } }
    set32(c.r[16], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 368u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FF0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002D6FF0u) [[unlikely]] return; }
L_002D6FF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D700Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002D700Cu) [[unlikely]] return; }
L_002D700C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D70FC; } }
L_002D7014:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7040; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[17].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7040u);  if (depth < kMaxDepth) unit_0049(c, 76u, depth + 1u); else { c.pc = 0x00225340u; return; } if (c.pc != 0x002D7040u) [[unlikely]] return; }
L_002D7040:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7090; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 136u), c.f[0]);
    c.budget -= 15;
L_002D7090:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D70F4; } }
L_002D70CC:
    c.f[1] = ld32((c.r[17].w[0] + 368u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.budget -= 10;
L_002D70F4:
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    c.budget -= 2;
L_002D70FC:
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1104u));
    set32(c.r[29], c.r[29].w[0] + 1184u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7120:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[1].d[0] = c.r[1].d[0] | 12000ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[5].w[0] + 96u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 18u));
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 56u));
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 24u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 14u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 22u));
    st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 120u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    st32((c.r[5].w[0] + 104u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 252u));
    st32((c.r[5].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 256u));
    st32((c.r[5].w[0] + 112u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 260u));
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[5].w[0] + 192u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[5].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[5].w[0] + 200u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[5].w[0] + 204u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[5].w[0] + 208u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[5].w[0] + 212u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[5].w[0] + 216u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    st32((c.r[5].w[0] + 220u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 304u));
    st32((c.r[5].w[0] + 224u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    st32((c.r[5].w[0] + 228u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    st32((c.r[5].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    st32((c.r[5].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    st32((c.r[5].w[0] + 76u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[5].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[5].w[0] + 84u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[5].w[0] + 88u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 176u));
    st32((c.r[5].w[0] + 124u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    st32((c.r[5].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 184u));
    st32((c.r[5].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    st32((c.r[5].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    st32((c.r[5].w[0] + 140u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[5].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[5].w[0] + 152u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[5].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 208u));
    st32((c.r[5].w[0] + 156u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 216u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 220u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 172u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 180u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[5].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[5].w[0] + 84u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[5].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 336u));
    st16((c.r[5].w[0] + 184u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 338u));
    st16((c.r[5].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 141;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7358:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7368:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 400u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D743C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D73C4; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 316u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D73BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D73BCu) [[unlikely]] return; }
L_002D73BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7434; } }
L_002D73C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 400u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0]), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7404u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D7404u) [[unlikely]] return; }
L_002D7404:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 400u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7420u);  if (depth < kMaxDepth) unit_0098(c, 339u, depth + 1u); else { c.pc = 0x00363E40u; return; } if (c.pc != 0x002D7420u) [[unlikely]] return; }
L_002D7420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7434; } }
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D743C; } }
L_002D7434:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 2;
L_002D743C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7458:
    c.f[0] = ld32((c.r[4].w[0] + 348u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7468:
    st32((c.r[4].w[0] + 240u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 368u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D748Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D748Cu) [[unlikely]] return; }
L_002D748C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D74A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D74B4u) [[unlikely]] return; }
L_002D74B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D74C8:
    c.f[0] = ld32((c.r[4].w[0] + 368u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 372u));
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 376u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D74E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7504u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002D7504u) [[unlikely]] return; }
L_002D7504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7518:
    st32((c.r[4].w[0] + 376u), c.f[14]);
    st32((c.r[4].w[0] + 368u), c.f[12]);
    st32((c.r[4].w[0] + 372u), c.f[13]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D755C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7598; } }
L_002D755C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 19000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7578u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x002D7578u) [[unlikely]] return; }
L_002D7578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002D7590; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D75C8; } }
L_002D7590:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 2;
L_002D7598:
    set32(c.r[2], 0u - 2u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D75BC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75B4u);  if (depth < kMaxDepth) unit_0075(c, 114u, depth + 1u); else { c.pc = 0x002D6000u; return; } if (c.pc != 0x002D75B4u) [[unlikely]] return; }
L_002D75B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D75C4; } }
L_002D75BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75C4u);  if (depth < kMaxDepth) unit_0075(c, 109u, depth + 1u); else { c.pc = 0x002D5E18u; return; } if (c.pc != 0x002D75C4u) [[unlikely]] return; }
L_002D75C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D75C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D75E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D7644; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7610u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002D7610u) [[unlikely]] return; }
L_002D7610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7624; } }
L_002D7618:
    set32(c.r[4], c.r[17].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7624u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002D7624u) [[unlikely]] return; }
L_002D7624:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7644; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7618u | kUnwind; return; } goto L_002D7618; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_002D7644:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7680u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002D7680u) [[unlikely]] return; }
L_002D7680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D76A0; } }
L_002D7688:
    st32((c.r[2].w[0] + 432u), 0u);
    set32(c.r[4], c.r[16].w[0] - 19000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7698u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002D7698u) [[unlikely]] return; }
L_002D7698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7688u | kUnwind; return; } goto L_002D7688; } }
L_002D76A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D76B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76E8u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002D76E8u) [[unlikely]] return; }
L_002D76E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7748; } }
    c.budget -= 1;
L_002D76F8:
    set32(c.r[2], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7730; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002D7730; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D7724; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002D7730; } }
L_002D7724:
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D774C; } }
L_002D7730:
    set32(c.r[4], c.r[18].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D773Cu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002D773Cu) [[unlikely]] return; }
L_002D773C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D76F8u | kUnwind; return; } goto L_002D76F8; } }
L_002D7748:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D774C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7790u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002D7790u) [[unlikely]] return; }
L_002D7790:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D77DC; } }
    c.budget -= 1;
L_002D77A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D77C4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002D77C4; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D77E0; } }
L_002D77C4:
    set32(c.r[4], c.r[17].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D77D0u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002D77D0u) [[unlikely]] return; }
L_002D77D0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D77A0u | kUnwind; return; } goto L_002D77A0; } }
L_002D77DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D77E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D77F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7820u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x002D7820u) [[unlikely]] return; }
L_002D7820:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D786C; } }
    c.budget -= 1;
L_002D7830:
    set32(c.r[2], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7854; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002D7854; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7870; } }
L_002D7854:
    set32(c.r[4], c.r[17].w[0] - 19000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7860u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x002D7860u) [[unlikely]] return; }
L_002D7860:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7830u | kUnwind; return; } goto L_002D7830; } }
L_002D786C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7870:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7888:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(363ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D78BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D78BCu);  if (depth < kMaxDepth) unit_0075(c, 225u, depth + 1u); else { c.pc = 0x002D7A88u; return; } if (c.pc != 0x002D78BCu) [[unlikely]] return; }
L_002D78BC:
    set32(c.r[3], c.r[17].w[0] - 353u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24880u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D78E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[16], c.r[16].w[0] - 18944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7900u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002D7900u) [[unlikely]] return; }
L_002D7900:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D79A8; } }
L_002D7910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[16], c.r[2].w[0] - 18944u);
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7930; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7930u);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D7468u; return; } if (c.pc != 0x002D7930u) [[unlikely]] return; }
L_002D7930:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D793C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[16], c.r[2].w[0] - 18944u);
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D795C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D795Cu);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D7468u; return; } if (c.pc != 0x002D795Cu) [[unlikely]] return; }
L_002D795C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D796C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st16((c.r[2].w[0] - 18932u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D797C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 18700u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7994u);  if (depth < kMaxDepth) unit_0075(c, 182u, depth + 1u); else { c.pc = 0x002D75E0u; return; } if (c.pc != 0x002D7994u) [[unlikely]] return; }
L_002D7994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D799C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18944u);
    c.budget -= 3;
L_002D79A8:
    set32(c.r[6], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D79B4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D79B4u) [[unlikely]] return; }
L_002D79B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D79BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st16((c.r[2].w[0] - 18934u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D79CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A00; } }
L_002D79E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D79FC; } }
L_002D79F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D79FC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A08u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D7A08u) [[unlikely]] return; }
L_002D7A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7A6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18944u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A28u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D7A28u) [[unlikely]] return; }
L_002D7A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7A6C; } }
L_002D7A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A40u);  if (depth < kMaxDepth) unit_0075(c, 190u, depth + 1u); else { c.pc = 0x002D76B8u; return; } if (c.pc != 0x002D7A40u) [[unlikely]] return; }
L_002D7A40:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D7A64; } }
    set32(c.r[2], c.r[17].w[0] - 18944u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 244u), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A64u);  if (depth < kMaxDepth) unit_0076(c, 70u, depth + 1u); else { c.pc = 0x002D9310u; return; } if (c.pc != 0x002D7A64u) [[unlikely]] return; }
L_002D7A64:
    set32(c.r[2], c.r[17].w[0] - 18944u);
    st32((c.r[2].w[0] + 244u), c.r[16].w[0]);
    c.budget -= 2;
L_002D7A6C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7A88:
    set32(c.r[3], c.r[5].w[0] - 366u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24816u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D7AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st8((c.r[2].w[0] - 18944u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7AEC; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7B08; } }
L_002D7AEC:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7B08:
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st16((c.r[2].w[0] - 18938u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7B24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st16((c.r[2].w[0] - 18936u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st8((c.r[2].w[0] - 18943u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7B68; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7B84; } }
L_002D7B68:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7B84:
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7BB4; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7BD0; } }
L_002D7BB4:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7BD0:
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7BDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st16((c.r[2].w[0] - 18930u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7C10; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7C2C; } }
L_002D7C10:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7C2C:
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7C5C; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7C78; } }
L_002D7C5C:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7C78:
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7CA8; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7CC4; } }
L_002D7CA8:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7CC4:
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7CF4; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7D10; } }
L_002D7CF4:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7D10:
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7D1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7D40; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7D5C; } }
L_002D7D40:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7D5C:
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7D8C; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7DA8; } }
L_002D7D8C:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7DA8:
    st32((c.r[4].w[0] + 124u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7DD8; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7DF4; } }
L_002D7DD8:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7DF4:
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7E24; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7E40; } }
L_002D7E24:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7E40:
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7E4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7E70; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7E8C; } }
L_002D7E70:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7E8C:
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[5], c.r[7].w[0] >> 16);
    set32(c.r[6], c.r[7].w[0] >> 8);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[7].w[0] >> 24);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[5], c.r[7].w[0] >> 16);
    set32(c.r[6], c.r[7].w[0] >> 8);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[7].w[0] >> 24);
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002D7F2C; } }
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7F48; } }
L_002D7F2C:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002D7F48:
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7F54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st8((c.r[2].w[0] - 18942u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7F64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st8((c.r[2].w[0] - 18941u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st32((c.r[2].w[0] - 18908u), c.r[7].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[3].w[0] - 18944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].d[0] = ~(0ull | c.r[7].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st32((c.r[2].w[0] - 18904u), c.r[7].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[3].w[0] - 18944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].d[0] = ~(0ull | c.r[7].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}
