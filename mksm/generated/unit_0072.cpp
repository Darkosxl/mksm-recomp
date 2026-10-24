#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_002C9A60;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0072[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16,
    0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0,
    0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0072(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C8000;
    case 2u: goto L_002C8080;
    case 3u: goto L_002C80C4;
    case 4u: goto L_002C80E0;
    case 5u: goto L_002C80FC;
    case 6u: goto L_002C8118;
    case 7u: goto L_002C8124;
    case 8u: goto L_002C8138;
    case 9u: goto L_002C814C;
    case 10u: goto L_002C8168;
    case 11u: goto L_002C8174;
    case 12u: goto L_002C8198;
    case 13u: goto L_002C81B8;
    case 14u: goto L_002C81CC;
    case 15u: goto L_002C81EC;
    case 16u: goto L_002C81FC;
    case 17u: goto L_002C820C;
    case 18u: goto L_002C821C;
    case 19u: goto L_002C822C;
    case 20u: goto L_002C8258;
    case 21u: goto L_002C8298;
    case 22u: goto L_002C82DC;
    case 23u: goto L_002C8300;
    case 24u: goto L_002C835C;
    case 25u: goto L_002C8378;
    case 26u: goto L_002C8390;
    case 27u: goto L_002C83A8;
    case 28u: goto L_002C83E8;
    case 29u: goto L_002C83F4;
    case 30u: goto L_002C8408;
    case 31u: goto L_002C843C;
    case 32u: goto L_002C845C;
    case 33u: goto L_002C84AC;
    case 34u: goto L_002C84CC;
    case 35u: goto L_002C84EC;
    case 36u: goto L_002C84F8;
    case 37u: goto L_002C8510;
    case 38u: goto L_002C8568;
    case 39u: goto L_002C8578;
    case 40u: goto L_002C85AC;
    case 41u: goto L_002C85B8;
    case 42u: goto L_002C85C8;
    case 43u: goto L_002C85F8;
    case 44u: goto L_002C8640;
    case 45u: goto L_002C8680;
    case 46u: goto L_002C8690;
    case 47u: goto L_002C86D0;
    case 48u: goto L_002C86E0;
    case 49u: goto L_002C8710;
    case 50u: goto L_002C8750;
    case 51u: goto L_002C87A4;
    case 52u: goto L_002C87BC;
    case 53u: goto L_002C87D8;
    case 54u: goto L_002C87F0;
    case 55u: goto L_002C881C;
    case 56u: goto L_002C8830;
    case 57u: goto L_002C8848;
    case 58u: goto L_002C8858;
    case 59u: goto L_002C8888;
    case 60u: goto L_002C8898;
    case 61u: goto L_002C8908;
    case 62u: goto L_002C8924;
    case 63u: goto L_002C8940;
    case 64u: goto L_002C894C;
    case 65u: goto L_002C8968;
    case 66u: goto L_002C8990;
    case 67u: goto L_002C89AC;
    case 68u: goto L_002C89C0;
    case 69u: goto L_002C8A10;
    case 70u: goto L_002C8A34;
    case 71u: goto L_002C8A48;
    case 72u: goto L_002C8A5C;
    case 73u: goto L_002C8A7C;
    case 74u: goto L_002C8AE0;
    case 75u: goto L_002C8B48;
    case 76u: goto L_002C8BB8;
    case 77u: goto L_002C8BF8;
    case 78u: goto L_002C8C14;
    case 79u: goto L_002C8C38;
    case 80u: goto L_002C8C88;
    case 81u: goto L_002C8CB4;
    case 82u: goto L_002C8D00;
    case 83u: goto L_002C8D18;
    case 84u: goto L_002C8D60;
    case 85u: goto L_002C8DB0;
    case 86u: goto L_002C8DD8;
    case 87u: goto L_002C8E08;
    case 88u: goto L_002C8E28;
    case 89u: goto L_002C8EA8;
    case 90u: goto L_002C8ED0;
    case 91u: goto L_002C8F18;
    case 92u: goto L_002C8F90;
    case 93u: goto L_002C9000;
    case 94u: goto L_002C9094;
    case 95u: goto L_002C90A8;
    case 96u: goto L_002C913C;
    case 97u: goto L_002C9150;
    case 98u: goto L_002C9178;
    case 99u: goto L_002C91BC;
    case 100u: goto L_002C91D8;
    case 101u: goto L_002C91F4;
    case 102u: goto L_002C9214;
    case 103u: goto L_002C9220;
    case 104u: goto L_002C9234;
    case 105u: goto L_002C9248;
    case 106u: goto L_002C9264;
    case 107u: goto L_002C9270;
    case 108u: goto L_002C92A8;
    case 109u: goto L_002C92E4;
    case 110u: goto L_002C92F8;
    case 111u: goto L_002C9320;
    case 112u: goto L_002C9338;
    case 113u: goto L_002C9360;
    case 114u: goto L_002C93A8;
    case 115u: goto L_002C9408;
    case 116u: goto L_002C9454;
    case 117u: goto L_002C9490;
    case 118u: goto L_002C94D4;
    case 119u: goto L_002C94FC;
    case 120u: goto L_002C9528;
    case 121u: goto L_002C955C;
    case 122u: goto L_002C9570;
    case 123u: goto L_002C95B4;
    case 124u: goto L_002C95EC;
    case 125u: goto L_002C9608;
    case 126u: goto L_002C9658;
    case 127u: goto L_002C9680;
    case 128u: goto L_002C96C8;
    case 129u: goto L_002C9700;
    case 130u: goto L_002C9724;
    case 131u: goto L_002C9740;
    case 132u: goto L_002C9750;
    case 133u: goto L_002C9768;
    case 134u: goto L_002C9780;
    case 135u: goto L_002C9790;
    case 136u: goto L_002C97A8;
    case 137u: goto L_002C97C0;
    case 138u: goto L_002C97D8;
    case 139u: goto L_002C97E8;
    case 140u: goto L_002C98BC;
    case 141u: goto L_002C98D0;
    case 142u: goto L_002C9970;
    case 143u: goto L_002C9A08;
    case 144u: goto L_002C9A28;
    case 145u: goto L_002C9A60;
    case 146u: goto L_002C9ADC;
    case 147u: goto L_002C9AEC;
    case 148u: goto L_002C9AF4;
    case 149u: goto L_002C9B04;
    case 150u: goto L_002C9B0C;
    case 151u: goto L_002C9B30;
    case 152u: goto L_002C9B38;
    case 153u: goto L_002C9B5C;
    case 154u: goto L_002C9B64;
    case 155u: goto L_002C9B88;
    case 156u: goto L_002C9B90;
    case 157u: goto L_002C9BF0;
    case 158u: goto L_002C9C00;
    case 159u: goto L_002C9C08;
    case 160u: goto L_002C9C14;
    case 161u: goto L_002C9C20;
    case 162u: goto L_002C9C30;
    case 163u: goto L_002C9C48;
    case 164u: goto L_002C9CF0;
    case 165u: goto L_002C9D0C;
    case 166u: goto L_002C9D14;
    case 167u: goto L_002C9D20;
    case 168u: goto L_002C9D60;
    case 169u: goto L_002C9D70;
    case 170u: goto L_002C9D7C;
    case 171u: goto L_002C9DDC;
    case 172u: goto L_002C9E18;
    case 173u: goto L_002C9E34;
    case 174u: goto L_002C9E3C;
    case 175u: goto L_002C9E50;
    case 176u: goto L_002C9E5C;
    case 177u: goto L_002C9E64;
    case 178u: goto L_002C9E88;
    case 179u: goto L_002C9E90;
    case 180u: goto L_002C9EB8;
    case 181u: goto L_002C9EC0;
    case 182u: goto L_002C9EE4;
    case 183u: goto L_002C9EEC;
    case 184u: goto L_002C9F1C;
    case 185u: goto L_002C9F24;
    case 186u: goto L_002C9F70;
    case 187u: goto L_002C9F84;
    case 188u: goto L_002C9FF4;
    case 189u: goto L_002CA064;
    case 190u: goto L_002CA07C;
    case 191u: goto L_002CA0CC;
    case 192u: goto L_002CA11C;
    case 193u: goto L_002CA14C;
    case 194u: goto L_002CA154;
    case 195u: goto L_002CA168;
    case 196u: goto L_002CA170;
    case 197u: goto L_002CA1C0;
    case 198u: goto L_002CA1D0;
    case 199u: goto L_002CA1DC;
    case 200u: goto L_002CA220;
    case 201u: goto L_002CA264;
    case 202u: goto L_002CA2A8;
    case 203u: goto L_002CA2EC;
    case 204u: goto L_002CA314;
    case 205u: goto L_002CA35C;
    case 206u: goto L_002CA384;
    case 207u: goto L_002CA38C;
    case 208u: goto L_002CA3A0;
    case 209u: goto L_002CA3B4;
    case 210u: goto L_002CA3E0;
    case 211u: goto L_002CA430;
    case 212u: goto L_002CA4E8;
    case 213u: goto L_002CA530;
    case 214u: goto L_002CA5A0;
    case 215u: goto L_002CA658;
    case 216u: goto L_002CA660;
    case 217u: goto L_002CA698;
    case 218u: goto L_002CA77C;
    case 219u: goto L_002CA800;
    case 220u: goto L_002CA90C;
    case 221u: goto L_002CA920;
    case 222u: goto L_002CA938;
    case 223u: goto L_002CA94C;
    case 224u: goto L_002CA9F8;
    case 225u: goto L_002CAA0C;
    case 226u: goto L_002CAA24;
    case 227u: goto L_002CAA38;
    case 228u: goto L_002CAC10;
    case 229u: goto L_002CACA0;
    case 230u: goto L_002CAD3C;
    case 231u: goto L_002CADB0;
    case 232u: goto L_002CAE54;
    case 233u: goto L_002CAF00;
    case 234u: goto L_002CAFA8;
    case 235u: goto L_002CAFC8;
    case 236u: goto L_002CB010;
    case 237u: goto L_002CB098;
    case 238u: goto L_002CB0D4;
    case 239u: goto L_002CB0E0;
    case 240u: goto L_002CB140;
    case 241u: goto L_002CB14C;
    case 242u: goto L_002CB164;
    case 243u: goto L_002CB288;
    case 244u: goto L_002CB2CC;
    case 245u: goto L_002CB2E4;
    case 246u: goto L_002CB314;
    case 247u: goto L_002CB330;
    case 248u: goto L_002CB500;
    case 249u: goto L_002CB534;
    case 250u: goto L_002CB564;
    case 251u: goto L_002CB5B4;
    case 252u: goto L_002CB648;
    case 253u: goto L_002CB69C;
    case 254u: goto L_002CB6F0;
    case 255u: goto L_002CB718;
    case 256u: goto L_002CB76C;
    case 257u: goto L_002CB7B0;
    case 258u: goto L_002CB854;
    case 259u: goto L_002CB864;
    case 260u: goto L_002CB87C;
    case 261u: goto L_002CB894;
    case 262u: goto L_002CB8AC;
    case 263u: goto L_002CB8F0;
    case 264u: goto L_002CB920;
    case 265u: goto L_002CB95C;
    case 266u: goto L_002CB970;
    case 267u: goto L_002CB980;
    case 268u: goto L_002CB9C8;
    case 269u: goto L_002CBA24;
    case 270u: goto L_002CBA88;
    case 271u: goto L_002CBAF8;
    case 272u: goto L_002CBB5C;
    case 273u: goto L_002CBB84;
    case 274u: goto L_002CBBC4;
    case 275u: goto L_002CBC50;
    case 276u: goto L_002CBC60;
    case 277u: goto L_002CBCFC;
    case 278u: goto L_002CBD34;
    case 279u: goto L_002CBD68;
    case 280u: goto L_002CBD94;
    case 281u: goto L_002CBE60;
    case 282u: goto L_002CBF20;
    case 283u: goto L_002CBF40;
    case 284u: goto L_002CBF80;
    case 285u: goto L_002CBF94;
    default: bad_entry(c, 0x002C8000u); return;
    }
