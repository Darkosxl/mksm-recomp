#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_001EAF30;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0,
    0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0,
    0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E8000;
    case 2u: goto L_001E8004;
    case 3u: goto L_001E8010;
    case 4u: goto L_001E803C;
    case 5u: goto L_001E8048;
    case 6u: goto L_001E8050;
    case 7u: goto L_001E8068;
    case 8u: goto L_001E8078;
    case 9u: goto L_001E8098;
    case 10u: goto L_001E80A4;
    case 11u: goto L_001E80B8;
    case 12u: goto L_001E80D4;
    case 13u: goto L_001E80F4;
    case 14u: goto L_001E8128;
    case 15u: goto L_001E8140;
    case 16u: goto L_001E8174;
    case 17u: goto L_001E818C;
    case 18u: goto L_001E81C0;
    case 19u: goto L_001E81D8;
    case 20u: goto L_001E81F4;
    case 21u: goto L_001E8214;
    case 22u: goto L_001E821C;
    case 23u: goto L_001E8230;
    case 24u: goto L_001E824C;
    case 25u: goto L_001E826C;
    case 26u: goto L_001E82A0;
    case 27u: goto L_001E82B8;
    case 28u: goto L_001E82EC;
    case 29u: goto L_001E8304;
    case 30u: goto L_001E8338;
    case 31u: goto L_001E8350;
    case 32u: goto L_001E836C;
    case 33u: goto L_001E838C;
    case 34u: goto L_001E83A8;
    case 35u: goto L_001E83B8;
    case 36u: goto L_001E83C0;
    case 37u: goto L_001E83D4;
    case 38u: goto L_001E83F0;
    case 39u: goto L_001E8410;
    case 40u: goto L_001E8444;
    case 41u: goto L_001E845C;
    case 42u: goto L_001E8490;
    case 43u: goto L_001E84A8;
    case 44u: goto L_001E84DC;
    case 45u: goto L_001E84F4;
    case 46u: goto L_001E8510;
    case 47u: goto L_001E8530;
    case 48u: goto L_001E854C;
    case 49u: goto L_001E855C;
    case 50u: goto L_001E8564;
    case 51u: goto L_001E8578;
    case 52u: goto L_001E8598;
    case 53u: goto L_001E85CC;
    case 54u: goto L_001E85E4;
    case 55u: goto L_001E8618;
    case 56u: goto L_001E8630;
    case 57u: goto L_001E8664;
    case 58u: goto L_001E867C;
    case 59u: goto L_001E8698;
    case 60u: goto L_001E86B8;
    case 61u: goto L_001E86C0;
    case 62u: goto L_001E86D4;
    case 63u: goto L_001E86F4;
    case 64u: goto L_001E8728;
    case 65u: goto L_001E8740;
    case 66u: goto L_001E8774;
    case 67u: goto L_001E878C;
    case 68u: goto L_001E87C0;
    case 69u: goto L_001E87D8;
    case 70u: goto L_001E87F4;
    case 71u: goto L_001E8814;
    case 72u: goto L_001E881C;
    case 73u: goto L_001E8830;
    case 74u: goto L_001E884C;
    case 75u: goto L_001E886C;
    case 76u: goto L_001E88A0;
    case 77u: goto L_001E88B8;
    case 78u: goto L_001E88EC;
    case 79u: goto L_001E8904;
    case 80u: goto L_001E8938;
    case 81u: goto L_001E8950;
    case 82u: goto L_001E896C;
    case 83u: goto L_001E898C;
    case 84u: goto L_001E899C;
    case 85u: goto L_001E89A4;
    case 86u: goto L_001E89B8;
    case 87u: goto L_001E89D4;
    case 88u: goto L_001E89F4;
    case 89u: goto L_001E8A28;
    case 90u: goto L_001E8A40;
    case 91u: goto L_001E8A74;
    case 92u: goto L_001E8A8C;
    case 93u: goto L_001E8AC0;
    case 94u: goto L_001E8AD8;
    case 95u: goto L_001E8AF4;
    case 96u: goto L_001E8B14;
    case 97u: goto L_001E8B1C;
    case 98u: goto L_001E8B30;
    case 99u: goto L_001E8B4C;
    case 100u: goto L_001E8B6C;
    case 101u: goto L_001E8BA0;
    case 102u: goto L_001E8BB8;
    case 103u: goto L_001E8BEC;
    case 104u: goto L_001E8C04;
    case 105u: goto L_001E8C38;
    case 106u: goto L_001E8C50;
    case 107u: goto L_001E8C6C;
    case 108u: goto L_001E8C8C;
    case 109u: goto L_001E8C94;
    case 110u: goto L_001E8CA8;
    case 111u: goto L_001E8CC4;
    case 112u: goto L_001E8CE4;
    case 113u: goto L_001E8D18;
    case 114u: goto L_001E8D30;
    case 115u: goto L_001E8D64;
    case 116u: goto L_001E8D7C;
    case 117u: goto L_001E8DB0;
    case 118u: goto L_001E8DC8;
    case 119u: goto L_001E8DE4;
    case 120u: goto L_001E8E04;
    case 121u: goto L_001E8E20;
    case 122u: goto L_001E8E30;
    case 123u: goto L_001E8E38;
    case 124u: goto L_001E8E50;
    case 125u: goto L_001E8E80;
    case 126u: goto L_001E8E90;
    case 127u: goto L_001E8E9C;
    case 128u: goto L_001E8ED8;
    case 129u: goto L_001E8EE4;
    case 130u: goto L_001E8F10;
    case 131u: goto L_001E8F20;
    case 132u: goto L_001E8F5C;
    case 133u: goto L_001E8F68;
    case 134u: goto L_001E8F84;
    case 135u: goto L_001E8FA8;
    case 136u: goto L_001E8FC8;
    case 137u: goto L_001E8FF8;
    case 138u: goto L_001E900C;
    case 139u: goto L_001E9028;
    case 140u: goto L_001E9038;
    case 141u: goto L_001E9064;
    case 142u: goto L_001E9074;
    case 143u: goto L_001E9098;
    case 144u: goto L_001E90A8;
    case 145u: goto L_001E90C8;
    case 146u: goto L_001E90D8;
    case 147u: goto L_001E9100;
    case 148u: goto L_001E9124;
    case 149u: goto L_001E9130;
    case 150u: goto L_001E9140;
    case 151u: goto L_001E917C;
    case 152u: goto L_001E91AC;
    case 153u: goto L_001E91C0;
    case 154u: goto L_001E91CC;
    case 155u: goto L_001E91E4;
    case 156u: goto L_001E920C;
    case 157u: goto L_001E921C;
    case 158u: goto L_001E924C;
    case 159u: goto L_001E9260;
    case 160u: goto L_001E926C;
    case 161u: goto L_001E9290;
    case 162u: goto L_001E9298;
    case 163u: goto L_001E92B4;
    case 164u: goto L_001E92D8;
    case 165u: goto L_001E9300;
    case 166u: goto L_001E930C;
    case 167u: goto L_001E9318;
    case 168u: goto L_001E9334;
    case 169u: goto L_001E9340;
    case 170u: goto L_001E934C;
    case 171u: goto L_001E937C;
    case 172u: goto L_001E9390;
    case 173u: goto L_001E93A8;
    case 174u: goto L_001E93D0;
    case 175u: goto L_001E941C;
    case 176u: goto L_001E9484;
    case 177u: goto L_001E94B8;
    case 178u: goto L_001E94CC;
    case 179u: goto L_001E9574;
    case 180u: goto L_001E9644;
    case 181u: goto L_001E96B0;
    case 182u: goto L_001E9700;
    case 183u: goto L_001E9738;
    case 184u: goto L_001E978C;
    case 185u: goto L_001E97C4;
    case 186u: goto L_001E97E0;
    case 187u: goto L_001E97F4;
    case 188u: goto L_001E9820;
    case 189u: goto L_001E9850;
    case 190u: goto L_001E98E4;
    case 191u: goto L_001E98F8;
    case 192u: goto L_001E990C;
    case 193u: goto L_001E9960;
    case 194u: goto L_001E9A28;
    case 195u: goto L_001E9A64;
    case 196u: goto L_001E9B34;
    case 197u: goto L_001E9B4C;
    case 198u: goto L_001E9C84;
    case 199u: goto L_001E9CB0;
    case 200u: goto L_001E9D6C;
    case 201u: goto L_001E9D84;
    case 202u: goto L_001E9EBC;
    case 203u: goto L_001E9EE8;
    case 204u: goto L_001E9FB8;
    case 205u: goto L_001EA028;
    case 206u: goto L_001EA040;
    case 207u: goto L_001EA06C;
    case 208u: goto L_001EA084;
    case 209u: goto L_001EA0B0;
    case 210u: goto L_001EA0D8;
    case 211u: goto L_001EA124;
    case 212u: goto L_001EA13C;
    case 213u: goto L_001EA168;
    case 214u: goto L_001EA174;
    case 215u: goto L_001EA1A0;
    case 216u: goto L_001EA1D8;
    case 217u: goto L_001EA270;
    case 218u: goto L_001EA288;
    case 219u: goto L_001EA2B4;
    case 220u: goto L_001EA2C0;
    case 221u: goto L_001EA2F0;
    case 222u: goto L_001EA308;
    case 223u: goto L_001EA32C;
    case 224u: goto L_001EA364;
    case 225u: goto L_001EA36C;
    case 226u: goto L_001EA388;
    case 227u: goto L_001EA3D4;
    case 228u: goto L_001EA410;
    case 229u: goto L_001EA438;
    case 230u: goto L_001EA468;
    case 231u: goto L_001EA518;
    case 232u: goto L_001EA548;
    case 233u: goto L_001EA560;
    case 234u: goto L_001EA58C;
    case 235u: goto L_001EA598;
    case 236u: goto L_001EA5C8;
    case 237u: goto L_001EA5E0;
    case 238u: goto L_001EA604;
    case 239u: goto L_001EA638;
    case 240u: goto L_001EA64C;
    case 241u: goto L_001EA674;
    case 242u: goto L_001EA6A8;
    case 243u: goto L_001EA75C;
    case 244u: goto L_001EA780;
    case 245u: goto L_001EA7B4;
    case 246u: goto L_001EA7D0;
    case 247u: goto L_001EA7F4;
    case 248u: goto L_001EA834;
    case 249u: goto L_001EA84C;
    case 250u: goto L_001EA868;
    case 251u: goto L_001EA8E0;
    case 252u: goto L_001EA920;
    case 253u: goto L_001EA940;
    case 254u: goto L_001EA9A8;
    case 255u: goto L_001EAA04;
    case 256u: goto L_001EAA64;
    case 257u: goto L_001EAA78;
    case 258u: goto L_001EAA8C;
    case 259u: goto L_001EAAC0;
    case 260u: goto L_001EAACC;
    case 261u: goto L_001EAAEC;
    case 262u: goto L_001EAB14;
    case 263u: goto L_001EAB58;
    case 264u: goto L_001EABF8;
    case 265u: goto L_001EAC2C;
    case 266u: goto L_001EAC5C;
    case 267u: goto L_001EAC78;
    case 268u: goto L_001EACC0;
    case 269u: goto L_001EAD0C;
    case 270u: goto L_001EAD1C;
    case 271u: goto L_001EAD84;
    case 272u: goto L_001EAD9C;
    case 273u: goto L_001EADB8;
    case 274u: goto L_001EADE8;
    case 275u: goto L_001EAE28;
    case 276u: goto L_001EAE4C;
    case 277u: goto L_001EAE80;
    case 278u: goto L_001EAEA0;
    case 279u: goto L_001EAEC8;
    case 280u: goto L_001EAEEC;
    case 281u: goto L_001EAF30;
    case 282u: goto L_001EAF60;
    case 283u: goto L_001EAFC8;
    case 284u: goto L_001EAFDC;
    case 285u: goto L_001EAFF0;
    case 286u: goto L_001EB008;
    case 287u: goto L_001EB030;
    case 288u: goto L_001EB084;
    case 289u: goto L_001EB098;
    case 290u: goto L_001EB0B8;
    case 291u: goto L_001EB0E4;
    case 292u: goto L_001EB140;
    case 293u: goto L_001EB188;
    case 294u: goto L_001EB1A0;
    case 295u: goto L_001EB1B4;
    case 296u: goto L_001EB1E8;
    case 297u: goto L_001EB220;
    case 298u: goto L_001EB23C;
    case 299u: goto L_001EB274;
    case 300u: goto L_001EB290;
    case 301u: goto L_001EB2C4;
    case 302u: goto L_001EB2D8;
    case 303u: goto L_001EB2E8;
    case 304u: goto L_001EB2F8;
    case 305u: goto L_001EB308;
    case 306u: goto L_001EB31C;
    case 307u: goto L_001EB378;
    case 308u: goto L_001EB3CC;
    case 309u: goto L_001EB3E4;
    case 310u: goto L_001EB400;
    case 311u: goto L_001EB410;
    case 312u: goto L_001EB42C;
    case 313u: goto L_001EB438;
    case 314u: goto L_001EB444;
    case 315u: goto L_001EB464;
    case 316u: goto L_001EB524;
    case 317u: goto L_001EB620;
    case 318u: goto L_001EB640;
    case 319u: goto L_001EB680;
    case 320u: goto L_001EB694;
    case 321u: goto L_001EB6C0;
    case 322u: goto L_001EB6FC;
    case 323u: goto L_001EB710;
    case 324u: goto L_001EB73C;
    case 325u: goto L_001EB760;
    case 326u: goto L_001EB79C;
    case 327u: goto L_001EB7B0;
    case 328u: goto L_001EB7D4;
    case 329u: goto L_001EB80C;
    case 330u: goto L_001EB818;
    case 331u: goto L_001EB824;
    case 332u: goto L_001EB86C;
    case 333u: goto L_001EB878;
    case 334u: goto L_001EB8B0;
    case 335u: goto L_001EB8D8;
    case 336u: goto L_001EB8E4;
    case 337u: goto L_001EB93C;
    case 338u: goto L_001EB948;
    case 339u: goto L_001EB990;
    case 340u: goto L_001EB9A8;
    case 341u: goto L_001EB9B4;
    case 342u: goto L_001EBA00;
    case 343u: goto L_001EBA14;
    case 344u: goto L_001EBA34;
    case 345u: goto L_001EBA4C;
    case 346u: goto L_001EBA54;
    case 347u: goto L_001EBA6C;
    case 348u: goto L_001EBA8C;
    case 349u: goto L_001EBAA4;
    case 350u: goto L_001EBAC4;
    case 351u: goto L_001EBAD8;
    case 352u: goto L_001EBAF8;
    case 353u: goto L_001EBB10;
    case 354u: goto L_001EBB18;
    case 355u: goto L_001EBB30;
    case 356u: goto L_001EBB50;
    case 357u: goto L_001EBB68;
    case 358u: goto L_001EBB84;
    case 359u: goto L_001EBB98;
    case 360u: goto L_001EBBA4;
    case 361u: goto L_001EBBB0;
    case 362u: goto L_001EBBBC;
    case 363u: goto L_001EBBE0;
    case 364u: goto L_001EBBF0;
    case 365u: goto L_001EBBF8;
    case 366u: goto L_001EBC40;
    case 367u: goto L_001EBC98;
    case 368u: goto L_001EBCB0;
    case 369u: goto L_001EBCE0;
    case 370u: goto L_001EBCEC;
    case 371u: goto L_001EBCF8;
    case 372u: goto L_001EBD04;
    case 373u: goto L_001EBD10;
    case 374u: goto L_001EBD1C;
    case 375u: goto L_001EBD40;
    case 376u: goto L_001EBD5C;
    case 377u: goto L_001EBD78;
    case 378u: goto L_001EBD90;
    case 379u: goto L_001EBD9C;
    case 380u: goto L_001EBDA8;
    case 381u: goto L_001EBDD8;
    case 382u: goto L_001EBDE4;
    case 383u: goto L_001EBE34;
    case 384u: goto L_001EBE4C;
    case 385u: goto L_001EBE74;
    case 386u: goto L_001EBE8C;
    case 387u: goto L_001EBEE4;
    case 388u: goto L_001EBEFC;
    case 389u: goto L_001EBF44;
    case 390u: goto L_001EBF5C;
    case 391u: goto L_001EBF70;
    case 392u: goto L_001EBF88;
    case 393u: goto L_001EBFB0;
    case 394u: goto L_001EBFC4;
    case 395u: goto L_001EBFD8;
    default: bad_entry(c, 0x001E8000u); return;
    }
