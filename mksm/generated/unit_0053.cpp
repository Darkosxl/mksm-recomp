#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0024C238;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0053[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0,
    115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0,
    0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0,
    0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0,
    273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0053(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0024C000;
    case 2u: goto L_0024C008;
    case 3u: goto L_0024C0E8;
    case 4u: goto L_0024C104;
    case 5u: goto L_0024C114;
    case 6u: goto L_0024C168;
    case 7u: goto L_0024C1F8;
    case 8u: goto L_0024C20C;
    case 9u: goto L_0024C228;
    case 10u: goto L_0024C238;
    case 11u: goto L_0024C280;
    case 12u: goto L_0024C290;
    case 13u: goto L_0024C2A8;
    case 14u: goto L_0024C2B0;
    case 15u: goto L_0024C2C0;
    case 16u: goto L_0024C2E0;
    case 17u: goto L_0024C358;
    case 18u: goto L_0024C378;
    case 19u: goto L_0024C39C;
    case 20u: goto L_0024C3B0;
    case 21u: goto L_0024C3C0;
    case 22u: goto L_0024C4E8;
    case 23u: goto L_0024C508;
    case 24u: goto L_0024C568;
    case 25u: goto L_0024C578;
    case 26u: goto L_0024C5D0;
    case 27u: goto L_0024C618;
    case 28u: goto L_0024C634;
    case 29u: goto L_0024C670;
    case 30u: goto L_0024C6F8;
    case 31u: goto L_0024C710;
    case 32u: goto L_0024C73C;
    case 33u: goto L_0024C758;
    case 34u: goto L_0024C7B0;
    case 35u: goto L_0024C7EC;
    case 36u: goto L_0024C7F8;
    case 37u: goto L_0024C818;
    case 38u: goto L_0024C854;
    case 39u: goto L_0024C868;
    case 40u: goto L_0024C894;
    case 41u: goto L_0024C8AC;
    case 42u: goto L_0024C8C0;
    case 43u: goto L_0024C8D8;
    case 44u: goto L_0024C8F0;
    case 45u: goto L_0024C980;
    case 46u: goto L_0024C994;
    case 47u: goto L_0024CA30;
    case 48u: goto L_0024CA9C;
    case 49u: goto L_0024CAB0;
    case 50u: goto L_0024CAD4;
    case 51u: goto L_0024CAFC;
    case 52u: goto L_0024CB08;
    case 53u: goto L_0024CB24;
    case 54u: goto L_0024CB50;
    case 55u: goto L_0024CB74;
    case 56u: goto L_0024CB8C;
    case 57u: goto L_0024CB94;
    case 58u: goto L_0024CBB0;
    case 59u: goto L_0024CBCC;
    case 60u: goto L_0024CBF8;
    case 61u: goto L_0024CC38;
    case 62u: goto L_0024CC60;
    case 63u: goto L_0024CC88;
    case 64u: goto L_0024CC9C;
    case 65u: goto L_0024CCB8;
    case 66u: goto L_0024CD00;
    case 67u: goto L_0024CD90;
    case 68u: goto L_0024CDA0;
    case 69u: goto L_0024CDAC;
    case 70u: goto L_0024CDC0;
    case 71u: goto L_0024CDD4;
    case 72u: goto L_0024CDE8;
    case 73u: goto L_0024CE28;
    case 74u: goto L_0024CE58;
    case 75u: goto L_0024CE7C;
    case 76u: goto L_0024CEA0;
    case 77u: goto L_0024CEB4;
    case 78u: goto L_0024CEE0;
    case 79u: goto L_0024CEF8;
    case 80u: goto L_0024CF08;
    case 81u: goto L_0024CF30;
    case 82u: goto L_0024CF58;
    case 83u: goto L_0024CF88;
    case 84u: goto L_0024CF9C;
    case 85u: goto L_0024CFF8;
    case 86u: goto L_0024D02C;
    case 87u: goto L_0024D040;
    case 88u: goto L_0024D114;
    case 89u: goto L_0024D128;
    case 90u: goto L_0024D138;
    case 91u: goto L_0024D140;
    case 92u: goto L_0024D148;
    case 93u: goto L_0024D150;
    case 94u: goto L_0024D158;
    case 95u: goto L_0024D164;
    case 96u: goto L_0024D178;
    case 97u: goto L_0024D318;
    case 98u: goto L_0024D330;
    case 99u: goto L_0024D33C;
    case 100u: goto L_0024D3D0;
    case 101u: goto L_0024D468;
    case 102u: goto L_0024D498;
    case 103u: goto L_0024D4B8;
    case 104u: goto L_0024D508;
    case 105u: goto L_0024D510;
    case 106u: goto L_0024D53C;
    case 107u: goto L_0024D550;
    case 108u: goto L_0024D56C;
    case 109u: goto L_0024D580;
    case 110u: goto L_0024D58C;
    case 111u: goto L_0024D5A0;
    case 112u: goto L_0024D5D4;
    case 113u: goto L_0024D5E8;
    case 114u: goto L_0024D5F0;
    case 115u: goto L_0024D600;
    case 116u: goto L_0024D60C;
    case 117u: goto L_0024D620;
    case 118u: goto L_0024D640;
    case 119u: goto L_0024D6B4;
    case 120u: goto L_0024D740;
    case 121u: goto L_0024D758;
    case 122u: goto L_0024D778;
    case 123u: goto L_0024D79C;
    case 124u: goto L_0024D7AC;
    case 125u: goto L_0024D7C0;
    case 126u: goto L_0024D7D0;
    case 127u: goto L_0024D7E0;
    case 128u: goto L_0024D804;
    case 129u: goto L_0024D840;
    case 130u: goto L_0024D858;
    case 131u: goto L_0024D868;
    case 132u: goto L_0024D8C0;
    case 133u: goto L_0024D8D8;
    case 134u: goto L_0024D8E8;
    case 135u: goto L_0024D94C;
    case 136u: goto L_0024D95C;
    case 137u: goto L_0024D96C;
    case 138u: goto L_0024D998;
    case 139u: goto L_0024D9B0;
    case 140u: goto L_0024DA10;
    case 141u: goto L_0024DA44;
    case 142u: goto L_0024DA58;
    case 143u: goto L_0024DB08;
    case 144u: goto L_0024DB20;
    case 145u: goto L_0024DB2C;
    case 146u: goto L_0024DB78;
    case 147u: goto L_0024DBD8;
    case 148u: goto L_0024DC54;
    case 149u: goto L_0024DC74;
    case 150u: goto L_0024DC88;
    case 151u: goto L_0024DCCC;
    case 152u: goto L_0024DCE0;
    case 153u: goto L_0024DCF0;
    case 154u: goto L_0024DD74;
    case 155u: goto L_0024DD94;
    case 156u: goto L_0024DDD0;
    case 157u: goto L_0024DDE0;
    case 158u: goto L_0024DE08;
    case 159u: goto L_0024DE2C;
    case 160u: goto L_0024DE48;
    case 161u: goto L_0024DE58;
    case 162u: goto L_0024DE84;
    case 163u: goto L_0024DEA8;
    case 164u: goto L_0024DEC4;
    case 165u: goto L_0024DED0;
    case 166u: goto L_0024DEF8;
    case 167u: goto L_0024DF18;
    case 168u: goto L_0024DF34;
    case 169u: goto L_0024DF44;
    case 170u: goto L_0024DF54;
    case 171u: goto L_0024DF98;
    case 172u: goto L_0024DFF0;
    case 173u: goto L_0024E0A0;
    case 174u: goto L_0024E0B0;
    case 175u: goto L_0024E0C0;
    case 176u: goto L_0024E110;
    case 177u: goto L_0024E120;
    case 178u: goto L_0024E12C;
    case 179u: goto L_0024E158;
    case 180u: goto L_0024E1CC;
    case 181u: goto L_0024E1DC;
    case 182u: goto L_0024E1EC;
    case 183u: goto L_0024E208;
    case 184u: goto L_0024E22C;
    case 185u: goto L_0024E250;
    case 186u: goto L_0024E288;
    case 187u: goto L_0024E29C;
    case 188u: goto L_0024E2A8;
    case 189u: goto L_0024E2C4;
    case 190u: goto L_0024E2D4;
    case 191u: goto L_0024E2EC;
    case 192u: goto L_0024E2F8;
    case 193u: goto L_0024E310;
    case 194u: goto L_0024E31C;
    case 195u: goto L_0024E328;
    case 196u: goto L_0024E364;
    case 197u: goto L_0024E3B8;
    case 198u: goto L_0024E44C;
    case 199u: goto L_0024E460;
    case 200u: goto L_0024E468;
    case 201u: goto L_0024E478;
    case 202u: goto L_0024E4A8;
    case 203u: goto L_0024E4D0;
    case 204u: goto L_0024E4E0;
    case 205u: goto L_0024E500;
    case 206u: goto L_0024E524;
    case 207u: goto L_0024E544;
    case 208u: goto L_0024E568;
    case 209u: goto L_0024E588;
    case 210u: goto L_0024E5AC;
    case 211u: goto L_0024E5D4;
    case 212u: goto L_0024E608;
    case 213u: goto L_0024E63C;
    case 214u: goto L_0024E648;
    case 215u: goto L_0024E680;
    case 216u: goto L_0024E6B8;
    case 217u: goto L_0024E710;
    case 218u: goto L_0024E730;
    case 219u: goto L_0024E758;
    case 220u: goto L_0024E770;
    case 221u: goto L_0024E798;
    case 222u: goto L_0024E7B8;
    case 223u: goto L_0024E890;
    case 224u: goto L_0024E8A0;
    case 225u: goto L_0024E8AC;
    case 226u: goto L_0024E8BC;
    case 227u: goto L_0024E8D4;
    case 228u: goto L_0024E8EC;
    case 229u: goto L_0024E8F8;
    case 230u: goto L_0024E908;
    case 231u: goto L_0024E918;
    case 232u: goto L_0024EA8C;
    case 233u: goto L_0024EAAC;
    case 234u: goto L_0024EAC0;
    case 235u: goto L_0024EAD8;
    case 236u: goto L_0024EAEC;
    case 237u: goto L_0024EAF8;
    case 238u: goto L_0024EB24;
    case 239u: goto L_0024EB38;
    case 240u: goto L_0024EB44;
    case 241u: goto L_0024ED3C;
    case 242u: goto L_0024EDD0;
    case 243u: goto L_0024EE90;
    case 244u: goto L_0024EEE8;
    case 245u: goto L_0024EF00;
    case 246u: goto L_0024EF18;
    case 247u: goto L_0024EF68;
    case 248u: goto L_0024EFC8;
    case 249u: goto L_0024EFE8;
    case 250u: goto L_0024F008;
    case 251u: goto L_0024F01C;
    case 252u: goto L_0024F02C;
    case 253u: goto L_0024F040;
    case 254u: goto L_0024F054;
    case 255u: goto L_0024F068;
    case 256u: goto L_0024F07C;
    case 257u: goto L_0024F090;
    case 258u: goto L_0024F0A4;
    case 259u: goto L_0024F0B8;
    case 260u: goto L_0024F0F8;
    case 261u: goto L_0024F120;
    case 262u: goto L_0024F134;
    case 263u: goto L_0024F168;
    case 264u: goto L_0024F1C8;
    case 265u: goto L_0024F1DC;
    case 266u: goto L_0024F1EC;
    case 267u: goto L_0024F210;
    case 268u: goto L_0024F21C;
    case 269u: goto L_0024F228;
    case 270u: goto L_0024F290;
    case 271u: goto L_0024F35C;
    case 272u: goto L_0024F36C;
    case 273u: goto L_0024F380;
    case 274u: goto L_0024F390;
    case 275u: goto L_0024F3A8;
    case 276u: goto L_0024F3BC;
    case 277u: goto L_0024F3C8;
    case 278u: goto L_0024F3D8;
    case 279u: goto L_0024F3E8;
    case 280u: goto L_0024F448;
    case 281u: goto L_0024F4CC;
    case 282u: goto L_0024F57C;
    case 283u: goto L_0024F5D4;
    case 284u: goto L_0024F5E4;
    case 285u: goto L_0024F5FC;
    case 286u: goto L_0024F648;
    case 287u: goto L_0024F72C;
    case 288u: goto L_0024F74C;
    case 289u: goto L_0024F760;
    case 290u: goto L_0024F778;
    case 291u: goto L_0024F78C;
    case 292u: goto L_0024F798;
    case 293u: goto L_0024F7B8;
    case 294u: goto L_0024F7CC;
    case 295u: goto L_0024F7D8;
    case 296u: goto L_0024F834;
    case 297u: goto L_0024F874;
    case 298u: goto L_0024F89C;
    case 299u: goto L_0024F8F8;
    case 300u: goto L_0024F908;
    case 301u: goto L_0024F92C;
    case 302u: goto L_0024F938;
    case 303u: goto L_0024F944;
    case 304u: goto L_0024F990;
    case 305u: goto L_0024FA30;
    case 306u: goto L_0024FA78;
    case 307u: goto L_0024FA88;
    case 308u: goto L_0024FAA0;
    case 309u: goto L_0024FAC0;
    case 310u: goto L_0024FAD0;
    case 311u: goto L_0024FAE0;
    case 312u: goto L_0024FB38;
    case 313u: goto L_0024FBB4;
    case 314u: goto L_0024FC18;
    case 315u: goto L_0024FC94;
    case 316u: goto L_0024FCEC;
    case 317u: goto L_0024FD04;
    case 318u: goto L_0024FD1C;
    case 319u: goto L_0024FD6C;
    case 320u: goto L_0024FE28;
    case 321u: goto L_0024FE60;
    case 322u: goto L_0024FE84;
    case 323u: goto L_0024FE98;
    case 324u: goto L_0024FEAC;
    case 325u: goto L_0024FEE0;
    case 326u: goto L_0024FF04;
    case 327u: goto L_0024FF18;
    case 328u: goto L_0024FF2C;
    case 329u: goto L_0024FF60;
    case 330u: goto L_0024FF84;
    case 331u: goto L_0024FF98;
    case 332u: goto L_0024FFAC;
    case 333u: goto L_0024FFE0;
    default: bad_entry(c, 0x0024C000u); return;
    }
