#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_003195F8;
extern ps2::DecompFn hook_0031AE78;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0086[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0,
    76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0,
    144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
};

void unit_0086(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00318000;
    case 2u: goto L_00318004;
    case 3u: goto L_00318048;
    case 4u: goto L_00318054;
    case 5u: goto L_00318090;
    case 6u: goto L_003180A4;
    case 7u: goto L_003180B4;
    case 8u: goto L_003180CC;
    case 9u: goto L_003180E4;
    case 10u: goto L_003180F8;
    case 11u: goto L_00318128;
    case 12u: goto L_00318150;
    case 13u: goto L_003181C4;
    case 14u: goto L_003181D4;
    case 15u: goto L_003181E4;
    case 16u: goto L_003181F4;
    case 17u: goto L_00318204;
    case 18u: goto L_00318210;
    case 19u: goto L_0031825C;
    case 20u: goto L_00318268;
    case 21u: goto L_003182BC;
    case 22u: goto L_003182DC;
    case 23u: goto L_00318304;
    case 24u: goto L_0031832C;
    case 25u: goto L_003183AC;
    case 26u: goto L_003183C8;
    case 27u: goto L_003183CC;
    case 28u: goto L_003183D0;
    case 29u: goto L_003183D8;
    case 30u: goto L_003183E4;
    case 31u: goto L_00318420;
    case 32u: goto L_00318460;
    case 33u: goto L_00318478;
    case 34u: goto L_00318498;
    case 35u: goto L_003184B0;
    case 36u: goto L_003184D0;
    case 37u: goto L_003184E8;
    case 38u: goto L_00318508;
    case 39u: goto L_00318520;
    case 40u: goto L_00318540;
    case 41u: goto L_00318558;
    case 42u: goto L_00318570;
    case 43u: goto L_00318590;
    case 44u: goto L_003185C8;
    case 45u: goto L_003185D8;
    case 46u: goto L_00318600;
    case 47u: goto L_00318620;
    case 48u: goto L_00318680;
    case 49u: goto L_00318698;
    case 50u: goto L_003186BC;
    case 51u: goto L_00318700;
    case 52u: goto L_0031870C;
    case 53u: goto L_00318748;
    case 54u: goto L_0031875C;
    case 55u: goto L_00318778;
    case 56u: goto L_003187A8;
    case 57u: goto L_003187D0;
    case 58u: goto L_00318848;
    case 59u: goto L_00318878;
    case 60u: goto L_003188AC;
    case 61u: goto L_003188E0;
    case 62u: goto L_00318910;
    case 63u: goto L_00318944;
    case 64u: goto L_00318978;
    case 65u: goto L_003189A0;
    case 66u: goto L_003189D4;
    case 67u: goto L_00318A08;
    case 68u: goto L_00318A18;
    case 69u: goto L_00318A50;
    case 70u: goto L_00318A60;
    case 71u: goto L_00318A88;
    case 72u: goto L_00318A98;
    case 73u: goto L_00318AC4;
    case 74u: goto L_00318AE8;
    case 75u: goto L_00318AF8;
    case 76u: goto L_00318B00;
    case 77u: goto L_00318B08;
    case 78u: goto L_00318B68;
    case 79u: goto L_00318BA4;
    case 80u: goto L_00318BCC;
    case 81u: goto L_00318BE4;
    case 82u: goto L_00318C8C;
    case 83u: goto L_00318CDC;
    case 84u: goto L_00318D48;
    case 85u: goto L_00318D80;
    case 86u: goto L_00318DB4;
    case 87u: goto L_00318DE8;
    case 88u: goto L_00318E18;
    case 89u: goto L_00318E4C;
    case 90u: goto L_00318E80;
    case 91u: goto L_00318E90;
    case 92u: goto L_00318EDC;
    case 93u: goto L_00318F58;
    case 94u: goto L_00318F7C;
    case 95u: goto L_00318FB4;
    case 96u: goto L_00318FE0;
    case 97u: goto L_00318FF0;
    case 98u: goto L_0031903C;
    case 99u: goto L_00319088;
    case 100u: goto L_00319114;
    case 101u: goto L_00319150;
    case 102u: goto L_00319190;
    case 103u: goto L_003191C8;
    case 104u: goto L_003191E0;
    case 105u: goto L_003191F0;
    case 106u: goto L_00319278;
    case 107u: goto L_003192C8;
    case 108u: goto L_003192D8;
    case 109u: goto L_003192F8;
    case 110u: goto L_00319338;
    case 111u: goto L_0031935C;
    case 112u: goto L_00319388;
    case 113u: goto L_00319428;
    case 114u: goto L_00319488;
    case 115u: goto L_003194A0;
    case 116u: goto L_003194C8;
    case 117u: goto L_00319508;
    case 118u: goto L_00319560;
    case 119u: goto L_00319570;
    case 120u: goto L_00319590;
    case 121u: goto L_003195C0;
    case 122u: goto L_003195F8;
    case 123u: goto L_003196DC;
    case 124u: goto L_00319728;
    case 125u: goto L_00319780;
    case 126u: goto L_003197AC;
    case 127u: goto L_003197F8;
    case 128u: goto L_00319850;
    case 129u: goto L_00319880;
    case 130u: goto L_00319890;
    case 131u: goto L_00319898;
    case 132u: goto L_003198AC;
    case 133u: goto L_003198CC;
    case 134u: goto L_003198D8;
    case 135u: goto L_003198E0;
    case 136u: goto L_003198EC;
    case 137u: goto L_003198FC;
    case 138u: goto L_0031991C;
    case 139u: goto L_00319930;
    case 140u: goto L_00319938;
    case 141u: goto L_0031994C;
    case 142u: goto L_0031996C;
    case 143u: goto L_00319978;
    case 144u: goto L_00319980;
    case 145u: goto L_0031998C;
    case 146u: goto L_0031999C;
    case 147u: goto L_003199E0;
    case 148u: goto L_00319A58;
    case 149u: goto L_00319AD0;
    case 150u: goto L_00319B30;
    case 151u: goto L_00319B68;
    case 152u: goto L_00319B7C;
    case 153u: goto L_00319B90;
    case 154u: goto L_00319B9C;
    case 155u: goto L_00319BA8;
    case 156u: goto L_00319BC4;
    case 157u: goto L_00319BE4;
    case 158u: goto L_00319C04;
    case 159u: goto L_00319C24;
    case 160u: goto L_00319C60;
    case 161u: goto L_00319CD0;
    case 162u: goto L_00319D38;
    case 163u: goto L_00319D5C;
    case 164u: goto L_00319D98;
    case 165u: goto L_00319DCC;
    case 166u: goto L_00319DE4;
    case 167u: goto L_00319E04;
    case 168u: goto L_00319E30;
    case 169u: goto L_00319EB8;
    case 170u: goto L_00319F18;
    case 171u: goto L_00319F68;
    case 172u: goto L_00319FC8;
    case 173u: goto L_0031A05C;
    case 174u: goto L_0031A094;
    case 175u: goto L_0031A10C;
    case 176u: goto L_0031A16C;
    case 177u: goto L_0031A190;
    case 178u: goto L_0031A1D0;
    case 179u: goto L_0031A204;
    case 180u: goto L_0031A218;
    case 181u: goto L_0031A230;
    case 182u: goto L_0031A264;
    case 183u: goto L_0031A29C;
    case 184u: goto L_0031A2C4;
    case 185u: goto L_0031A2E8;
    case 186u: goto L_0031A318;
    case 187u: goto L_0031A360;
    case 188u: goto L_0031A374;
    case 189u: goto L_0031A388;
    case 190u: goto L_0031A3BC;
    case 191u: goto L_0031A3F4;
    case 192u: goto L_0031A42C;
    case 193u: goto L_0031A450;
    case 194u: goto L_0031A490;
    case 195u: goto L_0031A4C4;
    case 196u: goto L_0031A4D8;
    case 197u: goto L_0031A4F0;
    case 198u: goto L_0031A524;
    case 199u: goto L_0031A55C;
    case 200u: goto L_0031A584;
    case 201u: goto L_0031A5A8;
    case 202u: goto L_0031A5E8;
    case 203u: goto L_0031A61C;
    case 204u: goto L_0031A630;
    case 205u: goto L_0031A648;
    case 206u: goto L_0031A67C;
    case 207u: goto L_0031A6B4;
    case 208u: goto L_0031A6DC;
    case 209u: goto L_0031A728;
    case 210u: goto L_0031A7F8;
    case 211u: goto L_0031A868;
    case 212u: goto L_0031A898;
    case 213u: goto L_0031A8A8;
    case 214u: goto L_0031A8C8;
    case 215u: goto L_0031A910;
    case 216u: goto L_0031A91C;
    case 217u: goto L_0031A970;
    case 218u: goto L_0031A9C0;
    case 219u: goto L_0031AA18;
    case 220u: goto L_0031AA6C;
    case 221u: goto L_0031AA78;
    case 222u: goto L_0031AA88;
    case 223u: goto L_0031AA94;
    case 224u: goto L_0031AAC0;
    case 225u: goto L_0031AAD0;
    case 226u: goto L_0031AAE4;
    case 227u: goto L_0031AB60;
    case 228u: goto L_0031AB6C;
    case 229u: goto L_0031ABD0;
    case 230u: goto L_0031AC20;
    case 231u: goto L_0031AD64;
    case 232u: goto L_0031AE78;
    case 233u: goto L_0031AF04;
    case 234u: goto L_0031AF4C;
    case 235u: goto L_0031AF64;
    case 236u: goto L_0031AF70;
    case 237u: goto L_0031AF94;
    case 238u: goto L_0031AFB4;
    case 239u: goto L_0031AFDC;
    case 240u: goto L_0031B008;
    case 241u: goto L_0031B04C;
    case 242u: goto L_0031B0A0;
    case 243u: goto L_0031B0C0;
    case 244u: goto L_0031B110;
    case 245u: goto L_0031B170;
    case 246u: goto L_0031B1D0;
    case 247u: goto L_0031B25C;
    case 248u: goto L_0031B278;
    case 249u: goto L_0031B28C;
    case 250u: goto L_0031B2A4;
    case 251u: goto L_0031B2B0;
    case 252u: goto L_0031B2D4;
    case 253u: goto L_0031B2F4;
    case 254u: goto L_0031B320;
    case 255u: goto L_0031B34C;
    case 256u: goto L_0031B3A0;
    case 257u: goto L_0031B3CC;
    case 258u: goto L_0031B41C;
    case 259u: goto L_0031B43C;
    case 260u: goto L_0031B450;
    case 261u: goto L_0031B470;
    case 262u: goto L_0031B48C;
    case 263u: goto L_0031B4C8;
    case 264u: goto L_0031B508;
    case 265u: goto L_0031B520;
    case 266u: goto L_0031B538;
    case 267u: goto L_0031B548;
    case 268u: goto L_0031B558;
    case 269u: goto L_0031B568;
    case 270u: goto L_0031B5A0;
    case 271u: goto L_0031B5E0;
    case 272u: goto L_0031B600;
    case 273u: goto L_0031B638;
    case 274u: goto L_0031B670;
    case 275u: goto L_0031B6A8;
    case 276u: goto L_0031B710;
    case 277u: goto L_0031B760;
    case 278u: goto L_0031B774;
    case 279u: goto L_0031B7A4;
    case 280u: goto L_0031B7E0;
    case 281u: goto L_0031B808;
    case 282u: goto L_0031B880;
    case 283u: goto L_0031B8CC;
    case 284u: goto L_0031B8E0;
    case 285u: goto L_0031B900;
    case 286u: goto L_0031B948;
    case 287u: goto L_0031B954;
    case 288u: goto L_0031B95C;
    case 289u: goto L_0031B970;
    case 290u: goto L_0031B990;
    case 291u: goto L_0031B998;
    case 292u: goto L_0031B9A0;
    case 293u: goto L_0031B9AC;
    case 294u: goto L_0031B9BC;
    case 295u: goto L_0031B9F0;
    case 296u: goto L_0031BA38;
    case 297u: goto L_0031BA80;
    case 298u: goto L_0031BAB0;
    case 299u: goto L_0031BAF8;
    case 300u: goto L_0031BB18;
    case 301u: goto L_0031BB90;
    case 302u: goto L_0031BBD8;
    case 303u: goto L_0031BC08;
    case 304u: goto L_0031BC50;
    case 305u: goto L_0031BCA8;
    case 306u: goto L_0031BCD0;
    case 307u: goto L_0031BD04;
    case 308u: goto L_0031BD18;
    case 309u: goto L_0031BD40;
    case 310u: goto L_0031BD64;
    case 311u: goto L_0031BD80;
    case 312u: goto L_0031BDB4;
    case 313u: goto L_0031BDC8;
    case 314u: goto L_0031BE40;
    case 315u: goto L_0031BE68;
    case 316u: goto L_0031BE88;
    case 317u: goto L_0031BEA0;
    case 318u: goto L_0031BEB8;
    case 319u: goto L_0031BECC;
    case 320u: goto L_0031BF0C;
    case 321u: goto L_0031BF28;
    case 322u: goto L_0031BF60;
    case 323u: goto L_0031BF98;
    case 324u: goto L_0031BFC0;
    case 325u: goto L_0031BFE8;
    default: bad_entry(c, 0x00318000u); return;
    }
