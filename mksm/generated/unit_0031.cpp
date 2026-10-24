#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_001C4A88;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0031[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0,
    309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351,
    0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
};

void unit_0031(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C4000;
    case 2u: goto L_001C4008;
    case 3u: goto L_001C4014;
    case 4u: goto L_001C4024;
    case 5u: goto L_001C4050;
    case 6u: goto L_001C4078;
    case 7u: goto L_001C40A0;
    case 8u: goto L_001C40B0;
    case 9u: goto L_001C40BC;
    case 10u: goto L_001C40E8;
    case 11u: goto L_001C4104;
    case 12u: goto L_001C4118;
    case 13u: goto L_001C4128;
    case 14u: goto L_001C4134;
    case 15u: goto L_001C4154;
    case 16u: goto L_001C4168;
    case 17u: goto L_001C4184;
    case 18u: goto L_001C4198;
    case 19u: goto L_001C41C4;
    case 20u: goto L_001C41EC;
    case 21u: goto L_001C41FC;
    case 22u: goto L_001C4208;
    case 23u: goto L_001C422C;
    case 24u: goto L_001C4240;
    case 25u: goto L_001C4264;
    case 26u: goto L_001C4274;
    case 27u: goto L_001C4288;
    case 28u: goto L_001C429C;
    case 29u: goto L_001C42B0;
    case 30u: goto L_001C42D4;
    case 31u: goto L_001C42E0;
    case 32u: goto L_001C42EC;
    case 33u: goto L_001C430C;
    case 34u: goto L_001C4320;
    case 35u: goto L_001C4338;
    case 36u: goto L_001C4348;
    case 37u: goto L_001C4360;
    case 38u: goto L_001C4370;
    case 39u: goto L_001C4390;
    case 40u: goto L_001C43D0;
    case 41u: goto L_001C43E4;
    case 42u: goto L_001C43F8;
    case 43u: goto L_001C4414;
    case 44u: goto L_001C4428;
    case 45u: goto L_001C4444;
    case 46u: goto L_001C4458;
    case 47u: goto L_001C4468;
    case 48u: goto L_001C4478;
    case 49u: goto L_001C448C;
    case 50u: goto L_001C44A0;
    case 51u: goto L_001C44B4;
    case 52u: goto L_001C44C8;
    case 53u: goto L_001C44E8;
    case 54u: goto L_001C4508;
    case 55u: goto L_001C4520;
    case 56u: goto L_001C4534;
    case 57u: goto L_001C4548;
    case 58u: goto L_001C4560;
    case 59u: goto L_001C4578;
    case 60u: goto L_001C4590;
    case 61u: goto L_001C45AC;
    case 62u: goto L_001C45C0;
    case 63u: goto L_001C4628;
    case 64u: goto L_001C4634;
    case 65u: goto L_001C4664;
    case 66u: goto L_001C46A0;
    case 67u: goto L_001C46B0;
    case 68u: goto L_001C46BC;
    case 69u: goto L_001C46E0;
    case 70u: goto L_001C4708;
    case 71u: goto L_001C4740;
    case 72u: goto L_001C474C;
    case 73u: goto L_001C4758;
    case 74u: goto L_001C4784;
    case 75u: goto L_001C4794;
    case 76u: goto L_001C47AC;
    case 77u: goto L_001C47BC;
    case 78u: goto L_001C47D8;
    case 79u: goto L_001C47F0;
    case 80u: goto L_001C480C;
    case 81u: goto L_001C4820;
    case 82u: goto L_001C4830;
    case 83u: goto L_001C4848;
    case 84u: goto L_001C4858;
    case 85u: goto L_001C4884;
    case 86u: goto L_001C4890;
    case 87u: goto L_001C48A0;
    case 88u: goto L_001C48E0;
    case 89u: goto L_001C48F0;
    case 90u: goto L_001C4900;
    case 91u: goto L_001C4918;
    case 92u: goto L_001C4940;
    case 93u: goto L_001C4978;
    case 94u: goto L_001C4998;
    case 95u: goto L_001C49B4;
    case 96u: goto L_001C49C4;
    case 97u: goto L_001C49D0;
    case 98u: goto L_001C4A00;
    case 99u: goto L_001C4A14;
    case 100u: goto L_001C4A28;
    case 101u: goto L_001C4A40;
    case 102u: goto L_001C4A50;
    case 103u: goto L_001C4A60;
    case 104u: goto L_001C4A78;
    case 105u: goto L_001C4A88;
    case 106u: goto L_001C4AD8;
    case 107u: goto L_001C4AEC;
    case 108u: goto L_001C4B14;
    case 109u: goto L_001C4B58;
    case 110u: goto L_001C4B70;
    case 111u: goto L_001C4B80;
    case 112u: goto L_001C4BA8;
    case 113u: goto L_001C4BE0;
    case 114u: goto L_001C4C48;
    case 115u: goto L_001C4C80;
    case 116u: goto L_001C4CAC;
    case 117u: goto L_001C4D20;
    case 118u: goto L_001C4D5C;
    case 119u: goto L_001C4D74;
    case 120u: goto L_001C4E00;
    case 121u: goto L_001C4E20;
    case 122u: goto L_001C4E74;
    case 123u: goto L_001C4E94;
    case 124u: goto L_001C4EF4;
    case 125u: goto L_001C4F30;
    case 126u: goto L_001C4F58;
    case 127u: goto L_001C4FA4;
    case 128u: goto L_001C4FD8;
    case 129u: goto L_001C5014;
    case 130u: goto L_001C5024;
    case 131u: goto L_001C5044;
    case 132u: goto L_001C509C;
    case 133u: goto L_001C5110;
    case 134u: goto L_001C5138;
    case 135u: goto L_001C5184;
    case 136u: goto L_001C51A8;
    case 137u: goto L_001C51E0;
    case 138u: goto L_001C5208;
    case 139u: goto L_001C5224;
    case 140u: goto L_001C5280;
    case 141u: goto L_001C52C0;
    case 142u: goto L_001C52F0;
    case 143u: goto L_001C5318;
    case 144u: goto L_001C5340;
    case 145u: goto L_001C536C;
    case 146u: goto L_001C5398;
    case 147u: goto L_001C53D0;
    case 148u: goto L_001C5400;
    case 149u: goto L_001C5458;
    case 150u: goto L_001C5468;
    case 151u: goto L_001C5480;
    case 152u: goto L_001C5490;
    case 153u: goto L_001C54C8;
    case 154u: goto L_001C5518;
    case 155u: goto L_001C5558;
    case 156u: goto L_001C5564;
    case 157u: goto L_001C55AC;
    case 158u: goto L_001C55B4;
    case 159u: goto L_001C55D8;
    case 160u: goto L_001C5628;
    case 161u: goto L_001C567C;
    case 162u: goto L_001C569C;
    case 163u: goto L_001C56C8;
    case 164u: goto L_001C56EC;
    case 165u: goto L_001C5710;
    case 166u: goto L_001C5734;
    case 167u: goto L_001C5778;
    case 168u: goto L_001C5790;
    case 169u: goto L_001C57B8;
    case 170u: goto L_001C57C8;
    case 171u: goto L_001C57D8;
    case 172u: goto L_001C5800;
    case 173u: goto L_001C5828;
    case 174u: goto L_001C5848;
    case 175u: goto L_001C5870;
    case 176u: goto L_001C5888;
    case 177u: goto L_001C58B4;
    case 178u: goto L_001C58C8;
    case 179u: goto L_001C58DC;
    case 180u: goto L_001C58F0;
    case 181u: goto L_001C5908;
    case 182u: goto L_001C5938;
    case 183u: goto L_001C5978;
    case 184u: goto L_001C5984;
    case 185u: goto L_001C59D0;
    case 186u: goto L_001C59E8;
    case 187u: goto L_001C5A04;
    case 188u: goto L_001C5A20;
    case 189u: goto L_001C5A5C;
    case 190u: goto L_001C5A88;
    case 191u: goto L_001C5AA8;
    case 192u: goto L_001C5AE0;
    case 193u: goto L_001C5B0C;
    case 194u: goto L_001C5B2C;
    case 195u: goto L_001C5B4C;
    case 196u: goto L_001C5B6C;
    case 197u: goto L_001C5B8C;
    case 198u: goto L_001C5BB0;
    case 199u: goto L_001C5BC8;
    case 200u: goto L_001C5BD8;
    case 201u: goto L_001C5C0C;
    case 202u: goto L_001C5C28;
    case 203u: goto L_001C5C38;
    case 204u: goto L_001C5C50;
    case 205u: goto L_001C5C6C;
    case 206u: goto L_001C5C8C;
    case 207u: goto L_001C5CA0;
    case 208u: goto L_001C5CC0;
    case 209u: goto L_001C5CE8;
    case 210u: goto L_001C5D1C;
    case 211u: goto L_001C5D38;
    case 212u: goto L_001C5D90;
    case 213u: goto L_001C5DA0;
    case 214u: goto L_001C5DF8;
    case 215u: goto L_001C5E08;
    case 216u: goto L_001C5E48;
    case 217u: goto L_001C5E5C;
    case 218u: goto L_001C5E90;
    case 219u: goto L_001C5EE0;
    case 220u: goto L_001C5EF8;
    case 221u: goto L_001C5F30;
    case 222u: goto L_001C5F78;
    case 223u: goto L_001C5FA8;
    case 224u: goto L_001C5FC8;
    case 225u: goto L_001C5FD8;
    case 226u: goto L_001C6018;
    case 227u: goto L_001C603C;
    case 228u: goto L_001C6058;
    case 229u: goto L_001C6068;
    case 230u: goto L_001C60D4;
    case 231u: goto L_001C6118;
    case 232u: goto L_001C614C;
    case 233u: goto L_001C6168;
    case 234u: goto L_001C6198;
    case 235u: goto L_001C61C4;
    case 236u: goto L_001C6200;
    case 237u: goto L_001C6218;
    case 238u: goto L_001C6268;
    case 239u: goto L_001C6284;
    case 240u: goto L_001C6298;
    case 241u: goto L_001C6304;
    case 242u: goto L_001C6334;
    case 243u: goto L_001C6354;
    case 244u: goto L_001C6368;
    case 245u: goto L_001C63A8;
    case 246u: goto L_001C63C4;
    case 247u: goto L_001C63E8;
    case 248u: goto L_001C6418;
    case 249u: goto L_001C6494;
    case 250u: goto L_001C64A0;
    case 251u: goto L_001C64B8;
    case 252u: goto L_001C6510;
    case 253u: goto L_001C6568;
    case 254u: goto L_001C657C;
    case 255u: goto L_001C6598;
    case 256u: goto L_001C65A8;
    case 257u: goto L_001C65D8;
    case 258u: goto L_001C65E8;
    case 259u: goto L_001C6608;
    case 260u: goto L_001C6618;
    case 261u: goto L_001C6638;
    case 262u: goto L_001C6694;
    case 263u: goto L_001C66A8;
    case 264u: goto L_001C66B8;
    case 265u: goto L_001C66C8;
    case 266u: goto L_001C66F4;
    case 267u: goto L_001C6714;
    case 268u: goto L_001C6734;
    case 269u: goto L_001C6748;
    case 270u: goto L_001C679C;
    case 271u: goto L_001C67BC;
    case 272u: goto L_001C67F8;
    case 273u: goto L_001C6820;
    case 274u: goto L_001C6854;
    case 275u: goto L_001C6878;
    case 276u: goto L_001C6890;
    case 277u: goto L_001C68A8;
    case 278u: goto L_001C68E8;
    case 279u: goto L_001C692C;
    case 280u: goto L_001C695C;
    case 281u: goto L_001C6978;
    case 282u: goto L_001C6988;
    case 283u: goto L_001C69B0;
    case 284u: goto L_001C69D8;
    case 285u: goto L_001C6A00;
    case 286u: goto L_001C6A4C;
    case 287u: goto L_001C6A68;
    case 288u: goto L_001C6AA4;
    case 289u: goto L_001C6AC0;
    case 290u: goto L_001C6AD0;
    case 291u: goto L_001C6AD8;
    case 292u: goto L_001C6AF8;
    case 293u: goto L_001C6B48;
    case 294u: goto L_001C6B58;
    case 295u: goto L_001C6B74;
    case 296u: goto L_001C6B88;
    case 297u: goto L_001C6BDC;
    case 298u: goto L_001C6BFC;
    case 299u: goto L_001C6C40;
    case 300u: goto L_001C6C84;
    case 301u: goto L_001C6CB4;
    case 302u: goto L_001C6CD0;
    case 303u: goto L_001C6CE0;
    case 304u: goto L_001C6D08;
    case 305u: goto L_001C6D30;
    case 306u: goto L_001C6D58;
    case 307u: goto L_001C6D70;
    case 308u: goto L_001C6D78;
    case 309u: goto L_001C6D80;
    case 310u: goto L_001C6D88;
    case 311u: goto L_001C6DA0;
    case 312u: goto L_001C6DB0;
    case 313u: goto L_001C6E30;
    case 314u: goto L_001C6E68;
    case 315u: goto L_001C6EA0;
    case 316u: goto L_001C6EAC;
    case 317u: goto L_001C6EF0;
    case 318u: goto L_001C6FD8;
    case 319u: goto L_001C7030;
    case 320u: goto L_001C70C8;
    case 321u: goto L_001C70E0;
    case 322u: goto L_001C7104;
    case 323u: goto L_001C7114;
    case 324u: goto L_001C7144;
    case 325u: goto L_001C7174;
    case 326u: goto L_001C7188;
    case 327u: goto L_001C71A8;
    case 328u: goto L_001C71B4;
    case 329u: goto L_001C71D0;
    case 330u: goto L_001C71E8;
    case 331u: goto L_001C7200;
    case 332u: goto L_001C7218;
    case 333u: goto L_001C7224;
    case 334u: goto L_001C7238;
    case 335u: goto L_001C7250;
    case 336u: goto L_001C7274;
    case 337u: goto L_001C7290;
    case 338u: goto L_001C72B0;
    case 339u: goto L_001C72C8;
    case 340u: goto L_001C72E0;
    case 341u: goto L_001C72EC;
    case 342u: goto L_001C7330;
    case 343u: goto L_001C734C;
    case 344u: goto L_001C7368;
    case 345u: goto L_001C7388;
    case 346u: goto L_001C7408;
    case 347u: goto L_001C742C;
    case 348u: goto L_001C75D8;
    case 349u: goto L_001C7640;
    case 350u: goto L_001C7674;
    case 351u: goto L_001C767C;
    case 352u: goto L_001C7690;
    case 353u: goto L_001C769C;
    case 354u: goto L_001C76B8;
    case 355u: goto L_001C76EC;
    case 356u: goto L_001C771C;
    case 357u: goto L_001C7734;
    case 358u: goto L_001C7748;
    case 359u: goto L_001C7760;
    case 360u: goto L_001C7780;
    case 361u: goto L_001C77C4;
    case 362u: goto L_001C7818;
    case 363u: goto L_001C7828;
    case 364u: goto L_001C7834;
    case 365u: goto L_001C7844;
    case 366u: goto L_001C7874;
    case 367u: goto L_001C7884;
    case 368u: goto L_001C7890;
    case 369u: goto L_001C78A0;
    case 370u: goto L_001C78C0;
    case 371u: goto L_001C7928;
    case 372u: goto L_001C7940;
    case 373u: goto L_001C7980;
    case 374u: goto L_001C79B0;
    case 375u: goto L_001C79C0;
    case 376u: goto L_001C7A10;
    case 377u: goto L_001C7A60;
    case 378u: goto L_001C7A90;
    case 379u: goto L_001C7AA0;
    case 380u: goto L_001C7AAC;
    case 381u: goto L_001C7AF0;
    case 382u: goto L_001C7B48;
    case 383u: goto L_001C7B58;
    case 384u: goto L_001C7B88;
    case 385u: goto L_001C7BCC;
    case 386u: goto L_001C7BEC;
    case 387u: goto L_001C7C14;
    case 388u: goto L_001C7C4C;
    case 389u: goto L_001C7C74;
    case 390u: goto L_001C7CC4;
    case 391u: goto L_001C7CD4;
    case 392u: goto L_001C7D10;
    case 393u: goto L_001C7D20;
    case 394u: goto L_001C7D4C;
    case 395u: goto L_001C7D84;
    case 396u: goto L_001C7DB0;
    case 397u: goto L_001C7E00;
    case 398u: goto L_001C7E10;
    case 399u: goto L_001C7E4C;
    case 400u: goto L_001C7E5C;
    case 401u: goto L_001C7E88;
    case 402u: goto L_001C7EC0;
    case 403u: goto L_001C7EE8;
    case 404u: goto L_001C7F3C;
    case 405u: goto L_001C7F4C;
    case 406u: goto L_001C7F88;
    case 407u: goto L_001C7F98;
    case 408u: goto L_001C7FC4;
    case 409u: goto L_001C7FFC;
    default: bad_entry(c, 0x001C4000u); return;
    }
