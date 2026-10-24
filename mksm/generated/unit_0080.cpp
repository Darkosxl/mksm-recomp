#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_00303340;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0080[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0,
    68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0080(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00300000;
    case 2u: goto L_00300004;
    case 3u: goto L_00300038;
    case 4u: goto L_00300098;
    case 5u: goto L_003000E4;
    case 6u: goto L_00300108;
    case 7u: goto L_00300168;
    case 8u: goto L_00300184;
    case 9u: goto L_0030019C;
    case 10u: goto L_003001D8;
    case 11u: goto L_0030021C;
    case 12u: goto L_00300240;
    case 13u: goto L_003002A4;
    case 14u: goto L_003002EC;
    case 15u: goto L_00300340;
    case 16u: goto L_00300364;
    case 17u: goto L_00300394;
    case 18u: goto L_003003E4;
    case 19u: goto L_003003F8;
    case 20u: goto L_0030041C;
    case 21u: goto L_00300468;
    case 22u: goto L_00300490;
    case 23u: goto L_003004BC;
    case 24u: goto L_00300510;
    case 25u: goto L_00300524;
    case 26u: goto L_0030053C;
    case 27u: goto L_0030055C;
    case 28u: goto L_00300584;
    case 29u: goto L_003005A0;
    case 30u: goto L_00300654;
    case 31u: goto L_00300668;
    case 32u: goto L_0030067C;
    case 33u: goto L_003006A0;
    case 34u: goto L_00300720;
    case 35u: goto L_00300740;
    case 36u: goto L_00300758;
    case 37u: goto L_003007FC;
    case 38u: goto L_00300878;
    case 39u: goto L_0030090C;
    case 40u: goto L_00300950;
    case 41u: goto L_0030096C;
    case 42u: goto L_00300998;
    case 43u: goto L_003009C0;
    case 44u: goto L_003009D8;
    case 45u: goto L_00300A04;
    case 46u: goto L_00300A20;
    case 47u: goto L_00300A38;
    case 48u: goto L_00300A6C;
    case 49u: goto L_00300AA4;
    case 50u: goto L_00300AC4;
    case 51u: goto L_00300B0C;
    case 52u: goto L_00300B1C;
    case 53u: goto L_00300B38;
    case 54u: goto L_00300B50;
    case 55u: goto L_00300B78;
    case 56u: goto L_00300BB4;
    case 57u: goto L_00300BD8;
    case 58u: goto L_00300C3C;
    case 59u: goto L_00300C68;
    case 60u: goto L_00300C98;
    case 61u: goto L_00300CC8;
    case 62u: goto L_00300D40;
    case 63u: goto L_00300D70;
    case 64u: goto L_00300DA0;
    case 65u: goto L_00300DD4;
    case 66u: goto L_00300DE8;
    case 67u: goto L_00300DF4;
    case 68u: goto L_00300E00;
    case 69u: goto L_00300E0C;
    case 70u: goto L_00300E24;
    case 71u: goto L_00300E38;
    case 72u: goto L_00300E50;
    case 73u: goto L_00300E64;
    case 74u: goto L_00300E7C;
    case 75u: goto L_00300EA8;
    case 76u: goto L_00300EB8;
    case 77u: goto L_00300ED8;
    case 78u: goto L_00300EF8;
    case 79u: goto L_00300F44;
    case 80u: goto L_00300F5C;
    case 81u: goto L_00300F94;
    case 82u: goto L_00300FD0;
    case 83u: goto L_00300FF4;
    case 84u: goto L_00301058;
    case 85u: goto L_00301064;
    case 86u: goto L_003010A8;
    case 87u: goto L_00301110;
    case 88u: goto L_00301168;
    case 89u: goto L_003011CC;
    case 90u: goto L_003011D4;
    case 91u: goto L_00301204;
    case 92u: goto L_003012B0;
    case 93u: goto L_003012CC;
    case 94u: goto L_003012F4;
    case 95u: goto L_00301314;
    case 96u: goto L_00301340;
    case 97u: goto L_003013E4;
    case 98u: goto L_003014A8;
    case 99u: goto L_003014B8;
    case 100u: goto L_003014C8;
    case 101u: goto L_00301538;
    case 102u: goto L_00301598;
    case 103u: goto L_003015C4;
    case 104u: goto L_0030160C;
    case 105u: goto L_00301650;
    case 106u: goto L_0030167C;
    case 107u: goto L_003017EC;
    case 108u: goto L_0030183C;
    case 109u: goto L_003018A0;
    case 110u: goto L_003018C8;
    case 111u: goto L_003018F4;
    case 112u: goto L_00301930;
    case 113u: goto L_00301B44;
    case 114u: goto L_00301B70;
    case 115u: goto L_00301BBC;
    case 116u: goto L_00301C08;
    case 117u: goto L_00301C18;
    case 118u: goto L_00301C50;
    case 119u: goto L_00301C9C;
    case 120u: goto L_00301D34;
    case 121u: goto L_00301D5C;
    case 122u: goto L_00301D8C;
    case 123u: goto L_00301D9C;
    case 124u: goto L_00301EA4;
    case 125u: goto L_00301EE0;
    case 126u: goto L_00301F2C;
    case 127u: goto L_00301F58;
    case 128u: goto L_00301F80;
    case 129u: goto L_00301FA4;
    case 130u: goto L_00301FB0;
    case 131u: goto L_00301FEC;
    case 132u: goto L_0030200C;
    case 133u: goto L_00302088;
    case 134u: goto L_003020F8;
    case 135u: goto L_00302128;
    case 136u: goto L_00302204;
    case 137u: goto L_00302220;
    case 138u: goto L_003022C0;
    case 139u: goto L_00302300;
    case 140u: goto L_00302344;
    case 141u: goto L_0030235C;
    case 142u: goto L_00302380;
    case 143u: goto L_00302390;
    case 144u: goto L_003023E0;
    case 145u: goto L_003023F4;
    case 146u: goto L_00302428;
    case 147u: goto L_00302430;
    case 148u: goto L_00302458;
    case 149u: goto L_00302470;
    case 150u: goto L_003024C0;
    case 151u: goto L_003024DC;
    case 152u: goto L_003024EC;
    case 153u: goto L_00302510;
    case 154u: goto L_00302524;
    case 155u: goto L_003025D0;
    case 156u: goto L_00302630;
    case 157u: goto L_003026A8;
    case 158u: goto L_003026C8;
    case 159u: goto L_00302744;
    case 160u: goto L_00302778;
    case 161u: goto L_003027DC;
    case 162u: goto L_00302830;
    case 163u: goto L_00302850;
    case 164u: goto L_00302864;
    case 165u: goto L_00302890;
    case 166u: goto L_003028B0;
    case 167u: goto L_0030293C;
    case 168u: goto L_0030295C;
    case 169u: goto L_0030299C;
    case 170u: goto L_003029F8;
    case 171u: goto L_00302A60;
    case 172u: goto L_00302AE4;
    case 173u: goto L_00302B04;
    case 174u: goto L_00302B44;
    case 175u: goto L_00302BA0;
    case 176u: goto L_00302C48;
    case 177u: goto L_00302CCC;
    case 178u: goto L_00302CEC;
    case 179u: goto L_00302D20;
    case 180u: goto L_00302D8C;
    case 181u: goto L_00302DF8;
    case 182u: goto L_00302E48;
    case 183u: goto L_00302E60;
    case 184u: goto L_00302E6C;
    case 185u: goto L_00302E84;
    case 186u: goto L_00302EB8;
    case 187u: goto L_00302ED8;
    case 188u: goto L_00302F18;
    case 189u: goto L_00302F24;
    case 190u: goto L_00302F30;
    case 191u: goto L_00302F3C;
    case 192u: goto L_00302F48;
    case 193u: goto L_00302F54;
    case 194u: goto L_00302F60;
    case 195u: goto L_00302F6C;
    case 196u: goto L_00302F94;
    case 197u: goto L_00302FA0;
    case 198u: goto L_00302FD0;
    case 199u: goto L_00303024;
    case 200u: goto L_00303104;
    case 201u: goto L_00303120;
    case 202u: goto L_00303130;
    case 203u: goto L_00303168;
    case 204u: goto L_00303220;
    case 205u: goto L_00303230;
    case 206u: goto L_00303260;
    case 207u: goto L_0030330C;
    case 208u: goto L_00303330;
    case 209u: goto L_00303340;
    case 210u: goto L_00303390;
    case 211u: goto L_003033F8;
    case 212u: goto L_0030345C;
    case 213u: goto L_00303480;
    case 214u: goto L_003034A8;
    case 215u: goto L_003034F0;
    case 216u: goto L_00303518;
    case 217u: goto L_00303564;
    case 218u: goto L_003035E0;
    case 219u: goto L_00303600;
    case 220u: goto L_00303628;
    case 221u: goto L_00303678;
    case 222u: goto L_003036DC;
    case 223u: goto L_003036FC;
    case 224u: goto L_00303740;
    case 225u: goto L_00303758;
    case 226u: goto L_0030379C;
    case 227u: goto L_00303834;
    case 228u: goto L_0030387C;
    case 229u: goto L_003038FC;
    case 230u: goto L_0030392C;
    case 231u: goto L_00303984;
    case 232u: goto L_003039F8;
    case 233u: goto L_00303A10;
    case 234u: goto L_00303A38;
    case 235u: goto L_00303AB0;
    case 236u: goto L_00303AC8;
    case 237u: goto L_00303AE0;
    case 238u: goto L_00303B00;
    case 239u: goto L_00303B34;
    case 240u: goto L_00303B94;
    case 241u: goto L_00303BAC;
    case 242u: goto L_00303BDC;
    case 243u: goto L_00303C74;
    case 244u: goto L_00303C8C;
    case 245u: goto L_00303D2C;
    case 246u: goto L_00303D44;
    case 247u: goto L_00303DD0;
    case 248u: goto L_00303DE8;
    case 249u: goto L_00303E00;
    case 250u: goto L_00303E20;
    case 251u: goto L_00303EAC;
    case 252u: goto L_00303EC4;
    case 253u: goto L_00303EDC;
    case 254u: goto L_00303EFC;
    case 255u: goto L_00303F68;
    case 256u: goto L_00303F80;
    case 257u: goto L_00303F98;
    case 258u: goto L_00303FB8;
    case 259u: goto L_00303FD0;
    default: bad_entry(c, 0x00300000u); return;
    }