L_00318000:
    c.budget -= 1;
L_00318004:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 74u));
    c.f[13] = c.f[20];
    c.r[5].d[0] = ld16((c.r[16].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x00318028u);  goto L_0031802C; }
L_0031802C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318048u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00318048u) [[unlikely]] return; }
L_00318048:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318054u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00318054u) [[unlikely]] return; }
L_00318054:
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + 4095u);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2048u);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318090u);  if (depth < kMaxDepth) unit_005B(c, 203u, depth + 1u); else { c.pc = 0x0026E1F0u; return; } if (c.pc != 0x00318090u) [[unlikely]] return; }
L_00318090:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180A4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x003180A4u) [[unlikely]] return; }
L_003180A4:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003180B4u) [[unlikely]] return; }
L_003180B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180CCu);  if (depth < kMaxDepth) unit_0018(c, 304u, depth + 1u); else { c.pc = 0x00162A58u; return; } if (c.pc != 0x003180CCu) [[unlikely]] return; }
L_003180CC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_003181F8; } }
    set32(c.r[4], c.r[30].w[0] + 12320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180E4u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x003180E4u) [[unlikely]] return; }
L_003180E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003181F8; } }
    set32(c.r[4], c.r[23].w[0] - 19344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180F8u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x003180F8u) [[unlikely]] return; }
L_003180F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_003181F8; } }
L_00318100:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[18], c.r[29].w[0] + 48u);
    set32(c.r[19], c.r[29].w[0] + 52u);
    set32(c.r[4], c.r[30].w[0] + 12320u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[17], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318128u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x00318128u) [[unlikely]] return; }
L_00318128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00318158; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 12584u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00318158; } }
    set32(c.r[4], c.r[23].w[0] - 19344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318150u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x00318150u) [[unlikely]] return; }
L_00318150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00318178; } }
L_00318158:
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[19].w[0]), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318198; } }
L_00318178:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[6].w[0] - 30424u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 8;
L_00318198:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[13] = 0u;
    c.f[14] = ld32((c.r[29].w[0] + 48u));
    c.f[15] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181C4u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x003181C4u) [[unlikely]] return; }
L_003181C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181D4u);  if (depth < kMaxDepth) unit_0086(c, 266u, depth + 1u); else { c.pc = 0x0031B538u; return; } if (c.pc != 0x003181D4u) [[unlikely]] return; }
L_003181D4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181E4u);  if (depth < kMaxDepth) unit_0086(c, 267u, depth + 1u); else { c.pc = 0x0031B548u; return; } if (c.pc != 0x003181E4u) [[unlikely]] return; }
L_003181E4:
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181F4u);  if (depth < kMaxDepth) unit_0086(c, 268u, depth + 1u); else { c.pc = 0x0031B558u; return; } if (c.pc != 0x003181F4u) [[unlikely]] return; }
L_003181F4:
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.budget -= 1;
L_003181F8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318250; } }
L_00318204:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318210u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00318210u) [[unlikely]] return; }
L_00318210:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00318220u);  goto L_00318224; }
L_00318224:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003183D0; } }
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003183D0; } }
L_00318250:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003183CC; } }
L_0031825C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003183B8; } }
L_00318268:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 74u));
    c.f[15] = 0u;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[15]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003182AC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 76u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003182C4; } }
L_003182AC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003182BCu) [[unlikely]] return; }
L_003182BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003182DC; } }
L_003182C4:
    c.f[12] = ld32((c.r[20].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[20].w[0] + 132u));
    c.f[14] = ld32((c.r[20].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182DCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003182DCu) [[unlikely]] return; }
L_003182DC:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[18], c.r[29].w[0] + 48u);
    set32(c.r[19], c.r[29].w[0] + 52u);
    set32(c.r[4], c.r[30].w[0] + 12320u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[17], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318304u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x00318304u) [[unlikely]] return; }
L_00318304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00318334; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 12584u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00318334; } }
    set32(c.r[4], c.r[23].w[0] - 19344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031832Cu);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x0031832Cu) [[unlikely]] return; }
L_0031832C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00318354; } }
L_00318334:
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[19].w[0]), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318374; } }
L_00318354:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[6].w[0] - 30424u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 8;
L_00318374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.f[13] = 0u;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 48u));
    c.f[15] = ld32((c.r[29].w[0] + 52u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 90u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 91u));
    c.f[16] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183ACu);  if (depth < kMaxDepth) unit_0086(c, 246u, depth + 1u); else { c.pc = 0x0031B1D0u; return; } if (c.pc != 0x003183ACu) [[unlikely]] return; }
L_003183AC:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003183D0; } }
L_003183B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 88u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003183D0; } }
L_003183C8:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003183CC:
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003183D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 16812u), 0u);
    c.budget -= 2;
L_003183D8:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003177B8u | kUnwind; return; } [[clang::musttail]] return unit_0085(c, 330u, depth); } }
L_003183E4:
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
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00318558; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318558; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 23024u);
    set32(c.r[2], c.r[2].w[0] - 12648u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318460u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00318460u) [[unlikely]] return; }