L_001C4000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4008u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001C4008u) [[unlikely]] return; }
L_001C4008:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4014u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001C4014u) [[unlikely]] return; }
L_001C4014:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001C4024:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C403C; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 2;
L_001C403C:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4050u);  if (depth < kMaxDepth) unit_0030(c, 4u, depth + 1u); else { c.pc = 0x001C0038u; return; } if (c.pc != 0x001C4050u) [[unlikely]] return; }
L_001C4050:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001C4064; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4078; } }
L_001C4064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4078u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001C4078u) [[unlikely]] return; }
L_001C4078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C40CC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 98u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C40CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40A0u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001C40A0u) [[unlikely]] return; }
L_001C40A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40B0u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001C40B0u) [[unlikely]] return; }
L_001C40B0:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40BCu);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001C40BCu) [[unlikely]] return; }
L_001C40BC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001C40CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C40E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4104u);  if (depth < kMaxDepth) unit_002F(c, 138u, depth + 1u); else { c.pc = 0x001BD5D8u; return; } if (c.pc != 0x001C4104u) [[unlikely]] return; }
L_001C4104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C4154; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4118u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x001C4118u) [[unlikely]] return; }
L_001C4118:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4128u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001C4128u) [[unlikely]] return; }
L_001C4128:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4134u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001C4134u) [[unlikely]] return; }
L_001C4134:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4154u);  if (depth < kMaxDepth) unit_0089(c, 176u, depth + 1u); else { c.pc = 0x00325F10u; return; } if (c.pc != 0x001C4154u) [[unlikely]] return; }
L_001C4154:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4168:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4184u);  if (depth < kMaxDepth) unit_002F(c, 159u, depth + 1u); else { c.pc = 0x001BDDD0u; return; } if (c.pc != 0x001C4184u) [[unlikely]] return; }
L_001C4184:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4198:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001C4218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41C4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001C41C4u) [[unlikely]] return; }
L_001C41C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4218; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 98u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41ECu);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001C41ECu) [[unlikely]] return; }
L_001C41EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41FCu);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001C41FCu) [[unlikely]] return; }
L_001C41FC:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4208u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001C4208u) [[unlikely]] return; }
L_001C4208:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001C4218:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C422Cu);  if (depth < kMaxDepth) unit_0030(c, 4u, depth + 1u); else { c.pc = 0x001C0038u; return; } if (c.pc != 0x001C422Cu) [[unlikely]] return; }
L_001C422C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4264u);  if (depth < kMaxDepth) unit_003B(c, 148u, depth + 1u); else { c.pc = 0x001EE408u; return; } if (c.pc != 0x001C4264u) [[unlikely]] return; }
L_001C4264:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4274u);  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C0618u; return; } if (c.pc != 0x001C4274u) [[unlikely]] return; }
L_001C4274:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C429Cu);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C0258u; return; } if (c.pc != 0x001C429Cu) [[unlikely]] return; }
L_001C429C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C42B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42D4u);  if (depth < kMaxDepth) unit_002F(c, 159u, depth + 1u); else { c.pc = 0x001BDDD0u; return; } if (c.pc != 0x001C42D4u) [[unlikely]] return; }
L_001C42D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42E0u);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C0608u; return; } if (c.pc != 0x001C42E0u) [[unlikely]] return; }
L_001C42E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42ECu);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C0258u; return; } if (c.pc != 0x001C42ECu) [[unlikely]] return; }
L_001C42EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4300; } }
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0] + 120u), 0u);
    c.budget -= 2;
