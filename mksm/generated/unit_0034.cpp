#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_001D0688;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0034[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0,
    0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0,
    185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 299, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 312, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0,
    0, 0, 393, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 419, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 436,
    0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0034(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D0000;
    case 2u: goto L_001D0058;
    case 3u: goto L_001D0070;
    case 4u: goto L_001D00C8;
    case 5u: goto L_001D0108;
    case 6u: goto L_001D0134;
    case 7u: goto L_001D014C;
    case 8u: goto L_001D0160;
    case 9u: goto L_001D01C0;
    case 10u: goto L_001D0210;
    case 11u: goto L_001D0240;
    case 12u: goto L_001D0258;
    case 13u: goto L_001D0274;
    case 14u: goto L_001D02C0;
    case 15u: goto L_001D02E8;
    case 16u: goto L_001D02F0;
    case 17u: goto L_001D0310;
    case 18u: goto L_001D0320;
    case 19u: goto L_001D0344;
    case 20u: goto L_001D0360;
    case 21u: goto L_001D0410;
    case 22u: goto L_001D04D8;
    case 23u: goto L_001D0508;
    case 24u: goto L_001D052C;
    case 25u: goto L_001D0550;
    case 26u: goto L_001D0570;
    case 27u: goto L_001D05F4;
    case 28u: goto L_001D0610;
    case 29u: goto L_001D0654;
    case 30u: goto L_001D0688;
    case 31u: goto L_001D06C0;
    case 32u: goto L_001D06F0;
    case 33u: goto L_001D0714;
    case 34u: goto L_001D0730;
    case 35u: goto L_001D075C;
    case 36u: goto L_001D0770;
    case 37u: goto L_001D07E8;
    case 38u: goto L_001D0810;
    case 39u: goto L_001D0884;
    case 40u: goto L_001D08B4;
    case 41u: goto L_001D08E8;
    case 42u: goto L_001D0914;
    case 43u: goto L_001D092C;
    case 44u: goto L_001D0938;
    case 45u: goto L_001D095C;
    case 46u: goto L_001D0978;
    case 47u: goto L_001D0998;
    case 48u: goto L_001D0A24;
    case 49u: goto L_001D0A40;
    case 50u: goto L_001D0A80;
    case 51u: goto L_001D0AB0;
    case 52u: goto L_001D0B54;
    case 53u: goto L_001D0B78;
    case 54u: goto L_001D0BE4;
    case 55u: goto L_001D0C14;
    case 56u: goto L_001D0C40;
    case 57u: goto L_001D0C6C;
    case 58u: goto L_001D0C8C;
    case 59u: goto L_001D0CB0;
    case 60u: goto L_001D0CD0;
    case 61u: goto L_001D0D2C;
    case 62u: goto L_001D0D50;
    case 63u: goto L_001D0D80;
    case 64u: goto L_001D0DA4;
    case 65u: goto L_001D0DD8;
    case 66u: goto L_001D0DF8;
    case 67u: goto L_001D0E64;
    case 68u: goto L_001D0E88;
    case 69u: goto L_001D0EB0;
    case 70u: goto L_001D0ED4;
    case 71u: goto L_001D0EF0;
    case 72u: goto L_001D0F18;
    case 73u: goto L_001D0F3C;
    case 74u: goto L_001D0F58;
    case 75u: goto L_001D0F78;
    case 76u: goto L_001D0F90;
    case 77u: goto L_001D0FB0;
    case 78u: goto L_001D0FBC;
    case 79u: goto L_001D0FD8;
    case 80u: goto L_001D1008;
    case 81u: goto L_001D1038;
    case 82u: goto L_001D1068;
    case 83u: goto L_001D10A0;
    case 84u: goto L_001D10C8;
    case 85u: goto L_001D10F8;
    case 86u: goto L_001D1128;
    case 87u: goto L_001D1148;
    case 88u: goto L_001D1174;
    case 89u: goto L_001D1194;
    case 90u: goto L_001D11C0;
    case 91u: goto L_001D11D4;
    case 92u: goto L_001D11E0;
    case 93u: goto L_001D11F8;
    case 94u: goto L_001D126C;
    case 95u: goto L_001D1278;
    case 96u: goto L_001D128C;
    case 97u: goto L_001D12BC;
    case 98u: goto L_001D12C8;
    case 99u: goto L_001D12D4;
    case 100u: goto L_001D1324;
    case 101u: goto L_001D1358;
    case 102u: goto L_001D13E0;
    case 103u: goto L_001D1414;
    case 104u: goto L_001D1448;
    case 105u: goto L_001D1480;
    case 106u: goto L_001D14A0;
    case 107u: goto L_001D14A8;
    case 108u: goto L_001D14C0;
    case 109u: goto L_001D14E4;
    case 110u: goto L_001D14F0;
    case 111u: goto L_001D1514;
    case 112u: goto L_001D1538;
    case 113u: goto L_001D1540;
    case 114u: goto L_001D1548;
    case 115u: goto L_001D1560;
    case 116u: goto L_001D1574;
    case 117u: goto L_001D157C;
    case 118u: goto L_001D15A8;
    case 119u: goto L_001D15B0;
    case 120u: goto L_001D15B8;
    case 121u: goto L_001D15C8;
    case 122u: goto L_001D15DC;
    case 123u: goto L_001D15E4;
    case 124u: goto L_001D1610;
    case 125u: goto L_001D1618;
    case 126u: goto L_001D1620;
    case 127u: goto L_001D1630;
    case 128u: goto L_001D1638;
    case 129u: goto L_001D1670;
    case 130u: goto L_001D1688;
    case 131u: goto L_001D1694;
    case 132u: goto L_001D16B8;
    case 133u: goto L_001D16E8;
    case 134u: goto L_001D1704;
    case 135u: goto L_001D1718;
    case 136u: goto L_001D1734;
    case 137u: goto L_001D1748;
    case 138u: goto L_001D176C;
    case 139u: goto L_001D1790;
    case 140u: goto L_001D17A8;
    case 141u: goto L_001D17F8;
    case 142u: goto L_001D1848;
    case 143u: goto L_001D1888;
    case 144u: goto L_001D18B8;
    case 145u: goto L_001D18D0;
    case 146u: goto L_001D18F0;
    case 147u: goto L_001D1930;
    case 148u: goto L_001D1968;
    case 149u: goto L_001D19A0;
    case 150u: goto L_001D19BC;
    case 151u: goto L_001D19E8;
    case 152u: goto L_001D19FC;
    case 153u: goto L_001D1A40;
    case 154u: goto L_001D1A50;
    case 155u: goto L_001D1A58;
    case 156u: goto L_001D1A68;
    case 157u: goto L_001D1A8C;
    case 158u: goto L_001D1A98;
    case 159u: goto L_001D1AAC;
    case 160u: goto L_001D1AC4;
    case 161u: goto L_001D1AD4;
    case 162u: goto L_001D1AE4;
    case 163u: goto L_001D1AF4;
    case 164u: goto L_001D1B10;
    case 165u: goto L_001D1B20;
    case 166u: goto L_001D1B38;
    case 167u: goto L_001D1B40;
    case 168u: goto L_001D1B64;
    case 169u: goto L_001D1B70;
    case 170u: goto L_001D1B78;
    case 171u: goto L_001D1B88;
    case 172u: goto L_001D1B90;
    case 173u: goto L_001D1BA4;
    case 174u: goto L_001D1BBC;
    case 175u: goto L_001D1BCC;
    case 176u: goto L_001D1BDC;
    case 177u: goto L_001D1BEC;
    case 178u: goto L_001D1C08;
    case 179u: goto L_001D1C44;
    case 180u: goto L_001D1C58;
    case 181u: goto L_001D1C6C;
    case 182u: goto L_001D1C90;
    case 183u: goto L_001D1CE8;
    case 184u: goto L_001D1CF8;
    case 185u: goto L_001D1D00;
    case 186u: goto L_001D1D08;
    case 187u: goto L_001D1D14;
    case 188u: goto L_001D1D58;
    case 189u: goto L_001D1D84;
    case 190u: goto L_001D1D9C;
    case 191u: goto L_001D1DD8;
    case 192u: goto L_001D1E1C;
    case 193u: goto L_001D1E2C;
    case 194u: goto L_001D1E34;
    case 195u: goto L_001D1E58;
    case 196u: goto L_001D1E74;
    case 197u: goto L_001D1E88;
    case 198u: goto L_001D1E90;
    case 199u: goto L_001D1EB4;
    case 200u: goto L_001D1EC0;
    case 201u: goto L_001D1ED8;
    case 202u: goto L_001D1F2C;
    case 203u: goto L_001D1F40;
    case 204u: goto L_001D1F58;
    case 205u: goto L_001D1F68;
    case 206u: goto L_001D1F88;
    case 207u: goto L_001D1F98;
    case 208u: goto L_001D1FA8;
    case 209u: goto L_001D1FC4;
    case 210u: goto L_001D202C;
    case 211u: goto L_001D2048;
    case 212u: goto L_001D20A0;
    case 213u: goto L_001D20E4;
    case 214u: goto L_001D214C;
    case 215u: goto L_001D2238;
    case 216u: goto L_001D224C;
    case 217u: goto L_001D2254;
    case 218u: goto L_001D2288;
    case 219u: goto L_001D22A0;
    case 220u: goto L_001D22FC;
    case 221u: goto L_001D2310;
    case 222u: goto L_001D2328;
    case 223u: goto L_001D2338;
    case 224u: goto L_001D23C0;
    case 225u: goto L_001D23D8;
    case 226u: goto L_001D23E4;
    case 227u: goto L_001D2428;
    case 228u: goto L_001D2430;
    case 229u: goto L_001D243C;
    case 230u: goto L_001D2454;
    case 231u: goto L_001D2460;
    case 232u: goto L_001D247C;
    case 233u: goto L_001D248C;
    case 234u: goto L_001D24B4;
    case 235u: goto L_001D24C0;
    case 236u: goto L_001D2530;
    case 237u: goto L_001D2560;
    case 238u: goto L_001D2580;
    case 239u: goto L_001D25A4;
    case 240u: goto L_001D25C0;
    case 241u: goto L_001D25F8;
    case 242u: goto L_001D2638;
    case 243u: goto L_001D2668;
    case 244u: goto L_001D26A8;
    case 245u: goto L_001D26BC;
    case 246u: goto L_001D26D0;
    case 247u: goto L_001D26E4;
    case 248u: goto L_001D26F8;
    case 249u: goto L_001D270C;
    case 250u: goto L_001D2720;
    case 251u: goto L_001D2734;
    case 252u: goto L_001D2748;
    case 253u: goto L_001D275C;
    case 254u: goto L_001D27C8;
    case 255u: goto L_001D27E4;
    case 256u: goto L_001D2840;
    case 257u: goto L_001D28C8;
    case 258u: goto L_001D28E0;
    case 259u: goto L_001D28EC;
    case 260u: goto L_001D2928;
    case 261u: goto L_001D2930;
    case 262u: goto L_001D293C;
    case 263u: goto L_001D2954;
    case 264u: goto L_001D2960;
    case 265u: goto L_001D297C;
    case 266u: goto L_001D2988;
    case 267u: goto L_001D2A0C;
    case 268u: goto L_001D2A3C;
    case 269u: goto L_001D2A5C;
    case 270u: goto L_001D2A80;
    case 271u: goto L_001D2A9C;
    case 272u: goto L_001D2AD4;
    case 273u: goto L_001D2B14;
    case 274u: goto L_001D2B44;
    case 275u: goto L_001D2B84;
    case 276u: goto L_001D2B98;
    case 277u: goto L_001D2BAC;
    case 278u: goto L_001D2BC0;
    case 279u: goto L_001D2BD4;
    case 280u: goto L_001D2BE8;
    case 281u: goto L_001D2BFC;
    case 282u: goto L_001D2C10;
    case 283u: goto L_001D2C24;
    case 284u: goto L_001D2C38;
    case 285u: goto L_001D2CA4;
    case 286u: goto L_001D2CC0;
    case 287u: goto L_001D2D20;
    case 288u: goto L_001D2D44;
    case 289u: goto L_001D2D74;
    case 290u: goto L_001D2D90;
    case 291u: goto L_001D2D98;
    case 292u: goto L_001D2DCC;
    case 293u: goto L_001D2DD0;
    case 294u: goto L_001D2E04;
    case 295u: goto L_001D2E18;
    case 296u: goto L_001D2E48;
    case 297u: goto L_001D2E60;
    case 298u: goto L_001D2E70;
    case 299u: goto L_001D2E8C;
    case 300u: goto L_001D2E90;
    case 301u: goto L_001D2E98;
    case 302u: goto L_001D2EA0;
    case 303u: goto L_001D2EC8;
    case 304u: goto L_001D2EE8;
    case 305u: goto L_001D2EF4;
    case 306u: goto L_001D2EFC;
    case 307u: goto L_001D2F04;
    case 308u: goto L_001D2F28;
    case 309u: goto L_001D2F58;
    case 310u: goto L_001D2F70;
    case 311u: goto L_001D2F80;
    case 312u: goto L_001D2F9C;
    case 313u: goto L_001D2FA0;
    case 314u: goto L_001D2FA8;
    case 315u: goto L_001D2FB0;
    case 316u: goto L_001D2FD8;
    case 317u: goto L_001D2FF8;
    case 318u: goto L_001D3004;
    case 319u: goto L_001D300C;
    case 320u: goto L_001D3014;
    case 321u: goto L_001D3038;
    case 322u: goto L_001D3058;
    case 323u: goto L_001D3158;
    case 324u: goto L_001D3190;
    case 325u: goto L_001D31C0;
    case 326u: goto L_001D3208;
    case 327u: goto L_001D3210;
    case 328u: goto L_001D321C;
    case 329u: goto L_001D3228;
    case 330u: goto L_001D3248;
    case 331u: goto L_001D3250;
    case 332u: goto L_001D3258;
    case 333u: goto L_001D3264;
    case 334u: goto L_001D3270;
    case 335u: goto L_001D3290;
    case 336u: goto L_001D3298;
    case 337u: goto L_001D32A4;
    case 338u: goto L_001D32B0;
    case 339u: goto L_001D32E0;
    case 340u: goto L_001D3314;
    case 341u: goto L_001D3374;
    case 342u: goto L_001D3390;
    case 343u: goto L_001D33A4;
    case 344u: goto L_001D33C0;
    case 345u: goto L_001D33D0;
    case 346u: goto L_001D33EC;
    case 347u: goto L_001D3410;
    case 348u: goto L_001D3430;
    case 349u: goto L_001D3458;
    case 350u: goto L_001D3474;
    case 351u: goto L_001D3570;
    case 352u: goto L_001D3590;
    case 353u: goto L_001D35D0;
    case 354u: goto L_001D35E0;
    case 355u: goto L_001D35F0;
    case 356u: goto L_001D3600;
    case 357u: goto L_001D3650;
    case 358u: goto L_001D3674;
    case 359u: goto L_001D3688;
    case 360u: goto L_001D36A8;
    case 361u: goto L_001D36C0;
    case 362u: goto L_001D36E4;
    case 363u: goto L_001D36EC;
    case 364u: goto L_001D3718;
    case 365u: goto L_001D3728;
    case 366u: goto L_001D3754;
    case 367u: goto L_001D376C;
    case 368u: goto L_001D378C;
    case 369u: goto L_001D379C;
    case 370u: goto L_001D37B8;
    case 371u: goto L_001D3810;
    case 372u: goto L_001D384C;
    case 373u: goto L_001D3860;
    case 374u: goto L_001D3890;
    case 375u: goto L_001D38C4;
    case 376u: goto L_001D3900;
    case 377u: goto L_001D3914;
    case 378u: goto L_001D3944;
    case 379u: goto L_001D3968;
    case 380u: goto L_001D3998;
    case 381u: goto L_001D39B0;
    case 382u: goto L_001D39D4;
    case 383u: goto L_001D39F4;
    case 384u: goto L_001D3A0C;
    case 385u: goto L_001D3A2C;
    case 386u: goto L_001D3A54;
    case 387u: goto L_001D3AAC;
    case 388u: goto L_001D3ABC;
    case 389u: goto L_001D3AC8;
    case 390u: goto L_001D3AD4;
    case 391u: goto L_001D3AE0;
    case 392u: goto L_001D3AE8;
    case 393u: goto L_001D3B08;
    case 394u: goto L_001D3B0C;
    case 395u: goto L_001D3B40;
    case 396u: goto L_001D3B9C;
    case 397u: goto L_001D3BA8;
    case 398u: goto L_001D3BBC;
    case 399u: goto L_001D3BC4;
    case 400u: goto L_001D3BE0;
    case 401u: goto L_001D3BF4;
    case 402u: goto L_001D3C3C;
    case 403u: goto L_001D3C4C;
    case 404u: goto L_001D3C84;
    case 405u: goto L_001D3CC4;
    case 406u: goto L_001D3CD4;
    case 407u: goto L_001D3CE8;
    case 408u: goto L_001D3CF0;
    case 409u: goto L_001D3D10;
    case 410u: goto L_001D3D40;
    case 411u: goto L_001D3D50;
    case 412u: goto L_001D3D78;
    case 413u: goto L_001D3D90;
    case 414u: goto L_001D3DA8;
    case 415u: goto L_001D3DBC;
    case 416u: goto L_001D3DD0;
    case 417u: goto L_001D3DE4;
    case 418u: goto L_001D3DF8;
    case 419u: goto L_001D3E0C;
    case 420u: goto L_001D3E10;
    case 421u: goto L_001D3E28;
    case 422u: goto L_001D3E38;
    case 423u: goto L_001D3E50;
    case 424u: goto L_001D3E78;
    case 425u: goto L_001D3E98;
    case 426u: goto L_001D3EC0;
    case 427u: goto L_001D3EE8;
    case 428u: goto L_001D3F10;
    case 429u: goto L_001D3F18;
    case 430u: goto L_001D3F20;
    case 431u: goto L_001D3F30;
    case 432u: goto L_001D3F50;
    case 433u: goto L_001D3F58;
    case 434u: goto L_001D3F6C;
    case 435u: goto L_001D3F74;
    case 436u: goto L_001D3F7C;
    case 437u: goto L_001D3F8C;
    case 438u: goto L_001D3F94;
    case 439u: goto L_001D3FA8;
    case 440u: goto L_001D3FB0;
    case 441u: goto L_001D3FD4;
    default: bad_entry(c, 0x001D0000u); return;
    }