L_0024C000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19608u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C0D8; } }
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[3] = ld32((c.r[4].w[0] + 108u));
    c.f[4] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[6] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.f[4] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C054; } }
    c.f[6] = c.f[4];
    c.budget -= 1;
L_0024C054:
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C068; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_0024C068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[4] = ld32((c.r[5].w[0] + 160u));
    set32(c.r[3], c.r[2].w[0] + 19576u);
    c.f[3] = ld32((c.r[5].w[0] + 164u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19576u));
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[5].w[0] + 168u));
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 19572u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.f[5] = fp::mul(c.f[3], c.f[3]);
    st32((c.r[29].w[0]), c.f[4]);
    c.f[2] = fp::mul(c.f[4], c.f[4]);
    c.f[0] = fp::add(c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.f[3] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C0DC; } }
L_0024C0D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024C0DC:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C0E8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C104u);  if (depth < kMaxDepth) unit_0044(c, 289u, depth + 1u); else { c.pc = 0x00213F70u; return; } if (c.pc != 0x0024C104u) [[unlikely]] return; }
L_0024C104:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C114u);  if (depth < kMaxDepth) unit_0044(c, 285u, depth + 1u); else { c.pc = 0x00213E88u; return; } if (c.pc != 0x0024C114u) [[unlikely]] return; }
L_0024C114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[3] = 0u;
    set32(c.r[2], c.r[2].w[0] - 17840u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[6], c.f[2]);
    set32(c.r[7], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C168u);  if (depth < kMaxDepth) unit_0044(c, 289u, depth + 1u); else { c.pc = 0x00213F70u; return; } if (c.pc != 0x0024C168u) [[unlikely]] return; }
L_0024C168:
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00660000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.r[2].w[0] + 19856u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[10], 0u + 4u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 1u, c.vu0.vf[2].w[3]);
    set32(c.r[3], ld32((c.r[11].w[0] - 7424u)));
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    ld128((c.r[29].w[0]) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[9]);
    mmi::pextlw(c.r[4], c.r[10], c.r[0]);
    mmi::pextlw(c.r[4], c.r[4], c.r[0]);
    mmi::por(c.r[5], c.r[5], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[3].w[0] + 80u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2] = c.vu0.vf[2];
    st32((c.r[11].w[0] - 7424u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C1F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C20Cu);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0024C20Cu) [[unlikely]] return; }
L_0024C20C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[4].w[0] + 5520u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C228u);  if (depth < kMaxDepth) unit_0082(c, 40u, depth + 1u); else { c.pc = 0x00309D10u; return; } if (c.pc != 0x0024C228u) [[unlikely]] return; }
L_0024C228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C238:
    if (::decomp::hook_0024C238.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0024C238, depth)) return; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], 0u - 2048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.r[2].w[0] - 4096u);
    c.r[4].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] + 4096u);
    if (c.r[5].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C290u);  if (depth < kMaxDepth) unit_004D(c, 94u, depth + 1u); else { c.pc = 0x00236878u; return; } if (c.pc != 0x0024C290u) [[unlikely]] return; }
L_0024C290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19280u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2A8u);  if (depth < kMaxDepth) unit_004F(c, 209u, depth + 1u); else { c.pc = 0x0023FF60u; return; } if (c.pc != 0x0024C2A8u) [[unlikely]] return; }
L_0024C2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2B0u);  if (depth < kMaxDepth) unit_004B(c, 26u, depth + 1u); else { c.pc = 0x0022C920u; return; } if (c.pc != 0x0024C2B0u) [[unlikely]] return; }
L_0024C2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C2C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] - 7424u)));
    set32(c.r[6], c.r[3].w[0] - 7424u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C2F8; } }
    c.budget -= 1;
L_0024C2E0:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C2E0u | kUnwind; return; } goto L_0024C2E0; } }
L_0024C2F8:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C31C; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0024C31C:
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
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C378u);  if (depth < kMaxDepth) unit_004D(c, 139u, depth + 1u); else { c.pc = 0x002379F0u; return; } if (c.pc != 0x0024C378u) [[unlikely]] return; }
L_0024C378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C3B0; } }
L_0024C380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19528u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C3A4; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C39Cu);  if (depth < kMaxDepth) unit_004E(c, 9u, depth + 1u); else { c.pc = 0x002384F0u; return; } if (c.pc != 0x0024C39Cu) [[unlikely]] return; }
L_0024C39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C3B0; } }
L_0024C3A4:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C3B0u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238130u; return; } if (c.pc != 0x0024C3B0u) [[unlikely]] return; }
L_0024C3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], 0u + 92u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19464u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C3F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024C3EC; } }
    set32(c.r[7], 0u + 124u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C3F8; } }
L_0024C3EC:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    set32(c.r[2], 0u + 124u);
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_0024C3F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 28308u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0024C4AC; } }
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C428; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024C43C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C4B4; } }
L_0024C428:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0024C480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C4B4; } }
L_0024C43C:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 304u));
    c.r[3].d[0] = 0ull | 49664ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] | 52736ull;
    c.r[3].d[0] = c.r[3].d[0] << 28;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C4B4; } }
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C4B4; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C4AC; } }
L_0024C480:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 304u));
    c.r[3].d[0] = 0ull | 49664ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] | 52736ull;
    c.r[3].d[0] = c.r[3].d[0] << 28;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C4B4; } }
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C4B4; } }
L_0024C4AC:
    set32(c.r[2], 0u + 128u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0024C4B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[6].w[0] - 7424u)));
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[6].w[0] - 7424u), c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C4E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[0] = ld32((c.r[2].w[0] + 20500u));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    st32((c.r[3].w[0] + 13416u), c.f[12]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024C568; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C568; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 10260u)));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0024C55C; } }
    set32(c.r[3], 0u + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 25952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 7;
L_0024C55C:
    set32(c.r[4], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C568u);  if (depth < kMaxDepth) unit_004F(c, 70u, depth + 1u); else { c.pc = 0x0023D660u; return; } if (c.pc != 0x0024C568u) [[unlikely]] return; }
L_0024C568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C578:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[24]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.f[24] = c.f[16];
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.f[23] = c.f[15];
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.f[22] = c.f[14];
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[21] = c.f[13];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5D0u);  if (depth < kMaxDepth) unit_006B(c, 109u, depth + 1u); else { c.pc = 0x002AE588u; return; } if (c.pc != 0x0024C5D0u) [[unlikely]] return; }
L_0024C5D0:
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[3], 0u + 48u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 13640u);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[17].w[0]), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C618u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024C618u) [[unlikely]] return; }
L_0024C618:
    c.f[15] = 0u;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.f[14] = c.f[22];
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C634u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024C634u) [[unlikely]] return; }
L_0024C634:
    st32((c.r[16].w[0] + 36u), c.f[24]);
    st32((c.r[16].w[0] + 32u), c.f[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[24] = ld32((c.r[29].w[0] + 112u));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C670:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 13640u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st32((c.r[29].w[0] + 160u), c.f[24]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[23]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[22]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.f[24] = c.f[12];
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.f[23] = c.f[13];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[22] = c.f[14];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.f[21] = c.f[15];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.f[20] = c.f[16];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C76C; } }
    set32(c.r[2], 0u + 48u);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    set32(c.r[17], 0u + 1u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 5;
L_0024C6F8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] - 14960u);
    st32((c.r[21].w[0]), c.r[19].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C710u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x0024C710u) [[unlikely]] return; }