L_001C4300:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C430Cu);  if (depth < kMaxDepth) unit_0019(c, 281u, depth + 1u); else { c.pc = 0x001670C0u; return; } if (c.pc != 0x001C430Cu) [[unlikely]] return; }
L_001C430C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4338u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001C4338u) [[unlikely]] return; }
L_001C4338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4360u);  if (depth < kMaxDepth) unit_002F(c, 268u, depth + 1u); else { c.pc = 0x001BFA68u; return; } if (c.pc != 0x001C4360u) [[unlikely]] return; }
L_001C4360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4390u);  if (depth < kMaxDepth) unit_006E(c, 135u, depth + 1u); else { c.pc = 0x002B9A68u; return; } if (c.pc != 0x001C4390u) [[unlikely]] return; }
L_001C4390:
    set32(c.r[3], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C43C4; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C43C4; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C43C4; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C43E4; } }
L_001C43C4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43D0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001C43D0u) [[unlikely]] return; }
L_001C43D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43E4u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001C43E4u) [[unlikely]] return; }
L_001C43E4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C43F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4414u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001C4414u) [[unlikely]] return; }
L_001C4414:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 10196u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4444u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001C4444u) [[unlikely]] return; }
L_001C4444:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4458:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4468u);  if (depth < kMaxDepth) unit_002B(c, 209u, depth + 1u); else { c.pc = 0x001ADD10u; return; } if (c.pc != 0x001C4468u) [[unlikely]] return; }
L_001C4468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C448Cu);  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F7108u; return; } if (c.pc != 0x001C448Cu) [[unlikely]] return; }
L_001C448C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C44A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44B4u);  if (depth < kMaxDepth) unit_003D(c, 188u, depth + 1u); else { c.pc = 0x001F7128u; return; } if (c.pc != 0x001C44B4u) [[unlikely]] return; }
L_001C44B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C44C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44E8u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001C44E8u) [[unlikely]] return; }
L_001C44E8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4508u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4508u) [[unlikely]] return; }
L_001C4508:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4534u);  if (depth < kMaxDepth) unit_003D(c, 191u, depth + 1u); else { c.pc = 0x001F71B8u; return; } if (c.pc != 0x001C4534u) [[unlikely]] return; }
L_001C4534:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4560u);  if (depth < kMaxDepth) unit_0009(c, 50u, depth + 1u); else { c.pc = 0x001255C8u; return; } if (c.pc != 0x001C4560u) [[unlikely]] return; }
L_001C4560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4578:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4590u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001C4590u) [[unlikely]] return; }
L_001C4590:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C45ACu) [[unlikely]] return; }
L_001C45AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C45C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C4664; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C45E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001C45FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4664; } }
L_001C45E8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C4634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4664; } }
L_001C45FC:
    set32(c.r[3], c.r[6].w[0] - 9u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(68ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 21216u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C4628:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4634:
    c.r[6].d[0] = c.r[6].d[0] | 16384ull;
    set32(c.r[3], c.r[6].w[0] - 16417u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(66ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C4664:
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C4690; } }
    set32(c.r[3], c.r[5].w[0] - 3u);
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C4690; } }
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001C4694; } }
L_001C4690:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C4694:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C46A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46B0u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001C46B0u) [[unlikely]] return; }
L_001C46B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46BCu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001C46BCu) [[unlikely]] return; }
L_001C46BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001C46F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C46E0u) [[unlikely]] return; }
L_001C46E0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C46F4; } }
L_001C46F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C46F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4708:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 7694u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(45ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C474C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20672u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C4740:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C474C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26388u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001C47C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4784u);  if (depth < kMaxDepth) unit_0009(c, 50u, depth + 1u); else { c.pc = 0x001255C8u; return; } if (c.pc != 0x001C4784u) [[unlikely]] return; }
L_001C4784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C47C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4794u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001C4794u) [[unlikely]] return; }
L_001C4794:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C47ACu) [[unlikely]] return; }
L_001C47AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C47C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47BCu);  if (depth < kMaxDepth) unit_0036(c, 454u, depth + 1u); else { c.pc = 0x001DB678u; return; } if (c.pc != 0x001C47BCu) [[unlikely]] return; }
L_001C47BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C47C8; } }
L_001C47C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C47C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C47D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47F0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001C47F0u) [[unlikely]] return; }
L_001C47F0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 184u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 188u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C480Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C480Cu) [[unlikely]] return; }
L_001C480C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4830u);  if (depth < kMaxDepth) unit_0006(c, 363u, depth + 1u); else { c.pc = 0x0011AFC8u; return; } if (c.pc != 0x001C4830u) [[unlikely]] return; }
L_001C4830:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4848u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4848u) [[unlikely]] return; }
L_001C4848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4858:
    set32(c.r[3], c.r[5].w[0] - 50u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(22ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20480u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C4884:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4890:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C48A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u + 52u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C48D8; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C48D8; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C48E0; } }
L_001C48D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48E0u);  if (depth < kMaxDepth) unit_0019(c, 294u, depth + 1u); else { c.pc = 0x00167308u; return; } if (c.pc != 0x001C48E0u) [[unlikely]] return; }
L_001C48E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C48F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 18336u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4900:
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4918:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4940u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x001C4940u) [[unlikely]] return; }
L_001C4940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C495C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u + 22u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C4960; } }
L_001C495C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C4960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4978:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4998u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001265F8u; return; } if (c.pc != 0x001C4998u) [[unlikely]] return; }
L_001C4998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C49AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C49EC; } }
L_001C49AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49B4u);  if (depth < kMaxDepth) unit_0036(c, 330u, depth + 1u); else { c.pc = 0x001DAA58u; return; } if (c.pc != 0x001C49B4u) [[unlikely]] return; }
L_001C49B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C49E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49C4u);  if (depth < kMaxDepth) unit_0036(c, 330u, depth + 1u); else { c.pc = 0x001DAA58u; return; } if (c.pc != 0x001C49C4u) [[unlikely]] return; }
L_001C49C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49D0u);  if (depth < kMaxDepth) unit_0000(c, 164u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x001C49D0u) [[unlikely]] return; }
L_001C49D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C49E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 13192u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C49EC; } }
L_001C49E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C49EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A14u);  if (depth < kMaxDepth) unit_0018(c, 332u, depth + 1u); else { c.pc = 0x00162E20u; return; } if (c.pc != 0x001C4A14u) [[unlikely]] return; }
L_001C4A14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4A28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A40u);  if (depth < kMaxDepth) unit_001A(c, 151u, depth + 1u); else { c.pc = 0x00169CB8u; return; } if (c.pc != 0x001C4A40u) [[unlikely]] return; }
L_001C4A40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A60u);  if (depth < kMaxDepth) unit_0006(c, 461u, depth + 1u); else { c.pc = 0x0011BBD8u; return; } if (c.pc != 0x001C4A60u) [[unlikely]] return; }
L_001C4A60:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4A78u) [[unlikely]] return; }
L_001C4A78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4A88:
    if (::decomp::hook_001C4A88.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_001C4A88, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 52u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C4AD0; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C4AD0; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C4AD0; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C4B38; } }