L_001D0000:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] <= 0;  if (t) { goto L_001D009C; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], 0u + 24u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[4].w[0] + 27456u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[19].w[0] - 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[3].w[0] - 10400u);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 15;
L_001D0058:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D008C; } }
    set32(c.r[4], c.r[21].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0070u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001D0070u) [[unlikely]] return; }
L_001D0070:
    set32(c.r[4], ld32((c.r[18].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    st32((c.r[18].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_001D008C:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0058u | kUnwind; return; } goto L_001D0058; } }
L_001D009C:
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
L_001D00C8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0108u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001D0108u) [[unlikely]] return; }
L_001D0108:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001D013C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0134u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001D0134u) [[unlikely]] return; }
L_001D0134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D01A0; } }
L_001D013C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D014Cu);  if (depth < kMaxDepth) unit_006C(c, 320u, depth + 1u); else { c.pc = 0x002B3588u; return; } if (c.pc != 0x001D014Cu) [[unlikely]] return; }
L_001D014C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0160u);  if (depth < kMaxDepth) unit_006C(c, 342u, depth + 1u); else { c.pc = 0x002B3980u; return; } if (c.pc != 0x001D0160u) [[unlikely]] return; }
L_001D0160:
    set32(c.r[4], ld32((c.r[17].w[0] + 13232u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[6], 0u + 24u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 2824u);
    st32((c.r[17].w[0] + 13232u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[18].w[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 16;
L_001D01A0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D01C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[20], c.r[2].w[0] - 7112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[19], c.r[3].w[0] - 7064u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[17], c.r[4].w[0] - 2216u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[22], c.r[2].w[0] + 24344u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], 0u - 1u);
    set32(c.r[18], 0u + 5u);
    c.budget -= 20;
L_001D0210:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], 0u + 4343u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001D0284; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0240u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001D0240u) [[unlikely]] return; }
L_001D0240:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0258u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D0258u) [[unlikely]] return; }
L_001D0258:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 4351u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0274u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0274u) [[unlikely]] return; }
L_001D0274:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 4;
L_001D0284:
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0210u | kUnwind; return; } goto L_001D0210; } }
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
L_001D02C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D02E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D02F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20672u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0310u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001D0310u) [[unlikely]] return; }
L_001D0310:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0320u);  if (depth < kMaxDepth) unit_0049(c, 38u, depth + 1u); else { c.pc = 0x00224CC8u; return; } if (c.pc != 0x001D0320u) [[unlikely]] return; }
L_001D0320:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 7032u);
    set32(c.r[8], 0u + 4416u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0344u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0344u) [[unlikely]] return; }
L_001D0344:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[9], c.r[2].w[0] - 760u);
    ldl(c.r[6], (c.r[4].w[0] + 7u));
    ldr(c.r[6], (c.r[4].w[0]));
    ldl(c.r[7], (c.r[4].w[0] + 15u));
    ldr(c.r[7], (c.r[4].w[0] + 8u));
    ldl(c.r[8], (c.r[4].w[0] + 23u));
    ldr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[6], (c.r[9].w[0] + 7u));
    sdr(c.r[6], (c.r[9].w[0]));
    sdl(c.r[7], (c.r[9].w[0] + 15u));
    sdr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[8], (c.r[9].w[0] + 23u));
    sdr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[6], (c.r[4].w[0] + 31u));
    ldr(c.r[6], (c.r[4].w[0] + 24u));
    ldl(c.r[7], (c.r[4].w[0] + 39u));
    ldr(c.r[7], (c.r[4].w[0] + 32u));
    ldl(c.r[8], (c.r[4].w[0] + 47u));
    ldr(c.r[8], (c.r[4].w[0] + 40u));
    sdl(c.r[6], (c.r[9].w[0] + 31u));
    sdr(c.r[6], (c.r[9].w[0] + 24u));
    sdl(c.r[7], (c.r[9].w[0] + 39u));
    sdr(c.r[7], (c.r[9].w[0] + 32u));
    sdl(c.r[8], (c.r[9].w[0] + 47u));
    sdr(c.r[8], (c.r[9].w[0] + 40u));
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[9].w[0] + 48u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[8], c.r[3].w[0] - 816u);
    ldl(c.r[4], (c.r[5].w[0] + 7u));
    ldr(c.r[4], (c.r[5].w[0]));
    ldl(c.r[6], (c.r[5].w[0] + 15u));
    ldr(c.r[6], (c.r[5].w[0] + 8u));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    sdl(c.r[4], (c.r[8].w[0] + 7u));
    sdr(c.r[4], (c.r[8].w[0]));
    sdl(c.r[6], (c.r[8].w[0] + 15u));
    sdr(c.r[6], (c.r[8].w[0] + 8u));
    st32((c.r[8].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[9], c.r[2].w[0] - 704u);
    ldl(c.r[6], (c.r[4].w[0] + 7u));
    ldr(c.r[6], (c.r[4].w[0]));
    ldl(c.r[7], (c.r[4].w[0] + 15u));
    ldr(c.r[7], (c.r[4].w[0] + 8u));
    ldl(c.r[8], (c.r[4].w[0] + 23u));
    ldr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[6], (c.r[9].w[0] + 7u));
    sdr(c.r[6], (c.r[9].w[0]));
    sdl(c.r[7], (c.r[9].w[0] + 15u));
    sdr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[8], (c.r[9].w[0] + 23u));
    sdr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[6], (c.r[4].w[0] + 31u));
    ldr(c.r[6], (c.r[4].w[0] + 24u));
    ldl(c.r[7], (c.r[4].w[0] + 39u));
    ldr(c.r[7], (c.r[4].w[0] + 32u));
    ldl(c.r[8], (c.r[4].w[0] + 47u));
    ldr(c.r[8], (c.r[4].w[0] + 40u));
    sdl(c.r[6], (c.r[9].w[0] + 31u));
    sdr(c.r[6], (c.r[9].w[0] + 24u));
    sdl(c.r[7], (c.r[9].w[0] + 39u));
    sdr(c.r[7], (c.r[9].w[0] + 32u));
    sdl(c.r[8], (c.r[9].w[0] + 47u));
    sdr(c.r[8], (c.r[9].w[0] + 40u));
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[9].w[0] + 48u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[8], c.r[3].w[0] - 792u);
    ldl(c.r[4], (c.r[5].w[0] + 7u));
    ldr(c.r[4], (c.r[5].w[0]));
    ldl(c.r[6], (c.r[5].w[0] + 15u));
    ldr(c.r[6], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    sdl(c.r[4], (c.r[8].w[0] + 7u));
    sdr(c.r[4], (c.r[8].w[0]));
    sdl(c.r[6], (c.r[8].w[0] + 15u));
    sdr(c.r[6], (c.r[8].w[0] + 8u));
    sdl(c.r[7], (c.r[8].w[0] + 23u));
    sdr(c.r[7], (c.r[8].w[0] + 16u));
    ldl(c.r[4], (c.r[5].w[0] + 31u));
    ldr(c.r[4], (c.r[5].w[0] + 24u));
    sdl(c.r[4], (c.r[8].w[0] + 31u));
    sdr(c.r[4], (c.r[8].w[0] + 24u));
    c.budget -= 50;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D04D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] - 3028u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0508u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001D0508u) [[unlikely]] return; }