L_00300000:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 1;
L_00300004:
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 632u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00300084; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00300048; } }
    goto L_0030003C;
L_00300038:
    c.budget -= 1;
L_0030003C:
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300058; } }
L_00300048:
    set32(c.r[2], 0u + 9u);
    st64((c.r[18].w[0] + 560u), 0ull);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300080; } }
L_00300058:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00300084; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 32784ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300084; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_00300080:
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 1;
L_00300084:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[5].w[0] + 9872u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300098u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00300098u) [[unlikely]] return; }
L_00300098:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    set32(c.r[3], ld32((c.r[20].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003001A4; } }
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003001A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10079u)));
    set32(c.r[16], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_003001A4; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000E4u);  if (depth < kMaxDepth) unit_007F(c, 106u, depth + 1u); else { c.pc = 0x002FE798u; return; } if (c.pc != 0x003000E4u) [[unlikely]] return; }
L_003000E4:
    set32(c.r[2], 0u + 12u);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.f[15] = 0u;
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300108u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00300108u) [[unlikely]] return; }
L_00300108:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00300120; } }
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030012C; } }
L_00300120:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300130; } }
L_0030012C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00300130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xDEC30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[13] = 0u;
    c.r[6].d[0] = c.r[6].d[0] | 49178ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300168u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00300168u) [[unlikely]] return; }
L_00300168:
    set32(c.r[3], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300184u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00300184u) [[unlikely]] return; }
L_00300184:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030019Cu);  if (depth < kMaxDepth) unit_0044(c, 155u, depth + 1u); else { c.pc = 0x00212BE0u; return; } if (c.pc != 0x0030019Cu) [[unlikely]] return; }
L_0030019C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_003001A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 11188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003002F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003001CC; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003002F8; } }
L_003001CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 1096u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001D8u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x003001D8u) [[unlikely]] return; }
L_003001D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003002AC; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 9248u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300210; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9066u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300210; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 9256u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300210; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9064u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300224; } }
L_00300210:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030021Cu);  if (depth < kMaxDepth) unit_007E(c, 321u, depth + 1u); else { c.pc = 0x002FB768u; return; } if (c.pc != 0x0030021Cu) [[unlikely]] return; }
L_0030021C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_00300224:
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300240u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00300240u) [[unlikely]] return; }
L_00300240:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030025C; } }
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300268; } }
L_0030025C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030026C; } }
L_00300268:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030026C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xDEC30000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[6].d[0] = c.r[6].d[0] | 49178ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002A4u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x003002A4u) [[unlikely]] return; }
L_003002A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_003002AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 11188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003002F8; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003002F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[5], 0u + 880u);
    set32(c.r[2], c.r[17].w[0] - 4440u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 632u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002ECu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x003002ECu) [[unlikely]] return; }
L_003002EC:
    st32((c.r[18].w[0] + 7700u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_003002F8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 10079u));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030039C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[6].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300340u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00300340u) [[unlikely]] return; }
L_00300340:
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[18].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[18].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300364u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300364u) [[unlikely]] return; }
L_00300364:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030039C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300394u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300394u) [[unlikely]] return; }
L_00300394:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 2;
L_0030039C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300424; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[7].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4160000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003E4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x003003E4u) [[unlikely]] return; }
L_003003E4:
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003F8u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x003003F8u) [[unlikely]] return; }
L_003003F8:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00300424; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030041Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0030041Cu) [[unlikely]] return; }
L_0030041C:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 2;
L_00300424:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[18].w[0] + 9969u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00300458; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030046C; } }
L_00300458:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300468u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00300468u) [[unlikely]] return; }
L_00300468:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0030046C:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003004F4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300490u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300490u) [[unlikely]] return; }
L_00300490:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003004DC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004BCu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x003004BCu) [[unlikely]] return; }
L_003004BC:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003004F4; } }
L_003004DC:
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 6;
L_003004F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] - 19312u);
    set32(c.r[17], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300510u);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x00300510u) [[unlikely]] return; }
L_00300510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00300590; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300524u);  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B9228u; return; } if (c.pc != 0x00300524u) [[unlikely]] return; }
L_00300524:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_00300578; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030053Cu);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x0030053Cu) [[unlikely]] return; }
L_0030053C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300550; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300570; } }
L_00300550:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030055Cu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0030055Cu) [[unlikely]] return; }
L_0030055C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300570; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 1092u)));
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 2;
L_00300570:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300590; } }
L_00300578:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300584u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x00300584u) [[unlikely]] return; }
L_00300584:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003005A4; } }
L_00300590:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005A0u);  if (depth < kMaxDepth) unit_007F(c, 65u, depth + 1u); else { c.pc = 0x002FD680u; return; } if (c.pc != 0x003005A0u) [[unlikely]] return; }
L_003005A0:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_003005A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9022u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003005C8; } }
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301064; } }
L_003005C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00300680; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00300680; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 32784ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300680; } }
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300634; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 1080u)));
    set32(c.r[2], c.r[7].w[0] - 142u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300680; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00300680; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300680; } }
L_00300634:
    set32(c.r[2], ld32((c.r[20].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300704; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300654u);  if (depth < kMaxDepth) unit_0089(c, 149u, depth + 1u); else { c.pc = 0x00325B98u; return; } if (c.pc != 0x00300654u) [[unlikely]] return; }
L_00300654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300680; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300668u);  if (depth < kMaxDepth) unit_0089(c, 149u, depth + 1u); else { c.pc = 0x00325B98u; return; } if (c.pc != 0x00300668u) [[unlikely]] return; }
L_00300668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300680; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030067Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0030067Cu) [[unlikely]] return; }
L_0030067C:
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 1;
L_00300680:
    set32(c.r[2], ld32((c.r[20].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300704; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006A0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x003006A0u) [[unlikely]] return; }
L_003006A0:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00300714; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9022u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00300714; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 7668u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300714; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10060u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003006F0; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00300714; } }
L_003006F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300D14; } }
L_00300704:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300D14; } }
L_00300714:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300720u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00300720u) [[unlikely]] return; }
L_00300720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300D14; } }
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300740u);  if (depth < kMaxDepth) unit_007F(c, 51u, depth + 1u); else { c.pc = 0x002FD110u; return; } if (c.pc != 0x00300740u) [[unlikely]] return; }
L_00300740:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300758u);  if (depth < kMaxDepth) unit_007E(c, 332u, depth + 1u); else { c.pc = 0x002FBA58u; return; } if (c.pc != 0x00300758u) [[unlikely]] return; }
L_00300758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8940u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030076C; } }
    st8((c.r[18].w[0] + 10131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030076C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10062u)));
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10064u)));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 132u), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003007A8; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 5;
L_003007A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10066u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10066u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003007BC; } }
    st16((c.r[19].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003007BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10058u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003007EC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300800; } }
L_003007EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007FCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003007FCu) [[unlikely]] return; }
L_003007FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00300800:
    set32(c.r[2], ld32((c.r[19].w[0] + 10216u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00300834; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300834; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10060u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10216u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300838; } }
L_00300834:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10060u));
    c.budget -= 1;