L_001C4AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AD8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001C4AD8u) [[unlikely]] return; }
L_001C4AD8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C4AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AECu);  if (depth < kMaxDepth) unit_0036(c, 124u, depth + 1u); else { c.pc = 0x001D8F08u; return; } if (c.pc != 0x001C4AECu) [[unlikely]] return; }
L_001C4AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4B2C; } }
L_001C4AF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 11264u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4B08; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_001C4B08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B14u);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174B90u; return; } if (c.pc != 0x001C4B14u) [[unlikely]] return; }
L_001C4B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4B2C; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_001C4B3C; } }
L_001C4B2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4B3C; } }
L_001C4B38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C4B3C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4B58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B70u);  if (depth < kMaxDepth) unit_0030(c, 290u, depth + 1u); else { c.pc = 0x001C3DC8u; return; } if (c.pc != 0x001C4B70u) [[unlikely]] return; }
L_001C4B70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4B80:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C4B98; } }
    set32(c.r[2], c.r[6].w[0] + 16u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001C4B98:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4BA8:
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[5], 0u + 268u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 14152u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001C4C64; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], 0u + 268u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001C4C60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C48u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001C4C48u) [[unlikely]] return; }
L_001C4C48:
    set32(c.r[3], 0u + 448u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
L_001C4C60:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001C4C64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CACu);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001C4CACu) [[unlikely]] return; }
L_001C4CAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 448u);
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4D08; } }
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    c.budget -= 4;
L_001C4D08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C4E00; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D5Cu);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001C4D5Cu) [[unlikely]] return; }
L_001C4D5C:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D74u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001C4D74u) [[unlikely]] return; }
L_001C4D74:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[8], 0u + 268u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[4].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 448u);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4DD0; } }
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    c.budget -= 4;
L_001C4DD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E00u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001C4E00u) [[unlikely]] return; }
L_001C4E00:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4E20:
    set32(c.r[29], c.r[29].w[0] - 608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 20384u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 512u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C4E64; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4E74; } }
L_001C4E64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E74u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C4E74u) [[unlikely]] return; }
L_001C4E74:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4EEC; } }
    set32(c.r[18], c.r[17].w[0] + 256u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001C4E94:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4E94u | kUnwind; return; } goto L_001C4E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4F24; } }
L_001C4EEC:
    set32(c.r[18], c.r[17].w[0] + 256u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001C4EF4:
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4EF4u | kUnwind; return; } goto L_001C4EF4; } }
L_001C4F24:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001C4F30:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C4F4C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4F30u | kUnwind; return; } goto L_001C4F30; } }
L_001C4F4C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001C4F94; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C4F58:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C4F74; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4F58u | kUnwind; return; } goto L_001C4F58; } }
L_001C4F74:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4F94; } }
    c.r[2].d[0] = c.r[5].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4F94; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001C4F94:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FA4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001C4FA4u) [[unlikely]] return; }
L_001C4FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C50E8; } }
    set32(c.r[5], c.r[20].w[0] + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 140u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_001C4FF4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_001C4FF4; } }
L_001C4FD8:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001C4FF4; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4FD8u | kUnwind; return; } goto L_001C4FD8; } }
L_001C4FF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C50E8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5014u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001C5014u) [[unlikely]] return; }
L_001C5014:
    set32(c.r[4], 0u + 264u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5024u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001C5024u) [[unlikely]] return; }
L_001C5024:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C509C; } }
L_001C5044:
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[5], (c.r[6].w[0] + 15u));
    ldr(c.r[5], (c.r[6].w[0] + 8u));
    ldl(c.r[7], (c.r[6].w[0] + 23u));
    ldr(c.r[7], (c.r[6].w[0] + 16u));
    ldl(c.r[8], (c.r[6].w[0] + 31u));
    ldr(c.r[8], (c.r[6].w[0] + 24u));
    sdl(c.r[2], (c.r[3].w[0] + 7u));
    sdr(c.r[2], (c.r[3].w[0]));
    sdl(c.r[5], (c.r[3].w[0] + 15u));
    sdr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5044u | kUnwind; return; } goto L_001C5044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C50CC; } }
L_001C509C:
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    c.r[2].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[9].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C509Cu | kUnwind; return; } goto L_001C509C; } }
L_001C50CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 7;
L_001C50E8:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 512u));
    set32(c.r[29], c.r[29].w[0] + 608u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5110:
    set32(c.r[6], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[6].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_001C5154; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C5154; } }
L_001C5138:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_001C5154; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5138u | kUnwind; return; } goto L_001C5138; } }
L_001C5154:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001C51A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C5184; } }
    st32((c.r[4].w[0] + 140u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5184:
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C51A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 2;
L_001C51A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C51A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C51F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C51F0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[17].w[0] - 31928u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51E0u);  if (depth < kMaxDepth) unit_0032(c, 93u, depth + 1u); else { c.pc = 0x001C8F38u; return; } if (c.pc != 0x001C51E0u) [[unlikely]] return; }
L_001C51E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[3], c.r[3].w[0] - 20368u);
    st32((c.r[17].w[0] - 31928u), c.r[3].w[0]);
    c.budget -= 4;
L_001C51F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5208:
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C527C; } }
    set32(c.r[2], c.r[6].w[0] + 256u);
    c.budget -= 1;
L_001C5224:
    ldl(c.r[5], (c.r[6].w[0] + 7u));
    ldr(c.r[5], (c.r[6].w[0]));
    ldl(c.r[7], (c.r[6].w[0] + 15u));
    ldr(c.r[7], (c.r[6].w[0] + 8u));
    ldl(c.r[8], (c.r[6].w[0] + 23u));
    ldr(c.r[8], (c.r[6].w[0] + 16u));
    ldl(c.r[9], (c.r[6].w[0] + 31u));
    ldr(c.r[9], (c.r[6].w[0] + 24u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[7], (c.r[3].w[0] + 15u));
    sdr(c.r[7], (c.r[3].w[0] + 8u));
    sdl(c.r[8], (c.r[3].w[0] + 23u));
    sdr(c.r[8], (c.r[3].w[0] + 16u));
    sdl(c.r[9], (c.r[3].w[0] + 31u));
    sdr(c.r[9], (c.r[3].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5224u | kUnwind; return; } goto L_001C5224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C52B0; } }
L_001C527C:
    set32(c.r[2], c.r[6].w[0] + 256u);
    c.budget -= 1;
L_001C5280:
    c.r[5].d[0] = ld64((c.r[6].w[0]));
    c.r[7].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[5].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5280u | kUnwind; return; } goto L_001C5280; } }
L_001C52B0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C52C0:
    set32(c.r[6], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[6].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_001C530C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C530C; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_001C52F0:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_001C530C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C52F0u | kUnwind; return; } goto L_001C52F0; } }
L_001C530C:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5318:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5344; } }
L_001C5340:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C5344:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C5374; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C536Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001C536Cu) [[unlikely]] return; }
L_001C536C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5340u | kUnwind; return; } goto L_001C5340; } }
L_001C5374:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5398:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] - 31928u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[17].w[0] + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C53D4; } }
    c.budget -= 1;
L_001C53D0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C53D4:
    set32(c.r[3], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001C5408; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5400u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001C5400u) [[unlikely]] return; }
L_001C5400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C53D0u | kUnwind; return; } goto L_001C53D0; } }
L_001C5408:
    set32(c.r[3], c.r[19].w[0] - 31924u);
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C5430; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5434; } }
L_001C5430:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C5434:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5458:
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5480u);  if (depth < kMaxDepth) unit_0031(c, 136u, depth + 1u); else { c.pc = 0x001C51A8u; return; } if (c.pc != 0x001C5480u) [[unlikely]] return; }
L_001C5480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001C54F0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001C54C8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_001C54E4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C54F4; } }
L_001C54E4:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C54C8u | kUnwind; return; } goto L_001C54C8; } }
L_001C54F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C54F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C55B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001C5540; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C5518:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5534; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5594; } }
L_001C5534:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5518u | kUnwind; return; } goto L_001C5518; } }
L_001C5540:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C5590; } }
L_001C5558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5564u);  if (depth < kMaxDepth) unit_0061(c, 69u, depth + 1u); else { c.pc = 0x00284B68u; return; } if (c.pc != 0x001C5564u) [[unlikely]] return; }
L_001C5564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5578; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5594; } }
L_001C5578:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5558u | kUnwind; return; } goto L_001C5558; } }
L_001C5590:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C5594:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C55B8; } }
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55ACu);  if (depth < kMaxDepth) unit_0061(c, 33u, depth + 1u); else { c.pc = 0x00284638u; return; } if (c.pc != 0x001C55ACu) [[unlikely]] return; }
L_001C55AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55B4u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x001C55B4u) [[unlikely]] return; }
L_001C55B4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_001C55B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C55D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 31752u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 31728u);
    set32(c.r[5], c.r[5].w[0] - 31704u);
    set32(c.r[6], c.r[6].w[0] - 31680u);
    set32(c.r[7], c.r[7].w[0] - 31656u);
    set32(c.r[8], 0u + 5u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5628:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C5744; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C5744; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 31776u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C567Cu);  if (depth < kMaxDepth) unit_0031(c, 159u, depth + 1u); else { c.pc = 0x001C55D8u; return; } if (c.pc != 0x001C567Cu) [[unlikely]] return; }
L_001C567C:
    set32(c.r[21], 0u + 2u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], 0u + 3u);
    set32(c.r[16], c.r[16].w[0] - 31752u);
    set32(c.r[23], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C569Cu);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C569Cu) [[unlikely]] return; }
L_001C569C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[17].w[0] - 31728u);
    set32(c.r[18], c.r[18].w[0] - 20336u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56C8u);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C56C8u) [[unlikely]] return; }
L_001C56C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 20u), c.r[20].w[0]);
    set32(c.r[16], c.r[16].w[0] - 31704u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56ECu);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C56ECu) [[unlikely]] return; }
L_001C56EC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 20u), c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] - 31680u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5710u);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C5710u) [[unlikely]] return; }
L_001C5710:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 20u), c.r[22].w[0]);
    set32(c.r[16], c.r[16].w[0] - 31656u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5734u);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C5734u) [[unlikely]] return; }