L_001D0508:
    set32(c.r[8], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D052Cu);  if (depth < kMaxDepth) unit_0057(c, 28u, depth + 1u); else { c.pc = 0x0025C858u; return; } if (c.pc != 0x001D052Cu) [[unlikely]] return; }
L_001D052C:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 7000u);
    set32(c.r[8], 0u + 4543u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0550u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0550u) [[unlikely]] return; }
L_001D0550:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[10], 0u + 20u);
    set32(c.r[9], ld32((c.r[3].w[0] + 31384u)));
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 2096u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[11], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[9].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[8].w[0] + 12u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D05F4u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D05F4u) [[unlikely]] return; }
L_001D05F4:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D061C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0610u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D0610u) [[unlikely]] return; }
L_001D0610:
    c.r[6].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0620; } }
L_001D061C:
    c.r[6].d[0] = c.r[16].d[0] | 1024ull;
    c.budget -= 1;
L_001D0620:
    set32(c.r[7], ld32((c.r[17].w[0] + 31384u)));
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], c.r[20].w[0] - 2096u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0654u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D0654u) [[unlikely]] return; }
L_001D0654:
    set32(c.r[2], ld32((c.r[17].w[0] + 31384u)));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] + 31384u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0688:
    if (::decomp::hook_001D0688.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_001D0688, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 6968u);
    set32(c.r[8], 0u + 4627u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D06C0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D06C0u) [[unlikely]] return; }
L_001D06C0:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    st32((c.r[4].w[0] - 3028u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D06F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D06F0u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D06F0u) [[unlikely]] return; }
L_001D06F0:
    set32(c.r[8], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0714u);  if (depth < kMaxDepth) unit_0057(c, 28u, depth + 1u); else { c.pc = 0x0025C858u; return; } if (c.pc != 0x001D0714u) [[unlikely]] return; }
L_001D0714:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0730:
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 7960u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D075Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D075Cu) [[unlikely]] return; }
L_001D075C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[10], 0u + 20u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] - 2096u);
    set32(c.r[3], ld32((c.r[16].w[0] + 31384u)));
    c.r[14].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[13], 0u + 3u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[12].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[11].w[0] + 4u), c.r[15].w[0]);
    c.r[13].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[12].w[0] + 8u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[13].w[0] + 12u), c.r[14].w[0]);
    c.r[6].d[0] = c.r[14].d[0] | 1024ull;
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[8], c.r[17].w[0] + 1672u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D07E8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D07E8u) [[unlikely]] return; }
L_001D07E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 31384u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 31384u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[11], 0u + 3u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[17].w[0] + 31384u)));
    set32(c.r[18], 0u + 20u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[16].w[0] - 2096u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[9], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[9].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 8u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0884u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D0884u) [[unlikely]] return; }
L_001D0884:
    set32(c.r[7], ld32((c.r[17].w[0] + 31384u)));
    c.r[6].d[0] = c.r[2].d[0] | 1024ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 864u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D08B4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D08B4u) [[unlikely]] return; }
L_001D08B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 31384u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] + 31384u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D08E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0914u);  if (depth < kMaxDepth) unit_0060(c, 255u, depth + 1u); else { c.pc = 0x00283BC8u; return; } if (c.pc != 0x001D0914u) [[unlikely]] return; }
L_001D0914:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] - 3028u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D092Cu);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001D092Cu) [[unlikely]] return; }
L_001D092C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0938u);  if (depth < kMaxDepth) unit_0032(c, 396u, depth + 1u); else { c.pc = 0x001CBD48u; return; } if (c.pc != 0x001D0938u) [[unlikely]] return; }
L_001D0938:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 6904u);
    set32(c.r[8], 0u + 5010u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D095Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D095Cu) [[unlikely]] return; }
L_001D095C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0978u);  if (depth < kMaxDepth) unit_0057(c, 36u, depth + 1u); else { c.pc = 0x0025CA68u; return; } if (c.pc != 0x001D0978u) [[unlikely]] return; }
L_001D0978:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0998:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[12].w[0] - 652u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 648u);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[12].d[0] + 0ull;
    st32((c.r[8].w[0]), c.r[5].w[0]);
    set32(c.r[12], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[12].w[0] + 4u), c.r[16].w[0]);
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    st32((c.r[13].w[0] + 20u), c.r[6].w[0]);
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    st32((c.r[8].w[0] + 24u), c.r[7].w[0]);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[6].w[0] + 12u), c.r[9].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[7].w[0] + 16u), c.r[10].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 28u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A24u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D0A24u) [[unlikely]] return; }
L_001D0A24:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D0A4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A40u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D0A40u) [[unlikely]] return; }
L_001D0A40:
    c.r[6].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0A50; } }
L_001D0A4C:
    c.r[6].d[0] = c.r[16].d[0] | 1024ull;
    c.budget -= 1;
L_001D0A50:
    set32(c.r[7], ld32((c.r[18].w[0] - 652u)));
    set32(c.r[2], c.r[19].w[0] - 648u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + 2280u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A80u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D0A80u) [[unlikely]] return; }
L_001D0A80:
    set32(c.r[2], ld32((c.r[18].w[0] - 652u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st32((c.r[18].w[0] - 652u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[13], ld32((c.r[2].w[0] - 652u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[14].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[12], c.r[12].w[0] - 648u);
    set32(c.r[13], c.r[13].w[0] << 5);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[12].w[0] + c.r[13].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] - 3u);
    st32((c.r[12].w[0] + 28u), c.r[11].w[0]);
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001D0B24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0B28; } }
L_001D0B24:
    c.r[6].d[0] = c.r[7].d[0] | 1024ull;
    c.budget -= 1;
L_001D0B28:
    set32(c.r[7], ld32((c.r[16].w[0] - 652u)));
    set32(c.r[2], c.r[14].w[0] - 648u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] - 7296u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0B54u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D0B54u) [[unlikely]] return; }
L_001D0B54:
    set32(c.r[2], ld32((c.r[16].w[0] - 652u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] - 652u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0B78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[17].w[0] - 652u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 648u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] << 5);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[12], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[12].w[0] + 4u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[8].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[6].w[0] + 16u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[5].w[0] + 24u), c.r[10].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 28u), c.r[11].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0BE4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D0BE4u) [[unlikely]] return; }
L_001D0BE4:
    set32(c.r[7], ld32((c.r[17].w[0] - 652u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 1024ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + 1040u);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0C14u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D0C14u) [[unlikely]] return; }
L_001D0C14:
    set32(c.r[2], ld32((c.r[17].w[0] - 652u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] - 652u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0C6Cu);  if (depth < kMaxDepth) unit_0060(c, 255u, depth + 1u); else { c.pc = 0x00283BC8u; return; } if (c.pc != 0x001D0C6Cu) [[unlikely]] return; }
L_001D0C6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] - 3028u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0C8Cu);  if (depth < kMaxDepth) unit_0056(c, 276u, depth + 1u); else { c.pc = 0x0025ADB8u; return; } if (c.pc != 0x001D0C8Cu) [[unlikely]] return; }
L_001D0C8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 6840u);
    set32(c.r[8], 0u + 5625u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0CB0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0CB0u) [[unlikely]] return; }
L_001D0CB0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1208u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 1592u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 3136u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    c.r[6].d[0] = c.r[10].d[0] | 1024ull;
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0D2Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D0D2Cu) [[unlikely]] return; }
L_001D0D2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1592u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1592u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] - 3028u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0D80u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001D0D80u) [[unlikely]] return; }
L_001D0D80:
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0DA4u);  if (depth < kMaxDepth) unit_0057(c, 190u, depth + 1u); else { c.pc = 0x0025EB58u; return; } if (c.pc != 0x001D0DA4u) [[unlikely]] return; }
L_001D0DA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D0DD8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] - 6808u);
    set32(c.r[8], 0u + 5702u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0DD8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0DD8u) [[unlikely]] return; }
L_001D0DD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0DF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 20u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[12].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 31384u)));
    c.r[11].d[0] = c.r[12].d[0] | 1024ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 2096u);
    c.r[3].d[0] = c.r[9].d[0] & 1ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[11].d[0];
    set32(c.r[8], c.r[8].w[0] + 3408u);
    set32(c.r[11], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[10].w[0]);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[12].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0E64u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D0E64u) [[unlikely]] return; }
L_001D0E64:
    set32(c.r[2], ld32((c.r[16].w[0] + 31384u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 31384u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0E88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0EB0u);  if (depth < kMaxDepth) unit_0088(c, 40u, depth + 1u); else { c.pc = 0x00320740u; return; } if (c.pc != 0x001D0EB0u) [[unlikely]] return; }
L_001D0EB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 6776u);
    set32(c.r[8], 0u + 5991u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0ED4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0ED4u) [[unlikely]] return; }
L_001D0ED4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0F18u);  if (depth < kMaxDepth) unit_0088(c, 22u, depth + 1u); else { c.pc = 0x00320328u; return; } if (c.pc != 0x001D0F18u) [[unlikely]] return; }
L_001D0F18:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 6744u);
    set32(c.r[8], 0u + 6018u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0F3Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D0F3Cu) [[unlikely]] return; }
L_001D0F3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0F58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0F78u);  if (depth < kMaxDepth) unit_0088(c, 153u, depth + 1u); else { c.pc = 0x003219F0u; return; } if (c.pc != 0x001D0F78u) [[unlikely]] return; }
L_001D0F78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0FB0u);  if (depth < kMaxDepth) unit_0088(c, 35u, depth + 1u); else { c.pc = 0x003205E0u; return; } if (c.pc != 0x001D0FB0u) [[unlikely]] return; }
L_001D0FB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0FBCu);  if (depth < kMaxDepth) unit_003D(c, 142u, depth + 1u); else { c.pc = 0x001F6C58u; return; } if (c.pc != 0x001D0FBCu) [[unlikely]] return; }
L_001D0FBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0FD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] - 26384u)));
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + 12288u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1008u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x001D1008u) [[unlikely]] return; }
L_001D1008:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1050; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 30168u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 7;
L_001D1038:
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1038u | kUnwind; return; } goto L_001D1038; } }
L_001D1050:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1068:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 200u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] - 26384u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D10A0u);  if (depth < kMaxDepth) unit_006B(c, 193u, depth + 1u); else { c.pc = 0x002AF790u; return; } if (c.pc != 0x001D10A0u) [[unlikely]] return; }
L_001D10A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[16].w[0] - 26384u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D10C8u);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x001D10C8u) [[unlikely]] return; }
L_001D10C8:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 30168u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 7;
L_001D10F8:
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D10F8u | kUnwind; return; } goto L_001D10F8; } }
L_001D1110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 10156u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1128u);  if (depth < kMaxDepth) unit_0057(c, 212u, depth + 1u); else { c.pc = 0x0025EF68u; return; } if (c.pc != 0x001D1128u) [[unlikely]] return; }
L_001D1128:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1148:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[17].w[0] + 10u);
    st16((c.r[16].w[0] + 7694u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1174u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x001D1174u) [[unlikely]] return; }