L_002C8000:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 16;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002C8264; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002C8264; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[18], c.r[3].w[0] + 20048u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8264; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8080u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x002C8080u) [[unlikely]] return; }
L_002C8080:
    set32(c.r[17], c.r[19].w[0] + 16u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 24u);
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 12u), c.f[20]);
    set32(c.r[16], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[18], c.r[19].w[0] + 8u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80C4u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C80C4u) [[unlikely]] return; }
L_002C80C4:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80E0u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C80E0u) [[unlikely]] return; }
L_002C80E0:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[4], c.r[19].w[0] + 24u);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80FCu);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C80FCu) [[unlikely]] return; }
L_002C80FC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 20u));
    c.f[15] = c.f[20];
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8118u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C8118u) [[unlikely]] return; }
L_002C8118:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8124u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C8124u) [[unlikely]] return; }
L_002C8124:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8138u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x002C8138u) [[unlikely]] return; }
L_002C8138:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C814Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C814Cu) [[unlikely]] return; }
L_002C814C:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8168u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C8168u) [[unlikely]] return; }
L_002C8168:
    c.f[12] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8174u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002C8174u) [[unlikely]] return; }
L_002C8174:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8198u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x002C8198u) [[unlikely]] return; }
L_002C8198:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C8264; } }
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81B8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C81B8u) [[unlikely]] return; }
L_002C81B8:
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81CCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C81CCu) [[unlikely]] return; }
L_002C81CC:
    mmi::por(c.r[3], c.r[0], c.r[0]);
    set32(c.r[16], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[20]);
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C81ECu) [[unlikely]] return; }
L_002C81EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81FCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C81FCu) [[unlikely]] return; }
L_002C81FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C820Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C820Cu) [[unlikely]] return; }
L_002C820C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C821Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C821Cu) [[unlikely]] return; }
L_002C821C:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C822Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C822Cu) [[unlikely]] return; }
L_002C822C:
    c.f[2] = ld32((c.r[20].w[0] + 24u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8258u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x002C8258u) [[unlikely]] return; }
L_002C8258:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8268; } }
L_002C8264:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C8268:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8298:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C84F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C84F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 26688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82DCu);  if (depth < kMaxDepth) unit_0049(c, 273u, depth + 1u); else { c.pc = 0x00227358u; return; } if (c.pc != 0x002C82DCu) [[unlikely]] return; }
L_002C82DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C83BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8300u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002C8300u) [[unlikely]] return; }
L_002C8300:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], 0u + 448u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8328; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[3].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_002C8328:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C8378; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002C8378; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8364; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C835Cu);  if (depth < kMaxDepth) unit_0072(c, 122u, depth + 1u); else { c.pc = 0x002C9570u; return; } if (c.pc != 0x002C835Cu) [[unlikely]] return; }
L_002C835C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8378; } }
L_002C8364:
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8378u);  if (depth < kMaxDepth) unit_0072(c, 120u, depth + 1u); else { c.pc = 0x002C9528u; return; } if (c.pc != 0x002C8378u) [[unlikely]] return; }
L_002C8378:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8390u);  if (depth < kMaxDepth) unit_0008(c, 63u, depth + 1u); else { c.pc = 0x00120BF0u; return; } if (c.pc != 0x002C8390u) [[unlikely]] return; }
L_002C8390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C83BC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83A8u);  if (depth < kMaxDepth) unit_0077(c, 127u, depth + 1u); else { c.pc = 0x002DDE60u; return; } if (c.pc != 0x002C83A8u) [[unlikely]] return; }
L_002C83A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C83BC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_002C83BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 584u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83E8u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x002C83E8u) [[unlikely]] return; }
L_002C83E8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83F4u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C83F4u) [[unlikely]] return; }
L_002C83F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8408u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x002C8408u) [[unlikely]] return; }
L_002C8408:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[16].w[0] + 20304u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C843Cu);  if (depth < kMaxDepth) unit_0072(c, 131u, depth + 1u); else { c.pc = 0x002C9740u; return; } if (c.pc != 0x002C843Cu) [[unlikely]] return; }
L_002C843C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C845C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C845Cu);  if (depth < kMaxDepth) unit_0072(c, 108u, depth + 1u); else { c.pc = 0x002C92A8u; return; } if (c.pc != 0x002C845Cu) [[unlikely]] return; }
L_002C845C:
    c.f[12] = 0u;
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 48u);
    st32((c.r[17].w[0]), 0u);
    c.f[13] = c.f[12];
    st32((c.r[17].w[0] + 4u), 0u);
    c.f[14] = c.f[12];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84ACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C84ACu) [[unlikely]] return; }
