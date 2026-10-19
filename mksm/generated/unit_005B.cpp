#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0026CD50;
extern ps2::DecompFn hook_0026D2E8;
extern ps2::DecompFn hook_0026D308;
extern ps2::DecompFn hook_0026D590;
extern ps2::DecompFn hook_0026DD90;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_005B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0,
    0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 216, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 268, 269, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0,
    0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0,
    0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0,
    0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0,
};

void unit_005B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C080;
    case 3u: goto L_0026C100;
    case 4u: goto L_0026C140;
    case 5u: goto L_0026C29C;
    case 6u: goto L_0026C2C8;
    case 7u: goto L_0026C358;
    case 8u: goto L_0026C3A0;
    case 9u: goto L_0026C3D4;
    case 10u: goto L_0026C470;
    case 11u: goto L_0026C49C;
    case 12u: goto L_0026C4E8;
    case 13u: goto L_0026C504;
    case 14u: goto L_0026C568;
    case 15u: goto L_0026C59C;
    case 16u: goto L_0026C5D8;
    case 17u: goto L_0026C5E0;
    case 18u: goto L_0026C5E8;
    case 19u: goto L_0026C5F0;
    case 20u: goto L_0026C628;
    case 21u: goto L_0026C640;
    case 22u: goto L_0026C6A4;
    case 23u: goto L_0026C6BC;
    case 24u: goto L_0026C6CC;
    case 25u: goto L_0026C700;
    case 26u: goto L_0026C710;
    case 27u: goto L_0026C724;
    case 28u: goto L_0026C734;
    case 29u: goto L_0026C744;
    case 30u: goto L_0026C754;
    case 31u: goto L_0026C764;
    case 32u: goto L_0026C774;
    case 33u: goto L_0026C78C;
    case 34u: goto L_0026C7AC;
    case 35u: goto L_0026C7CC;
    case 36u: goto L_0026C800;
    case 37u: goto L_0026C824;
    case 38u: goto L_0026C834;
    case 39u: goto L_0026C848;
    case 40u: goto L_0026C868;
    case 41u: goto L_0026C874;
    case 42u: goto L_0026C888;
    case 43u: goto L_0026C8FC;
    case 44u: goto L_0026C90C;
    case 45u: goto L_0026C91C;
    case 46u: goto L_0026C954;
    case 47u: goto L_0026C96C;
    case 48u: goto L_0026C980;
    case 49u: goto L_0026C994;
    case 50u: goto L_0026C9A0;
    case 51u: goto L_0026C9AC;
    case 52u: goto L_0026C9BC;
    case 53u: goto L_0026C9D0;
    case 54u: goto L_0026C9E4;
    case 55u: goto L_0026CA00;
    case 56u: goto L_0026CA10;
    case 57u: goto L_0026CA34;
    case 58u: goto L_0026CA68;
    case 59u: goto L_0026CA78;
    case 60u: goto L_0026CA84;
    case 61u: goto L_0026CA98;
    case 62u: goto L_0026CAC0;
    case 63u: goto L_0026CAD8;
    case 64u: goto L_0026CB00;
    case 65u: goto L_0026CB20;
    case 66u: goto L_0026CB40;
    case 67u: goto L_0026CB60;
    case 68u: goto L_0026CB80;
    case 69u: goto L_0026CBA8;
    case 70u: goto L_0026CBB8;
    case 71u: goto L_0026CBDC;
    case 72u: goto L_0026CBEC;
    case 73u: goto L_0026CC00;
    case 74u: goto L_0026CC20;
    case 75u: goto L_0026CC40;
    case 76u: goto L_0026CC50;
    case 77u: goto L_0026CC68;
    case 78u: goto L_0026CC8C;
    case 79u: goto L_0026CC98;
    case 80u: goto L_0026CCB0;
    case 81u: goto L_0026CCEC;
    case 82u: goto L_0026CCFC;
    case 83u: goto L_0026CD0C;
    case 84u: goto L_0026CD20;
    case 85u: goto L_0026CD2C;
    case 86u: goto L_0026CD38;
    case 87u: goto L_0026CD50;
    case 88u: goto L_0026CDE0;
    case 89u: goto L_0026CDF8;
    case 90u: goto L_0026CE4C;
    case 91u: goto L_0026CE68;
    case 92u: goto L_0026CE74;
    case 93u: goto L_0026CE94;
    case 94u: goto L_0026CEC0;
    case 95u: goto L_0026CEE0;
    case 96u: goto L_0026CF00;
    case 97u: goto L_0026CF10;
    case 98u: goto L_0026CF54;
    case 99u: goto L_0026CF70;
    case 100u: goto L_0026CF8C;
    case 101u: goto L_0026CFA8;
    case 102u: goto L_0026CFD8;
    case 103u: goto L_0026CFE8;
    case 104u: goto L_0026D030;
    case 105u: goto L_0026D048;
    case 106u: goto L_0026D098;
    case 107u: goto L_0026D0B4;
    case 108u: goto L_0026D0D0;
    case 109u: goto L_0026D0E8;
    case 110u: goto L_0026D108;
    case 111u: goto L_0026D160;
    case 112u: goto L_0026D198;
    case 113u: goto L_0026D1A8;
    case 114u: goto L_0026D1C4;
    case 115u: goto L_0026D1D8;
    case 116u: goto L_0026D230;
    case 117u: goto L_0026D24C;
    case 118u: goto L_0026D278;
    case 119u: goto L_0026D298;
    case 120u: goto L_0026D2CC;
    case 121u: goto L_0026D2E8;
    case 122u: goto L_0026D308;
    case 123u: goto L_0026D328;
    case 124u: goto L_0026D3C4;
    case 125u: goto L_0026D3E0;
    case 126u: goto L_0026D494;
    case 127u: goto L_0026D4C0;
    case 128u: goto L_0026D560;
    case 129u: goto L_0026D590;
    case 130u: goto L_0026D5B4;
    case 131u: goto L_0026D5C0;
    case 132u: goto L_0026D5C8;
    case 133u: goto L_0026D5EC;
    case 134u: goto L_0026D610;
    case 135u: goto L_0026D628;
    case 136u: goto L_0026D64C;
    case 137u: goto L_0026D670;
    case 138u: goto L_0026D69C;
    case 139u: goto L_0026D6BC;
    case 140u: goto L_0026D6DC;
    case 141u: goto L_0026D6F0;
    case 142u: goto L_0026D700;
    case 143u: goto L_0026D71C;
    case 144u: goto L_0026D770;
    case 145u: goto L_0026D788;
    case 146u: goto L_0026D7B4;
    case 147u: goto L_0026D7C0;
    case 148u: goto L_0026D7F0;
    case 149u: goto L_0026D83C;
    case 150u: goto L_0026D858;
    case 151u: goto L_0026D890;
    case 152u: goto L_0026D8B4;
    case 153u: goto L_0026D8C8;
    case 154u: goto L_0026D938;
    case 155u: goto L_0026D948;
    case 156u: goto L_0026D978;
    case 157u: goto L_0026D998;
    case 158u: goto L_0026D9F8;
    case 159u: goto L_0026DA14;
    case 160u: goto L_0026DA30;
    case 161u: goto L_0026DA58;
    case 162u: goto L_0026DA98;
    case 163u: goto L_0026DAB4;
    case 164u: goto L_0026DAE8;
    case 165u: goto L_0026DB10;
    case 166u: goto L_0026DB48;
    case 167u: goto L_0026DB58;
    case 168u: goto L_0026DB7C;
    case 169u: goto L_0026DBA0;
    case 170u: goto L_0026DC04;
    case 171u: goto L_0026DC14;
    case 172u: goto L_0026DC2C;
    case 173u: goto L_0026DC40;
    case 174u: goto L_0026DC98;
    case 175u: goto L_0026DCB4;
    case 176u: goto L_0026DCE0;
    case 177u: goto L_0026DD28;
    case 178u: goto L_0026DD80;
    case 179u: goto L_0026DD90;
    case 180u: goto L_0026DDD0;
    case 181u: goto L_0026DE10;
    case 182u: goto L_0026DE50;
    case 183u: goto L_0026DE7C;
    case 184u: goto L_0026DE88;
    case 185u: goto L_0026DEB4;
    case 186u: goto L_0026DEC0;
    case 187u: goto L_0026DEEC;
    case 188u: goto L_0026DEF8;
    case 189u: goto L_0026DF20;
    case 190u: goto L_0026DF48;
    case 191u: goto L_0026DF80;
    case 192u: goto L_0026DFA8;
    case 193u: goto L_0026DFB8;
    case 194u: goto L_0026E03C;
    case 195u: goto L_0026E050;
    case 196u: goto L_0026E068;
    case 197u: goto L_0026E0C0;
    case 198u: goto L_0026E170;
    case 199u: goto L_0026E180;
    case 200u: goto L_0026E190;
    case 201u: goto L_0026E1A8;
    case 202u: goto L_0026E1B8;
    case 203u: goto L_0026E1F0;
    case 204u: goto L_0026E21C;
    case 205u: goto L_0026E248;
    case 206u: goto L_0026E25C;
    case 207u: goto L_0026E278;
    case 208u: goto L_0026E2A4;
    case 209u: goto L_0026E2B8;
    case 210u: goto L_0026E2CC;
    case 211u: goto L_0026E2E8;
    case 212u: goto L_0026E2F0;
    case 213u: goto L_0026E350;
    case 214u: goto L_0026E398;
    case 215u: goto L_0026E3A8;
    case 216u: goto L_0026E3AC;
    case 217u: goto L_0026E3B4;
    case 218u: goto L_0026E3BC;
    case 219u: goto L_0026E3D0;
    case 220u: goto L_0026E3E8;
    case 221u: goto L_0026E408;
    case 222u: goto L_0026E438;
    case 223u: goto L_0026E488;
    case 224u: goto L_0026E4A4;
    case 225u: goto L_0026E4CC;
    case 226u: goto L_0026E524;
    case 227u: goto L_0026E534;
    case 228u: goto L_0026E570;
    case 229u: goto L_0026E580;
    case 230u: goto L_0026E5D0;
    case 231u: goto L_0026E5F4;
    case 232u: goto L_0026E600;
    case 233u: goto L_0026E608;
    case 234u: goto L_0026E640;
    case 235u: goto L_0026E680;
    case 236u: goto L_0026E690;
    case 237u: goto L_0026E6A8;
    case 238u: goto L_0026E730;
    case 239u: goto L_0026E740;
    case 240u: goto L_0026E830;
    case 241u: goto L_0026E888;
    case 242u: goto L_0026E898;
    case 243u: goto L_0026E8D0;
    case 244u: goto L_0026E8EC;
    case 245u: goto L_0026E8FC;
    case 246u: goto L_0026E998;
    case 247u: goto L_0026E9A8;
    case 248u: goto L_0026E9B8;
    case 249u: goto L_0026E9C8;
    case 250u: goto L_0026E9E0;
    case 251u: goto L_0026E9F0;
    case 252u: goto L_0026EA00;
    case 253u: goto L_0026EA10;
    case 254u: goto L_0026EA60;
    case 255u: goto L_0026EAC0;
    case 256u: goto L_0026EAE0;
    case 257u: goto L_0026EB14;
    case 258u: goto L_0026EB44;
    case 259u: goto L_0026EB58;
    case 260u: goto L_0026EB70;
    case 261u: goto L_0026EB80;
    case 262u: goto L_0026EBAC;
    case 263u: goto L_0026EBC0;
    case 264u: goto L_0026EC64;
    case 265u: goto L_0026EC80;
    case 266u: goto L_0026ECF0;
    case 267u: goto L_0026ED08;
    case 268u: goto L_0026ED18;
    case 269u: goto L_0026ED1C;
    case 270u: goto L_0026ED24;
    case 271u: goto L_0026ED2C;
    case 272u: goto L_0026ED38;
    case 273u: goto L_0026ED48;
    case 274u: goto L_0026ED50;
    case 275u: goto L_0026ED58;
    case 276u: goto L_0026ED70;
    case 277u: goto L_0026ED84;
    case 278u: goto L_0026ED98;
    case 279u: goto L_0026EDC8;
    case 280u: goto L_0026EDD8;
    case 281u: goto L_0026EDF0;
    case 282u: goto L_0026EE04;
    case 283u: goto L_0026EE18;
    case 284u: goto L_0026EE2C;
    case 285u: goto L_0026EE40;
    case 286u: goto L_0026EE68;
    case 287u: goto L_0026EE84;
    case 288u: goto L_0026EF78;
    case 289u: goto L_0026EF8C;
    case 290u: goto L_0026EFA0;
    case 291u: goto L_0026EFA8;
    case 292u: goto L_0026EFB0;
    case 293u: goto L_0026EFB8;
    case 294u: goto L_0026EFC0;
    case 295u: goto L_0026EFD8;
    case 296u: goto L_0026EFE8;
    case 297u: goto L_0026EFF8;
    case 298u: goto L_0026F030;
    case 299u: goto L_0026F04C;
    case 300u: goto L_0026F068;
    case 301u: goto L_0026F078;
    case 302u: goto L_0026F088;
    case 303u: goto L_0026F098;
    case 304u: goto L_0026F0C8;
    case 305u: goto L_0026F0D8;
    case 306u: goto L_0026F0EC;
    case 307u: goto L_0026F108;
    case 308u: goto L_0026F114;
    case 309u: goto L_0026F124;
    case 310u: goto L_0026F134;
    case 311u: goto L_0026F13C;
    case 312u: goto L_0026F170;
    case 313u: goto L_0026F198;
    case 314u: goto L_0026F1A0;
    case 315u: goto L_0026F1CC;
    case 316u: goto L_0026F214;
    case 317u: goto L_0026F224;
    case 318u: goto L_0026F240;
    case 319u: goto L_0026F258;
    case 320u: goto L_0026F268;
    case 321u: goto L_0026F278;
    case 322u: goto L_0026F288;
    case 323u: goto L_0026F298;
    case 324u: goto L_0026F2A4;
    case 325u: goto L_0026F2AC;
    case 326u: goto L_0026F2B8;
    case 327u: goto L_0026F2C8;
    case 328u: goto L_0026F300;
    case 329u: goto L_0026F320;
    case 330u: goto L_0026F338;
    case 331u: goto L_0026F340;
    case 332u: goto L_0026F358;
    case 333u: goto L_0026F368;
    case 334u: goto L_0026F388;
    case 335u: goto L_0026F3C0;
    case 336u: goto L_0026F3DC;
    case 337u: goto L_0026F3F0;
    case 338u: goto L_0026F40C;
    case 339u: goto L_0026F420;
    case 340u: goto L_0026F438;
    case 341u: goto L_0026F448;
    case 342u: goto L_0026F4B0;
    case 343u: goto L_0026F508;
    case 344u: goto L_0026F518;
    case 345u: goto L_0026F530;
    case 346u: goto L_0026F55C;
    case 347u: goto L_0026F570;
    case 348u: goto L_0026F59C;
    case 349u: goto L_0026F5AC;
    case 350u: goto L_0026F5D0;
    case 351u: goto L_0026F5E4;
    case 352u: goto L_0026F5F8;
    case 353u: goto L_0026F62C;
    case 354u: goto L_0026F640;
    case 355u: goto L_0026F69C;
    case 356u: goto L_0026F6B0;
    case 357u: goto L_0026F6E0;
    case 358u: goto L_0026F6FC;
    case 359u: goto L_0026F734;
    case 360u: goto L_0026F780;
    case 361u: goto L_0026F790;
    case 362u: goto L_0026F7A8;
    case 363u: goto L_0026F7C0;
    case 364u: goto L_0026F820;
    case 365u: goto L_0026F850;
    case 366u: goto L_0026F88C;
    case 367u: goto L_0026F8B8;
    case 368u: goto L_0026F8D4;
    case 369u: goto L_0026F918;
    case 370u: goto L_0026F978;
    case 371u: goto L_0026F9BC;
    case 372u: goto L_0026F9E0;
    case 373u: goto L_0026F9F8;
    case 374u: goto L_0026FA38;
    case 375u: goto L_0026FA60;
    case 376u: goto L_0026FA74;
    case 377u: goto L_0026FA9C;
    case 378u: goto L_0026FAB8;
    case 379u: goto L_0026FADC;
    case 380u: goto L_0026FAE4;
    case 381u: goto L_0026FB08;
    case 382u: goto L_0026FB1C;
    case 383u: goto L_0026FB38;
    case 384u: goto L_0026FB4C;
    case 385u: goto L_0026FB60;
    case 386u: goto L_0026FB78;
    case 387u: goto L_0026FB8C;
    case 388u: goto L_0026FB9C;
    case 389u: goto L_0026FBA8;
    case 390u: goto L_0026FBB8;
    case 391u: goto L_0026FBF0;
    case 392u: goto L_0026FC20;
    case 393u: goto L_0026FC2C;
    case 394u: goto L_0026FC3C;
    case 395u: goto L_0026FC58;
    case 396u: goto L_0026FC60;
    case 397u: goto L_0026FC6C;
    case 398u: goto L_0026FCB8;
    case 399u: goto L_0026FCC4;
    case 400u: goto L_0026FD08;
    case 401u: goto L_0026FD80;
    case 402u: goto L_0026FE28;
    case 403u: goto L_0026FE38;
    case 404u: goto L_0026FE60;
    case 405u: goto L_0026FE74;
    case 406u: goto L_0026FE84;
    case 407u: goto L_0026FEAC;
    case 408u: goto L_0026FECC;
    case 409u: goto L_0026FEDC;
    case 410u: goto L_0026FEE8;
    case 411u: goto L_0026FEF8;
    case 412u: goto L_0026FF0C;
    case 413u: goto L_0026FF20;
    case 414u: goto L_0026FF3C;
    case 415u: goto L_0026FF84;
    case 416u: goto L_0026FFAC;
    case 417u: goto L_0026FFC0;
    case 418u: goto L_0026FFE4;
    case 419u: goto L_0026FFF0;
    case 420u: goto L_0026FFF8;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    st32((c.r[17].w[0] - 7424u), c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[3].d[0] = c.r[6].d[0] >> 58;
    set32(c.r[5], c.r[4].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0026C05C; } }
    c.r[2].d[0] = c.r[6].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0026C048u);  goto L_0026C04C; }