L_001E8000:
    c.budget -= 1;
L_001E8004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8024; } }
    c.budget -= 1;
L_001E8010:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E803C; } }
L_001E8024:
    c.r[2].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8010u | kUnwind; return; } goto L_001E8010; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001E803C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8068u);  if (depth < kMaxDepth) unit_0039(c, 414u, depth + 1u); else { c.pc = 0x001E7DF8u; return; } if (c.pc != 0x001E8068u) [[unlikely]] return; }
L_001E8068:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8078:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8098u);  if (depth < kMaxDepth) unit_009C(c, 113u, depth + 1u); else { c.pc = 0x00370BA8u; return; } if (c.pc != 0x001E8098u) [[unlikely]] return; }
L_001E8098:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80A4u);  if (depth < kMaxDepth) unit_009C(c, 188u, depth + 1u); else { c.pc = 0x00372498u; return; } if (c.pc != 0x001E80A4u) [[unlikely]] return; }
L_001E80A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80B8u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E80B8u) [[unlikely]] return; }
L_001E80B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x28510000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60916ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80D4u);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E80D4u) [[unlikely]] return; }
L_001E80D4:
    set32(c.r[4], 0u + 16450u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80F4u);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E80F4u) [[unlikely]] return; }
L_001E80F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 38100ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 38100ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8128u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8128u) [[unlikely]] return; }
L_001E8128:
    set32(c.r[4], 0u + 16451u);
    set32(c.r[5], 0u + 16451u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8140u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8140u) [[unlikely]] return; }
L_001E8140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 18742ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 18742ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8174u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8174u) [[unlikely]] return; }
L_001E8174:
    set32(c.r[4], 0u + 16451u);
    set32(c.r[5], 0u + 16451u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E818Cu);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E818Cu) [[unlikely]] return; }
L_001E818C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 60476ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60476ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81C0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E81C0u) [[unlikely]] return; }
L_001E81C0:
    set32(c.r[4], 0u + 16449u);
    set32(c.r[5], 0u + 16449u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81D8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E81D8u) [[unlikely]] return; }
L_001E81D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDA370000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61830ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81F4u);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E81F4u) [[unlikely]] return; }
L_001E81F4:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 16450u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8214u);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E8214u) [[unlikely]] return; }
L_001E8214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E821Cu);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E821Cu) [[unlikely]] return; }
L_001E821C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 5184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8230u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E8230u) [[unlikely]] return; }
L_001E8230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE5F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61850ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E824Cu);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E824Cu) [[unlikely]] return; }
L_001E824C:
    set32(c.r[4], 0u + 16396u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E826Cu);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E826Cu) [[unlikely]] return; }
L_001E826C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xD62F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xD62F0000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 24624ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 24624ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82A0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E82A0u) [[unlikely]] return; }
L_001E82A0:
    set32(c.r[4], 0u + 16457u);
    set32(c.r[5], 0u + 16457u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82B8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E82B8u) [[unlikely]] return; }
L_001E82B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 44153ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 44153ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82ECu);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E82ECu) [[unlikely]] return; }
L_001E82EC:
    set32(c.r[4], 0u + 16457u);
    set32(c.r[5], 0u + 16457u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8304u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8304u) [[unlikely]] return; }
L_001E8304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 28787ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 28787ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8338u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8338u) [[unlikely]] return; }
L_001E8338:
    set32(c.r[4], 0u + 16457u);
    set32(c.r[5], 0u + 16457u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8350u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8350u) [[unlikely]] return; }
L_001E8350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE5F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61850ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E836Cu);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E836Cu) [[unlikely]] return; }
L_001E836C:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[4], 0u + 16396u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E838Cu);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E838Cu) [[unlikely]] return; }
L_001E838C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 28787ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83A8u);  if (depth < kMaxDepth) unit_009C(c, 247u, depth + 1u); else { c.pc = 0x00372DB0u; return; } if (c.pc != 0x001E83A8u) [[unlikely]] return; }
L_001E83A8:
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], 0u + 16458u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83B8u);  if (depth < kMaxDepth) unit_009C(c, 248u, depth + 1u); else { c.pc = 0x00372DE0u; return; } if (c.pc != 0x001E83B8u) [[unlikely]] return; }
L_001E83B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83C0u);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E83C0u) [[unlikely]] return; }
L_001E83C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83D4u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E83D4u) [[unlikely]] return; }
L_001E83D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE5F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61850ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83F0u);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E83F0u) [[unlikely]] return; }
L_001E83F0:
    set32(c.r[4], 0u + 16459u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8410u);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E8410u) [[unlikely]] return; }
L_001E8410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xD62F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xD62F0000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 24624ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 24624ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8444u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8444u) [[unlikely]] return; }
L_001E8444:
    set32(c.r[4], 0u + 16460u);
    set32(c.r[5], 0u + 16460u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E845Cu);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E845Cu) [[unlikely]] return; }
L_001E845C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 44153ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 44153ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8490u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8490u) [[unlikely]] return; }
L_001E8490:
    set32(c.r[4], 0u + 16460u);
    set32(c.r[5], 0u + 16460u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E84A8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E84A8u) [[unlikely]] return; }
L_001E84A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 28787ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 28787ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E84DCu);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E84DCu) [[unlikely]] return; }
L_001E84DC:
    set32(c.r[4], 0u + 16460u);
    set32(c.r[5], 0u + 16460u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E84F4u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E84F4u) [[unlikely]] return; }
L_001E84F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE5F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61850ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8510u);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E8510u) [[unlikely]] return; }
L_001E8510:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[4], 0u + 16459u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8530u);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E8530u) [[unlikely]] return; }
L_001E8530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 28787ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E854Cu);  if (depth < kMaxDepth) unit_009C(c, 247u, depth + 1u); else { c.pc = 0x00372DB0u; return; } if (c.pc != 0x001E854Cu) [[unlikely]] return; }
L_001E854C:
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], 0u + 16461u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E855Cu);  if (depth < kMaxDepth) unit_009C(c, 248u, depth + 1u); else { c.pc = 0x00372DE0u; return; } if (c.pc != 0x001E855Cu) [[unlikely]] return; }
L_001E855C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8564u);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E8564u) [[unlikely]] return; }
L_001E8564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 5216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8578u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E8578u) [[unlikely]] return; }
L_001E8578:
    set32(c.r[4], 0u + 16450u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8598u);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E8598u) [[unlikely]] return; }
L_001E8598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1A740000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x1A740000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 33180ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 33180ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E85CCu);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E85CCu) [[unlikely]] return; }
L_001E85CC:
    set32(c.r[4], 0u + 16450u);
    set32(c.r[5], 0u + 16450u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E85E4u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E85E4u) [[unlikely]] return; }
L_001E85E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x683E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x683E0000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 38349ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 38349ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8618u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8618u) [[unlikely]] return; }
L_001E8618:
    set32(c.r[4], 0u + 16451u);
    set32(c.r[5], 0u + 16451u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8630u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8630u) [[unlikely]] return; }
L_001E8630:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x6CB40000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x6CB40000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 2325ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 2325ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8664u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8664u) [[unlikely]] return; }
L_001E8664:
    set32(c.r[4], 0u + 16449u);
    set32(c.r[5], 0u + 16449u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E867Cu);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E867Cu) [[unlikely]] return; }