L_001C5734:
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[23].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 4;
L_001C5744:
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
L_001C5778:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5790u);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C5790u) [[unlikely]] return; }
L_001C5790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 20336u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C57B8:
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C57C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C57D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C57F8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 300u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001C57F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C5834; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5828u);  if (depth < kMaxDepth) unit_0031(c, 221u, depth + 1u); else { c.pc = 0x001C5F30u; return; } if (c.pc != 0x001C5828u) [[unlikely]] return; }
L_001C5828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5834; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_001C5834:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C5874; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5870u);  if (depth < kMaxDepth) unit_0031(c, 221u, depth + 1u); else { c.pc = 0x001C5F30u; return; } if (c.pc != 0x001C5870u) [[unlikely]] return; }
L_001C5870:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_001C5874:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5888:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C58F0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58B4u);  if (depth < kMaxDepth) unit_0061(c, 31u, depth + 1u); else { c.pc = 0x00284600u; return; } if (c.pc != 0x001C58B4u) [[unlikely]] return; }
L_001C58B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58C8u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001C58C8u) [[unlikely]] return; }
L_001C58C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58DCu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001C58DCu) [[unlikely]] return; }
L_001C58DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0] + 292u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58F0u);  if (depth < kMaxDepth) unit_0032(c, 344u, depth + 1u); else { c.pc = 0x001CB4A8u; return; } if (c.pc != 0x001C58F0u) [[unlikely]] return; }
L_001C58F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5908:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001C5960; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001C5938:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5954; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C59B4; } }
L_001C5954:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5938u | kUnwind; return; } goto L_001C5938; } }
L_001C5960:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C59B0; } }
L_001C5978:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5984u);  if (depth < kMaxDepth) unit_0061(c, 69u, depth + 1u); else { c.pc = 0x00284B68u; return; } if (c.pc != 0x001C5984u) [[unlikely]] return; }
L_001C5984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5998; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C59B4; } }
L_001C5998:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5978u | kUnwind; return; } goto L_001C5978; } }
L_001C59B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C59B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C59D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5A10; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C59E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001C5A04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5A04:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C59E8u | kUnwind; return; } goto L_001C59E8; } }
L_001C5A10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5A48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5A74; } }
L_001C5A48:
    set32(c.r[2], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A5Cu);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x001C5A5Cu) [[unlikely]] return; }
L_001C5A5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5A74; } }
L_001C5A70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C5A74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5A88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5AA8u);  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002844F0u; return; } if (c.pc != 0x001C5AA8u) [[unlikely]] return; }
L_001C5AA8:
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 20336u);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5AE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5BA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20256u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C5B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20764u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20684u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5B2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20768u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20688u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5B4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20772u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20692u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5B6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20776u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20696u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5B8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20780u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20700u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_001C5BA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BC8u);  if (depth < kMaxDepth) unit_0031(c, 160u, depth + 1u); else { c.pc = 0x001C5628u; return; } if (c.pc != 0x001C5BC8u) [[unlikely]] return; }
L_001C5BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5BD8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C0Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001C5C0Cu) [[unlikely]] return; }
L_001C5C0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C5C40; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C28u);  if (depth < kMaxDepth) unit_008B(c, 142u, depth + 1u); else { c.pc = 0x0032D140u; return; } if (c.pc != 0x001C5C28u) [[unlikely]] return; }
L_001C5C28:
    set32(c.r[5], c.r[17].w[0] + 384u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C38u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001C5C38u) [[unlikely]] return; }
L_001C5C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5C50; } }
L_001C5C40:
    set32(c.r[5], c.r[17].w[0] + 432u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C50u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001C5C50u) [[unlikely]] return; }
L_001C5C50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5C8C; } }
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C6Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001C5C6Cu) [[unlikely]] return; }
L_001C5C6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C8Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x001C5C8Cu) [[unlikely]] return; }
L_001C5C8C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5CA0u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x001C5CA0u) [[unlikely]] return; }
L_001C5CA0:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5CC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5CE8u);  if (depth < kMaxDepth) unit_0032(c, 224u, depth + 1u); else { c.pc = 0x001CA3A8u; return; } if (c.pc != 0x001C5CE8u) [[unlikely]] return; }
L_001C5CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5D1C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D1Cu);  if (depth < kMaxDepth) unit_0072(c, 139u, depth + 1u); else { c.pc = 0x002C97E8u; return; } if (c.pc != 0x001C5D1Cu) [[unlikely]] return; }
L_001C5D1C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5D38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xADA60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 57592ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 288u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xD41B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 20930ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    if (c.r[7].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D90u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001C5D90u) [[unlikely]] return; }
L_001C5D90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5C950000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 39440ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 288u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x54970000u);
    c.r[3].d[0] = c.r[3].d[0] | 10040ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    if (c.r[7].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DF8u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001C5DF8u) [[unlikely]] return; }
L_001C5DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5E08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 12u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 308u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C5E70; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 12u);
    c.budget -= 2;
L_001C5E48:
    set32(c.r[5], ld32((c.r[18].w[0] + 264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E5Cu);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001C4BE0u; return; } if (c.pc != 0x001C5E5Cu) [[unlikely]] return; }
L_001C5E5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5E48u | kUnwind; return; } goto L_001C5E48; } }
L_001C5E70:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5E90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5F0C; } }
    set32(c.r[16], c.r[18].w[0] + 308u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F0C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 12u);
    c.budget -= 3;
L_001C5EE0:
    set32(c.r[5], ld32((c.r[18].w[0] + 264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 292u)));
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5EF8u);  if (depth < kMaxDepth) unit_0031(c, 117u, depth + 1u); else { c.pc = 0x001C4D20u; return; } if (c.pc != 0x001C5EF8u) [[unlikely]] return; }
L_001C5EF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5EE0u | kUnwind; return; } goto L_001C5EE0; } }
L_001C5F0C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5F90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C5F8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5F8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C5F78u) [[unlikely]] return; }
L_001C5F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5F8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5F94; } }
L_001C5F8C:
    st32((c.r[16].w[0] + 292u), 0u);
    c.budget -= 1;
L_001C5F90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C5F94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5FA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C5FC8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5FC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[4], 0u + 268u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6044; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C603Cu);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001C603Cu) [[unlikely]] return; }
L_001C603C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6058; } }
L_001C6044:
    set32(c.r[5], ld32((c.r[4].w[0] + 372u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6058u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001C6058u) [[unlikely]] return; }
L_001C6058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6068:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477A0000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C60B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C60B8; } }
L_001C60B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001C60B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C60DC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C6120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60D4u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284748u; return; } if (c.pc != 0x001C60D4u) [[unlikely]] return; }
L_001C60D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C60EC; } }
L_001C60DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477A0000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C617C; } }
L_001C60EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] - 6080u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6118u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C6118u) [[unlikely]] return; }
L_001C6118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C614C; } }
L_001C6120:
    set32(c.r[6], ld32((c.r[16].w[0] + 372u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[5], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C614Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C614Cu) [[unlikely]] return; }
L_001C614C:
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 8u));
    c.f[14] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6168u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001C6168u) [[unlikely]] return; }
L_001C6168:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = c.f[1] & fp::kAbs;
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 5;
L_001C617C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6198:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6200; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C61C4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001C61C4u) [[unlikely]] return; }
L_001C61C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 372u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001C61E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6204; } }
L_001C61E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 87u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C6200; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6200u);  if (depth < kMaxDepth) unit_0058(c, 35u, depth + 1u); else { c.pc = 0x00260620u; return; } if (c.pc != 0x001C6200u) [[unlikely]] return; }
L_001C6200:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C6204:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C623C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6244; } }
L_001C623C:
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001C6244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6284; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6270; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6268u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001C6268u) [[unlikely]] return; }
L_001C6268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6284; } }
L_001C6270:
    set32(c.r[6], ld32((c.r[4].w[0] + 372u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6284u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001C6284u) [[unlikely]] return; }
L_001C6284:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6298:
    set32(c.r[29], c.r[29].w[0] - 560u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C62C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C62CC; } }
L_001C62C4:
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001C62CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6354; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C630C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6304u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C6304u) [[unlikely]] return; }
L_001C6304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6334; } }
L_001C630C:
    set32(c.r[6], ld32((c.r[4].w[0] + 372u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6334u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C6334u) [[unlikely]] return; }
L_001C6334:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6354u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C6354u) [[unlikely]] return; }
L_001C6354:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6368:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    c.f[21] = c.f[15];
    st32((c.r[29].w[0] + 56u), c.f[23]);
    set32(c.r[4], c.r[16].w[0] + 384u);
    st32((c.r[29].w[0] + 48u), c.f[22]);
    c.f[23] = c.f[17];
    c.f[22] = c.f[16];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[15] = c.f[20];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C63A8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C63A8u) [[unlikely]] return; }
L_001C63A8:
    set32(c.r[4], c.r[16].w[0] + 400u);
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.f[14] = c.f[23];
    c.f[15] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C63C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C63C4u) [[unlikely]] return; }