L_00318460:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 13008u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318478u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00318478u) [[unlikely]] return; }
L_00318478:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 23008u);
    set32(c.r[2], c.r[2].w[0] - 12696u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318498u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00318498u) [[unlikely]] return; }
L_00318498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12928u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184B0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x003184B0u) [[unlikely]] return; }
L_003184B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 22992u);
    set32(c.r[2], c.r[2].w[0] - 12744u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184D0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x003184D0u) [[unlikely]] return; }
L_003184D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12904u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184E8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x003184E8u) [[unlikely]] return; }
L_003184E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 22976u);
    set32(c.r[2], c.r[2].w[0] - 12792u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318508u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00318508u) [[unlikely]] return; }
L_00318508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12864u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318520u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00318520u) [[unlikely]] return; }
L_00318520:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 22960u);
    set32(c.r[2], c.r[2].w[0] - 12840u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318540u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00318540u) [[unlikely]] return; }
L_00318540:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12848u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318558u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00318558u) [[unlikely]] return; }
L_00318558:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[2].w[0] - 30424u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318590:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 22u));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 14u));
    c.r[7].d[0] = ld16((c.r[5].w[0] + 18u));
    set32(c.r[8], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0] + 132u), c.r[2].w[0]);
    st16((c.r[5].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 84u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[5].w[0] + 86u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[5].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 96u), 0u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003185C8:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003185DC; } }
L_003185D8:
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 1;
L_003185DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003185F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003185D8u | kUnwind; return; } goto L_003185D8; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003185F4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318628; } }
L_00318620:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 2;
L_00318628:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00318684; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318620u | kUnwind; return; } goto L_00318620; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318650; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318658; } }
L_00318650:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[3].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_00318658:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318684; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00318684; } }
    set32(c.r[4], c.r[6].w[0] + 29328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318680u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x00318680u) [[unlikely]] return; }
L_00318680:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_00318684:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318698:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003186BCu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x003186BCu) [[unlikely]] return; }
L_003186BC:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 74u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 76u));
    c.f[13] = 0u;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003186E0u);  goto L_003186E4; }
L_003186E4:
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318700u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00318700u) [[unlikely]] return; }
L_00318700:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031870Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0031870Cu) [[unlikely]] return; }
L_0031870C:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + 4095u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2048u);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318748u);  if (depth < kMaxDepth) unit_005B(c, 203u, depth + 1u); else { c.pc = 0x0026E1F0u; return; } if (c.pc != 0x00318748u) [[unlikely]] return; }
L_00318748:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031875Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0031875Cu) [[unlikely]] return; }
L_0031875C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318778:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12320u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003187A8u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x003187A8u) [[unlikely]] return; }
L_003187A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_003187D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_003187D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003187D0u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x003187D0u) [[unlikely]] return; }
L_003187D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00318808; } }
L_003187D8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031882C; } }
L_00318808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[2].w[0] - 30424u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 30424u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 9;
L_0031882C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318848:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003188C0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 1;
L_00318878:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_003188B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003188B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003188B0; } }
    set32(c.r[4], c.r[19].w[0] + 29328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188ACu);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x003188ACu) [[unlikely]] return; }
L_003188AC:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_003188B0:
    st32((c.r[16].w[0] + 128u), c.r[17].w[0]);
    c.budget -= 1;
L_003188B4:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318878u | kUnwind; return; } goto L_00318878; } }
L_003188C0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003188E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00318958; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 1;
L_00318910:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0031894C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318948; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00318948; } }
    set32(c.r[4], c.r[18].w[0] + 29328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318944u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x00318944u) [[unlikely]] return; }
L_00318944:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_00318948:
    st32((c.r[16].w[0] + 128u), c.r[19].w[0]);
    c.budget -= 1;
L_0031894C:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318910u | kUnwind; return; } goto L_00318910; } }
L_00318958:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318978:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003189E8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 1;
L_003189A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_003189DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003189D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003189D8; } }
    set32(c.r[4], c.r[18].w[0] + 29328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189D4u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x003189D4u) [[unlikely]] return; }
L_003189D4:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_003189D8:
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 1;
L_003189DC:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003189A0u | kUnwind; return; } goto L_003189A0; } }
L_003189E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318A08:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318A30; } }
    c.budget -= 1;
L_00318A18:
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318A18u | kUnwind; return; } goto L_00318A18; } }
L_00318A30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[2].w[0] - 30424u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 30408u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] - 30408u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00318A88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A88u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x00318A88u) [[unlikely]] return; }
L_00318A88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318A98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] - 30408u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00318AD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AC4u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x00318AC4u) [[unlikely]] return; }
L_00318AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318AD0; } }
    st32((c.r[16].w[0] - 30408u), 0u);
    c.budget -= 1;
L_00318AD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318AE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318AF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318B08:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00318B90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 22944u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318B6C; } }
    c.budget -= 1;
L_00318B68:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_00318B6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00318B98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318B68u | kUnwind; return; } goto L_00318B68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318B68u | kUnwind; return; } goto L_00318B68; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_00318B90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00318BE4; } }
L_00318B98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BA4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00318BA4u) [[unlikely]] return; }
L_00318BA4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 144u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 1168u);
    set32(c.r[7], c.r[7].w[0] - 12992u);
    set32(c.r[8], c.r[8].w[0] - 12944u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BCCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00318BCCu) [[unlikely]] return; }
L_00318BCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BE4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00318BE4u) [[unlikely]] return; }
L_00318BE4:
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[4], c.r[22].w[0] - 22920u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C8Cu);  if (depth < kMaxDepth) unit_0087(c, 8u, depth + 1u); else { c.pc = 0x0031C108u; return; } if (c.pc != 0x00318C8Cu) [[unlikely]] return; }
L_00318C8C:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318CB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00318CB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00318CDC; } }
    c.f[14] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[12] = ld32((c.r[20].w[0] + 4u));
    c.f[13] = ld32((c.r[20].w[0] + 8u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CDCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00318CDCu) [[unlikely]] return; }
L_00318CDC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00318D18; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 22u));
    set32(c.r[2], ld32((c.r[7].w[0] - 22944u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 18u));
    set32(c.r[5], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[7].w[0] - 22944u), c.r[16].w[0]);
    c.budget -= 13;
L_00318D18:
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
L_00318D48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[2].w[0] - 22944u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00318DC8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 1;
L_00318D80:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00318DBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318DB8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00318DB8; } }
    set32(c.r[4], c.r[18].w[0] + 29328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DB4u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x00318DB4u) [[unlikely]] return; }
L_00318DB4:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_00318DB8:
    st32((c.r[16].w[0] + 128u), c.r[19].w[0]);
    c.budget -= 1;
L_00318DBC:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318D80u | kUnwind; return; } goto L_00318D80; } }
L_00318DC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318DE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[2].w[0] - 22944u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00318E60; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 1;
L_00318E18:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00318E54; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318E50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00318E50; } }
    set32(c.r[4], c.r[18].w[0] + 29328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E4Cu);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x00318E4Cu) [[unlikely]] return; }
L_00318E4C:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_00318E50:
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 1;
L_00318E54:
    set32(c.r[16], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318E18u | kUnwind; return; } goto L_00318E18; } }
L_00318E60:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318E80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318E90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] - 30412u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 30416u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318EDCu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00318EDCu) [[unlikely]] return; }
L_00318EDC:
    st32((c.r[16].w[0] - 30412u), c.r[2].w[0]);
    c.budget -= 1;
L_00318EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318FB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 30420u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00318FB4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] - 30412u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00318F44; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9289u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318F5C; } }
L_00318F44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F58u);  if (depth < kMaxDepth) unit_0087(c, 8u, depth + 1u); else { c.pc = 0x0031C108u; return; } if (c.pc != 0x00318F58u) [[unlikely]] return; }
L_00318F58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00318F5C:
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[17].w[0] + 12u));
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F7Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00318F7Cu) [[unlikely]] return; }
L_00318F7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[18].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[2].w[0] + 20u));
    c.f[15] = fp::cvt_s_w(c.f[15]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 16u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.f[20];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318FB4u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00318FB4u) [[unlikely]] return; }
L_00318FB4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318FE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318FF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031903Cu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0031903Cu) [[unlikely]] return; }
L_0031903C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00319198; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[5].w[0] - 30412u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031908C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 30416u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319088u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00319088u) [[unlikely]] return; }
L_00319088:
    st32((c.r[19].w[0] - 30412u), c.r[2].w[0]);
    c.budget -= 1;
L_0031908C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 30408u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319198; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003190C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003190C0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00319198; } }
L_003190C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] - 30412u)));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 16812u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_00319100; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], 0u + 13248u);
    set32(c.r[4], c.r[22].w[0] + 27456u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9289u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319114; } }
L_00319100:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319114u);  if (depth < kMaxDepth) unit_0087(c, 8u, depth + 1u); else { c.pc = 0x0031C108u; return; } if (c.pc != 0x00319114u) [[unlikely]] return; }
L_00319114:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00319158; } }
    c.f[13] = 0u;
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319150u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00319150u) [[unlikely]] return; }
L_00319150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319190; } }
L_00319158:
    c.f[13] = 0u;
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319190u);  if (depth < kMaxDepth) unit_0086(c, 209u, depth + 1u); else { c.pc = 0x0031A728u; return; } if (c.pc != 0x00319190u) [[unlikely]] return; }
L_00319190:
    st32((c.r[23].w[0] - 30408u), c.r[2].w[0]);
    st32((c.r[17].w[0] - 16812u), 0u);
    c.budget -= 2;