L_001E867C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x8F4A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 64252ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8698u);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E8698u) [[unlikely]] return; }
L_001E8698:
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 16450u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86B8u);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E86B8u) [[unlikely]] return; }
L_001E86B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86C0u);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E86C0u) [[unlikely]] return; }
L_001E86C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 5232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86D4u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E86D4u) [[unlikely]] return; }
L_001E86D4:
    set32(c.r[4], 0u + 16450u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86F4u);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E86F4u) [[unlikely]] return; }
L_001E86F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 38100ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 38100ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8728u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8728u) [[unlikely]] return; }
L_001E8728:
    set32(c.r[4], 0u + 16450u);
    set32(c.r[5], 0u + 16450u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8740u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8740u) [[unlikely]] return; }
L_001E8740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 18742ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 18742ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8774u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8774u) [[unlikely]] return; }
L_001E8774:
    set32(c.r[4], 0u + 16451u);
    set32(c.r[5], 0u + 16451u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E878Cu);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E878Cu) [[unlikely]] return; }
L_001E878C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 60476ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60476ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87C0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E87C0u) [[unlikely]] return; }
L_001E87C0:
    set32(c.r[4], 0u + 16449u);
    set32(c.r[5], 0u + 16449u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87D8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E87D8u) [[unlikely]] return; }
L_001E87D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDA370000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61830ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87F4u);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E87F4u) [[unlikely]] return; }
L_001E87F4:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 16450u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8814u);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E8814u) [[unlikely]] return; }
L_001E8814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E881Cu);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E881Cu) [[unlikely]] return; }
L_001E881C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 5248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8830u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E8830u) [[unlikely]] return; }
L_001E8830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x28510000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60916ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E884Cu);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E884Cu) [[unlikely]] return; }
L_001E884C:
    set32(c.r[4], 0u + 16493u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E886Cu);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E886Cu) [[unlikely]] return; }
L_001E886C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 38100ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 38100ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E88A0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E88A0u) [[unlikely]] return; }
L_001E88A0:
    set32(c.r[4], 0u + 16494u);
    set32(c.r[5], 0u + 16494u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E88B8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E88B8u) [[unlikely]] return; }
L_001E88B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 18742ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 18742ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E88ECu);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E88ECu) [[unlikely]] return; }
L_001E88EC:
    set32(c.r[4], 0u + 16494u);
    set32(c.r[5], 0u + 16494u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8904u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8904u) [[unlikely]] return; }
L_001E8904:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 60476ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60476ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8938u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8938u) [[unlikely]] return; }
L_001E8938:
    set32(c.r[4], 0u + 16496u);
    set32(c.r[5], 0u + 16496u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8950u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8950u) [[unlikely]] return; }
L_001E8950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDA370000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61830ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E896Cu);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E896Cu) [[unlikely]] return; }
L_001E896C:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 16493u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E898Cu);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E898Cu) [[unlikely]] return; }
L_001E898C:
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], 0u + 16495u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E899Cu);  if (depth < kMaxDepth) unit_009C(c, 248u, depth + 1u); else { c.pc = 0x00372DE0u; return; } if (c.pc != 0x001E899Cu) [[unlikely]] return; }
L_001E899C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E89A4u);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E89A4u) [[unlikely]] return; }
L_001E89A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 5264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E89B8u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E89B8u) [[unlikely]] return; }
L_001E89B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x28510000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60916ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E89D4u);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E89D4u) [[unlikely]] return; }
L_001E89D4:
    set32(c.r[4], 0u + 16507u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 16483u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 16497u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E89F4u);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E89F4u) [[unlikely]] return; }
L_001E89F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 38100ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 38100ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A28u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8A28u) [[unlikely]] return; }
L_001E8A28:
    set32(c.r[4], 0u + 16508u);
    set32(c.r[5], 0u + 16508u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A40u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8A40u) [[unlikely]] return; }
L_001E8A40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 18742ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 18742ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A74u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8A74u) [[unlikely]] return; }
L_001E8A74:
    set32(c.r[4], 0u + 16508u);
    set32(c.r[5], 0u + 16508u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A8Cu);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8A8Cu) [[unlikely]] return; }
L_001E8A8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 60476ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60476ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8AC0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8AC0u) [[unlikely]] return; }
L_001E8AC0:
    set32(c.r[4], 0u + 16509u);
    set32(c.r[5], 0u + 16509u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8AD8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8AD8u) [[unlikely]] return; }
L_001E8AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDA370000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61830ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8AF4u);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E8AF4u) [[unlikely]] return; }
L_001E8AF4:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 16507u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B14u);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E8B14u) [[unlikely]] return; }
L_001E8B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B1Cu);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E8B1Cu) [[unlikely]] return; }
L_001E8B1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 5288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B30u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E8B30u) [[unlikely]] return; }
L_001E8B30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x28510000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60916ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B4Cu);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E8B4Cu) [[unlikely]] return; }
L_001E8B4C:
    set32(c.r[4], 0u + 16386u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 16483u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 16393u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B6Cu);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E8B6Cu) [[unlikely]] return; }
L_001E8B6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30E80000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 38100ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 38100ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BA0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8BA0u) [[unlikely]] return; }
L_001E8BA0:
    set32(c.r[4], 0u + 16384u);
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BB8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8BB8u) [[unlikely]] return; }
L_001E8BB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x9B000000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 18742ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 18742ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BECu);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8BECu) [[unlikely]] return; }
L_001E8BEC:
    set32(c.r[4], 0u + 16384u);
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C04u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8C04u) [[unlikely]] return; }
L_001E8C04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xDC310000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 60476ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 60476ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C38u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8C38u) [[unlikely]] return; }
L_001E8C38:
    set32(c.r[4], 0u + 16391u);
    set32(c.r[5], 0u + 16391u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C50u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8C50u) [[unlikely]] return; }
L_001E8C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xDA370000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61830ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C6Cu);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E8C6Cu) [[unlikely]] return; }
L_001E8C6C:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 16386u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C8Cu);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E8C8Cu) [[unlikely]] return; }
L_001E8C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C94u);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E8C94u) [[unlikely]] return; }
L_001E8C94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 5312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CA8u);  if (depth < kMaxDepth) unit_009C(c, 197u, depth + 1u); else { c.pc = 0x00372608u; return; } if (c.pc != 0x001E8CA8u) [[unlikely]] return; }
L_001E8CA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE5F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61850ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CC4u);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003728C0u; return; } if (c.pc != 0x001E8CC4u) [[unlikely]] return; }
L_001E8CC4:
    set32(c.r[4], 0u + 96u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CE4u);  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x003728F0u; return; } if (c.pc != 0x001E8CE4u) [[unlikely]] return; }
L_001E8CE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xD62F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xD62F0000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[8].d[0] | 24624ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 24624ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D18u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8D18u) [[unlikely]] return; }
L_001E8D18:
    set32(c.r[4], 0u + 55u);
    set32(c.r[5], 0u + 55u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D30u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8D30u) [[unlikely]] return; }
L_001E8D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 44153ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 44153ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D64u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8D64u) [[unlikely]] return; }
L_001E8D64:
    set32(c.r[4], 0u + 55u);
    set32(c.r[5], 0u + 55u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D7Cu);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8D7Cu) [[unlikely]] return; }
L_001E8D7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 28787ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 28787ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DB0u);  if (depth < kMaxDepth) unit_009C(c, 189u, depth + 1u); else { c.pc = 0x003724A8u; return; } if (c.pc != 0x001E8DB0u) [[unlikely]] return; }
L_001E8DB0:
    set32(c.r[4], 0u + 55u);
    set32(c.r[5], 0u + 55u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DC8u);  if (depth < kMaxDepth) unit_009C(c, 190u, depth + 1u); else { c.pc = 0x00372510u; return; } if (c.pc != 0x001E8DC8u) [[unlikely]] return; }
L_001E8DC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE5F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 61850ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DE4u);  if (depth < kMaxDepth) unit_009C(c, 241u, depth + 1u); else { c.pc = 0x00372CD0u; return; } if (c.pc != 0x001E8DE4u) [[unlikely]] return; }
L_001E8DE4:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[4], 0u + 96u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E04u);  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00372D00u; return; } if (c.pc != 0x001E8E04u) [[unlikely]] return; }
L_001E8E04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC80F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 28787ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E20u);  if (depth < kMaxDepth) unit_009C(c, 247u, depth + 1u); else { c.pc = 0x00372DB0u; return; } if (c.pc != 0x001E8E20u) [[unlikely]] return; }
L_001E8E20:
    set32(c.r[4], 0u + 82u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E30u);  if (depth < kMaxDepth) unit_009C(c, 248u, depth + 1u); else { c.pc = 0x00372DE0u; return; } if (c.pc != 0x001E8E30u) [[unlikely]] return; }
L_001E8E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E38u);  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00372648u; return; } if (c.pc != 0x001E8E38u) [[unlikely]] return; }
L_001E8E38:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E80u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E8E80u) [[unlikely]] return; }
L_001E8E80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E90u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x001E8E90u) [[unlikely]] return; }
L_001E8E90:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E9Cu);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001E8E9Cu) [[unlikely]] return; }
L_001E8E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8F28; } }
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8EBC; } }
    set32(c.r[17], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8EDC; } }
L_001E8EBC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_001E8ED0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8EDC; } }
L_001E8ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8ED8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E8ED8u) [[unlikely]] return; }
L_001E8ED8:
    st32((c.r[2].w[0] + 144u), c.r[17].w[0]);
    c.budget -= 1;
L_001E8EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EE4u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E8EE4u) [[unlikely]] return; }
L_001E8EE4:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[18].w[0] + 928u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 928u), c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F10u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E8F10u) [[unlikely]] return; }
L_001E8F10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F20u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E8F20u) [[unlikely]] return; }
L_001E8F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8F84; } }
L_001E8F28:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8F40; } }
    set32(c.r[17], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8F60; } }
L_001E8F40:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_001E8F54; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8F60; } }
L_001E8F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F5Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E8F5Cu) [[unlikely]] return; }
L_001E8F5C:
    st32((c.r[2].w[0] + 144u), c.r[17].w[0]);
    c.budget -= 1;
L_001E8F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F68u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E8F68u) [[unlikely]] return; }
L_001E8F68:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 928u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F84u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E8F84u) [[unlikely]] return; }
L_001E8F84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8FA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FC8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E8FC8u) [[unlikely]] return; }
L_001E8FC8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8FE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90B0; } }
L_001E8FE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FF8u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E8FF8u) [[unlikely]] return; }
L_001E8FF8:
    set32(c.r[2], ld32((c.r[2].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90E0; } }
L_001E9004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E900Cu);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001E900Cu) [[unlikely]] return; }
L_001E900C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E90B4; } }
    set32(c.r[16], c.r[19].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9028u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E9028u) [[unlikely]] return; }
L_001E9028:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9038u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x001E9038u) [[unlikely]] return; }
L_001E9038:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 920u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 920u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E907C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9064u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E9064u) [[unlikely]] return; }
L_001E9064:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9074u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E9074u) [[unlikely]] return; }
L_001E9074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90B4; } }
L_001E907C:
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9098u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E9098u) [[unlikely]] return; }
L_001E9098:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90A8u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E90A8u) [[unlikely]] return; }
L_001E90A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90B4; } }
L_001E90B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 1;
L_001E90B4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90C8u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E90C8u) [[unlikely]] return; }
L_001E90C8:
    set32(c.r[17], ld32((c.r[2].w[0] + 920u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90D8u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x001E90D8u) [[unlikely]] return; }
L_001E90D8:
    set32(c.r[3], ld32((c.r[2].w[0] + 920u)));
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001E90E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 56u), c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9124u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9124u) [[unlikely]] return; }
L_001E9124:
    set32(c.r[16], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9130u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9130u) [[unlikely]] return; }