L_0024C710:
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.f[12] = ld32((c.r[18].w[0]));
    set32(c.r[16], ld32((c.r[3].w[0] + 60u)));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[16], c.r[16].w[0] + c.r[20].w[0]);
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C73Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024C73Cu) [[unlikely]] return; }
L_0024C73C:
    c.f[15] = 0u;
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    c.f[14] = c.f[22];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C758u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024C758u) [[unlikely]] return; }
L_0024C758:
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 32u), c.f[21]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C6F8u | kUnwind; return; } goto L_0024C6F8; } }
L_0024C76C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[24] = ld32((c.r[29].w[0] + 160u));
    c.f[23] = ld32((c.r[29].w[0] + 152u));
    c.f[22] = ld32((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C7B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[1] = ld32((c.r[2].w[0] + 296u));
    c.f[0] = ld32((c.r[3].w[0] + 296u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C7EC; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C7F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C7EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024C7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C7F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C818u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0024C818u) [[unlikely]] return; }
L_0024C818:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 19836u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    ldl(c.r[2], (c.r[16].w[0] + 7u));
    ldr(c.r[2], (c.r[16].w[0]));
    ldl(c.r[3], (c.r[16].w[0] + 15u));
    ldr(c.r[3], (c.r[16].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    c.r[5].d[0] = c.r[16].d[0] & c.r[5].d[0];
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C854u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0024C854u) [[unlikely]] return; }
L_0024C854:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C868:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 19832u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C894u);  if (depth < kMaxDepth) unit_00A1(c, 37u, depth + 1u); else { c.pc = 0x00384680u; return; } if (c.pc != 0x0024C894u) [[unlikely]] return; }
L_0024C894:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 19832u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8ACu);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0024C8ACu) [[unlikely]] return; }
L_0024C8AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 19832u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8C0u);  if (depth < kMaxDepth) unit_00A1(c, 37u, depth + 1u); else { c.pc = 0x00384680u; return; } if (c.pc != 0x0024C8C0u) [[unlikely]] return; }
L_0024C8C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C8D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[3].w[0] + 24380u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[2].w[0] - 7424u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19276u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C978; } }
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 7284u), c.r[2].w[0]);
    c.budget -= 22;
L_0024C978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C994u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0024C994u) [[unlikely]] return; }
L_0024C994:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[2].w[0] - 7424u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7424u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CA1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19276u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CA1C; } }
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 7284u), c.r[2].w[0]);
    c.budget -= 22;
L_0024CA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CA30:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[13].w[0] + 20444u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024CA9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[11], ld32((c.r[2].w[0] + 19912u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[12], ld32((c.r[3].w[0] + 19904u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[10], ld32((c.r[4].w[0] + 19920u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[9], ld32((c.r[5].w[0] + 19908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[13].w[0] + 20444u), c.r[8].w[0]);
    st32((c.r[6].w[0] + 13340u), c.r[11].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0] + 13332u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 13344u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 13336u), c.r[9].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA9Cu);  if (depth < kMaxDepth) unit_004F(c, 94u, depth + 1u); else { c.pc = 0x0023E378u; return; } if (c.pc != 0x0024CA9Cu) [[unlikely]] return; }
L_0024CA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAD4u);  if (depth < kMaxDepth) unit_004F(c, 59u, depth + 1u); else { c.pc = 0x0023CC00u; return; } if (c.pc != 0x0024CAD4u) [[unlikely]] return; }
L_0024CAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 7272u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - 1792u);
    set32(c.r[16], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + 8368u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAFCu);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x0024CAFCu) [[unlikely]] return; }
L_0024CAFC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0024CB30; } }
    c.budget -= 1;
L_0024CB08:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB24u);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024CF08u; return; } if (c.pc != 0x0024CB24u) [[unlikely]] return; }
L_0024CB24:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CB08u | kUnwind; return; } goto L_0024CB08; } }
L_0024CB30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB74u);  if (depth < kMaxDepth) unit_004F(c, 59u, depth + 1u); else { c.pc = 0x0023CC00u; return; } if (c.pc != 0x0024CB74u) [[unlikely]] return; }
L_0024CB74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] + 8368u);
    set32(c.r[5], c.r[5].w[0] + 23824u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB8Cu);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x0024CB8Cu) [[unlikely]] return; }
L_0024CB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB94u);  if (depth < kMaxDepth) unit_0052(c, 97u, depth + 1u); else { c.pc = 0x0024AFA0u; return; } if (c.pc != 0x0024CB94u) [[unlikely]] return; }
L_0024CB94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 7272u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0024CBD8; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0024CBB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBCCu);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024CF08u; return; } if (c.pc != 0x0024CBCCu) [[unlikely]] return; }
L_0024CBCC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CBB0u | kUnwind; return; } goto L_0024CBB0; } }
L_0024CBD8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CBF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24428u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024CC9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] - 7120u);
    set32(c.r[5], c.r[5].w[0] - 1792u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC38u);  if (depth < kMaxDepth) unit_004F(c, 78u, depth + 1u); else { c.pc = 0x0023DE10u; return; } if (c.pc != 0x0024CC38u) [[unlikely]] return; }
L_0024CC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 7272u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[4].w[0] + 6380u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0024CC94; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0024CC60:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 3u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC88u);  if (depth < kMaxDepth) unit_0051(c, 101u, depth + 1u); else { c.pc = 0x00246CF0u; return; } if (c.pc != 0x0024CC88u) [[unlikely]] return; }
L_0024CC88:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CC60u | kUnwind; return; } goto L_0024CC60; } }
L_0024CC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC9Cu);  if (depth < kMaxDepth) unit_0052(c, 90u, depth + 1u); else { c.pc = 0x0024AC88u; return; } if (c.pc != 0x0024CC9Cu) [[unlikely]] return; }
L_0024CC9C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CCB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CD88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 7276u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] - 30952u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0024CD88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.f[2] = 0u;
    set32(c.r[7], c.r[2].w[0] - 32552u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], 0u + 2u);
    c.budget -= 6;
L_0024CD00:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CD78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0024CD78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CD78; } }
    c.f[1] = ld32((c.r[4].w[0] + 412u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024CD78; } }
    c.f[0] = ld32((c.r[4].w[0] + 416u));
    set32(c.r[5], ld32((c.r[4].w[0] + 300u)));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 416u), c.f[1]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024CD78; } }
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 416u), c.f[0]);
    c.budget -= 5;
L_0024CD78:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CD00u | kUnwind; return; } goto L_0024CD00; } }
L_0024CD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDA0u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x0024CDA0u) [[unlikely]] return; }
L_0024CDA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDACu);  if (depth < kMaxDepth) unit_0051(c, 47u, depth + 1u); else { c.pc = 0x002457D0u; return; } if (c.pc != 0x0024CDACu) [[unlikely]] return; }
L_0024CDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDD4u);  if (depth < kMaxDepth) unit_0041(c, 255u, depth + 1u); else { c.pc = 0x00206030u; return; } if (c.pc != 0x0024CDD4u) [[unlikely]] return; }
L_0024CDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CDE8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20756u)));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE28u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0024CE28u) [[unlikely]] return; }
L_0024CE28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 20656u);
    set32(c.r[17], c.r[17].w[0] + 21136u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20756u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7680u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 11887u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE58u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0024CE58u) [[unlikely]] return; }
L_0024CE58:
    set32(c.r[4], ld32((c.r[18].w[0] + 20756u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7680u);
    st32((c.r[19].w[0] + 24736u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 11888u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE7Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0024CE7Cu) [[unlikely]] return; }
L_0024CE7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20756u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 24740u), c.r[2].w[0]);
    set32(c.r[5], 0u + 880u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 11889u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CEA0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0024CEA0u) [[unlikely]] return; }
L_0024CEA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 20756u)));
    set32(c.r[5], 0u + 2u);
    st32((c.r[21].w[0] + 24748u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CEB4u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0024CEB4u) [[unlikely]] return; }
L_0024CEB4:
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
L_0024CEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CEF8u);  if (depth < kMaxDepth) unit_00E0(c, 127u, depth + 1u); else { c.pc = 0x004807D0u; return; } if (c.pc != 0x0024CEF8u) [[unlikely]] return; }
L_0024CEF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CF08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF30u);  if (depth < kMaxDepth) unit_0052(c, 8u, depth + 1u); else { c.pc = 0x00249060u; return; } if (c.pc != 0x0024CF30u) [[unlikely]] return; }
L_0024CF30:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CF58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF88u);  if (depth < kMaxDepth) unit_005B(c, 182u, depth + 1u); else { c.pc = 0x0026DE50u; return; } if (c.pc != 0x0024CF88u) [[unlikely]] return; }
L_0024CF88:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF9Cu);  if (depth < kMaxDepth) unit_005B(c, 182u, depth + 1u); else { c.pc = 0x0026DE50u; return; } if (c.pc != 0x0024CF9Cu) [[unlikely]] return; }
L_0024CF9C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0024CFBC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0024CFC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CFD8; } }
L_0024CFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0024CFD4; } }
L_0024CFC4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0024CFD8; } }
L_0024CFD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024CFD8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CFF8:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D02C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 12456u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D02Cu);  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x0024D02Cu) [[unlikely]] return; }
L_0024D02C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D040:
    c.f[1] = c.f[18] ^ fp::kSign;
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[18] = fp::sub(c.f[18], c.f[17]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[2] = fp::mul(c.f[0], c.f[19]);
    c.f[17] = fp::mul(c.f[17], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[19]);
    c.f[0] = fp::sub(c.f[0], c.f[19]);
    c.f[2] = fp::mul(c.f[2], c.f[18]);
    c.f[1] = fp::add(c.f[1], c.f[17]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 20u), c.f[12]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    st32((c.r[4].w[0]), c.f[12]);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[7]);
    st32((c.r[29].w[0]), c.f[13]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[14]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[15]);
    st32((c.r[29].w[0] + 52u), c.f[16]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D114u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0024D114u) [[unlikely]] return; }