L_00319198:
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
L_003191C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003191E0u);  if (depth < kMaxDepth) unit_0086(c, 31u, depth + 1u); else { c.pc = 0x00318420u; return; } if (c.pc != 0x003191E0u) [[unlikely]] return; }
L_003191E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003191F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 28u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 24u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 22900u)));
    set32(c.r[9], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 28u);
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[21].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[18], c.r[16].w[0] + 4u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 33;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00319298; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00319278:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319278u | kUnwind; return; } goto L_00319278; } }
L_00319298:
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319314; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] - 12568u);
    set32(c.r[8], c.r[8].w[0] - 12528u);
    set32(c.r[5], c.r[21].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 344u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192C8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x003192C8u) [[unlikely]] return; }
L_003192C8:
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_0031935C; } }
L_003192D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192F8u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x003192F8u) [[unlikely]] return; }
L_003192F8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003192D8u | kUnwind; return; } goto L_003192D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031935C; } }
L_00319314:
    set32(c.r[16], c.r[7].w[0] - 12568u);
    set32(c.r[17], c.r[8].w[0] - 12528u);
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 366u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319338u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00319338u) [[unlikely]] return; }
L_00319338:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] - c.r[5].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 374u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031935Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0031935Cu) [[unlikely]] return; }
L_0031935C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00319388:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[5], 0u + 24u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 22900u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[17], ld32((c.r[20].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319458; } }
    set32(c.r[17], c.r[17].w[0] + 28u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319448; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00319428:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319428u | kUnwind; return; } goto L_00319428; } }
L_00319448:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319464; } }
L_00319458:
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
L_00319464:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[23].w[0] - 12568u);
    c.r[4].d[0] = c.r[4].d[0] | 1024ull;
    set32(c.r[8], c.r[22].w[0] - 12488u);
    set32(c.r[9], 0u + 481u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319488u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00319488u) [[unlikely]] return; }
L_00319488:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194A0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x003194A0u) [[unlikely]] return; }
L_003194A0:
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003194C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194C8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x003194C8u) [[unlikely]] return; }
L_003194C8:
    set32(c.r[17], c.r[17].w[0] + 28u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[2], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0] + 24u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319528; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00319508:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319508u | kUnwind; return; } goto L_00319508; } }
L_00319528:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003195A4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[23].w[0] - 12568u);
    c.r[4].d[0] = c.r[4].d[0] | 1024ull;
    set32(c.r[8], c.r[22].w[0] - 12488u);
    set32(c.r[9], 0u + 563u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319560u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00319560u) [[unlikely]] return; }
L_00319560:
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_003195A4; } }
    c.budget -= 1;
L_00319570:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319590u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00319590u) [[unlikely]] return; }
L_00319590:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319570u | kUnwind; return; } goto L_00319570; } }
L_003195A4:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], c.r[23].w[0] - 12568u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[22].w[0] - 12488u);
    set32(c.r[8], 0u + 602u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195C0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x003195C0u) [[unlikely]] return; }
L_003195C0:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003195F8:
    if (::decomp::hook_003195F8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_003195F8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 19;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_003199B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00319654; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[16].d[0];  if (t) { goto L_003199B0; } }
L_00319654:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_00319668; } }
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319670; } }
L_00319668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 18712u)));
    c.budget -= 2;
L_00319670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 29288u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22888u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[6].d[0] = c.r[19].d[0] & 256ull;
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[20].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[10].w[0]);
    c.budget -= 18;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00319788; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 28176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003196DCu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x003196DCu) [[unlikely]] return; }
L_003196DC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00319850; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00319750; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00319728; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319750; } }
    c.budget -= 1;
L_00319728:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319750; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319728u | kUnwind; return; } goto L_00319728; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00319750:
    set32(c.r[7], ld32((c.r[23].w[0] - 29288u)));
    set32(c.r[2], c.r[18].w[0] - 22888u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - 18776u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319780u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x00319780u) [[unlikely]] return; }
L_00319780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319850; } }
L_00319788:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 27768u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197ACu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x003197ACu) [[unlikely]] return; }
L_003197AC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00319850; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00319820; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003197F8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319820; } }
    c.budget -= 1;
L_003197F8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319820; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003197F8u | kUnwind; return; } goto L_003197F8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00319820:
    set32(c.r[7], ld32((c.r[23].w[0] - 29288u)));
    set32(c.r[2], c.r[18].w[0] - 22888u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - 18776u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319850u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x00319850u) [[unlikely]] return; }
L_00319850:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_003199A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 18704u)));
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031990C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319880u);  if (depth < kMaxDepth) unit_0044(c, 108u, depth + 1u); else { c.pc = 0x002122C8u; return; } if (c.pc != 0x00319880u) [[unlikely]] return; }
L_00319880:
    set32(c.r[18], c.r[16].w[0] + 14040u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319890u);  if (depth < kMaxDepth) unit_009C(c, 104u, depth + 1u); else { c.pc = 0x00370AE8u; return; } if (c.pc != 0x00319890u) [[unlikely]] return; }
L_00319890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319898u);  if (depth < kMaxDepth) unit_0044(c, 113u, depth + 1u); else { c.pc = 0x00212350u; return; } if (c.pc != 0x00319898u) [[unlikely]] return; }
L_00319898:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198ACu);  if (depth < kMaxDepth) unit_0044(c, 92u, depth + 1u); else { c.pc = 0x00211F30u; return; } if (c.pc != 0x003198ACu) [[unlikely]] return; }
L_003198AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198CCu);  if (depth < kMaxDepth) unit_009C(c, 106u, depth + 1u); else { c.pc = 0x00370B10u; return; } if (c.pc != 0x003198CCu) [[unlikely]] return; }
L_003198CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003198EC; } }
    c.budget -= 1;
L_003198D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198E0u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x003198E0u) [[unlikely]] return; }
L_003198E0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198ECu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x003198ECu) [[unlikely]] return; }
L_003198EC:
    set32(c.r[4], c.r[16].w[0] + 14040u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198FCu);  if (depth < kMaxDepth) unit_009C(c, 108u, depth + 1u); else { c.pc = 0x00370B38u; return; } if (c.pc != 0x003198FCu) [[unlikely]] return; }
L_003198FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003198D8u | kUnwind; return; } goto L_003198D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003199A4; } }
L_0031990C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031991Cu);  if (depth < kMaxDepth) unit_0044(c, 108u, depth + 1u); else { c.pc = 0x002122C8u; return; } if (c.pc != 0x0031991Cu) [[unlikely]] return; }
L_0031991C:
    set32(c.r[18], c.r[16].w[0] + 14040u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[19].d[0] = c.r[19].d[0] | 1024ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319930u);  if (depth < kMaxDepth) unit_009C(c, 104u, depth + 1u); else { c.pc = 0x00370AE8u; return; } if (c.pc != 0x00319930u) [[unlikely]] return; }
L_00319930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319938u);  if (depth < kMaxDepth) unit_0044(c, 113u, depth + 1u); else { c.pc = 0x00212350u; return; } if (c.pc != 0x00319938u) [[unlikely]] return; }
L_00319938:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031994Cu);  if (depth < kMaxDepth) unit_0044(c, 92u, depth + 1u); else { c.pc = 0x00211F30u; return; } if (c.pc != 0x0031994Cu) [[unlikely]] return; }
L_0031994C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031996Cu);  if (depth < kMaxDepth) unit_009C(c, 106u, depth + 1u); else { c.pc = 0x00370B10u; return; } if (c.pc != 0x0031996Cu) [[unlikely]] return; }
L_0031996C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031998C; } }
    c.budget -= 1;
L_00319978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319980u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x00319980u) [[unlikely]] return; }
L_00319980:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031998Cu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0031998Cu) [[unlikely]] return; }
L_0031998C:
    set32(c.r[4], c.r[16].w[0] + 14040u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031999Cu);  if (depth < kMaxDepth) unit_009C(c, 108u, depth + 1u); else { c.pc = 0x00370B38u; return; } if (c.pc != 0x0031999Cu) [[unlikely]] return; }
L_0031999C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319978u | kUnwind; return; } goto L_00319978; } }
L_003199A4:
    set32(c.r[2], ld32((c.r[23].w[0] - 29288u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[23].w[0] - 29288u), c.r[2].w[0]);
    c.budget -= 3;
L_003199B0:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003199E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3BD30000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[6].d[0] | 10248ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29192u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319A90; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319A5C; } }
L_00319A58:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00319A5C:
    set32(c.r[3], ld32((c.r[7].w[0] - 29192u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319A90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[3].w[0] - 22840u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319A58u | kUnwind; return; } goto L_00319A58; } }
    c.f[12] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_00319A90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x65420000u);
    set32(c.r[2], ld32((c.r[7].w[0] - 29192u)));
    c.r[5].d[0] = c.r[5].d[0] | 13751ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319AF4; } }
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22840u)));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00319AF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319AE4; } }
    c.budget -= 1;