L_00300838:
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8940u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00300850; } }
    st8((c.r[18].w[0] + 10131u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00300850:
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030086C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10056u)));
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003009DC; } }
L_0030086C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300878u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300878u) [[unlikely]] return; }
L_00300878:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003008B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9022u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_003008B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 7668u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003009CC; } }
L_003008B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[17], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10056u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[5].w[0] - 14152u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[10], 0u + 1u);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030090Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0030090Cu) [[unlikely]] return; }
L_0030090C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300950u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00300950u) [[unlikely]] return; }
L_00300950:
    c.f[20] = ld32((c.r[29].w[0] + 676u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030096Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0030096Cu) [[unlikely]] return; }
L_0030096C:
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003009F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300998u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300998u) [[unlikely]] return; }
L_00300998:
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003009F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003009C0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x003009C0u) [[unlikely]] return; }
L_003009C0:
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003009EC; } }
L_003009CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003009D8u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x003009D8u) [[unlikely]] return; }
L_003009D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10056u)));
    c.budget -= 1;
L_003009DC:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 4;
L_003009EC:
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 1;
L_003009F0:
    set32(c.r[6], ld32((c.r[29].w[0] + 1076u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A04u);  if (depth < kMaxDepth) unit_007F(c, 29u, depth + 1u); else { c.pc = 0x002FC5D0u; return; } if (c.pc != 0x00300A04u) [[unlikely]] return; }
L_00300A04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00300B1C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A20u);  if (depth < kMaxDepth) unit_007F(c, 42u, depth + 1u); else { c.pc = 0x002FCC28u; return; } if (c.pc != 0x00300A20u) [[unlikely]] return; }
L_00300A20:
    c.r[17].d[0] = c.r[16].d[0] & 65535ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[18].w[0] + 9824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A38u);  if (depth < kMaxDepth) unit_007F(c, 47u, depth + 1u); else { c.pc = 0x002FCEA8u; return; } if (c.pc != 0x00300A38u) [[unlikely]] return; }
L_00300A38:
    st16((c.r[18].w[0] + 9826u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00300A5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300A6C; } }
L_00300A5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A6Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00300A6Cu) [[unlikely]] return; }
L_00300A6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00300A8C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00300B1C; } }
L_00300A8C:
    set32(c.r[5], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00300AE0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AA4u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x00300AA4u) [[unlikely]] return; }
L_00300AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300AB8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300AD4; } }
L_00300AB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AC4u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x00300AC4u) [[unlikely]] return; }
L_00300AC4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300AD4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 1;
L_00300AD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300AEC; } }
L_00300AE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300AF0; } }
L_00300AEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00300AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300B1C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B0Cu);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x00300B0Cu) [[unlikely]] return; }
L_00300B0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 1084u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B1Cu);  if (depth < kMaxDepth) unit_0091(c, 30u, depth + 1u); else { c.pc = 0x003444B8u; return; } if (c.pc != 0x00300B1Cu) [[unlikely]] return; }
L_00300B1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300B50; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B38u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00300B38u) [[unlikely]] return; }
L_00300B38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 180u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B50u);  if (depth < kMaxDepth) unit_0044(c, 155u, depth + 1u); else { c.pc = 0x00212BE0u; return; } if (c.pc != 0x00300B50u) [[unlikely]] return; }
L_00300B50:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    st64((c.r[18].w[0] + 560u), 0ull);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B78u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x00300B78u) [[unlikely]] return; }
L_00300B78:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 9064u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300BA8; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 9248u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300BA8; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 9256u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300BBC; } }
L_00300BA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BB4u);  if (depth < kMaxDepth) unit_007E(c, 321u, depth + 1u); else { c.pc = 0x002FB768u; return; } if (c.pc != 0x00300BB4u) [[unlikely]] return; }
L_00300BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300C3C; } }
L_00300BBC:
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 132u));
    c.f[14] = ld32((c.r[19].w[0] + 136u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BD8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00300BD8u) [[unlikely]] return; }
L_00300BD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00300BF4; } }
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300C00; } }
L_00300BF4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 9289u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300C04; } }
L_00300C00:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00300C04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xDEC30000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[6].d[0] = c.r[6].d[0] | 49178ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C3Cu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00300C3Cu) [[unlikely]] return; }
L_00300C3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10131u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300CA0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 10084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 10079u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C68u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300C68u) [[unlikely]] return; }
L_00300C68:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00300CA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C98u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300C98u) [[unlikely]] return; }
L_00300C98:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 2;
L_00300CA0:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] >= 0;  if (t) { goto L_00300CB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300CC8; } }
L_00300CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CC8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00300CC8u) [[unlikely]] return; }
L_00300CC8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[6].w[0] - 5024u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 11u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10131u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10134u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300D08; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 10129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_00300D08:
    st8((c.r[18].w[0] + 10129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_00300D14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10131u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300D78; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 10084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 10079u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D40u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300D40u) [[unlikely]] return; }
L_00300D40:
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00300D78; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D70u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00300D70u) [[unlikely]] return; }
L_00300D70:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.budget -= 2;
L_00300D78:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] >= 0;  if (t) { goto L_00300D8C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300DA4; } }
L_00300D8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DA0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00300DA0u) [[unlikely]] return; }
L_00300DA0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00300DA4:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 74u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 7684u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[7].w[0] - 5024u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], 0u + 1u);
    st16((c.r[18].w[0] + 7684u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 8938u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DD4u);  if (depth < kMaxDepth) unit_007F(c, 51u, depth + 1u); else { c.pc = 0x002FD110u; return; } if (c.pc != 0x00300DD4u) [[unlikely]] return; }
L_00300DD4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DE8u);  if (depth < kMaxDepth) unit_007E(c, 332u, depth + 1u); else { c.pc = 0x002FBA58u; return; } if (c.pc != 0x00300DE8u) [[unlikely]] return; }
L_00300DE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DF4u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x00300DF4u) [[unlikely]] return; }
L_00300DF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_00300E24; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_00300E00:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E0Cu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00300E0Cu) [[unlikely]] return; }
L_00300E0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E24u);  if (depth < kMaxDepth) unit_0044(c, 155u, depth + 1u); else { c.pc = 0x00212BE0u; return; } if (c.pc != 0x00300E24u) [[unlikely]] return; }
L_00300E24:
    set32(c.r[6], ld32((c.r[29].w[0] + 1076u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E38u);  if (depth < kMaxDepth) unit_007F(c, 29u, depth + 1u); else { c.pc = 0x002FC5D0u; return; } if (c.pc != 0x00300E38u) [[unlikely]] return; }
L_00300E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301060; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E50u);  if (depth < kMaxDepth) unit_007F(c, 42u, depth + 1u); else { c.pc = 0x002FCC28u; return; } if (c.pc != 0x00300E50u) [[unlikely]] return; }
L_00300E50:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[18].w[0] + 9824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E64u);  if (depth < kMaxDepth) unit_007F(c, 47u, depth + 1u); else { c.pc = 0x002FCEA8u; return; } if (c.pc != 0x00300E64u) [[unlikely]] return; }
L_00300E64:
    set32(c.r[6], ld32((c.r[29].w[0] + 1076u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st16((c.r[18].w[0] + 9826u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E7Cu);  if (depth < kMaxDepth) unit_007F(c, 29u, depth + 1u); else { c.pc = 0x002FC5D0u; return; } if (c.pc != 0x00300E7Cu) [[unlikely]] return; }
L_00300E7C:
    set32(c.r[16], 0u + 13248u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[21].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[4].w[0] + 27456u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EA8u);  if (depth < kMaxDepth) unit_006E(c, 98u, depth + 1u); else { c.pc = 0x002B9358u; return; } if (c.pc != 0x00300EA8u) [[unlikely]] return; }
L_00300EA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EB8u);  if (depth < kMaxDepth) unit_006E(c, 84u, depth + 1u); else { c.pc = 0x002B9030u; return; } if (c.pc != 0x00300EB8u) [[unlikely]] return; }
L_00300EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
    set32(c.r[5], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00300F18; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300ED8u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x00300ED8u) [[unlikely]] return; }
L_00300ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300EEC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300F0C; } }
L_00300EEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EF8u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x00300EF8u) [[unlikely]] return; }
L_00300EF8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300F0C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 1092u)));
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[23].d[0];
    c.budget -= 2;
L_00300F0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300F24; } }
L_00300F18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300F28; } }
L_00300F24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00300F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300F44; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F44u);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x00300F44u) [[unlikely]] return; }
L_00300F44:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F5Cu);  if (depth < kMaxDepth) unit_0081(c, 186u, depth + 1u); else { c.pc = 0x003064F8u; return; } if (c.pc != 0x00300F5Cu) [[unlikely]] return; }
L_00300F5C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 11256u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300F70; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 11257u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00300F70:
    set32(c.r[4], 0u + 13248u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + 27456u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F94u);  if (depth < kMaxDepth) unit_007A(c, 114u, depth + 1u); else { c.pc = 0x002E95E0u; return; } if (c.pc != 0x00300F94u) [[unlikely]] return; }