L_0024D114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D138u);  if (depth < kMaxDepth) unit_00A1(c, 63u, depth + 1u); else { c.pc = 0x00384918u; return; } if (c.pc != 0x0024D138u) [[unlikely]] return; }
L_0024D138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D140u);  if (depth < kMaxDepth) unit_00A1(c, 65u, depth + 1u); else { c.pc = 0x00384950u; return; } if (c.pc != 0x0024D140u) [[unlikely]] return; }
L_0024D140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D148u);  if (depth < kMaxDepth) unit_00A1(c, 44u, depth + 1u); else { c.pc = 0x00384768u; return; } if (c.pc != 0x0024D148u) [[unlikely]] return; }
L_0024D148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D150u);  if (depth < kMaxDepth) unit_00A1(c, 55u, depth + 1u); else { c.pc = 0x00384848u; return; } if (c.pc != 0x0024D150u) [[unlikely]] return; }
L_0024D150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D158u);  if (depth < kMaxDepth) unit_00A0(c, 209u, depth + 1u); else { c.pc = 0x00382898u; return; } if (c.pc != 0x0024D158u) [[unlikely]] return; }
L_0024D158:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D164u);  if (depth < kMaxDepth) unit_00A1(c, 17u, depth + 1u); else { c.pc = 0x00384258u; return; } if (c.pc != 0x0024D164u) [[unlikely]] return; }
L_0024D164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 16u, c.vu0.vf[1].w[0]);
    vu::maddabc(c.vu0, 15u, 17u, c.vu0.vf[1].w[1]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[1].w[2]);
    vu::maddbc(c.vu0, 15u, 28u, 19u, c.vu0.vf[1].w[3]);
    vu::mulabc(c.vu0, 15u, 16u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 17u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 29u, 19u, c.vu0.vf[2].w[3]);
    vu::mulabc(c.vu0, 15u, 16u, c.vu0.vf[3].w[0]);
    vu::maddabc(c.vu0, 15u, 17u, c.vu0.vf[3].w[1]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[3].w[2]);
    vu::maddbc(c.vu0, 15u, 30u, 19u, c.vu0.vf[3].w[3]);
    vu::mulabc(c.vu0, 15u, 16u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 17u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 31u, 19u, c.vu0.vf[4].w[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0] + 112u) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[1].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[1].w[2]);
    vu::maddbc(c.vu0, 15u, 11u, 31u, c.vu0.vf[1].w[3]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 31u, c.vu0.vf[2].w[3]);
    vu::clip(c.vu0, 11u, 11u);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[3].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[3].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[3].w[2]);
    vu::maddbc(c.vu0, 15u, 13u, 31u, c.vu0.vf[3].w[3]);
    vu::clip(c.vu0, 12u, 12u);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 14u, 31u, c.vu0.vf[4].w[3]);
    vu::clip(c.vu0, 13u, 13u);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[5].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[5].w[2]);
    vu::maddbc(c.vu0, 15u, 15u, 31u, c.vu0.vf[5].w[3]);
    vu::clip(c.vu0, 14u, 14u);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[6].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[6].w[2]);
    vu::maddbc(c.vu0, 15u, 1u, 31u, c.vu0.vf[6].w[3]);
    set32(c.r[4], cfc2(c, 18u));
    vu::clip(c.vu0, 15u, 15u);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[7].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[7].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[7].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 31u, c.vu0.vf[7].w[3]);
    vu::clip(c.vu0, 1u, 1u);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 30u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 3u, 31u, c.vu0.vf[8].w[3]);
    vu::clip(c.vu0, 2u, 2u);
    vu::clip(c.vu0, 3u, 3u);
    set32(c.r[6], cfc2(c, 18u));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 86;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D2DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D30C; } }
L_0024D2DC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[3].w[0] >> 6);
    set32(c.r[4], c.r[3].w[0] >> 12);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 18);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 12;
L_0024D30C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D318:
    c.f[2] = 0u;
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024D33C; } }
L_0024D330:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D33C:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 61440ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D330u | kUnwind; return; } goto L_0024D330; } }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D330u | kUnwind; return; } goto L_0024D330; } }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D330u | kUnwind; return; } goto L_0024D330; } }
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[1].d[0] = c.r[1].d[0] | 38528ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D330u | kUnwind; return; } goto L_0024D330; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D330u | kUnwind; return; } goto L_0024D330; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D3D0:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[16], c.f[15]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[16], c.f[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    c.f[16] = fp::add(c.f[16], c.f[15]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    fpu_div(c, 13u, c.f[14], c.f[13]);
    c.f[0] = fp::mul(c.f[0], c.f[15]);
    fpu_div(c, 14u, c.f[14], c.f[12]);
    fpu_div(c, 16u, c.f[16], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[13]);
    st32((c.r[4].w[0]), c.f[14]);
    st32((c.r[4].w[0] + 40u), c.f[16]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D468:
    set32(c.r[3], 0u + 464u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 316u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 372u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 12;
L_0024D498:
    set32(c.r[5], c.r[5].w[0] + 56u);
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0024D4E4; } }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 8u);
    c.budget -= 3;
L_0024D4B8:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 11;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D4B8u | kUnwind; return; } goto L_0024D4B8; } }
L_0024D4E4:
    set32(c.r[5], c.r[5].w[0] + 20u);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[10].w[0] - c.r[9].w[0]);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D498u | kUnwind; return; } goto L_0024D498; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14040u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D53Cu);  if (depth < kMaxDepth) unit_009C(c, 59u, depth + 1u); else { c.pc = 0x00370770u; return; } if (c.pc != 0x0024D53Cu) [[unlikely]] return; }
L_0024D53C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D56Cu);  if (depth < kMaxDepth) unit_00DF(c, 293u, depth + 1u); else { c.pc = 0x0047FB40u; return; } if (c.pc != 0x0024D56Cu) [[unlikely]] return; }
L_0024D56C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0024D580; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D580u);  if (depth < kMaxDepth) unit_0040(c, 179u, depth + 1u); else { c.pc = 0x00202068u; return; } if (c.pc != 0x0024D580u) [[unlikely]] return; }
L_0024D580:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D58Cu);  if (depth < kMaxDepth) unit_00E0(c, 136u, depth + 1u); else { c.pc = 0x004808E0u; return; } if (c.pc != 0x0024D58Cu) [[unlikely]] return; }
L_0024D58C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20748u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D5E8; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 20748u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5D4u);  if (depth < kMaxDepth) unit_00DF(c, 293u, depth + 1u); else { c.pc = 0x0047FB40u; return; } if (c.pc != 0x0024D5D4u) [[unlikely]] return; }
L_0024D5D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0024D5E8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5E8u);  if (depth < kMaxDepth) unit_0040(c, 179u, depth + 1u); else { c.pc = 0x00202068u; return; } if (c.pc != 0x0024D5E8u) [[unlikely]] return; }
L_0024D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5F0u);  if (depth < kMaxDepth) unit_00A1(c, 3u, depth + 1u); else { c.pc = 0x00384070u; return; } if (c.pc != 0x0024D5F0u) [[unlikely]] return; }
L_0024D5F0:
    set32(c.r[4], 0u - 257u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D600u);  if (depth < kMaxDepth) unit_00A0(c, 290u, depth + 1u); else { c.pc = 0x00383E50u; return; } if (c.pc != 0x0024D600u) [[unlikely]] return; }
L_0024D600:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D60Cu);  if (depth < kMaxDepth) unit_00E0(c, 136u, depth + 1u); else { c.pc = 0x004808E0u; return; } if (c.pc != 0x0024D60Cu) [[unlikely]] return; }
L_0024D60C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D620:
    c.vu0.vf[2] = c.r[5];
    c.vu0.vf[3] = c.r[6];
    vu::opmula(c.vu0, 2u, 3u);
    vu::opmsub(c.vu0, 1u, 3u, 2u);
    vu::sub(c.vu0, 1u, 1u, 1u, 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D6BC; } }
    c.f[3] = ld32((c.r[16].w[0] + 28u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], c.f[3]);
    set32(c.r[3], c.f[2]);
    set32(c.r[7], c.f[1]);
    set32(c.r[10], c.f[0]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[10], c.r[7]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D6B4u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x0024D6B4u) [[unlikely]] return; }
L_0024D6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D6E0; } }
L_0024D6BC:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[7]);
    c.budget -= 9;
L_0024D6E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D728; } }
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.f[3]);
    set32(c.r[5], c.f[0]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 15;
L_0024D728:
    set32(c.r[6], ld32((c.r[17].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D740u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x0024D740u) [[unlikely]] return; }
L_0024D740:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19352u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D778u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0024D778u) [[unlikely]] return; }
L_0024D778:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x06E00000u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 24931ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0024D7A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x06E00000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D79Cu);  if (depth < kMaxDepth) unit_007A(c, 305u, depth + 1u); else { c.pc = 0x002EBCE8u; return; } if (c.pc != 0x0024D79Cu) [[unlikely]] return; }
L_0024D79C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x06E00000u);
    st64((c.r[1].w[0]), 0ull);
    c.budget -= 2;
L_0024D7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7ACu);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x0024D7ACu) [[unlikely]] return; }
L_0024D7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] | 51424ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D7D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 59712ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D7E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0024D804; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D804:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0024D820; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19480u), c.f[0]);
    c.budget -= 4;
L_0024D820:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D840:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D858:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D868u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x0024D868u) [[unlikely]] return; }
L_0024D868:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[9], ld32((c.r[2].w[0] + 6292u)));
    set32(c.r[4], c.r[8].w[0] - 7424u);
    ld128((c.r[4].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[6]);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    st32((c.r[8].w[0] - 7424u), c.r[9].w[0]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[5]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8D8u);  if (depth < kMaxDepth) unit_0052(c, 136u, depth + 1u); else { c.pc = 0x0024BE98u; return; } if (c.pc != 0x0024D8D8u) [[unlikely]] return; }
L_0024D8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D8E8:
    set32(c.r[29], c.r[29].w[0] - 1648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 1448u), c.r[4].w[0]);
    st128((c.r[29].w[0] + 1552u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 1488u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 3028u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 1616u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1600u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 1584u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 1568u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 1536u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 1520u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 1504u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 1472u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1640u), c.f[21]);
    st32((c.r[29].w[0] + 1632u), c.f[20]);
    st32((c.r[29].w[0] + 1452u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 1456u), c.r[7].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D94Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0024D94Cu) [[unlikely]] return; }
L_0024D94C:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    st32((c.r[29].w[0] + 1460u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D95Cu);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024D95Cu) [[unlikely]] return; }
L_0024D95C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] - 18944u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D96Cu);  if (depth < kMaxDepth) unit_0044(c, 121u, depth + 1u); else { c.pc = 0x002124B0u; return; } if (c.pc != 0x0024D96Cu) [[unlikely]] return; }
L_0024D96C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[4].w[0] + 28356u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 10404u), c.r[19].w[0]);
    st32((c.r[5].w[0] + 28360u), c.r[19].w[0]);
    c.budget -= 10;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0024D9D4; } }
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0024D998:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 1440u);
    set32(c.r[7], c.r[29].w[0] + 1444u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9B0u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x0024D9B0u) [[unlikely]] return; }
L_0024D9B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 1440u)));
    c.r[4].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1444u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D998u | kUnwind; return; } goto L_0024D998; } }
L_0024D9D4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0024DADC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[21] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4D8F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 3352ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[23], c.r[3].w[0] + 6312u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
L_0024DA10:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[18].w[0] << 16);
    set32(c.r[2], ld32((c.r[29].w[0] + 1448u)));
    st32((c.r[29].w[0] + 1440u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] - 364u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[8], ld32((c.r[30].w[0] - 3028u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 1452u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 1456u)));
    st32((c.r[29].w[0] + 1444u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA44u);  if (depth < kMaxDepth) unit_005A(c, 167u, depth + 1u); else { c.pc = 0x00269900u; return; } if (c.pc != 0x0024DA44u) [[unlikely]] return; }
L_0024DA44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] - 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA58u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024DA58u) [[unlikely]] return; }
L_0024DA58:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024DA78; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 10412u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 10412u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DA84; } }
L_0024DA78:
    set32(c.r[2], ld32((c.r[20].w[0] + 10416u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 10416u), c.r[2].w[0]);
    c.budget -= 3;
L_0024DA84:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0024DAA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[3].w[0] + 10408u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    st32((c.r[2].w[0] + 320u), c.r[16].w[0]);
    c.budget -= 5;
L_0024DAA0:
    set32(c.r[2], mfc0(c, 25u, 1u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[23].w[0] + 24u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[23].w[0] + 24u), c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DA10u | kUnwind; return; } goto L_0024DA10; } }