L_002C84AC:
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84CCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C84CCu) [[unlikely]] return; }
L_002C84CC:
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C84ECu) [[unlikely]] return; }
L_002C84EC:
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84F8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C84F8u) [[unlikely]] return; }
L_002C84F8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C8618; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C8618; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[20], c.r[3].w[0] + 17552u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    set32(c.r[19], c.r[20].w[0] + 16u);
    st32((c.r[3].w[0] + 17552u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], 0u + 13u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 10;
L_002C8568:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8578u);  if (depth < kMaxDepth) unit_0072(c, 60u, depth + 1u); else { c.pc = 0x002C8898u; return; } if (c.pc != 0x002C8578u) [[unlikely]] return; }
L_002C8578:
    set32(c.r[17], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8568u | kUnwind; return; } goto L_002C8568; } }
    st32((c.r[19].w[0] + 2464u), 0u);
    set32(c.r[2], 0u + 14u);
    st32((c.r[20].w[0] + 2480u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 20048u);
    set32(c.r[19], c.r[2].w[0] + 20304u);
    set32(c.r[17], 0u + 13u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85ACu);  if (depth < kMaxDepth) unit_0071(c, 355u, depth + 1u); else { c.pc = 0x002C7B08u; return; } if (c.pc != 0x002C85ACu) [[unlikely]] return; }
L_002C85AC:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
L_002C85B8:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85C8u);  if (depth < kMaxDepth) unit_0072(c, 108u, depth + 1u); else { c.pc = 0x002C92A8u; return; } if (c.pc != 0x002C85C8u) [[unlikely]] return; }
L_002C85C8:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C85B8u | kUnwind; return; } goto L_002C85B8; } }
    set32(c.r[2], 0u + 14u);
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 448u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 448u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C8618; } }
    c.budget -= 1;
L_002C85F8:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C85F8u | kUnwind; return; } goto L_002C85F8; } }
L_002C8618:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], 0u + 13u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[18].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[20], 0u - 1u);
    c.budget -= 16;
L_002C8680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8690u);  if (depth < kMaxDepth) unit_0072(c, 60u, depth + 1u); else { c.pc = 0x002C8898u; return; } if (c.pc != 0x002C8690u) [[unlikely]] return; }
L_002C8690:
    set32(c.r[16], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8680u | kUnwind; return; } goto L_002C8680; } }
    st32((c.r[19].w[0] + 2464u), 0u);
    set32(c.r[2], 0u + 14u);
    st32((c.r[18].w[0] + 2480u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C86D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 17552u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C86E0:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], 0u + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 17568u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C87C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C87C0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8750u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002C8750u) [[unlikely]] return; }
L_002C8750:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C87AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 448u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8790; } }
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    c.budget -= 4;
L_002C8790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] - 26688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87A4u);  if (depth < kMaxDepth) unit_0049(c, 269u, depth + 1u); else { c.pc = 0x002272B8u; return; } if (c.pc != 0x002C87A4u) [[unlikely]] return; }
L_002C87A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C87BC; } }
L_002C87AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87BCu);  if (depth < kMaxDepth) unit_0072(c, 21u, depth + 1u); else { c.pc = 0x002C8298u; return; } if (c.pc != 0x002C87BCu) [[unlikely]] return; }
L_002C87BC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C87C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C87D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C87F0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20304u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C881Cu);  if (depth < kMaxDepth) unit_0072(c, 117u, depth + 1u); else { c.pc = 0x002C9490u; return; } if (c.pc != 0x002C881Cu) [[unlikely]] return; }
L_002C881C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8848u);  if (depth < kMaxDepth) unit_0072(c, 114u, depth + 1u); else { c.pc = 0x002C93A8u; return; } if (c.pc != 0x002C8848u) [[unlikely]] return; }
L_002C8848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8858:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C887C; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C887C; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C8888; } }
L_002C887C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8888:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8898:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    st32((c.r[16].w[0]), 0u);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0] + 4u), 0u);
    c.f[13] = c.f[20];
    st32((c.r[16].w[0] + 8u), 0u);
    c.f[14] = c.f[20];
    st32((c.r[16].w[0] + 12u), 0u);
    c.f[15] = c.f[21];
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8908u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C8908u) [[unlikely]] return; }
L_002C8908:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8924u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C8924u) [[unlikely]] return; }
L_002C8924:
    c.f[12] = c.f[20];
    c.f[15] = c.f[21];
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8940u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C8940u) [[unlikely]] return; }
L_002C8940:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C894Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C894Cu) [[unlikely]] return; }
L_002C894C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C8998; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8990u);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x00224B28u; return; } if (c.pc != 0x002C8990u) [[unlikely]] return; }
L_002C8990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C89AC; } }
L_002C8998:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C89ACu);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x002C89ACu) [[unlikely]] return; }
L_002C89AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C89C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[20] = 0u;
    c.budget -= 20;
L_002C8A10:
    set32(c.r[7], ld32((c.r[21].w[0] - 344u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8A34u) [[unlikely]] return; }
L_002C8A34:
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A48u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C8A48u) [[unlikely]] return; }
L_002C8A48:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[21]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A5Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C8A5Cu) [[unlikely]] return; }
L_002C8A5C:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[20].w[0] - 16004u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A7Cu);  if (depth < kMaxDepth) unit_008B(c, 108u, depth + 1u); else { c.pc = 0x0032CD48u; return; } if (c.pc != 0x002C8A7Cu) [[unlikely]] return; }
L_002C8A7C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C8A98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8AAC; } }
L_002C8A98:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8A10u | kUnwind; return; } goto L_002C8A10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C8AAC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8AE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8B8C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002C8B8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8B48u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x002C8B48u) [[unlikely]] return; }
L_002C8B48:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], 0u + 268u);
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 14152u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[22].w[0]);
    c.budget -= 17;
L_002C8B8C:
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
L_002C8BB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 404u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8C20; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BF8u);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x002C8BF8u) [[unlikely]] return; }
L_002C8BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8C20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C14u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x002C8C14u) [[unlikely]] return; }
L_002C8C14:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8C24; } }
L_002C8C20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C8C24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8C38:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2464u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C8D34; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], 0u + 448u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 176u);
    c.budget -= 5;
L_002C8C88:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8D1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8D1C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[4], c.r[21].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CB4u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002C8CB4u) [[unlikely]] return; }
L_002C8CB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8D08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8CF0; } }
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    c.budget -= 4;
L_002C8CF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[19].w[0] - 26688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D00u);  if (depth < kMaxDepth) unit_0049(c, 269u, depth + 1u); else { c.pc = 0x002272B8u; return; } if (c.pc != 0x002C8D00u) [[unlikely]] return; }
L_002C8D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8D18; } }
L_002C8D08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D18u);  if (depth < kMaxDepth) unit_0072(c, 21u, depth + 1u); else { c.pc = 0x002C8298u; return; } if (c.pc != 0x002C8D18u) [[unlikely]] return; }
L_002C8D18:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C8D1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    set32(c.r[16], c.r[16].w[0] + 176u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8C88u | kUnwind; return; } goto L_002C8C88; } }
L_002C8D34:
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
L_002C8D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8DB8; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DB0u);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x002C8DB0u) [[unlikely]] return; }
L_002C8DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8DC4; } }
L_002C8DB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8DDC; } }
L_002C8DC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DD8u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x002C8DD8u) [[unlikely]] return; }
L_002C8DD8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002C8DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8E08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[2], 0u + 176u);
    set32(c.r[3], c.r[18].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E08u);  if (depth < kMaxDepth) unit_0071(c, 375u, depth + 1u); else { c.pc = 0x002C7E20u; return; } if (c.pc != 0x002C8E08u) [[unlikely]] return; }
L_002C8E08:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8E28:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_002C8F5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8EB0; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EA8u);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x002C8EA8u) [[unlikely]] return; }
L_002C8EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8EBC; } }
L_002C8EB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8ED4; } }
L_002C8EBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8ED0u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x002C8ED0u) [[unlikely]] return; }
L_002C8ED0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002C8ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8F5C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[3], 0u + 176u);
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8F5C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002C8F5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F18u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x002C8F18u) [[unlikely]] return; }
L_002C8F18:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], 0u + 268u);
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 14152u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[23].w[0]);
    c.budget -= 17;
L_002C8F5C:
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
L_002C8F90:
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 12u), c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9000:
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    set32(c.r[3], 0u + 176u);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 96u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9094u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C9094u) [[unlikely]] return; }
L_002C9094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C90A8:
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    set32(c.r[3], 0u + 176u);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 80u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C913Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C913Cu) [[unlikely]] return; }
L_002C913C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9150:
    st32((c.r[4].w[0]), c.f[12]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.f[13]);
    st32((c.r[4].w[0] + 8u), c.f[14]);
    st32((c.r[4].w[0] + 12u), c.f[15]);
    st32((c.r[4].w[0] + 16u), c.f[16]);
    st32((c.r[4].w[0] + 20u), c.f[17]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9178:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91BCu);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C91BCu) [[unlikely]] return; }