L_001E9130:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9140u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E9140u) [[unlikely]] return; }
L_001E9140:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E9160; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E91EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E92B4; } }
L_001E9160:
    c.f[21] = c.r[17].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E917Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E917Cu) [[unlikely]] return; }
L_001E917C:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E91A4; } }
    c.f[21] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E91B8; } }
L_001E91A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91ACu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E91ACu) [[unlikely]] return; }
L_001E91AC:
    st32((c.r[2].w[0] + 140u), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E91C4; } }
L_001E91B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91C0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E91C0u) [[unlikely]] return; }
L_001E91C0:
    st32((c.r[2].w[0] + 140u), c.f[20]);
    c.budget -= 1;
L_001E91C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91CCu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E91CCu) [[unlikely]] return; }
L_001E91CC:
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91E4u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E91E4u) [[unlikely]] return; }
L_001E91E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E92B4; } }
L_001E91EC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[21] = c.r[17].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E920Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E920Cu) [[unlikely]] return; }
L_001E920C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E921Cu);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x001E921Cu) [[unlikely]] return; }
L_001E921C:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E9244; } }
    c.f[21] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9258; } }
L_001E9244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E924Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E924Cu) [[unlikely]] return; }
L_001E924C:
    st32((c.r[2].w[0] + 140u), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9264; } }
L_001E9258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9260u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9260u) [[unlikely]] return; }
L_001E9260:
    st32((c.r[2].w[0] + 140u), c.f[20]);
    c.budget -= 1;
L_001E9264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E926Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E926Cu) [[unlikely]] return; }
L_001E926C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9290u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E9290u) [[unlikely]] return; }
L_001E9290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9298u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9298u) [[unlikely]] return; }
L_001E9298:
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E92B4u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001E92B4u) [[unlikely]] return; }
L_001E92B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E92D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9300u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001E9300u) [[unlikely]] return; }
L_001E9300:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E930Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E930Cu) [[unlikely]] return; }
L_001E930C:
    set32(c.r[16], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9318u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9318u) [[unlikely]] return; }
L_001E9318:
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E936C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9334u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9334u) [[unlikely]] return; }
L_001E9334:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9340u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9340u) [[unlikely]] return; }
L_001E9340:
    set32(c.r[16], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E934Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E934Cu) [[unlikely]] return; }
L_001E934C:
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E93A0; } }
L_001E936C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001E9388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E937Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E937Cu) [[unlikely]] return; }
L_001E937C:
    st32((c.r[2].w[0] + 152u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E93A0; } }
L_001E9388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9390u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E9390u) [[unlikely]] return; }
L_001E9390:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 152u), c.f[0]);
    c.budget -= 4;
L_001E93A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E93A8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E93A8u) [[unlikely]] return; }
L_001E93A8:
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[18].w[0] + 932u), c.f[1]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E93D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 7192u);
    st32((c.r[29].w[0] + 136u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.f[21] = ld32((c.r[16].w[0] + 11324u));
    c.f[20] = 0u;
    c.f[22] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = c.f[21];
    c.f[12] = c.f[20];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E941Cu);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001E941Cu) [[unlikely]] return; }
L_001E941C:
    c.f[2] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9450; } }
    c.f[0] = fp::mul(c.f[2], c.f[22]);
    c.f[12] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9454; } }
L_001E9450:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_001E9454:
    c.f[0] = ld32((c.r[16].w[0] + 11320u));
    c.f[20] = 0u;
    st32((c.r[16].w[0] + 11324u), c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E94CC; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9484u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001E9484u) [[unlikely]] return; }
L_001E9484:
    c.f[12] = ld32((c.r[16].w[0] + 11320u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94B8u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x001E94B8u) [[unlikely]] return; }
L_001E94B8:
    set32(c.r[4], c.r[16].w[0] + 336u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94CCu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x001E94CCu) [[unlikely]] return; }
L_001E94CC:
    c.f[12] = ld32((c.r[16].w[0] + 12920u));
    c.f[13] = ld32((c.r[16].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E94FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E951C; } }
L_001E94FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E951C; } }
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 1;
L_001E951C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E954C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E956C; } }
L_001E954C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E956C; } }
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 1;
L_001E956C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9574u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001E9574u) [[unlikely]] return; }
L_001E9574:
    c.f[3] = c.f[0];
    set32(c.r[2], c.r[17].w[0] - 7192u);
    c.f[1] = c.f[3] & fp::kAbs;
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9620; } }
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[16].w[0] + 11324u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[4] = ld32((c.r[2].w[0] + 28u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E95DC; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E961C; } }
L_001E95DC:
    c.f[1] = fp::sub(c.f[0], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E961C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[2] = c.f[4];
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E961C; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001E961C:
    st32((c.r[16].w[0] + 11324u), c.f[2]);
    c.budget -= 1;
L_001E9620:
    c.f[22] = ld32((c.r[16].w[0] + 11320u));
    set32(c.r[2], c.r[17].w[0] - 7192u);
    c.f[21] = ld32((c.r[16].w[0] + 11324u));
    c.f[20] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = c.f[22];
    c.f[23] = ld32((c.r[2].w[0] + 16u));
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9644u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001E9644u) [[unlikely]] return; }
L_001E9644:
    c.f[2] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9678; } }
    c.f[0] = fp::mul(c.f[2], c.f[23]);
    c.f[12] = fp::add(c.f[22], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E967C; } }
L_001E9678:
    c.f[12] = c.f[21];
    c.budget -= 1;
L_001E967C:
    c.f[0] = ld32((c.r[16].w[0] + 12920u));
    st32((c.r[16].w[0] + 11320u), c.f[12]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[23] = ld32((c.r[29].w[0] + 136u));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E96B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[21]);
    set32(c.r[19], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 136u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_001E9708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9700u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x001E9700u) [[unlikely]] return; }
L_001E9700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9718; } }
L_001E9708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E971C; } }
L_001E9718:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001E971C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E9744; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9738u);  if (depth < kMaxDepth) unit_006E(c, 124u, depth + 1u); else { c.pc = 0x002B9890u; return; } if (c.pc != 0x001E9738u) [[unlikely]] return; }
L_001E9738:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9750; } }
L_001E9744:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9930; } }
L_001E9750:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u - 1u);
    c.f[20] = ld32((c.r[18].w[0] + 12888u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    c.f[12] = c.f[21];
    c.f[22] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E978Cu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001E978Cu) [[unlikely]] return; }
L_001E978C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[16], c.r[18].w[0] + 13024u);
    c.f[14] = ld32((c.r[29].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.f[13] = c.f[22];
    c.f[14] = fp::mul(c.f[20], c.f[14]);
    c.f[15] = c.f[21];
    set32(c.r[17], c.r[18].w[0] + 336u);
    c.f[23] = c.f[22];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E97C4u) [[unlikely]] return; }
L_001E97C4:
    c.f[12] = ld32((c.r[18].w[0] + 11568u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0] + 11572u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[18].w[0] + 11576u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E97E0u) [[unlikely]] return; }
L_001E97E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97F4u);  if (depth < kMaxDepth) unit_008A(c, 195u, depth + 1u); else { c.pc = 0x0032AC00u; return; } if (c.pc != 0x001E97F4u) [[unlikely]] return; }
L_001E97F4:
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12888u));
    st32((c.r[18].w[0] + 13036u), c.f[21]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 13028u), c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 12892u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9820u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001E9820u) [[unlikely]] return; }
L_001E9820:
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9850u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001E9850u) [[unlikely]] return; }
L_001E9850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9870; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23012u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E98C0; } }
L_001E9870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E98AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 13024u));
    c.f[2] = ld32((c.r[18].w[0] + 13028u));
    c.f[3] = ld32((c.r[18].w[0] + 13032u));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.f[23] = fp::mul(c.f[2], c.f[0]);
    c.f[20] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E98CC; } }
L_001E98AC:
    c.f[12] = c.f[23];
    c.f[20] = c.f[12];
    c.f[23] = c.f[20];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E98CC; } }
L_001E98C0:
    c.f[12] = ld32((c.r[18].w[0] + 13024u));
    c.f[23] = ld32((c.r[18].w[0] + 13028u));
    c.f[20] = ld32((c.r[18].w[0] + 13032u));
    c.budget -= 3;
L_001E98CC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98E4u);  if (depth < kMaxDepth) unit_0088(c, 324u, depth + 1u); else { c.pc = 0x00323C40u; return; } if (c.pc != 0x001E98E4u) [[unlikely]] return; }
L_001E98E4:
    c.f[12] = c.f[23];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98F8u);  if (depth < kMaxDepth) unit_0088(c, 325u, depth + 1u); else { c.pc = 0x00323CA8u; return; } if (c.pc != 0x001E98F8u) [[unlikely]] return; }
L_001E98F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E990Cu);  if (depth < kMaxDepth) unit_0088(c, 326u, depth + 1u); else { c.pc = 0x00323D10u; return; } if (c.pc != 0x001E990Cu) [[unlikely]] return; }
L_001E990C:
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    set32(c.r[3], c.r[18].w[0] + 12992u);
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 12992u), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 9;
L_001E9930:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 136u));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9960:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[23]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], c.r[3].w[0] - 106u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A08; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E9A14; } }
L_001E9A08:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9A3C; } }
L_001E9A14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A28u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001E9A28u) [[unlikely]] return; }
L_001E9A28:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9A3C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 2;
L_001E9A3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9A50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA1AC; } }
L_001E9A50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A64u);  if (depth < kMaxDepth) unit_006F(c, 183u, depth + 1u); else { c.pc = 0x002BFA00u; return; } if (c.pc != 0x001E9A64u) [[unlikely]] return; }
L_001E9A64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.f[23] = ld32((c.r[17].w[0] + 12920u));
    set32(c.r[2], 0u + 118u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9ACC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9A9C; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9AB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9AE4; } }
L_001E9A9C:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E9AE4; } }
    c.f[22] = ld32((c.r[17].w[0] + 11304u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9AE8; } }
L_001E9AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[2].w[0] - 7192u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[22] = ld32((c.r[3].w[0] + 48u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9AEC; } }
L_001E9ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[2].w[0] - 7192u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[22] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9AEC; } }
L_001E9AE4:
    c.f[22] = 0u;
    c.budget -= 1;
L_001E9AE8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.budget -= 1;
L_001E9AEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 147u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E9D38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[16].w[0] - 7192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[2].w[0] + 28u), c.f[0]);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E9D28; } }
    c.f[22] = ld32((c.r[17].w[0] + 11304u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B34u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E9B34u) [[unlikely]] return; }
L_001E9B34:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B4Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001E9B4Cu) [[unlikely]] return; }
L_001E9B4C:
    c.f[0] = 0u;
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9BD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9BA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9BCC; } }
L_001E9BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9BCC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
L_001E9BCC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9D1C; } }
L_001E9BD8:
    c.f[20] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9C04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9C24; } }
L_001E9C04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9C24; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_001E9C24:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9C54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9C74; } }
L_001E9C54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9C74; } }
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_001E9C74:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C84u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001E9C84u) [[unlikely]] return; }
L_001E9C84:
    c.f[12] = c.f[0];
    c.f[0] = c.f[12] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9CA8; } }
    c.f[20] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9CB8; } }
L_001E9CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CB0u);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BFD88u; return; } if (c.pc != 0x001E9CB0u) [[unlikely]] return; }
L_001E9CB0:
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_001E9CB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9CEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9D18; } }
L_001E9CEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9D18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_001E9D18:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_001E9D1C:
    st32((c.r[17].w[0] + 12920u), c.f[12]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9FA0; } }
L_001E9D28:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9FA0; } }
L_001E9D38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[16].w[0] - 7192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[2].w[0] + 28u), c.f[0]);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E9F60; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D6Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E9D6Cu) [[unlikely]] return; }
L_001E9D6C:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D84u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001E9D84u) [[unlikely]] return; }
L_001E9D84:
    c.f[0] = 0u;
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9E10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9DD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9E04; } }
L_001E9DD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9E04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
L_001E9E04:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9F54; } }
L_001E9E10:
    c.f[20] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9E3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9E5C; } }