L_00300F94:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 9064u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300FC4; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 9248u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300FC4; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 9256u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300FD8; } }
L_00300FC4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FD0u);  if (depth < kMaxDepth) unit_007E(c, 321u, depth + 1u); else { c.pc = 0x002FB768u; return; } if (c.pc != 0x00300FD0u) [[unlikely]] return; }
L_00300FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_00300FD8:
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 132u));
    c.f[14] = ld32((c.r[19].w[0] + 136u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FF4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00300FF4u) [[unlikely]] return; }
L_00300FF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301010; } }
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030101C; } }
L_00301010:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 9289u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301020; } }
L_0030101C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xDEC30000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[6].d[0] = c.r[6].d[0] | 49178ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301058u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00301058u) [[unlikely]] return; }
L_00301058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 133u, depth); } }
L_00301060:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301064:
    ld128((c.r[29].w[0] + 1248u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1232u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1216u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1200u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1104u));
    c.f[22] = ld32((c.r[29].w[0] + 1280u));
    c.f[21] = ld32((c.r[29].w[0] + 1272u));
    c.f[20] = ld32((c.r[29].w[0] + 1264u));
    set32(c.r[29], c.r[29].w[0] + 1296u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003010A8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 13248u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[16], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.f[21]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301110u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00301110u) [[unlikely]] return; }
L_00301110:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00301128; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00301470; } }
L_00301128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10140u));
    c.f[0] = ld32((c.r[3].w[0] + 10132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[21] = ld32((c.r[2].w[0] + 10136u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030116C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301168u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00301168u) [[unlikely]] return; }
L_00301168:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0030116C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9940u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] - 24392u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 22u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != c.r[5].d[0];  if (t) { goto L_003011E0; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[19].w[0] + 27456u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 22u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003011CCu);  if (depth < kMaxDepth) unit_0083(c, 54u, depth + 1u); else { c.pc = 0x0030C660u; return; } if (c.pc != 0x003011CCu) [[unlikely]] return; }
L_003011CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003011E0; } }
L_003011D4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301474; } }
L_003011E0:
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0030120C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301204u);  if (depth < kMaxDepth) unit_003C(c, 282u, depth + 1u); else { c.pc = 0x001F31D0u; return; } if (c.pc != 0x00301204u) [[unlikely]] return; }
L_00301204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003011D4u | kUnwind; return; } goto L_003011D4; } }
L_0030120C:
    set32(c.r[3], c.r[20].w[0] + 1u);
    set32(c.r[4], 0u + 13248u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301260; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_00301260:
    c.f[1] = ld32((c.r[3].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301298; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_00301298:
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003012BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003012D0; } }
L_003012B0:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301364; } }
L_003012BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012CCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003012CCu) [[unlikely]] return; }
L_003012CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003012D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00301314; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012F4u);  if (depth < kMaxDepth) unit_006E(c, 194u, depth + 1u); else { c.pc = 0x002BABE8u; return; } if (c.pc != 0x003012F4u) [[unlikely]] return; }
L_003012F4:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[22].w[0] + 14208u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[13] = c.f[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301314u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x00301314u) [[unlikely]] return; }
L_00301314:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[5], c.r[5].w[0] + 16480u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_00301340:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003012B0u | kUnwind; return; } goto L_003012B0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301340u | kUnwind; return; } goto L_00301340; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00301364:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301470; } }
    set32(c.r[2], 0u + 1056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 17040u);
    set32(c.r[5], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], c.r[21].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[14] = ld32((c.r[3].w[0]));
    c.f[15] = ld32((c.r[2].w[0]));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013E4u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x003013E4u) [[unlikely]] return; }
L_003013E4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301470; } }
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030142C; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_0030142C:
    c.f[0] = fp::sub(c.f[1], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301470; } }
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] + 128u), c.f[1]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] - 6096u), c.r[21].w[0]);
    st32((c.r[3].w[0] + 132u), c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301474; } }
L_00301470:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301474:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003014A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014B8u);  if (depth < kMaxDepth) unit_0080(c, 86u, depth + 1u); else { c.pc = 0x003010A8u; return; } if (c.pc != 0x003014B8u) [[unlikely]] return; }
L_003014B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003014C8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[19], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 20;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_00301524; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030153C; } }
L_00301524:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301538u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301538u) [[unlikely]] return; }
L_00301538:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0030153C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 52u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00301870; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301C18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_00301C18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301C18; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301598u);  if (depth < kMaxDepth) unit_006E(c, 183u, depth + 1u); else { c.pc = 0x002BA850u; return; } if (c.pc != 0x00301598u) [[unlikely]] return; }
L_00301598:
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 13248u);
    set32(c.r[16], c.r[16].w[0] + 14208u);
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003015C4u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x003015C4u) [[unlikely]] return; }
L_003015C4:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301628; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_003015F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301610; } }
L_003015F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030160Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0030160Cu) [[unlikely]] return; }
L_0030160C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00301610:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 38u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00301C18; } }
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00301628:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_0030163C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301650; } }
L_0030163C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301650u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301650u) [[unlikely]] return; }
L_00301650:
    st32((c.r[22].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_00301668; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301680; } }
L_00301668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030167Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0030167Cu) [[unlikely]] return; }
L_0030167C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00301680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[8], 0u - 1u);
    st32((c.r[2].w[0] - 5020u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00301C18; } }
    set32(c.r[5], ld32((c.r[22].w[0] - 5024u)));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 48u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301C18; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[30].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 86u)));
    set32(c.r[4], c.r[4].w[0] - 22872u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9940u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10079u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10085u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10085u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301C18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_00301C18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7712u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00301C18; } }
    c.f[1] = ld32((c.r[6].w[0] + 132u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301C18; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 7700u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003017D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003017D4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003017D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003017D4; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003017D4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003017D4; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301C18; } }
L_003017D4:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003017ECu);  if (depth < kMaxDepth) unit_006D(c, 95u, depth + 1u); else { c.pc = 0x002B68A0u; return; } if (c.pc != 0x003017ECu) [[unlikely]] return; }
L_003017EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301C18; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[16], 0u + 13248u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[17], c.r[30].w[0] + 14208u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[22].w[0] - 5024u)));
    set32(c.r[7], 0u + 12u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 19u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 42u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 54u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030183Cu);  if (depth < kMaxDepth) unit_0081(c, 57u, depth + 1u); else { c.pc = 0x00304CC8u; return; } if (c.pc != 0x0030183Cu) [[unlikely]] return; }
L_0030183C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 5020u)));
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 10091u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 10084u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 10084u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301C18; } }
L_00301870:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301C18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_00301C18; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018A0u);  if (depth < kMaxDepth) unit_006E(c, 183u, depth + 1u); else { c.pc = 0x002BA850u; return; } if (c.pc != 0x003018A0u) [[unlikely]] return; }
L_003018A0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_003018B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003018C8; } }
L_003018B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018C8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003018C8u) [[unlikely]] return; }
L_003018C8:
    st32((c.r[22].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_003018E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003018F8; } }
L_003018E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018F4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003018F4u) [[unlikely]] return; }
L_003018F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003018F8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    st32((c.r[4].w[0] - 5020u), c.r[5].w[0]);
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301930u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x00301930u) [[unlikely]] return; }
L_00301930:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030195C; } }
    set32(c.r[3], ld32((c.r[22].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 38u)));
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_0030195C:
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[8], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_00301BE0; } }
    set32(c.r[5], ld32((c.r[22].w[0] - 5024u)));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 48u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301BE0; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] - 22872u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 86u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9940u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10079u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10085u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10085u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301BE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_00301BE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7712u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00301BE0; } }
    c.f[1] = ld32((c.r[6].w[0] + 132u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00301BE0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 7700u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301A7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301A7C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301A7C; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301A7C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301BE0; } }
L_00301A7C:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[30].w[0] + 14208u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00301AB8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00301AB8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00301B08; } }
L_00301AB8:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[30].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10214u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00301AE8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301B1C; } }
L_00301AE8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10010u));
    set32(c.r[3], 0u + 100u);
    st16((c.r[18].w[0] + 10014u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 10012u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10010u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301B1C; } }
L_00301B08:
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 10010u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 10014u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10012u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00301B1C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_00301B30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301B44; } }
L_00301B30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B44u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301B44u) [[unlikely]] return; }
L_00301B44:
    st32((c.r[22].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_00301B5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301B70; } }
L_00301B5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B70u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301B70u) [[unlikely]] return; }
L_00301B70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], 0u + 13248u);
    st32((c.r[3].w[0] - 5020u), c.r[2].w[0]);
    set32(c.r[17], c.r[30].w[0] + 14208u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[22].w[0] - 5024u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[7], 0u + 12u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 42u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BBCu);  if (depth < kMaxDepth) unit_0081(c, 64u, depth + 1u); else { c.pc = 0x00304EC8u; return; } if (c.pc != 0x00301BBCu) [[unlikely]] return; }