L_001D1174:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 18288u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1194u);  if (depth < kMaxDepth) unit_0006(c, 18u, depth + 1u); else { c.pc = 0x00118210u; return; } if (c.pc != 0x001D1194u) [[unlikely]] return; }
L_001D1194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 31848u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[16].w[0] + 600u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D11C0u);  if (depth < kMaxDepth) unit_003C(c, 261u, depth + 1u); else { c.pc = 0x001F2B60u; return; } if (c.pc != 0x001D11C0u) [[unlikely]] return; }
L_001D11C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D11D4u);  if (depth < kMaxDepth) unit_003D(c, 142u, depth + 1u); else { c.pc = 0x001F6C58u; return; } if (c.pc != 0x001D11D4u) [[unlikely]] return; }
L_001D11D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D11E0u);  if (depth < kMaxDepth) unit_0039(c, 248u, depth + 1u); else { c.pc = 0x001E60A0u; return; } if (c.pc != 0x001D11E0u) [[unlikely]] return; }
L_001D11E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D11F8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[16], 0u + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.f[20] = ld32((c.r[16].w[0] + 128u));
    c.f[21] = ld32((c.r[16].w[0] + 136u));
    c.f[22] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D126Cu);  if (depth < kMaxDepth) unit_003C(c, 261u, depth + 1u); else { c.pc = 0x001F2B60u; return; } if (c.pc != 0x001D126Cu) [[unlikely]] return; }
L_001D126C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1278u);  if (depth < kMaxDepth) unit_003D(c, 109u, depth + 1u); else { c.pc = 0x001F5608u; return; } if (c.pc != 0x001D1278u) [[unlikely]] return; }
L_001D1278:
    st32((c.r[16].w[0] + 128u), c.f[20]);
    st32((c.r[16].w[0] + 136u), c.f[21]);
    st32((c.r[16].w[0] + 148u), c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D128Cu);  if (depth < kMaxDepth) unit_006B(c, 193u, depth + 1u); else { c.pc = 0x002AF790u; return; } if (c.pc != 0x001D128Cu) [[unlikely]] return; }
L_001D128C:
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[4], 0u + 200u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 10156u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[5].w[0] - 26384u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12BCu);  if (depth < kMaxDepth) unit_0057(c, 212u, depth + 1u); else { c.pc = 0x0025EF68u; return; } if (c.pc != 0x001D12BCu) [[unlikely]] return; }
L_001D12BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12C8u);  if (depth < kMaxDepth) unit_003D(c, 136u, depth + 1u); else { c.pc = 0x001F6BD0u; return; } if (c.pc != 0x001D12C8u) [[unlikely]] return; }
L_001D12C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12D4u);  if (depth < kMaxDepth) unit_006B(c, 112u, depth + 1u); else { c.pc = 0x002AE620u; return; } if (c.pc != 0x001D12D4u) [[unlikely]] return; }
L_001D12D4:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] - 15096u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[2].w[0]), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1324u);  if (depth < kMaxDepth) unit_003D(c, 142u, depth + 1u); else { c.pc = 0x001F6C58u; return; } if (c.pc != 0x001D1324u) [[unlikely]] return; }
L_001D1324:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1358:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[8], c.r[8].w[0] + 3824u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[2], ld32((c.r[20].w[0] - 3308u)));
    set32(c.r[21], 0u + 24u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[10].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] - 3304u);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    set32(c.r[19], c.r[5].w[0] << 5);
    set32(c.r[16], c.r[16].w[0] + 24104u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.r[6].d[0] = c.r[18].d[0] | 1024ull;
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D13E0u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D13E0u) [[unlikely]] return; }
L_001D13E0:
    set32(c.r[7], ld32((c.r[20].w[0] - 3308u)));
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 3984u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1414u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D1414u) [[unlikely]] return; }
L_001D1414:
    set32(c.r[7], ld32((c.r[20].w[0] - 3308u)));
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 4600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1448u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D1448u) [[unlikely]] return; }
L_001D1448:
    set32(c.r[2], ld32((c.r[20].w[0] - 3308u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st32((c.r[20].w[0] - 3308u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14A0u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D14A0u) [[unlikely]] return; }
L_001D14A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14A8u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x001D14A8u) [[unlikely]] return; }
L_001D14A8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14C0u);  if (depth < kMaxDepth) unit_0086(c, 306u, depth + 1u); else { c.pc = 0x0031BCD0u; return; } if (c.pc != 0x001D14C0u) [[unlikely]] return; }
L_001D14C0:
    set32(c.r[9], ld32((c.r[17].w[0] + 18704u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 35u);
    set32(c.r[7], 0u + 36u);
    set32(c.r[8], 0u + 7074u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14E4u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001D14E4u) [[unlikely]] return; }
L_001D14E4:
    set32(c.r[4], 0u + 7075u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14F0u);  if (depth < kMaxDepth) unit_0037(c, 459u, depth + 1u); else { c.pc = 0x001DEFF8u; return; } if (c.pc != 0x001D14F0u) [[unlikely]] return; }
L_001D14F0:
    set32(c.r[9], ld32((c.r[17].w[0] + 18704u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 37u);
    set32(c.r[7], 0u + 38u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1514u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001D1514u) [[unlikely]] return; }
L_001D1514:
    set32(c.r[9], ld32((c.r[17].w[0] + 18704u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 39u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 7080u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1538u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001D1538u) [[unlikely]] return; }
L_001D1538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1540u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D1540u) [[unlikely]] return; }
L_001D1540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1548u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D1548u) [[unlikely]] return; }
L_001D1548:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1574u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D1574u) [[unlikely]] return; }
L_001D1574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D157Cu);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x001D157Cu) [[unlikely]] return; }
L_001D157C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[9], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 126u);
    set32(c.r[7], 0u + 125u);
    set32(c.r[8], 0u - 1u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D15A8u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001D15A8u) [[unlikely]] return; }
L_001D15A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D15B0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D15B0u) [[unlikely]] return; }
L_001D15B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D15B8u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D15B8u) [[unlikely]] return; }
L_001D15B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D15C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D15DCu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D15DCu) [[unlikely]] return; }
L_001D15DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D15E4u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x001D15E4u) [[unlikely]] return; }
L_001D15E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[9], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 56u);
    set32(c.r[7], 0u + 57u);
    set32(c.r[8], 0u - 1u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1610u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001D1610u) [[unlikely]] return; }
L_001D1610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1618u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D1618u) [[unlikely]] return; }
L_001D1618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1620u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D1620u) [[unlikely]] return; }
L_001D1620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1670:
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1694; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1688:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1694:
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D16D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[2].w[0] + 20942u);
    c.budget -= 5;
L_001D16B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1688u | kUnwind; return; } goto L_001D1688; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 13248u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D16B8u | kUnwind; return; } goto L_001D16B8; } }
L_001D16D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D16E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1704u);  if (depth < kMaxDepth) unit_0088(c, 133u, depth + 1u); else { c.pc = 0x00321678u; return; } if (c.pc != 0x001D1704u) [[unlikely]] return; }
L_001D1704:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1718:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1734u);  if (depth < kMaxDepth) unit_0088(c, 137u, depth + 1u); else { c.pc = 0x00321720u; return; } if (c.pc != 0x001D1734u) [[unlikely]] return; }
L_001D1734:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1748:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D176Cu);  if (depth < kMaxDepth) unit_0088(c, 138u, depth + 1u); else { c.pc = 0x00321738u; return; } if (c.pc != 0x001D176Cu) [[unlikely]] return; }
L_001D176C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 6712u);
    set32(c.r[8], 0u + 7232u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1790u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D1790u) [[unlikely]] return; }
L_001D1790:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D17A8:
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001D17B4u);  goto L_001D17B8; }
L_001D17B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 1600u), c.r[6].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001D182C; } }
    set32(c.r[2], c.r[9].w[0] + 1600u);
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] + 12u);
    set32(c.r[10], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001D17F8:
    set32(c.r[2], ld32((c.r[11].w[0] + 1600u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[10].d[0];  if (t) { goto L_001D1818; } }
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 3;
L_001D1818:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 20u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D17F8u | kUnwind; return; } goto L_001D17F8; } }
L_001D182C:
    set32(c.r[3], c.r[9].w[0] + 1600u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1848:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 13528u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 7u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
L_001D1888:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[7], c.r[21].w[0] - 7112u);
    set32(c.r[8], c.r[20].w[0] - 6656u);
    set32(c.r[9], 0u + 7507u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001D18F4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D18B8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001D18B8u) [[unlikely]] return; }
L_001D18B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D18D0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D18D0u) [[unlikely]] return; }
L_001D18D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D18F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D18F0u) [[unlikely]] return; }
L_001D18F0:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_001D18F4:
    set32(c.r[18], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1888u | kUnwind; return; } goto L_001D1888; } }
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
L_001D1930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] + 13528u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1970; } }
    c.budget -= 1;
L_001D1968:
    set32(c.r[17], c.r[17].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_001D1970:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D19C4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1968u | kUnwind; return; } goto L_001D1968; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 52u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[17].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19A0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D19A0u) [[unlikely]] return; }
L_001D19A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001D19BC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19BCu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D19BCu) [[unlikely]] return; }
L_001D19BC:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 2;
L_001D19C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D19E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19FCu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D19FCu) [[unlikely]] return; }
L_001D19FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1A50u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D1A50u) [[unlikely]] return; }
L_001D1A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1A58u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D1A58u) [[unlikely]] return; }
L_001D1A58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20672u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1A8Cu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1A8Cu) [[unlikely]] return; }
L_001D1A8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[2].w[0] + 20640u);
    c.budget -= 3;
L_001D1A98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AACu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1AACu) [[unlikely]] return; }
L_001D1AAC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1A98u | kUnwind; return; } goto L_001D1A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20628u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AC4u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1AC4u) [[unlikely]] return; }
L_001D1AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AD4u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1AD4u) [[unlikely]] return; }
L_001D1AD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20664u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AE4u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1AE4u) [[unlikely]] return; }
L_001D1AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20668u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AF4u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1AF4u) [[unlikely]] return; }
L_001D1AF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1B10:
    set32(c.r[2], 0u + 5912u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B38u);  if (depth < kMaxDepth) unit_0055(c, 88u, depth + 1u); else { c.pc = 0x00254C60u; return; } if (c.pc != 0x001D1B38u) [[unlikely]] return; }
L_001D1B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B40u);  if (depth < kMaxDepth) unit_0058(c, 60u, depth + 1u); else { c.pc = 0x00260968u; return; } if (c.pc != 0x001D1B40u) [[unlikely]] return; }
L_001D1B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21448u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D1B5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 25932u), c.r[2].w[0]);
    c.budget -= 3;
L_001D1B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B64u);  if (depth < kMaxDepth) unit_007E(c, 219u, depth + 1u); else { c.pc = 0x002FA7E0u; return; } if (c.pc != 0x001D1B64u) [[unlikely]] return; }
L_001D1B64:
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B70u);  if (depth < kMaxDepth) unit_006B(c, 181u, depth + 1u); else { c.pc = 0x002AF550u; return; } if (c.pc != 0x001D1B70u) [[unlikely]] return; }
L_001D1B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B78u);  if (depth < kMaxDepth) unit_0088(c, 150u, depth + 1u); else { c.pc = 0x00321998u; return; } if (c.pc != 0x001D1B78u) [[unlikely]] return; }
L_001D1B78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20672u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B88u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1B88u) [[unlikely]] return; }
L_001D1B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[2].w[0] + 20640u);
    c.budget -= 2;