L_001E9E3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9E5C; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_001E9E5C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9E8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9EAC; } }
L_001E9E8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9EAC; } }
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_001E9EAC:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EBCu);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001E9EBCu) [[unlikely]] return; }
L_001E9EBC:
    c.f[12] = c.f[0];
    c.f[0] = c.f[12] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9EE0; } }
    c.f[20] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9EF0; } }
L_001E9EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EE8u);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BFD88u; return; } if (c.pc != 0x001E9EE8u) [[unlikely]] return; }
L_001E9EE8:
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_001E9EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9F24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9F50; } }
L_001E9F24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9F50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_001E9F50:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_001E9F54:
    st32((c.r[17].w[0] + 12920u), c.f[12]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9F68; } }
L_001E9F60:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 2;
L_001E9F68:
    c.f[0] = ld32((c.r[17].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    st32((c.r[17].w[0] + 11308u), c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9FA0; } }
    set32(c.r[2], c.r[16].w[0] - 7192u);
    c.f[0] = ld32((c.r[17].w[0] + 12920u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 11312u), c.f[0]);
    st32((c.r[17].w[0] + 11308u), c.f[1]);
    c.budget -= 5;
L_001E9FA0:
    c.f[0] = ld32((c.r[17].w[0] + 12920u));
    c.f[13] = c.f[23];
    c.f[12] = c.f[0];
    st32((c.r[17].w[0] + 11312u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9FB8u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001E9FB8u) [[unlikely]] return; }
L_001E9FB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 147u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA074; } }
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[2], c.r[16].w[0] - 7192u);
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA074; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12870u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA074; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 324u), 0u);
    st32((c.r[17].w[0] + 11324u), 0u);
    st32((c.r[17].w[0] + 11320u), 0u);
    st32((c.r[17].w[0] + 11328u), c.f[0]);
    c.f[20] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA028u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001EA028u) [[unlikely]] return; }
L_001EA028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA168; } }
    set32(c.r[16], c.r[17].w[0] + 336u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA040u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EA040u) [[unlikely]] return; }
L_001EA040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA06Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EA06Cu) [[unlikely]] return; }
L_001EA06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA168; } }
L_001EA074:
    c.f[12] = ld32((c.r[17].w[0] + 12920u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA084u);  if (depth < kMaxDepth) unit_003A(c, 181u, depth + 1u); else { c.pc = 0x001E96B0u; return; } if (c.pc != 0x001EA084u) [[unlikely]] return; }
L_001EA084:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA0A0; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EA0FC; } }
L_001EA0A0:
    c.f[12] = ld32((c.r[17].w[0] + 11312u));
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0B0u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001EA0B0u) [[unlikely]] return; }
L_001EA0B0:
    c.f[1] = ld32((c.r[17].w[0] + 11328u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA0E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0D8u);  if (depth < kMaxDepth) unit_003A(c, 174u, depth + 1u); else { c.pc = 0x001E93D0u; return; } if (c.pc != 0x001EA0D8u) [[unlikely]] return; }
L_001EA0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA168; } }
L_001EA0E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 11328u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA168; } }
L_001EA0FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 324u), 0u);
    st32((c.r[17].w[0] + 11324u), 0u);
    st32((c.r[17].w[0] + 11320u), 0u);
    st32((c.r[17].w[0] + 11328u), c.f[0]);
    c.f[20] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA124u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001EA124u) [[unlikely]] return; }
L_001EA124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA168; } }
    set32(c.r[16], c.r[17].w[0] + 336u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA13Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EA13Cu) [[unlikely]] return; }
L_001EA13C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA168u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EA168u) [[unlikely]] return; }
L_001EA168:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA174u);  if (depth < kMaxDepth) unit_006E(c, 55u, depth + 1u); else { c.pc = 0x002B8A20u; return; } if (c.pc != 0x001EA174u) [[unlikely]] return; }
L_001EA174:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EA1A0; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[4].w[0] + 12920u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1A0u);  if (depth < kMaxDepth) unit_003A(c, 181u, depth + 1u); else { c.pc = 0x001E96B0u; return; } if (c.pc != 0x001EA1A0u) [[unlikely]] return; }
L_001EA1A0:
    c.f[0] = ld32((c.r[17].w[0] + 12920u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 3;
L_001EA1AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA1D8:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 148u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EA3F0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EA22C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], 0u + 149u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA3F0; } }
L_001EA22C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 23728u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA270u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x001EA270u) [[unlikely]] return; }
L_001EA270:
    set32(c.r[17], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 148u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA288u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EA288u) [[unlikely]] return; }
L_001EA288:
    c.f[12] = ld32((c.r[18].w[0] + 11888u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[13] = ld32((c.r[18].w[0] + 11892u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[18].w[0] + 11896u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2B4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA2B4u) [[unlikely]] return; }
L_001EA2B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2C0u);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x001EA2C0u) [[unlikely]] return; }
L_001EA2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[18].w[0] + 336u);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2F0u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EA2F0u) [[unlikely]] return; }
L_001EA2F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 23724u));
    set32(c.r[5], c.r[18].w[0] + 11888u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA308u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EA308u) [[unlikely]] return; }
L_001EA308:
    c.f[20] = ld32((c.r[29].w[0]));
    set32(c.r[5], c.r[18].w[0] + 11856u);
    c.f[0] = ld32((c.r[18].w[0] + 11872u));
    set32(c.r[6], c.r[18].w[0] + 11872u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA32Cu);  if (depth < kMaxDepth) unit_0070(c, 84u, depth + 1u); else { c.pc = 0x002C1060u; return; } if (c.pc != 0x001EA32Cu) [[unlikely]] return; }
L_001EA32C:
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[20];
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.f[14] = ld32((c.r[18].w[0] + 11880u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.f[15] = c.f[21];
    c.f[14] = fp::add(c.f[1], c.f[14]);
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA364u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA364u) [[unlikely]] return; }
L_001EA364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA36Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EA36Cu) [[unlikely]] return; }
L_001EA36C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA3FC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA388u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x001EA388u) [[unlikely]] return; }
L_001EA388:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 148u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA3FC; } }
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 124u), c.f[21]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3D4u);  if (depth < kMaxDepth) unit_007A(c, 172u, depth + 1u); else { c.pc = 0x002E9FD0u; return; } if (c.pc != 0x001EA3D4u) [[unlikely]] return; }
L_001EA3D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA3FC; } }
L_001EA3F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA43C; } }
L_001EA3FC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 23728u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA410u);  if (depth < kMaxDepth) unit_003B(c, 304u, depth + 1u); else { c.pc = 0x001EF8E8u; return; } if (c.pc != 0x001EA410u) [[unlikely]] return; }
L_001EA410:
    st32((c.r[18].w[0] + 208u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 212u), 0u);
    st32((c.r[18].w[0] + 216u), 0u);
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 13128u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA438u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001EA438u) [[unlikely]] return; }
L_001EA438:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EA43C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA468:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 148u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[20], c.r[3].w[0] - 1u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EA4CC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EA4D8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], 0u + 149u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EA4D8; } }
L_001EA4CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA678; } }
L_001EA4D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[17], 0u + 880u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[21] = 0u;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 4440u);
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA518u);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x001EA518u) [[unlikely]] return; }
L_001EA518:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 23732u)));
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[18].w[0] + 23728u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 592u)));
    st32((c.r[19].w[0] + 76u), c.r[8].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA548u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x001EA548u) [[unlikely]] return; }
L_001EA548:
    set32(c.r[17], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 148u);
    st32((c.r[19].w[0] + 7700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA560u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EA560u) [[unlikely]] return; }
L_001EA560:
    c.f[12] = ld32((c.r[19].w[0] + 11888u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[13] = ld32((c.r[19].w[0] + 11892u));
    c.f[15] = c.f[22];
    c.f[14] = ld32((c.r[19].w[0] + 11896u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA58Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA58Cu) [[unlikely]] return; }
L_001EA58C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA598u);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x001EA598u) [[unlikely]] return; }
L_001EA598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[19].w[0] + 336u);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA5C8u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EA5C8u) [[unlikely]] return; }
L_001EA5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 23724u));
    set32(c.r[5], c.r[19].w[0] + 11888u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA5E0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EA5E0u) [[unlikely]] return; }
L_001EA5E0:
    c.f[20] = ld32((c.r[29].w[0]));
    set32(c.r[5], c.r[19].w[0] + 11856u);
    c.f[0] = ld32((c.r[19].w[0] + 11872u));
    set32(c.r[6], c.r[19].w[0] + 11872u);
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA604u);  if (depth < kMaxDepth) unit_0070(c, 84u, depth + 1u); else { c.pc = 0x002C1060u; return; } if (c.pc != 0x001EA604u) [[unlikely]] return; }
L_001EA604:
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[12] = c.f[20];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.f[14] = ld32((c.r[19].w[0] + 11880u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    c.f[15] = c.f[22];
    c.f[14] = fp::add(c.f[1], c.f[14]);
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA638u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA638u) [[unlikely]] return; }
L_001EA638:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 23728u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA64Cu);  if (depth < kMaxDepth) unit_003B(c, 304u, depth + 1u); else { c.pc = 0x001EF8E8u; return; } if (c.pc != 0x001EA64Cu) [[unlikely]] return; }
L_001EA64C:
    st32((c.r[19].w[0] + 216u), c.f[21]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 208u), c.f[21]);
    st32((c.r[19].w[0] + 212u), c.f[21]);
    st16((c.r[19].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 13128u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA674u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001EA674u) [[unlikely]] return; }
L_001EA674:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EA678:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA6A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23744u)));
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 712u), c.f[21]);
    st32((c.r[29].w[0] + 704u), c.f[20]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA884; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], 0u + 268u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[21], c.r[16].w[0] - 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 13352u)));
    set32(c.r[17], c.r[17].w[0] - 14152u);
    c.f[0] = ld32((c.r[2].w[0] + 23740u));
    set32(c.r[20], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 23744u), c.r[2].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 23748u), c.f[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA75Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001EA75Cu) [[unlikely]] return; }
L_001EA75C:
    set32(c.r[18], c.r[23].w[0] + 10336u);
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.f[15] = c.f[21];
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA780u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA780u) [[unlikely]] return; }
L_001EA780:
    set32(c.r[2], ld32((c.r[21].w[0] + 26600u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[10], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 13248u);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7B4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001EA7B4u) [[unlikely]] return; }
L_001EA7B4:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA7D0u) [[unlikely]] return; }
L_001EA7D0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[12] = c.f[20];
    set32(c.r[17], c.r[17].w[0] + 10304u);
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[15] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7F4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA7F4u) [[unlikely]] return; }
L_001EA7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[1] = ld32((c.r[19].w[0] + 23748u));
    c.f[2] = ld32((c.r[2].w[0] + 23752u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[12] = c.f[20];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[16], c.r[16].w[0] + 10320u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA834u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EA834u) [[unlikely]] return; }
L_001EA834:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = ld32((c.r[19].w[0] + 23748u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA84Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001EA84Cu) [[unlikely]] return; }
L_001EA84C:
    fpu_div(c, 12u, c.f[21], c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA868u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EA868u) [[unlikely]] return; }
L_001EA868:
    c.f[2] = ld32((c.r[23].w[0] + 10336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[3], c.r[2].w[0] + 10288u);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA958; } }
L_001EA884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 23748u));
    c.f[1] = 0u;
    c.f[12] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    st32((c.r[2].w[0] + 23748u), c.f[12]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA96C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = ld32((c.r[2].w[0] + 23740u));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    set32(c.r[17], c.r[18].w[0] + 10336u);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA8E0u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x001EA8E0u) [[unlikely]] return; }