L_00301BBC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 10084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 10084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301C18; } }
L_00301BE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] - 5024u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 19u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C08u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x00301C08u) [[unlikely]] return; }
L_00301C08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C18u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x00301C18u) [[unlikely]] return; }
L_00301C18:
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
L_00301C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[6].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C9Cu);  if (depth < kMaxDepth) unit_007F(c, 117u, depth + 1u); else { c.pc = 0x002FEA18u; return; } if (c.pc != 0x00301C9Cu) [[unlikely]] return; }
L_00301C9C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 660u)));
    set32(c.r[4], 0u + 45u);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10030u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10032u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 10030u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10032u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00301CF8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10033u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10031u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 10033u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10031u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00301CF8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 9978u));
    st8((c.r[16].w[0] + 10125u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 9978u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 7672u));
    st16((c.r[17].w[0] + 7674u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 7672u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10130u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301D34; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D34u);  if (depth < kMaxDepth) unit_007C(c, 12u, depth + 1u); else { c.pc = 0x002F0108u; return; } if (c.pc != 0x00301D34u) [[unlikely]] return; }
L_00301D34:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00301D4C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301D5C; } }
L_00301D4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D5Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301D5Cu) [[unlikely]] return; }
L_00301D5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301D7C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 113u));
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00301D7C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D8Cu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x00301D8Cu) [[unlikely]] return; }
L_00301D8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D9Cu);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x00301D9Cu) [[unlikely]] return; }
L_00301D9C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9934u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 4472u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00301DE0; } }
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], c.r[5].w[0] << 3);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301DE0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301DFC; } }
L_00301DE0:
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], c.r[5].w[0] << 3);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 7;
L_00301DFC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00301E20; } }
    set32(c.r[3], 0u + 152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld64((c.r[2].w[0] + 4560u));
    c.budget -= 7;
L_00301E20:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 6);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 18);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 12);
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[2].d[0] = c.r[5].d[0] & 63ull;
    c.r[17].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[18].d[0] = c.r[4].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00301E84; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00301E7C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00301E7C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00301EB0; } }
L_00301E7C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00301EA4; } }
L_00301E84:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EA4u);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x00301EA4u) [[unlikely]] return; }
L_00301EA4:
    st16((c.r[16].w[0] + 9014u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[16].w[0] + 9016u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 8938u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 3;
L_00301EB0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    st8((c.r[16].w[0] + 10076u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00301ED0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301EE0; } }
L_00301ED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EE0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301EE0u) [[unlikely]] return; }
L_00301EE0:
    st32((c.r[20].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301EFC; } }
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00301EF8; }
L_00301EF8:
    st16((c.r[16].w[0] + 10006u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00301EFC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9968u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301F14; } }
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[16].w[0] + 9968u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00301F14:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F2Cu);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x00301F2Cu) [[unlikely]] return; }
L_00301F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00301F58; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301F58u) [[unlikely]] return; }
L_00301F58:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FA4u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x00301FA4u) [[unlikely]] return; }
L_00301FA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FB0u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x00301FB0u) [[unlikely]] return; }
L_00301FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301FC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030210C; } }
L_00301FC4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10054u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00301FDC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301FF0; } }
L_00301FDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FECu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00301FECu) [[unlikely]] return; }
L_00301FEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00301FF0:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0030200C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030200Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0030200Cu) [[unlikely]] return; }
L_0030200C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9992u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302108; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9988u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 9990u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302044; } }
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030204C; } }
L_00302044:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00302108; } }
L_0030204C:
    c.f[1] = ld32((c.r[16].w[0] + 9904u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 9908u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 9912u));
    c.f[0] = ld32((c.r[16].w[0] + 9916u));
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[7], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302088u);  if (depth < kMaxDepth) unit_0073(c, 181u, depth + 1u); else { c.pc = 0x002CEAD0u; return; } if (c.pc != 0x00302088u) [[unlikely]] return; }
L_00302088:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9990u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 74u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003020A4; } }
    set32(c.r[2], 0u + 10000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020AC; } }
L_003020A4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 9992u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_003020AC:
    st16((c.r[16].w[0] + 9992u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9992u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003020C8; } }
    st16((c.r[16].w[0] + 9992u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302108; } }
L_003020C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003020F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 9994u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003020F8u);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x003020F8u) [[unlikely]] return; }
L_003020F8:
    st32((c.r[16].w[0] + 584u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030210C; } }
L_00302108:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030210C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00302128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10026u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302150; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_00302150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[2].w[0] + 10136u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10024u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302184; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 10132u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003021D0; } }
L_00302184:
    set32(c.r[3], ld32((c.r[5].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003021A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 25928u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003021B4; } }
L_003021A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 26312u);
    c.budget -= 3;
L_003021B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 10132u), c.f[0]);
    c.budget -= 7;
L_003021D0:
    c.f[0] = ld32((c.r[5].w[0] + 10132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[2].w[0] + 10140u), c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[1]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00302204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302204u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00302204u) [[unlikely]] return; }
L_00302204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 10144u), c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00302220:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10006u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10006u));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302290; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 10006u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302290; } }
    st16((c.r[17].w[0] + 7680u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00302290:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10006u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302598; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00302598; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st8((c.r[17].w[0] + 10030u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10031u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022C0u);  if (depth < kMaxDepth) unit_0080(c, 100u, depth + 1u); else { c.pc = 0x003014C8u; return; } if (c.pc != 0x003022C0u) [[unlikely]] return; }
L_003022C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 528u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00302598; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302598; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00302300:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << (c.r[21].w[0] & 63u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302588; } }
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 27456u);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == c.r[23].d[0];  if (t) { goto L_00302588; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302344u);  if (depth < kMaxDepth) unit_0034(c, 321u, depth + 1u); else { c.pc = 0x001D3038u; return; } if (c.pc != 0x00302344u) [[unlikely]] return; }
L_00302344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302588; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030235Cu);  if (depth < kMaxDepth) unit_006D(c, 181u, depth + 1u); else { c.pc = 0x002B7AE8u; return; } if (c.pc != 0x0030235Cu) [[unlikely]] return; }
L_0030235C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302588; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00302380; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302380u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00302380u) [[unlikely]] return; }
L_00302380:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302390u);  if (depth < kMaxDepth) unit_007B(c, 108u, depth + 1u); else { c.pc = 0x002ED760u; return; } if (c.pc != 0x00302390u) [[unlikely]] return; }
L_00302390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003023A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10097u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302588; } }
L_003023A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7680u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[21].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302588; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003023D0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003023E4; } }
L_003023D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[3].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023E0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003023E0u) [[unlikely]] return; }
L_003023E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003023E4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023F4u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x003023F4u) [[unlikely]] return; }
L_003023F4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00302418; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00302418; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302588; } }
L_00302418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302428u);  if (depth < kMaxDepth) unit_0080(c, 135u, depth + 1u); else { c.pc = 0x00302128u; return; } if (c.pc != 0x00302428u) [[unlikely]] return; }
L_00302428:
    c.r[30].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00302430:
    set32(c.r[2], ld32((c.r[17].w[0] + 584u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[20].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302544; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.r[19].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 10054u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[18], c.r[2].w[0] + 16480u);
    c.budget -= 5;
L_00302458:
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302470u);  if (depth < kMaxDepth) unit_0080(c, 98u, depth + 1u); else { c.pc = 0x003014A8u; return; } if (c.pc != 0x00302470u) [[unlikely]] return; }
L_00302470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302524; } }
    set32(c.r[16], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_00302494; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003024A4; } }
L_00302494:
    set32(c.r[2], c.r[19].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 5u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_003024A4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003024C0u);  if (depth < kMaxDepth) unit_007F(c, 130u, depth + 1u); else { c.pc = 0x002FEDB8u; return; } if (c.pc != 0x003024C0u) [[unlikely]] return; }
L_003024C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003024F4; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003024DCu);  if (depth < kMaxDepth) unit_007F(c, 106u, depth + 1u); else { c.pc = 0x002FE798u; return; } if (c.pc != 0x003024DCu) [[unlikely]] return; }
L_003024DC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003024ECu);  if (depth < kMaxDepth) unit_0080(c, 118u, depth + 1u); else { c.pc = 0x00301C50u; return; } if (c.pc != 0x003024ECu) [[unlikely]] return; }
L_003024EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302524; } }
L_003024F4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00302524; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302510u);  if (depth < kMaxDepth) unit_0088(c, 240u, depth + 1u); else { c.pc = 0x00322AB0u; return; } if (c.pc != 0x00302510u) [[unlikely]] return; }
L_00302510:
    set32(c.r[30], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302524u);  if (depth < kMaxDepth) unit_0080(c, 118u, depth + 1u); else { c.pc = 0x00301C50u; return; } if (c.pc != 0x00302524u) [[unlikely]] return; }