L_001C63C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 56u));
    c.f[22] = ld32((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C63E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 20224u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 308u);
    st32((c.r[16].w[0] + 496u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 12;
L_001C6418:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6418u | kUnwind; return; } goto L_001C6418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[1].w[0];
    c.f[14] = ld32((c.r[2].w[0] - 4960u));
    set32(c.r[3], 0u - 1u);
    st32((c.r[5].w[0] + 60u), 0u);
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.f[14] = fp::sub(c.f[14], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = 0u;
    st32((c.r[16].w[0]), 0u);
    c.f[14] = c.f[14] ^ fp::kSign;
    st32((c.r[16].w[0] + 264u), 0u);
    st32((c.r[16].w[0] + 296u), 0u);
    c.f[13] = c.f[12];
    st32((c.r[16].w[0] + 292u), 0u);
    st32((c.r[16].w[0] + 380u), 0u);
    st32((c.r[16].w[0] + 376u), 0u);
    st32((c.r[16].w[0] + 372u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6494u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C6494u) [[unlikely]] return; }
L_001C6494:
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C64A0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001C64A0u) [[unlikely]] return; }
L_001C64A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C64B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64F4; } }
L_001C64EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001C64F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C657C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C6544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6510u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284748u; return; } if (c.pc != 0x001C6510u) [[unlikely]] return; }
L_001C6510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C657C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C6538; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C657C; } }
L_001C6538:
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C657C; } }
L_001C6544:
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C657C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C6570; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6568u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x001C6568u) [[unlikely]] return; }
L_001C6568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C657C; } }
L_001C6570:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C657Cu);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x001C657Cu) [[unlikely]] return; }
L_001C657C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6598:
    st32((c.r[4].w[0] + 264u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C65A8:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65D8u);  if (depth < kMaxDepth) unit_0031(c, 226u, depth + 1u); else { c.pc = 0x001C6018u; return; } if (c.pc != 0x001C65D8u) [[unlikely]] return; }
L_001C65D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65E8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001C65E8u) [[unlikely]] return; }
L_001C65E8:
    set32(c.r[16], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 272u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6608u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001C6608u) [[unlikely]] return; }
L_001C6608:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6618u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x001C6618u) [[unlikely]] return; }
L_001C6618:
    c.f[1] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C663C; } }
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6638u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x001C6638u) [[unlikely]] return; }
L_001C6638:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001C663C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 80u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C66A8; } }
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    st32((c.r[29].w[0] + 92u), c.f[15]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6694; } }
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6694u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C6694u) [[unlikely]] return; }
L_001C6694:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66A8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001C66A8u) [[unlikely]] return; }
L_001C66A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66B8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001C66B8u) [[unlikely]] return; }
L_001C66B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66C8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001C66C8u) [[unlikely]] return; }
L_001C66C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 4904u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C66FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 4900u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66F4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001C66F4u) [[unlikely]] return; }
L_001C66F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6714; } }
L_001C66FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 4912u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6714u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001C6714u) [[unlikely]] return; }
L_001C6714:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C6758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 4960u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6734u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001C6734u) [[unlikely]] return; }
L_001C6734:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6748u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001C6748u) [[unlikely]] return; }
L_001C6748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 4;
L_001C6758:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 4928u);
    set32(c.r[9], c.r[9].w[0] + 27480u);
    c.f[20] = ld32((c.r[2].w[0] - 4908u));
    set32(c.r[8], 0u + 3u);
    set32(c.r[7], c.r[7].w[0] - 4944u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C679Cu);  if (depth < kMaxDepth) unit_008B(c, 348u, depth + 1u); else { c.pc = 0x0032FBE0u; return; } if (c.pc != 0x001C679Cu) [[unlikely]] return; }
L_001C679C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[17].w[0] + 416u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67BCu);  if (depth < kMaxDepth) unit_008B(c, 304u, depth + 1u); else { c.pc = 0x0032F590u; return; } if (c.pc != 0x001C67BCu) [[unlikely]] return; }
L_001C67BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 115u);
    set32(c.r[3], c.r[3].w[0] - 4896u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    st32((c.r[17].w[0] + 264u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C67F8u) [[unlikely]] return; }
L_001C67F8:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C6860; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C6860; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 31632u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6854u);  if (depth < kMaxDepth) unit_0096(c, 243u, depth + 1u); else { c.pc = 0x0035B148u; return; } if (c.pc != 0x001C6854u) [[unlikely]] return; }
L_001C6854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 19920u);
    st32((c.r[16].w[0] + 520u), c.r[3].w[0]);
    c.budget -= 3;
L_001C6860:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6890u);  if (depth < kMaxDepth) unit_0031(c, 247u, depth + 1u); else { c.pc = 0x001C63E8u; return; } if (c.pc != 0x001C6890u) [[unlikely]] return; }
L_001C6890:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 512u);
    set32(c.r[3], c.r[3].w[0] - 20224u);
    st32((c.r[16].w[0] + 496u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C68A8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001C68A8u) [[unlikely]] return; }
L_001C68A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 19840u);
    st32((c.r[16].w[0] + 640u), 0u);
    st32((c.r[16].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 644u), 0u);
    st32((c.r[16].w[0] + 624u), 0u);
    st32((c.r[16].w[0] + 628u), 0u);
    st32((c.r[16].w[0] + 632u), 0u);
    st32((c.r[16].w[0] + 636u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C68E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 624u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C692Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C692Cu) [[unlikely]] return; }
L_001C692C:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 27992u);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C695Cu);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x001C695Cu) [[unlikely]] return; }
L_001C695C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C69D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6978u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x001C6978u) [[unlikely]] return; }
L_001C6978:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6988u);  if (depth < kMaxDepth) unit_0072(c, 58u, depth + 1u); else { c.pc = 0x002C8858u; return; } if (c.pc != 0x001C6988u) [[unlikely]] return; }
L_001C6988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C699C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C69DC; } }
L_001C699C:
    set32(c.r[2], ld32((c.r[19].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C69D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69B0u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001C69B0u) [[unlikely]] return; }
L_001C69B0:
    set32(c.r[4], ld32((c.r[19].w[0] + 264u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C69D8u) [[unlikely]] return; }
L_001C69D8:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C69DC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6A00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 644u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6AD8; } }
    c.f[12] = 0u;
    set32(c.r[17], c.r[18].w[0] + 624u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A4Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C6A4Cu) [[unlikely]] return; }
L_001C6A4C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A68u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001C6A68u) [[unlikely]] return; }
L_001C6A68:
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[1] = c.r[1].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 27992u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AA4u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x001C6AA4u) [[unlikely]] return; }
L_001C6AA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C6B24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AC0u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x001C6AC0u) [[unlikely]] return; }
L_001C6AC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AD0u);  if (depth < kMaxDepth) unit_0072(c, 58u, depth + 1u); else { c.pc = 0x002C8858u; return; } if (c.pc != 0x001C6AD0u) [[unlikely]] return; }
L_001C6AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6AE4; } }
L_001C6AD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6B28; } }
L_001C6AE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AF8u);  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C0EC0u; return; } if (c.pc != 0x001C6AF8u) [[unlikely]] return; }
L_001C6AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6AD8u | kUnwind; return; } goto L_001C6AD8; } }
    c.f[0] = ld32((c.r[18].w[0] + 628u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6AD8u | kUnwind; return; } goto L_001C6AD8; } }
L_001C6B24:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C6B28:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6B48:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6B58:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B74u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001C6B74u) [[unlikely]] return; }
L_001C6B74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6B88:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[9].w[0] + 27480u);
    set32(c.r[7], c.r[7].w[0] - 4944u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6BDCu);  if (depth < kMaxDepth) unit_008B(c, 348u, depth + 1u); else { c.pc = 0x0032FBE0u; return; } if (c.pc != 0x001C6BDCu) [[unlikely]] return; }
L_001C6BDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6BFCu);  if (depth < kMaxDepth) unit_008B(c, 304u, depth + 1u); else { c.pc = 0x0032F590u; return; } if (c.pc != 0x001C6BFCu) [[unlikely]] return; }
L_001C6BFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 115u);
    set32(c.r[3], c.r[3].w[0] - 4896u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 640u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6C40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 624u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C84u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C6C84u) [[unlikely]] return; }
L_001C6C84:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 27992u);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6CB4u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x001C6CB4u) [[unlikely]] return; }
L_001C6CB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C6D30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6CD0u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x001C6CD0u) [[unlikely]] return; }
L_001C6CD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6CE0u);  if (depth < kMaxDepth) unit_0072(c, 58u, depth + 1u); else { c.pc = 0x002C8858u; return; } if (c.pc != 0x001C6CE0u) [[unlikely]] return; }
L_001C6CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6CF4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6D34; } }
L_001C6CF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D08u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001C6D08u) [[unlikely]] return; }
L_001C6D08:
    set32(c.r[4], ld32((c.r[19].w[0] + 264u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C6D30u) [[unlikely]] return; }
L_001C6D30:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C6D34:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6D58:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6D88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DA0u);  if (depth < kMaxDepth) unit_0031(c, 273u, depth + 1u); else { c.pc = 0x001C6820u; return; } if (c.pc != 0x001C6DA0u) [[unlikely]] return; }
L_001C6DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6DB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24080u)));
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C6F98; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001C6E48; } }
    set32(c.r[16], 0u + 688u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E30u);  if (depth < kMaxDepth) unit_0032(c, 254u, depth + 1u); else { c.pc = 0x001CA8A8u; return; } if (c.pc != 0x001C6E30u) [[unlikely]] return; }
L_001C6E30:
    set32(c.r[3], ld32((c.r[17].w[0] + 24080u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001C6F98; } }
L_001C6E48:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[16], c.r[18].w[0] + 688u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E68u);  if (depth < kMaxDepth) unit_0031(c, 229u, depth + 1u); else { c.pc = 0x001C6068u; return; } if (c.pc != 0x001C6E68u) [[unlikely]] return; }
L_001C6E68:
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[3], 0u + 688u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24080u)));
    c.f[20] = c.f[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C6F38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[21] = c.r[1].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], 0u - 1u);
    set32(c.r[20], 0u + 688u);
    c.budget -= 6;