L_002C91BC:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91D8u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C91D8u) [[unlikely]] return; }
L_002C91D8:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91F4u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C91F4u) [[unlikely]] return; }
L_002C91F4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = ld32((c.r[17].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9214u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C9214u) [[unlikely]] return; }
L_002C9214:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9220u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C9220u) [[unlikely]] return; }
L_002C9220:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9234u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x002C9234u) [[unlikely]] return; }
L_002C9234:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9248u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C9248u) [[unlikely]] return; }
L_002C9248:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9264u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C9264u) [[unlikely]] return; }
L_002C9264:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9270u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002C9270u) [[unlikely]] return; }
L_002C9270:
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[18].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C92A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C92E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C92E4u) [[unlikely]] return; }
L_002C92E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C92F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u - 1u);
    c.budget -= 10;
L_002C9320:
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9338u);  if (depth < kMaxDepth) unit_0072(c, 108u, depth + 1u); else { c.pc = 0x002C92A8u; return; } if (c.pc != 0x002C9338u) [[unlikely]] return; }
L_002C9338:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9320u | kUnwind; return; } goto L_002C9320; } }
    set32(c.r[2], 0u + 14u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 448u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 448u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002C9380; } }
    c.budget -= 1;
L_002C9360:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9360u | kUnwind; return; } goto L_002C9360; } }
L_002C9380:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C93A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 17568u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9470; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 448u)));
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9408u);  if (depth < kMaxDepth) unit_0072(c, 131u, depth + 1u); else { c.pc = 0x002C9740u; return; } if (c.pc != 0x002C9408u) [[unlikely]] return; }
L_002C9408:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C9470; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9454u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C9454u) [[unlikely]] return; }
L_002C9454:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002C9470; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9470; } }
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_002C9470:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94D4u);  if (depth < kMaxDepth) unit_0072(c, 131u, depth + 1u); else { c.pc = 0x002C9740u; return; } if (c.pc != 0x002C94D4u) [[unlikely]] return; }
L_002C94D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_002C9504; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94FCu);  if (depth < kMaxDepth) unit_0072(c, 1u, depth + 1u); else { c.pc = 0x002C8000u; return; } if (c.pc != 0x002C94FCu) [[unlikely]] return; }
L_002C94FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9508; } }
L_002C9504:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C9508:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 20u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C955Cu);  if (depth < kMaxDepth) unit_0072(c, 139u, depth + 1u); else { c.pc = 0x002C97E8u; return; } if (c.pc != 0x002C955Cu) [[unlikely]] return; }
L_002C955C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 20u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95B4u);  if (depth < kMaxDepth) unit_0072(c, 139u, depth + 1u); else { c.pc = 0x002C97E8u; return; } if (c.pc != 0x002C95B4u) [[unlikely]] return; }
L_002C95B4:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95ECu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x002C95ECu) [[unlikely]] return; }
L_002C95EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9608:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9660; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9658u);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x002C9658u) [[unlikely]] return; }
L_002C9658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C966C; } }
L_002C9660:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9684; } }
L_002C966C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9680u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x002C9680u) [[unlikely]] return; }
L_002C9680:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002C9684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C96A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[3], 0u + 176u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 7;
L_002C96A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C96C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], 0u + 176u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 2464u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9700u);  if (depth < kMaxDepth) unit_0072(c, 134u, depth + 1u); else { c.pc = 0x002C9780u; return; } if (c.pc != 0x002C9700u) [[unlikely]] return; }
L_002C9700:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 2464u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C9724; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9724u);  if (depth < kMaxDepth) unit_0072(c, 21u, depth + 1u); else { c.pc = 0x002C8298u; return; } if (c.pc != 0x002C9724u) [[unlikely]] return; }
L_002C9724:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9740:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002C9774; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_002C9750:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002C9768; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9768:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9750u | kUnwind; return; } goto L_002C9750; } }
L_002C9774:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9780:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002C97B4; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_002C9790:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002C97A8; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C97A8:
    set32(c.r[4], c.r[4].w[0] + 176u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9790u | kUnwind; return; } goto L_002C9790; } }
L_002C97B4:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C97C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C97D8u);  if (depth < kMaxDepth) unit_0072(c, 37u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002C97D8u) [[unlikely]] return; }
L_002C97D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C97E8:
    set32(c.r[12], 0u + 84u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 416u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 20780u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    set32(c.r[12], c.r[12].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[30].d[0] = c.r[13].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[12].w[0] + 68u)));
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[13].w[0] - 13936u), 0u);
    c.budget -= 33;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C9A28; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002C9884; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C98A8; } }
L_002C9884:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C98A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C98A8; } }
L_002C98A0:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 2;
L_002C98A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98BCu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002C98BCu) [[unlikely]] return; }
L_002C98BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9A28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98D0u);  if (depth < kMaxDepth) unit_0077(c, 173u, depth + 1u); else { c.pc = 0x002DE710u; return; } if (c.pc != 0x002C98D0u) [[unlikely]] return; }
L_002C98D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C9A28; } }
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[2].w[0] - 13932u)));
    st32((c.r[29].w[0] + 96u), c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9964; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9964; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 113u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002C9938:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 268u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 14152u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_002C9964:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9970u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002C9970u) [[unlikely]] return; }
L_002C9970:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[30].w[0] - 13936u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C9A28; } }
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002C99F0; } }
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[17].w[0] + 100u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_002C99F0:
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A08u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002C9A08u) [[unlikely]] return; }
L_002C9A08:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002C9A28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20768u);
    set32(c.r[6], c.r[17].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A28u);  if (depth < kMaxDepth) unit_0008(c, 71u, depth + 1u); else { c.pc = 0x00120CA8u; return; } if (c.pc != 0x002C9A28u) [[unlikely]] return; }
L_002C9A28:
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
L_002C9A60:
    if (::decomp::hook_002C9A60.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_002C9A60, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], c.r[9].w[0] - 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(52ll) ? 1ull : 0ull;
    set32(c.r[22], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA3B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26448u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C9ADC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AECu);  if (depth < kMaxDepth) unit_0077(c, 154u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x002C9AECu) [[unlikely]] return; }
L_002C9AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9AF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B04u);  if (depth < kMaxDepth) unit_0077(c, 154u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x002C9B04u) [[unlikely]] return; }
L_002C9B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9B0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B30u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x002C9B30u) [[unlikely]] return; }
L_002C9B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9B38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B5Cu);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x002C9B5Cu) [[unlikely]] return; }
L_002C9B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9B64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[9], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B88u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x002C9B88u) [[unlikely]] return; }
L_002C9B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9B90:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0]), c.f[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA3B4; } }
    set32(c.r[4], c.r[20].w[0] << 24);
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9BF0u);  if (depth < kMaxDepth) unit_0073(c, 170u, depth + 1u); else { c.pc = 0x002CE8E0u; return; } if (c.pc != 0x002C9BF0u) [[unlikely]] return; }
L_002C9BF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C00u);  if (depth < kMaxDepth) unit_0077(c, 122u, depth + 1u); else { c.pc = 0x002DDD60u; return; } if (c.pc != 0x002C9C00u) [[unlikely]] return; }
L_002C9C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9C08:
    st32((c.r[17].w[0] + 128u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9C14:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9C20:
    st16((c.r[16].w[0] + 134u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st16((c.r[16].w[0] + 132u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9C30:
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9C48:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002C9C7C; } }
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[21].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9CDC; } }
L_002C9C7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9CB4; } }
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[21].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9CDC; } }
L_002C9CB4:
    set32(c.r[2], 0u - c.r[21].w[0]);
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 10;
L_002C9CDC:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9CF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D0Cu);  if (depth < kMaxDepth) unit_0077(c, 177u, depth + 1u); else { c.pc = 0x002DE7B8u; return; } if (c.pc != 0x002C9D0Cu) [[unlikely]] return; }
L_002C9D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9D14:
    set32(c.r[17], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D20u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C9D20u) [[unlikely]] return; }
L_002C9D20:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C9D98; } }
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9D98; } }
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D60u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x002C9D60u) [[unlikely]] return; }
L_002C9D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9DF4; } }
L_002C9D70:
    set32(c.r[17], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D7Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002C9D7Cu) [[unlikely]] return; }