L_00319AD0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319AF4; } }
L_00319AE4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319AD0u | kUnwind; return; } goto L_00319AD0; } }
    c.f[21] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_00319AF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x85A20000u);
    set32(c.r[2], ld32((c.r[7].w[0] - 29192u)));
    c.r[5].d[0] = c.r[5].d[0] | 6183ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319B54; } }
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22840u)));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00319B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319B44; } }
L_00319B30:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319B54; } }
L_00319B44:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319B30u | kUnwind; return; } goto L_00319B30; } }
    c.f[20] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_00319B54:
    set32(c.r[16], c.r[16].w[0] + 29328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B68u);  if (depth < kMaxDepth) unit_009E(c, 371u, depth + 1u); else { c.pc = 0x0037B830u; return; } if (c.pc != 0x00319B68u) [[unlikely]] return; }
L_00319B68:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B7Cu);  if (depth < kMaxDepth) unit_009E(c, 371u, depth + 1u); else { c.pc = 0x0037B830u; return; } if (c.pc != 0x00319B7Cu) [[unlikely]] return; }
L_00319B7C:
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B90u);  if (depth < kMaxDepth) unit_009E(c, 371u, depth + 1u); else { c.pc = 0x0037B830u; return; } if (c.pc != 0x00319B90u) [[unlikely]] return; }
L_00319B90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B9Cu);  if (depth < kMaxDepth) unit_009E(c, 338u, depth + 1u); else { c.pc = 0x0037B590u; return; } if (c.pc != 0x00319B9Cu) [[unlikely]] return; }
L_00319B9C:
    set32(c.r[4], c.r[18].w[0] + 14040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BA8u);  if (depth < kMaxDepth) unit_009C(c, 69u, depth + 1u); else { c.pc = 0x00370838u; return; } if (c.pc != 0x00319BA8u) [[unlikely]] return; }
L_00319BA8:
    set32(c.r[5], ld32((c.r[19].w[0] - 29252u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00319BC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BC4u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0037AB58u; return; } if (c.pc != 0x00319BC4u) [[unlikely]] return; }
L_00319BC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00319BC8:
    set32(c.r[5], ld32((c.r[20].w[0] - 29248u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00319BE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BE4u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0037AB58u; return; } if (c.pc != 0x00319BE4u) [[unlikely]] return; }
L_00319BE4:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_00319BE8:
    set32(c.r[5], ld32((c.r[21].w[0] - 29244u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00319C08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C04u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0037AB58u; return; } if (c.pc != 0x00319C04u) [[unlikely]] return; }
L_00319C04:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_00319C08:
    set32(c.r[5], ld32((c.r[22].w[0] - 29240u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00319C28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C24u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0037AB58u; return; } if (c.pc != 0x00319C24u) [[unlikely]] return; }
L_00319C24:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_00319C28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00319C60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[20] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 29188u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0]), 0u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319D08; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00319D08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 22836u)));
    c.budget -= 3;
L_00319CD0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00319CF0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319D08; } }
L_00319CF0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319CD0u | kUnwind; return; } goto L_00319CD0; } }
L_00319D08:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 21u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319E04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], c.r[2].w[0] + 28288u);
    set32(c.r[5], ld32((c.r[3].w[0] - 29252u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D38u);  if (depth < kMaxDepth) unit_009E(c, 257u, depth + 1u); else { c.pc = 0x0037AC40u; return; } if (c.pc != 0x00319D38u) [[unlikely]] return; }
L_00319D38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00319E04; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D5Cu);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x00319D5Cu) [[unlikely]] return; }
L_00319D5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] - 29192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319DBC; } }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22840u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00319DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319DAC; } }
L_00319D98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319DBC; } }
L_00319DAC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319D98u | kUnwind; return; } goto L_00319D98; } }
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_00319DBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DCCu);  if (depth < kMaxDepth) unit_009E(c, 285u, depth + 1u); else { c.pc = 0x0037AED8u; return; } if (c.pc != 0x00319DCCu) [[unlikely]] return; }
L_00319DCC:
    set32(c.r[16], c.r[19].w[0] + 28288u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DE4u);  if (depth < kMaxDepth) unit_009E(c, 287u, depth + 1u); else { c.pc = 0x0037AF00u; return; } if (c.pc != 0x00319DE4u) [[unlikely]] return; }
L_00319DE4:
    c.r[8].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E04u);  if (depth < kMaxDepth) unit_009E(c, 262u, depth + 1u); else { c.pc = 0x0037ACD8u; return; } if (c.pc != 0x00319E04u) [[unlikely]] return; }
L_00319E04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00319E30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[24]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[23]);
    c.f[24] = c.f[14];
    st32((c.r[29].w[0] + 176u), c.f[22]);
    c.f[23] = c.f[13];
    st32((c.r[29].w[0] + 168u), c.f[21]);
    c.f[22] = c.f[16];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.f[13] = c.f[17];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319ECC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A6E4; } }
L_00319EB8:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[9].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319F3C; } }
L_00319ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 29188u)));
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319F3C; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00319F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 22836u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00319F18:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319EB8u | kUnwind; return; } goto L_00319EB8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319F18u | kUnwind; return; } goto L_00319F18; } }
L_00319F3C:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[2], ld32((c.r[10].w[0] - 29232u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00319F88; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 29232u);
    c.budget -= 2;
L_00319F68:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319F88; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319F68u | kUnwind; return; } goto L_00319F68; } }
L_00319F88:
    set32(c.r[2], ld32((c.r[11].w[0] - 29196u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319F9C; } }
    c.r[21].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 1;
L_00319F9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld8((c.r[16].w[0] + 21u));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00319FE8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00319FE8; } }
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00319FC8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319FE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319FC8u | kUnwind; return; } goto L_00319FC8; } }
L_00319FE8:
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[8].d[0];
    set32(c.r[8], 0u - 1u);
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0031A124; } }
    set32(c.r[2], c.r[12].w[0] + 19264u);
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A110; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A09C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031A064; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[8].w[0] << 24);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.f[14] = c.f[22];
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A05Cu);  if (depth < kMaxDepth) unit_009E(c, 359u, depth + 1u); else { c.pc = 0x0037B740u; return; } if (c.pc != 0x0031A05Cu) [[unlikely]] return; }
L_0031A05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A10C; } }
L_0031A064:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[8].w[0] << 24);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[14] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.f[12] = c.f[21];
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A094u);  if (depth < kMaxDepth) unit_009E(c, 359u, depth + 1u); else { c.pc = 0x0037B740u; return; } if (c.pc != 0x0031A094u) [[unlikely]] return; }
L_0031A094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A10C; } }
L_0031A09C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031A0DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[8].w[0] << 24);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.f[13] = c.f[23];
    c.f[14] = c.f[22];
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A100; } }
L_0031A0DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[8].w[0] << 24);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.f[12] = c.f[21];
    c.f[13] = c.f[23];
    c.budget -= 9;
L_0031A100:
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A10Cu);  if (depth < kMaxDepth) unit_009E(c, 357u, depth + 1u); else { c.pc = 0x0037B718u; return; } if (c.pc != 0x0031A10Cu) [[unlikely]] return; }
L_0031A10C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031A110:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031A6E0; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A6E0; } }
L_0031A124:
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031A3FC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A2A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], c.r[3].w[0] + 28288u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29240u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A16Cu);  if (depth < kMaxDepth) unit_009E(c, 257u, depth + 1u); else { c.pc = 0x0037AC40u; return; } if (c.pc != 0x0031A16Cu) [[unlikely]] return; }
L_0031A16C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031A6E0; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A190u);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x0031A190u) [[unlikely]] return; }
L_0031A190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] - 29192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A1F4; } }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22840u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0031A1F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A1E4; } }
    c.budget -= 1;
L_0031A1D0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A1F4; } }
L_0031A1E4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A1D0u | kUnwind; return; } goto L_0031A1D0; } }
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_0031A1F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A204u);  if (depth < kMaxDepth) unit_009E(c, 285u, depth + 1u); else { c.pc = 0x0037AED8u; return; } if (c.pc != 0x0031A204u) [[unlikely]] return; }
L_0031A204:
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A218u);  if (depth < kMaxDepth) unit_009E(c, 287u, depth + 1u); else { c.pc = 0x0037AF00u; return; } if (c.pc != 0x0031A218u) [[unlikely]] return; }
L_0031A218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 29232u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A238; } }
    c.budget -= 1;
L_0031A230:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0031A238:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A264; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A230u | kUnwind; return; } goto L_0031A230; } }
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A264u);  if (depth < kMaxDepth) unit_009E(c, 283u, depth + 1u); else { c.pc = 0x0037AEB0u; return; } if (c.pc != 0x0031A264u) [[unlikely]] return; }
L_0031A264:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 22u));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0031A6BC; } }
    c.r[8].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A29Cu);  if (depth < kMaxDepth) unit_009E(c, 267u, depth + 1u); else { c.pc = 0x0037AD70u; return; } if (c.pc != 0x0031A29Cu) [[unlikely]] return; }
L_0031A29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A6DC; } }
L_0031A2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], c.r[3].w[0] + 28288u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29244u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2C4u);  if (depth < kMaxDepth) unit_009E(c, 257u, depth + 1u); else { c.pc = 0x0037AC40u; return; } if (c.pc != 0x0031A2C4u) [[unlikely]] return; }
L_0031A2C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031A6E0; } }
    c.f[12] = c.f[23];
    c.f[13] = c.f[24];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2E8u);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x0031A2E8u) [[unlikely]] return; }