L_001D1B90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BA4u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1BA4u) [[unlikely]] return; }
L_001D1BA4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1B90u | kUnwind; return; } goto L_001D1B90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20628u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BBCu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1BBCu) [[unlikely]] return; }
L_001D1BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BCCu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1BCCu) [[unlikely]] return; }
L_001D1BCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20664u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BDCu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1BDCu) [[unlikely]] return; }
L_001D1BDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20668u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BECu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D1BECu) [[unlikely]] return; }
L_001D1BEC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1C08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[20].w[0] << 16);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1C44u);  if (depth < kMaxDepth) unit_007D(c, 186u, depth + 1u); else { c.pc = 0x002F6BA0u; return; } if (c.pc != 0x001D1C44u) [[unlikely]] return; }
L_001D1C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1C58u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D1C58u) [[unlikely]] return; }
L_001D1C58:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1C6Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D1C6Cu) [[unlikely]] return; }
L_001D1C6C:
    st8((c.r[19].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1C90u);  if (depth < kMaxDepth) unit_0033(c, 189u, depth + 1u); else { c.pc = 0x001CE6E8u; return; } if (c.pc != 0x001D1C90u) [[unlikely]] return; }
L_001D1C90:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001D1CA4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1CC0; } }
L_001D1CA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001D1CBC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1CC0; } }
L_001D1CBC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001D1CC0:
    st8((c.r[19].w[0] + 9289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1CE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1CF8u);  if (depth < kMaxDepth) unit_0097(c, 251u, depth + 1u); else { c.pc = 0x0035EA78u; return; } if (c.pc != 0x001D1CF8u) [[unlikely]] return; }
L_001D1CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D00u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D1D00u) [[unlikely]] return; }
L_001D1D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D08u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D1D08u) [[unlikely]] return; }
L_001D1D08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D14u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D1D14u) [[unlikely]] return; }
L_001D1D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1D58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D84u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001D1D84u) [[unlikely]] return; }
L_001D1D84:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001D1DCC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D9Cu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D1D9Cu) [[unlikely]] return; }
L_001D1D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    c.budget -= 12;
L_001D1DCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DD8u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001D1DD8u) [[unlikely]] return; }
L_001D1DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 24104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[11], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E1Cu);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001D1E1Cu) [[unlikely]] return; }
L_001D1E1C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001D1E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E2Cu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D1E2Cu) [[unlikely]] return; }
L_001D1E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E34u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D1E34u) [[unlikely]] return; }
L_001D1E34:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1E58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E74u);  if (depth < kMaxDepth) unit_0086(c, 281u, depth + 1u); else { c.pc = 0x0031B808u; return; } if (c.pc != 0x001D1E74u) [[unlikely]] return; }
L_001D1E74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D1EC0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1EB4u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x001D1EB4u) [[unlikely]] return; }
L_001D1EB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1EC0u);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x001D1EC0u) [[unlikely]] return; }
L_001D1EC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1ED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] | 99ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 119ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1F18; } }
L_001D1F08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1F24; } }
L_001D1F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65439ull;
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001D1F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F2Cu);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AFA08u; return; } if (c.pc != 0x001D1F2Cu) [[unlikely]] return; }
L_001D1F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F58u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D1F58u) [[unlikely]] return; }
L_001D1F58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 100ull;
    c.r[3].d[0] = c.r[3].d[0] | 120ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1F88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F98u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x001D1F98u) [[unlikely]] return; }
L_001D1F98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1FA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FC4u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x001D1FC4u) [[unlikely]] return; }
L_001D1FC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D2030; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 99ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1FFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 119ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D200C; } }
L_001D1FFC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2018; } }
L_001D200C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65439ull;
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001D2018:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D202Cu);  if (depth < kMaxDepth) unit_0085(c, 131u, depth + 1u); else { c.pc = 0x00315470u; return; } if (c.pc != 0x001D202Cu) [[unlikely]] return; }
L_001D202C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D2030:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2048:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[22], ld32((c.r[5].w[0] + 104u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D20A0u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001D20A0u) [[unlikely]] return; }
L_001D20A0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[3].w[0] - 3308u), 0u);
    st32((c.r[2].w[0] - 20128u), 0u);
    st32((c.r[5].w[0] + 1592u), 0u);
    st32((c.r[6].w[0] - 29288u), 0u);
    st32((c.r[7].w[0] + 28252u), 0u);
    st32((c.r[8].w[0] - 652u), 0u);
    st32((c.r[16].w[0] + 31384u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D20E4u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001D20E4u) [[unlikely]] return; }
L_001D20E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 31384u)));
    set32(c.r[4], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[11], 0u + 3u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 2096u);
    set32(c.r[12], 0u - 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1672u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[19].d[0] | 1024ull;
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[9].w[0] + 4u), c.r[12].w[0]);
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 8u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[19].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[20].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D214Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D214Cu) [[unlikely]] return; }
L_001D214C:
    set32(c.r[3], ld32((c.r[16].w[0] + 31384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 99ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 31384u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 119ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2190; } }
L_001D2180:
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D219C; } }
L_001D2190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65439ull;
    set32(c.r[8], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001D219C:
    set32(c.r[2], ld32((c.r[21].w[0] - 652u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u + 93u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 648u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[18].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[22].w[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[2], c.r[8].w[0] - 3u);
    st32((c.r[5].w[0] + 16u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[23].w[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2204; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2208; } }
L_001D2204:
    c.r[6].d[0] = c.r[19].d[0] | 1024ull;
    c.budget -= 1;
L_001D2208:
    set32(c.r[7], ld32((c.r[21].w[0] - 652u)));
    set32(c.r[2], c.r[9].w[0] - 648u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] - 7296u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2238u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001D2238u) [[unlikely]] return; }
L_001D2238:
    set32(c.r[2], ld32((c.r[21].w[0] - 652u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] - 652u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D224Cu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001D224Cu) [[unlikely]] return; }
L_001D224C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2254u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001D2254u) [[unlikely]] return; }
L_001D2254:
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
L_001D2288:
    set32(c.r[2], 0u + 140u);
    set32(c.r[3], 0u + 139u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D22A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] | 99ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D22D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 119ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D22E4; } }
L_001D22D4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D22F0; } }
L_001D22E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65439ull;
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001D22F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22FCu);  if (depth < kMaxDepth) unit_0085(c, 131u, depth + 1u); else { c.pc = 0x00315470u; return; } if (c.pc != 0x001D22FCu) [[unlikely]] return; }
L_001D22FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2328u);  if (depth < kMaxDepth) unit_0033(c, 306u, depth + 1u); else { c.pc = 0x001CFE40u; return; } if (c.pc != 0x001D2328u) [[unlikely]] return; }
L_001D2328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2338:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[22], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 248u), c.f[29]);
    st32((c.r[29].w[0] + 240u), c.f[28]);
    st32((c.r[29].w[0] + 232u), c.f[27]);
    st32((c.r[29].w[0] + 224u), c.f[26]);
    st32((c.r[29].w[0] + 216u), c.f[25]);
    st32((c.r[29].w[0] + 208u), c.f[24]);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[18], ld32((c.r[2].w[0] - 29824u)));
    c.budget -= 29;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001D24AC; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D23C4; } }
    c.budget -= 1;
L_001D23C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D23C4:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23D8u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D23D8u) [[unlikely]] return; }
L_001D23D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23E4u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D23E4u) [[unlikely]] return; }
L_001D23E4:
    set32(c.r[3], 0u + 21552u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 21420u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D23C0u | kUnwind; return; } goto L_001D23C0; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D2404:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001D24AC; } }
    set32(c.r[20], 0u + 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 1u);
    set32(c.r[21], 0u + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001D2428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2430u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D2430u) [[unlikely]] return; }
L_001D2430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D243Cu);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D243Cu) [[unlikely]] return; }
L_001D243C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_001D2494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2454u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D2454u) [[unlikely]] return; }
L_001D2454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2460u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D2460u) [[unlikely]] return; }
L_001D2460:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D2494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D247Cu);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D247Cu) [[unlikely]] return; }
L_001D247C:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D248Cu);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D248Cu) [[unlikely]] return; }
L_001D248C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001D2494:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 21552u);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2428u | kUnwind; return; } goto L_001D2428; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001D24AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24B4u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D24B4u) [[unlikely]] return; }
L_001D24B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24C0u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D24C0u) [[unlikely]] return; }
L_001D24C0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 19392ull;
    set32(c.r[6], 0u + 3600u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[5], 0u + 21552u);
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001D24E0u);  goto L_001D24E4; }
L_001D24E4:
    c.r[4].d[0] = c.r[4].d[0] | 19392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 19392ull;
    set32(c.r[4], 0u + 3600u);
    set32(c.r[3], 0u + 60u);
    c.r[7].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 200u)));
    c.r[2].d[0] = c.hi.d[0];
    c.r[20].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2530u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D2530u) [[unlikely]] return; }
L_001D2530:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D2568; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5784u);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2560u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001D2560u) [[unlikely]] return; }
L_001D2560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D25A4; } }
L_001D2568:
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 5752u);
    set32(c.r[17], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2580u);  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x001E6EC8u; return; } if (c.pc != 0x001D2580u) [[unlikely]] return; }
L_001D2580:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D25A4u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001D25A4u) [[unlikely]] return; }
L_001D25A4:
    set32(c.r[17], c.r[30].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CC80000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D25C0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D25C0u) [[unlikely]] return; }
L_001D25C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[29] = c.r[1].w[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[18].w[0] + 19392u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19396u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[18].w[0] + 19400u), c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D25F8u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001D25F8u) [[unlikely]] return; }
L_001D25F8:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 2u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 19408u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 19416u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19412u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2638u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D2638u) [[unlikely]] return; }
L_001D2638:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[18].w[0] + 19488u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19492u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[18].w[0] + 19496u), c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2668u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001D2668u) [[unlikely]] return; }
L_001D2668:
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[4], c.r[2].w[0] + 12224u);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 19504u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 19512u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19508u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26A8u);  if (depth < kMaxDepth) unit_0038(c, 556u, depth + 1u); else { c.pc = 0x001E3F80u; return; } if (c.pc != 0x001D26A8u) [[unlikely]] return; }
L_001D26A8:
    c.f[28] = c.r[2].w[0];
    c.f[28] = fp::cvt_s_w(c.f[28]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26BCu);  if (depth < kMaxDepth) unit_0026(c, 132u, depth + 1u); else { c.pc = 0x0019AE20u; return; } if (c.pc != 0x001D26BCu) [[unlikely]] return; }
L_001D26BC:
    c.f[25] = c.r[2].w[0];
    c.f[25] = fp::cvt_s_w(c.f[25]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26D0u);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019B120u; return; } if (c.pc != 0x001D26D0u) [[unlikely]] return; }
L_001D26D0:
    c.f[26] = c.r[2].w[0];
    c.f[26] = fp::cvt_s_w(c.f[26]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26E4u);  if (depth < kMaxDepth) unit_0026(c, 174u, depth + 1u); else { c.pc = 0x0019B258u; return; } if (c.pc != 0x001D26E4u) [[unlikely]] return; }
L_001D26E4:
    c.f[27] = c.r[2].w[0];
    c.f[27] = fp::cvt_s_w(c.f[27]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26F8u);  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A25E0u; return; } if (c.pc != 0x001D26F8u) [[unlikely]] return; }
L_001D26F8:
    c.f[24] = c.r[2].w[0];
    c.f[24] = fp::cvt_s_w(c.f[24]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D270Cu);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2570u; return; } if (c.pc != 0x001D270Cu) [[unlikely]] return; }