L_00302524:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == c.r[2].d[0];  if (t) { goto L_00302568; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302458u | kUnwind; return; } goto L_00302458; } }
L_00302544:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == c.r[3].d[0];  if (t) { goto L_00302568; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302430u | kUnwind; return; } goto L_00302430; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != c.r[3].d[0];  if (t) { goto L_00302588; } }
L_00302568:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 524u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302588; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302598; } }
L_00302588:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302300u | kUnwind; return; } goto L_00302300; } }
L_00302598:
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
L_003025D0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 608u), c.f[20]);
    c.f[20] = 0u;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 544u), c.f[20]);
    st32((c.r[29].w[0] + 540u), c.f[20]);
    st32((c.r[29].w[0] + 536u), 0u);
    st32((c.r[29].w[0] + 532u), 0u);
    st32((c.r[29].w[0] + 528u), 0u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302894; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302630u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00302630u) [[unlikely]] return; }
L_00302630:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302894; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00302894; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302660; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00302894; } }
L_00302660:
    set32(c.r[2], 0u + 268u);
    st32((c.r[29].w[0] + 544u), c.f[20]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u - 1u);
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    st32((c.r[29].w[0] + 540u), c.f[20]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026A8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x003026A8u) [[unlikely]] return; }
L_003026A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003026CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026C8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003026C8u) [[unlikely]] return; }
L_003026C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003026CC:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030270C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302728; } }
L_0030270C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
L_00302728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[8], c.r[29].w[0] + 532u);
    set32(c.r[9], c.r[29].w[0] + 536u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302744u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x00302744u) [[unlikely]] return; }
L_00302744:
    set32(c.r[2], ld32((c.r[29].w[0] + 536u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00302768; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302778; } }
L_00302768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302778u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00302778u) [[unlikely]] return; }
L_00302778:
    st32((c.r[17].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302790; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003027A4; } }
L_00302790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_003027A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003027B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 3;
L_003027B8:
    c.f[13] = ld32((c.r[29].w[0] + 528u));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.f[14] = ld32((c.r[29].w[0] + 536u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    set32(c.r[4], c.r[29].w[0] + 540u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027DCu);  if (depth < kMaxDepth) unit_0045(c, 116u, depth + 1u); else { c.pc = 0x00215FC0u; return; } if (c.pc != 0x003027DCu) [[unlikely]] return; }
L_003027DC:
    c.f[4] = ld32((c.r[29].w[0] + 544u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = c.f[4] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[3] = ld32((c.r[29].w[0] + 540u));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.f[12] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 544u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 128u), c.f[12]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302838; } }
    c.f[0] = c.f[3] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302830u);  if (depth < kMaxDepth) unit_006B(c, 130u, depth + 1u); else { c.pc = 0x002AEA48u; return; } if (c.pc != 0x00302830u) [[unlikely]] return; }
L_00302830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302894; } }
L_00302838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302850u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x00302850u) [[unlikely]] return; }
L_00302850:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302864u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x00302864u) [[unlikely]] return; }
L_00302864:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9933u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302894; } }
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302890u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x00302890u) [[unlikely]] return; }
L_00302890:
    st8((c.r[16].w[0] + 9933u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00302894:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.f[20] = ld32((c.r[29].w[0] + 608u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003028B0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 624u), c.f[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302A3C; } }
    set32(c.r[4], 0u + 268u);
    set32(c.r[6], 0u + 13248u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[7], 0u - 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030293Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0030293Cu) [[unlikely]] return; }
L_0030293C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[8], c.r[29].w[0] + 532u);
    set32(c.r[9], c.r[29].w[0] + 536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030295Cu);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x0030295Cu) [[unlikely]] return; }
L_0030295C:
    set32(c.r[2], ld32((c.r[29].w[0] + 536u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0030298C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003029A0; } }
L_0030298C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030299Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0030299Cu) [[unlikely]] return; }
L_0030299C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003029A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003029BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003029D0; } }
L_003029BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_003029D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003029E4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 3;
L_003029E4:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 540u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029F8u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x003029F8u) [[unlikely]] return; }
L_003029F8:
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[5] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 540u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    c.budget -= 17;
L_00302A3C:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.f[20] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[29], c.r[29].w[0] + 640u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00302A60:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302C28; } }
    set32(c.r[4], 0u + 268u);
    set32(c.r[6], 0u + 13248u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[7], 0u - 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AE4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00302AE4u) [[unlikely]] return; }
L_00302AE4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[8], c.r[29].w[0] + 532u);
    set32(c.r[9], c.r[29].w[0] + 536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B04u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x00302B04u) [[unlikely]] return; }
L_00302B04:
    set32(c.r[2], ld32((c.r[29].w[0] + 536u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00302B34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302B48; } }
L_00302B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B44u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00302B44u) [[unlikely]] return; }
L_00302B44:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00302B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302B64; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302B78; } }
L_00302B64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_00302B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302B8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 3;
L_00302B8C:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 540u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302BA0u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x00302BA0u) [[unlikely]] return; }
L_00302BA0:
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 544u));
    c.f[4] = ld32((c.r[29].w[0] + 536u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[9] = ld32((c.r[29].w[0] + 540u));
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[10] = c.r[1].w[0];
    c.f[8] = fp::mul(c.f[1], c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[11] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[3]);
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[6] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[7] = ld32((c.r[29].w[0] + 128u));
    c.f[4] = fp::mul(c.f[4], c.f[9]);
    c.f[2] = fp::add(c.f[2], c.f[8]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[10]);
    c.f[0] = fp::mul(c.f[0], c.f[10]);
    c.f[1] = fp::mul(c.f[1], c.f[11]);
    c.f[5] = fp::add(c.f[5], c.f[2]);
    c.f[6] = fp::add(c.f[6], c.f[0]);
    c.f[7] = fp::add(c.f[7], c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[5]);
    st32((c.r[29].w[0] + 132u), c.f[6]);
    st32((c.r[16].w[0] + 128u), c.f[7]);
    st32((c.r[29].w[0] + 128u), c.f[7]);
    st32((c.r[29].w[0] + 136u), c.f[5]);
    c.budget -= 34;
L_00302C28:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00302C48:
    set32(c.r[7], 0u + 268u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 640u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 624u), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = 0u;
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[18].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 540u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CCCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00302CCCu) [[unlikely]] return; }
L_00302CCC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[8], c.r[29].w[0] + 532u);
    set32(c.r[9], c.r[29].w[0] + 536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CECu);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x00302CECu) [[unlikely]] return; }
L_00302CEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 536u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00302D10; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302D24; } }
L_00302D10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D20u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00302D20u) [[unlikely]] return; }
L_00302D20:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00302D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302D40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302D54; } }
L_00302D40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_00302D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302D68; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 3;
L_00302D68:
    c.f[13] = ld32((c.r[29].w[0] + 528u));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    c.f[14] = ld32((c.r[29].w[0] + 536u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    set32(c.r[4], c.r[29].w[0] + 540u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D8Cu);  if (depth < kMaxDepth) unit_0045(c, 116u, depth + 1u); else { c.pc = 0x00215FC0u; return; } if (c.pc != 0x00302D8Cu) [[unlikely]] return; }
L_00302D8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[5] = c.r[2].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[4] = ld32((c.r[29].w[0] + 540u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.f[2] = fp::add(c.f[2], c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[29], c.r[29].w[0] + 640u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00302DF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00302E38; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00302E38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00302E50; } }
L_00302E38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E48u);  if (depth < kMaxDepth) unit_0053(c, 104u, depth + 1u); else { c.pc = 0x0024D508u; return; } if (c.pc != 0x00302E48u) [[unlikely]] return; }
L_00302E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302E60; } }
L_00302E50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E60u);  if (depth < kMaxDepth) unit_0053(c, 104u, depth + 1u); else { c.pc = 0x0024D508u; return; } if (c.pc != 0x00302E60u) [[unlikely]] return; }
L_00302E60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E6Cu);  if (depth < kMaxDepth) unit_0079(c, 158u, depth + 1u); else { c.pc = 0x002E6568u; return; } if (c.pc != 0x00302E6Cu) [[unlikely]] return; }
L_00302E6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302E84; } }
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E84u);  if (depth < kMaxDepth) unit_0074(c, 59u, depth + 1u); else { c.pc = 0x002D0AE0u; return; } if (c.pc != 0x00302E84u) [[unlikely]] return; }
L_00302E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00302EB8; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302EB8u) [[unlikely]] return; }
L_00302EB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302EE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302ED8u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x00302ED8u) [[unlikely]] return; }
L_00302ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302EE4; } }
    st16((c.r[2].w[0] + 10210u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00302EE4:
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[16].w[0] + 8954u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0] + 23176u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 10240u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[6].w[0] + 23952u), 0u);
    st32((c.r[16].w[0] + 10800u), 0u);
    st16((c.r[16].w[0] + 10164u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F18u);  if (depth < kMaxDepth) unit_006E(c, 93u, depth + 1u); else { c.pc = 0x002B9260u; return; } if (c.pc != 0x00302F18u) [[unlikely]] return; }