L_0031A2E8:
    c.f[20] = fp::mul(c.f[21], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] - 29192u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031A350; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A31C; } }
L_0031A318:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0031A31C:
    set32(c.r[3], ld32((c.r[7].w[0] - 29192u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A350; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[3].w[0] - 22840u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A318u | kUnwind; return; } goto L_0031A318; } }
    c.f[12] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_0031A350:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A360u);  if (depth < kMaxDepth) unit_009E(c, 285u, depth + 1u); else { c.pc = 0x0037AED8u; return; } if (c.pc != 0x0031A360u) [[unlikely]] return; }
L_0031A360:
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A374u);  if (depth < kMaxDepth) unit_009E(c, 287u, depth + 1u); else { c.pc = 0x0037AF00u; return; } if (c.pc != 0x0031A374u) [[unlikely]] return; }
L_0031A374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 29232u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A390; } }
L_0031A388:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0031A390:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A3BC; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A388u | kUnwind; return; } goto L_0031A388; } }
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3BCu);  if (depth < kMaxDepth) unit_009E(c, 283u, depth + 1u); else { c.pc = 0x0037AEB0u; return; } if (c.pc != 0x0031A3BCu) [[unlikely]] return; }
L_0031A3BC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 22u));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0031A6BC; } }
    c.r[8].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3F4u);  if (depth < kMaxDepth) unit_009E(c, 267u, depth + 1u); else { c.pc = 0x0037AD70u; return; } if (c.pc != 0x0031A3F4u) [[unlikely]] return; }
L_0031A3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A6DC; } }
L_0031A3FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A564; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], c.r[3].w[0] + 28288u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29240u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A42Cu);  if (depth < kMaxDepth) unit_009E(c, 257u, depth + 1u); else { c.pc = 0x0037AC40u; return; } if (c.pc != 0x0031A42Cu) [[unlikely]] return; }
L_0031A42C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031A6E0; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A450u);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x0031A450u) [[unlikely]] return; }
L_0031A450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] - 29192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A4B4; } }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22840u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0031A4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A4A4; } }
    c.budget -= 1;
L_0031A490:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A4B4; } }
L_0031A4A4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A490u | kUnwind; return; } goto L_0031A490; } }
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_0031A4B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4C4u);  if (depth < kMaxDepth) unit_009E(c, 285u, depth + 1u); else { c.pc = 0x0037AED8u; return; } if (c.pc != 0x0031A4C4u) [[unlikely]] return; }
L_0031A4C4:
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4D8u);  if (depth < kMaxDepth) unit_009E(c, 287u, depth + 1u); else { c.pc = 0x0037AF00u; return; } if (c.pc != 0x0031A4D8u) [[unlikely]] return; }
L_0031A4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 29232u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A4F8; } }
    c.budget -= 1;
L_0031A4F0:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0031A4F8:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A524; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A4F0u | kUnwind; return; } goto L_0031A4F0; } }
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A524u);  if (depth < kMaxDepth) unit_009E(c, 283u, depth + 1u); else { c.pc = 0x0037AEB0u; return; } if (c.pc != 0x0031A524u) [[unlikely]] return; }
L_0031A524:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 22u));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0031A6BC; } }
    c.r[8].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A55Cu);  if (depth < kMaxDepth) unit_009E(c, 267u, depth + 1u); else { c.pc = 0x0037AD70u; return; } if (c.pc != 0x0031A55Cu) [[unlikely]] return; }
L_0031A55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A6DC; } }
L_0031A564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], c.r[3].w[0] + 28288u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29244u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A584u);  if (depth < kMaxDepth) unit_009E(c, 257u, depth + 1u); else { c.pc = 0x0037AC40u; return; } if (c.pc != 0x0031A584u) [[unlikely]] return; }
L_0031A584:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031A6E0; } }
    c.f[12] = c.f[23];
    c.f[13] = c.f[24];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5A8u);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x0031A5A8u) [[unlikely]] return; }
L_0031A5A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] - 29192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A60C; } }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22840u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0031A60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A5FC; } }
    c.budget -= 1;
L_0031A5E8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A60C; } }
L_0031A5FC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A5E8u | kUnwind; return; } goto L_0031A5E8; } }
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_0031A60C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A61Cu);  if (depth < kMaxDepth) unit_009E(c, 285u, depth + 1u); else { c.pc = 0x0037AED8u; return; } if (c.pc != 0x0031A61Cu) [[unlikely]] return; }
L_0031A61C:
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A630u);  if (depth < kMaxDepth) unit_009E(c, 287u, depth + 1u); else { c.pc = 0x0037AF00u; return; } if (c.pc != 0x0031A630u) [[unlikely]] return; }
L_0031A630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 29232u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A650; } }
    c.budget -= 1;
L_0031A648:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0031A650:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A67C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A648u | kUnwind; return; } goto L_0031A648; } }
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A67Cu);  if (depth < kMaxDepth) unit_009E(c, 283u, depth + 1u); else { c.pc = 0x0037AEB0u; return; } if (c.pc != 0x0031A67Cu) [[unlikely]] return; }
L_0031A67C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 22u));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0031A6BC; } }
    c.r[8].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6B4u);  if (depth < kMaxDepth) unit_009E(c, 267u, depth + 1u); else { c.pc = 0x0037AD70u; return; } if (c.pc != 0x0031A6B4u) [[unlikely]] return; }
L_0031A6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A6DC; } }
L_0031A6BC:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[23].w[0] + 28288u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6DCu);  if (depth < kMaxDepth) unit_009E(c, 262u, depth + 1u); else { c.pc = 0x0037ACD8u; return; } if (c.pc != 0x0031A6DCu) [[unlikely]] return; }
L_0031A6DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031A6E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031A6E4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[24] = ld32((c.r[29].w[0] + 192u));
    c.f[23] = ld32((c.r[29].w[0] + 184u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031A728:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 216u), c.f[25]);
    c.r[30].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[24]);
    c.f[25] = c.f[17];
    st32((c.r[29].w[0] + 200u), c.f[23]);
    c.f[24] = c.f[16];
    st32((c.r[29].w[0] + 192u), c.f[22]);
    c.f[23] = c.f[15];
    st32((c.r[29].w[0] + 184u), c.f[21]);
    c.f[22] = c.f[14];
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.f[21] = c.f[13];
    set32(c.r[3], ld32((c.r[2].w[0] + 19360u)));
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A9C8; } }
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], ld32((c.r[22].w[0] + 20u)));
    mmi::mult(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031A9C4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0031A824; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[19], c.r[3].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0031A824; } }
    c.budget -= 1;
L_0031A7F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031A824; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[17].w[0] + 12u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A7F8u | kUnwind; return; } goto L_0031A7F8; } }
L_0031A824:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0031A9C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[20], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031A954; } }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031A950; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A868u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0031A868u) [[unlikely]] return; }
L_0031A868:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + 7u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031A904; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0031A898:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A8A8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0031A8A8u) [[unlikely]] return; }
L_0031A8A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0031A8B8u);  goto L_0031A8BC; }
L_0031A8BC:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A8C8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0031A8C8u) [[unlikely]] return; }
L_0031A8C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0031A8DCu);  goto L_0031A8E0; }
L_0031A8E0:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A898u | kUnwind; return; } goto L_0031A898; } }
L_0031A904:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0031A950; } }
L_0031A910:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A91Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0031A91Cu) [[unlikely]] return; }
L_0031A91C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0031A928u);  goto L_0031A92C; }
L_0031A92C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A910u | kUnwind; return; } goto L_0031A910; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_0031A950:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0031A954:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A978; } }
    c.budget -= 1;
L_0031A970:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 28u);
    c.budget -= 2;
L_0031A978:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A9C4; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A970u | kUnwind; return; } goto L_0031A970; } }
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.f[14] = c.f[22];
    c.f[15] = c.f[23];
    c.f[16] = c.f[24];
    c.f[17] = c.f[25];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A9C0u);  if (depth < kMaxDepth) unit_0086(c, 168u, depth + 1u); else { c.pc = 0x00319E30u; return; } if (c.pc != 0x0031A9C0u) [[unlikely]] return; }
L_0031A9C0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031A9C4:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_0031A9C8:
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
    c.f[25] = ld32((c.r[29].w[0] + 216u));
    c.f[24] = ld32((c.r[29].w[0] + 208u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031AA18:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[22]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.f[22] = c.f[13];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 168u), c.f[21]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA6Cu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0031AA6Cu) [[unlikely]] return; }
L_0031AA6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA78u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0031AA78u) [[unlikely]] return; }
L_0031AA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA88u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0031AA88u) [[unlikely]] return; }
L_0031AA88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA94u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0031AA94u) [[unlikely]] return; }
L_0031AA94:
    c.f[21] = ld32((c.r[2].w[0] + 624u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AAA8; } }