L_002C9D7C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C9D98; } }
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9DB8; } }
L_002C9D98:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8960u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9E04; } }
L_002C9DB8:
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9DDCu);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x002C9DDCu) [[unlikely]] return; }
L_002C9DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9DF4; } }
L_002C9DE4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9E04; } }
L_002C9DF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002C9E04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C9E04:
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9E18:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 216u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 204u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 212u), c.r[22].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E3Cu);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x002C9E3Cu) [[unlikely]] return; }
L_002C9E3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E50u);  if (depth < kMaxDepth) unit_0072(c, 56u, depth + 1u); else { c.pc = 0x002C8830u; return; } if (c.pc != 0x002C9E50u) [[unlikely]] return; }
L_002C9E50:
    st32((c.r[16].w[0] + 220u), c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E64u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x002C9E64u) [[unlikely]] return; }
L_002C9E64:
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 32u)));
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9EAC; } }
L_002C9E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E90u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x002C9E90u) [[unlikely]] return; }
L_002C9E90:
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 40u)));
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 44u)));
    c.budget -= 7;
L_002C9EAC:
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9EB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9EB8u) [[unlikely]] return; }
L_002C9EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9EC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9EE4u);  if (depth < kMaxDepth) unit_0072(c, 236u, depth + 1u); else { c.pc = 0x002CB010u; return; } if (c.pc != 0x002C9EE4u) [[unlikely]] return; }
L_002C9EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9EEC:
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F1Cu);  if (depth < kMaxDepth) unit_0077(c, 121u, depth + 1u); else { c.pc = 0x002DDD30u; return; } if (c.pc != 0x002C9F1Cu) [[unlikely]] return; }
L_002C9F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9F24:
    c.f[3] = c.r[18].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[21].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9F70:
    st32((c.r[17].w[0] + 32u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[22].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9F84:
    c.f[3] = c.r[18].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = c.r[22].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 48u), c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002C9FF4:
    c.f[3] = c.r[18].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = c.r[22].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 76u), c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 64u), c.f[3]);
    st32((c.r[17].w[0] + 68u), c.f[2]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA064:
    st32((c.r[17].w[0] + 92u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA07C:
    c.f[3] = c.r[18].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[22].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[17].w[0] + 96u), c.r[20].w[0]);
    c.f[1] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[3]);
    st32((c.r[17].w[0] + 112u), c.f[2]);
    st32((c.r[17].w[0] + 120u), c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA0CC:
    c.f[3] = c.r[18].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[22].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[17].w[0] + 100u), c.r[20].w[0]);
    c.f[1] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[3]);
    st32((c.r[17].w[0] + 116u), c.f[2]);
    st32((c.r[17].w[0] + 124u), c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA11C:
    c.f[0] = c.r[22].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA14Cu);  if (depth < kMaxDepth) unit_0077(c, 176u, depth + 1u); else { c.pc = 0x002DE798u; return; } if (c.pc != 0x002CA14Cu) [[unlikely]] return; }
L_002CA14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA154:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA168u);  if (depth < kMaxDepth) unit_0073(c, 165u, depth + 1u); else { c.pc = 0x002CE800u; return; } if (c.pc != 0x002CA168u) [[unlikely]] return; }
L_002CA168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA170:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002CA188; } }
    set32(c.r[2], c.r[16].w[0] + 136u);
    st32((c.r[2].w[0] + 36u), c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA1B0; } }
L_002CA188:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA1A4; } }
    set32(c.r[2], c.r[16].w[0] + 136u);
    st32((c.r[2].w[0] + 36u), c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA1B0; } }
L_002CA1A4:
    set32(c.r[2], c.r[16].w[0] + 136u);
    set32(c.r[3], 0u - c.r[21].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_002CA1B0:
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA1C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[4].w[0] - 4576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1D0u);  if (depth < kMaxDepth) unit_0078(c, 63u, depth + 1u); else { c.pc = 0x002E0A98u; return; } if (c.pc != 0x002CA1D0u) [[unlikely]] return; }
L_002CA1D0:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA1DC:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[16].w[0] + 232u));
    c.r[2].d[0] = c.r[3].d[0] << 8;
    c.r[6].d[0] = c.r[21].d[0] << 40;
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 24;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 232u), c.r[5].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA220:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 232u));
    c.r[2].d[0] = c.r[4].d[0] << 8;
    c.r[6].d[0] = c.r[21].d[0] << 40;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 24;
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 232u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA264:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 232u));
    c.r[2].d[0] = c.r[4].d[0] << 8;
    c.r[6].d[0] = c.r[21].d[0] << 40;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 24;
    set32(c.r[5], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 232u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA2A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 232u));
    c.r[2].d[0] = c.r[4].d[0] << 8;
    c.r[6].d[0] = c.r[21].d[0] << 40;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 24;
    set32(c.r[5], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 232u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA2EC:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 5u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 128u), c.r[21].w[0]);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[20].d[0];
    st32((c.r[16].w[0] + 120u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[22].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA314:
    set32(c.r[6], ld32((c.r[16].w[0] + 252u)));
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA3B4; } }
    set32(c.r[2], 0u + 10u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 256u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[4].w[0] + 258u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[5].w[0] + 260u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[2].w[0] + 262u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st32((c.r[16].w[0] + 252u), c.r[6].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA35C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA384u);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC4E8u; return; } if (c.pc != 0x002CA384u) [[unlikely]] return; }
L_002CA384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B4; } }
L_002CA38C:
    set32(c.r[2], c.r[22].w[0] << 16);
    st8((c.r[16].w[0] + 228u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3B0; } }
L_002CA3A0:
    set32(c.r[2], c.r[22].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    st8((c.r[16].w[0] + 228u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002CA3B0:
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 1;
L_002CA3B4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA3E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[2], ld32((c.r[21].w[0] + 152u)));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002CA55C; } }
    set32(c.r[19], c.r[21].w[0] + 156u);
    c.budget -= 1;
L_002CA430:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CA53C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002CA53C; } }
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[9], 0u + 2u);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    st32((c.r[29].w[0]), c.f[3]);
    c.r[10].d[0] = 0ull + 0ull;
    c.f[2] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[20] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4E8u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x002CA4E8u) [[unlikely]] return; }
L_002CA4E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[20]);
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA530u);  if (depth < kMaxDepth) unit_0074(c, 148u, depth + 1u); else { c.pc = 0x002D1AF8u; return; } if (c.pc != 0x002CA530u) [[unlikely]] return; }
L_002CA530:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA544; } }
L_002CA53C:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_002CA544:
    set32(c.r[2], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA430u | kUnwind; return; } goto L_002CA430; } }
L_002CA55C:
    set32(c.r[3], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st32((c.r[21].w[0] + 152u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA5A0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st128((c.r[29].w[0] + 944u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 1008u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[20].d[0] & 127ull;
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 928u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 852u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[17]);
    set32(c.r[23], 0u - 1u);
    st128((c.r[29].w[0] + 960u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[21].sd[0] < 256ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 864u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1040u), c.f[22]);
    st32((c.r[29].w[0] + 1032u), c.f[21]);
    st32((c.r[29].w[0] + 1024u), c.f[20]);
    st32((c.r[29].w[0] + 848u), c.r[7].w[0]);
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[30]);
    set32(c.r[30], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA660; } }
    c.r[2].d[0] = c.r[20].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA624; } }
    set32(c.r[30], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA644; } }
L_002CA624:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_002CA63C; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA644; } }
L_002CA63C:
    c.r[2].d[0] = c.r[9].d[0] ^ 3ull;
    if (c.r[2].d[0] == 0) c.r[30].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_002CA644:
    set32(c.r[5], ld32((c.r[29].w[0] + 852u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA658u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CA658u) [[unlikely]] return; }
L_002CA658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA66C; } }
L_002CA660:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAFCC; } }
L_002CA66C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CA688; } }
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA68C; } }
L_002CA688:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002CA68C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA698u);  if (depth < kMaxDepth) unit_0077(c, 173u, depth + 1u); else { c.pc = 0x002DE710u; return; } if (c.pc != 0x002CA698u) [[unlikely]] return; }
L_002CA698:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA660u | kUnwind; return; } goto L_002CA660; } }
    st32((c.r[19].w[0] + 40u), c.r[17].w[0]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[19].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[5].d[0];  if (t) { goto L_002CA6C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14688u)));
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_002CA6C4:
    c.r[2].d[0] = c.r[20].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA718; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8954u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002CA6FC; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 12816u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA660u | kUnwind; return; } goto L_002CA660; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA708; } }
L_002CA6FC:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
L_002CA708:
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA71C; } }
L_002CA718:
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002CA71C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA660u | kUnwind; return; } goto L_002CA660; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { goto L_002CA73C; } }
    set32(c.r[23], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA804; } }
L_002CA73C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CA79C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6624u);
    set32(c.r[17], c.r[17].w[0] + 14208u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA77Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CA77Cu) [[unlikely]] return; }