L_0026C04C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0026C05C:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    st64((c.r[8].w[0]), c.r[2].d[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] - 7424u)));
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C098; } }
L_0026C080:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C080u | kUnwind; return; } goto L_0026C080; } }
L_0026C098:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[17].w[0] - 7424u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[6], 0u - 16u);
    set32(c.r[2], ld32((c.r[17].w[0] - 7424u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] - 7424u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[17].w[0] - 7424u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C11C; } }
    c.budget -= 1;
L_0026C100:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C100u | kUnwind; return; } goto L_0026C100; } }
L_0026C11C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C140:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.r[6].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[4], c.r[2].w[0] + 63u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 126u);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] - 19u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st16((c.r[19].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C1D0; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C1D0; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C1D0; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026C1FC; } }
L_0026C1D0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C20C; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C204; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C208; } }
L_0026C1FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026C20C; } }
L_0026C204:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026C208:
    st16((c.r[19].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026C20C:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0026C248; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C264; } }
L_0026C248:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0026C264:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[1] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C29Cu);  if (depth < kMaxDepth) unit_0041(c, 356u, depth + 1u); else { c.pc = 0x00207450u; return; } if (c.pc != 0x0026C29Cu) [[unlikely]] return; }
L_0026C29C:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[1]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = ld16((c.r[19].w[0] + 16u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[17].w[0] + 22512u);
    set32(c.r[8], c.r[16].w[0] + 23000u);
    set32(c.r[5], c.r[21].w[0] << 8);
    set32(c.r[9], 0u + 3261u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2C8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026C2C8u) [[unlikely]] return; }
L_0026C2C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[23].d[0] == c.r[3].d[0];  if (t) { goto L_0026C4F8; } }
    set32(c.r[2], c.r[18].w[0] >> 31);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[2].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[23], c.r[23].w[0] >> 8);
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[2], c.r[18].w[0] << 6);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0026C32C; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C340; } }
L_0026C32C:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 5;
L_0026C340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[12] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C358u);  if (depth < kMaxDepth) unit_0041(c, 356u, depth + 1u); else { c.pc = 0x00207450u; return; } if (c.pc != 0x0026C358u) [[unlikely]] return; }
L_0026C358:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[22], c.r[30].w[0] + 23000u);
    set32(c.r[18], c.r[2].w[0] + 22512u);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] << 8);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[9], 0u + 3302u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3A0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026C3A0u) [[unlikely]] return; }