L_001D270C:
    c.f[23] = c.r[2].w[0];
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2720u);  if (depth < kMaxDepth) unit_0028(c, 163u, depth + 1u); else { c.pc = 0x001A2550u; return; } if (c.pc != 0x001D2720u) [[unlikely]] return; }
L_001D2720:
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2734u);  if (depth < kMaxDepth) unit_0028(c, 156u, depth + 1u); else { c.pc = 0x001A2490u; return; } if (c.pc != 0x001D2734u) [[unlikely]] return; }
L_001D2734:
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2748u);  if (depth < kMaxDepth) unit_0028(c, 157u, depth + 1u); else { c.pc = 0x001A24A0u; return; } if (c.pc != 0x001D2748u) [[unlikely]] return; }
L_001D2748:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D275Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D275Cu) [[unlikely]] return; }
L_001D275C:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D277C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15956u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[29] = fp::add(c.f[0], c.f[29]);
    c.budget -= 4;
L_001D277C:
    c.f[0] = fp::add(c.f[28], c.f[25]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[29], c.f[26]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[27]);
    c.f[1] = fp::add(c.f[1], c.f[24]);
    c.f[0] = fp::add(c.f[0], c.f[23]);
    c.f[1] = fp::add(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[18].w[0] + 220u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D27C8u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001D27C8u) [[unlikely]] return; }
L_001D27C8:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], 0u + 21552u);
    st32((c.r[18].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D27E4u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D27E4u) [[unlikely]] return; }
L_001D27E4:
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
    c.f[29] = ld32((c.r[29].w[0] + 248u));
    c.f[28] = ld32((c.r[29].w[0] + 240u));
    c.f[27] = ld32((c.r[29].w[0] + 232u));
    c.f[26] = ld32((c.r[29].w[0] + 224u));
    c.f[25] = ld32((c.r[29].w[0] + 216u));
    c.f[24] = ld32((c.r[29].w[0] + 208u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2840:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[22], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 248u), c.f[29]);
    st32((c.r[29].w[0] + 240u), c.f[28]);
    st32((c.r[29].w[0] + 232u), c.f[27]);
    st32((c.r[29].w[0] + 224u), c.f[26]);
    st32((c.r[29].w[0] + 216u), c.f[25]);
    st32((c.r[29].w[0] + 208u), c.f[24]);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[18], ld32((c.r[2].w[0] - 29824u)));
    c.budget -= 29;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D29A4; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D28CC; } }
    c.budget -= 1;
L_001D28C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D28CC:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D290C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28E0u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D28E0u) [[unlikely]] return; }
L_001D28E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28ECu);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D28ECu) [[unlikely]] return; }
L_001D28EC:
    set32(c.r[3], 0u + 21552u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 21420u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D28C8u | kUnwind; return; } goto L_001D28C8; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D290C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001D29A4; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 1u);
    set32(c.r[20], 0u + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001D2928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2930u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D2930u) [[unlikely]] return; }
L_001D2930:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D293Cu);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D293Cu) [[unlikely]] return; }
L_001D293C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_001D2990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2954u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D2954u) [[unlikely]] return; }
L_001D2954:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2960u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D2960u) [[unlikely]] return; }
L_001D2960:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D2990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D297Cu);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001D297Cu) [[unlikely]] return; }
L_001D297C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2988u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001D2988u) [[unlikely]] return; }
L_001D2988:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001D2990:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 21552u);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2928u | kUnwind; return; } goto L_001D2928; } }
L_001D29A4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 19392ull;
    set32(c.r[5], 0u + 3600u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001D29C0u);  goto L_001D29C4; }
L_001D29C4:
    c.r[2].d[0] = c.r[2].d[0] | 19392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 19392ull;
    set32(c.r[2], 0u + 3600u);
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], ld32((c.r[21].w[0] - 29824u)));
    set32(c.r[4], c.r[4].w[0] + 21552u);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 200u)));
    c.r[6].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[20].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A0Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D2A0Cu) [[unlikely]] return; }
L_001D2A0C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D2A44; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5784u);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A3Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001D2A3Cu) [[unlikely]] return; }
L_001D2A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2A80; } }
L_001D2A44:
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 5752u);
    set32(c.r[17], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A5Cu);  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x001E6EC8u; return; } if (c.pc != 0x001D2A5Cu) [[unlikely]] return; }
L_001D2A5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A80u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001D2A80u) [[unlikely]] return; }
L_001D2A80:
    set32(c.r[17], c.r[30].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CC80000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A9Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D2A9Cu) [[unlikely]] return; }
L_001D2A9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[29] = c.r[1].w[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[18].w[0] + 19392u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19396u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[18].w[0] + 19400u), c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2AD4u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001D2AD4u) [[unlikely]] return; }
L_001D2AD4:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 2u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 19408u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 19416u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19412u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B14u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D2B14u) [[unlikely]] return; }
L_001D2B14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[18].w[0] + 19488u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19492u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[18].w[0] + 19496u), c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B44u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001D2B44u) [[unlikely]] return; }
L_001D2B44:
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[4], c.r[2].w[0] + 12224u);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 19504u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 19512u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[18].w[0] + 19508u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B84u);  if (depth < kMaxDepth) unit_0038(c, 556u, depth + 1u); else { c.pc = 0x001E3F80u; return; } if (c.pc != 0x001D2B84u) [[unlikely]] return; }
L_001D2B84:
    c.f[28] = c.r[2].w[0];
    c.f[28] = fp::cvt_s_w(c.f[28]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B98u);  if (depth < kMaxDepth) unit_0026(c, 132u, depth + 1u); else { c.pc = 0x0019AE20u; return; } if (c.pc != 0x001D2B98u) [[unlikely]] return; }
L_001D2B98:
    c.f[25] = c.r[2].w[0];
    c.f[25] = fp::cvt_s_w(c.f[25]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BACu);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019B120u; return; } if (c.pc != 0x001D2BACu) [[unlikely]] return; }
L_001D2BAC:
    c.f[26] = c.r[2].w[0];
    c.f[26] = fp::cvt_s_w(c.f[26]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BC0u);  if (depth < kMaxDepth) unit_0026(c, 174u, depth + 1u); else { c.pc = 0x0019B258u; return; } if (c.pc != 0x001D2BC0u) [[unlikely]] return; }
L_001D2BC0:
    c.f[27] = c.r[2].w[0];
    c.f[27] = fp::cvt_s_w(c.f[27]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BD4u);  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A25E0u; return; } if (c.pc != 0x001D2BD4u) [[unlikely]] return; }
L_001D2BD4:
    c.f[24] = c.r[2].w[0];
    c.f[24] = fp::cvt_s_w(c.f[24]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BE8u);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2570u; return; } if (c.pc != 0x001D2BE8u) [[unlikely]] return; }
L_001D2BE8:
    c.f[23] = c.r[2].w[0];
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BFCu);  if (depth < kMaxDepth) unit_0028(c, 163u, depth + 1u); else { c.pc = 0x001A2550u; return; } if (c.pc != 0x001D2BFCu) [[unlikely]] return; }
L_001D2BFC:
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C10u);  if (depth < kMaxDepth) unit_0028(c, 156u, depth + 1u); else { c.pc = 0x001A2490u; return; } if (c.pc != 0x001D2C10u) [[unlikely]] return; }
L_001D2C10:
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C24u);  if (depth < kMaxDepth) unit_0028(c, 157u, depth + 1u); else { c.pc = 0x001A24A0u; return; } if (c.pc != 0x001D2C24u) [[unlikely]] return; }
L_001D2C24:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C38u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D2C38u) [[unlikely]] return; }
L_001D2C38:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D2C58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15956u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[29] = fp::add(c.f[0], c.f[29]);
    c.budget -= 4;
L_001D2C58:
    c.f[0] = fp::add(c.f[28], c.f[25]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[29], c.f[26]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[27]);
    c.f[1] = fp::add(c.f[1], c.f[24]);
    c.f[0] = fp::add(c.f[0], c.f[23]);
    c.f[1] = fp::add(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[18].w[0] + 220u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CA4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001D2CA4u) [[unlikely]] return; }
L_001D2CA4:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], 0u + 21552u);
    st32((c.r[18].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CC0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001D2CC0u) [[unlikely]] return; }
L_001D2CC0:
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
    c.f[29] = ld32((c.r[29].w[0] + 248u));
    c.f[28] = ld32((c.r[29].w[0] + 240u));
    c.f[27] = ld32((c.r[29].w[0] + 232u));
    c.f[26] = ld32((c.r[29].w[0] + 224u));
    c.f[25] = ld32((c.r[29].w[0] + 216u));
    c.f[24] = ld32((c.r[29].w[0] + 208u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29936u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2D44; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D44u);  if (depth < kMaxDepth) unit_0000(c, 56u, depth + 1u); else { c.pc = 0x001009F0u; return; } if (c.pc != 0x001D2D44u) [[unlikely]] return; }
L_001D2D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 29932u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001D2D74; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2D74u) [[unlikely]] return; }
L_001D2D74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29920u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2D90; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D90u);  if (depth < kMaxDepth) unit_002C(c, 469u, depth + 1u); else { c.pc = 0x001B3478u; return; } if (c.pc != 0x001D2D90u) [[unlikely]] return; }
L_001D2D90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001D2D98:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2D98u | kUnwind; return; } goto L_001D2D98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29916u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2DCC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2DCCu);  if (depth < kMaxDepth) unit_0008(c, 157u, depth + 1u); else { c.pc = 0x001215B0u; return; } if (c.pc != 0x001D2DCCu) [[unlikely]] return; }
L_001D2DCC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D2DD0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2DD0u | kUnwind; return; } goto L_001D2DD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29908u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2E04; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E04u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106840u; return; } if (c.pc != 0x001D2E04u) [[unlikely]] return; }
L_001D2E04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2E18:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2EB8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
L_001D2E48:
    set32(c.r[3], c.r[18].w[0] + 11336u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E60u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D2E60u) [[unlikely]] return; }
L_001D2E60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E70u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D2E70u) [[unlikely]] return; }
L_001D2E70:
    set32(c.r[5], 0u + 13248u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[19].w[0] + 27456u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E8Cu);  if (depth < kMaxDepth) unit_0000(c, 254u, depth + 1u); else { c.pc = 0x00102870u; return; } if (c.pc != 0x001D2E8Cu) [[unlikely]] return; }
L_001D2E8C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001D2E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2EA0; } }
L_001D2E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2EA0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D2EA0u) [[unlikely]] return; }
L_001D2EA0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2E48u | kUnwind; return; } goto L_001D2E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2F04; } }
L_001D2EB8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + 11336u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_001D2EC8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2EC8u | kUnwind; return; } goto L_001D2EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2F04; } }
L_001D2EE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2EF4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D2EF4u) [[unlikely]] return; }
L_001D2EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2E98u | kUnwind; return; } goto L_001D2E98; } }
L_001D2EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F04u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D2F04u) [[unlikely]] return; }
L_001D2F04:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2F28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2FC8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
L_001D2F58:
    set32(c.r[3], c.r[18].w[0] + 11392u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F70u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D2F70u) [[unlikely]] return; }
L_001D2F70:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1776u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F80u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D2F80u) [[unlikely]] return; }
L_001D2F80:
    set32(c.r[5], 0u + 13248u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[19].w[0] + 27456u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F9Cu);  if (depth < kMaxDepth) unit_0000(c, 283u, depth + 1u); else { c.pc = 0x00102BD0u; return; } if (c.pc != 0x001D2F9Cu) [[unlikely]] return; }