L_00302F18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F24u);  if (depth < kMaxDepth) unit_007A(c, 147u, depth + 1u); else { c.pc = 0x002E9C00u; return; } if (c.pc != 0x00302F24u) [[unlikely]] return; }
L_00302F24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F30u);  if (depth < kMaxDepth) unit_006E(c, 114u, depth + 1u); else { c.pc = 0x002B96C0u; return; } if (c.pc != 0x00302F30u) [[unlikely]] return; }
L_00302F30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F3Cu);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0016ED80u; return; } if (c.pc != 0x00302F3Cu) [[unlikely]] return; }
L_00302F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F48u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00322AD0u; return; } if (c.pc != 0x00302F48u) [[unlikely]] return; }
L_00302F48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F54u);  if (depth < kMaxDepth) unit_006F(c, 83u, depth + 1u); else { c.pc = 0x002BD218u; return; } if (c.pc != 0x00302F54u) [[unlikely]] return; }
L_00302F54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F60u);  if (depth < kMaxDepth) unit_007A(c, 142u, depth + 1u); else { c.pc = 0x002E9B68u; return; } if (c.pc != 0x00302F60u) [[unlikely]] return; }
L_00302F60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F6Cu);  if (depth < kMaxDepth) unit_0073(c, 183u, depth + 1u); else { c.pc = 0x002CEBA8u; return; } if (c.pc != 0x00302F6Cu) [[unlikely]] return; }
L_00302F6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[16].w[0] + 9848u), 0u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[4], c.r[4].w[0] - 1524u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F94u);  if (depth < kMaxDepth) unit_0090(c, 287u, depth + 1u); else { c.pc = 0x00343258u; return; } if (c.pc != 0x00302F94u) [[unlikely]] return; }
L_00302F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FA0u);  if (depth < kMaxDepth) unit_0070(c, 131u, depth + 1u); else { c.pc = 0x002C1900u; return; } if (c.pc != 0x00302FA0u) [[unlikely]] return; }
L_00302FA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 11012u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00302FC0; } }
    st16((c.r[16].w[0] + 7688u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7690u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7692u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00302FC0:
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FD0u);  if (depth < kMaxDepth) unit_0089(c, 184u, depth + 1u); else { c.pc = 0x00326038u; return; } if (c.pc != 0x00302FD0u) [[unlikely]] return; }
L_00302FD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 10220u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 10220u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 10212u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 11008u), 0u);
    st32((c.r[16].w[0] + 10956u), 0u);
    st16((c.r[16].w[0] + 10226u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 10160u), 0u);
    st32((c.r[16].w[0] + 9060u), 0u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[16].w[0] + 10287u));
    sdr(c.r[2], (c.r[16].w[0] + 10280u));
    st32((c.r[16].w[0] + 10288u), c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303024u);  if (depth < kMaxDepth) unit_0088(c, 230u, depth + 1u); else { c.pc = 0x003228F8u; return; } if (c.pc != 0x00303024u) [[unlikely]] return; }
L_00303024:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 7694u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10128u)));
    st16((c.r[16].w[0] + 9056u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 10232u), 0u);
    st8((c.r[16].w[0] + 11257u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11256u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 9264u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 10236u), 0u);
    st16((c.r[16].w[0] + 9032u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 9928u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9040u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 10156u), 0u);
    st16((c.r[16].w[0] + 9038u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 9044u), 0u);
    st32((c.r[16].w[0] + 9048u), 0u);
    st32((c.r[16].w[0] + 9052u), 0u);
    st8((c.r[16].w[0] + 10132u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9984u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10032u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10092u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303080; } }
    st8((c.r[16].w[0] + 10084u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00303080:
    st16((c.r[16].w[0] + 10014u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 8933u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10036u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10085u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 7680u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7708u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10056u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10058u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10060u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10062u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10064u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10066u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10046u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10048u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10050u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10272u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10044u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[3].w[0] - 26100u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003030E4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10098u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003030E8; } }
L_003030E4:
    st8((c.r[16].w[0] + 10098u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003030E8:
    st16((c.r[16].w[0] + 668u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 670u);
    st16((c.r[16].w[0] + 660u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6994u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303104u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00303104u) [[unlikely]] return; }
L_00303104:
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st8((c.r[16].w[0] + 7669u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[16].w[0] + 9068u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 7670u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 7;
L_00303120:
    set32(c.r[5], c.r[16].w[0] + 9072u);
    st8((c.r[16].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 9010u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00303130:
    st16((c.r[16].w[0] + 9012u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 10076u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 7672u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 40u), 0u);
    st16((c.r[16].w[0] + 10024u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10026u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10028u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 9064u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9066u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9065u), static_cast<std::uint8_t>(0u));
    st64((c.r[16].w[0] + 9240u), 0ull);
    st64((c.r[16].w[0] + 9248u), 0ull);
    st64((c.r[16].w[0] + 9256u), 0ull);
    st8((c.r[16].w[0] + 9067u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_00303168:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303168u | kUnwind; return; } goto L_00303168; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9942u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9931u)));
    st8((c.r[16].w[0] + 10146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 9943u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10138u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10137u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 10002u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 10004u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 10114u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 10116u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 10100u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9296u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9297u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9298u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9299u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9816u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9817u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9818u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 9820u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 9819u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9942u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10140u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10099u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9935u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9934u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 9936u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 10033u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 9944u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 9930u), static_cast<std::uint8_t>(0u));
    c.budget -= 33;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00303210; } }
    st8((c.r[16].w[0] + 9931u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00303210:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_00303220:
    st16((c.r[16].w[0] + 9978u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[16].w[0] + 9968u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st64((c.r[16].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 4;
L_00303230:
    st8((c.r[16].w[0] + 9828u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9987u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0030324C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303264; } }
L_0030324C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303260u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00303260u) [[unlikely]] return; }
L_00303260:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00303264:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303324; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 58u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003032D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[4].w[0] - 17304u));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 4976u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4988u), 0u);
    set32(c.r[4], c.r[4].w[0] - 17304u);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
L_003032D0:
    st8((c.r[16].w[0] + 9829u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 9988u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 9990u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 9992u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 9994u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9941u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9997u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9933u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13176u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030330Cu);  if (depth < kMaxDepth) unit_007A(c, 112u, depth + 1u); else { c.pc = 0x002E95A0u; return; } if (c.pc != 0x0030330Cu) [[unlikely]] return; }
L_0030330C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303320; } }
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00303320:
    st32((c.r[16].w[0] + 11240u), 0u);
    c.budget -= 1;
L_00303324:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_00303330:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303340:
    if (::decomp::hook_00303340.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_00303340, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 10097u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0030337C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303394; } }
L_0030337C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303390u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00303390u) [[unlikely]] return; }
L_00303390:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00303394:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030365C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003033BC; } }
    st32((c.r[16].w[0] + 9280u), 0u);
    c.budget -= 1;
L_003033BC:
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003035AC; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003033E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003033F8; } }
L_003033E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033F8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003033F8u) [[unlikely]] return; }
L_003033F8:
    st32((c.r[18].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030365C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003034F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9008u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003034F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030344C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 10136u));
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 19;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003034F0; } }
L_0030344C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030345Cu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0030345Cu) [[unlikely]] return; }
L_0030345C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003034F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003034F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303480u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x00303480u) [[unlikely]] return; }
L_00303480:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00303494; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003034AC; } }
L_00303494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003034A8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x003034A8u) [[unlikely]] return; }
L_003034A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003034AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5020u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003034F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4440u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003034F0u);  if (depth < kMaxDepth) unit_0080(c, 166u, depth + 1u); else { c.pc = 0x003028B0u; return; } if (c.pc != 0x003034F0u) [[unlikely]] return; }
L_003034F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00303508; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303518; } }
L_00303508:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303518u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00303518u) [[unlikely]] return; }
L_00303518:
    st32((c.r[18].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303530; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303544; } }
L_00303530:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_00303544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003035AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303578; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303564u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00303564u) [[unlikely]] return; }
L_00303564:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003035AC; } }
L_00303578:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 113u));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10088u)));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 24);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003035A8; } }
    st8((c.r[16].w[0] + 10087u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003035AC; } }