L_001C6EA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EACu);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C5FA8u; return; } if (c.pc != 0x001C6EACu) [[unlikely]] return; }
L_001C6EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6F20; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_001C6ECC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C6F20; } }
L_001C6ECC:
    set32(c.r[2], ld32((c.r[16].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6F20; } }
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EF0u);  if (depth < kMaxDepth) unit_0031(c, 229u, depth + 1u); else { c.pc = 0x001C6068u; return; } if (c.pc != 0x001C6EF0u) [[unlikely]] return; }
L_001C6EF0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C6F20; } }
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C6F20; } }
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[20] = c.f[0];
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001C6F20:
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    set32(c.r[16], c.r[16].w[0] + 688u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6EA0u | kUnwind; return; } goto L_001C6EA0; } }
L_001C6F38:
    st32((c.r[22].w[0]), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6F98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C6F98; } }
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C6F98; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6F9C; } }
L_001C6F98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C6F9C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6FD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C7004; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C70C8; } }
L_001C7004:
    set32(c.r[5], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[16], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001C7020; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7030; } }
L_001C7020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7030u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001C7030u) [[unlikely]] return; }
L_001C7030:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 376u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C705C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C705C; } }
    set32(c.r[16], 0u + 17u);
    set32(c.r[2], 0u + 18u);
    if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_001C705C:
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 113u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C7088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_001C7088:
    set32(c.r[5], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[3], 0u + 268u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 14152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001C70C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70C8u);  if (depth < kMaxDepth) unit_0031(c, 225u, depth + 1u); else { c.pc = 0x001C5FD8u; return; } if (c.pc != 0x001C70C8u) [[unlikely]] return; }
L_001C70C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C70E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7104u);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C5FA8u; return; } if (c.pc != 0x001C7104u) [[unlikely]] return; }
L_001C7104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7114u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001C7114u) [[unlikely]] return; }
L_001C7114:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C7188; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7188; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C7144u) [[unlikely]] return; }
L_001C7144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7188; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C71A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C717C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7174u);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001C7174u) [[unlikely]] return; }
L_001C7174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7188; } }
L_001C717C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7188u);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001C7188u) [[unlikely]] return; }
L_001C7188:
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C71A8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C71A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71A8u);  if (depth < kMaxDepth) unit_006B(c, 128u, depth + 1u); else { c.pc = 0x002AE9C0u; return; } if (c.pc != 0x001C71A8u) [[unlikely]] return; }
L_001C71A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71B4u);  if (depth < kMaxDepth) unit_0032(c, 249u, depth + 1u); else { c.pc = 0x001CA760u; return; } if (c.pc != 0x001C71B4u) [[unlikely]] return; }
L_001C71B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C722C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71D0u);  if (depth < kMaxDepth) unit_0032(c, 156u, depth + 1u); else { c.pc = 0x001C9830u; return; } if (c.pc != 0x001C71D0u) [[unlikely]] return; }
L_001C71D0:
    set32(c.r[17], c.r[16].w[0] + 272u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71E8u);  if (depth < kMaxDepth) unit_0031(c, 285u, depth + 1u); else { c.pc = 0x001C6A00u; return; } if (c.pc != 0x001C71E8u) [[unlikely]] return; }
L_001C71E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7208; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7200u);  if (depth < kMaxDepth) unit_0031(c, 213u, depth + 1u); else { c.pc = 0x001C5DA0u; return; } if (c.pc != 0x001C7200u) [[unlikely]] return; }
L_001C7200:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 2;
L_001C7208:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7218u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001C7218u) [[unlikely]] return; }
L_001C7218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7224u);  if (depth < kMaxDepth) unit_0032(c, 288u, depth + 1u); else { c.pc = 0x001CAE58u; return; } if (c.pc != 0x001C7224u) [[unlikely]] return; }
L_001C7224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7368; } }
L_001C722C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7238u);  if (depth < kMaxDepth) unit_0032(c, 241u, depth + 1u); else { c.pc = 0x001CA678u; return; } if (c.pc != 0x001C7238u) [[unlikely]] return; }
L_001C7238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7368; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7250u);  if (depth < kMaxDepth) unit_0032(c, 156u, depth + 1u); else { c.pc = 0x001C9830u; return; } if (c.pc != 0x001C7250u) [[unlikely]] return; }
L_001C7250:
    set32(c.r[17], c.r[16].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 656u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C72B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7274u);  if (depth < kMaxDepth) unit_0031(c, 299u, depth + 1u); else { c.pc = 0x001C6C40u; return; } if (c.pc != 0x001C7274u) [[unlikely]] return; }
L_001C7274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C72B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7290u);  if (depth < kMaxDepth) unit_0032(c, 118u, depth + 1u); else { c.pc = 0x001C9310u; return; } if (c.pc != 0x001C7290u) [[unlikely]] return; }
L_001C7290:
    set32(c.r[4], ld32((c.r[16].w[0] + 380u)));
    st32((c.r[16].w[0] + 644u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C7368; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C72B0u);  if (depth < kMaxDepth) unit_0032(c, 118u, depth + 1u); else { c.pc = 0x001C9310u; return; } if (c.pc != 0x001C72B0u) [[unlikely]] return; }
L_001C72B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7368; } }
L_001C72B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C72C8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001C72C8u) [[unlikely]] return; }
L_001C72C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C72E0; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C72E0u);  if (depth < kMaxDepth) unit_0032(c, 156u, depth + 1u); else { c.pc = 0x001C9830u; return; } if (c.pc != 0x001C72E0u) [[unlikely]] return; }
L_001C72E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C72ECu);  if (depth < kMaxDepth) unit_0031(c, 218u, depth + 1u); else { c.pc = 0x001C5E90u; return; } if (c.pc != 0x001C72ECu) [[unlikely]] return; }
L_001C72EC:
    c.f[0] = ld32((c.r[16].w[0] + 676u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7368; } }
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[16].w[0] + 676u), c.f[0]);
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7368; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 16960ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7330u);  if (depth < kMaxDepth) unit_0032(c, 117u, depth + 1u); else { c.pc = 0x001C92F8u; return; } if (c.pc != 0x001C7330u) [[unlikely]] return; }
L_001C7330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7368; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C734Cu);  if (depth < kMaxDepth) unit_0032(c, 118u, depth + 1u); else { c.pc = 0x001C9310u; return; } if (c.pc != 0x001C734Cu) [[unlikely]] return; }
L_001C734C:
    set32(c.r[4], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C7368; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[4].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7368u);  if (depth < kMaxDepth) unit_0032(c, 118u, depth + 1u); else { c.pc = 0x001C9310u; return; } if (c.pc != 0x001C7368u) [[unlikely]] return; }
L_001C7368:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C7388:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[7].w[0] - 4316u)));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 132u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C7418; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[19].w[0] - 6992u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7410; } }
    set32(c.r[4], c.r[17].w[0] - 31104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7408u);  if (depth < kMaxDepth) unit_0031(c, 381u, depth + 1u); else { c.pc = 0x001C7AF0u; return; } if (c.pc != 0x001C7408u) [[unlikely]] return; }
L_001C7408:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] - 6992u), c.r[2].w[0]);
    c.budget -= 2;
L_001C7410:
    set32(c.r[2], c.r[17].w[0] - 31104u);
    st32((c.r[20].w[0] - 4316u), c.r[2].w[0]);
    c.budget -= 2;
L_001C7418:
    set32(c.r[4], ld32((c.r[20].w[0] - 4316u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C742Cu);  if (depth < kMaxDepth) unit_0032(c, 171u, depth + 1u); else { c.pc = 0x001C9A10u; return; } if (c.pc != 0x001C742Cu) [[unlikely]] return; }
L_001C742C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], 0u + 84u);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C745C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C745C; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C745C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 85u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C748C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C748C; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C748C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 86u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C74BC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C74BC; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C74BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 87u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C74EC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C74EC; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C74EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 88u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C751C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C751C; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C751C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C754C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C754C; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C754C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C757C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C757C; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C757C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C75AC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C75AC; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001C75AC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C75D8:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    set32(c.r[7], c.r[29].w[0] + 292u);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 288u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 292u), 0u);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7640u);  if (depth < kMaxDepth) unit_0031(c, 312u, depth + 1u); else { c.pc = 0x001C6DB0u; return; } if (c.pc != 0x001C7640u) [[unlikely]] return; }
L_001C7640:
    set32(c.r[16], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C7760; } }
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C7668; } }
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7674; } }
L_001C7668:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7674u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7674u) [[unlikely]] return; }
L_001C7674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C767Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001C767Cu) [[unlikely]] return; }
L_001C767C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7690u);  if (depth < kMaxDepth) unit_002C(c, 463u, depth + 1u); else { c.pc = 0x001B3320u; return; } if (c.pc != 0x001C7690u) [[unlikely]] return; }
L_001C7690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C769Cu);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C5FA8u; return; } if (c.pc != 0x001C769Cu) [[unlikely]] return; }
L_001C769C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C771C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76B8u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001C76B8u) [[unlikely]] return; }
L_001C76B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C76D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 676u), c.f[0]);
    c.budget -= 4;
L_001C76D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C76EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76ECu);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C76ECu) [[unlikely]] return; }
L_001C76EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 380u)));
    st32((c.r[16].w[0] + 668u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 264u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 672u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 656u), 0u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C771C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C771Cu);  if (depth < kMaxDepth) unit_0032(c, 151u, depth + 1u); else { c.pc = 0x001C9768u; return; } if (c.pc != 0x001C771Cu) [[unlikely]] return; }