L_001D2F9C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001D2FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2FB0; } }
L_001D2FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FB0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D2FB0u) [[unlikely]] return; }
L_001D2FB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2F58u | kUnwind; return; } goto L_001D2F58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3014; } }
L_001D2FC8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + 11392u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_001D2FD8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2FD8u | kUnwind; return; } goto L_001D2FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3014; } }
L_001D2FF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3004u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D3004u) [[unlikely]] return; }
L_001D3004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2FA8u | kUnwind; return; } goto L_001D2FA8; } }
L_001D300C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3014u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D3014u) [[unlikely]] return; }
L_001D3014:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D3038:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3058u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D3058u) [[unlikely]] return; }
L_001D3058:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D31A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3084; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3098; } }
L_001D3084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 26392u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_001D3098:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001D31A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D30C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D30DC; } }
L_001D30C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 26392u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    if (c.r[3].d[0] != 0) c.r[5].d[0] = 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_001D30DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D31A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 11264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D314C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11264u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_001D3178; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001D3178; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001D3178; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_001D3178; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001D3178; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001D31A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3178; } }
L_001D314C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3158u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x001015C0u; return; } if (c.pc != 0x001D3158u) [[unlikely]] return; }
L_001D3158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D31A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3178; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3184; } }
L_001D3178:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D31A4; } }
L_001D3184:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3190u);  if (depth < kMaxDepth) unit_0000(c, 138u, depth + 1u); else { c.pc = 0x001015F8u; return; } if (c.pc != 0x001D3190u) [[unlikely]] return; }
L_001D3190:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D31A4; } }
L_001D31A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D31A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D31C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 19624u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 18;
L_001D3208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3210u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001D3210u) [[unlikely]] return; }
L_001D3210:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D321Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001D321Cu) [[unlikely]] return; }
L_001D321C:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3228u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D3228u) [[unlikely]] return; }
L_001D3228:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3208u | kUnwind; return; } goto L_001D3208; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[18].w[0] + 24040u);
    st32((c.r[19].w[0] + 15804u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3248u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001D3248u) [[unlikely]] return; }
L_001D3248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3264; } }
L_001D3250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3258u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001D3258u) [[unlikely]] return; }
L_001D3258:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3264u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D3264u) [[unlikely]] return; }
L_001D3264:
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3270u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001D3270u) [[unlikely]] return; }
L_001D3270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3250u | kUnwind; return; } goto L_001D3250; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 19624u), c.r[2].w[0]);
    set32(c.r[16], 0u + 3u);
    st32((c.r[19].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 6;
L_001D3290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3298u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001D3298u) [[unlikely]] return; }
L_001D3298:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32A4u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001D32A4u) [[unlikely]] return; }
L_001D32A4:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32B0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D32B0u) [[unlikely]] return; }
L_001D32B0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3290u | kUnwind; return; } goto L_001D3290; } }
    st32((c.r[19].w[0] + 15804u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D32E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[3].w[0] + 14852u)));
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001D3410; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3314u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A958u; return; } if (c.pc != 0x001D3314u) [[unlikely]] return; }
L_001D3314:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D339C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3344; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D33C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D33F4; } }
L_001D3344:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D33F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 96u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001D3410; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] - 20028u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3374u);  if (depth < kMaxDepth) unit_0039(c, 339u, depth + 1u); else { c.pc = 0x001E6DB8u; return; } if (c.pc != 0x001D3374u) [[unlikely]] return; }
L_001D3374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20792u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3390u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001D3390u) [[unlikely]] return; }
L_001D3390:
    st32((c.r[16].w[0] - 20028u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3410; } }
L_001D339C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33A4u);  if (depth < kMaxDepth) unit_0039(c, 339u, depth + 1u); else { c.pc = 0x001E6DB8u; return; } if (c.pc != 0x001D33A4u) [[unlikely]] return; }
L_001D33A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20792u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33C0u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001D33C0u) [[unlikely]] return; }
L_001D33C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3410; } }
L_001D33C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33D0u);  if (depth < kMaxDepth) unit_0039(c, 339u, depth + 1u); else { c.pc = 0x001E6DB8u; return; } if (c.pc != 0x001D33D0u) [[unlikely]] return; }
L_001D33D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20792u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33ECu);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001D33ECu) [[unlikely]] return; }
L_001D33EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3410; } }
L_001D33F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20792u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3410u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001D3410u) [[unlikely]] return; }
L_001D3410:
    set32(c.r[2], 0u + 3u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D3430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 20028u), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3458u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0013A7C8u; return; } if (c.pc != 0x001D3458u) [[unlikely]] return; }
L_001D3458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20792u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3474u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001D3474u) [[unlikely]] return; }
L_001D3474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29824u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D34DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D349C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] - 32072u), c.r[16].w[0]);
    c.budget -= 2;
L_001D349C:
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001D34B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] - 32076u), c.r[16].w[0]);
    c.budget -= 2;
L_001D34B0:
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D34CC; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D3564; } }
L_001D34CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] - 32068u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3564; } }
L_001D34DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_001D3564; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D34FC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3504; } }
L_001D34FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] - 32072u), c.r[4].w[0]);
    c.budget -= 2;
L_001D3504:
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001D3520; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001D3528; } }
L_001D3520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] - 32076u), c.r[4].w[0]);
    c.budget -= 2;
L_001D3528:
    set32(c.r[4], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001D3558; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001D3558; } }
    set32(c.r[3], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D3558; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D3564; } }
L_001D3558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 32068u), c.r[2].w[0]);
    c.budget -= 3;
L_001D3564:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3570u);  if (depth < kMaxDepth) unit_0030(c, 140u, depth + 1u); else { c.pc = 0x001C1A70u; return; } if (c.pc != 0x001D3570u) [[unlikely]] return; }
L_001D3570:
    st32((c.r[17].w[0] - 20028u), 0u);
    set32(c.r[2], 0u + 3u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D3590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12852u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3614; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3614; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35D0u);  if (depth < kMaxDepth) unit_0089(c, 196u, depth + 1u); else { c.pc = 0x00326188u; return; } if (c.pc != 0x001D35D0u) [[unlikely]] return; }
L_001D35D0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35E0u);  if (depth < kMaxDepth) unit_0089(c, 126u, depth + 1u); else { c.pc = 0x003257D0u; return; } if (c.pc != 0x001D35E0u) [[unlikely]] return; }
L_001D35E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35F0u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x001D35F0u) [[unlikely]] return; }
L_001D35F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3600u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x001D3600u) [[unlikely]] return; }
L_001D3600:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 12852u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12852u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D379C; } }
L_001D3614:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 11188u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001D36A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3650u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001D3650u) [[unlikely]] return; }
L_001D3650:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 512u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 516u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3674u) [[unlikely]] return; }
L_001D3674:
    set32(c.r[16], ld32((c.r[16].w[0] + 532u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D36A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3688u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001D3688u) [[unlikely]] return; }
L_001D3688:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D36A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D36A8u) [[unlikely]] return; }
L_001D36A8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] - 29924u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D36E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D36C0u);  if (depth < kMaxDepth) unit_0000(c, 164u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x001D36C0u) [[unlikely]] return; }
L_001D36C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D36E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D36E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 29924u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D36E4u);  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x001021F0u; return; } if (c.pc != 0x001D36E4u) [[unlikely]] return; }
L_001D36E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D36ECu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D36ECu) [[unlikely]] return; }
L_001D36EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D3718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29908u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D3718; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3718u);  if (depth < kMaxDepth) unit_0001(c, 399u, depth + 1u); else { c.pc = 0x00106E80u; return; } if (c.pc != 0x001D3718u) [[unlikely]] return; }
L_001D3718:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3728u);  if (depth < kMaxDepth) unit_002E(c, 53u, depth + 1u); else { c.pc = 0x001B8898u; return; } if (c.pc != 0x001D3728u) [[unlikely]] return; }
L_001D3728:
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D379C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D379C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D379C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3754u);  if (depth < kMaxDepth) unit_0022(c, 97u, depth + 1u); else { c.pc = 0x00189988u; return; } if (c.pc != 0x001D3754u) [[unlikely]] return; }
L_001D3754:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D3774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D376Cu);  if (depth < kMaxDepth) unit_0023(c, 249u, depth + 1u); else { c.pc = 0x0018F218u; return; } if (c.pc != 0x001D376Cu) [[unlikely]] return; }
L_001D376C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D379C; } }
L_001D3774:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D3794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D378Cu);  if (depth < kMaxDepth) unit_0023(c, 251u, depth + 1u); else { c.pc = 0x0018F250u; return; } if (c.pc != 0x001D378Cu) [[unlikely]] return; }
L_001D378C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D379C; } }
L_001D3794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D379Cu);  if (depth < kMaxDepth) unit_0023(c, 257u, depth + 1u); else { c.pc = 0x0018F380u; return; } if (c.pc != 0x001D379Cu) [[unlikely]] return; }
L_001D379C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D37B8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 12715u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001D389C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[17].w[0] + 10352u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3810u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x001D3810u) [[unlikely]] return; }
L_001D3810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3B0C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D3B0C; } }
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D384Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D384Cu) [[unlikely]] return; }
L_001D384C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3B0C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3860u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001D3860u) [[unlikely]] return; }
L_001D3860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3B0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 10352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D3890; } }
    st32((c.r[17].w[0] + 10352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3890u);  if (depth < kMaxDepth) unit_009E(c, 307u, depth + 1u); else { c.pc = 0x0037B138u; return; } if (c.pc != 0x001D3890u) [[unlikely]] return; }
L_001D3890:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3B08; } }
L_001D389C:
    set32(c.r[2], 0u + 12716u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001D3974; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[17].w[0] + 10352u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D38C4u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x001D38C4u) [[unlikely]] return; }
L_001D38C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D394C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D394C; } }
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3900u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D3900u) [[unlikely]] return; }
L_001D3900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D394C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3914u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001D3914u) [[unlikely]] return; }
L_001D3914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D394C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 10352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D3944; } }
    st32((c.r[17].w[0] + 10352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3944u);  if (depth < kMaxDepth) unit_009E(c, 307u, depth + 1u); else { c.pc = 0x0037B138u; return; } if (c.pc != 0x001D3944u) [[unlikely]] return; }
L_001D3944:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001D394C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001D3960; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3B10; } }
L_001D3960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3968u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D3968u) [[unlikely]] return; }
L_001D3968:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3B10; } }
L_001D3974:
    set32(c.r[6], c.r[17].w[0] - 6132u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D39BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3998u);  if (depth < kMaxDepth) unit_0088(c, 310u, depth + 1u); else { c.pc = 0x00323860u; return; } if (c.pc != 0x001D3998u) [[unlikely]] return; }
L_001D3998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D39BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39B0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D39B0u) [[unlikely]] return; }
L_001D39B0:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 3;
L_001D39BC:
    set32(c.r[16], c.r[17].w[0] - 6224u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39D4u);  if (depth < kMaxDepth) unit_0036(c, 124u, depth + 1u); else { c.pc = 0x001D8F08u; return; } if (c.pc != 0x001D39D4u) [[unlikely]] return; }
L_001D39D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3A80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39F4u);  if (depth < kMaxDepth) unit_0088(c, 310u, depth + 1u); else { c.pc = 0x00323860u; return; } if (c.pc != 0x001D39F4u) [[unlikely]] return; }
L_001D39F4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001D3A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A0Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D3A0Cu) [[unlikely]] return; }
L_001D3A0C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D3A80; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[21], 0u + 96u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A2Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D3A2Cu) [[unlikely]] return; }
L_001D3A2C:
    set32(c.r[22], c.r[16].w[0] + 13248u);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 19424u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001D3A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A54u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D3A54u) [[unlikely]] return; }
L_001D3A54:
    set32(c.r[3], ld32((c.r[22].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 19424u)));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001D3A80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 44ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[20].d[0];
    c.budget -= 4;