L_0024DADC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    set32(c.r[5], 0u + 180u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);
    st32((c.r[3].w[0] + 28356u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 28360u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB08u);  if (depth < kMaxDepth) unit_005B(c, 101u, depth + 1u); else { c.pc = 0x0026CFA8u; return; } if (c.pc != 0x0024DB08u) [[unlikely]] return; }
L_0024DB08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 18944u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB20u);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0024DB20u) [[unlikely]] return; }
L_0024DB20:
    set32(c.r[4], ld32((c.r[30].w[0] - 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB2Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0024DB2Cu) [[unlikely]] return; }
L_0024DB2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 1460u)));
    ld128((c.r[29].w[0] + 1616u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    ld128((c.r[29].w[0] + 1600u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    ld128((c.r[29].w[0] + 1584u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1568u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1552u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1536u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1520u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1504u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1488u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1472u));
    c.f[21] = ld32((c.r[29].w[0] + 1640u));
    c.f[20] = ld32((c.r[29].w[0] + 1632u));
    st32((c.r[3].w[0] - 18368u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 1648u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024DB78:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[30], ld32((c.r[2].w[0] + 10428u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 300u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0024DDB4; } }
    set32(c.r[2], 0u + 3600u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 3;
L_0024DBD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 444u)));
    set32(c.r[21], c.r[17].w[0] << 5);
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 25796u);
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DC28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DD68; } }
L_0024DC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[23].w[0] + 10436u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] - 3024u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC54u);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0024DC54u) [[unlikely]] return; }
L_0024DC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[6].w[0] + 25800u);
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    set32(c.r[22], c.r[16].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC74u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026CA98u; return; } if (c.pc != 0x0024DC74u) [[unlikely]] return; }
L_0024DC74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC88u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024DC88u) [[unlikely]] return; }
L_0024DC88:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[23].w[0] + 10436u), c.r[2].w[0]);
    st32((c.r[4].w[0] - 3024u), 0u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0024DCF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18944u)));
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[23].w[0] + 10436u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCCCu);  if (depth < kMaxDepth) unit_005B(c, 97u, depth + 1u); else { c.pc = 0x0026CF10u; return; } if (c.pc != 0x0024DCCCu) [[unlikely]] return; }
L_0024DCCC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCE0u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026CA98u; return; } if (c.pc != 0x0024DCE0u) [[unlikely]] return; }
L_0024DCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCF0u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024DCF0u) [[unlikely]] return; }
L_0024DCF0:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0] + 10436u), c.r[2].w[0]);
    c.budget -= 2;
L_0024DCF8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024DD5C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 10440u)));
    set32(c.r[2], c.r[5].w[0] + 3600u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 25796u);
    set32(c.r[5], c.r[5].w[0] + 25800u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 10444u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[2].w[0] + 10444u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 10440u), c.r[6].w[0]);
    c.budget -= 21;
L_0024DD5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    c.budget -= 3;
L_0024DD68:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD74u);  if (depth < kMaxDepth) unit_005B(c, 119u, depth + 1u); else { c.pc = 0x0026D298u; return; } if (c.pc != 0x0024DD74u) [[unlikely]] return; }
L_0024DD74:
    set32(c.r[3], ld32((c.r[20].w[0] + 444u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD94u);  if (depth < kMaxDepth) unit_005B(c, 122u, depth + 1u); else { c.pc = 0x0026D308u; return; } if (c.pc != 0x0024DD94u) [[unlikely]] return; }
L_0024DD94:
    set32(c.r[3], ld32((c.r[20].w[0] + 444u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DBD8u | kUnwind; return; } goto L_0024DBD8; } }
L_0024DDB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[20].w[0] + 420u), c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDD0u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024DDD0u) [[unlikely]] return; }
L_0024DDD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024DE18; } }
    c.budget -= 1;
L_0024DDE0:
    set32(c.r[3], ld32((c.r[20].w[0] + 444u)));
    set32(c.r[2], c.r[17].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE08u);  if (depth < kMaxDepth) unit_005A(c, 73u, depth + 1u); else { c.pc = 0x00268AE0u; return; } if (c.pc != 0x0024DE08u) [[unlikely]] return; }
L_0024DE08:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DDE0u | kUnwind; return; } goto L_0024DDE0; } }
L_0024DE18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE2Cu);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024DE2Cu) [[unlikely]] return; }
L_0024DE2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[20].w[0] + 428u), c.r[30].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE48u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024DE48u) [[unlikely]] return; }
L_0024DE48:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0024DE94; } }
    c.budget -= 1;
L_0024DE58:
    set32(c.r[3], ld32((c.r[20].w[0] + 444u)));
    set32(c.r[2], c.r[17].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE84u);  if (depth < kMaxDepth) unit_005A(c, 106u, depth + 1u); else { c.pc = 0x00268EC0u; return; } if (c.pc != 0x0024DE84u) [[unlikely]] return; }
L_0024DE84:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DE58u | kUnwind; return; } goto L_0024DE58; } }
L_0024DE94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DEA8u);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024DEA8u) [[unlikely]] return; }
L_0024DEA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[20].w[0] + 436u), c.r[30].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DEC4u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024DEC4u) [[unlikely]] return; }
L_0024DEC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0024DF08; } }
L_0024DED0:
    set32(c.r[3], ld32((c.r[20].w[0] + 444u)));
    set32(c.r[2], c.r[17].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DEF8u);  if (depth < kMaxDepth) unit_005A(c, 123u, depth + 1u); else { c.pc = 0x00269170u; return; } if (c.pc != 0x0024DEF8u) [[unlikely]] return; }
L_0024DEF8:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DED0u | kUnwind; return; } goto L_0024DED0; } }
L_0024DF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF18u);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024DF18u) [[unlikely]] return; }
L_0024DF18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[20].w[0] + 440u), c.r[30].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF34u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024DF34u) [[unlikely]] return; }
L_0024DF34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF44u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0026CCB0u; return; } if (c.pc != 0x0024DF44u) [[unlikely]] return; }
L_0024DF44:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF54u);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024DF54u) [[unlikely]] return; }
L_0024DF54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 10424u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 10432u)));
    set32(c.r[3], c.r[30].w[0] - c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 10428u), c.r[30].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DF88; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[5].w[0] + 10432u), c.r[3].w[0]);
    c.budget -= 2;
L_0024DF88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF98u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024DF98u) [[unlikely]] return; }
L_0024DF98:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10420u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DFB4; } }
    st16((c.r[4].w[0] + 10420u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0024DFB4:
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
L_0024DFF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[8].w[0] << 5);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[21], ld32((c.r[4].w[0] + 10428u)));
    set32(c.r[2], ld32((c.r[23].w[0] + 444u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 23;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0024E140; } }
    set32(c.r[17], 0u + 20u);
    set32(c.r[2], 0u + 3600u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 10436u)));
    set32(c.r[18], c.r[7].w[0] + 25784u);
    set32(c.r[3], c.r[18].w[0] + 12u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    set32(c.r[20], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[3].w[0] - 3024u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[6].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0A0u);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0024E0A0u) [[unlikely]] return; }
L_0024E0A0:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0B0u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026CA98u; return; } if (c.pc != 0x0024E0B0u) [[unlikely]] return; }
L_0024E0B0:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0C0u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024E0C0u) [[unlikely]] return; }
L_0024E0C0:
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0] - 3024u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[4].w[0] + 10436u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_0024E1EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 18944u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 10436u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E110u);  if (depth < kMaxDepth) unit_005B(c, 97u, depth + 1u); else { c.pc = 0x0026CF10u; return; } if (c.pc != 0x0024E110u) [[unlikely]] return; }
L_0024E110:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E120u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026CA98u; return; } if (c.pc != 0x0024E120u) [[unlikely]] return; }
L_0024E120:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E12Cu);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024E12Cu) [[unlikely]] return; }
L_0024E12C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[3].w[0] + 10436u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E1EC; } }
L_0024E140:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E158u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024E158u) [[unlikely]] return; }
L_0024E158:
    set32(c.r[2], ld32((c.r[23].w[0] + 444u)));
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], 0u + 3600u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[22].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 25784u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[16].w[0] + 12u);
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[17], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[23].w[0] + 444u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E1CCu);  if (depth < kMaxDepth) unit_005B(c, 97u, depth + 1u); else { c.pc = 0x0026CF10u; return; } if (c.pc != 0x0024E1CCu) [[unlikely]] return; }
L_0024E1CC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E1DCu);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0024E1DCu) [[unlikely]] return; }
L_0024E1DC:
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E1ECu);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026CA98u; return; } if (c.pc != 0x0024E1ECu) [[unlikely]] return; }
L_0024E1EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E208u);  if (depth < kMaxDepth) unit_005B(c, 119u, depth + 1u); else { c.pc = 0x0026D298u; return; } if (c.pc != 0x0024E208u) [[unlikely]] return; }
L_0024E208:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[23].w[0] + 444u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E22Cu);  if (depth < kMaxDepth) unit_005B(c, 122u, depth + 1u); else { c.pc = 0x0026D308u; return; } if (c.pc != 0x0024E22Cu) [[unlikely]] return; }
L_0024E22C:
    set32(c.r[3], ld32((c.r[23].w[0] + 444u)));
    set32(c.r[6], c.r[23].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    st32((c.r[6].w[0] + 420u), c.r[21].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E250u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024E250u) [[unlikely]] return; }
L_0024E250:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[16], 0u + 20u);
    set32(c.r[3], 0u + 3600u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[4].w[0] + 25784u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E288u);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0024E288u) [[unlikely]] return; }
L_0024E288:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E29Cu);  if (depth < kMaxDepth) unit_005A(c, 73u, depth + 1u); else { c.pc = 0x00268AE0u; return; } if (c.pc != 0x0024E29Cu) [[unlikely]] return; }
L_0024E29C:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2A8u);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024E2A8u) [[unlikely]] return; }
L_0024E2A8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    set32(c.r[17], c.r[23].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 428u), c.r[21].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2C4u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024E2C4u) [[unlikely]] return; }
L_0024E2C4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2D4u);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0024E2D4u) [[unlikely]] return; }
L_0024E2D4:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2ECu);  if (depth < kMaxDepth) unit_005A(c, 106u, depth + 1u); else { c.pc = 0x00268EC0u; return; } if (c.pc != 0x0024E2ECu) [[unlikely]] return; }
L_0024E2EC:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2F8u);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024E2F8u) [[unlikely]] return; }
L_0024E2F8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    st32((c.r[23].w[0] + 440u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E310u);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026C848u; return; } if (c.pc != 0x0024E310u) [[unlikely]] return; }
L_0024E310:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E31Cu);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0026CCB0u; return; } if (c.pc != 0x0024E31Cu) [[unlikely]] return; }
L_0024E31C:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E328u);  if (depth < kMaxDepth) unit_005B(c, 77u, depth + 1u); else { c.pc = 0x0026CC68u; return; } if (c.pc != 0x0024E328u) [[unlikely]] return; }
L_0024E328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 10424u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 10432u)));
    set32(c.r[3], c.r[21].w[0] - c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 10428u), c.r[21].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E358; } }
    st32((c.r[5].w[0] + 10432u), c.r[3].w[0]);
    c.budget -= 1;