L_0026C3A0:
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0026C4F8; } }
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] << 7);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[9], 0u + 3326u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3D4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026C3D4u) [[unlikely]] return; }
L_0026C3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0026C4F8; } }
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[4], c.r[21].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C408; } }
L_0026C400:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 2;
L_0026C408:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 352u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C530; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], 0u + 8u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0026C4C4; } }
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C470u);  if (depth < kMaxDepth) unit_0041(c, 356u, depth + 1u); else { c.pc = 0x00207450u; return; } if (c.pc != 0x0026C470u) [[unlikely]] return; }
L_0026C470:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[1]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[30].w[0] + 23000u);
    set32(c.r[7], c.r[2].w[0] + 22512u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 3371u);
    set32(c.r[5], c.r[21].w[0] << 8);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C49Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026C49Cu) [[unlikely]] return; }
L_0026C49C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026C4F8; } }
    set32(c.r[3], c.r[2].w[0] >> 8);
    st16((c.r[19].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C52C; } }
L_0026C4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[7], c.r[2].w[0] + 22512u);
    set32(c.r[8], c.r[30].w[0] + 23000u);
    set32(c.r[5], 0u + 1024u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 3403u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4E8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026C4E8u) [[unlikely]] return; }
L_0026C4E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C51C; } }
L_0026C4F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C504u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0026C504u) [[unlikely]] return; }
L_0026C504:
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C534; } }
L_0026C51C:
    set32(c.r[3], c.r[2].w[0] >> 8);
    st16((c.r[19].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_0026C52C:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0026C530:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0026C534:
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
L_0026C568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026C5C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C5C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C59Cu);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x0026C59Cu) [[unlikely]] return; }
L_0026C59C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[6].w[0] + 32136u);
    set32(c.r[2], c.r[2].w[0] + 23096u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[16].w[0] + 32128u), c.f[0]);
    st32((c.r[3].w[0] - 31740u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 32136u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 31744u), c.r[4].w[0]);
    c.budget -= 10;
L_0026C5C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C5D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C5E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C5F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[6], c.r[2].w[0] << 24);
    set32(c.r[5], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C628:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C640:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 160u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6A4u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x0026C6A4u) [[unlikely]] return; }
L_0026C6A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 45;
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6BCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C6BCu) [[unlikely]] return; }
L_0026C6BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6CCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C6CCu) [[unlikely]] return; }
L_0026C6CC:
    c.r[5].d[0] = c.r[17].d[0] << 16;
    c.r[2].d[0] = c.r[18].d[0] << 24;
    c.r[5].d[0] = c.r[30].d[0] | c.r[5].d[0];
    c.r[20].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] | c.r[20].d[0];
    c.r[18].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] | c.r[17].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[18].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C700u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C700u) [[unlikely]] return; }
L_0026C700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C710u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C710u) [[unlikely]] return; }
L_0026C710:
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] | c.r[21].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C724u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C724u) [[unlikely]] return; }
L_0026C724:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C734u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C734u) [[unlikely]] return; }
L_0026C734:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C744u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C744u) [[unlikely]] return; }
L_0026C744:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C754u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C754u) [[unlikely]] return; }
L_0026C754:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C764u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C764u) [[unlikely]] return; }
L_0026C764:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C774u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C774u) [[unlikely]] return; }
L_0026C774:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C78Cu);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x0026C78Cu) [[unlikely]] return; }
L_0026C78C:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[19].d[0] = c.r[19].d[0] << 15;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[23].d[0] | c.r[19].d[0];
    c.r[5].d[0] = c.r[19].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7ACu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0026C7ACu) [[unlikely]] return; }
L_0026C7AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7CCu);  if (depth < kMaxDepth) unit_00A1(c, 76u, depth + 1u); else { c.pc = 0x00384B20u; return; } if (c.pc != 0x0026C7CCu) [[unlikely]] return; }
L_0026C7CC:
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
L_0026C800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[3].w[0] + 5520u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C824u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0026C824u) [[unlikely]] return; }
L_0026C824:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C834u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026C834u) [[unlikely]] return; }
L_0026C834:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 31776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C868u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x0026C868u) [[unlikely]] return; }
L_0026C868:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C874u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x0026C874u) [[unlikely]] return; }
L_0026C874:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C888:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] + 22464u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 22464u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[16], c.r[16].w[0] - 31776u);
    c.r[12].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[4].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8FCu);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x0026C8FCu) [[unlikely]] return; }
L_0026C8FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C90Cu);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x0026C90Cu) [[unlikely]] return; }
L_0026C90C:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C91Cu);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x0026C91Cu) [[unlikely]] return; }
L_0026C91C:
    c.r[6].d[0] = c.r[17].d[0] << 16;
    c.r[2].d[0] = c.r[18].d[0] << 24;
    c.r[6].d[0] = c.r[23].d[0] | c.r[6].d[0];
    c.r[19].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[19].d[0];
    c.r[18].d[0] = c.r[18].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[17].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[18].d[0];
    set32(c.r[5], 0u + 80u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C954u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026C954u) [[unlikely]] return; }
L_0026C954:
    c.r[20].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] | c.r[20].d[0];
    set32(c.r[5], 0u + 82u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C96Cu);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026C96Cu) [[unlikely]] return; }
L_0026C96C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 81u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C980u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026C980u) [[unlikely]] return; }
L_0026C980:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C994u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026C994u) [[unlikely]] return; }
L_0026C994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9A0u);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x0026C9A0u) [[unlikely]] return; }
L_0026C9A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9ACu);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x0026C9ACu) [[unlikely]] return; }
L_0026C9AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9BCu);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x0026C9BCu) [[unlikely]] return; }
L_0026C9BC:
    set32(c.r[6], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9D0u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x0026C9D0u) [[unlikely]] return; }
L_0026C9D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9E4u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0026C9E4u) [[unlikely]] return; }
L_0026C9E4:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA00u);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x0026CA00u) [[unlikely]] return; }
L_0026CA00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA10u);  if (depth < kMaxDepth) unit_00A1(c, 115u, depth + 1u); else { c.pc = 0x00385338u; return; } if (c.pc != 0x0026CA10u) [[unlikely]] return; }
L_0026CA10:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA34u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x0026CA34u) [[unlikely]] return; }
L_0026CA34:
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
L_0026CA68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA78u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0026CA78u) [[unlikely]] return; }
L_0026CA78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA84u);  if (depth < kMaxDepth) unit_005B(c, 164u, depth + 1u); else { c.pc = 0x0026DAE8u; return; } if (c.pc != 0x0026CA84u) [[unlikely]] return; }
L_0026CA84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CA98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1072u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAC0u);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0026C140u; return; } if (c.pc != 0x0026CAC0u) [[unlikely]] return; }
L_0026CAC0:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CAD8:
    set32(c.r[3], 0u + 1072u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CB00:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CB20:
    set32(c.r[3], 0u + 1072u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CB40:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 18u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CB60:
    set32(c.r[3], 0u + 1072u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CB80:
    set32(c.r[2], 0u + 1072u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[6].w[0] - 364u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CBA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CBB8u);  if (depth < kMaxDepth) unit_005A(c, 89u, depth + 1u); else { c.pc = 0x00268CF8u; return; } if (c.pc != 0x0026CBB8u) [[unlikely]] return; }
L_0026CBB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 5520u)));
    set32(c.r[5], c.r[5].w[0] + 32160u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CBDCu);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0026CBDCu) [[unlikely]] return; }
L_0026CBDC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CBECu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026CBECu) [[unlikely]] return; }
L_0026CBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC20u);  if (depth < kMaxDepth) unit_005B(c, 106u, depth + 1u); else { c.pc = 0x0026D098u; return; } if (c.pc != 0x0026CC20u) [[unlikely]] return; }
L_0026CC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5520u)));
    set32(c.r[16], c.r[16].w[0] + 592u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[16].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC40u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0026CC40u) [[unlikely]] return; }
L_0026CC40:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC50u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026CC50u) [[unlikely]] return; }
L_0026CC50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CC68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 31776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC8Cu);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x0026CC8Cu) [[unlikely]] return; }
L_0026CC8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC98u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x0026CC98u) [[unlikely]] return; }
L_0026CC98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[2].w[0] + 22464u);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 22464u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    set32(c.r[16], c.r[16].w[0] - 31776u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCECu);  if (depth < kMaxDepth) unit_00A1(c, 91u, depth + 1u); else { c.pc = 0x00384DE8u; return; } if (c.pc != 0x0026CCECu) [[unlikely]] return; }
L_0026CCEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCFCu);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x003850D8u; return; } if (c.pc != 0x0026CCFCu) [[unlikely]] return; }
L_0026CCFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD0Cu);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x00385160u; return; } if (c.pc != 0x0026CD0Cu) [[unlikely]] return; }
L_0026CD0C:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD20u);  if (depth < kMaxDepth) unit_00A1(c, 116u, depth + 1u); else { c.pc = 0x00385360u; return; } if (c.pc != 0x0026CD20u) [[unlikely]] return; }
L_0026CD20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD2Cu);  if (depth < kMaxDepth) unit_00A1(c, 107u, depth + 1u); else { c.pc = 0x00385178u; return; } if (c.pc != 0x0026CD2Cu) [[unlikely]] return; }
L_0026CD2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD38u);  if (depth < kMaxDepth) unit_00A1(c, 105u, depth + 1u); else { c.pc = 0x00385130u; return; } if (c.pc != 0x0026CD38u) [[unlikely]] return; }
L_0026CD38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CD50:
    if (::decomp::hook_0026CD50.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0026CD50, depth)) return; }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[6].w[0] + 8u));
    c.r[7].d[0] = ld16((c.r[6].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] + 63u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 126u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] - 19u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st16((c.r[6].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026CDB0; } }
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0026CDB0; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0026CDB0; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026CDE0; } }
L_0026CDB0:
    c.r[2].d[0] = ld16((c.r[6].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CDF0; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CDE8; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[6].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CDE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CDF0; } }