L_003035A8:
    st8((c.r[16].w[0] + 10087u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003035AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0030365C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[4], c.r[4].w[0] - 2144u);
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    st64((c.r[16].w[0] + 576u), c.r[2].d[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035E0u);  if (depth < kMaxDepth) unit_001B(c, 118u, depth + 1u); else { c.pc = 0x0016DA88u; return; } if (c.pc != 0x003035E0u) [[unlikely]] return; }
L_003035E0:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 7710u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[16].w[0] + 7712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 7714u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303600u);  if (depth < kMaxDepth) unit_0080(c, 181u, depth + 1u); else { c.pc = 0x00302DF8u; return; } if (c.pc != 0x00303600u) [[unlikely]] return; }
L_00303600:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00303614; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303628; } }
L_00303614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303628u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00303628u) [[unlikely]] return; }
L_00303628:
    st32((c.r[18].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    st8((c.r[16].w[0] + 10079u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030365C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10087u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[16].w[0] + 10088u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0030365C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303678:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[4], 0u + 13248u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0081(c, 12u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036DCu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x003036DCu) [[unlikely]] return; }
L_003036DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003036FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036FCu);  if (depth < kMaxDepth) unit_001B(c, 118u, depth + 1u); else { c.pc = 0x0016DA88u; return; } if (c.pc != 0x003036FCu) [[unlikely]] return; }
L_003036FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    st32((c.r[16].w[0] + 7700u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[22].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00303730; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00303730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303748; } }
L_00303730:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303740u);  if (depth < kMaxDepth) unit_0053(c, 104u, depth + 1u); else { c.pc = 0x0024D508u; return; } if (c.pc != 0x00303740u) [[unlikely]] return; }
L_00303740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303758; } }
L_00303748:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303758u);  if (depth < kMaxDepth) unit_0053(c, 104u, depth + 1u); else { c.pc = 0x0024D508u; return; } if (c.pc != 0x00303758u) [[unlikely]] return; }
L_00303758:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 10136u));
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 19;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003037A8; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00303790; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 9964u)));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
L_00303790:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030379Cu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x0030379Cu) [[unlikely]] return; }
L_0030379C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
L_003037A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303FD8; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303FD8; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303FD8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303FD8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00303804; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00303B10; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00303FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303B10; } }
L_00303804:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] - 968u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303834u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x00303834u) [[unlikely]] return; }
L_00303834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030384C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303854; } }
L_0030384C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00303A40; } }
L_00303854:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0030386C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303880; } }
L_0030386C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030387Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0030387Cu) [[unlikely]] return; }
L_0030387C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00303880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003038A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003038B4; } }
L_003038A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_003038B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003038CC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003038CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31864u);
    set32(c.r[19], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[18].d[0] != 0) c.r[19].d[0] = c.r[18].d[0];
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00303990; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038FCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x003038FCu) [[unlikely]] return; }
L_003038FC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0030391C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030392C; } }
L_0030391C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030392Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0030392Cu) [[unlikely]] return; }
L_0030392C:
    st32((c.r[20].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303944; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303958; } }
L_00303944:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9829u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
L_00303958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303970; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00303970:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303984u);  if (depth < kMaxDepth) unit_001B(c, 200u, depth + 1u); else { c.pc = 0x0016EAF8u; return; } if (c.pc != 0x00303984u) [[unlikely]] return; }
L_00303984:
    st32((c.r[16].w[0] + 7700u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 12u, depth); } }
L_00303990:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00303A20; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[21].w[0] + 27456u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 152u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003039E0; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003039E0; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003039E0; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003039F8; } }
L_003039E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039F8u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x003039F8u) [[unlikely]] return; }
L_003039F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A10u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303A10u) [[unlikely]] return; }
L_00303A10:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303F88; } }
L_00303A20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A38u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x00303A38u) [[unlikely]] return; }
L_00303A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 12u, depth); } }
L_00303A40:
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31864u);
    set32(c.r[6], c.r[21].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 152u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00303A98; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303A98; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303A98; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303AB0; } }
L_00303A98:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AB0u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303AB0u) [[unlikely]] return; }
L_00303AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AC8u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303AC8u) [[unlikely]] return; }
L_00303AC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AE0u);  if (depth < kMaxDepth) unit_007A(c, 129u, depth + 1u); else { c.pc = 0x002E9970u; return; } if (c.pc != 0x00303AE0u) [[unlikely]] return; }
L_00303AE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00303B00; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B00u);  if (depth < kMaxDepth) unit_0080(c, 209u, depth + 1u); else { c.pc = 0x00303340u; return; } if (c.pc != 0x00303B00u) [[unlikely]] return; }
L_00303B00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303FC0; } }
L_00303B10:
    c.r[2].d[0] = c.r[3].sd[0] < 142ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303BBC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303BBC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B34u);  if (depth < kMaxDepth) unit_0071(c, 134u, depth + 1u); else { c.pc = 0x002C5538u; return; } if (c.pc != 0x00303B34u) [[unlikely]] return; }
L_00303B34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[21].w[0] + 27456u);
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], 0u + 152u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00303B7C; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303B7C; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303B7C; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303B94; } }
L_00303B7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B94u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303B94u) [[unlikely]] return; }
L_00303B94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BACu);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303BACu) [[unlikely]] return; }
L_00303BAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303F88; } }
L_00303BBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303D54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BDCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00303BDCu) [[unlikely]] return; }
L_00303BDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00303D54; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00303C9C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303C9C; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    set32(c.r[6], c.r[21].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 152u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00303C5C; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303C5C; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303C5C; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303C74; } }
L_00303C5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C74u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303C74u) [[unlikely]] return; }
L_00303C74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C8Cu);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303C8Cu) [[unlikely]] return; }
L_00303C8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303F88; } }
L_00303C9C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00303D54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00303D54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303D54; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14656u);
    set32(c.r[6], c.r[21].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 152u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00303D14; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303D14; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303D14; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303D2C; } }
L_00303D14:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D2Cu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303D2Cu) [[unlikely]] return; }
L_00303D2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D44u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303D44u) [[unlikely]] return; }
L_00303D44:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303F88; } }
L_00303D54:
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00303E30; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    set32(c.r[6], c.r[21].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 152u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00303DB8; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303DB8; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303DB8; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303DD0; } }
L_00303DB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DD0u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303DD0u) [[unlikely]] return; }
L_00303DD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DE8u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303DE8u) [[unlikely]] return; }
L_00303DE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E00u);  if (depth < kMaxDepth) unit_007A(c, 129u, depth + 1u); else { c.pc = 0x002E9970u; return; } if (c.pc != 0x00303E00u) [[unlikely]] return; }
L_00303E00:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00303E20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E20u);  if (depth < kMaxDepth) unit_0080(c, 209u, depth + 1u); else { c.pc = 0x00303340u; return; } if (c.pc != 0x00303E20u) [[unlikely]] return; }
L_00303E20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303FC0; } }
L_00303E30:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00303F0C; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14656u);
    set32(c.r[6], c.r[21].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 152u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00303E94; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303E94; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303E94; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303EAC; } }
L_00303E94:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EACu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303EACu) [[unlikely]] return; }
L_00303EAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EC4u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303EC4u) [[unlikely]] return; }
L_00303EC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EDCu);  if (depth < kMaxDepth) unit_007A(c, 129u, depth + 1u); else { c.pc = 0x002E9970u; return; } if (c.pc != 0x00303EDCu) [[unlikely]] return; }
L_00303EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00303EFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EFCu);  if (depth < kMaxDepth) unit_0080(c, 209u, depth + 1u); else { c.pc = 0x00303340u; return; } if (c.pc != 0x00303EFCu) [[unlikely]] return; }
L_00303EFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303FC0; } }
L_00303F0C:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[21].w[0] + 27456u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 152u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00303F50; } }
    set32(c.r[2], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303F50; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00303F50; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303F68; } }
L_00303F50:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F68u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00303F68u) [[unlikely]] return; }
L_00303F68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F80u);  if (depth < kMaxDepth) unit_0088(c, 330u, depth + 1u); else { c.pc = 0x00323F80u; return; } if (c.pc != 0x00303F80u) [[unlikely]] return; }
L_00303F80:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00303F88:
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F98u);  if (depth < kMaxDepth) unit_007A(c, 129u, depth + 1u); else { c.pc = 0x002E9970u; return; } if (c.pc != 0x00303F98u) [[unlikely]] return; }
L_00303F98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00303FB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FB8u);  if (depth < kMaxDepth) unit_0080(c, 209u, depth + 1u); else { c.pc = 0x00303340u; return; } if (c.pc != 0x00303FB8u) [[unlikely]] return; }
L_00303FB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00303FC0:
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FD0u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x00303FD0u) [[unlikely]] return; }
L_00303FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 12u, depth); } }
L_00303FD8:
    set32(c.r[20], ld32((c.r[16].w[0] + 9060u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 7u, depth); } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], 0u + 12u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 7700u), c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 27456u);
    set32(c.r[3], 0u + 152u);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    [[clang::musttail]] return unit_0081(c, 1u, depth);
}

}