L_0024E358:
    set32(c.r[4], ld32((c.r[30].w[0] - 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E364u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CF70u; return; } if (c.pc != 0x0024E364u) [[unlikely]] return; }
L_0024E364:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10420u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E380; } }
    st16((c.r[4].w[0] + 10420u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0024E380:
    set32(c.r[2], ld32((c.r[29].w[0])));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024E3B8:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 9;
    c.r[4].d[0] = c.r[4].d[0] | 511ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28252u)));
    c.r[3].d[0] = ld64((c.r[17].w[0] + 304u));
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[17].w[0] + 384u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st64((c.r[17].w[0] + 304u), c.r[3].d[0]);
    st32((c.r[17].w[0] + 444u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 388u), 0u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[17].w[0] + 392u), 0u);
    st32((c.r[17].w[0] + 300u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28224u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E44Cu);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0024E44Cu) [[unlikely]] return; }
L_0024E44C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E460u);  if (depth < kMaxDepth) unit_0090(c, 190u, depth + 1u); else { c.pc = 0x00341CA0u; return; } if (c.pc != 0x0024E460u) [[unlikely]] return; }
L_0024E460:
    st32((c.r[17].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 2;
L_0024E468:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E478u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0024E478u) [[unlikely]] return; }
L_0024E478:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0024E4A8; } }
    c.r[2].d[0] = ~(0ull | c.r[18].d[0]);
    set32(c.r[21], 0u + 1u);
    if (c.r[2].d[0] != 0) c.r[21].d[0] = 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 21496u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4A8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0024E4A8u) [[unlikely]] return; }
L_0024E4A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[4].w[0] - 18768u);
    set32(c.r[20], 0u - 1u);
    set32(c.r[2], ld32((c.r[22].w[0] + 320u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4D0u);  if (depth < kMaxDepth) unit_0058(c, 80u, depth + 1u); else { c.pc = 0x00260DE8u; return; } if (c.pc != 0x0024E4D0u) [[unlikely]] return; }
L_0024E4D0:
    set32(c.r[4], ld32((c.r[23].w[0] - 364u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4E0u);  if (depth < kMaxDepth) unit_005B(c, 182u, depth + 1u); else { c.pc = 0x0026DE50u; return; } if (c.pc != 0x0024E4E0u) [[unlikely]] return; }
L_0024E4E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_0024E510; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E500u);  if (depth < kMaxDepth) unit_0058(c, 80u, depth + 1u); else { c.pc = 0x00260DE8u; return; } if (c.pc != 0x0024E500u) [[unlikely]] return; }
L_0024E500:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 312u));
    set32(c.r[2], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[17].w[0] + 312u), c.r[3].d[0]);
    c.budget -= 4;
L_0024E510:
    st32((c.r[17].w[0] + 396u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[23].w[0] - 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E524u);  if (depth < kMaxDepth) unit_005B(c, 184u, depth + 1u); else { c.pc = 0x0026DE88u; return; } if (c.pc != 0x0024E524u) [[unlikely]] return; }
L_0024E524:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_0024E558; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E544u);  if (depth < kMaxDepth) unit_0058(c, 80u, depth + 1u); else { c.pc = 0x00260DE8u; return; } if (c.pc != 0x0024E544u) [[unlikely]] return; }
L_0024E544:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 312u));
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 400u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0] + 312u), c.r[3].d[0]);
    c.budget -= 5;
L_0024E558:
    set32(c.r[4], ld32((c.r[23].w[0] - 364u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E568u);  if (depth < kMaxDepth) unit_005B(c, 186u, depth + 1u); else { c.pc = 0x0026DEC0u; return; } if (c.pc != 0x0024E568u) [[unlikely]] return; }
L_0024E568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_0024E59C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E588u);  if (depth < kMaxDepth) unit_0058(c, 80u, depth + 1u); else { c.pc = 0x00260DE8u; return; } if (c.pc != 0x0024E588u) [[unlikely]] return; }
L_0024E588:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 312u));
    set32(c.r[2], 0u + 256u);
    st32((c.r[17].w[0] + 404u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[17].w[0] + 312u), c.r[3].d[0]);
    c.budget -= 5;
L_0024E59C:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5ACu);  if (depth < kMaxDepth) unit_0090(c, 183u, depth + 1u); else { c.pc = 0x00341B18u; return; } if (c.pc != 0x0024E5ACu) [[unlikely]] return; }
L_0024E5AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(400ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E5D4; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 320u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5D4u);  if (depth < kMaxDepth) unit_0058(c, 80u, depth + 1u); else { c.pc = 0x00260DE8u; return; } if (c.pc != 0x0024E5D4u) [[unlikely]] return; }
L_0024E5D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024E5F8; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 5;
L_0024E5F8:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E608u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0024E608u) [[unlikely]] return; }
L_0024E608:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E468u | kUnwind; return; } goto L_0024E468; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 10448u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E630; } }
    st32((c.r[4].w[0] + 10448u), c.r[3].w[0]);
    c.budget -= 1;
L_0024E630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E63Cu);  if (depth < kMaxDepth) unit_0057(c, 75u, depth + 1u); else { c.pc = 0x0025CFB8u; return; } if (c.pc != 0x0024E63Cu) [[unlikely]] return; }
L_0024E63C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E648u);  if (depth < kMaxDepth) unit_0058(c, 85u, depth + 1u); else { c.pc = 0x00260EF8u; return; } if (c.pc != 0x0024E648u) [[unlikely]] return; }
L_0024E648:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024E680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 57376ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E6E8; } }
    c.budget -= 1;
L_0024E6B8:
    set32(c.r[2], 0u);
    c.budget -= 6;
    { const bool t = !cpcond0(c);  if (t) { goto L_0024E6D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0024E6D8:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E6B8u | kUnwind; return; } goto L_0024E6B8; } }
L_0024E6E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[2].w[0] - 7288u);
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] | 36864ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 10;
L_0024E710:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E710u | kUnwind; return; } goto L_0024E710; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.budget -= 2;
L_0024E730:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E730u | kUnwind; return; } goto L_0024E730; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.budget -= 4;
L_0024E758:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E758u | kUnwind; return; } goto L_0024E758; } }
L_0024E770:
    c.budget -= 6;
    { const bool t = vu0_busy(c);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E770u | kUnwind; return; } goto L_0024E770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.budget -= 4;
L_0024E798:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E798u | kUnwind; return; } goto L_0024E798; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024E7B8:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[19], c.r[21].w[0] + 48u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 392u), c.f[31]);
    set32(c.r[30], c.r[21].w[0] + 80u);
    st32((c.r[29].w[0] + 384u), c.f[30]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 376u), c.f[29]);
    st32((c.r[29].w[0] + 368u), c.f[28]);
    st32((c.r[29].w[0] + 360u), c.f[27]);
    st32((c.r[29].w[0] + 352u), c.f[26]);
    st32((c.r[29].w[0] + 344u), c.f[25]);
    st32((c.r[29].w[0] + 336u), c.f[24]);
    st32((c.r[29].w[0] + 328u), c.f[23]);
    st32((c.r[29].w[0] + 320u), c.f[22]);
    st32((c.r[29].w[0] + 312u), c.f[21]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 68u), c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 60u), c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[1]);
    st32((c.r[19].w[0] + 72u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[21].w[0] + 376u), 0u);
    st32((c.r[21].w[0] + 372u), 0u);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E890u);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x0024E890u) [[unlikely]] return; }
L_0024E890:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8A0u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x0024E8A0u) [[unlikely]] return; }
L_0024E8A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8ACu);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x0024E8ACu) [[unlikely]] return; }
L_0024E8AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8BCu);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x0024E8BCu) [[unlikely]] return; }
L_0024E8BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], ld32((c.r[22].w[0] + 8u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8D4u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0024E8D4u) [[unlikely]] return; }
L_0024E8D4:
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[17], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8ECu);  if (depth < kMaxDepth) unit_0090(c, 190u, depth + 1u); else { c.pc = 0x00341CA0u; return; } if (c.pc != 0x0024E8ECu) [[unlikely]] return; }
L_0024E8EC:
    set32(c.r[3], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 3;
L_0024E8F8:
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    c.budget -= 4;
L_0024E908:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E934; } }
    c.budget -= 1;
L_0024E918:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F104; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F14C; } }
L_0024E934:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 88u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[3] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[29].w[0] + 92u), c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[3] = ld32((c.r[3].w[0] + 108u));
    st32((c.r[29].w[0] + 104u), c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 116u));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[3] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 116u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[26] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.f[27] = fp::mul(c.f[1], c.f[3]);
    c.f[20] = ld32((c.r[3].w[0] + 76u));
    c.f[28] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[23] = ld32((c.r[3].w[0] + 80u));
    c.f[24] = ld32((c.r[3].w[0] + 84u));
    c.f[29] = c.f[26];
    c.f[30] = c.f[27];
    c.f[31] = c.f[28];
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[25] = c.f[20];
    c.f[22] = c.f[23];
    c.f[21] = c.f[24];
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 42;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0024EB5C; } }
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024E9F4; } }
    st32((c.r[19].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_0024E9F4:
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EA0C; } }
    st32((c.r[19].w[0] + 60u), c.f[20]);
    c.budget -= 1;
L_0024EA0C:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EA24; } }
    st32((c.r[19].w[0] + 52u), c.f[23]);
    c.budget -= 1;
L_0024EA24:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EA3C; } }
    st32((c.r[19].w[0] + 64u), c.f[23]);
    c.budget -= 1;
L_0024EA3C:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EA54; } }
    st32((c.r[19].w[0] + 56u), c.f[24]);
    c.budget -= 1;
L_0024EA54:
    c.f[0] = ld32((c.r[19].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EA6C; } }
    st32((c.r[19].w[0] + 68u), c.f[24]);
    c.budget -= 1;
L_0024EA6C:
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 52u));
    c.f[14] = ld32((c.r[19].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA8Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024EA8Cu) [[unlikely]] return; }
L_0024EA8C:
    c.f[13] = ld32((c.r[19].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[19].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024EAACu) [[unlikely]] return; }
L_0024EAAC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAC0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0024EAC0u) [[unlikely]] return; }
L_0024EAC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAD8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024EAD8u) [[unlikely]] return; }
L_0024EAD8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAECu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0024EAECu) [[unlikely]] return; }
L_0024EAEC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAF8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0024EAF8u) [[unlikely]] return; }
L_0024EAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB24u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024EB24u) [[unlikely]] return; }
L_0024EB24:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB38u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x0024EB38u) [[unlikely]] return; }
L_0024EB38:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB44u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0024EB44u) [[unlikely]] return; }
L_0024EB44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0024EB5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[22].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0024EBAC; } }
    set32(c.r[3], 0u + 448u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[24] = fp::add(c.f[21], c.f[0]);
    c.f[20] = fp::add(c.f[25], c.f[1]);
    c.f[23] = fp::add(c.f[22], c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EC68; } }