L_001C771C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001C7760; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7734u);  if (depth < kMaxDepth) unit_0032(c, 340u, depth + 1u); else { c.pc = 0x001CB438u; return; } if (c.pc != 0x001C7734u) [[unlikely]] return; }
L_001C7734:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7748u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001C7748u) [[unlikely]] return; }
L_001C7748:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7760u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x001C7760u) [[unlikely]] return; }
L_001C7760:
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C7780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 688u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C77C4u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C77C4u) [[unlikely]] return; }
L_001C77C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001C78A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 668u)));
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    st32((c.r[18].w[0] + 668u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001C78A0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[18].w[0] + 272u);
    set32(c.r[19], 0u + 87u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001C7818; } }
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7818u);  if (depth < kMaxDepth) unit_0031(c, 208u, depth + 1u); else { c.pc = 0x001C5CC0u; return; } if (c.pc != 0x001C7818u) [[unlikely]] return; }
L_001C7818:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7828u);  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C5D38u; return; } if (c.pc != 0x001C7828u) [[unlikely]] return; }
L_001C7828:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7834u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C7834u) [[unlikely]] return; }
L_001C7834:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7844u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C7844u) [[unlikely]] return; }
L_001C7844:
    set32(c.r[16], ld32((c.r[18].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C78A0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[16].w[0] + 272u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001C7874; } }
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7874u);  if (depth < kMaxDepth) unit_0031(c, 208u, depth + 1u); else { c.pc = 0x001C5CC0u; return; } if (c.pc != 0x001C7874u) [[unlikely]] return; }
L_001C7874:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7884u);  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C5D38u; return; } if (c.pc != 0x001C7884u) [[unlikely]] return; }
L_001C7884:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7890u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C7890u) [[unlikely]] return; }
L_001C7890:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78A0u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C78A0u) [[unlikely]] return; }
L_001C78A0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C78C0:
    set32(c.r[29], c.r[29].w[0] - 736u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 576u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 688u);
    set32(c.r[22], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_001C7ABC; } }
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], 0u + 688u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[23], 0u + 48u);
    c.budget -= 5;
L_001C7928:
    set32(c.r[4], ld32((c.r[19].w[0] + 24080u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7940u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C7940u) [[unlikely]] return; }
L_001C7940:
    set32(c.r[3], ld32((c.r[19].w[0] + 24080u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 24080u), c.r[3].w[0]);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 688u);
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C7974; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7980; } }
L_001C7974:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7980u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7980u) [[unlikely]] return; }
L_001C7980:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C79C0; } }
    set32(c.r[5], c.r[30].w[0] - 19416u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C79A4; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C79B0; } }
L_001C79A4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C79B0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C79B0u) [[unlikely]] return; }
L_001C79B0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C79C0u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001C79C0u) [[unlikely]] return; }
L_001C79C0:
    set32(c.r[8], c.r[29].w[0] + 512u);
    set32(c.r[7], c.r[29].w[0] + 256u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], c.r[16].w[0] >> 31);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C79DC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_001C79DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C79FC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[4], c.r[29].w[0] + 513u);
    set32(c.r[18], c.r[17].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7A40; } }
L_001C79FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 8u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001C7A10:
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { breakpoint(c, 0x001C7A18u);  goto L_001C7A1C; }
L_001C7A1C:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[6].d[0]) { breakpoint(c, 0x001C7A30u);  goto L_001C7A34; }
L_001C7A34:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7A10u | kUnwind; return; } goto L_001C7A10; } }
L_001C7A40:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001C7A54; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_001C7A54:
    c.r[2].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7A7C; } }
L_001C7A60:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7A60u | kUnwind; return; } goto L_001C7A60; } }
L_001C7A7C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A90u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001C7A90u) [[unlikely]] return; }
L_001C7A90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7AA0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7AA0u) [[unlikely]] return; }
L_001C7AA0:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7AACu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C7AACu) [[unlikely]] return; }
L_001C7AAC:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7928u | kUnwind; return; } goto L_001C7928; } }
L_001C7ABC:
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
L_001C7AF0:
    set32(c.r[29], c.r[29].w[0] - 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 688u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 19256u);
    st128((c.r[29].w[0] + 848u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 34u);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[19]);
    set32(c.r[18], 0u - 1u);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[23]);
    set32(c.r[19], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[21]);
    set32(c.r[23], c.r[29].w[0] + 8u);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 704u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 864u), c.f[20]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 22;
L_001C7B48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B58u);  if (depth < kMaxDepth) unit_0032(c, 233u, depth + 1u); else { c.pc = 0x001CA520u; return; } if (c.pc != 0x001C7B58u) [[unlikely]] return; }
L_001C7B58:
    set32(c.r[16], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7B48u | kUnwind; return; } goto L_001C7B48; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 24080u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[17], 0u + 84u);
    set32(c.r[16], 0u + 12696u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B88u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C7B88u) [[unlikely]] return; }
L_001C7B88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] - 19408u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 680u), 0u);
    set32(c.r[2], c.r[3].w[0] - 19056u);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001C7BBC; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7BCC; } }
L_001C7BBC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BCCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7BCCu) [[unlikely]] return; }
L_001C7BCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    c.r[4].d[0] = c.r[20].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    set32(c.r[19], 0u + 84u);
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[18], 0u + 12697u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BECu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C7BECu) [[unlikely]] return; }
L_001C7BEC:
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[4], c.r[20].w[0] + 592u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[20].w[0] + 608u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C14u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C7C14u) [[unlikely]] return; }
L_001C7C14:
    set32(c.r[2], 0u + 156u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 155u);
    st32((c.r[20].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1000u);
    st32((c.r[20].w[0] + 656u), 0u);
    st32((c.r[20].w[0] + 664u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[21], c.r[2].w[0] - 19400u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C4Cu);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C7C4Cu) [[unlikely]] return; }
L_001C7C4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[20].w[0] + 288u), 0u);
    st32((c.r[20].w[0] + 676u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C74u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C7C74u) [[unlikely]] return; }
L_001C7C74:
    set32(c.r[3], ld32((c.r[17].w[0] + 24080u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3890000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[17] = c.r[1].w[0];
    c.f[13] = c.f[12];
    st32((c.r[17].w[0] + 24080u), c.r[3].w[0]);
    c.f[15] = c.f[12];
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CC4u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C7CC4u) [[unlikely]] return; }
L_001C7CC4:
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CD4u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C7CD4u) [[unlikely]] return; }
L_001C7CD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001C7D00; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D10; } }
L_001C7D00:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D10u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7D10u) [[unlikely]] return; }
L_001C7D10:
    c.r[4].d[0] = c.r[20].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D20u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C7D20u) [[unlikely]] return; }
L_001C7D20:
    set32(c.r[18], 0u + 85u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[20].w[0] + 592u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12698u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[20].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D4Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C7D4Cu) [[unlikely]] return; }
L_001C7D4C:
    set32(c.r[2], 0u + 152u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 151u);
    st32((c.r[20].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 1000u);
    set32(c.r[21], c.r[3].w[0] - 19392u);
    st32((c.r[20].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 656u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D84u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C7D84u) [[unlikely]] return; }
L_001C7D84:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7DB0u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C7DB0u) [[unlikely]] return; }
L_001C7DB0:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3890000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[17] = c.r[1].w[0];
    c.f[13] = c.f[12];
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    c.f[15] = c.f[12];
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E00u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C7E00u) [[unlikely]] return; }
L_001C7E00:
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E10u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C7E10u) [[unlikely]] return; }
L_001C7E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001C7E3C; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7E4C; } }
L_001C7E3C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E4Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7E4Cu) [[unlikely]] return; }
L_001C7E4C:
    c.r[4].d[0] = c.r[19].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E5Cu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C7E5Cu) [[unlikely]] return; }
L_001C7E5C:
    set32(c.r[18], 0u + 85u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 592u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12699u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[19].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E88u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C7E88u) [[unlikely]] return; }
L_001C7E88:
    set32(c.r[2], 0u + 144u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 143u);
    st32((c.r[19].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 1000u);
    set32(c.r[20], c.r[3].w[0] - 19376u);
    st32((c.r[19].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 656u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7EC0u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C7EC0u) [[unlikely]] return; }
L_001C7EC0:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 288u), 0u);
    st32((c.r[19].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7EE8u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C7EE8u) [[unlikely]] return; }
L_001C7EE8:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3AF0000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    c.f[17] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 688u);
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F3Cu);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C7F3Cu) [[unlikely]] return; }
L_001C7F3C:
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F4Cu);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C7F4Cu) [[unlikely]] return; }
L_001C7F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C7F78; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F88; } }
L_001C7F78:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F88u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C7F88u) [[unlikely]] return; }
L_001C7F88:
    c.r[4].d[0] = c.r[19].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F98u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C7F98u) [[unlikely]] return; }
L_001C7F98:
    set32(c.r[18], 0u + 87u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 592u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12701u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[19].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7FC4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C7FC4u) [[unlikely]] return; }
L_001C7FC4:
    set32(c.r[2], 0u + 154u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 153u);
    st32((c.r[19].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 1000u);
    set32(c.r[20], c.r[3].w[0] - 19368u);
    st32((c.r[19].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 656u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7FFCu);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C7FFCu) [[unlikely]] return; }
L_001C7FFC:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0032(c, 1u, depth);
}

}