L_002CA77C:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA804; } }
L_002CA79C:
    st32((c.r[29].w[0] + 256u), 0u);
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 264u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 113u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA7CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002CA7CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA800u);  if (depth < kMaxDepth) unit_0048(c, 165u, depth + 1u); else { c.pc = 0x002223E0u; return; } if (c.pc != 0x002CA800u) [[unlikely]] return; }
L_002CA800:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002CA804:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] < 0;  if (t) { goto L_002CA818; } }
    c.r[2].d[0] = c.r[20].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA82C; } }
L_002CA818:
    set32(c.r[2], 0u - 2u);
    st32((c.r[29].w[0] + 96u), 0u);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA834; } }
L_002CA82C:
    st32((c.r[29].w[0] + 96u), c.r[17].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.budget -= 2;
L_002CA834:
    c.r[2].d[0] = c.r[20].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA858; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57343ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
L_002CA858:
    c.r[2].d[0] = c.r[20].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA874; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
L_002CA874:
    c.r[3].d[0] = c.r[20].d[0] & 384ull;
    set32(c.r[2], 0u + 384u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CA974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] - 17692u));
    set32(c.r[3], 0u + 255u);
    c.f[6] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[9] = ld32((c.r[18].w[0] + 20u));
    c.f[7] = ld32((c.r[18].w[0] + 24u));
    c.f[8] = ld32((c.r[18].w[0] + 28u));
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[3] = ld32((c.r[29].w[0] + 260u));
    c.f[4] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[5] = ld32((c.r[29].w[0] + 268u));
    c.f[3] = fp::add(c.f[3], c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[7]);
    c.f[5] = fp::add(c.f[5], c.f[8]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 264u), c.f[4]);
    c.f[22] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 268u), c.f[5]);
    c.budget -= 31;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002CA960; } }
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA90Cu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CA90Cu) [[unlikely]] return; }
L_002CA90C:
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[12] = c.f[22];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA920u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CA920u) [[unlikely]] return; }
L_002CA920:
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = c.f[22];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA938u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CA938u) [[unlikely]] return; }
L_002CA938:
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = c.f[22];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA94Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CA94Cu) [[unlikely]] return; }
L_002CA94C:
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 256u), c.f[21]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[20]);
    c.budget -= 5;
L_002CA960:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAABC; } }
L_002CA974:
    c.r[2].d[0] = c.r[20].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAA60; } }
    c.f[1] = ld32((c.r[22].w[0] + 148u));
    set32(c.r[2], 0u + 255u);
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.f[9] = ld32((c.r[18].w[0] + 20u));
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    c.f[4] = ld32((c.r[18].w[0] + 28u));
    c.f[5] = ld32((c.r[29].w[0] + 256u));
    c.f[6] = ld32((c.r[29].w[0] + 260u));
    c.f[7] = ld32((c.r[29].w[0] + 264u));
    c.f[5] = fp::add(c.f[5], c.f[2]);
    c.f[8] = ld32((c.r[29].w[0] + 268u));
    c.f[6] = fp::add(c.f[6], c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[7] = fp::add(c.f[7], c.f[3]);
    c.f[8] = fp::add(c.f[8], c.f[4]);
    st32((c.r[29].w[0] + 256u), c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 264u), c.f[7]);
    c.f[22] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 268u), c.f[8]);
    c.budget -= 27;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002CAA4C; } }
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9F8u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CA9F8u) [[unlikely]] return; }
L_002CA9F8:
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[12] = c.f[22];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA0Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CAA0Cu) [[unlikely]] return; }
L_002CAA0C:
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = c.f[22];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA24u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CAA24u) [[unlikely]] return; }
L_002CAA24:
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = c.f[22];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA38u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CAA38u) [[unlikely]] return; }
L_002CAA38:
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 256u), c.f[21]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[20]);
    c.budget -= 5;
L_002CAA4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAABC; } }
L_002CAA60:
    c.r[2].d[0] = c.r[20].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAAC0; } }
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.f[5] = ld32((c.r[18].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[6] = ld32((c.r[18].w[0] + 24u));
    c.f[7] = ld32((c.r[18].w[0] + 28u));
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    c.f[4] = ld32((c.r[29].w[0] + 260u));
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 268u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.f[1] = fp::add(c.f[1], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[7]);
    st32((c.r[29].w[0] + 256u), c.f[3]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 260u), c.f[4]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[2]);
    c.budget -= 20;
L_002CAABC:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_002CAAC0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAB54; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAB04; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CAAF8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAB00; } }
L_002CAAF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 2;
L_002CAB00:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_002CAB04:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 132u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAB40; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CAB34; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAB3C; } }
L_002CAB34:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 2;
L_002CAB3C:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_002CAB40:
    c.r[2].d[0] = ld16((c.r[22].w[0] + 36u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 134u));
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 132u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_002CAB54:
    set32(c.r[2], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CABEC; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 232u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAB80; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 236u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
L_002CAB80:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 232u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CABA4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 5;
L_002CABA4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 232u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CABC4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 244u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_002CABC4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 232u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CABE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 5;
L_002CABE8:
    st32((c.r[18].w[0] + 232u), 0u);
    c.budget -= 1;
L_002CABEC:
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC10u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002CAC10u) [[unlikely]] return; }
L_002CAC10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CAFC8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 848u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[23].w[0]);
    st32((c.r[19].w[0] + 80u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 14;
    { const bool t = c.r[23].sd[0] >= 0;  if (t) { goto L_002CAC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 6624u);
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 400u), c.f[0]);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CACA0; } }
L_002CAC7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACA0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CACA0u) [[unlikely]] return; }
L_002CACA0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 132u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CACBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[0] = ld32((c.r[2].w[0] - 6492u));
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.budget -= 3;
L_002CACBC:
    c.r[2].d[0] = c.r[20].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAD44; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CACE8; } }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAD0C; } }
L_002CACE8:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.f[1] = ld32((c.r[29].w[0] + 404u));
    c.f[2] = ld32((c.r[29].w[0] + 408u));
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    c.f[4] = ld32((c.r[29].w[0] + 260u));
    c.f[5] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.budget -= 9;
L_002CAD0C:
    st32((c.r[29].w[0] + 400u), c.f[0]);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[2]);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    c.f[13] = ld32((c.r[29].w[0] + 404u));
    c.f[14] = ld32((c.r[29].w[0] + 408u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD3Cu);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002CAD3Cu) [[unlikely]] return; }
L_002CAD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAD90; } }
L_002CAD44:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CAD80; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + 112u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAD90; } }
L_002CAD80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CAD90; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_002CAD90:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] >= 0;  if (t) { goto L_002CADB0; } }
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[13] = ld32((c.r[29].w[0] + 404u));
    c.f[14] = ld32((c.r[29].w[0] + 408u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADB0u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002CADB0u) [[unlikely]] return; }
L_002CADB0:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.r[3].d[0] = c.r[20].d[0] & 4096ull;
    c.f[1] = ld32((c.r[29].w[0] + 404u));
    c.f[2] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[29].w[0] + 816u), c.f[0]);
    st32((c.r[29].w[0] + 820u), c.f[1]);
    st32((c.r[29].w[0] + 824u), c.f[2]);
    st32((c.r[29].w[0] + 828u), 0u);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 800u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 804u));
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 808u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 812u));
    st32((c.r[19].w[0] + 60u), c.f[1]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CAE10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 4;
L_002CAE10:
    c.r[2].d[0] = c.r[20].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAFA8; } }
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[6], c.r[29].w[0] + 816u);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 832u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 832u);
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    st32((c.r[29].w[0] + 836u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    st32((c.r[29].w[0] + 840u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[29].w[0] + 844u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE54u);  if (depth < kMaxDepth) unit_0073(c, 161u, depth + 1u); else { c.pc = 0x002CE758u; return; } if (c.pc != 0x002CAE54u) [[unlikely]] return; }
L_002CAE54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CAE8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAEDC; } }
L_002CAE8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CAEDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CAEDC; } }
    c.f[0] = ld32((c.r[29].w[0] + 816u));
    c.f[1] = ld32((c.r[29].w[0] + 824u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 816u), c.f[0]);
    st32((c.r[29].w[0] + 824u), c.f[1]);
    c.budget -= 6;
L_002CAEDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[2], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF00u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CAF00u) [[unlikely]] return; }
L_002CAF00:
    c.f[1] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 820u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 828u), c.f[2]);
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CAF4C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CAF98; } }
L_002CAF4C:
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CAF78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CAF90; } }
L_002CAF78:
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 816u), c.f[0]);
    st32((c.r[29].w[0] + 824u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAF98; } }