L_0026CDE8:
    set32(c.r[2], 0u + 1u);
    st16((c.r[6].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026CDF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CDF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 18704u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 9216u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[7], c.r[7].w[0] + 22512u);
    set32(c.r[8], c.r[8].w[0] + 22568u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[9], 0u + 1128u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 15360ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE4Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026CE4Cu) [[unlikely]] return; }
L_0026CE4C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 15360ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE68u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026CE68u) [[unlikely]] return; }
L_0026CE68:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE74u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0026CE74u) [[unlikely]] return; }
L_0026CE74:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[5].w[0] + 5520u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE94u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0026CE94u) [[unlikely]] return; }
L_0026CE94:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[4].w[0] + 6388u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CEE0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0026CEE0u) [[unlikely]] return; }
L_0026CEE0:
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CF00:
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 22512u);
    set32(c.r[7], c.r[7].w[0] + 22584u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], 0u + 1170u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF54u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0026CF54u) [[unlikely]] return; }
L_0026CF54:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF8Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0026CF8Cu) [[unlikely]] return; }
L_0026CF8C:
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CFA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0026D010; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], 0u + 1072u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
L_0026CFD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFE8u);  if (depth < kMaxDepth) unit_005A(c, 284u, depth + 1u); else { c.pc = 0x0026B9F0u; return; } if (c.pc != 0x0026CFE8u) [[unlikely]] return; }
L_0026CFE8:
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    st16((c.r[4].w[0] + 580u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CFD8u | kUnwind; return; } goto L_0026CFD8; } }
L_0026D010:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
L_0026D048:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D060; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D048u | kUnwind; return; } goto L_0026D048; } }
L_0026D060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 41008ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 261u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 24576u), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D098:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0B4u);  if (depth < kMaxDepth) unit_005A(c, 180u, depth + 1u); else { c.pc = 0x00269BD8u; return; } if (c.pc != 0x0026D0B4u) [[unlikely]] return; }
L_0026D0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    set32(c.r[5], c.r[16].w[0] + 592u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0D0u);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0026D0D0u) [[unlikely]] return; }
L_0026D0D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[4].w[0] + 592u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 8;
L_0026D108:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D120; } }
    c.r[2].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D108u | kUnwind; return; } goto L_0026D108; } }
L_0026D120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 41008ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], 0u + 261u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[16].w[0] + 592u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D198u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026D198u) [[unlikely]] return; }
L_0026D198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1A8u);  if (depth < kMaxDepth) unit_005A(c, 180u, depth + 1u); else { c.pc = 0x00269BD8u; return; } if (c.pc != 0x0026D1A8u) [[unlikely]] return; }
L_0026D1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 364u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1C4u);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0026D1C4u) [[unlikely]] return; }
L_0026D1C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
L_0026D1D8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D1F0; } }
    c.r[2].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D1D8u | kUnwind; return; } goto L_0026D1D8; } }
L_0026D1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 41008ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], 0u + 261u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D230u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026D230u) [[unlikely]] return; }
L_0026D230:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D24Cu);  if (depth < kMaxDepth) unit_005A(c, 243u, depth + 1u); else { c.pc = 0x0026B150u; return; } if (c.pc != 0x0026D24Cu) [[unlikely]] return; }
L_0026D24C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D278:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D298:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1072u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 32u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[16].w[0] + 18u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D2CCu);  if (depth < kMaxDepth) unit_005A(c, 243u, depth + 1u); else { c.pc = 0x0026B150u; return; } if (c.pc != 0x0026D2CCu) [[unlikely]] return; }
L_0026D2CC:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D2E8:
    if (::decomp::hook_0026D2E8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0026D2E8, depth)) return; }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 560u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D308:
    if (::decomp::hook_0026D308.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0026D308, depth)) return; }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 568u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D328:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 16u));
    set32(c.r[4], ld32((c.r[5].w[0] + 352u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0026D37C; } }
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D398; } }
L_0026D37C:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0026D398:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 10u));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3C4u);  if (depth < kMaxDepth) unit_0041(c, 356u, depth + 1u); else { c.pc = 0x00207450u; return; } if (c.pc != 0x0026D3C4u) [[unlikely]] return; }
L_0026D3C4:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D3E0:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 352u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D4A8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 14u));
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], 0u + 8u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0026D458; } }
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D488; } }
L_0026D458:
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 12;
L_0026D488:
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D494u);  if (depth < kMaxDepth) unit_0041(c, 356u, depth + 1u); else { c.pc = 0x00207450u; return; } if (c.pc != 0x0026D494u) [[unlikely]] return; }
L_0026D494:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D4AC; } }
L_0026D4A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1072u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0026D518; } }
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D534; } }
L_0026D518:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0026D534:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10u));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D560u);  if (depth < kMaxDepth) unit_0041(c, 356u, depth + 1u); else { c.pc = 0x00207450u; return; } if (c.pc != 0x0026D560u) [[unlikely]] return; }
L_0026D560:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 22u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D590:
    if (::decomp::hook_0026D590.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0026D590, depth)) return; }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D5B4; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D5B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D5C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026D5C8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D5EC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0026D5EC; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D5EC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1072u);
    c.r[2].d[0] = c.r[4].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D5C8u | kUnwind; return; } goto L_0026D5C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D610:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1072u);
    c.budget -= 6;
L_0026D628:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D64C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 576u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0026D64C; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D64C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1072u);
    set32(c.r[3], c.r[3].w[0] + 1072u);
    c.r[2].d[0] = c.r[6].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D628u | kUnwind; return; } goto L_0026D628; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] - 31740u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D69Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D69Cu) [[unlikely]] return; }
L_0026D69C:
    set32(c.r[6], ld32((c.r[16].w[0] - 31740u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D6BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D6BCu) [[unlikely]] return; }
L_0026D6BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 31744u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D6DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D6DCu) [[unlikely]] return; }
L_0026D6DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D6F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D700:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(320ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D71C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D71C:
    set32(c.r[3], 0u + 1072u);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 22u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026D750; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0026D750:
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026D764; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0026D764:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D770:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(320ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D788; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D788:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 20u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D7B4; } }
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D7B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D7C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[16].w[0] + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
L_0026D7F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[19], c.r[19].w[0] + 1072u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D858; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D858; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 580u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0026D858; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D83Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D83Cu) [[unlikely]] return; }
L_0026D83C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D858u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D858u) [[unlikely]] return; }
L_0026D858:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D7F0u | kUnwind; return; } goto L_0026D7F0; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8B4u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x0026D8B4u) [[unlikely]] return; }
L_0026D8B4:
    set32(c.r[5], ld32((c.r[2].w[0] + 4124u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0026D8C8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D908; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 580u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0026D908; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D908; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[6].d[0];  if (t) { goto L_0026D908; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D920; } }
L_0026D908:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1072u);
    c.r[2].d[0] = c.r[4].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8C8u | kUnwind; return; } goto L_0026D8C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D920:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D938:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0026D948:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D978; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 580u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0026D978; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0026D978; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D978:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1072u);
    c.r[2].d[0] = c.r[4].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D948u | kUnwind; return; } goto L_0026D948; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D998:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1072u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026DA14; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DA14; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[17].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D9F8u) [[unlikely]] return; }
L_0026D9F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DA14u) [[unlikely]] return; }
L_0026DA14:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_0026DA58:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[19], c.r[19].w[0] + 1072u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DAB4; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DAB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DA98u) [[unlikely]] return; }
L_0026DA98:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DAB4u) [[unlikely]] return; }
L_0026DAB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DA58u | kUnwind; return; } goto L_0026DA58; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DAE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], c.r[2].w[0] >> 2);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0026DB3C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.budget -= 4;
L_0026DB10:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DB10u | kUnwind; return; } goto L_0026DB10; } }
L_0026DB3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DB48:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0026DB58:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DB7C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 576u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0026DB7C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DB7C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1072u);
    c.r[2].d[0] = c.r[4].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DB58u | kUnwind; return; } goto L_0026DB58; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DBA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(320ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DCBC; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DCBC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[19].d[0] = ld16((c.r[17].w[0] + 32u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[20], ld32((c.r[16].w[0] - 364u)));
    set32(c.r[18], c.r[17].w[0] + 592u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC04u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026DC04u) [[unlikely]] return; }
L_0026DC04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC14u);  if (depth < kMaxDepth) unit_005A(c, 180u, depth + 1u); else { c.pc = 0x00269BD8u; return; } if (c.pc != 0x0026DC14u) [[unlikely]] return; }
L_0026DC14:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC2Cu);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0026DC2Cu) [[unlikely]] return; }
L_0026DC2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
L_0026DC40:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DC58; } }
    c.r[2].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DC40u | kUnwind; return; } goto L_0026DC40; } }
L_0026DC58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 41008ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], 0u + 261u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC98u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x0026DC98u) [[unlikely]] return; }
L_0026DC98:
    c.r[7].d[0] = ld16((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCB4u);  if (depth < kMaxDepth) unit_005A(c, 243u, depth + 1u); else { c.pc = 0x0026B150u; return; } if (c.pc != 0x0026DCB4u) [[unlikely]] return; }
L_0026DCB4:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026DCBC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(320ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DD70; } }
    set32(c.r[2], 0u + 1072u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DD70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    set32(c.r[5], c.r[4].w[0] + 592u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
L_0026DD28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DD40; } }
    c.r[2].d[0] = c.r[6].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DD28u | kUnwind; return; } goto L_0026DD28; } }
L_0026DD40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 41008ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], 0u + 261u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_0026DD70:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DD80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DD90:
    if (::decomp::hook_0026DD90.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0026DD90, depth)) return; }
    set32(c.r[8], 0u + 1072u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 22u));
    st16((c.r[7].w[0] + 582u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[7].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[8].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DDD0:
    set32(c.r[8], 0u + 1072u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 22u));
    st16((c.r[7].w[0] + 584u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[7].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[8].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DE10:
    set32(c.r[8], 0u + 1072u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 22u));
    st16((c.r[7].w[0] + 584u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[7].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[8].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DE50:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DE7C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DE7C:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 582u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DE88:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DEB4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DEB4:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 584u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DEC0:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DEEC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DEEC:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 584u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DEF8:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DF20:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    set32(c.r[2], c.r[2].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DF48:
    set32(c.r[3], 0u + 1072u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 384u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 388u));
    st32((c.r[7].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 392u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 396u));
    st32((c.r[9].w[0]), c.f[1]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DF80:
    set32(c.r[3], 0u + 1072u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 396u), c.f[15]);
    st32((c.r[2].w[0] + 384u), c.f[12]);
    st32((c.r[2].w[0] + 388u), c.f[13]);
    st32((c.r[2].w[0] + 392u), c.f[14]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DFA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DFB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 364u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DFEC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DFFC; } }
L_0026DFEC:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026DFFC:
    set32(c.r[3], ld32((c.r[4].w[0] - 364u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E018; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E028; } }
L_0026E018:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026E028:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E03Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026E03Cu) [[unlikely]] return; }
L_0026E03C:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E050u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0026E050u) [[unlikely]] return; }
L_0026E050:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 364u)));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E09C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E0AC; } }
L_0026E09C:
    set32(c.r[2], 0u + 1072u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026E0AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0026E0C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E0C0:
    c.r[4].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[2], 0u + 16u);
    c.r[6].d[0] = c.r[6].d[0] & 224ull;
    c.r[3].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026E10C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E0F8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026E12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E134; } }