L_0024EBAC:
    set32(c.r[2], ld32((c.r[8].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0024EBEC; } }
    set32(c.r[3], 0u + 448u);
    c.f[3] = ld32((c.r[29].w[0] + 92u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[24] = fp::add(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EC64; } }
L_0024EBEC:
    set32(c.r[2], ld32((c.r[8].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0024EC2C; } }
    set32(c.r[3], 0u + 448u);
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[24] = fp::add(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EC64; } }
L_0024EC2C:
    set32(c.r[2], ld32((c.r[8].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0024EC68; } }
    set32(c.r[3], 0u + 448u);
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[24] = fp::add(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 11;
L_0024EC64:
    c.f[23] = fp::add(c.f[1], c.f[2]);
    c.budget -= 1;
L_0024EC68:
    c.f[0] = fp::add(c.f[29], c.f[30]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[8].w[0] + 60u)));
    c.f[0] = fp::add(c.f[0], c.f[31]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0024EC94; } }
    c.f[26] = fp::add(c.f[29], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024ECBC; } }
L_0024EC94:
    set32(c.r[3], ld32((c.r[8].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024ECAC; } }
    c.f[27] = fp::add(c.f[30], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024ECBC; } }
L_0024ECAC:
    set32(c.r[2], ld32((c.r[8].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024ECBC; } }
    c.f[28] = fp::add(c.f[31], c.f[1]);
    c.budget -= 1;
L_0024ECBC:
    fpu_compare(c, fp::key(c.f[27]) <= fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024ECDC; } }
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024ECF0; } }
L_0024ECDC:
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[27]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024ECF0; } }
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[27]));
    c.budget -= 1;
L_0024ECF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EF78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28264u)));
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024ED24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 28268u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024ED48; } }
L_0024ED24:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED3Cu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0024ED3Cu) [[unlikely]] return; }
L_0024ED3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 18448u)));
    set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0024ED48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[21].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28228u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EE1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].d[0] = ld64((c.r[3].w[0] - 18800u));
    set32(c.r[4], c.r[4].w[0] - 18800u);
    set32(c.r[3], 0u - 32768u);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[3], 0u + 14u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[3].w[0] - 18800u), c.r[2].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    set32(c.r[2], c.r[2].w[0] - 18800u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[2].w[0] + 8u), c.r[6].d[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDD0u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024EDD0u) [[unlikely]] return; }
L_0024EDD0:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 21;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EEC8; } }
L_0024EE1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].d[0] = ld64((c.r[3].w[0] - 18800u));
    set32(c.r[4], c.r[4].w[0] - 18800u);
    set32(c.r[3], 0u - 32768u);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[3], 0u + 14u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[3].w[0] - 18800u), c.r[2].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    set32(c.r[2], c.r[2].w[0] - 18800u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[2].w[0] + 8u), c.r[6].d[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE90u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024EE90u) [[unlikely]] return; }
L_0024EE90:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_0024EEC8:
    st64((c.r[6].w[0] - 18832u), c.r[3].d[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[6], 0u + 108u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEE8u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x0024EEE8u) [[unlikely]] return; }
L_0024EEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18800u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF00u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0024EF00u) [[unlikely]] return; }
L_0024EF00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 18832u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF18u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0024EF18u) [[unlikely]] return; }
L_0024EF18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[2], c.r[2].w[0] - 18848u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[2].w[0] - 4848u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[2].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF68u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0024EF68u) [[unlikely]] return; }
L_0024EF68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 4;
L_0024EF78:
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[4].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.f[25] = ld32((c.r[6].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EFA4; } }
    c.r[16].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 1;
L_0024EFA4:
    set32(c.r[2], c.f[20]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[22] = ld32((c.r[6].w[0] + 40u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[20] = ld32((c.r[6].w[0] + 32u));
    c.f[21] = ld32((c.r[6].w[0] + 36u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFC8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024EFC8u) [[unlikely]] return; }
L_0024EFC8:
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.f[23]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 76u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFE8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024EFE8u) [[unlikely]] return; }
L_0024EFE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.f[24]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F008u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F008u) [[unlikely]] return; }
L_0024F008:
    set32(c.r[4], c.f[26]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F01Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F01Cu) [[unlikely]] return; }
L_0024F01C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F02Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F02Cu) [[unlikely]] return; }
L_0024F02C:
    set32(c.r[6], c.f[25]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F040u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F040u) [[unlikely]] return; }
L_0024F040:
    set32(c.r[2], c.f[27]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F054u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F054u) [[unlikely]] return; }
L_0024F054:
    set32(c.r[3], c.f[28]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F068u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F068u) [[unlikely]] return; }
L_0024F068:
    set32(c.r[4], c.f[20]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F07Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F07Cu) [[unlikely]] return; }
L_0024F07C:
    set32(c.r[6], c.f[21]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F090u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F090u) [[unlikely]] return; }
L_0024F090:
    set32(c.r[2], c.f[22]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0A4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F0A4u) [[unlikely]] return; }
L_0024F0A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0B8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0024F0B8u) [[unlikely]] return; }
L_0024F0B8:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F0D0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 376u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 376u), c.r[2].w[0]);
    c.budget -= 3;
L_0024F0D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 372u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    st32((c.r[21].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0F8u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0024F0F8u) [[unlikely]] return; }
L_0024F0F8:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E918u | kUnwind; return; } goto L_0024E918; } }
L_0024F104:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F14C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F14C; } }
    c.budget -= 1;
L_0024F120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F134u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0024F134u) [[unlikely]] return; }
L_0024F134:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F14C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F120u | kUnwind; return; } goto L_0024F120; } }
L_0024F14C:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[8], 0u + 48u);
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F168u);  if (depth < kMaxDepth) unit_0057(c, 248u, depth + 1u); else { c.pc = 0x0025F8F0u; return; } if (c.pc != 0x0024F168u) [[unlikely]] return; }
L_0024F168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E908u | kUnwind; return; } goto L_0024E908; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F1EC; } }
    set32(c.r[4], 0u + 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x0024F188u);  goto L_0024F18C; }
L_0024F18C:
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[6].w[0] - 18880u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 48u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1C8u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x0024F1C8u) [[unlikely]] return; }
L_0024F1C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1DCu);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x0024F1DCu) [[unlikely]] return; }
L_0024F1DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1ECu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0024F1ECu) [[unlikely]] return; }
L_0024F1EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E8F8u | kUnwind; return; } goto L_0024E8F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F210u);  if (depth < kMaxDepth) unit_00A1(c, 99u, depth + 1u); else { c.pc = 0x00384FA0u; return; } if (c.pc != 0x0024F210u) [[unlikely]] return; }
L_0024F210:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F21Cu);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x0024F21Cu) [[unlikely]] return; }
L_0024F21C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F228u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x0024F228u) [[unlikely]] return; }
L_0024F228:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[31] = ld32((c.r[29].w[0] + 392u));
    c.f[30] = ld32((c.r[29].w[0] + 384u));
    c.f[29] = ld32((c.r[29].w[0] + 376u));
    c.f[28] = ld32((c.r[29].w[0] + 368u));
    c.f[27] = ld32((c.r[29].w[0] + 360u));
    c.f[26] = ld32((c.r[29].w[0] + 352u));
    c.f[25] = ld32((c.r[29].w[0] + 344u));
    c.f[24] = ld32((c.r[29].w[0] + 336u));
    c.f[23] = ld32((c.r[29].w[0] + 328u));
    c.f[22] = ld32((c.r[29].w[0] + 320u));
    c.f[21] = ld32((c.r[29].w[0] + 312u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F290:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[21].w[0] + 48u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    set32(c.r[22], c.r[21].w[0] + 80u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.f[22]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    st32((c.r[2].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 52u), c.f[0]);
    st32((c.r[2].w[0] + 60u), c.f[1]);
    st32((c.r[2].w[0] + 64u), c.f[1]);
    st32((c.r[2].w[0] + 72u), 0u);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[21].w[0] + 376u), 0u);
    st32((c.r[21].w[0] + 372u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[23] = c.r[1].w[0];
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F35Cu);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x0024F35Cu) [[unlikely]] return; }
L_0024F35C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F36Cu);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x0024F36Cu) [[unlikely]] return; }
L_0024F36C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 18800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F380u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x0024F380u) [[unlikely]] return; }
L_0024F380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F390u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x0024F390u) [[unlikely]] return; }
L_0024F390:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3A8u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0024F3A8u) [[unlikely]] return; }
L_0024F3A8:
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3BCu);  if (depth < kMaxDepth) unit_0090(c, 190u, depth + 1u); else { c.pc = 0x00341CA0u; return; } if (c.pc != 0x0024F3BCu) [[unlikely]] return; }
L_0024F3BC:
    set32(c.r[3], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 3;
L_0024F3C8:
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 4;
L_0024F3D8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F404; } }
    c.budget -= 1;
L_0024F3E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F880; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F880; } }
L_0024F404:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0024F658; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28264u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0024F430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 28268u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F458; } }
L_0024F430:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F448u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0024F448u) [[unlikely]] return; }
L_0024F448:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18768u);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0024F458:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[21].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28228u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F51C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u - 32768u);
    c.r[2].d[0] = ld64((c.r[6].w[0] - 18800u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[6], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    set32(c.r[6], 0u + 14u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 45;
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[3].w[0] - 18800u), c.r[2].d[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F4CCu);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024F4CCu) [[unlikely]] return; }
L_0024F4CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    set32(c.r[6], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[2].d[0] = c.r[2].d[0] | 63ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull | 49152ull;
    c.r[4].d[0] = c.r[4].d[0] << 21;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[2].w[0] - 18832u), c.r[3].d[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F5B8; } }
L_0024F51C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], 0u - 32768u);
    c.r[2].d[0] = ld64((c.r[3].w[0] - 18800u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[6], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    set32(c.r[6], 0u + 14u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 45;
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[3].w[0] - 18800u), c.r[2].d[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F57Cu);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024F57Cu) [[unlikely]] return; }
L_0024F57C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    set32(c.r[6], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[2].d[0] = c.r[2].d[0] | 63ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[6].w[0] - 18832u), c.r[3].d[0]);
    c.budget -= 15;
L_0024F5B8:
    set32(c.r[7], 0u + 4u);
    set32(c.r[6], 0u + 108u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5D4u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x0024F5D4u) [[unlikely]] return; }
L_0024F5D4:
    ld128((c.r[18].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5E4u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0024F5E4u) [[unlikely]] return; }
L_0024F5E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18832u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5FCu);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0024F5FCu) [[unlikely]] return; }
L_0024F5FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 18848u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    set32(c.r[7], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[6], 0u + 16u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[23].w[0] + 20u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[30].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[30].w[0] - 4848u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[30].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[30].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F648u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0024F648u) [[unlikely]] return; }
L_0024F648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 4;
L_0024F658:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[22] = ld32((c.r[2].w[0] + 76u));
    c.f[21] = ld32((c.r[2].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.f[20] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F67C; } }
    st32((c.r[20].w[0] + 48u), c.f[22]);
    c.budget -= 1;
L_0024F67C:
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F694; } }
    st32((c.r[20].w[0] + 60u), c.f[22]);
    c.budget -= 1;