L_002CAF90:
    c.f[0] = fp::add(c.f[1], c.f[1]);
    st32((c.r[29].w[0] + 820u), c.f[0]);
    c.budget -= 2;
L_002CAF98:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFA8u);  if (depth < kMaxDepth) unit_0075(c, 172u, depth + 1u); else { c.pc = 0x002D74A0u; return; } if (c.pc != 0x002CAFA8u) [[unlikely]] return; }
L_002CAFA8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_002CAFC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 852u)));
    set32(c.r[4], c.r[4].w[0] - 20768u);
    set32(c.r[6], c.r[16].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFC8u);  if (depth < kMaxDepth) unit_0008(c, 71u, depth + 1u); else { c.pc = 0x00120CA8u; return; } if (c.pc != 0x002CAFC8u) [[unlikely]] return; }
L_002CAFC8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002CAFCC:
    ld128((c.r[29].w[0] + 1008u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 976u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 960u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 944u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 928u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 864u));
    c.f[22] = ld32((c.r[29].w[0] + 1040u));
    c.f[21] = ld32((c.r[29].w[0] + 1032u));
    c.f[20] = ld32((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1056u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CB010:
    set32(c.r[29], c.r[29].w[0] - 736u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[30]);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 568u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 255u);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 576u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 560u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 564u), c.r[10].w[0]);
    c.budget -= 24;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CB084; } }
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 568u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 572u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB08C; } }
L_002CB084:
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 572u), c.r[6].w[0]);
    c.budget -= 2;
L_002CB08C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB098u);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DD4F0u; return; } if (c.pc != 0x002CB098u) [[unlikely]] return; }
L_002CB098:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002CB0B0; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002CB0BC; } }
L_002CB0B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB4CC; } }
L_002CB0BC:
    c.r[2].d[0] = c.r[19].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB0D4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0D4u);  if (depth < kMaxDepth) unit_0073(c, 168u, depth + 1u); else { c.pc = 0x002CE880u; return; } if (c.pc != 0x002CB0D4u) [[unlikely]] return; }
L_002CB0D4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0E0u);  if (depth < kMaxDepth) unit_0073(c, 172u, depth + 1u); else { c.pc = 0x002CE9A8u; return; } if (c.pc != 0x002CB0E0u) [[unlikely]] return; }
L_002CB0E0:
    set32(c.r[4], 0u + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 20768u);
    c.r[5].d[0] = c.r[19].d[0] & 31ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CB150; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB150; } }
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB140u);  if (depth < kMaxDepth) unit_0056(c, 332u, depth + 1u); else { c.pc = 0x0025B7F0u; return; } if (c.pc != 0x002CB140u) [[unlikely]] return; }
L_002CB140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB14Cu);  if (depth < kMaxDepth) unit_0049(c, 247u, depth + 1u); else { c.pc = 0x00226F30u; return; } if (c.pc != 0x002CB14Cu) [[unlikely]] return; }
L_002CB14C:
    st32((c.r[17].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 1;
L_002CB150:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB164u);  if (depth < kMaxDepth) unit_0077(c, 59u, depth + 1u); else { c.pc = 0x002DCC10u; return; } if (c.pc != 0x002CB164u) [[unlikely]] return; }
L_002CB164:
    c.r[2].d[0] = c.r[19].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB198; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 104u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB19C; } }
L_002CB198:
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002CB19C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CB1B4; } }
    c.r[19].d[0] = c.r[19].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB20C; } }
L_002CB1B4:
    st32((c.r[29].w[0]), 0u);
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB1E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002CB1E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 268u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[23], ld32((c.r[3].w[0])));
    c.budget -= 10;
L_002CB20C:
    c.r[2].d[0] = c.r[19].d[0] & 512ull;
    c.r[3].d[0] = c.r[19].d[0] | 128ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[19].d[0] & 2176ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CB234; } }
    st32((c.r[17].w[0] + 484u), 0u);
    st32((c.r[17].w[0] + 292u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB23C; } }
L_002CB234:
    st32((c.r[17].w[0] + 484u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 292u), c.r[23].w[0]);
    c.budget -= 2;
L_002CB23C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CB290; } }
    c.f[2] = ld32((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[2]);
    set32(c.r[6], ld32((c.r[29].w[0] + 568u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB288u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CB288u) [[unlikely]] return; }
L_002CB288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB2CC; } }
L_002CB290:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[9], c.f[0]);
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2CCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CB2CCu) [[unlikely]] return; }
L_002CB2CC:
    c.r[2].d[0] = c.r[19].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB2E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2E4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002CB2E4u) [[unlikely]] return; }
L_002CB2E4:
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002CB2E8:
    c.r[2].d[0] = c.r[19].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB360; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002CB360; } }
    set32(c.r[16], c.r[29].w[0] + 544u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB314u);  if (depth < kMaxDepth) unit_0073(c, 158u, depth + 1u); else { c.pc = 0x002CE6A0u; return; } if (c.pc != 0x002CB314u) [[unlikely]] return; }
L_002CB314:
    c.f[12] = c.r[30].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB330u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002CB330u) [[unlikely]] return; }
L_002CB330:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[3] = ld32((c.r[29].w[0] + 544u));
    c.f[4] = ld32((c.r[29].w[0] + 548u));
    c.f[5] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    c.budget -= 12;
L_002CB360:
    set32(c.r[2], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB42C; } }
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB42C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == c.r[4].d[0];  if (t) { goto L_002CB42C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.f[1] = ld32((c.r[17].w[0] + 280u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    st32((c.r[17].w[0] + 160u), c.f[2]);
    st32((c.r[17].w[0] + 280u), c.f[1]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB400; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.budget -= 6;
L_002CB400:
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB42C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.budget -= 6;
L_002CB42C:
    c.r[2].d[0] = c.r[19].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB45C; } }
    c.f[0] = ld32((c.r[22].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 9;
L_002CB45C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002CB46C; } }
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_002CB46C:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[19].d[0] & 2048ull;
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    set32(c.r[4], ld32((c.r[29].w[0] + 564u)));
    st32((c.r[20].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 572u)));
    st32((c.r[20].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 560u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB4C4; } }
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 292u), c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB4C8; } }
L_002CB4C4:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 1;
L_002CB4C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CB4CC:
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 576u));
    set32(c.r[29], c.r[29].w[0] + 736u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CB500:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB534u);  if (depth < kMaxDepth) unit_0077(c, 173u, depth + 1u); else { c.pc = 0x002DE710u; return; } if (c.pc != 0x002CB534u) [[unlikely]] return; }
L_002CB534:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CB56C; } }
    c.r[5].d[0] = c.r[17].d[0] & 127ull;
    c.r[2].d[0] = c.r[17].d[0] & 16384ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB558; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002CB558:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB564u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CB564u) [[unlikely]] return; }
L_002CB564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB578; } }
L_002CB56C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB620; } }
L_002CB578:
    set32(c.r[3], 0u - 2u);
    st32((c.r[29].w[0] + 96u), 0u);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB5A8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57343ull;
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
L_002CB5A8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5B4u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002CB5B4u) [[unlikely]] return; }
L_002CB5B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CB5FC; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB620; } }
L_002CB5FC:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 22052u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 22052u), c.r[4].w[0]);
    c.budget -= 9;
L_002CB620:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CB648:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 22;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    if (c.r[3].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB69Cu);  if (depth < kMaxDepth) unit_0083(c, 60u, depth + 1u); else { c.pc = 0x0030C840u; return; } if (c.pc != 0x002CB69Cu) [[unlikely]] return; }
L_002CB69C:
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CB6BC; } }
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 1;
L_002CB6BC:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CB6D8; } }
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 2;
L_002CB6D8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[23], 0u + 13248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6F0u);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9348u; return; } if (c.pc != 0x002CB6F0u) [[unlikely]] return; }
L_002CB6F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 404u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[30], c.r[2].w[0] + 13248u);
    set32(c.r[21], c.r[5].w[0] - 6080u);
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
L_002CB718:
    mmi::mult(c, 0, c.r[19].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB738; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002CB738:
    set32(c.r[20], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CB8AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 404u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002CB8AC; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[30].w[0] - 13248u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB76Cu);  if (depth < kMaxDepth) unit_0036(c, 442u, depth + 1u); else { c.pc = 0x001DB538u; return; } if (c.pc != 0x002CB76Cu) [[unlikely]] return; }