L_0026E0F8:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026E11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E134; } }
L_0026E10C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E134; } }
L_0026E11C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E134; } }
L_0026E12C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_0026E134:
    set32(c.r[3], c.r[9].w[0] << 16);
    set32(c.r[2], c.r[10].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[8].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E170:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E180:
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1A8u);  if (depth < kMaxDepth) unit_005B(c, 14u, depth + 1u); else { c.pc = 0x0026C568u; return; } if (c.pc != 0x0026E1A8u) [[unlikely]] return; }
L_0026E1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E1B8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 56u), c.f[12]);
    st32((c.r[29].w[0] + 60u), c.f[14]);
    st32((c.r[29].w[0] + 64u), c.f[16]);
    st32((c.r[29].w[0] + 68u), c.f[18]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E1F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E21Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0026E21Cu) [[unlikely]] return; }
L_0026E21C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E248u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x0026E248u) [[unlikely]] return; }
L_0026E248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E25Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0026E25Cu) [[unlikely]] return; }
L_0026E25C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E278:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2A4u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0026E2A4u) [[unlikely]] return; }
L_0026E2A4:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2B8u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x0026E2B8u) [[unlikely]] return; }
L_0026E2B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2CCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0026E2CCu) [[unlikely]] return; }
L_0026E2CC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E2E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E2F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[19].w[0] + 36u), 0u);
    st32((c.r[19].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026E37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E36C; } }
    c.budget -= 1;
L_0026E350:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 448u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E37C; } }
L_0026E36C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 347u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E350u | kUnwind; return; } goto L_0026E350; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0026E37C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026E610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], ld32((c.r[2].w[0] - 3028u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E398u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0026E398u) [[unlikely]] return; }
L_0026E398:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3A8u);  if (depth < kMaxDepth) unit_0060(c, 54u, depth + 1u); else { c.pc = 0x00280668u; return; } if (c.pc != 0x0026E3A8u) [[unlikely]] return; }
L_0026E3A8:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0026E3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E3BC; } }
L_0026E3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3BCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0026E3BCu) [[unlikely]] return; }
L_0026E3BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3D0u);  if (depth < kMaxDepth) unit_0060(c, 56u, depth + 1u); else { c.pc = 0x00280698u; return; } if (c.pc != 0x0026E3D0u) [[unlikely]] return; }
L_0026E3D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026E454; } }
    c.budget -= 1;
L_0026E3E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 347u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E438; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E408u);  if (depth < kMaxDepth) unit_005F(c, 291u, depth + 1u); else { c.pc = 0x0027F510u; return; } if (c.pc != 0x0026E408u) [[unlikely]] return; }
L_0026E408:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E438u);  if (depth < kMaxDepth) unit_0060(c, 39u, depth + 1u); else { c.pc = 0x002803B0u; return; } if (c.pc != 0x0026E438u) [[unlikely]] return; }
L_0026E438:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 448u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E3E8u | kUnwind; return; } goto L_0026E3E8; } }
L_0026E454:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026E460; } }
    st32((c.r[19].w[0] + 120u), c.r[18].w[0]);
    c.budget -= 1;
L_0026E460:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026E554; } }
    set32(c.r[23], 0u + 1u);
    set32(c.r[22], c.r[19].w[0] + 40u);
    set32(c.r[21], c.r[19].w[0] + 124u);
    c.budget -= 4;
L_0026E488:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 347u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E538; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4A4u);  if (depth < kMaxDepth) unit_0060(c, 69u, depth + 1u); else { c.pc = 0x00280878u; return; } if (c.pc != 0x0026E4A4u) [[unlikely]] return; }
L_0026E4A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026E538; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026E538; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4CCu);  if (depth < kMaxDepth) unit_0060(c, 73u, depth + 1u); else { c.pc = 0x002808D0u; return; } if (c.pc != 0x0026E4CCu) [[unlikely]] return; }
L_0026E4CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0026E514; } }
    st32((c.r[18].w[0] + 76u), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E538; } }
L_0026E514:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E524u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00280080u; return; } if (c.pc != 0x0026E524u) [[unlikely]] return; }
L_0026E524:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E534u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00280080u; return; } if (c.pc != 0x0026E534u) [[unlikely]] return; }
L_0026E534:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_0026E538:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 448u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E488u | kUnwind; return; } goto L_0026E488; } }
L_0026E554:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026E5E8; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_0026E570:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E580u);  if (depth < kMaxDepth) unit_0060(c, 65u, depth + 1u); else { c.pc = 0x00280810u; return; } if (c.pc != 0x0026E580u) [[unlikely]] return; }
L_0026E580:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0026E59C; } }
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E5D0; } }
L_0026E59C:
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 352u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E5D0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0026E5D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 3580u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5D0u);  if (depth < kMaxDepth) unit_005F(c, 239u, depth + 1u); else { c.pc = 0x0027E710u; return; } if (c.pc != 0x0026E5D0u) [[unlikely]] return; }
L_0026E5D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E570u | kUnwind; return; } goto L_0026E570; } }
L_0026E5E8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5F4u);  if (depth < kMaxDepth) unit_0060(c, 82u, depth + 1u); else { c.pc = 0x00280988u; return; } if (c.pc != 0x0026E5F4u) [[unlikely]] return; }
L_0026E5F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E600u);  if (depth < kMaxDepth) unit_005B(c, 234u, depth + 1u); else { c.pc = 0x0026E640u; return; } if (c.pc != 0x0026E600u) [[unlikely]] return; }
L_0026E600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E610; } }
L_0026E608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E3B4u | kUnwind; return; } goto L_0026E3B4; } }
L_0026E610:
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
L_0026E640:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0026E710; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
L_0026E680:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E690u);  if (depth < kMaxDepth) unit_0060(c, 65u, depth + 1u); else { c.pc = 0x00280810u; return; } if (c.pc != 0x0026E690u) [[unlikely]] return; }
L_0026E690:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 17344u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6A8u);  if (depth < kMaxDepth) unit_005F(c, 259u, depth + 1u); else { c.pc = 0x0027EBF0u; return; } if (c.pc != 0x0026E6A8u) [[unlikely]] return; }
L_0026E6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0026E6F4; } }
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 100u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 116u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E6F8; } }
L_0026E6F4:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_0026E6F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E680u | kUnwind; return; } goto L_0026E680; } }
L_0026E710:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026E808; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_0026E730:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E740u);  if (depth < kMaxDepth) unit_0060(c, 65u, depth + 1u); else { c.pc = 0x00280810u; return; } if (c.pc != 0x0026E740u) [[unlikely]] return; }
L_0026E740:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0026E7AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E7F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F910000u);
    c.r[1].d[0] = c.r[1].d[0] | 60293ull;
    c.f[5] = c.r[1].w[0];
    st32((c.r[16].w[0] + 112u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[4]);
    st32((c.r[16].w[0] + 120u), c.f[5]);
    st32((c.r[16].w[0] + 116u), c.f[6]);
    st32((c.r[16].w[0] + 108u), c.f[6]);
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 19;
L_0026E7AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E7F0; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.f[3] = ld32((c.r[17].w[0] + 100u));
    c.f[4] = ld32((c.r[17].w[0] + 104u));
    c.f[5] = ld32((c.r[17].w[0] + 120u));
    c.f[6] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    st32((c.r[16].w[0] + 108u), c.f[1]);
    st32((c.r[16].w[0] + 92u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[4]);
    st32((c.r[16].w[0] + 120u), c.f[5]);
    st32((c.r[16].w[0] + 116u), c.f[6]);
    c.budget -= 14;
L_0026E7F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E730u | kUnwind; return; } goto L_0026E730; } }
L_0026E808:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E830:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0026EA28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[23], 0u + 1u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 5;
L_0026E888:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E898u);  if (depth < kMaxDepth) unit_0060(c, 65u, depth + 1u); else { c.pc = 0x00280810u; return; } if (c.pc != 0x0026E898u) [[unlikely]] return; }
L_0026E898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[16].w[0] + 120u), c.f[20]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_0026EA10; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026EA10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026EA10; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8D0u);  if (depth < kMaxDepth) unit_0060(c, 73u, depth + 1u); else { c.pc = 0x002808D0u; return; } if (c.pc != 0x0026E8D0u) [[unlikely]] return; }
L_0026E8D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026EA10; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8ECu);  if (depth < kMaxDepth) unit_0060(c, 38u, depth + 1u); else { c.pc = 0x00280388u; return; } if (c.pc != 0x0026E8ECu) [[unlikely]] return; }
L_0026E8EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8FCu);  if (depth < kMaxDepth) unit_0060(c, 38u, depth + 1u); else { c.pc = 0x00280388u; return; } if (c.pc != 0x0026E8FCu) [[unlikely]] return; }
L_0026E8FC:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E9D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E9D0; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E9D0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E9D0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] - 7152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E998u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0026E998u) [[unlikely]] return; }
L_0026E998:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9A8u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x0026E9A8u) [[unlikely]] return; }
L_0026E9A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9B8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0026E9B8u) [[unlikely]] return; }
L_0026E9B8:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9C8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0026E9C8u) [[unlikely]] return; }
L_0026E9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EA10; } }
L_0026E9D0:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9E0u);  if (depth < kMaxDepth) unit_008A(c, 188u, depth + 1u); else { c.pc = 0x0032AAC8u; return; } if (c.pc != 0x0026E9E0u) [[unlikely]] return; }
L_0026E9E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9F0u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x0026E9F0u) [[unlikely]] return; }
L_0026E9F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA00u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0026EA00u) [[unlikely]] return; }
L_0026EA00:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA10u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0026EA10u) [[unlikely]] return; }
L_0026EA10:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E888u | kUnwind; return; } goto L_0026E888; } }
L_0026EA28:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EA60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 8128u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ECC4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ECC4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ECC4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAC0u);  if (depth < kMaxDepth) unit_0060(c, 267u, depth + 1u); else { c.pc = 0x00283CE8u; return; } if (c.pc != 0x0026EAC0u) [[unlikely]] return; }
L_0026EAC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026ECC4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026EB24; } }
    set32(c.r[16], c.r[18].w[0] + 40u);
    c.budget -= 1;