L_0031AAA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 2;
L_0031AAA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAC0u);  if (depth < kMaxDepth) unit_009E(c, 336u, depth + 1u); else { c.pc = 0x0037B568u; return; } if (c.pc != 0x0031AAC0u) [[unlikely]] return; }
L_0031AAC0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAD0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0031AAD0u) [[unlikely]] return; }
L_0031AAD0:
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAE4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0031AAE4u) [[unlikely]] return; }
L_0031AAE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AB1C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AB48; } }
L_0031AB1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AB48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_0031AB48:
    c.f[12] = c.f[12] ^ fp::kSign;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB60u);  if (depth < kMaxDepth) unit_005B(c, 203u, depth + 1u); else { c.pc = 0x0026E1F0u; return; } if (c.pc != 0x0031AB60u) [[unlikely]] return; }
L_0031AB60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB6Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0031AB6Cu) [[unlikely]] return; }
L_0031AB6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = 0u;
    fpu_div(c, 1u, c.f[21], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 29212u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031ABB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[20] = c.f[0];
    c.f[13] = ld32((c.r[2].w[0] - 29208u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AC44; } }
L_0031ABB8:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031ABF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ABD0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0031ABD0u) [[unlikely]] return; }
L_0031ABD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031ABEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[2].w[0] - 29204u));
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031ABF4; } }
L_0031ABEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[20] = ld32((c.r[2].w[0] - 29204u));
    c.budget -= 2;
L_0031ABF4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031AC18; } }
    c.f[13] = c.f[22];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AC44; } }
L_0031AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC20u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0031AC20u) [[unlikely]] return; }
L_0031AC20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AC3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[2].w[0] - 29200u));
    c.f[13] = fp::add(c.f[0], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AC44; } }
L_0031AC3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[2].w[0] - 29200u));
    c.budget -= 2;
L_0031AC44:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[2] = c.f[13];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031AC60; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0031AC60:
    fpu_div(c, 12u, c.f[2], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AC8C; } }
    c.f[12] = c.f[3];
    c.budget -= 1;
L_0031AC8C:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    fpu_div(c, 2u, c.f[3], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[4] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031ACDC; } }
    st32((c.r[18].w[0]), c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031ACF0; } }
L_0031ACDC:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031ACF0; } }
    st32((c.r[18].w[0]), c.f[3]);
    c.budget -= 1;
L_0031ACF0:
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AD34; } }
    st32((c.r[19].w[0]), c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AD54; } }
L_0031AD34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AD54; } }
    st32((c.r[19].w[0]), c.f[1]);
    c.budget -= 1;
L_0031AD54:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD64u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x0031AD64u) [[unlikely]] return; }
L_0031AD64:
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[12] = c.f[4] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031ADC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[12] = fp::sub(c.f[12], c.f[21]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[2] = fp::mul(c.f[12], c.f[2]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[20].w[0]), c.f[1]);
    c.budget -= 17;
L_0031ADC8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031ADF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 4;
L_0031ADF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AE1C; } }
    c.f[4] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AE3C; } }
L_0031AE1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031AE3C; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_0031AE3C:
    st32((c.r[21].w[0]), c.f[4]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031AE78:
    if (::decomp::hook_0031AE78.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0031AE78, depth)) return; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.f[21] = c.f[15];
    set32(c.r[2], ld32((c.r[8].w[0] - 29176u)));
    c.f[20] = c.f[14];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[24]);
    st32((c.r[29].w[0] + 216u), c.f[23]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0031AF10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29172u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AF20; } }
L_0031AF04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B18C; } }
L_0031AF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[8].w[0] - 29176u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 29172u), 0u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0031AF20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 19264u);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031AF04u | kUnwind; return; } goto L_0031AF04; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031AF04u | kUnwind; return; } goto L_0031AF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF4Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0031AF4Cu) [[unlikely]] return; }
L_0031AF4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AF5C; } }
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.f[21] = fp::add(c.f[21], c.f[21]);
    c.budget -= 2;
L_0031AF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF64u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0031AF64u) [[unlikely]] return; }
L_0031AF64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF70u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0031AF70u) [[unlikely]] return; }
L_0031AF70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031AFC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AF94u) [[unlikely]] return; }
L_0031AF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AFC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AFB4u) [[unlikely]] return; }
L_0031AFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AFC4; } }
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.f[21] = fp::add(c.f[21], c.f[21]);
    c.budget -= 2;
L_0031AFC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.f[13] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFDCu);  if (depth < kMaxDepth) unit_009E(c, 355u, depth + 1u); else { c.pc = 0x0037B6F0u; return; } if (c.pc != 0x0031AFDCu) [[unlikely]] return; }
L_0031AFDC:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 20u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    set32(c.r[8], c.r[29].w[0] + 28u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B008u);  if (depth < kMaxDepth) unit_0086(c, 219u, depth + 1u); else { c.pc = 0x0031AA18u; return; } if (c.pc != 0x0031B008u) [[unlikely]] return; }
L_0031B008:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B034; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031B034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B174; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B04Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0031B04Cu) [[unlikely]] return; }
L_0031B04C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_0031B140; } }
    set32(c.r[2], c.r[21].w[0] + 19264u);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    c.f[23] = ld32((c.r[29].w[0] + 20u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    c.f[21] = ld32((c.r[29].w[0] + 28u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031B08C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B174; } }
L_0031B08C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031B134; } }
L_0031B0A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B11C; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B0C8; } }
L_0031B0C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 28u);
    c.budget -= 2;
L_0031B0C8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B114; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B0C0u | kUnwind; return; } goto L_0031B0C0; } }
    c.f[15] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    c.f[14] = c.f[22];
    c.f[16] = c.f[21];
    c.f[17] = c.f[20];
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B110u);  if (depth < kMaxDepth) unit_0086(c, 168u, depth + 1u); else { c.pc = 0x00319E30u; return; } if (c.pc != 0x0031B110u) [[unlikely]] return; }
L_0031B110:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031B114:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[18].d[0];  if (t) { goto L_0031B134; } }
L_0031B11C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 24u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B0A0u | kUnwind; return; } goto L_0031B0A0; } }
L_0031B134:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B174; } }
L_0031B140:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.f[15] = 0u;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 28u));
    c.f[17] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B170u);  if (depth < kMaxDepth) unit_0086(c, 209u, depth + 1u); else { c.pc = 0x0031A728u; return; } if (c.pc != 0x0031B170u) [[unlikely]] return; }
L_0031B170:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031B174:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0031B188; } }
    set32(c.r[2], ld32((c.r[23].w[0] - 29172u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[23].w[0] - 29172u), c.r[2].w[0]);
    c.budget -= 3;
L_0031B188:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0031B18C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[24] = ld32((c.r[29].w[0] + 224u));
    c.f[23] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B1D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] + 19264u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.f[21]);
    c.f[22] = c.f[16];
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.f[21] = c.f[15];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.f[20] = c.f[14];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    st32((c.r[29].w[0] + 16u), c.f[12]);
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B240; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B284; } }
L_0031B240:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0031B264; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B25Cu);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x0031B25Cu) [[unlikely]] return; }
L_0031B25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B278; } }
L_0031B264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B278u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x0031B278u) [[unlikely]] return; }
L_0031B278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B494; } }
L_0031B284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B28Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0031B28Cu) [[unlikely]] return; }
L_0031B28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B29C; } }
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.f[21] = fp::add(c.f[21], c.f[21]);
    c.budget -= 2;
L_0031B29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2A4u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0031B2A4u) [[unlikely]] return; }
L_0031B2A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2B0u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0031B2B0u) [[unlikely]] return; }
L_0031B2B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031B304; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B2D4u) [[unlikely]] return; }
L_0031B2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B304; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B2F4u) [[unlikely]] return; }
L_0031B2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B304; } }
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.f[21] = fp::add(c.f[21], c.f[21]);
    c.budget -= 2;
L_0031B304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.f[12] = c.f[20];
    set32(c.r[16], c.r[2].w[0] + 29328u);
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B320u);  if (depth < kMaxDepth) unit_009E(c, 355u, depth + 1u); else { c.pc = 0x0037B6F0u; return; } if (c.pc != 0x0031B320u) [[unlikely]] return; }
L_0031B320:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 20u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    set32(c.r[8], c.r[29].w[0] + 28u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B34Cu);  if (depth < kMaxDepth) unit_0086(c, 219u, depth + 1u); else { c.pc = 0x0031AA18u; return; } if (c.pc != 0x0031B34Cu) [[unlikely]] return; }
L_0031B34C:
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[16] = ld32((c.r[29].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[16]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B378; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031B378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B458; } }
    c.f[0] = fp::mul(c.f[2], c.f[22]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0031B3D4; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0031B3A0u) [[unlikely]] return; }
L_0031B3A0:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[16] = ld32((c.r[29].w[0] + 32u));
    c.f[17] = ld32((c.r[29].w[0] + 28u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3CCu);  if (depth < kMaxDepth) unit_009E(c, 361u, depth + 1u); else { c.pc = 0x0037B768u; return; } if (c.pc != 0x0031B3CCu) [[unlikely]] return; }