L_002CB76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB78C; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], 0u + 484u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CB8AC; } }
L_002CB78C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7B0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CB7B0u) [[unlikely]] return; }
L_002CB7B0:
    c.f[0] = ld32((c.r[21].w[0] + 128u));
    c.f[6] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = fp::sub(c.f[6], c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 132u));
    c.f[5] = ld32((c.r[21].w[0] + 136u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = c.f[1] & fp::kAbs;
    st32((c.r[29].w[0] + 4u), c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB8AC; } }
    c.f[4] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB8AC; } }
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::sub(c.f[2], c.f[5]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB8AC; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 25;
    st32((c.r[17].w[0] + 112u), c.f[6]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 116u), c.f[4]);
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    st32((c.r[17].w[0] + 120u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB854u);  if (depth < kMaxDepth) unit_0084(c, 93u, depth + 1u); else { c.pc = 0x003118A0u; return; } if (c.pc != 0x002CB854u) [[unlikely]] return; }
L_002CB854:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB864u);  if (depth < kMaxDepth) unit_0084(c, 92u, depth + 1u); else { c.pc = 0x00311850u; return; } if (c.pc != 0x002CB864u) [[unlikely]] return; }
L_002CB864:
    set32(c.r[2], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB87C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB87Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB87Cu) [[unlikely]] return; }
L_002CB87C:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002CB8AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB894u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002CB894u) [[unlikely]] return; }
L_002CB894:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8ACu);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002CB8ACu) [[unlikely]] return; }
L_002CB8AC:
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB718u | kUnwind; return; } goto L_002CB718; } }
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
L_002CB8F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
L_002CB920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 13248u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002CBA44; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB95Cu);  if (depth < kMaxDepth) unit_0008(c, 63u, depth + 1u); else { c.pc = 0x00120BF0u; return; } if (c.pc != 0x002CB95Cu) [[unlikely]] return; }
L_002CB95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBA44; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB970u);  if (depth < kMaxDepth) unit_0077(c, 124u, depth + 1u); else { c.pc = 0x002DDDA8u; return; } if (c.pc != 0x002CB970u) [[unlikely]] return; }
L_002CB970:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB980u);  if (depth < kMaxDepth) unit_0008(c, 62u, depth + 1u); else { c.pc = 0x00120BD0u; return; } if (c.pc != 0x002CB980u) [[unlikely]] return; }
L_002CB980:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002CBA44; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 68u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002CBA44; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_002CBA44; } }
    c.r[23].d[0] = 0ull | 32768ull;
    c.r[23].d[0] = c.r[23].d[0] << 22;
    c.r[22].d[0] = 0ull | 32768ull;
    c.r[22].d[0] = c.r[22].d[0] << 23;
    c.r[21].d[0] = 0ull | 32768ull;
    c.r[21].d[0] = c.r[21].d[0] << 25;
    c.budget -= 6;
L_002CB9C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBA24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBA24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBA24; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 176u));
    c.r[5].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CBA14; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBA24; } }
L_002CBA14:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002CBA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA24u);  if (depth < kMaxDepth) unit_0072(c, 252u, depth + 1u); else { c.pc = 0x002CB648u; return; } if (c.pc != 0x002CBA24u) [[unlikely]] return; }
L_002CBA24:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 96u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBA44; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB9C8u | kUnwind; return; } goto L_002CB9C8; } }
L_002CBA44:
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB920u | kUnwind; return; } goto L_002CB920; } }
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
L_002CBA88:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CBD34; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002CBD34; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 68u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002CBD1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[21], c.r[2].w[0] + 14664u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[30], 0u + 5u);
    c.budget -= 5;
L_002CBAF8:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBB28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CBB28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002CBB28; } }
    st32((c.r[16].w[0] + 16u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 2;
L_002CBB28:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002CBCE0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBC20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB5Cu);  if (depth < kMaxDepth) unit_0075(c, 174u, depth + 1u); else { c.pc = 0x002D74C8u; return; } if (c.pc != 0x002CBB5Cu) [[unlikely]] return; }
L_002CBB5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002CBB8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB84u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002CBB84u) [[unlikely]] return; }
L_002CBB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBC08; } }
L_002CBB8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002CBBCC; } }
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[12]);
    c.f[13] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[29].w[0] + 20u), c.f[13]);
    c.f[14] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[29].w[0] + 24u), c.f[14]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBC4u);  if (depth < kMaxDepth) unit_0075(c, 177u, depth + 1u); else { c.pc = 0x002D7518u; return; } if (c.pc != 0x002CBBC4u) [[unlikely]] return; }
L_002CBBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBC08; } }
L_002CBBCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002CBC08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBC08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBC00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[2].w[0] + 348u), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBC08; } }
L_002CBC00:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[2].w[0] + 348u), 0u);
    c.budget -= 2;
L_002CBC08:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBC20; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBC24; } }
L_002CBC20:
    st32((c.r[16].w[0] + 24u), c.r[20].w[0]);
    c.budget -= 1;
L_002CBC24:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBC80; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBD04; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC50u);  if (depth < kMaxDepth) unit_0077(c, 138u, depth + 1u); else { c.pc = 0x002DDF80u; return; } if (c.pc != 0x002CBC50u) [[unlikely]] return; }
L_002CBC50:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC60u);  if (depth < kMaxDepth) unit_0075(c, 182u, depth + 1u); else { c.pc = 0x002D75E0u; return; } if (c.pc != 0x002CBC60u) [[unlikely]] return; }
L_002CBC60:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[23].w[0] + 22052u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[23].w[0] + 22052u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBD04; } }
L_002CBC80:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 6789u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CBC9C; } }
    st32((c.r[16].w[0] + 16u), c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBCA8; } }
L_002CBC9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_002CBCA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002CBD04; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBD04; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBD04; } }
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBD04; } }
L_002CBCE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBD04; } }
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCFCu);  if (depth < kMaxDepth) unit_0075(c, 182u, depth + 1u); else { c.pc = 0x002D75E0u; return; } if (c.pc != 0x002CBCFCu) [[unlikely]] return; }
L_002CBCFC:
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 2;
L_002CBD04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 96u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CBAF8u | kUnwind; return; } goto L_002CBAF8; } }
L_002CBD1C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002CBD34; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD34u);  if (depth < kMaxDepth) unit_0077(c, 154u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x002CBD34u) [[unlikely]] return; }
L_002CBD34:
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
L_002CBD68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CBE4C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBD94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD94u);  if (depth < kMaxDepth) unit_0072(c, 279u, depth + 1u); else { c.pc = 0x002CBD68u; return; } if (c.pc != 0x002CBD94u) [[unlikely]] return; }
L_002CBD94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 7;
    c.r[3].d[0] = c.r[3].d[0] | 127ull;
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 8;
    c.r[4].d[0] = c.r[4].d[0] | 255ull;
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[3] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 176u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 268u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st64((c.r[16].w[0] + 176u), c.r[2].d[0]);
    st32((c.r[16].w[0] + 72u), c.f[3]);
    st32((c.r[16].w[0] + 496u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 29;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CBE28; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[5].w[0] + 88u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 176u));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002CBE28; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_002CBE28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBE4C; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 176u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002CBE4C; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_002CBE4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CBE60:
    set32(c.r[29], c.r[29].w[0] - 464u);
    set32(c.r[2], 0u + 13248u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 14208u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[19]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 448u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 404u)));
    c.r[6].d[0] = ld64((c.r[18].w[0] + 176u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[2].d[0] = c.r[2].d[0] | 63ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[7], ld32((c.r[18].w[0] + 272u)));
    st64((c.r[18].w[0] + 176u), c.r[6].d[0]);
    set32(c.r[23], c.r[23].w[0] + 3u);
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[7].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[7].w[0] + 72u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[7].w[0] + 76u), c.f[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 388u)));
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 160u), 0u);
    st32((c.r[18].w[0] + 208u), 0u);
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF20u);  if (depth < kMaxDepth) unit_0072(c, 279u, depth + 1u); else { c.pc = 0x002CBD68u; return; } if (c.pc != 0x002CBF20u) [[unlikely]] return; }
L_002CBF20:
    set32(c.r[2], ld32((c.r[18].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0073(c, 8u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[21], c.r[29].w[0] + 16u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002CBF40:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.f[12] = 0u;
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 308u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].d[0] ^ 3ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[23].d[0];
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 310u)));
    c.f[14] = c.f[12];
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 314u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF80u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002CBF80u) [[unlikely]] return; }
L_002CBF80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF94u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CBF94u) [[unlikely]] return; }
L_002CBF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 7u, depth); } }
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[1] = c.f[1] & fp::kAbs;
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CBFFC; } }
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CBFFC; } }
    st32((c.r[21].w[0] + 188u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 2u, depth); } }
L_002CBFFC:
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0073(c, 1u, depth);
}

}