L_0026EAE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB14u);  if (depth < kMaxDepth) unit_0060(c, 39u, depth + 1u); else { c.pc = 0x002803B0u; return; } if (c.pc != 0x0026EB14u) [[unlikely]] return; }
L_0026EB14:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EAE0u | kUnwind; return; } goto L_0026EAE0; } }
L_0026EB24:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026EB44; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 3580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026EB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB44u);  if (depth < kMaxDepth) unit_005F(c, 205u, depth + 1u); else { c.pc = 0x0027E000u; return; } if (c.pc != 0x0026EB44u) [[unlikely]] return; }
L_0026EB44:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB58u);  if (depth < kMaxDepth) unit_0060(c, 77u, depth + 1u); else { c.pc = 0x00280928u; return; } if (c.pc != 0x0026EB58u) [[unlikely]] return; }
L_0026EB58:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0026EC48; } }
    set32(c.r[19], 0u + 1u);
    set32(c.r[21], 0u - 1u);
    c.budget -= 2;
L_0026EB70:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB80u);  if (depth < kMaxDepth) unit_0060(c, 65u, depth + 1u); else { c.pc = 0x00280810u; return; } if (c.pc != 0x0026EB80u) [[unlikely]] return; }
L_0026EB80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0026EB9C; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EC30; } }
L_0026EB9C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBACu);  if (depth < kMaxDepth) unit_0060(c, 38u, depth + 1u); else { c.pc = 0x00280388u; return; } if (c.pc != 0x0026EBACu) [[unlikely]] return; }
L_0026EBAC:
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[20].w[0] + 80u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBC0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0026EBC0u) [[unlikely]] return; }
L_0026EBC0:
    c.f[0] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0] + 160u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st32((c.r[16].w[0] + 168u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0026EC30; } }
    c.f[0] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0] + 176u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 184u), c.f[1]);
    c.budget -= 12;
L_0026EC30:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EB70u | kUnwind; return; } goto L_0026EB70; } }
L_0026EC48:
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026EC64; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC64u);  if (depth < kMaxDepth) unit_005B(c, 240u, depth + 1u); else { c.pc = 0x0026E830u; return; } if (c.pc != 0x0026EC64u) [[unlikely]] return; }
L_0026EC64:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0026ECC4; } }
    c.budget -= 1;
L_0026EC80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 347u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ECA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ECA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 347u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ECA8; } }
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026ECA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 448u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EC80u | kUnwind; return; } goto L_0026EC80; } }
L_0026ECC4:
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
L_0026ECF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED08u);  if (depth < kMaxDepth) unit_0060(c, 88u, depth + 1u); else { c.pc = 0x00280B48u; return; } if (c.pc != 0x0026ED08u) [[unlikely]] return; }
L_0026ED08:
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED18u);  if (depth < kMaxDepth) unit_005B(c, 212u, depth + 1u); else { c.pc = 0x0026E2F0u; return; } if (c.pc != 0x0026ED18u) [[unlikely]] return; }
L_0026ED18:
    st32((c.r[16].w[0] + 204u), 0u);
    c.budget -= 1;
L_0026ED1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026ED2C; } }
L_0026ED24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED2Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0026ED2Cu) [[unlikely]] return; }
L_0026ED2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026ED58; } }
L_0026ED38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED48u);  if (depth < kMaxDepth) unit_0060(c, 90u, depth + 1u); else { c.pc = 0x00280B88u; return; } if (c.pc != 0x0026ED48u) [[unlikely]] return; }
L_0026ED48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ED24u | kUnwind; return; } goto L_0026ED24; } }
L_0026ED50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED58u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0026ED58u) [[unlikely]] return; }
L_0026ED58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026ED70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED84u);  if (depth < kMaxDepth) unit_0060(c, 90u, depth + 1u); else { c.pc = 0x00280B88u; return; } if (c.pc != 0x0026ED84u) [[unlikely]] return; }
L_0026ED84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026ED98:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026EDC8; } }
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], 0u + 448u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0026EDB8u);  goto L_0026EDBC; }
L_0026EDBC:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EDC8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EDD8:
    set32(c.r[3], 0u + 448u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE04u);  if (depth < kMaxDepth) unit_0060(c, 69u, depth + 1u); else { c.pc = 0x00280878u; return; } if (c.pc != 0x0026EE04u) [[unlikely]] return; }
L_0026EE04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EE18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE2Cu);  if (depth < kMaxDepth) unit_0060(c, 73u, depth + 1u); else { c.pc = 0x002808D0u; return; } if (c.pc != 0x0026EE2Cu) [[unlikely]] return; }
L_0026EE2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE68u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0026EE68u) [[unlikely]] return; }
L_0026EE68:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE84u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0026EE84u) [[unlikely]] return; }
L_0026EE84:
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026EECC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 6;
L_0026EECC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026EF08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 6;
L_0026EF08:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026EF34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_0026EF34:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026EF60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_0026EF60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EF78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF8Cu);  if (depth < kMaxDepth) unit_005F(c, 159u, depth + 1u); else { c.pc = 0x0027D6A0u; return; } if (c.pc != 0x0026EF8Cu) [[unlikely]] return; }
L_0026EF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EFA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EFB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFD8u);  if (depth < kMaxDepth) unit_004B(c, 17u, depth + 1u); else { c.pc = 0x0022C728u; return; } if (c.pc != 0x0026EFD8u) [[unlikely]] return; }
L_0026EFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EFE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFF8u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x0026EFF8u) [[unlikely]] return; }
L_0026EFF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18532u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 21008u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] - 18532u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] - 31664u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] - 31664u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026F030; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F030u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F030u) [[unlikely]] return; }
L_0026F030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F04C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F04Cu);  if (depth < kMaxDepth) unit_00C5(c, 183u, depth + 1u); else { c.pc = 0x004154C8u; return; } if (c.pc != 0x0026F04Cu) [[unlikely]] return; }
L_0026F04C:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] - 21008u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F078:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F088u);  if (depth < kMaxDepth) unit_00C5(c, 194u, depth + 1u); else { c.pc = 0x00415628u; return; } if (c.pc != 0x0026F088u) [[unlikely]] return; }
L_0026F088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F098:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] - 31704u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0C8u);  if (depth < kMaxDepth) unit_00C5(c, 204u, depth + 1u); else { c.pc = 0x00415728u; return; } if (c.pc != 0x0026F0C8u) [[unlikely]] return; }
L_0026F0C8:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0D8u);  if (depth < kMaxDepth) unit_00C6(c, 92u, depth + 1u); else { c.pc = 0x00418840u; return; } if (c.pc != 0x0026F0D8u) [[unlikely]] return; }
L_0026F0D8:
    set32(c.r[6], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0ECu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026F0ECu) [[unlikely]] return; }
L_0026F0EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] + 23200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] - 31704u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F108u);  if (depth < kMaxDepth) unit_00C6(c, 77u, depth + 1u); else { c.pc = 0x00418670u; return; } if (c.pc != 0x0026F108u) [[unlikely]] return; }
L_0026F108:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F114u);  if (depth < kMaxDepth) unit_00C5(c, 129u, depth + 1u); else { c.pc = 0x00414D40u; return; } if (c.pc != 0x0026F114u) [[unlikely]] return; }
L_0026F114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] - 4120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F124u);  if (depth < kMaxDepth) unit_00A0(c, 282u, depth + 1u); else { c.pc = 0x00383DB0u; return; } if (c.pc != 0x0026F124u) [[unlikely]] return; }
L_0026F124:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F134u);  if (depth < kMaxDepth) unit_00C5(c, 212u, depth + 1u); else { c.pc = 0x00415850u; return; } if (c.pc != 0x0026F134u) [[unlikely]] return; }
L_0026F134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F13Cu);  if (depth < kMaxDepth) unit_00C5(c, 6u, depth + 1u); else { c.pc = 0x00414048u; return; } if (c.pc != 0x0026F13Cu) [[unlikely]] return; }
L_0026F13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18704u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] - 21004u), c.r[18].w[0]);
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 23208u);
    set32(c.r[8], c.r[8].w[0] + 23240u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 634u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F170u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026F170u) [[unlikely]] return; }
L_0026F170:
    st32((c.r[19].w[0] - 31668u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[17].w[0] - 31720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1CCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026F1CCu) [[unlikely]] return; }
L_0026F1CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 23256u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18704u)));
    st32((c.r[17].w[0] - 31720u), c.r[3].w[0]);
    set32(c.r[5], 0u + 64u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], 0u + 5840u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], 0u + 658u);
    set32(c.r[7], c.r[7].w[0] + 23208u);
    set32(c.r[8], c.r[8].w[0] + 23272u);
    set32(c.r[5], 0u + 5840u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F214u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026F214u) [[unlikely]] return; }