L_001EA8E0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[20] = ld32((c.r[2].w[0] + 23736u));
    set32(c.r[16], c.r[16].w[0] + 10320u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA920u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001EA920u) [[unlikely]] return; }
L_001EA920:
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA940u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001EA940u) [[unlikely]] return; }
L_001EA940:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[2] = ld32((c.r[18].w[0] + 10336u));
    set32(c.r[3], c.r[2].w[0] + 10288u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 6;
L_001EA958:
    st32((c.r[2].w[0] + 10288u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA970; } }
L_001EA96C:
    st32((c.r[4].w[0] + 23744u), 0u);
    c.budget -= 1;
L_001EA970:
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.f[21] = ld32((c.r[29].w[0] + 712u));
    c.f[20] = ld32((c.r[29].w[0] + 704u));
    set32(c.r[29], c.r[29].w[0] + 720u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA9A8:
    set32(c.r[29], c.r[29].w[0] - 656u);
    set32(c.r[6], 0u + 268u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 640u), c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA04u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001EAA04u) [[unlikely]] return; }
L_001EAA04:
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAAF4; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EAAF4; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EAAF4; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EAAF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 528u);
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[18], c.r[17].w[0] + 12960u);
    set32(c.r[19], c.r[17].w[0] + 12976u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA64u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EAA64u) [[unlikely]] return; }
L_001EAA64:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA78u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001EAA78u) [[unlikely]] return; }
L_001EAA78:
    set32(c.r[16], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA8Cu);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x001EAA8Cu) [[unlikely]] return; }
L_001EAA8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 23768u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EAAC0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAAC0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EAAC0u) [[unlikely]] return; }
L_001EAAC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAACCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001EAACCu) [[unlikely]] return; }
L_001EAACC:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 12936u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAAECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EAAECu) [[unlikely]] return; }
L_001EAAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAB30; } }
L_001EAAF4:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[17].w[0] + 12976u);
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB14u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EAB14u) [[unlikely]] return; }
L_001EAB14:
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    st32((c.r[17].w[0] + 12936u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAB30; } }
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    c.budget -= 3;
L_001EAB30:
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.f[20] = ld32((c.r[29].w[0] + 640u));
    set32(c.r[29], c.r[29].w[0] + 656u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EAB58:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 40u));
    st16((c.r[17].w[0] + 7690u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 7688u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    st16((c.r[17].w[0] + 7692u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EABCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EABCC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001EABCC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001EABE8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EABFC; } }
L_001EABE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABF8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001EABF8u) [[unlikely]] return; }
L_001EABF8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EABFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAEFC; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 32u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC2Cu);  if (depth < kMaxDepth) unit_002F(c, 159u, depth + 1u); else { c.pc = 0x001BDDD0u; return; } if (c.pc != 0x001EAC2Cu) [[unlikely]] return; }
L_001EAC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAC88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAC7C; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_001EAC68; } }
    c.r[5].d[0] = ~(0ull | c.r[22].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC5Cu);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x001EAC5Cu) [[unlikely]] return; }
L_001EAC5C:
    set32(c.r[22], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAC7C; } }
L_001EAC68:
    set32(c.r[5], c.r[22].w[0] - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC78u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x001EAC78u) [[unlikely]] return; }
L_001EAC78:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EAC7C:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAC8C; } }
L_001EAC88:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_001EAC8C:
    c.f[2] = ld32((c.r[17].w[0] + 208u));
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.f[0] = ld32((c.r[17].w[0] + 216u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACC0u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x001EACC0u) [[unlikely]] return; }
L_001EACC0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EACE4; } }
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 13024u), 0u);
    st32((c.r[17].w[0] + 13028u), 0u);
    st32((c.r[17].w[0] + 13032u), 0u);
    c.budget -= 6;
L_001EACE4:
    set32(c.r[3], ld32((c.r[19].w[0] - 5024u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 70u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAD20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD0Cu);  if (depth < kMaxDepth) unit_003B(c, 148u, depth + 1u); else { c.pc = 0x001EE408u; return; } if (c.pc != 0x001EAD0Cu) [[unlikely]] return; }
L_001EAD0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD1Cu);  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C0618u; return; } if (c.pc != 0x001EAD1Cu) [[unlikely]] return; }
L_001EAD1C:
    set32(c.r[16], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_001EAD20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9942u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAD40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9943u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAD40; } }
    c.f[0] = ld32((c.r[17].w[0] + 9948u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_001EAD40:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0] + 9829u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001EADA4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD84u);  if (depth < kMaxDepth) unit_006E(c, 187u, depth + 1u); else { c.pc = 0x002BA9E0u; return; } if (c.pc != 0x001EAD84u) [[unlikely]] return; }
L_001EAD84:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD9Cu);  if (depth < kMaxDepth) unit_007C(c, 172u, depth + 1u); else { c.pc = 0x002F2F68u; return; } if (c.pc != 0x001EAD9Cu) [[unlikely]] return; }
L_001EAD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAEFC; } }
L_001EADA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EADB8u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x001EADB8u) [[unlikely]] return; }
L_001EADB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAE30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[21], c.r[29].w[0] + 36u);
    c.f[20] = 0u;
    set32(c.r[20], c.r[29].w[0] + 40u);
    set32(c.r[16], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), c.f[20]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EADE8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EADE8u) [[unlikely]] return; }
L_001EADE8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EAE04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 3;
L_001EAE04:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE28u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x001EAE28u) [[unlikely]] return; }
L_001EAE28:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 36u));
    st16((c.r[17].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EAE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] - 2144u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE4Cu);  if (depth < kMaxDepth) unit_001B(c, 100u, depth + 1u); else { c.pc = 0x0016D710u; return; } if (c.pc != 0x001EAE4Cu) [[unlikely]] return; }
L_001EAE4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAEFC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE80u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001EAE80u) [[unlikely]] return; }
L_001EAE80:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[4], c.r[17].w[0] + 10256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EAEA0u) [[unlikely]] return; }
L_001EAEA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEC8u);  if (depth < kMaxDepth) unit_006E(c, 187u, depth + 1u); else { c.pc = 0x002BA9E0u; return; } if (c.pc != 0x001EAEC8u) [[unlikely]] return; }
L_001EAEC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[7], c.r[7].w[0] + c.r[23].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEECu);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x001EAEECu) [[unlikely]] return; }
L_001EAEEC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_001EAEFC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_001EAEFC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EAF30:
    if (::decomp::hook_001EAF30.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_001EAF30, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF60u);  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x001EDFA0u; return; } if (c.pc != 0x001EAF60u) [[unlikely]] return; }
L_001EAF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 21672u);
    set32(c.r[3], c.r[3].w[0] - 7592u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[4].w[0] + 31484u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 31508u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EAFF8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAFF8; } }
    st32((c.r[17].w[0] + 612u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAFE4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAFBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAFD0; } }
L_001EAFBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFC8u);  if (depth < kMaxDepth) unit_0070(c, 17u, depth + 1u); else { c.pc = 0x002C03C0u; return; } if (c.pc != 0x001EAFC8u) [[unlikely]] return; }
L_001EAFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB30C; } }
L_001EAFD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFDCu);  if (depth < kMaxDepth) unit_0070(c, 16u, depth + 1u); else { c.pc = 0x002C0398u; return; } if (c.pc != 0x001EAFDCu) [[unlikely]] return; }
L_001EAFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB30C; } }
L_001EAFE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFF0u);  if (depth < kMaxDepth) unit_0070(c, 15u, depth + 1u); else { c.pc = 0x002C0378u; return; } if (c.pc != 0x001EAFF0u) [[unlikely]] return; }
L_001EAFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB30C; } }
L_001EAFF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB008u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x001EB008u) [[unlikely]] return; }
L_001EB008:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EB038; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB038; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB030u);  if (depth < kMaxDepth) unit_0071(c, 262u, depth + 1u); else { c.pc = 0x002C6DD0u; return; } if (c.pc != 0x001EB030u) [[unlikely]] return; }
L_001EB030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB058; } }
L_001EB038:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 13168u), 0u);
    st8((c.r[17].w[0] + 13163u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13162u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB30C; } }
L_001EB058:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[21], ld32((c.r[17].w[0] + 11264u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB084u);  if (depth < kMaxDepth) unit_003B(c, 335u, depth + 1u); else { c.pc = 0x001EFE80u; return; } if (c.pc != 0x001EB084u) [[unlikely]] return; }
L_001EB084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001EB148; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB098u);  if (depth < kMaxDepth) unit_006E(c, 49u, depth + 1u); else { c.pc = 0x002B8920u; return; } if (c.pc != 0x001EB098u) [[unlikely]] return; }
L_001EB098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001EB148; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 916u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB148; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0B8u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001EB0B8u) [[unlikely]] return; }
L_001EB0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB148; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001EB148; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0E4u);  if (depth < kMaxDepth) unit_006E(c, 124u, depth + 1u); else { c.pc = 0x002B9890u; return; } if (c.pc != 0x001EB0E4u) [[unlikely]] return; }
L_001EB0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001EB148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001EB148; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB12C; } }
    c.f[1] = ld32((c.r[21].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB12C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001EB12C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB148; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB140u);  if (depth < kMaxDepth) unit_0089(c, 177u, depth + 1u); else { c.pc = 0x00325F28u; return; } if (c.pc != 0x001EB140u) [[unlikely]] return; }
L_001EB140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB170; } }
L_001EB148:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 13168u), 0u);
    st8((c.r[17].w[0] + 13163u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 13172u), 0u);
    st8((c.r[17].w[0] + 13160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13162u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 612u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB30C; } }
L_001EB170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB188u);  if (depth < kMaxDepth) unit_0071(c, 310u, depth + 1u); else { c.pc = 0x002C7418u; return; } if (c.pc != 0x001EB188u) [[unlikely]] return; }
L_001EB188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 8736u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1A0u);  if (depth < kMaxDepth) unit_007C(c, 65u, depth + 1u); else { c.pc = 0x002F0E60u; return; } if (c.pc != 0x001EB1A0u) [[unlikely]] return; }
L_001EB1A0:
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 16760u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1B4u);  if (depth < kMaxDepth) unit_006E(c, 27u, depth + 1u); else { c.pc = 0x002B84F8u; return; } if (c.pc != 0x001EB1B4u) [[unlikely]] return; }
L_001EB1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB1D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13096u)));
    set32(c.r[3], 0u + 64u);
    c.r[2].d[0] = c.r[2].d[0] ^ 64ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[17].w[0] + 13168u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 612u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 13172u), c.r[3].w[0]);
    c.budget -= 7;
L_001EB1D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1E8u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x00126450u; return; } if (c.pc != 0x001EB1E8u) [[unlikely]] return; }
L_001EB1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB200; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27596u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB23C; } }
L_001EB200:
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    set32(c.r[3], 0u - 179u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 13168u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 13172u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB220u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x001EB220u) [[unlikely]] return; }
L_001EB220:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB23Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EB23Cu) [[unlikely]] return; }
L_001EB23C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8736u)));
    set32(c.r[4], 0u + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 8744u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001EB27C; } }
    set32(c.r[4], c.r[16].w[0] + 17200u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 13160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB274u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x001EB274u) [[unlikely]] return; }
L_001EB274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB2B0; } }
L_001EB27C:
    set32(c.r[4], c.r[16].w[0] + 17200u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 13160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB290u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x001EB290u) [[unlikely]] return; }
L_001EB290:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 13160u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13162u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 13161u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13163u));
    st8((c.r[17].w[0] + 13160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 13162u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 13161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 13163u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_001EB2B0:
    set32(c.r[16], c.r[16].w[0] + 17200u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2C4u);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x001EB2C4u) [[unlikely]] return; }
L_001EB2C4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 13168u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2D8u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x001EB2D8u) [[unlikely]] return; }
L_001EB2D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 612u)));
    st32((c.r[17].w[0] + 13172u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2E8u);  if (depth < kMaxDepth) unit_003C(c, 20u, depth + 1u); else { c.pc = 0x001F03B0u; return; } if (c.pc != 0x001EB2E8u) [[unlikely]] return; }