L_001D3A80:
    set32(c.r[3], c.r[17].w[0] - 12692u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3B0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 5728u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001D0000u < 16384u) { entry = entries_0034[(t - 0x001D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D3AAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3ABCu);  if (depth < kMaxDepth) unit_0000(c, 441u, depth + 1u); else { c.pc = 0x00103EE0u; return; } if (c.pc != 0x001D3ABCu) [[unlikely]] return; }
L_001D3ABC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3B0C; } }
L_001D3AC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AD4u);  if (depth < kMaxDepth) unit_0019(c, 216u, depth + 1u); else { c.pc = 0x001665D0u; return; } if (c.pc != 0x001D3AD4u) [[unlikely]] return; }
L_001D3AD4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3B0C; } }
L_001D3AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AE8u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001D3AE8u) [[unlikely]] return; }
L_001D3AE8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3B08u) [[unlikely]] return; }
L_001D3B08:
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001D3B0C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001D3B10:
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
L_001D3B40:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] - 26376u), c.r[18].w[0]);
    set32(c.r[19], c.r[19].w[0] - 5800u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B9Cu);  if (depth < kMaxDepth) unit_0049(c, 260u, depth + 1u); else { c.pc = 0x002270E8u; return; } if (c.pc != 0x001D3B9Cu) [[unlikely]] return; }
L_001D3B9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BA8u);  if (depth < kMaxDepth) unit_0039(c, 345u, depth + 1u); else { c.pc = 0x001E6EA8u; return; } if (c.pc != 0x001D3BA8u) [[unlikely]] return; }
L_001D3BA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BBCu);  if (depth < kMaxDepth) unit_0043(c, 142u, depth + 1u); else { c.pc = 0x0020E0B8u; return; } if (c.pc != 0x001D3BBCu) [[unlikely]] return; }
L_001D3BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BC4u);  if (depth < kMaxDepth) unit_0039(c, 326u, depth + 1u); else { c.pc = 0x001E6C28u; return; } if (c.pc != 0x001D3BC4u) [[unlikely]] return; }
L_001D3BC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[6].w[0] - 17968u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BE0u);  if (depth < kMaxDepth) unit_0086(c, 313u, depth + 1u); else { c.pc = 0x0031BDC8u; return; } if (c.pc != 0x001D3BE0u) [[unlikely]] return; }
L_001D3BE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BF4u);  if (depth < kMaxDepth) unit_009E(c, 340u, depth + 1u); else { c.pc = 0x0037B5B8u; return; } if (c.pc != 0x001D3BF4u) [[unlikely]] return; }
L_001D3BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 18704u)));
    set32(c.r[16], c.r[16].w[0] + 28288u);
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[6], 0u + 2u);
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull | 48000ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C3Cu);  if (depth < kMaxDepth) unit_009E(c, 251u, depth + 1u); else { c.pc = 0x0037ABA8u; return; } if (c.pc != 0x001D3C3Cu) [[unlikely]] return; }
L_001D3C3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] - 29252u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C4Cu);  if (depth < kMaxDepth) unit_0040(c, 44u, depth + 1u); else { c.pc = 0x00200880u; return; } if (c.pc != 0x001D3C4Cu) [[unlikely]] return; }
L_001D3C4C:
    st32((c.r[29].w[0] + 24u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 2u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 24000u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C84u);  if (depth < kMaxDepth) unit_009E(c, 251u, depth + 1u); else { c.pc = 0x0037ABA8u; return; } if (c.pc != 0x001D3C84u) [[unlikely]] return; }
L_001D3C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 24u), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[11].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull | 48000ull;
    set32(c.r[9], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] - 29244u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CC4u);  if (depth < kMaxDepth) unit_009E(c, 251u, depth + 1u); else { c.pc = 0x0037ABA8u; return; } if (c.pc != 0x001D3CC4u) [[unlikely]] return; }
L_001D3CC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] - 29240u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CD4u);  if (depth < kMaxDepth) unit_0033(c, 9u, depth + 1u); else { c.pc = 0x001CC2B8u; return; } if (c.pc != 0x001D3CD4u) [[unlikely]] return; }
L_001D3CD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CE8u);  if (depth < kMaxDepth) unit_0043(c, 142u, depth + 1u); else { c.pc = 0x0020E0B8u; return; } if (c.pc != 0x001D3CE8u) [[unlikely]] return; }
L_001D3CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CF0u);  if (depth < kMaxDepth) unit_0039(c, 310u, depth + 1u); else { c.pc = 0x001E6A40u; return; } if (c.pc != 0x001D3CF0u) [[unlikely]] return; }
L_001D3CF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[20].w[0] - 5584u);
    c.r[5].d[0] = 0ull | 43104ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[21].w[0] - 5632u);
    set32(c.r[9], 0u + 3136u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D10u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001D3D10u) [[unlikely]] return; }
L_001D3D10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0] - 29824u), c.r[17].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 132u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D40u);  if (depth < kMaxDepth) unit_000B(c, 342u, depth + 1u); else { c.pc = 0x0012FAB8u; return; } if (c.pc != 0x001D3D40u) [[unlikely]] return; }
L_001D3D40:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[20], c.r[29].w[0] + 32u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[17].w[0] + 196u);
    c.budget -= 4;
L_001D3D50:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3D50u | kUnwind; return; } goto L_001D3D50; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D78u);  if (depth < kMaxDepth) unit_000B(c, 352u, depth + 1u); else { c.pc = 0x0012FC48u; return; } if (c.pc != 0x001D3D78u) [[unlikely]] return; }
L_001D3D78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D90u);  if (depth < kMaxDepth) unit_000B(c, 343u, depth + 1u); else { c.pc = 0x0012FAC8u; return; } if (c.pc != 0x001D3D90u) [[unlikely]] return; }
L_001D3D90:
    set32(c.r[19], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DA8u);  if (depth < kMaxDepth) unit_000B(c, 344u, depth + 1u); else { c.pc = 0x0012FAE0u; return; } if (c.pc != 0x001D3DA8u) [[unlikely]] return; }
L_001D3DA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DBCu);  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012FAF8u; return; } if (c.pc != 0x001D3DBCu) [[unlikely]] return; }
L_001D3DBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DD0u);  if (depth < kMaxDepth) unit_000B(c, 346u, depth + 1u); else { c.pc = 0x0012FB10u; return; } if (c.pc != 0x001D3DD0u) [[unlikely]] return; }
L_001D3DD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DE4u);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012FB28u; return; } if (c.pc != 0x001D3DE4u) [[unlikely]] return; }
L_001D3DE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DF8u);  if (depth < kMaxDepth) unit_000B(c, 348u, depth + 1u); else { c.pc = 0x0012FB40u; return; } if (c.pc != 0x001D3DF8u) [[unlikely]] return; }
L_001D3DF8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E0Cu);  if (depth < kMaxDepth) unit_000B(c, 349u, depth + 1u); else { c.pc = 0x0012FB58u; return; } if (c.pc != 0x001D3E0Cu) [[unlikely]] return; }
L_001D3E0C:
    c.budget -= 1;
L_001D3E10:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E28u);  if (depth < kMaxDepth) unit_000B(c, 351u, depth + 1u); else { c.pc = 0x0012FBE8u; return; } if (c.pc != 0x001D3E28u) [[unlikely]] return; }
L_001D3E28:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3E10u | kUnwind; return; } goto L_001D3E10; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D3E38:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E50u);  if (depth < kMaxDepth) unit_000B(c, 350u, depth + 1u); else { c.pc = 0x0012FB70u; return; } if (c.pc != 0x001D3E50u) [[unlikely]] return; }
L_001D3E50:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3E38u | kUnwind; return; } goto L_001D3E38; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3D78u | kUnwind; return; } goto L_001D3D78; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E78u);  if (depth < kMaxDepth) unit_007D(c, 89u, depth + 1u); else { c.pc = 0x002F4D00u; return; } if (c.pc != 0x001D3E78u) [[unlikely]] return; }
L_001D3E78:
    set32(c.r[16], c.r[16].w[0] - 23040u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], 0u + 60u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E98u);  if (depth < kMaxDepth) unit_0085(c, 277u, depth + 1u); else { c.pc = 0x00316F58u; return; } if (c.pc != 0x001D3E98u) [[unlikely]] return; }
L_001D3E98:
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[6], c.r[6].w[0] - 26440u);
    set32(c.r[7], c.r[7].w[0] - 26408u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[8].d[0] = c.r[8].d[0] | 45113ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3EC0u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x003170B0u; return; } if (c.pc != 0x001D3EC0u) [[unlikely]] return; }
L_001D3EC0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[6], c.r[6].w[0] - 26424u);
    set32(c.r[7], c.r[7].w[0] - 26360u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[8].d[0] = c.r[8].d[0] | 45113ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3EE8u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x003170B0u; return; } if (c.pc != 0x001D3EE8u) [[unlikely]] return; }
L_001D3EE8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[7].w[0] + 7120u);
    c.r[8].d[0] = c.r[8].d[0] | 45113ull;
    set32(c.r[6], c.r[6].w[0] - 26408u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F10u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x003170B0u; return; } if (c.pc != 0x001D3F10u) [[unlikely]] return; }
L_001D3F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F18u);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D1480u; return; } if (c.pc != 0x001D3F18u) [[unlikely]] return; }
L_001D3F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F20u);  if (depth < kMaxDepth) unit_0033(c, 278u, depth + 1u); else { c.pc = 0x001CF8B8u; return; } if (c.pc != 0x001D3F20u) [[unlikely]] return; }
L_001D3F20:
    set32(c.r[5], 0u + 52u);
    set32(c.r[4], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F30u);  if (depth < kMaxDepth) unit_0097(c, 259u, depth + 1u); else { c.pc = 0x0035EBA0u; return; } if (c.pc != 0x001D3F30u) [[unlikely]] return; }
L_001D3F30:
    set32(c.r[2], 0u + 53u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5568u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F50u);  if (depth < kMaxDepth) unit_009D(c, 227u, depth + 1u); else { c.pc = 0x00377688u; return; } if (c.pc != 0x001D3F50u) [[unlikely]] return; }
L_001D3F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F58u);  if (depth < kMaxDepth) unit_009E(c, 309u, depth + 1u); else { c.pc = 0x0037B218u; return; } if (c.pc != 0x001D3F58u) [[unlikely]] return; }
L_001D3F58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[30].w[0] - 5800u);
    set32(c.r[5], c.r[5].w[0] + 21376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F6Cu);  if (depth < kMaxDepth) unit_0043(c, 142u, depth + 1u); else { c.pc = 0x0020E0B8u; return; } if (c.pc != 0x001D3F6Cu) [[unlikely]] return; }
L_001D3F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F74u);  if (depth < kMaxDepth) unit_0029(c, 409u, depth + 1u); else { c.pc = 0x001A7890u; return; } if (c.pc != 0x001D3F74u) [[unlikely]] return; }
L_001D3F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F7Cu);  if (depth < kMaxDepth) unit_0032(c, 395u, depth + 1u); else { c.pc = 0x001CBD40u; return; } if (c.pc != 0x001D3F7Cu) [[unlikely]] return; }
L_001D3F7C:
    set32(c.r[4], ld32((c.r[23].w[0] + 18712u)));
    set32(c.r[5], 0u + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F8Cu);  if (depth < kMaxDepth) unit_004C(c, 9u, depth + 1u); else { c.pc = 0x002304C0u; return; } if (c.pc != 0x001D3F8Cu) [[unlikely]] return; }
L_001D3F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F94u);  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x003788B8u; return; } if (c.pc != 0x001D3F94u) [[unlikely]] return; }
L_001D3F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3FA8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FA8u);  if (depth < kMaxDepth) unit_0071(c, 200u, depth + 1u); else { c.pc = 0x002C5E90u; return; } if (c.pc != 0x001D3FA8u) [[unlikely]] return; }
L_001D3FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FB0u);  if (depth < kMaxDepth) unit_004C(c, 13u, depth + 1u); else { c.pc = 0x00230528u; return; } if (c.pc != 0x001D3FB0u) [[unlikely]] return; }
L_001D3FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[23].w[0] + 18712u)));
    set32(c.r[6], c.r[2].w[0] - 5632u);
    set32(c.r[5], 0u + 1000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], 0u + 3210u);
    set32(c.r[7], c.r[2].w[0] - 5584u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FD4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001D3FD4u) [[unlikely]] return; }
L_001D3FD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] - 29820u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D3FF4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0035(c, 3u, depth); } }
L_001D3FF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0035(c, 1u, depth);
}

}