L_0026F214:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F224u);  if (depth < kMaxDepth) unit_00C6(c, 87u, depth + 1u); else { c.pc = 0x00418770u; return; } if (c.pc != 0x0026F224u) [[unlikely]] return; }
L_0026F224:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 4120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F258u);  if (depth < kMaxDepth) unit_00A0(c, 282u, depth + 1u); else { c.pc = 0x00383DB0u; return; } if (c.pc != 0x0026F258u) [[unlikely]] return; }
L_0026F258:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F278u);  if (depth < kMaxDepth) unit_00C5(c, 184u, depth + 1u); else { c.pc = 0x004154E0u; return; } if (c.pc != 0x0026F278u) [[unlikely]] return; }
L_0026F278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F298u);  if (depth < kMaxDepth) unit_00C5(c, 28u, depth + 1u); else { c.pc = 0x004141C0u; return; } if (c.pc != 0x0026F298u) [[unlikely]] return; }
L_0026F298:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2A4u);  if (depth < kMaxDepth) unit_00A0(c, 282u, depth + 1u); else { c.pc = 0x00383DB0u; return; } if (c.pc != 0x0026F2A4u) [[unlikely]] return; }
L_0026F2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2ACu);  if (depth < kMaxDepth) unit_00C5(c, 142u, depth + 1u); else { c.pc = 0x00414F20u; return; } if (c.pc != 0x0026F2ACu) [[unlikely]] return; }
L_0026F2AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2B8u);  if (depth < kMaxDepth) unit_00C6(c, 87u, depth + 1u); else { c.pc = 0x00418770u; return; } if (c.pc != 0x0026F2B8u) [[unlikely]] return; }
L_0026F2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18708u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 23208u);
    set32(c.r[8], c.r[8].w[0] + 23288u);
    set32(c.r[9], 0u + 740u);
    c.r[5].d[0] = c.r[5].d[0] | 484ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F300u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026F300u) [[unlikely]] return; }
L_0026F300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st32((c.r[3].w[0] - 31684u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.r[6].d[0] = c.r[6].d[0] | 484ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F320u);  if (depth < kMaxDepth) unit_00C6(c, 94u, depth + 1u); else { c.pc = 0x004188A8u; return; } if (c.pc != 0x0026F320u) [[unlikely]] return; }
L_0026F320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 31724u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F358u);  if (depth < kMaxDepth) unit_00C6(c, 407u, depth + 1u); else { c.pc = 0x0041ADC0u; return; } if (c.pc != 0x0026F358u) [[unlikely]] return; }
L_0026F358:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F388u);  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x0026F388u) [[unlikely]] return; }
L_0026F388:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F3A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F3A4; } }
L_0026F3A0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F3A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3DCu);  if (depth < kMaxDepth) unit_00C6(c, 327u, depth + 1u); else { c.pc = 0x0041A3B8u; return; } if (c.pc != 0x0026F3DCu) [[unlikely]] return; }
L_0026F3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F40Cu);  if (depth < kMaxDepth) unit_00C6(c, 327u, depth + 1u); else { c.pc = 0x0041A3B8u; return; } if (c.pc != 0x0026F40Cu) [[unlikely]] return; }
L_0026F40C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F438u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0026F438u) [[unlikely]] return; }
L_0026F438:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F448:
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026F4D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026F4A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F4D4; } }
L_0026F4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4B0u);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x0026F4B0u) [[unlikely]] return; }
L_0026F4B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F4D4; } }
L_0026F4D0:
    set32(c.r[5], 0u - 960u);
    c.budget -= 1;
L_0026F4D4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0026F4E8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F4F8; } }
L_0026F4E8:
    set32(c.r[2], 0u - 961u);
    set32(c.r[3], 0u - 960u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0026F4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F508u);  if (depth < kMaxDepth) unit_00C6(c, 264u, depth + 1u); else { c.pc = 0x00419D60u; return; } if (c.pc != 0x0026F508u) [[unlikely]] return; }
L_0026F508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31724u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F530u);  if (depth < kMaxDepth) unit_00C6(c, 130u, depth + 1u); else { c.pc = 0x00418D30u; return; } if (c.pc != 0x0026F530u) [[unlikely]] return; }
L_0026F530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18708u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[6], c.r[6].w[0] + 23208u);
    set32(c.r[7], c.r[7].w[0] + 23312u);
    c.r[5].d[0] = c.r[5].d[0] | 484ull;
    set32(c.r[8], 0u + 873u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F55Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0026F55Cu) [[unlikely]] return; }
L_0026F55C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[17].w[0] - 21012u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F59C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F59Cu);  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F790u; return; } if (c.pc != 0x0026F59Cu) [[unlikely]] return; }
L_0026F59C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5ACu);  if (depth < kMaxDepth) unit_00C4(c, 280u, depth + 1u); else { c.pc = 0x00412CE8u; return; } if (c.pc != 0x0026F5ACu) [[unlikely]] return; }
L_0026F5AC:
    st32((c.r[17].w[0] - 21012u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5E4u);  if (depth < kMaxDepth) unit_00C4(c, 448u, depth + 1u); else { c.pc = 0x00413F28u; return; } if (c.pc != 0x0026F5E4u) [[unlikely]] return; }
L_0026F5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F5F8:
    set32(c.r[4], c.r[5].w[0] + 2047u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4094u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[3].w[0] - 21012u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F62Cu);  if (depth < kMaxDepth) unit_00C4(c, 394u, depth + 1u); else { c.pc = 0x004138D8u; return; } if (c.pc != 0x0026F62Cu) [[unlikely]] return; }
L_0026F62C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[8], c.r[18].w[0] + 2047u);
    set32(c.r[6], c.r[5].w[0] + 2047u);
    c.r[4].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[18].w[0] + 4094u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] + 4094u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[6].d[0];
    set32(c.r[4], ld32((c.r[16].w[0] - 21012u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F69Cu);  if (depth < kMaxDepth) unit_00C4(c, 394u, depth + 1u); else { c.pc = 0x004138D8u; return; } if (c.pc != 0x0026F69Cu) [[unlikely]] return; }
L_0026F69C:
    set32(c.r[4], ld32((c.r[16].w[0] - 21012u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6B0u);  if (depth < kMaxDepth) unit_00C4(c, 362u, depth + 1u); else { c.pc = 0x004135F8u; return; } if (c.pc != 0x0026F6B0u) [[unlikely]] return; }
L_0026F6B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[3].w[0] - 31680u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 31672u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 21012u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6FCu);  if (depth < kMaxDepth) unit_00C4(c, 421u, depth + 1u); else { c.pc = 0x00413BB0u; return; } if (c.pc != 0x0026F6FCu) [[unlikely]] return; }
L_0026F6FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F714; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0026F720; } }
L_0026F714:
    set32(c.r[16], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F764; } }
L_0026F720:
    c.r[2].d[0] = c.r[3].d[0] ^ 3ull;
    set32(c.r[4], ld32((c.r[16].w[0] - 21012u)));
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F734u);  if (depth < kMaxDepth) unit_00C4(c, 415u, depth + 1u); else { c.pc = 0x00413B48u; return; } if (c.pc != 0x0026F734u) [[unlikely]] return; }
L_0026F734:
    set32(c.r[6], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[3].w[0] - 31680u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[4].w[0] - 31676u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0026F754u);  goto L_0026F758; }
L_0026F758:
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[2].w[0] - 31672u), c.r[6].w[0]);
    c.budget -= 3;
L_0026F764:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31672u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 21012u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7A8u);  if (depth < kMaxDepth) unit_00C4(c, 315u, depth + 1u); else { c.pc = 0x004130F8u; return; } if (c.pc != 0x0026F7A8u) [[unlikely]] return; }
L_0026F7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 31672u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F7C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 1041u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[8].w[0] + 142u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[16].w[0] >> 1);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] + 23208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 23336u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F820u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026F820u) [[unlikely]] return; }
L_0026F820:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], ld32((c.r[18].w[0] - 31668u)));
    set32(c.r[17], c.r[19].w[0] << 2);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] - 31668u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F850u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026F850u) [[unlikely]] return; }
L_0026F850:
    set32(c.r[4], ld32((c.r[18].w[0] - 31668u)));
    set32(c.r[3], c.r[16].w[0] + 2047u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 4094u);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[9], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 11));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F88Cu);  if (depth < kMaxDepth) unit_00C4(c, 227u, depth + 1u); else { c.pc = 0x004122C0u; return; } if (c.pc != 0x0026F88Cu) [[unlikely]] return; }
L_0026F88C:
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
L_0026F8B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8D4u);  if (depth < kMaxDepth) unit_00C4(c, 250u, depth + 1u); else { c.pc = 0x004126D0u; return; } if (c.pc != 0x0026F8D4u) [[unlikely]] return; }
L_0026F8D4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F8F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F8FC; } }
L_0026F8F0:
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    set32(c.r[2], 0u - 1u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_0026F8FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F918:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[19], c.r[20].w[0] + 36u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[6], 0u + 48u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F978u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026F978u) [[unlikely]] return; }
L_0026F978:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    st32((c.r[20].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 2304ull;
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9BCu);  if (depth < kMaxDepth) unit_00CE(c, 92u, depth + 1u); else { c.pc = 0x0043A7E0u; return; } if (c.pc != 0x0026F9BCu) [[unlikely]] return; }
L_0026F9BC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 61568ull;
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[17].w[0] + 23376u);
    set32(c.r[8], c.r[16].w[0] + 23408u);
    set32(c.r[9], 0u + 340u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9E0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026F9E0u) [[unlikely]] return; }
L_0026F9E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], 0u - 30784u);
    set32(c.r[3], c.r[3].w[0] - 16936u);
    set32(c.r[2], c.r[2].w[0] + 30784u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
L_0026F9F8:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F9F8u | kUnwind; return; } goto L_0026F9F8; } }
    set32(c.r[17], c.r[17].w[0] + 23376u);
    set32(c.r[16], c.r[16].w[0] + 23408u);
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 349u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA38u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026FA38u) [[unlikely]] return; }
L_0026FA38:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FA60; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 23360u);
    set32(c.r[6], c.r[6].w[0] + 23416u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA60u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0026FA60u) [[unlikely]] return; }
L_0026FA60:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA74u);  if (depth < kMaxDepth) unit_00CE(c, 175u, depth + 1u); else { c.pc = 0x0043B670u; return; } if (c.pc != 0x0026FA74u) [[unlikely]] return; }
L_0026FA74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0026FAB8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 364u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA9Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0026FA9Cu) [[unlikely]] return; }
L_0026FA9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 23360u);
    set32(c.r[6], c.r[6].w[0] + 23432u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAB8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0026FAB8u) [[unlikely]] return; }
L_0026FAB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    st32((c.r[20].w[0]), c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026FADC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FADCu);  if (depth < kMaxDepth) unit_00CE(c, 263u, depth + 1u); else { c.pc = 0x0043BF68u; return; } if (c.pc != 0x0026FADCu) [[unlikely]] return; }
L_0026FADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAE4u);  if (depth < kMaxDepth) unit_00CF(c, 351u, depth + 1u); else { c.pc = 0x0043E910u; return; } if (c.pc != 0x0026FAE4u) [[unlikely]] return; }
L_0026FAE4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 384u);
    st32((c.r[20].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB08u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0026FB08u) [[unlikely]] return; }