L_0031B3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B490; } }
L_0031B3D4:
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[16]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B3F4; } }
    c.f[0] = fp::mul(c.f[0], c.f[16]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 2;
L_0031B3F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_0031B424; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.f[12] = ld32((c.r[29].w[0] + 20u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[16].w[0] + 28288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B41Cu);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x0031B41Cu) [[unlikely]] return; }
L_0031B41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B43C; } }
L_0031B424:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 28288u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B43Cu);  if (depth < kMaxDepth) unit_009E(c, 301u, depth + 1u); else { c.pc = 0x0037B018u; return; } if (c.pc != 0x0031B43Cu) [[unlikely]] return; }
L_0031B43C:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[16].w[0] + 28288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B450u);  if (depth < kMaxDepth) unit_009E(c, 287u, depth + 1u); else { c.pc = 0x0037AF00u; return; } if (c.pc != 0x0031B450u) [[unlikely]] return; }
L_0031B450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B490; } }
L_0031B458:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0031B478; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B470u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x0031B470u) [[unlikely]] return; }
L_0031B470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B48C; } }
L_0031B478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B48Cu);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x0031B48Cu) [[unlikely]] return; }
L_0031B48C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031B490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031B494:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B4C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0031B520; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B520; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 22936u);
    set32(c.r[2], c.r[2].w[0] - 12288u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B508u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0031B508u) [[unlikely]] return; }
L_0031B508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12304u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B520u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0031B520u) [[unlikely]] return; }
L_0031B520:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B538:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B548:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B558:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B568:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031B5D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_0031B5A0; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B5D0; } }
L_0031B5A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B5D0; } }
    set32(c.r[6], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B5A0u | kUnwind; return; } goto L_0031B5A0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0031B5D0:
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B5E0:
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0031B620; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0031B620; } }
L_0031B600:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B620; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B600u | kUnwind; return; } goto L_0031B600; } }
L_0031B620:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[3].d[0];
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B638:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031B69C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0031B670; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B670:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B69C; } }
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B670u | kUnwind; return; } goto L_0031B670; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031B69C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B6A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 24u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[2].w[0] - 22920u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[20], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0031B730; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0031B730; } }
    c.budget -= 1;
L_0031B710:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B710u | kUnwind; return; } goto L_0031B710; } }
L_0031B730:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 29328u);
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[5].d[0];
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B760u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B628u; return; } if (c.pc != 0x0031B760u) [[unlikely]] return; }
L_0031B760:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B774u);  if (depth < kMaxDepth) unit_009E(c, 349u, depth + 1u); else { c.pc = 0x0037B678u; return; } if (c.pc != 0x0031B774u) [[unlikely]] return; }
L_0031B774:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B7B0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12568u);
    set32(c.r[7], c.r[7].w[0] - 12400u);
    set32(c.r[8], 0u + 651u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7A4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0031B7A4u) [[unlikely]] return; }
L_0031B7A4:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B7B8; } }
L_0031B7B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0031B7B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B7E0:
    set32(c.r[2], 0u + 24u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] - 22900u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B808:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 24u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031B8E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B8E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[18], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031B8AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0031B880; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B8AC; } }
L_0031B880:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B8AC; } }
    set32(c.r[4], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B880u | kUnwind; return; } goto L_0031B880; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0031B8AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 29328u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8CCu);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B628u; return; } if (c.pc != 0x0031B8CCu) [[unlikely]] return; }
L_0031B8CC:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8E0u);  if (depth < kMaxDepth) unit_009E(c, 349u, depth + 1u); else { c.pc = 0x0037B678u; return; } if (c.pc != 0x0031B8E0u) [[unlikely]] return; }
L_0031B8E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B900:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[18], c.r[16].w[0] + 14040u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B948u);  if (depth < kMaxDepth) unit_0044(c, 108u, depth + 1u); else { c.pc = 0x002122C8u; return; } if (c.pc != 0x0031B948u) [[unlikely]] return; }
L_0031B948:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B954u);  if (depth < kMaxDepth) unit_009C(c, 104u, depth + 1u); else { c.pc = 0x00370AE8u; return; } if (c.pc != 0x0031B954u) [[unlikely]] return; }
L_0031B954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B95Cu);  if (depth < kMaxDepth) unit_0044(c, 113u, depth + 1u); else { c.pc = 0x00212350u; return; } if (c.pc != 0x0031B95Cu) [[unlikely]] return; }
L_0031B95C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B970u);  if (depth < kMaxDepth) unit_0044(c, 92u, depth + 1u); else { c.pc = 0x00211F30u; return; } if (c.pc != 0x0031B970u) [[unlikely]] return; }
L_0031B970:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B990u);  if (depth < kMaxDepth) unit_009C(c, 106u, depth + 1u); else { c.pc = 0x00370B10u; return; } if (c.pc != 0x0031B990u) [[unlikely]] return; }
L_0031B990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9AC; } }
L_0031B998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9A0u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x0031B9A0u) [[unlikely]] return; }
L_0031B9A0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9ACu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0031B9ACu) [[unlikely]] return; }
L_0031B9AC:
    set32(c.r[4], c.r[16].w[0] + 14040u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9BCu);  if (depth < kMaxDepth) unit_009C(c, 108u, depth + 1u); else { c.pc = 0x00370B38u; return; } if (c.pc != 0x0031B9BCu) [[unlikely]] return; }
L_0031B9BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B998u | kUnwind; return; } goto L_0031B998; } }
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0031BA58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0031BA58; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0031BA38:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BA58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BA38u | kUnwind; return; } goto L_0031BA38; } }
L_0031BA58:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], 0u - 1u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[18].d[0];  if (t) { goto L_0031BADC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA80u);  if (depth < kMaxDepth) unit_009E(c, 353u, depth + 1u); else { c.pc = 0x0037B6C8u; return; } if (c.pc != 0x0031BA80u) [[unlikely]] return; }
L_0031BA80:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031BADC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0031BAB0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BADC; } }
L_0031BAB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BADC; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BAB0u | kUnwind; return; } goto L_0031BAB0; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031BADC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BAF8:
    set32(c.r[2], 0u + 24u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BB18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 24u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BC34; } }
    st32((c.r[3].w[0] + 20u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0031BBB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0031BBB0; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0031BB90:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BBB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BB90u | kUnwind; return; } goto L_0031BB90; } }
L_0031BBB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], 0u - 1u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[18].d[0];  if (t) { goto L_0031BC34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBD8u);  if (depth < kMaxDepth) unit_009E(c, 353u, depth + 1u); else { c.pc = 0x0037B6C8u; return; } if (c.pc != 0x0031BBD8u) [[unlikely]] return; }
L_0031BBD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031BC34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0031BC08; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BC34; } }
L_0031BC08:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BC34; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BC08u | kUnwind; return; } goto L_0031BC08; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031BC34:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BC50:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 29192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[10], c.r[2].w[0] + 4u);
    st32((c.r[6].w[0] - 22840u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 29192u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[9], 0u + 2u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] - 29188u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[8].w[0] - 22836u), c.r[3].w[0]);
    c.budget -= 22;
L_0031BCA8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[10].w[0]), c.f[0]);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BCA8u | kUnwind; return; } goto L_0031BCA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 18704u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00320000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 17328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD04u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0031BD04u) [[unlikely]] return; }
L_0031BD04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BD18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 14040u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD40u);  if (depth < kMaxDepth) unit_009C(c, 63u, depth + 1u); else { c.pc = 0x003707C0u; return; } if (c.pc != 0x0031BD40u) [[unlikely]] return; }
L_0031BD40:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 12568u);
    set32(c.r[7], c.r[7].w[0] - 12376u);
    set32(c.r[8], 0u + 1184u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD64u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0031BD64u) [[unlikely]] return; }
L_0031BD64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00320000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 17128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDB4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0031BDB4u) [[unlikely]] return; }
L_0031BDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BDC8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[9], 0u + 1228u);
    set32(c.r[19], 0u + 24u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 12568u);
    set32(c.r[17], c.r[17].w[0] - 12328u);
    set32(c.r[4], ld32((c.r[18].w[0] + 18704u)));
    st32((c.r[20].w[0] + 16u), c.r[22].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE40u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0031BE40u) [[unlikely]] return; }
L_0031BE40:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[19].w[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE68u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0031BE68u) [[unlikely]] return; }
L_0031BE68:
    set32(c.r[4], ld32((c.r[18].w[0] + 18704u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 1233u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE88u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0031BE88u) [[unlikely]] return; }
L_0031BE88:
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BEA0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0031BEA0u) [[unlikely]] return; }
L_0031BEA0:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0031BEF8; } }
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0031BEB8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BECCu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x0031BECCu) [[unlikely]] return; }
L_0031BECC:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[16], c.r[16].w[0] + 24u);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BEB8u | kUnwind; return; } goto L_0031BEB8; } }
L_0031BEF8:
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF0Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0031BF0Cu) [[unlikely]] return; }
L_0031BF0C:
    set32(c.r[3], ld32((c.r[23].w[0] - 29180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031BF2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29184u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF28u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x0031BF28u) [[unlikely]] return; }
L_0031BF28:
    st32((c.r[23].w[0] - 29180u), c.r[2].w[0]);
    c.budget -= 1;
L_0031BF2C:
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
L_0031BF60:
    st32((c.r[6].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] - 29188u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BFDC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031BFDC; } }
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0031BF98:
    set32(c.r[2], ld32((c.r[9].w[0] - 22836u)));
    set32(c.r[4], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031BFC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BFC0:
    set32(c.r[3], ld32((c.r[10].w[0] - 29188u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 12u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BF98u | kUnwind; return; } goto L_0031BF98; } }
L_0031BFDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] - 29192u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0087(c, 3u, depth); } }
    [[clang::musttail]] return unit_0087(c, 1u, depth);
}

}