L_001EB2E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 13168u)));
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2F8u);  if (depth < kMaxDepth) unit_003C(c, 20u, depth + 1u); else { c.pc = 0x001F03B0u; return; } if (c.pc != 0x001EB2F8u) [[unlikely]] return; }
L_001EB2F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 13172u)));
    st32((c.r[17].w[0] + 13168u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB308u);  if (depth < kMaxDepth) unit_003C(c, 20u, depth + 1u); else { c.pc = 0x001F03B0u; return; } if (c.pc != 0x001EB308u) [[unlikely]] return; }
L_001EB308:
    st32((c.r[17].w[0] + 13172u), c.r[2].w[0]);
    c.budget -= 1;
L_001EB30C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB31Cu);  if (depth < kMaxDepth) unit_0003(c, 106u, depth + 1u); else { c.pc = 0x0010DB78u; return; } if (c.pc != 0x001EB31Cu) [[unlikely]] return; }
L_001EB31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB34C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13168u)));
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], ld32((c.r[17].w[0] + 13172u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 13168u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 13172u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 612u), c.r[5].w[0]);
    c.budget -= 10;
L_001EB34C:
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
L_001EB378:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st32((c.r[29].w[0] + 216u), c.f[23]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3CCu);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x001EB3CCu) [[unlikely]] return; }
L_001EB3CC:
    c.f[21] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3E4u);  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EFE50u; return; } if (c.pc != 0x001EB3E4u) [[unlikely]] return; }
L_001EB3E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[23] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB400u);  if (depth < kMaxDepth) unit_0019(c, 156u, depth + 1u); else { c.pc = 0x00165C60u; return; } if (c.pc != 0x001EB400u) [[unlikely]] return; }
L_001EB400:
    set32(c.r[30], c.r[18].w[0] - 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[17], c.r[18].w[0] + 336u);
    set32(c.r[23], c.r[2].w[0] - 6944u);
    c.budget -= 4;
L_001EB410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[22].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB42Cu);  if (depth < kMaxDepth) unit_0089(c, 102u, depth + 1u); else { c.pc = 0x003253B8u; return; } if (c.pc != 0x001EB42Cu) [[unlikely]] return; }
L_001EB42C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB438u);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00312268u; return; } if (c.pc != 0x001EB438u) [[unlikely]] return; }
L_001EB438:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB444u);  if (depth < kMaxDepth) unit_0084(c, 147u, depth + 1u); else { c.pc = 0x003121B0u; return; } if (c.pc != 0x001EB444u) [[unlikely]] return; }
L_001EB444:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] - 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBBBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB464u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001EB464u) [[unlikely]] return; }
L_001EB464:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001EBBBC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7364u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 23776u));
    st16((c.r[17].w[0] + 11006u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB4AC; } }
L_001EB494:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11006u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 11006u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB4AC; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 11006u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EB4AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11004u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 11004u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001EB4C4; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 11004u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EB4C4:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 224u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB528; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7364u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB528; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB528; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8604u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB528; } }
    c.f[0] = ld32((c.r[17].w[0] - 124u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB528; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 10056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB524u);  if (depth < kMaxDepth) unit_006F(c, 39u, depth + 1u); else { c.pc = 0x002BC898u; return; } if (c.pc != 0x001EB524u) [[unlikely]] return; }
L_001EB524:
    st16((c.r[17].w[0] + 8604u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EB528:
    set32(c.r[3], ld32((c.r[17].w[0] + 7364u)));
    set32(c.r[2], 0u + 148u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB54C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 23756u));
    st16((c.r[17].w[0] + 10996u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB564; } }
L_001EB54C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10996u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10996u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001EB564; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 10996u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EB564:
    set32(c.r[3], ld32((c.r[17].w[0] + 7364u)));
    set32(c.r[2], 0u + 149u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB58C; } }
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB58C; } }
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB598; } }
L_001EB58C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB59C; } }
L_001EB598:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EB59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[17].w[0] - 232u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB5D8; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB5DC; } }
L_001EB5D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EB5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB620; } }
    set32(c.r[4], c.r[6].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB610; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB614; } }
L_001EB610:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EB614:
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB620u);  if (depth < kMaxDepth) unit_008F(c, 300u, depth + 1u); else { c.pc = 0x0033EA58u; return; } if (c.pc != 0x001EB620u) [[unlikely]] return; }
L_001EB620:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9754u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB73C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB640u);  if (depth < kMaxDepth) unit_0006(c, 77u, depth + 1u); else { c.pc = 0x001189D0u; return; } if (c.pc != 0x001EB640u) [[unlikely]] return; }
L_001EB640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB73C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7364u)));
    set32(c.r[2], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB6C8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12592u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = ld32((c.r[17].w[0] - 188u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 10988u), 0u);
    st16((c.r[17].w[0] + 12592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 10984u), 0u);
    st32((c.r[17].w[0] + 10992u), c.f[22]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB680u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001EB680u) [[unlikely]] return; }
L_001EB680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB73C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB694u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EB694u) [[unlikely]] return; }
L_001EB694:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6C0u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EB6C0u) [[unlikely]] return; }
L_001EB6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB73C; } }
L_001EB6C8:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB73C; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB73C; } }
    c.f[20] = ld32((c.r[17].w[0] - 188u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 10988u), 0u);
    st32((c.r[17].w[0] + 10984u), 0u);
    st32((c.r[17].w[0] + 10992u), c.f[22]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6FCu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001EB6FCu) [[unlikely]] return; }
L_001EB6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB73C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB710u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001EB710u) [[unlikely]] return; }
L_001EB710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB73Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001EB73Cu) [[unlikely]] return; }
L_001EB73C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11030u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB80C; } }
    set32(c.r[16], c.r[18].w[0] + 11392u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 11376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB760u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001EB760u) [[unlikely]] return; }
L_001EB760:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11030u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 11028u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB79Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001EB79Cu) [[unlikely]] return; }
L_001EB79C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7B0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001EB7B0u) [[unlikely]] return; }
L_001EB7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7D4u);  if (depth < kMaxDepth) unit_0088(c, 328u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x001EB7D4u) [[unlikely]] return; }
L_001EB7D4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 11030u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 11030u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB80C; } }
    c.f[12] = ld32((c.r[17].w[0] + 11056u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 11060u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = ld32((c.r[17].w[0] + 11064u));
    st16((c.r[17].w[0] + 11028u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB80Cu);  if (depth < kMaxDepth) unit_0088(c, 328u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x001EB80Cu) [[unlikely]] return; }
L_001EB80C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB818u);  if (depth < kMaxDepth) unit_003A(c, 254u, depth + 1u); else { c.pc = 0x001EA9A8u; return; } if (c.pc != 0x001EB818u) [[unlikely]] return; }
L_001EB818:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB824u);  if (depth < kMaxDepth) unit_007A(c, 148u, depth + 1u); else { c.pc = 0x002E9C18u; return; } if (c.pc != 0x001EB824u) [[unlikely]] return; }
L_001EB824:
    set32(c.r[2], ld32((c.r[17].w[0] - 232u)));
    set32(c.r[3], 0u + 1536u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 972u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB8CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12856u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001EB8CC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7376u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB8CC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB86Cu);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001EB86Cu) [[unlikely]] return; }
L_001EB86C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB878u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001EB878u) [[unlikely]] return; }
L_001EB878:
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] - 188u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] - 188u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8B0u);  if (depth < kMaxDepth) unit_008B(c, 165u, depth + 1u); else { c.pc = 0x0032D470u; return; } if (c.pc != 0x001EB8B0u) [[unlikely]] return; }
L_001EB8B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7376u)));
    set32(c.r[3], 0u + 13248u);
    c.f[0] = ld32((c.r[17].w[0] - 188u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[30].w[0]);
    st32((c.r[2].w[0] + 148u), c.f[0]);
    c.budget -= 7;
L_001EB8CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8D8u);  if (depth < kMaxDepth) unit_002F(c, 68u, depth + 1u); else { c.pc = 0x001BCA90u; return; } if (c.pc != 0x001EB8D8u) [[unlikely]] return; }
L_001EB8D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8E4u);  if (depth < kMaxDepth) unit_006E(c, 51u, depth + 1u); else { c.pc = 0x002B8948u; return; } if (c.pc != 0x001EB8E4u) [[unlikely]] return; }
L_001EB8E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10272u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB93C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB93C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23780u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB93C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31956u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB93C; } }
L_001EB930:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB93Cu);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x001EB93Cu) [[unlikely]] return; }
L_001EB93C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB948u);  if (depth < kMaxDepth) unit_0070(c, 47u, depth + 1u); else { c.pc = 0x002C09D8u; return; } if (c.pc != 0x001EB948u) [[unlikely]] return; }
L_001EB948:
    set32(c.r[3], ld32((c.r[17].w[0] + 7364u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB968; } }
    st32((c.r[17].w[0] - 120u), c.f[21]);
    st32((c.r[17].w[0] - 124u), c.f[21]);
    st32((c.r[17].w[0] - 128u), c.f[21]);
    st32((c.r[17].w[0] + 12508u), c.f[21]);
    c.budget -= 4;
L_001EB968:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 9904u)));
    st32((c.r[17].w[0] - 168u), c.f[21]);
    st32((c.r[17].w[0] - 172u), c.f[21]);
    st32((c.r[17].w[0] - 176u), c.f[21]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB9F0; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB990u);  if (depth < kMaxDepth) unit_003A(c, 281u, depth + 1u); else { c.pc = 0x001EAF30u; return; } if (c.pc != 0x001EB990u) [[unlikely]] return; }
L_001EB990:
    set32(c.r[2], ld32((c.r[17].w[0] + 276u)));
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9A8u);  if (depth < kMaxDepth) unit_0023(c, 61u, depth + 1u); else { c.pc = 0x0018CFF8u; return; } if (c.pc != 0x001EB9A8u) [[unlikely]] return; }
L_001EB9A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9B4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001EB9B4u) [[unlikely]] return; }
L_001EB9B4:
    c.f[1] = ld32((c.r[17].w[0] - 204u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB9F0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 224u));
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12744u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[17].w[0] + 224u), c.r[2].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB9E8; } }
    st32((c.r[17].w[0] + 12744u), 0u);
    c.budget -= 1;
L_001EB9E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 10928u)));
    st32((c.r[2].w[0] + 100u), c.r[22].w[0]);
    c.budget -= 2;