L_0026FB08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[20].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB1Cu);  if (depth < kMaxDepth) unit_009E(c, 343u, depth + 1u); else { c.pc = 0x0037B600u; return; } if (c.pc != 0x0026FB1Cu) [[unlikely]] return; }
L_0026FB1C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026FB68; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0026FB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB38u);  if (depth < kMaxDepth) unit_00C5(c, 213u, depth + 1u); else { c.pc = 0x00415890u; return; } if (c.pc != 0x0026FB38u) [[unlikely]] return; }
L_0026FB38:
    set32(c.r[5], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0] + 512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB4Cu);  if (depth < kMaxDepth) unit_00CE(c, 43u, depth + 1u); else { c.pc = 0x0043A0D8u; return; } if (c.pc != 0x0026FB4Cu) [[unlikely]] return; }
L_0026FB4C:
    set32(c.r[5], ld32((c.r[23].w[0] - 10124u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], c.r[5].w[0] + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB60u);  if (depth < kMaxDepth) unit_00CF(c, 356u, depth + 1u); else { c.pc = 0x0043E980u; return; } if (c.pc != 0x0026FB60u) [[unlikely]] return; }
L_0026FB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FB78; } }
L_0026FB68:
    set32(c.r[5], ld32((c.r[23].w[0] - 10124u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB78u);  if (depth < kMaxDepth) unit_00CF(c, 278u, depth + 1u); else { c.pc = 0x0043DF10u; return; } if (c.pc != 0x0026FB78u) [[unlikely]] return; }
L_0026FB78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB8Cu);  if (depth < kMaxDepth) unit_005C(c, 39u, depth + 1u); else { c.pc = 0x00270460u; return; } if (c.pc != 0x0026FB8Cu) [[unlikely]] return; }
L_0026FB8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB9Cu);  if (depth < kMaxDepth) unit_00CF(c, 293u, depth + 1u); else { c.pc = 0x0043E120u; return; } if (c.pc != 0x0026FB9Cu) [[unlikely]] return; }
L_0026FB9C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBA8u);  if (depth < kMaxDepth) unit_00CE(c, 39u, depth + 1u); else { c.pc = 0x0043A080u; return; } if (c.pc != 0x0026FBA8u) [[unlikely]] return; }
L_0026FBA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 236u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBB8u);  if (depth < kMaxDepth) unit_00CF(c, 177u, depth + 1u); else { c.pc = 0x0043D4F8u; return; } if (c.pc != 0x0026FBB8u) [[unlikely]] return; }
L_0026FBB8:
    st32((c.r[20].w[0] + 504u), 0u);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026FBF0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC20u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x0026FC20u) [[unlikely]] return; }
L_0026FC20:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC2Cu);  if (depth < kMaxDepth) unit_00C5(c, 184u, depth + 1u); else { c.pc = 0x004154E0u; return; } if (c.pc != 0x0026FC2Cu) [[unlikely]] return; }
L_0026FC2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC3Cu);  if (depth < kMaxDepth) unit_00CE(c, 265u, depth + 1u); else { c.pc = 0x0043BFC0u; return; } if (c.pc != 0x0026FC3Cu) [[unlikely]] return; }
L_0026FC3C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FCB8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC58u);  if (depth < kMaxDepth) unit_005C(c, 354u, depth + 1u); else { c.pc = 0x00272D20u; return; } if (c.pc != 0x0026FC58u) [[unlikely]] return; }
L_0026FC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC60u);  if (depth < kMaxDepth) unit_005C(c, 353u, depth + 1u); else { c.pc = 0x00272D10u; return; } if (c.pc != 0x0026FC60u) [[unlikely]] return; }
L_0026FC60:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[16].w[0] + 88u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_0026FC6C:
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.r[6].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[5].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FC6Cu | kUnwind; return; } goto L_0026FC6C; } }
    c.r[4].d[0] = ld64((c.r[2].w[0]));
    c.r[5].d[0] = ld64((c.r[2].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCB8u);  if (depth < kMaxDepth) unit_00CF(c, 42u, depth + 1u); else { c.pc = 0x0043C6A8u; return; } if (c.pc != 0x0026FCB8u) [[unlikely]] return; }
L_0026FCB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCC4u);  if (depth < kMaxDepth) unit_00CF(c, 287u, depth + 1u); else { c.pc = 0x0043E058u; return; } if (c.pc != 0x0026FCC4u) [[unlikely]] return; }
L_0026FCC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] - 20028u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FCE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FCF4; } }
L_0026FCE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FD10; } }
L_0026FCF4:
    set32(c.r[4], c.r[19].w[0] + 17200u);
    set32(c.r[5], 0u + 2048u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD08u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0026FD08u) [[unlikely]] return; }
L_0026FD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FD30; } }
L_0026FD10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10120u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026FD3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FD3C; } }
L_0026FD30:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FD60; } }
L_0026FD3C:
    set32(c.r[2], c.r[17].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FD5C; } }
    st32((c.r[16].w[0] + 84u), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FD60; } }
L_0026FD5C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0026FD60:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026FD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[14], ld32((c.r[11].w[0] + 19772u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[13], ld32((c.r[2].w[0] - 18600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[15], ld32((c.r[12].w[0] + 19776u)));
    set32(c.r[11], c.r[10].w[0] - 31136u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] - 18600u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[2].w[0] - 31656u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[21]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.f[21] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[12], ld32((c.r[3].w[0] + 23004u)));
    st32((c.r[11].w[0] + 8u), c.r[13].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[10].w[0] - 31136u), c.r[14].w[0]);
    st32((c.r[11].w[0] + 4u), c.r[15].w[0]);
    c.budget -= 39;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0026FE68; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE28u);  if (depth < kMaxDepth) unit_005D(c, 100u, depth + 1u); else { c.pc = 0x00275520u; return; } if (c.pc != 0x0026FE28u) [[unlikely]] return; }
L_0026FE28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE38u);  if (depth < kMaxDepth) unit_005D(c, 101u, depth + 1u); else { c.pc = 0x00275530u; return; } if (c.pc != 0x0026FE38u) [[unlikely]] return; }
L_0026FE38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[10], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 19540u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 512u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE60u);  if (depth < kMaxDepth) unit_005C(c, 328u, depth + 1u); else { c.pc = 0x00272A60u; return; } if (c.pc != 0x0026FE60u) [[unlikely]] return; }
L_0026FE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FEAC; } }
L_0026FE68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE74u);  if (depth < kMaxDepth) unit_005D(c, 100u, depth + 1u); else { c.pc = 0x00275520u; return; } if (c.pc != 0x0026FE74u) [[unlikely]] return; }
L_0026FE74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE84u);  if (depth < kMaxDepth) unit_005D(c, 101u, depth + 1u); else { c.pc = 0x00275530u; return; } if (c.pc != 0x0026FE84u) [[unlikely]] return; }
L_0026FE84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[10], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 19540u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 448u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEACu);  if (depth < kMaxDepth) unit_005C(c, 328u, depth + 1u); else { c.pc = 0x00272A60u; return; } if (c.pc != 0x0026FEACu) [[unlikely]] return; }
L_0026FEAC:
    set32(c.r[4], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] - 31728u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FECCu);  if (depth < kMaxDepth) unit_0049(c, 45u, depth + 1u); else { c.pc = 0x00224E98u; return; } if (c.pc != 0x0026FECCu) [[unlikely]] return; }
L_0026FECC:
    set32(c.r[17], 0u + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEDCu);  if (depth < kMaxDepth) unit_005C(c, 265u, depth + 1u); else { c.pc = 0x002720E0u; return; } if (c.pc != 0x0026FEDCu) [[unlikely]] return; }
L_0026FEDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEE8u);  if (depth < kMaxDepth) unit_005B(c, 318u, depth + 1u); else { c.pc = 0x0026F240u; return; } if (c.pc != 0x0026FEE8u) [[unlikely]] return; }
L_0026FEE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEF8u);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x00272B48u; return; } if (c.pc != 0x0026FEF8u) [[unlikely]] return; }
L_0026FEF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF0Cu);  if (depth < kMaxDepth) unit_005B(c, 300u, depth + 1u); else { c.pc = 0x0026F068u; return; } if (c.pc != 0x0026FF0Cu) [[unlikely]] return; }
L_0026FF0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF20u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026FF20u) [[unlikely]] return; }
L_0026FF20:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 496u), c.r[17].w[0]);
    set32(c.r[4], c.r[19].w[0] + 236u);
    st32((c.r[19].w[0] + 492u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF3Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0026FF3Cu) [[unlikely]] return; }
L_0026FF3C:
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026FF5C; } }
    st32((c.r[19].w[0] + 500u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FF6C; } }
L_0026FF5C:
    st32((c.r[19].w[0] + 500u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x426F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49807ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
L_0026FF6C:
    set32(c.r[16], c.r[19].w[0] + 4u);
    set32(c.r[6], 0u + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF84u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0026FF84u) [[unlikely]] return; }
L_0026FF84:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFACu);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414D28u; return; } if (c.pc != 0x0026FFACu) [[unlikely]] return; }
L_0026FFAC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFC0u);  if (depth < kMaxDepth) unit_00CF(c, 79u, depth + 1u); else { c.pc = 0x0043CB40u; return; } if (c.pc != 0x0026FFC0u) [[unlikely]] return; }
L_0026FFC0:
    set32(c.r[16], 0u + 3u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFE4u);  if (depth < kMaxDepth) unit_005B(c, 369u, depth + 1u); else { c.pc = 0x0026F918u; return; } if (c.pc != 0x0026FFE4u) [[unlikely]] return; }
L_0026FFE4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFF0u);  if (depth < kMaxDepth) unit_005C(c, 333u, depth + 1u); else { c.pc = 0x00272B08u; return; } if (c.pc != 0x0026FFF0u) [[unlikely]] return; }
L_0026FFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFF8u);  if (depth < kMaxDepth) unit_005C(c, 334u, depth + 1u); else { c.pc = 0x00272B28u; return; } if (c.pc != 0x0026FFF8u) [[unlikely]] return; }
L_0026FFF8:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_005C(c, 1u, depth);
}

}