L_0024F694:
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F6AC; } }
    st32((c.r[20].w[0] + 52u), c.f[20]);
    c.budget -= 1;
L_0024F6AC:
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F6C4; } }
    st32((c.r[20].w[0] + 64u), c.f[20]);
    c.budget -= 1;
L_0024F6C4:
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F6DC; } }
    st32((c.r[20].w[0] + 56u), c.f[21]);
    c.budget -= 1;
L_0024F6DC:
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F6F4; } }
    st32((c.r[20].w[0] + 68u), c.f[21]);
    c.budget -= 1;
L_0024F6F4:
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[20].w[0] + 48u));
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F72Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024F72Cu) [[unlikely]] return; }
L_0024F72C:
    c.f[13] = ld32((c.r[20].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[20].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F74Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024F74Cu) [[unlikely]] return; }
L_0024F74C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F760u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0024F760u) [[unlikely]] return; }
L_0024F760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F778u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024F778u) [[unlikely]] return; }
L_0024F778:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F78Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0024F78Cu) [[unlikely]] return; }
L_0024F78C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F798u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0024F798u) [[unlikely]] return; }
L_0024F798:
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7B8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024F7B8u) [[unlikely]] return; }
L_0024F7B8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7CCu);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x0024F7CCu) [[unlikely]] return; }
L_0024F7CC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7D8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0024F7D8u) [[unlikely]] return; }
L_0024F7D8:
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[9], 0u + 448u);
    set32(c.r[4], c.r[2].w[0] - 18880u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[14] = ld32((c.r[2].w[0] + 152u));
    c.f[12] = ld32((c.r[2].w[0] + 144u));
    c.f[13] = ld32((c.r[2].w[0] + 148u));
    c.f[14] = fp::add(c.f[21], c.f[14]);
    c.f[12] = fp::add(c.f[22], c.f[12]);
    c.f[13] = fp::add(c.f[20], c.f[13]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F834u);  if (depth < kMaxDepth) unit_0057(c, 239u, depth + 1u); else { c.pc = 0x0025F708u; return; } if (c.pc != 0x0024F834u) [[unlikely]] return; }
L_0024F834:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F84C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 376u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 376u), c.r[2].w[0]);
    c.budget -= 3;
L_0024F84C:
    set32(c.r[2], ld32((c.r[21].w[0] + 372u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    st32((c.r[21].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F874u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0024F874u) [[unlikely]] return; }
L_0024F874:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F3E8u | kUnwind; return; } goto L_0024F3E8; } }
L_0024F880:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[8], 0u + 48u);
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F89Cu);  if (depth < kMaxDepth) unit_0057(c, 248u, depth + 1u); else { c.pc = 0x0025F8F0u; return; } if (c.pc != 0x0024F89Cu) [[unlikely]] return; }
L_0024F89C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F3D8u | kUnwind; return; } goto L_0024F3D8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0024F908; } }
    set32(c.r[2], 0u + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0024F8B8u);  goto L_0024F8BC; }
L_0024F8BC:
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 18880u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8F8u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x0024F8F8u) [[unlikely]] return; }
L_0024F8F8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F908u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0024F908u) [[unlikely]] return; }
L_0024F908:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F3C8u | kUnwind; return; } goto L_0024F3C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F92Cu);  if (depth < kMaxDepth) unit_00A1(c, 99u, depth + 1u); else { c.pc = 0x00384FA0u; return; } if (c.pc != 0x0024F92Cu) [[unlikely]] return; }
L_0024F92C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F938u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x0024F938u) [[unlikely]] return; }
L_0024F938:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F944u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x0024F944u) [[unlikely]] return; }
L_0024F944:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F990:
    set32(c.r[2], 0u + 448u);
    set32(c.r[29], c.r[29].w[0] - 480u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[8], c.r[3].w[0] + c.r[30].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[8].w[0] + 80u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 472u), c.f[31]);
    st32((c.r[29].w[0] + 464u), c.f[30]);
    st32((c.r[29].w[0] + 456u), c.f[29]);
    st32((c.r[29].w[0] + 448u), c.f[28]);
    st32((c.r[29].w[0] + 440u), c.f[27]);
    st32((c.r[29].w[0] + 432u), c.f[26]);
    st32((c.r[29].w[0] + 424u), c.f[25]);
    st32((c.r[29].w[0] + 416u), c.f[24]);
    st32((c.r[29].w[0] + 408u), c.f[23]);
    st32((c.r[29].w[0] + 400u), c.f[22]);
    st32((c.r[29].w[0] + 392u), c.f[21]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA30u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0024FA30u) [[unlikely]] return; }
L_0024FA30:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    st32((c.r[18].w[0] + 60u), c.f[1]);
    st32((c.r[18].w[0] + 64u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA78u);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x0024FA78u) [[unlikely]] return; }
L_0024FA78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA88u);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x0024FA88u) [[unlikely]] return; }
L_0024FA88:
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAA0u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0024FAA0u) [[unlikely]] return; }
L_0024FAA0:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    set32(c.r[20], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 8;
L_0024FAC0:
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 4;
L_0024FAD0:
    st32((c.r[29].w[0] + 200u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FAFC; } }
    c.budget -= 1;
L_0024FAE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 28u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 28u, depth); } }
L_0024FAFC:
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024FD7C; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28228u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024FC00; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB38u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0024FB38u) [[unlikely]] return; }
L_0024FB38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 32768u);
    c.r[6].d[0] = ld64((c.r[4].w[0] - 18800u));
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[4], c.r[4].w[0] - 18800u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], 0u + 1u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] - 18768u);
    set32(c.r[4], 0u + 14u);
    set32(c.r[5], ld32((c.r[3].w[0] + 320u)));
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    set32(c.r[4], ld32((c.r[7].w[0] - 364u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[2].w[0] - 18800u), c.r[6].d[0]);
    set32(c.r[3], c.r[3].w[0] - 18800u);
    st64((c.r[3].w[0] + 8u), c.r[8].d[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBB4u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024FBB4u) [[unlikely]] return; }
L_0024FBB4:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[5].d[0] = c.r[5].d[0] << 21;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 19;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FCCC; } }
L_0024FC00:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC18u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0024FC18u) [[unlikely]] return; }
L_0024FC18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 32768u);
    c.r[6].d[0] = ld64((c.r[4].w[0] - 18800u));
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    set32(c.r[4], c.r[4].w[0] - 18800u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], 0u + 1u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] - 18768u);
    set32(c.r[4], 0u + 14u);
    set32(c.r[5], ld32((c.r[3].w[0] + 320u)));
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    set32(c.r[4], ld32((c.r[7].w[0] - 364u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[2].w[0] - 18800u), c.r[6].d[0]);
    set32(c.r[3], c.r[3].w[0] - 18800u);
    st64((c.r[3].w[0] + 8u), c.r[8].d[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC94u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0024FC94u) [[unlikely]] return; }
L_0024FC94:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] | 63ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 19;
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - 18832u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_0024FCCC:
    st64((c.r[6].w[0] - 18832u), c.r[3].d[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[6], 0u + 108u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCECu);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x0024FCECu) [[unlikely]] return; }
L_0024FCEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18800u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD04u);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0024FD04u) [[unlikely]] return; }
L_0024FD04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 18832u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD1Cu);  if (depth < kMaxDepth) unit_00A1(c, 114u, depth + 1u); else { c.pc = 0x003852E8u; return; } if (c.pc != 0x0024FD1Cu) [[unlikely]] return; }
L_0024FD1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[2], c.r[2].w[0] - 18848u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[2].w[0] - 4848u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4848u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    st32((c.r[2].w[0] - 4848u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD6Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0024FD6Cu) [[unlikely]] return; }
L_0024FD6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18880u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] - 18880u), c.r[3].w[0]);
    c.budget -= 4;
L_0024FD7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.f[12] = c.r[22].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    set32(c.r[16], 0u - 1u);
    c.f[24] = ld32((c.r[2].w[0] + 76u));
    c.f[22] = ld32((c.r[2].w[0] + 80u));
    c.f[21] = ld32((c.r[2].w[0] + 84u));
    c.f[28] = ld32((c.r[2].w[0] + 88u));
    c.f[27] = ld32((c.r[2].w[0] + 92u));
    c.f[25] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[13] = c.r[22].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 108u));
    c.f[31] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.f[14] = c.r[22].w[0];
    c.f[2] = ld32((c.r[2].w[0] + 112u));
    c.f[15] = c.r[22].w[0];
    st32((c.r[29].w[0] + 188u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    c.f[29] = 0u;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 124u));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[30] = fp::mul(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] + 128u));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.f[23] = fp::mul(c.f[2], c.f[1]);
    c.f[26] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE28u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024FE28u) [[unlikely]] return; }
L_0024FE28:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0024FEAC; } }
    c.f[2] = c.r[22].w[0];
    c.f[13] = c.f[22];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[21];
    c.f[12] = c.f[24];
    c.f[29] = fp::add(c.f[20], c.f[2]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE60u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024FE60u) [[unlikely]] return; }
L_0024FE60:
    set32(c.r[5], ld32((c.r[23].w[0] + 24u)));
    set32(c.r[2], 0u + 448u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE84u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0024FE84u) [[unlikely]] return; }
L_0024FE84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE98u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024FE98u) [[unlikely]] return; }
L_0024FE98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEACu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0024FEACu) [[unlikely]] return; }
L_0024FEAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0024FF2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[27];
    c.f[14] = c.f[25];
    c.f[12] = c.f[28];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[29] = fp::add(c.f[29], c.f[23]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEE0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024FEE0u) [[unlikely]] return; }
L_0024FEE0:
    set32(c.r[5], ld32((c.r[23].w[0] + 28u)));
    set32(c.r[2], 0u + 448u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF04u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0024FF04u) [[unlikely]] return; }
L_0024FF04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF18u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024FF18u) [[unlikely]] return; }
L_0024FF18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF2Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0024FF2Cu) [[unlikely]] return; }
L_0024FF2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0024FFAC; } }
    c.f[12] = ld32((c.r[29].w[0] + 180u));
    c.f[13] = c.f[31];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 184u));
    c.f[29] = fp::add(c.f[29], c.f[26]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF60u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024FF60u) [[unlikely]] return; }
L_0024FF60:
    set32(c.r[5], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[2], 0u + 448u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF84u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0024FF84u) [[unlikely]] return; }
L_0024FF84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[26];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF98u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0024FF98u) [[unlikely]] return; }
L_0024FF98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFACu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0024FFACu) [[unlikely]] return; }
L_0024FFAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { [[clang::musttail]] return unit_0054(c, 4u, depth); } }
    c.f[12] = ld32((c.r[29].w[0] + 188u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[29] = fp::add(c.f[29], c.f[30]);
    c.f[13] = ld32((c.r[29].w[0] + 192u));
    c.f[14] = ld32((c.r[29].w[0] + 196u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFE0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0024FFE0u) [[unlikely]] return; }
L_0024FFE0:
    set32(c.r[5], ld32((c.r[23].w[0] + 36u)));
    set32(c.r[2], 0u + 448u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250004u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00250004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0054(c, 2u, depth);
}

}