L_001EB9F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001EBAB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA00u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EBA00u) [[unlikely]] return; }
L_001EBA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001EBA4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA14u);  if (depth < kMaxDepth) unit_0036(c, 369u, depth + 1u); else { c.pc = 0x001DACA0u; return; } if (c.pc != 0x001EBA14u) [[unlikely]] return; }
L_001EBA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBA4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBA4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA34u);  if (depth < kMaxDepth) unit_0036(c, 369u, depth + 1u); else { c.pc = 0x001DACA0u; return; } if (c.pc != 0x001EBA34u) [[unlikely]] return; }
L_001EBA34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA4Cu);  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x00102D28u; return; } if (c.pc != 0x001EBA4Cu) [[unlikely]] return; }
L_001EBA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA54u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EBA54u) [[unlikely]] return; }
L_001EBA54:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EBAA4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA6Cu);  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DABE0u; return; } if (c.pc != 0x001EBA6Cu) [[unlikely]] return; }
L_001EBA6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBAA4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBAA4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA8Cu);  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DABE0u; return; } if (c.pc != 0x001EBA8Cu) [[unlikely]] return; }
L_001EBA8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAA4u);  if (depth < kMaxDepth) unit_0000(c, 261u, depth + 1u); else { c.pc = 0x00102940u; return; } if (c.pc != 0x001EBAA4u) [[unlikely]] return; }
L_001EBAA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 10928u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[23]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_001EBAB4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[22].d[0];  if (t) { goto L_001EBB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAC4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EBAC4u) [[unlikely]] return; }
L_001EBAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001EBB10; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAD8u);  if (depth < kMaxDepth) unit_0036(c, 369u, depth + 1u); else { c.pc = 0x001DACA0u; return; } if (c.pc != 0x001EBAD8u) [[unlikely]] return; }
L_001EBAD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBB10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBB10; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAF8u);  if (depth < kMaxDepth) unit_0036(c, 369u, depth + 1u); else { c.pc = 0x001DACA0u; return; } if (c.pc != 0x001EBAF8u) [[unlikely]] return; }
L_001EBAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB10u);  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x00102D28u; return; } if (c.pc != 0x001EBB10u) [[unlikely]] return; }
L_001EBB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB18u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001EBB18u) [[unlikely]] return; }
L_001EBB18:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EBB68; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB30u);  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DABE0u; return; } if (c.pc != 0x001EBB30u) [[unlikely]] return; }
L_001EBB30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBB68; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBB68; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB50u);  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DABE0u; return; } if (c.pc != 0x001EBB50u) [[unlikely]] return; }
L_001EBB50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB68u);  if (depth < kMaxDepth) unit_0000(c, 261u, depth + 1u); else { c.pc = 0x00102940u; return; } if (c.pc != 0x001EBB68u) [[unlikely]] return; }
L_001EBB68:
    set32(c.r[2], ld32((c.r[17].w[0] + 10928u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[23]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_001EBB78:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB84u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x001EBB84u) [[unlikely]] return; }
L_001EBB84:
    set32(c.r[5], ld32((c.r[17].w[0] + 276u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 12836u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB98u);  if (depth < kMaxDepth) unit_0020(c, 209u, depth + 1u); else { c.pc = 0x00182778u; return; } if (c.pc != 0x001EBB98u) [[unlikely]] return; }
L_001EBB98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBA4u);  if (depth < kMaxDepth) unit_0019(c, 305u, depth + 1u); else { c.pc = 0x00167588u; return; } if (c.pc != 0x001EBBA4u) [[unlikely]] return; }
L_001EBBA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBB0u);  if (depth < kMaxDepth) unit_0019(c, 300u, depth + 1u); else { c.pc = 0x00167458u; return; } if (c.pc != 0x001EBBB0u) [[unlikely]] return; }
L_001EBBB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBBCu);  if (depth < kMaxDepth) unit_0030(c, 35u, depth + 1u); else { c.pc = 0x001C0648u; return; } if (c.pc != 0x001EBBBCu) [[unlikely]] return; }
L_001EBBBC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.r[2].d[0] = c.r[19].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB410u | kUnwind; return; } goto L_001EB410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBE0u);  if (depth < kMaxDepth) unit_0003(c, 107u, depth + 1u); else { c.pc = 0x0010DB90u; return; } if (c.pc != 0x001EBBE0u) [[unlikely]] return; }
L_001EBBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBF0u);  if (depth < kMaxDepth) unit_0008(c, 179u, depth + 1u); else { c.pc = 0x00121858u; return; } if (c.pc != 0x001EBBF0u) [[unlikely]] return; }
L_001EBBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBF8u);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8830u; return; } if (c.pc != 0x001EBBF8u) [[unlikely]] return; }
L_001EBBF8:
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
    c.f[23] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EBC40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[21], 0u + 13u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 167u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[23], 0u + 147u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = 0u;
    c.budget -= 22;
L_001EBC98:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003B(c, 5u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCB0u);  if (depth < kMaxDepth) unit_001B(c, 26u, depth + 1u); else { c.pc = 0x0016C558u; return; } if (c.pc != 0x001EBCB0u) [[unlikely]] return; }
L_001EBCB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { [[clang::musttail]] return unit_003B(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBCD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 7192u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 11308u), c.f[0]);
    c.budget -= 4;
L_001EBCD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCE0u);  if (depth < kMaxDepth) unit_002F(c, 110u, depth + 1u); else { c.pc = 0x001BD1B0u; return; } if (c.pc != 0x001EBCE0u) [[unlikely]] return; }
L_001EBCE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCECu);  if (depth < kMaxDepth) unit_0019(c, 287u, depth + 1u); else { c.pc = 0x00167220u; return; } if (c.pc != 0x001EBCECu) [[unlikely]] return; }
L_001EBCEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCF8u);  if (depth < kMaxDepth) unit_006F(c, 55u, depth + 1u); else { c.pc = 0x002BCA40u; return; } if (c.pc != 0x001EBCF8u) [[unlikely]] return; }
L_001EBCF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD04u);  if (depth < kMaxDepth) unit_001D(c, 118u, depth + 1u); else { c.pc = 0x00175600u; return; } if (c.pc != 0x001EBD04u) [[unlikely]] return; }
L_001EBD04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD10u);  if (depth < kMaxDepth) unit_001D(c, 44u, depth + 1u); else { c.pc = 0x00174A90u; return; } if (c.pc != 0x001EBD10u) [[unlikely]] return; }
L_001EBD10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD1Cu);  if (depth < kMaxDepth) unit_0070(c, 37u, depth + 1u); else { c.pc = 0x002C0748u; return; } if (c.pc != 0x001EBD1Cu) [[unlikely]] return; }
L_001EBD1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[3], 0u + 143u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD48; } }
    set32(c.r[4], c.r[30].w[0] - 19312u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD40u);  if (depth < kMaxDepth) unit_0088(c, 331u, depth + 1u); else { c.pc = 0x00323F98u; return; } if (c.pc != 0x001EBD40u) [[unlikely]] return; }
L_001EBD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD78; } }
L_001EBD48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD5Cu);  if (depth < kMaxDepth) unit_0006(c, 77u, depth + 1u); else { c.pc = 0x001189D0u; return; } if (c.pc != 0x001EBD5Cu) [[unlikely]] return; }
L_001EBD5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBD78; } }
    set32(c.r[4], c.r[30].w[0] - 19312u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD78u);  if (depth < kMaxDepth) unit_0088(c, 331u, depth + 1u); else { c.pc = 0x00323F98u; return; } if (c.pc != 0x001EBD78u) [[unlikely]] return; }
L_001EBD78:
    c.f[0] = ld32((c.r[16].w[0] + 12888u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 612u)));
    st32((c.r[16].w[0] + 12896u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD90u);  if (depth < kMaxDepth) unit_0019(c, 278u, depth + 1u); else { c.pc = 0x00166F70u; return; } if (c.pc != 0x001EBD90u) [[unlikely]] return; }
L_001EBD90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD9Cu);  if (depth < kMaxDepth) unit_003B(c, 26u, depth + 1u); else { c.pc = 0x001EC3E0u; return; } if (c.pc != 0x001EBD9Cu) [[unlikely]] return; }
L_001EBD9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDA8u);  if (depth < kMaxDepth) unit_0019(c, 330u, depth + 1u); else { c.pc = 0x001678A8u; return; } if (c.pc != 0x001EBDA8u) [[unlikely]] return; }
L_001EBDA8:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBDD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 13056u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDD8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001EBDD8u) [[unlikely]] return; }
L_001EBDD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDE4u);  if (depth < kMaxDepth) unit_002F(c, 88u, depth + 1u); else { c.pc = 0x001BCDE0u; return; } if (c.pc != 0x001EBDE4u) [[unlikely]] return; }
L_001EBDE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[3], 0u + 143u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EBE4C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_001EBE4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 72u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8736u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 8748u);
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBE3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE34u);  if (depth < kMaxDepth) unit_002F(c, 35u, depth + 1u); else { c.pc = 0x001BC4A0u; return; } if (c.pc != 0x001EBE34u) [[unlikely]] return; }
L_001EBE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBE4C; } }
L_001EBE3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE4Cu);  if (depth < kMaxDepth) unit_002F(c, 45u, depth + 1u); else { c.pc = 0x001BC6F0u; return; } if (c.pc != 0x001EBE4Cu) [[unlikely]] return; }
L_001EBE4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 13096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001EBE5C; } }
    st32((c.r[16].w[0] + 13096u), c.r[17].w[0]);
    c.budget -= 1;
L_001EBE5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_001EBED0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE74u);  if (depth < kMaxDepth) unit_0070(c, 22u, depth + 1u); else { c.pc = 0x002C0510u; return; } if (c.pc != 0x001EBE74u) [[unlikely]] return; }
L_001EBE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001EBEC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[4], c.r[18].w[0] - 7192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE8Cu);  if (depth < kMaxDepth) unit_006F(c, 191u, depth + 1u); else { c.pc = 0x002BFD70u; return; } if (c.pc != 0x001EBE8Cu) [[unlikely]] return; }
L_001EBE8C:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    st32((c.r[16].w[0] + 12888u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001EBEB4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 11336u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFB8; } }
L_001EBEB4:
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFB8; } }
L_001EBEC0:
    set32(c.r[2], 0u + 118u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFB8; } }
L_001EBED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEE4u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001EBEE4u) [[unlikely]] return; }
L_001EBEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBF08; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[4], c.r[18].w[0] - 7192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEFCu);  if (depth < kMaxDepth) unit_006F(c, 191u, depth + 1u); else { c.pc = 0x002BFD70u; return; } if (c.pc != 0x001EBEFCu) [[unlikely]] return; }
L_001EBEFC:
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFB4; } }
L_001EBF08:
    set32(c.r[2], ld32((c.r[16].w[0] + 13076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001EBF94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001EBF34; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 11336u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBF38; } }
L_001EBF34:
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001EBF38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF44u);  if (depth < kMaxDepth) unit_0070(c, 22u, depth + 1u); else { c.pc = 0x002C0510u; return; } if (c.pc != 0x001EBF44u) [[unlikely]] return; }
L_001EBF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001EBF78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[4], c.r[18].w[0] - 7192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF5Cu);  if (depth < kMaxDepth) unit_006F(c, 191u, depth + 1u); else { c.pc = 0x002BFD70u; return; } if (c.pc != 0x001EBF5Cu) [[unlikely]] return; }
L_001EBF5C:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12888u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF70u);  if (depth < kMaxDepth) unit_0070(c, 23u, depth + 1u); else { c.pc = 0x002C0520u; return; } if (c.pc != 0x001EBF70u) [[unlikely]] return; }
L_001EBF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFB8; } }
L_001EBF78:
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[4], c.r[18].w[0] - 7192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF88u);  if (depth < kMaxDepth) unit_006F(c, 191u, depth + 1u); else { c.pc = 0x002BFD70u; return; } if (c.pc != 0x001EBF88u) [[unlikely]] return; }
L_001EBF88:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFB4; } }
L_001EBF94:
    c.r[2].d[0] = ld16((c.r[18].w[0] - 7192u));
    set32(c.r[4], c.r[18].w[0] - 7192u);
    set32(c.r[5], ld32((c.r[16].w[0] + 10196u)));
    st16((c.r[16].w[0] + 11334u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFB0u);  if (depth < kMaxDepth) unit_006F(c, 191u, depth + 1u); else { c.pc = 0x002BFD70u; return; } if (c.pc != 0x001EBFB0u) [[unlikely]] return; }
L_001EBFB0:
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 1;
L_001EBFB4:
    st32((c.r[16].w[0] + 12888u), c.f[0]);
    c.budget -= 1;
L_001EBFB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFC4u);  if (depth < kMaxDepth) unit_0070(c, 144u, depth + 1u); else { c.pc = 0x002C1B38u; return; } if (c.pc != 0x001EBFC4u) [[unlikely]] return; }
L_001EBFC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFD8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001EBFD8u) [[unlikely]] return; }
L_001EBFD8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 13128u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { [[clang::musttail]] return unit_003B(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003B(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003B(c, 4u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_003B(c, 1u, depth);
}

}
