#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_00273C38;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_005C[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0,
    0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324,
    0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0,
    0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00270000;
    case 2u: goto L_00270008;
    case 3u: goto L_00270030;
    case 4u: goto L_00270050;
    case 5u: goto L_00270058;
    case 6u: goto L_00270064;
    case 7u: goto L_00270084;
    case 8u: goto L_00270098;
    case 9u: goto L_002700D4;
    case 10u: goto L_002700F0;
    case 11u: goto L_002700F8;
    case 12u: goto L_0027010C;
    case 13u: goto L_00270114;
    case 14u: goto L_0027011C;
    case 15u: goto L_00270154;
    case 16u: goto L_0027015C;
    case 17u: goto L_00270174;
    case 18u: goto L_002701B8;
    case 19u: goto L_002701D8;
    case 20u: goto L_002701E8;
    case 21u: goto L_00270218;
    case 22u: goto L_00270238;
    case 23u: goto L_00270284;
    case 24u: goto L_002702AC;
    case 25u: goto L_002702B8;
    case 26u: goto L_002702D8;
    case 27u: goto L_002702E8;
    case 28u: goto L_002702F8;
    case 29u: goto L_00270330;
    case 30u: goto L_00270350;
    case 31u: goto L_00270358;
    case 32u: goto L_0027036C;
    case 33u: goto L_0027038C;
    case 34u: goto L_002703A0;
    case 35u: goto L_002703DC;
    case 36u: goto L_002703F8;
    case 37u: goto L_00270418;
    case 38u: goto L_0027044C;
    case 39u: goto L_00270460;
    case 40u: goto L_002704AC;
    case 41u: goto L_002704F8;
    case 42u: goto L_00270508;
    case 43u: goto L_00270518;
    case 44u: goto L_00270528;
    case 45u: goto L_00270538;
    case 46u: goto L_0027056C;
    case 47u: goto L_00270580;
    case 48u: goto L_0027058C;
    case 49u: goto L_002705A8;
    case 50u: goto L_002705B4;
    case 51u: goto L_002705D0;
    case 52u: goto L_002705E4;
    case 53u: goto L_002705F4;
    case 54u: goto L_00270600;
    case 55u: goto L_00270638;
    case 56u: goto L_00270654;
    case 57u: goto L_00270660;
    case 58u: goto L_0027066C;
    case 59u: goto L_00270678;
    case 60u: goto L_00270698;
    case 61u: goto L_002706BC;
    case 62u: goto L_002706C8;
    case 63u: goto L_002706D4;
    case 64u: goto L_002706F0;
    case 65u: goto L_00270700;
    case 66u: goto L_00270710;
    case 67u: goto L_00270720;
    case 68u: goto L_00270730;
    case 69u: goto L_002707AC;
    case 70u: goto L_002707D0;
    case 71u: goto L_002707DC;
    case 72u: goto L_002707F0;
    case 73u: goto L_00270808;
    case 74u: goto L_00270850;
    case 75u: goto L_00270880;
    case 76u: goto L_00270898;
    case 77u: goto L_002708AC;
    case 78u: goto L_002708CC;
    case 79u: goto L_002708E4;
    case 80u: goto L_002708F8;
    case 81u: goto L_0027090C;
    case 82u: goto L_00270920;
    case 83u: goto L_0027092C;
    case 84u: goto L_0027095C;
    case 85u: goto L_00270998;
    case 86u: goto L_002709B0;
    case 87u: goto L_002709CC;
    case 88u: goto L_002709D8;
    case 89u: goto L_002709F0;
    case 90u: goto L_00270A34;
    case 91u: goto L_00270A44;
    case 92u: goto L_00270A54;
    case 93u: goto L_00270A64;
    case 94u: goto L_00270A74;
    case 95u: goto L_00270A98;
    case 96u: goto L_00270AC0;
    case 97u: goto L_00270AD0;
    case 98u: goto L_00270B0C;
    case 99u: goto L_00270B24;
    case 100u: goto L_00270B34;
    case 101u: goto L_00270B44;
    case 102u: goto L_00270B54;
    case 103u: goto L_00270B78;
    case 104u: goto L_00270BBC;
    case 105u: goto L_00270BD4;
    case 106u: goto L_00270BE4;
    case 107u: goto L_00270BF4;
    case 108u: goto L_00270C08;
    case 109u: goto L_00270C30;
    case 110u: goto L_00270C6C;
    case 111u: goto L_00270C84;
    case 112u: goto L_00270C94;
    case 113u: goto L_00270CA4;
    case 114u: goto L_00270CB4;
    case 115u: goto L_00270CD8;
    case 116u: goto L_00270D1C;
    case 117u: goto L_00270D34;
    case 118u: goto L_00270D44;
    case 119u: goto L_00270D54;
    case 120u: goto L_00270D68;
    case 121u: goto L_00270D90;
    case 122u: goto L_00270DA4;
    case 123u: goto L_00270DC0;
    case 124u: goto L_00270DD4;
    case 125u: goto L_00270DF0;
    case 126u: goto L_00270E08;
    case 127u: goto L_00270E18;
    case 128u: goto L_00270E34;
    case 129u: goto L_00270E44;
    case 130u: goto L_00270E58;
    case 131u: goto L_00270E70;
    case 132u: goto L_00270E80;
    case 133u: goto L_00270E98;
    case 134u: goto L_00270EA8;
    case 135u: goto L_00270EC0;
    case 136u: goto L_00270ED0;
    case 137u: goto L_00270EE0;
    case 138u: goto L_00270EF0;
    case 139u: goto L_00270F54;
    case 140u: goto L_00270FA8;
    case 141u: goto L_00270FC8;
    case 142u: goto L_00271028;
    case 143u: goto L_0027106C;
    case 144u: goto L_00271080;
    case 145u: goto L_002710D8;
    case 146u: goto L_00271120;
    case 147u: goto L_00271138;
    case 148u: goto L_00271164;
    case 149u: goto L_00271178;
    case 150u: goto L_00271190;
    case 151u: goto L_002711A0;
    case 152u: goto L_002711B8;
    case 153u: goto L_002711C8;
    case 154u: goto L_002711E0;
    case 155u: goto L_002711F0;
    case 156u: goto L_00271230;
    case 157u: goto L_00271240;
    case 158u: goto L_00271264;
    case 159u: goto L_00271270;
    case 160u: goto L_00271280;
    case 161u: goto L_0027128C;
    case 162u: goto L_002712B0;
    case 163u: goto L_002712D8;
    case 164u: goto L_002712E4;
    case 165u: goto L_00271314;
    case 166u: goto L_00271350;
    case 167u: goto L_0027137C;
    case 168u: goto L_00271384;
    case 169u: goto L_00271394;
    case 170u: goto L_002713A8;
    case 171u: goto L_002713E0;
    case 172u: goto L_002713FC;
    case 173u: goto L_00271418;
    case 174u: goto L_0027144C;
    case 175u: goto L_00271478;
    case 176u: goto L_002714C0;
    case 177u: goto L_002714CC;
    case 178u: goto L_002714E0;
    case 179u: goto L_002714F8;
    case 180u: goto L_00271518;
    case 181u: goto L_0027153C;
    case 182u: goto L_00271550;
    case 183u: goto L_00271558;
    case 184u: goto L_00271578;
    case 185u: goto L_00271588;
    case 186u: goto L_00271590;
    case 187u: goto L_002715A0;
    case 188u: goto L_002715B0;
    case 189u: goto L_002715D0;
    case 190u: goto L_002715E4;
    case 191u: goto L_002715F8;
    case 192u: goto L_00271628;
    case 193u: goto L_002716A8;
    case 194u: goto L_002716B8;
    case 195u: goto L_002716C8;
    case 196u: goto L_002716F4;
    case 197u: goto L_002716F8;
    case 198u: goto L_00271720;
    case 199u: goto L_00271734;
    case 200u: goto L_00271748;
    case 201u: goto L_00271770;
    case 202u: goto L_00271780;
    case 203u: goto L_00271798;
    case 204u: goto L_002717A0;
    case 205u: goto L_002717AC;
    case 206u: goto L_002717B8;
    case 207u: goto L_002717D4;
    case 208u: goto L_002717F0;
    case 209u: goto L_00271860;
    case 210u: goto L_00271870;
    case 211u: goto L_00271898;
    case 212u: goto L_002718A0;
    case 213u: goto L_002718AC;
    case 214u: goto L_002718B8;
    case 215u: goto L_002718C4;
    case 216u: goto L_002718D8;
    case 217u: goto L_002718F4;
    case 218u: goto L_00271928;
    case 219u: goto L_00271944;
    case 220u: goto L_00271978;
    case 221u: goto L_00271988;
    case 222u: goto L_002719F0;
    case 223u: goto L_00271A38;
    case 224u: goto L_00271A48;
    case 225u: goto L_00271A74;
    case 226u: goto L_00271AB0;
    case 227u: goto L_00271AC0;
    case 228u: goto L_00271ACC;
    case 229u: goto L_00271B08;
    case 230u: goto L_00271B70;
    case 231u: goto L_00271BB0;
    case 232u: goto L_00271BD0;
    case 233u: goto L_00271C24;
    case 234u: goto L_00271C34;
    case 235u: goto L_00271C40;
    case 236u: goto L_00271C58;
    case 237u: goto L_00271C90;
    case 238u: goto L_00271CD4;
    case 239u: goto L_00271D3C;
    case 240u: goto L_00271D8C;
    case 241u: goto L_00271DDC;
    case 242u: goto L_00271E08;
    case 243u: goto L_00271EC0;
    case 244u: goto L_00271EF0;
    case 245u: goto L_00271F0C;
    case 246u: goto L_00271F20;
    case 247u: goto L_00271F30;
    case 248u: goto L_00271F50;
    case 249u: goto L_00271F68;
    case 250u: goto L_00271F78;
    case 251u: goto L_00271FAC;
    case 252u: goto L_00271FB8;
    case 253u: goto L_00271FCC;
    case 254u: goto L_00271FF8;
    case 255u: goto L_00272018;
    case 256u: goto L_0027202C;
    case 257u: goto L_00272040;
    case 258u: goto L_0027205C;
    case 259u: goto L_00272070;
    case 260u: goto L_00272088;
    case 261u: goto L_00272098;
    case 262u: goto L_002720B0;
    case 263u: goto L_002720C8;
    case 264u: goto L_002720D0;
    case 265u: goto L_002720E0;
    case 266u: goto L_00272130;
    case 267u: goto L_0027215C;
    case 268u: goto L_002721BC;
    case 269u: goto L_002721CC;
    case 270u: goto L_002721F8;
    case 271u: goto L_002722A0;
    case 272u: goto L_002722B4;
    case 273u: goto L_002722D0;
    case 274u: goto L_002722E0;
    case 275u: goto L_00272300;
    case 276u: goto L_0027231C;
    case 277u: goto L_00272328;
    case 278u: goto L_00272340;
    case 279u: goto L_00272360;
    case 280u: goto L_00272370;
    case 281u: goto L_00272390;
    case 282u: goto L_002723A8;
    case 283u: goto L_002723B4;
    case 284u: goto L_002723C4;
    case 285u: goto L_0027240C;
    case 286u: goto L_00272434;
    case 287u: goto L_00272454;
    case 288u: goto L_00272488;
    case 289u: goto L_002725E8;
    case 290u: goto L_002725F4;
    case 291u: goto L_0027260C;
    case 292u: goto L_0027261C;
    case 293u: goto L_00272630;
    case 294u: goto L_00272644;
    case 295u: goto L_00272658;
    case 296u: goto L_00272684;
    case 297u: goto L_00272698;
    case 298u: goto L_002726C8;
    case 299u: goto L_002726DC;
    case 300u: goto L_002726FC;
    case 301u: goto L_0027271C;
    case 302u: goto L_0027274C;
    case 303u: goto L_0027277C;
    case 304u: goto L_00272788;
    case 305u: goto L_00272794;
    case 306u: goto L_002727B0;
    case 307u: goto L_00272818;
    case 308u: goto L_00272828;
    case 309u: goto L_002728F4;
    case 310u: goto L_00272904;
    case 311u: goto L_00272914;
    case 312u: goto L_00272920;
    case 313u: goto L_00272934;
    case 314u: goto L_00272940;
    case 315u: goto L_00272958;
    case 316u: goto L_00272968;
    case 317u: goto L_0027297C;
    case 318u: goto L_0027299C;
    case 319u: goto L_002729B0;
    case 320u: goto L_002729C8;
    case 321u: goto L_002729D4;
    case 322u: goto L_002729E0;
    case 323u: goto L_002729EC;
    case 324u: goto L_002729FC;
    case 325u: goto L_00272A0C;
    case 326u: goto L_00272A1C;
    case 327u: goto L_00272A28;
    case 328u: goto L_00272A60;
    case 329u: goto L_00272AA0;
    case 330u: goto L_00272ACC;
    case 331u: goto L_00272AE8;
    case 332u: goto L_00272AF8;
    case 333u: goto L_00272B08;
    case 334u: goto L_00272B28;
    case 335u: goto L_00272B38;
    case 336u: goto L_00272B48;
    case 337u: goto L_00272B50;
    case 338u: goto L_00272B8C;
    case 339u: goto L_00272BA0;
    case 340u: goto L_00272BA8;
    case 341u: goto L_00272BF8;
    case 342u: goto L_00272C14;
    case 343u: goto L_00272C34;
    case 344u: goto L_00272C50;
    case 345u: goto L_00272C68;
    case 346u: goto L_00272C78;
    case 347u: goto L_00272C8C;
    case 348u: goto L_00272C9C;
    case 349u: goto L_00272CA8;
    case 350u: goto L_00272CBC;
    case 351u: goto L_00272CCC;
    case 352u: goto L_00272CDC;
    case 353u: goto L_00272D10;
    case 354u: goto L_00272D20;
    case 355u: goto L_00272D3C;
    case 356u: goto L_00272D50;
    case 357u: goto L_00272DC8;
    case 358u: goto L_00272DD8;
    case 359u: goto L_00272DE8;
    case 360u: goto L_00272E28;
    case 361u: goto L_00272E50;
    case 362u: goto L_00272EC0;
    case 363u: goto L_00272EF4;
    case 364u: goto L_00272F08;
    case 365u: goto L_00272F14;
    case 366u: goto L_00272F48;
    case 367u: goto L_00272F9C;
    case 368u: goto L_00272FE8;
    case 369u: goto L_00273018;
    case 370u: goto L_0027303C;
    case 371u: goto L_00273084;
    case 372u: goto L_0027309C;
    case 373u: goto L_002730BC;
    case 374u: goto L_002730D4;
    case 375u: goto L_002730DC;
    case 376u: goto L_002730EC;
    case 377u: goto L_00273114;
    case 378u: goto L_00273128;
    case 379u: goto L_00273140;
    case 380u: goto L_0027316C;
    case 381u: goto L_00273198;
    case 382u: goto L_002731C4;
    case 383u: goto L_002731F4;
    case 384u: goto L_00273208;
    case 385u: goto L_00273218;
    case 386u: goto L_00273220;
    case 387u: goto L_00273230;
    case 388u: goto L_00273258;
    case 389u: goto L_00273268;
    case 390u: goto L_00273278;
    case 391u: goto L_002732AC;
    case 392u: goto L_002732BC;
    case 393u: goto L_002732DC;
    case 394u: goto L_002732EC;
    case 395u: goto L_00273314;
    case 396u: goto L_00273340;
    case 397u: goto L_0027335C;
    case 398u: goto L_0027336C;
    case 399u: goto L_00273378;
    case 400u: goto L_002733D4;
    case 401u: goto L_00273560;
    case 402u: goto L_002735E0;
    case 403u: goto L_00273620;
    case 404u: goto L_00273630;
    case 405u: goto L_002736C8;
    case 406u: goto L_00273718;
    case 407u: goto L_00273738;
    case 408u: goto L_002737E0;
    case 409u: goto L_002737FC;
    case 410u: goto L_00273990;
    case 411u: goto L_00273AD4;
    case 412u: goto L_00273AF0;
    case 413u: goto L_00273B44;
    case 414u: goto L_00273B64;
    case 415u: goto L_00273BE0;
    case 416u: goto L_00273C38;
    case 417u: goto L_00273C70;
    case 418u: goto L_00273C88;
    case 419u: goto L_00273C98;
    case 420u: goto L_00273CB0;
    case 421u: goto L_00273CC0;
    case 422u: goto L_00273D00;
    case 423u: goto L_00273D50;
    case 424u: goto L_00273D68;
    case 425u: goto L_00273D78;
    case 426u: goto L_00273DB0;
    case 427u: goto L_00273DC0;
    case 428u: goto L_00273DC8;
    case 429u: goto L_00273E10;
    case 430u: goto L_00273E28;
    case 431u: goto L_00273E58;
    case 432u: goto L_00273E80;
    case 433u: goto L_00273E90;
    case 434u: goto L_00273EA0;
    case 435u: goto L_00273EDC;
    case 436u: goto L_00273EEC;
    case 437u: goto L_00273EFC;
    case 438u: goto L_00273F24;
    case 439u: goto L_00273F34;
    case 440u: goto L_00273F44;
    case 441u: goto L_00273F74;
    case 442u: goto L_00273F7C;
    case 443u: goto L_00273FA8;
    case 444u: goto L_00273FC0;
    case 445u: goto L_00273FCC;
    case 446u: goto L_00273FD8;
    default: bad_entry(c, 0x00270000u); return;
    }
L_00270000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270008u);  if (depth < kMaxDepth) unit_005B(c, 391u, depth + 1u); else { c.pc = 0x0026FBF0u; return; } if (c.pc != 0x00270008u) [[unlikely]] return; }
L_00270008:
    set32(c.r[3], ld32((c.r[19].w[0] + 492u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[3].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FFF0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 419u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[19].w[0] + 504u), 0u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270030u);  if (depth < kMaxDepth) unit_009E(c, 343u, depth + 1u); else { c.pc = 0x0037B600u; return; } if (c.pc != 0x00270030u) [[unlikely]] return; }
L_00270030:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00270058; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00270058; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270050u);  if (depth < kMaxDepth) unit_00CE(c, 44u, depth + 1u); else { c.pc = 0x0043A0F0u; return; } if (c.pc != 0x00270050u) [[unlikely]] return; }
L_00270050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270058u);  if (depth < kMaxDepth) unit_00C5(c, 214u, depth + 1u); else { c.pc = 0x004158A8u; return; } if (c.pc != 0x00270058u) [[unlikely]] return; }
L_00270058:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270064u);  if (depth < kMaxDepth) unit_00CE(c, 223u, depth + 1u); else { c.pc = 0x0043BBF0u; return; } if (c.pc != 0x00270064u) [[unlikely]] return; }
L_00270064:
    st32((c.r[19].w[0]), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 61568ull;
    set32(c.r[6], c.r[17].w[0] + 23376u);
    set32(c.r[7], c.r[22].w[0] + 23456u);
    set32(c.r[8], 0u + 475u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270084u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00270084u) [[unlikely]] return; }
L_00270084:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 16936u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
L_00270098:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270098u | kUnwind; return; } goto L_00270098; } }
    set32(c.r[16], c.r[22].w[0] + 23456u);
    set32(c.r[17], c.r[17].w[0] + 23376u);
    set32(c.r[5], ld32((c.r[19].w[0] + 512u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 484u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700D4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002700D4u) [[unlikely]] return; }
L_002700D4:
    set32(c.r[5], ld32((c.r[19].w[0] + 64u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 485u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700F0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002700F0u) [[unlikely]] return; }
L_002700F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700F8u);  if (depth < kMaxDepth) unit_00CF(c, 113u, depth + 1u); else { c.pc = 0x0043CE78u; return; } if (c.pc != 0x002700F8u) [[unlikely]] return; }
L_002700F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 31728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027010Cu);  if (depth < kMaxDepth) unit_005B(c, 300u, depth + 1u); else { c.pc = 0x0026F068u; return; } if (c.pc != 0x0027010Cu) [[unlikely]] return; }
L_0027010C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270114u);  if (depth < kMaxDepth) unit_005C(c, 339u, depth + 1u); else { c.pc = 0x00272BA0u; return; } if (c.pc != 0x00270114u) [[unlikely]] return; }
L_00270114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027011Cu);  if (depth < kMaxDepth) unit_005C(c, 329u, depth + 1u); else { c.pc = 0x00272AA0u; return; } if (c.pc != 0x0027011Cu) [[unlikely]] return; }
L_0027011C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[7], ld32((c.r[3].w[0] - 31136u)));
    set32(c.r[2], c.r[3].w[0] - 31136u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19772u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19776u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270154u);  if (depth < kMaxDepth) unit_0049(c, 45u, depth + 1u); else { c.pc = 0x00224E98u; return; } if (c.pc != 0x00270154u) [[unlikely]] return; }
L_00270154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027015Cu);  if (depth < kMaxDepth) unit_0057(c, 215u, depth + 1u); else { c.pc = 0x0025EFD0u; return; } if (c.pc != 0x0027015Cu) [[unlikely]] return; }
L_0027015C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19776u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 19772u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270174u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x00270174u) [[unlikely]] return; }
L_00270174:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002701B8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 23360u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701D8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002701D8u) [[unlikely]] return; }
L_002701D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002701E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 520u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270218u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00270218u) [[unlikely]] return; }
L_00270218:
    set32(c.r[18], 0u + 1u);
    st32((c.r[17].w[0]), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 496u), c.r[18].w[0]);
    set32(c.r[4], c.r[17].w[0] + 236u);
    st32((c.r[17].w[0] + 492u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270238u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00270238u) [[unlikely]] return; }
L_00270238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027025C; } }
    st32((c.r[17].w[0] + 500u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027026C; } }
L_0027025C:
    st32((c.r[17].w[0] + 500u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x426F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49807ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
L_0027026C:
    set32(c.r[16], c.r[17].w[0] + 4u);
    set32(c.r[6], 0u + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270284u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00270284u) [[unlikely]] return; }
L_00270284:
    st32((c.r[17].w[0] + 4u), c.f[20]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702ACu);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414D28u; return; } if (c.pc != 0x002702ACu) [[unlikely]] return; }
L_002702AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702B8u);  if (depth < kMaxDepth) unit_00CF(c, 79u, depth + 1u); else { c.pc = 0x0043CB40u; return; } if (c.pc != 0x002702B8u) [[unlikely]] return; }
L_002702B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002702D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702E8u);  if (depth < kMaxDepth) unit_00CF(c, 113u, depth + 1u); else { c.pc = 0x0043CE78u; return; } if (c.pc != 0x002702E8u) [[unlikely]] return; }
L_002702E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002702F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[18].w[0] + 504u), 0u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270330u);  if (depth < kMaxDepth) unit_009E(c, 343u, depth + 1u); else { c.pc = 0x0037B600u; return; } if (c.pc != 0x00270330u) [[unlikely]] return; }
L_00270330:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00270358; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00270358; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270350u);  if (depth < kMaxDepth) unit_00CE(c, 44u, depth + 1u); else { c.pc = 0x0043A0F0u; return; } if (c.pc != 0x00270350u) [[unlikely]] return; }
L_00270350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270358u);  if (depth < kMaxDepth) unit_00C5(c, 214u, depth + 1u); else { c.pc = 0x004158A8u; return; } if (c.pc != 0x00270358u) [[unlikely]] return; }
L_00270358:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027036Cu);  if (depth < kMaxDepth) unit_00CE(c, 223u, depth + 1u); else { c.pc = 0x0043BBF0u; return; } if (c.pc != 0x0027036Cu) [[unlikely]] return; }
L_0027036C:
    st32((c.r[18].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 61568ull;
    set32(c.r[6], c.r[16].w[0] + 23376u);
    set32(c.r[7], c.r[17].w[0] + 23456u);
    set32(c.r[8], 0u + 475u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027038Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0027038Cu) [[unlikely]] return; }
L_0027038C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 16936u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
L_002703A0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002703A0u | kUnwind; return; } goto L_002703A0; } }
    set32(c.r[16], c.r[16].w[0] + 23376u);
    set32(c.r[17], c.r[17].w[0] + 23456u);
    set32(c.r[5], ld32((c.r[18].w[0] + 512u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 484u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703DCu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002703DCu) [[unlikely]] return; }
L_002703DC:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 485u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703F8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002703F8u) [[unlikely]] return; }
L_002703F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270418:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00270438; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270444; } }
L_00270438:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00270444; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027044Cu);  if (depth < kMaxDepth) unit_00C6(c, 385u, depth + 1u); else { c.pc = 0x0041AAE0u; return; } if (c.pc != 0x0027044Cu) [[unlikely]] return; }
L_0027044C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270460:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002704E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002704A4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002704E4; } }
L_002704A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704ACu);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x002704ACu) [[unlikely]] return; }
L_002704AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u - 961u);
    set32(c.r[4], 0u - 960u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002704E4; } }
L_002704E0:
    set32(c.r[5], 0u - 960u);
    c.budget -= 1;
L_002704E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002704F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270508u);  if (depth < kMaxDepth) unit_00C7(c, 23u, depth + 1u); else { c.pc = 0x0041C230u; return; } if (c.pc != 0x00270508u) [[unlikely]] return; }
L_00270508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270528u);  if (depth < kMaxDepth) unit_00C7(c, 24u, depth + 1u); else { c.pc = 0x0041C258u; return; } if (c.pc != 0x00270528u) [[unlikely]] return; }
L_00270528:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270538:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027056Cu);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x0027056Cu) [[unlikely]] return; }
L_0027056C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027060C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 2;
L_00270580:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027058Cu);  if (depth < kMaxDepth) unit_00C7(c, 55u, depth + 1u); else { c.pc = 0x0041C530u; return; } if (c.pc != 0x0027058Cu) [[unlikely]] return; }
L_0027058C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002705BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705A8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002705A8u) [[unlikely]] return; }
L_002705A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705B4u);  if (depth < kMaxDepth) unit_0043(c, 37u, depth + 1u); else { c.pc = 0x0020C850u; return; } if (c.pc != 0x002705B4u) [[unlikely]] return; }
L_002705B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270600; } }
L_002705BC:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[20].w[0] - 31112u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705D0u);  if (depth < kMaxDepth) unit_005C(c, 262u, depth + 1u); else { c.pc = 0x002720B0u; return; } if (c.pc != 0x002705D0u) [[unlikely]] return; }
L_002705D0:
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705E4u);  if (depth < kMaxDepth) unit_005C(c, 137u, depth + 1u); else { c.pc = 0x00270EE0u; return; } if (c.pc != 0x002705E4u) [[unlikely]] return; }
L_002705E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705F4u);  if (depth < kMaxDepth) unit_005C(c, 141u, depth + 1u); else { c.pc = 0x00270FC8u; return; } if (c.pc != 0x002705F4u) [[unlikely]] return; }
L_002705F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270600u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x00270600u) [[unlikely]] return; }
L_00270600:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270580u | kUnwind; return; } goto L_00270580; } }
L_0027060C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270638:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270654u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x00270654u) [[unlikely]] return; }
L_00270654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270680; } }
    c.budget -= 1;
L_00270660:
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027066Cu);  if (depth < kMaxDepth) unit_00C7(c, 47u, depth + 1u); else { c.pc = 0x0041C488u; return; } if (c.pc != 0x0027066Cu) [[unlikely]] return; }
L_0027066C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270678u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x00270678u) [[unlikely]] return; }
L_00270678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270660u | kUnwind; return; } goto L_00270660; } }
L_00270680:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270698:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706BCu);  if (depth < kMaxDepth) unit_00C7(c, 115u, depth + 1u); else { c.pc = 0x0041CAA0u; return; } if (c.pc != 0x002706BCu) [[unlikely]] return; }
L_002706BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706C8u);  if (depth < kMaxDepth) unit_00C7(c, 120u, depth + 1u); else { c.pc = 0x0041CB08u; return; } if (c.pc != 0x002706C8u) [[unlikely]] return; }
L_002706C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706D4u);  if (depth < kMaxDepth) unit_00C7(c, 125u, depth + 1u); else { c.pc = 0x0041CB70u; return; } if (c.pc != 0x002706D4u) [[unlikely]] return; }
L_002706D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002706F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270700u);  if (depth < kMaxDepth) unit_00C7(c, 105u, depth + 1u); else { c.pc = 0x0041CA00u; return; } if (c.pc != 0x00270700u) [[unlikely]] return; }
L_00270700:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270720u);  if (depth < kMaxDepth) unit_00C7(c, 110u, depth + 1u); else { c.pc = 0x0041CA50u; return; } if (c.pc != 0x00270720u) [[unlikely]] return; }
L_00270720:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270730:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 216u)));
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[5], 0u + 44u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 23464u);
    set32(c.r[8], c.r[8].w[0] + 23496u);
    set32(c.r[9], 0u + 367u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707ACu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002707ACu) [[unlikely]] return; }
L_002707AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707D0u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x002707D0u) [[unlikely]] return; }
L_002707D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707DCu);  if (depth < kMaxDepth) unit_0043(c, 31u, depth + 1u); else { c.pc = 0x0020C7B8u; return; } if (c.pc != 0x002707DCu) [[unlikely]] return; }
L_002707DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00270938; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_002707F0:
    set32(c.r[16], c.r[17].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 40u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270808u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00270808u) [[unlikely]] return; }
L_00270808:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 28u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st32((c.r[17].w[0] + 56u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270850u);  if (depth < kMaxDepth) unit_00C7(c, 34u, depth + 1u); else { c.pc = 0x0041C350u; return; } if (c.pc != 0x00270850u) [[unlikely]] return; }
L_00270850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], 0u + 419u);
    set32(c.r[4], ld32((c.r[3].w[0] + 18704u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] + 23464u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[3].w[0] + 23496u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270880u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00270880u) [[unlikely]] return; }
L_00270880:
    set32(c.r[6], ld32((c.r[17].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270898u);  if (depth < kMaxDepth) unit_00C7(c, 25u, depth + 1u); else { c.pc = 0x0041C278u; return; } if (c.pc != 0x00270898u) [[unlikely]] return; }
L_00270898:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708ACu);  if (depth < kMaxDepth) unit_00C7(c, 100u, depth + 1u); else { c.pc = 0x0041C960u; return; } if (c.pc != 0x002708ACu) [[unlikely]] return; }
L_002708AC:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_002708D4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708CCu);  if (depth < kMaxDepth) unit_00C6(c, 286u, depth + 1u); else { c.pc = 0x00419F70u; return; } if (c.pc != 0x002708CCu) [[unlikely]] return; }
L_002708CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002708E4; } }
L_002708D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708E4u);  if (depth < kMaxDepth) unit_00C6(c, 286u, depth + 1u); else { c.pc = 0x00419F70u; return; } if (c.pc != 0x002708E4u) [[unlikely]] return; }
L_002708E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002708F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708F8u);  if (depth < kMaxDepth) unit_00C7(c, 92u, depth + 1u); else { c.pc = 0x0041C8B8u; return; } if (c.pc != 0x002708F8u) [[unlikely]] return; }
L_002708F8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027090Cu);  if (depth < kMaxDepth) unit_005C(c, 137u, depth + 1u); else { c.pc = 0x00270EE0u; return; } if (c.pc != 0x0027090Cu) [[unlikely]] return; }
L_0027090C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270920u);  if (depth < kMaxDepth) unit_005C(c, 138u, depth + 1u); else { c.pc = 0x00270EF0u; return; } if (c.pc != 0x00270920u) [[unlikely]] return; }
L_00270920:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027092Cu);  if (depth < kMaxDepth) unit_0043(c, 32u, depth + 1u); else { c.pc = 0x0020C7C8u; return; } if (c.pc != 0x0027092Cu) [[unlikely]] return; }
L_0027092C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002707F0u | kUnwind; return; } goto L_002707F0; } }
L_00270938:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027095Cu);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x002709F0u; return; } if (c.pc != 0x0027095Cu) [[unlikely]] return; }
L_0027095C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270998:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709B0u);  if (depth < kMaxDepth) unit_0043(c, 31u, depth + 1u); else { c.pc = 0x0020C7B8u; return; } if (c.pc != 0x002709B0u) [[unlikely]] return; }
L_002709B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002709CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709CCu);  if (depth < kMaxDepth) unit_00C7(c, 96u, depth + 1u); else { c.pc = 0x0041C900u; return; } if (c.pc != 0x002709CCu) [[unlikely]] return; }
L_002709CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709D8u);  if (depth < kMaxDepth) unit_00C7(c, 30u, depth + 1u); else { c.pc = 0x0041C300u; return; } if (c.pc != 0x002709D8u) [[unlikely]] return; }
L_002709D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002709F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A34u);  if (depth < kMaxDepth) unit_00C7(c, 72u, depth + 1u); else { c.pc = 0x0041C6C8u; return; } if (c.pc != 0x00270A34u) [[unlikely]] return; }
L_00270A34:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A44u);  if (depth < kMaxDepth) unit_00C7(c, 76u, depth + 1u); else { c.pc = 0x0041C720u; return; } if (c.pc != 0x00270A44u) [[unlikely]] return; }
L_00270A44:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A54u);  if (depth < kMaxDepth) unit_00C7(c, 80u, depth + 1u); else { c.pc = 0x0041C778u; return; } if (c.pc != 0x00270A54u) [[unlikely]] return; }
L_00270A54:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A64u);  if (depth < kMaxDepth) unit_00C7(c, 84u, depth + 1u); else { c.pc = 0x0041C7E8u; return; } if (c.pc != 0x00270A64u) [[unlikely]] return; }
L_00270A64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A74u);  if (depth < kMaxDepth) unit_00C7(c, 88u, depth + 1u); else { c.pc = 0x0041C848u; return; } if (c.pc != 0x00270A74u) [[unlikely]] return; }
L_00270A74:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270A98:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] - 16812u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[6], ld32((c.r[3].w[0] - 16808u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AC0u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00270AC0u) [[unlikely]] return; }
L_00270AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_00270B14; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B0Cu);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270B0Cu) [[unlikely]] return; }
L_00270B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270B24; } }
L_00270B14:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B24u);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270B24u) [[unlikely]] return; }
L_00270B24:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B34u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00270B34u) [[unlikely]] return; }
L_00270B34:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B44u);  if (depth < kMaxDepth) unit_00C7(c, 68u, depth + 1u); else { c.pc = 0x0041C670u; return; } if (c.pc != 0x00270B44u) [[unlikely]] return; }
L_00270B44:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B54u);  if (depth < kMaxDepth) unit_00C7(c, 39u, depth + 1u); else { c.pc = 0x0041C3A8u; return; } if (c.pc != 0x00270B54u) [[unlikely]] return; }
L_00270B54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270B78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_00270BC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BBCu);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270BBCu) [[unlikely]] return; }
L_00270BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270BD4; } }
L_00270BC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BD4u);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270BD4u) [[unlikely]] return; }
L_00270BD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BE4u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00270BE4u) [[unlikely]] return; }
L_00270BE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BF4u);  if (depth < kMaxDepth) unit_00C7(c, 68u, depth + 1u); else { c.pc = 0x0041C670u; return; } if (c.pc != 0x00270BF4u) [[unlikely]] return; }
L_00270BF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C08u);  if (depth < kMaxDepth) unit_00C7(c, 43u, depth + 1u); else { c.pc = 0x0041C400u; return; } if (c.pc != 0x00270C08u) [[unlikely]] return; }
L_00270C08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_00270C74; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C6Cu);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270C6Cu) [[unlikely]] return; }
L_00270C6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270C84; } }
L_00270C74:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C84u);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270C84u) [[unlikely]] return; }
L_00270C84:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C94u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00270C94u) [[unlikely]] return; }
L_00270C94:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CA4u);  if (depth < kMaxDepth) unit_00C7(c, 68u, depth + 1u); else { c.pc = 0x0041C670u; return; } if (c.pc != 0x00270CA4u) [[unlikely]] return; }
L_00270CA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CB4u);  if (depth < kMaxDepth) unit_00C7(c, 39u, depth + 1u); else { c.pc = 0x0041C3A8u; return; } if (c.pc != 0x00270CB4u) [[unlikely]] return; }
L_00270CB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270CD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_00270D24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D1Cu);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270D1Cu) [[unlikely]] return; }
L_00270D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270D34; } }
L_00270D24:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D34u);  if (depth < kMaxDepth) unit_00C5(c, 216u, depth + 1u); else { c.pc = 0x004158D8u; return; } if (c.pc != 0x00270D34u) [[unlikely]] return; }
L_00270D34:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D44u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00270D44u) [[unlikely]] return; }
L_00270D44:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D54u);  if (depth < kMaxDepth) unit_00C7(c, 68u, depth + 1u); else { c.pc = 0x0041C670u; return; } if (c.pc != 0x00270D54u) [[unlikely]] return; }
L_00270D54:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D68u);  if (depth < kMaxDepth) unit_00C7(c, 43u, depth + 1u); else { c.pc = 0x0041C400u; return; } if (c.pc != 0x00270D68u) [[unlikely]] return; }
L_00270D68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DA4u);  if (depth < kMaxDepth) unit_00C7(c, 55u, depth + 1u); else { c.pc = 0x0041C530u; return; } if (c.pc != 0x00270DA4u) [[unlikely]] return; }
L_00270DA4:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DD4u);  if (depth < kMaxDepth) unit_00C7(c, 55u, depth + 1u); else { c.pc = 0x0041C530u; return; } if (c.pc != 0x00270DD4u) [[unlikely]] return; }
L_00270DD4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E08u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00270E08u) [[unlikely]] return; }
L_00270E08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270E18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E34u);  if (depth < kMaxDepth) unit_00C7(c, 47u, depth + 1u); else { c.pc = 0x0041C488u; return; } if (c.pc != 0x00270E34u) [[unlikely]] return; }
L_00270E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E44u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00270E44u) [[unlikely]] return; }
L_00270E44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270E58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E70u);  if (depth < kMaxDepth) unit_00C7(c, 68u, depth + 1u); else { c.pc = 0x0041C670u; return; } if (c.pc != 0x00270E70u) [[unlikely]] return; }
L_00270E70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E98u);  if (depth < kMaxDepth) unit_00C7(c, 76u, depth + 1u); else { c.pc = 0x0041C720u; return; } if (c.pc != 0x00270E98u) [[unlikely]] return; }
L_00270E98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270EA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EC0u);  if (depth < kMaxDepth) unit_00C7(c, 72u, depth + 1u); else { c.pc = 0x0041C6C8u; return; } if (c.pc != 0x00270EC0u) [[unlikely]] return; }
L_00270EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270ED0:
    st32((c.r[5].w[0] + 80u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270EE0:
    st32((c.r[5].w[0] + 84u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 88u), c.f[12]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00270F88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00270F4C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270F8C; } }
L_00270F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F54u);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x00270F54u) [[unlikely]] return; }
L_00270F54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u - 961u);
    set32(c.r[4], 0u - 960u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270F8C; } }
L_00270F88:
    set32(c.r[16], 0u - 960u);
    c.budget -= 1;
L_00270F8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00270FAC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FA8u);  if (depth < kMaxDepth) unit_00C7(c, 60u, depth + 1u); else { c.pc = 0x0041C5A0u; return; } if (c.pc != 0x00270FA8u) [[unlikely]] return; }
L_00270FA8:
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    c.budget -= 1;
L_00270FAC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270FC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027105C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00271020; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271060; } }
L_00271020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271028u);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x00271028u) [[unlikely]] return; }
L_00271028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u - 961u);
    set32(c.r[4], 0u - 960u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271060; } }
L_0027105C:
    set32(c.r[5], 0u - 960u);
    c.budget -= 1;
L_00271060:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027106Cu);  if (depth < kMaxDepth) unit_00C7(c, 60u, depth + 1u); else { c.pc = 0x0041C5A0u; return; } if (c.pc != 0x0027106Cu) [[unlikely]] return; }
L_0027106C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271080:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027110C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002710D0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271110; } }
L_002710D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710D8u);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x002710D8u) [[unlikely]] return; }
L_002710D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u - 961u);
    set32(c.r[4], 0u - 960u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[6].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271110; } }
L_0027110C:
    set32(c.r[6], 0u - 960u);
    c.budget -= 1;
L_00271110:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271120u);  if (depth < kMaxDepth) unit_00C7(c, 64u, depth + 1u); else { c.pc = 0x0041C600u; return; } if (c.pc != 0x00271120u) [[unlikely]] return; }
L_00271120:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[6], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271164u);  if (depth < kMaxDepth) unit_00C6(c, 244u, depth + 1u); else { c.pc = 0x00419AB0u; return; } if (c.pc != 0x00271164u) [[unlikely]] return; }
L_00271164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271190u);  if (depth < kMaxDepth) unit_00C7(c, 80u, depth + 1u); else { c.pc = 0x0041C778u; return; } if (c.pc != 0x00271190u) [[unlikely]] return; }
L_00271190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002711A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711B8u);  if (depth < kMaxDepth) unit_00C7(c, 84u, depth + 1u); else { c.pc = 0x0041C7E8u; return; } if (c.pc != 0x002711B8u) [[unlikely]] return; }
L_002711B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002711C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711E0u);  if (depth < kMaxDepth) unit_00C7(c, 88u, depth + 1u); else { c.pc = 0x0041C848u; return; } if (c.pc != 0x002711E0u) [[unlikely]] return; }
L_002711E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002711F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271230; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    c.f[1] = fp::mul(c.f[13], c.f[0]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271230u);  if (depth < kMaxDepth) unit_00C8(c, 307u, depth + 1u); else { c.pc = 0x00422518u; return; } if (c.pc != 0x00271230u) [[unlikely]] return; }
L_00271230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271264u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x00271264u) [[unlikely]] return; }
L_00271264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271294; } }
    c.budget -= 1;
L_00271270:
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271280u);  if (depth < kMaxDepth) unit_00C7(c, 51u, depth + 1u); else { c.pc = 0x0041C4D0u; return; } if (c.pc != 0x00271280u) [[unlikely]] return; }
L_00271280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027128Cu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x0027128Cu) [[unlikely]] return; }
L_0027128C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271270u | kUnwind; return; } goto L_00271270; } }
L_00271294:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002712B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 30528u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] - 30624u);
    c.budget -= 10;
L_002712D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712E4u);  if (depth < kMaxDepth) unit_00D8(c, 81u, depth + 1u); else { c.pc = 0x004631B8u; return; } if (c.pc != 0x002712E4u) [[unlikely]] return; }
L_002712E4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271314; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271318; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271314u);  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x004655C0u; return; } if (c.pc != 0x00271314u) [[unlikely]] return; }
L_00271314:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00271318:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002712D8u | kUnwind; return; } goto L_002712D8; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027137Cu);  if (depth < kMaxDepth) unit_00D8(c, 122u, depth + 1u); else { c.pc = 0x00463BD8u; return; } if (c.pc != 0x0027137Cu) [[unlikely]] return; }
L_0027137C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271384u);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x002712B0u; return; } if (c.pc != 0x00271384u) [[unlikely]] return; }
L_00271384:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], c.r[16].w[0] - 30672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271394u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x00271394u) [[unlikely]] return; }
L_00271394:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00271458; } }
    set32(c.r[18], 0u + 8u);
    c.budget -= 2;
L_002713A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027142C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002713E8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271440; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713E0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002713E0u) [[unlikely]] return; }
L_002713E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271440; } }
L_002713E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0027140C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713FCu);  if (depth < kMaxDepth) unit_00D8(c, 81u, depth + 1u); else { c.pc = 0x004631B8u; return; } if (c.pc != 0x002713FCu) [[unlikely]] return; }
L_002713FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00271420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271434; } }
L_0027140C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271418u);  if (depth < kMaxDepth) unit_00D8(c, 103u, depth + 1u); else { c.pc = 0x00463718u; return; } if (c.pc != 0x00271418u) [[unlikely]] return; }
L_00271418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271434; } }
L_00271420:
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271440; } }
L_0027142C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00271434:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00271440:
    set32(c.r[4], c.r[19].w[0] - 30672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027144Cu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x0027144Cu) [[unlikely]] return; }
L_0027144C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002713A8u | kUnwind; return; } goto L_002713A8; } }
L_00271458:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271478:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 255u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 18704u)));
    set32(c.r[17], c.r[16].w[0] - 30672u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714C0u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x002714C0u) [[unlikely]] return; }
L_002714C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714CCu);  if (depth < kMaxDepth) unit_0043(c, 31u, depth + 1u); else { c.pc = 0x0020C7B8u; return; } if (c.pc != 0x002714CCu) [[unlikely]] return; }
L_002714CC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002714E4; } }
    c.budget -= 1;
L_002714E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002714E4:
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[4], c.r[16].w[0] - 30672u);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714F8u);  if (depth < kMaxDepth) unit_0043(c, 32u, depth + 1u); else { c.pc = 0x0020C7C8u; return; } if (c.pc != 0x002714F8u) [[unlikely]] return; }
L_002714F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002714E0u | kUnwind; return; } goto L_002714E0; } }
    set32(c.r[16], c.r[17].w[0] - 31080u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 24u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271518u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00271518u) [[unlikely]] return; }
L_00271518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 31080u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027153Cu);  if (depth < kMaxDepth) unit_00D8(c, 25u, depth + 1u); else { c.pc = 0x00462740u; return; } if (c.pc != 0x0027153Cu) [[unlikely]] return; }
L_0027153C:
    set32(c.r[4], c.r[19].w[0] - 31056u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271550u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00271550u) [[unlikely]] return; }
L_00271550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271558u);  if (depth < kMaxDepth) unit_00D8(c, 39u, depth + 1u); else { c.pc = 0x00462918u; return; } if (c.pc != 0x00271558u) [[unlikely]] return; }
L_00271558:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271578:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271588u);  if (depth < kMaxDepth) unit_00D8(c, 54u, depth + 1u); else { c.pc = 0x00462BB0u; return; } if (c.pc != 0x00271588u) [[unlikely]] return; }
L_00271588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271590u);  if (depth < kMaxDepth) unit_00D8(c, 38u, depth + 1u); else { c.pc = 0x004628F0u; return; } if (c.pc != 0x00271590u) [[unlikely]] return; }
L_00271590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 30672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715A0u);  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C4D0u; return; } if (c.pc != 0x002715A0u) [[unlikely]] return; }
L_002715A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002715B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 18096u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002715D0u) [[unlikely]] return; }
L_002715D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715E4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002715E4u) [[unlikely]] return; }
L_002715E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002715F8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027160C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18096u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0027160C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00271620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18080u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00271620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00271680; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027165C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00271670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271698; } }
L_0027165C:
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271690; } }
L_00271670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    c.r[5].d[0] = c.r[5].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271698; } }
L_00271680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    c.r[5].d[0] = c.r[5].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271698; } }
L_00271690:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    c.r[5].d[0] = c.r[5].d[0] | 10496ull;
    c.budget -= 2;
L_00271698:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716A8u);  if (depth < kMaxDepth) unit_00D9(c, 65u, depth + 1u); else { c.pc = 0x00464EF8u; return; } if (c.pc != 0x002716A8u) [[unlikely]] return; }
L_002716A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002716B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002716C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31056u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[5].w[0] + 192u), c.r[7].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716F4u);  if (depth < kMaxDepth) unit_00D8(c, 57u, depth + 1u); else { c.pc = 0x00462C10u; return; } if (c.pc != 0x002716F4u) [[unlikely]] return; }
L_002716F4:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_002716F8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002716F8u | kUnwind; return; } goto L_002716F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271734u);  if (depth < kMaxDepth) unit_00D8(c, 107u, depth + 1u); else { c.pc = 0x004637F8u; return; } if (c.pc != 0x00271734u) [[unlikely]] return; }
L_00271734:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271748:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271770u);  if (depth < kMaxDepth) unit_00C5(c, 218u, depth + 1u); else { c.pc = 0x00415908u; return; } if (c.pc != 0x00271770u) [[unlikely]] return; }
L_00271770:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271780u);  if (depth < kMaxDepth) unit_00D8(c, 63u, depth + 1u); else { c.pc = 0x00462D38u; return; } if (c.pc != 0x00271780u) [[unlikely]] return; }
L_00271780:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002717C8; } }
    set32(c.r[18], 0u + 2u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002717AC; } }
L_00271798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717A0u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x002717A0u) [[unlikely]] return; }
L_002717A0:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717ACu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x002717ACu) [[unlikely]] return; }
L_002717AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717B8u);  if (depth < kMaxDepth) unit_00D8(c, 107u, depth + 1u); else { c.pc = 0x004637F8u; return; } if (c.pc != 0x002717B8u) [[unlikely]] return; }
L_002717B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002717C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271798u | kUnwind; return; } goto L_00271798; } }
L_002717C8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717D4u);  if (depth < kMaxDepth) unit_00C5(c, 217u, depth + 1u); else { c.pc = 0x004158F0u; return; } if (c.pc != 0x002717D4u) [[unlikely]] return; }
L_002717D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002717F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[7], c.r[7].w[0] + 23512u);
    set32(c.r[8], c.r[8].w[0] + 23544u);
    set32(c.r[9], 0u + 795u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271860u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00271860u) [[unlikely]] return; }
L_00271860:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271870u);  if (depth < kMaxDepth) unit_00C5(c, 218u, depth + 1u); else { c.pc = 0x00415908u; return; } if (c.pc != 0x00271870u) [[unlikely]] return; }
L_00271870:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[19], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271898u);  if (depth < kMaxDepth) unit_00D9(c, 53u, depth + 1u); else { c.pc = 0x00464A68u; return; } if (c.pc != 0x00271898u) [[unlikely]] return; }
L_00271898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718A0u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x002718A0u) [[unlikely]] return; }
L_002718A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718ACu);  if (depth < kMaxDepth) unit_005C(c, 166u, depth + 1u); else { c.pc = 0x00271350u; return; } if (c.pc != 0x002718ACu) [[unlikely]] return; }
L_002718AC:
    set32(c.r[4], c.r[21].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718B8u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x002718B8u) [[unlikely]] return; }
L_002718B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718C4u);  if (depth < kMaxDepth) unit_00D8(c, 107u, depth + 1u); else { c.pc = 0x004637F8u; return; } if (c.pc != 0x002718C4u) [[unlikely]] return; }
L_002718C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271898u | kUnwind; return; } goto L_00271898; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718D8u);  if (depth < kMaxDepth) unit_00C5(c, 217u, depth + 1u); else { c.pc = 0x004158F0u; return; } if (c.pc != 0x002718D8u) [[unlikely]] return; }
L_002718D8:
    set32(c.r[4], ld32((c.r[30].w[0] + 18712u)));
    set32(c.r[6], c.r[23].w[0] + 23512u);
    set32(c.r[7], c.r[22].w[0] + 23544u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[8], 0u + 847u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718F4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002718F4u) [[unlikely]] return; }
L_002718F4:
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
L_00271928:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271944u);  if (depth < kMaxDepth) unit_00D8(c, 76u, depth + 1u); else { c.pc = 0x00463038u; return; } if (c.pc != 0x00271944u) [[unlikely]] return; }
L_00271944:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31056u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[3].w[0] + 192u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271978:
    st32((c.r[4].w[0] + 16u), c.f[13]);
    st32((c.r[4].w[0] + 12u), c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271988:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[22] = c.f[14];
    c.f[21] = c.f[13];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 30672u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719F0u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x002719F0u) [[unlikely]] return; }
L_002719F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    c.r[18].d[0] = ld8((c.r[16].w[0] + 24u));
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    st32((c.r[16].w[0] + 36u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[17].d[0] & 15ull;
    st32((c.r[16].w[0] + 60u), c.f[22]);
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    st32((c.r[16].w[0] + 48u), c.f[21]);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] >> 24);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A38u);  if (depth < kMaxDepth) unit_00D8(c, 88u, depth + 1u); else { c.pc = 0x00463410u; return; } if (c.pc != 0x00271A38u) [[unlikely]] return; }
L_00271A38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A48u);  if (depth < kMaxDepth) unit_005C(c, 262u, depth + 1u); else { c.pc = 0x002720B0u; return; } if (c.pc != 0x00271A48u) [[unlikely]] return; }
L_00271A48:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A74u);  if (depth < kMaxDepth) unit_00D8(c, 95u, depth + 1u); else { c.pc = 0x00463588u; return; } if (c.pc != 0x00271A74u) [[unlikely]] return; }
L_00271A74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], 0u + 127u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AB0u);  if (depth < kMaxDepth) unit_00D8(c, 97u, depth + 1u); else { c.pc = 0x004635F8u; return; } if (c.pc != 0x00271AB0u) [[unlikely]] return; }
L_00271AB0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AC0u);  if (depth < kMaxDepth) unit_00D8(c, 104u, depth + 1u); else { c.pc = 0x00463770u; return; } if (c.pc != 0x00271AC0u) [[unlikely]] return; }
L_00271AC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271ACCu);  if (depth < kMaxDepth) unit_00D8(c, 90u, depth + 1u); else { c.pc = 0x004634A0u; return; } if (c.pc != 0x00271ACCu) [[unlikely]] return; }
L_00271ACC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271B08:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[7], 0u + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.f[22] = c.f[13];
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[21] = c.f[14];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 30672u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B70u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00271B70u) [[unlikely]] return; }
L_00271B70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 8));
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[19].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    st32((c.r[18].w[0] + 56u), c.f[22]);
    c.r[5].d[0] = c.r[16].d[0] & 15ull;
    st32((c.r[18].w[0] + 60u), c.f[21]);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] >> 24);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BB0u);  if (depth < kMaxDepth) unit_00D9(c, 75u, depth + 1u); else { c.pc = 0x00465308u; return; } if (c.pc != 0x00271BB0u) [[unlikely]] return; }
L_00271BB0:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00271C4C; } }
    c.f[20] = fp::mul(c.f[20], c.f[21]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BD0u);  if (depth < kMaxDepth) unit_005C(c, 262u, depth + 1u); else { c.pc = 0x002720B0u; return; } if (c.pc != 0x00271BD0u) [[unlikely]] return; }
L_00271BD0:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[20]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 44u), c.f[20]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C24u);  if (depth < kMaxDepth) unit_00D9(c, 87u, depth + 1u); else { c.pc = 0x004656B0u; return; } if (c.pc != 0x00271C24u) [[unlikely]] return; }
L_00271C24:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C34u);  if (depth < kMaxDepth) unit_00D9(c, 91u, depth + 1u); else { c.pc = 0x00465840u; return; } if (c.pc != 0x00271C34u) [[unlikely]] return; }
L_00271C34:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C40u);  if (depth < kMaxDepth) unit_00D9(c, 80u, depth + 1u); else { c.pc = 0x00465478u; return; } if (c.pc != 0x00271C40u) [[unlikely]] return; }
L_00271C40:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271C5C; } }
L_00271C4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C58u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00271C58u) [[unlikely]] return; }
L_00271C58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00271C5C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271C90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.f[24]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.f[23]);
    c.f[24] = c.f[13];
    st32((c.r[29].w[0] + 48u), c.f[22]);
    c.f[23] = c.f[15];
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.f[22] = c.f[16];
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.f[21] = c.f[17];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CD4u);  if (depth < kMaxDepth) unit_005C(c, 262u, depth + 1u); else { c.pc = 0x002720B0u; return; } if (c.pc != 0x00271CD4u) [[unlikely]] return; }
L_00271CD4:
    c.f[4] = c.f[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[20] = fp::mul(c.f[20], c.f[4]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271E14; } }
    c.f[20] = fp::mul(c.f[20], c.f[21]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00271D14; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00271D3C; } }
L_00271D14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 44u), c.f[20]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 40u), c.f[4]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D3Cu);  if (depth < kMaxDepth) unit_00D8(c, 95u, depth + 1u); else { c.pc = 0x00463588u; return; } if (c.pc != 0x00271D3Cu) [[unlikely]] return; }
L_00271D3C:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00271D90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], 0u + 127u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[24], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D8Cu);  if (depth < kMaxDepth) unit_00D8(c, 97u, depth + 1u); else { c.pc = 0x004635F8u; return; } if (c.pc != 0x00271D8Cu) [[unlikely]] return; }
L_00271D8C:
    st32((c.r[16].w[0] + 48u), c.f[24]);
    c.budget -= 1;
L_00271D90:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00271EC0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00271DE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5C80000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DDCu);  if (depth < kMaxDepth) unit_00D8(c, 100u, depth + 1u); else { c.pc = 0x00463670u; return; } if (c.pc != 0x00271DDCu) [[unlikely]] return; }
L_00271DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271E08; } }
L_00271DE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45C40000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E08u);  if (depth < kMaxDepth) unit_00D8(c, 100u, depth + 1u); else { c.pc = 0x00463670u; return; } if (c.pc != 0x00271E08u) [[unlikely]] return; }
L_00271E08:
    st32((c.r[16].w[0] + 52u), c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271EC0; } }
L_00271E14:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00271E64; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00271E64; } }
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00271E64; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00271EC0; } }
L_00271E64:
    c.f[2] = fp::mul(c.f[20], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[22]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[21]);
    st32((c.r[16].w[0] + 44u), c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[4]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EC0u);  if (depth < kMaxDepth) unit_00D9(c, 87u, depth + 1u); else { c.pc = 0x004656B0u; return; } if (c.pc != 0x00271EC0u) [[unlikely]] return; }
L_00271EC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 64u));
    c.f[23] = ld32((c.r[29].w[0] + 56u));
    c.f[22] = ld32((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00271F14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F0Cu);  if (depth < kMaxDepth) unit_00D9(c, 83u, depth + 1u); else { c.pc = 0x00465520u; return; } if (c.pc != 0x00271F0Cu) [[unlikely]] return; }
L_00271F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271F20; } }
L_00271F14:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F20u);  if (depth < kMaxDepth) unit_00D8(c, 93u, depth + 1u); else { c.pc = 0x00463518u; return; } if (c.pc != 0x00271F20u) [[unlikely]] return; }
L_00271F20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = c.r[5].d[0] | 256ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F50u);  if (depth < kMaxDepth) unit_00D9(c, 65u, depth + 1u); else { c.pc = 0x00464EF8u; return; } if (c.pc != 0x00271F50u) [[unlikely]] return; }
L_00271F50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = c.r[5].d[0] | 1280ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F68u);  if (depth < kMaxDepth) unit_00D9(c, 89u, depth + 1u); else { c.pc = 0x00465790u; return; } if (c.pc != 0x00271F68u) [[unlikely]] return; }
L_00271F68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271F78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 30672u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FACu);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x00271FACu) [[unlikely]] return; }
L_00271FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271FD4; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00271FB8:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    set32(c.r[4], c.r[19].w[0] - 30672u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[18].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FCCu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x00271FCCu) [[unlikely]] return; }
L_00271FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271FB8u | kUnwind; return; } goto L_00271FB8; } }
L_00271FD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00272020; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA4000000u);
    set32(c.r[5], 0u + 127u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272018u);  if (depth < kMaxDepth) unit_00D9(c, 67u, depth + 1u); else { c.pc = 0x004650E0u; return; } if (c.pc != 0x00272018u) [[unlikely]] return; }
L_00272018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272088; } }
L_00272020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA4000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027202Cu);  if (depth < kMaxDepth) unit_00D9(c, 67u, depth + 1u); else { c.pc = 0x004650E0u; return; } if (c.pc != 0x0027202Cu) [[unlikely]] return; }
L_0027202C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32800ull;
    set32(c.r[6], 0u + 2048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272040u);  if (depth < kMaxDepth) unit_00A0(c, 224u, depth + 1u); else { c.pc = 0x00382B00u; return; } if (c.pc != 0x00272040u) [[unlikely]] return; }
L_00272040:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[7].d[0] = c.r[2].d[0] | 48ull;
    c.r[5].d[0] = 0ull | 32784ull;
    set32(c.r[6], 0u + 2048u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027205Cu);  if (depth < kMaxDepth) unit_00A0(c, 224u, depth + 1u); else { c.pc = 0x00382B00u; return; } if (c.pc != 0x0027205Cu) [[unlikely]] return; }
L_0027205C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32800ull;
    set32(c.r[6], 0u + 2049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272070u);  if (depth < kMaxDepth) unit_00A0(c, 224u, depth + 1u); else { c.pc = 0x00382B00u; return; } if (c.pc != 0x00272070u) [[unlikely]] return; }
L_00272070:
    c.r[7].d[0] = c.r[2].d[0] & 4047ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32784ull;
    set32(c.r[6], 0u + 2049u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272088u);  if (depth < kMaxDepth) unit_00A0(c, 224u, depth + 1u); else { c.pc = 0x00382B00u; return; } if (c.pc != 0x00272088u) [[unlikely]] return; }
L_00272088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272098:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[12]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002720B0:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002720C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002720D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002720E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002721CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] - 16948u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[7], ld32((c.r[17].w[0] - 16976u)));
    set32(c.r[8], ld32((c.r[18].w[0] - 16972u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 16944u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272130u);  if (depth < kMaxDepth) unit_005C(c, 306u, depth + 1u); else { c.pc = 0x002727B0u; return; } if (c.pc != 0x00272130u) [[unlikely]] return; }
L_00272130:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] - 16976u)));
    set32(c.r[16], c.r[16].w[0] + 208u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] - 16972u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 48u);
    set32(c.r[10], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027215Cu);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00383750u; return; } if (c.pc != 0x0027215Cu) [[unlikely]] return; }
L_0027215C:
    set32(c.r[2], ld32((c.r[17].w[0] - 16976u)));
    set32(c.r[5], 0u - 64u);
    set32(c.r[3], ld32((c.r[18].w[0] - 16972u)));
    set32(c.r[4], 0u - 32u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[6].d[0] = ld64((c.r[16].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[5].d[0] = ld64((c.r[16].w[0] + 96u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u - 512u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[3].d[0] = c.r[2].d[0] & 511ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 96u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 56u), c.r[6].d[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721BCu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x002721BCu) [[unlikely]] return; }
L_002721BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721CCu);  if (depth < kMaxDepth) unit_00A0(c, 266u, depth + 1u); else { c.pc = 0x003839E8u; return; } if (c.pc != 0x002721CCu) [[unlikely]] return; }
L_002721CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 8220u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 8224u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002721F8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 16976u)));
    set32(c.r[9], 0u - 64u);
    set32(c.r[3], ld32((c.r[8].w[0] - 16972u)));
    set32(c.r[2], 0u - 32u);
    set32(c.r[16], c.r[16].w[0] + 63u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[8].w[0] + 23568u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[19].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] << 1);
    c.r[10].d[0] = ld64((c.r[8].w[0] + 23568u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[3].d[0] = ld64((c.r[9].w[0] + 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[10].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));
    set32(c.r[22], c.r[17].w[0] << 6);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722A0u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x002722A0u) [[unlikely]] return; }
L_002722A0:
    set32(c.r[20], c.r[22].w[0] >> 4);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722B4u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x002722B4u) [[unlikely]] return; }
L_002722B4:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722D0u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x002722D0u) [[unlikely]] return; }
L_002722D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722E0u);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x002722E0u) [[unlikely]] return; }
L_002722E0:
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = 0ull | 40960ull;
    c.r[6].d[0] = c.r[6].d[0] << 36;
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272300u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272300u) [[unlikely]] return; }
L_00272300:
    c.r[17].d[0] = c.r[17].d[0] << 32;
    set32(c.r[6], 0u + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u + 82u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027231Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0027231Cu) [[unlikely]] return; }
L_0027231C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272328u);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x00272328u) [[unlikely]] return; }
L_00272328:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_00272448; } }
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[30], c.r[21].w[0] - 1u);
    c.r[17].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
L_00272340:
    c.r[16].d[0] = c.r[18].d[0] ^ c.r[30].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272360u);  if (depth < kMaxDepth) unit_00A1(c, 74u, depth + 1u); else { c.pc = 0x00384AA8u; return; } if (c.pc != 0x00272360u) [[unlikely]] return; }
L_00272360:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272370u);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x00272370u) [[unlikely]] return; }
L_00272370:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[23].d[0] << 32;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 81u);
    set32(c.r[23], c.r[23].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272390u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272390u) [[unlikely]] return; }
L_00272390:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.r[6].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723A8u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x002723A8u) [[unlikely]] return; }
L_002723A8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723B4u);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x002723B4u) [[unlikely]] return; }
L_002723B4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723C4u);  if (depth < kMaxDepth) unit_00A1(c, 80u, depth + 1u); else { c.pc = 0x00384C30u; return; } if (c.pc != 0x002723C4u) [[unlikely]] return; }
L_002723C4:
    c.r[3].d[0] = c.r[16].d[0] << 15;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 44;
    c.r[3].d[0] = c.r[17].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 8u), 0ull);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00272414; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027240Cu);  if (depth < kMaxDepth) unit_00A1(c, 72u, depth + 1u); else { c.pc = 0x00384A18u; return; } if (c.pc != 0x0027240Cu) [[unlikely]] return; }
L_0027240C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272434; } }
L_00272414:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272434u);  if (depth < kMaxDepth) unit_00A1(c, 76u, depth + 1u); else { c.pc = 0x00384B20u; return; } if (c.pc != 0x00272434u) [[unlikely]] return; }
L_00272434:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272340u | kUnwind; return; } goto L_00272340; } }
L_00272448:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272454u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x00272454u) [[unlikely]] return; }
L_00272454:
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
L_00272488:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[9], ld32((c.r[2].w[0] - 16976u)));
    set32(c.r[10], 0u - 64u);
    set32(c.r[11], ld32((c.r[3].w[0] - 16972u)));
    set32(c.r[4], 0u - 32u);
    set32(c.r[3], c.r[9].w[0] + 63u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[11].w[0] + 31u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[8].w[0] + 23584u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[6].d[0] = ld64((c.r[8].w[0] + 23584u));
    c.f[1] = c.r[11].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.r[2].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[8].w[0] << 4);
    c.r[10].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], 0u + 8u);
    set32(c.r[13], c.r[12].w[0] << 4);
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    fpu_div(c, 1u, c.f[1], c.f[0]);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[5].d[0];
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[10].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[13].w[0]);
    c.budget -= 45;
    { const bool t = c.r[12].d[0] == c.r[11].d[0];  if (t) { goto L_00272580; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00272560; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
L_00272560:
    c.f[0] = c.r[12].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[13].w[0] - 16u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[12], c.f[1]);
    c.budget -= 8;
L_00272580:
    set32(c.r[2], c.r[12].w[0] >> 31);
    set32(c.r[3], c.r[8].w[0] >> 31);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], 0u + 2048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[12].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.r[7].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725E8u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x002725E8u) [[unlikely]] return; }
L_002725E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725F4u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x002725F4u) [[unlikely]] return; }
L_002725F4:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027260Cu);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x0027260Cu) [[unlikely]] return; }
L_0027260C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027261Cu);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x0027261Cu) [[unlikely]] return; }
L_0027261C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272630u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272630u) [[unlikely]] return; }
L_00272630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272644u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272644u) [[unlikely]] return; }
L_00272644:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 68u);
    set32(c.r[5], 0u + 66u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272658u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272658u) [[unlikely]] return; }
L_00272658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = 0ull | 32832ull;
    c.r[3].d[0] = c.r[3].d[0] << 17;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 16964u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272684u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272684u) [[unlikely]] return; }
L_00272684:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272698u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x00272698u) [[unlikely]] return; }
L_00272698:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = 0ull | 62784ull;
    c.r[3].d[0] = c.r[3].d[0] << 21;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726C8u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x002726C8u) [[unlikely]] return; }
L_002726C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 342u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726DCu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x002726DCu) [[unlikely]] return; }
L_002726DC:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726FCu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x002726FCu) [[unlikely]] return; }
L_002726FC:
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027271Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0027271Cu) [[unlikely]] return; }
L_0027271C:
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027274Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0027274Cu) [[unlikely]] return; }
L_0027274C:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027277Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0027277Cu) [[unlikely]] return; }
L_0027277C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272788u);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x00272788u) [[unlikely]] return; }
L_00272788:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272794u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x00272794u) [[unlikely]] return; }
L_00272794:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002727B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[2].w[0] + 23584u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[5], 0u + 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 23584u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 8u));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272818u);  if (depth < kMaxDepth) unit_00DD(c, 228u, depth + 1u); else { c.pc = 0x00476928u; return; } if (c.pc != 0x00272818u) [[unlikely]] return; }
L_00272818:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272828u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x00272828u) [[unlikely]] return; }
L_00272828:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00780000u);
    mmi::por(c.r[3], c.r[0], c.r[0]);
    set32(c.r[18], c.r[18].w[0] + 288u);
    set32(c.r[7], c.r[16].w[0] >> 31);
    st128((c.r[18].w[0]) & ~15u, c.r[3]);
    set32(c.r[17], c.r[18].w[0] - 80u);
    set32(c.r[3], 0u - 32768u);
    set32(c.r[7], c.r[16].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = ld64((c.r[17].w[0] + 80u));
    set32(c.r[10], c.r[16].w[0] + 31u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[11], c.r[7].w[0] + 31u);
    set32(c.r[3], 0u + 8u);
    c.r[6].d[0] = c.r[4].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[16], c.r[16].w[0] + 62u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[10].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 62u);
    c.r[10].d[0] = ld64((c.r[17].w[0] + 88u));
    if (c.r[4].d[0] != 0) c.r[7].d[0] = c.r[11].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u - 16u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 5));
    c.r[10].d[0] = c.r[10].d[0] & c.r[4].d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 5));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 14u);
    st64((c.r[17].w[0] + 80u), c.r[5].d[0]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    set32(c.r[7], c.r[7].w[0] << 22);
    set32(c.r[20], c.r[20].w[0] << 16);
    st64((c.r[17].w[0] + 88u), c.r[10].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 16));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728F4u);  if (depth < kMaxDepth) unit_00A0(c, 249u, depth + 1u); else { c.pc = 0x00383378u; return; } if (c.pc != 0x002728F4u) [[unlikely]] return; }
L_002728F4:
    st64((c.r[17].w[0] + 128u), 0ull);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272904u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00272904u) [[unlikely]] return; }
L_00272904:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272914u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00272914u) [[unlikely]] return; }
L_00272914:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272920u);  if (depth < kMaxDepth) unit_00A0(c, 253u, depth + 1u); else { c.pc = 0x00383668u; return; } if (c.pc != 0x00272920u) [[unlikely]] return; }
L_00272920:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272934u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x00272934u) [[unlikely]] return; }
L_00272934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272940u);  if (depth < kMaxDepth) unit_00A1(c, 68u, depth + 1u); else { c.pc = 0x00384998u; return; } if (c.pc != 0x00272940u) [[unlikely]] return; }
L_00272940:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272958u);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x00272958u) [[unlikely]] return; }
L_00272958:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272968u);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x00272968u) [[unlikely]] return; }
L_00272968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027297Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0027297Cu) [[unlikely]] return; }
L_0027297C:
    c.r[19].d[0] = c.r[19].d[0] << 8;
    c.r[21].d[0] = c.r[21].d[0] << 16;
    c.r[19].d[0] = c.r[30].d[0] | c.r[19].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] | c.r[21].d[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027299Cu);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x0027299Cu) [[unlikely]] return; }
L_0027299C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729B0u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x002729B0u) [[unlikely]] return; }
L_002729B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].d[0] = c.r[6].d[0] | 10240ull;
    set32(c.r[5], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729C8u);  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00384D30u; return; } if (c.pc != 0x002729C8u) [[unlikely]] return; }
L_002729C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729D4u);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x002729D4u) [[unlikely]] return; }
L_002729D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729E0u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x002729E0u) [[unlikely]] return; }
L_002729E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729ECu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x002729ECu) [[unlikely]] return; }
L_002729EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729FCu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x002729FCu) [[unlikely]] return; }
L_002729FC:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A0Cu);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x00272A0Cu) [[unlikely]] return; }
L_00272A0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A1Cu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00272A1Cu) [[unlikely]] return; }
L_00272A1C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A28u);  if (depth < kMaxDepth) unit_00DD(c, 236u, depth + 1u); else { c.pc = 0x004769D8u; return; } if (c.pc != 0x00272A28u) [[unlikely]] return; }
L_00272A28:
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
L_00272A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] - 16976u), c.r[4].w[0]);
    st32((c.r[3].w[0] - 16972u), c.r[5].w[0]);
    st32((c.r[11].w[0] - 16960u), c.r[6].w[0]);
    st32((c.r[12].w[0] - 16956u), c.r[7].w[0]);
    st32((c.r[13].w[0] - 16968u), c.r[8].w[0]);
    st32((c.r[14].w[0] - 16964u), c.r[9].w[0]);
    st32((c.r[15].w[0] - 16952u), c.r[10].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], ld32((c.r[2].w[0] - 16976u)));
    set32(c.r[8], ld32((c.r[3].w[0] - 16972u)));
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272ACCu);  if (depth < kMaxDepth) unit_005C(c, 306u, depth + 1u); else { c.pc = 0x002727B0u; return; } if (c.pc != 0x00272ACCu) [[unlikely]] return; }
L_00272ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 8220u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272AE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AF8u);  if (depth < kMaxDepth) unit_00CF(c, 268u, depth + 1u); else { c.pc = 0x0043DE48u; return; } if (c.pc != 0x00272AF8u) [[unlikely]] return; }
L_00272AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8220u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 8224u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B38u);  if (depth < kMaxDepth) unit_005C(c, 331u, depth + 1u); else { c.pc = 0x00272AE8u; return; } if (c.pc != 0x00272B38u) [[unlikely]] return; }
L_00272B38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16948u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 16944u)));
    set32(c.r[4], c.r[4].w[0] + 208u);
    st32((c.r[3].w[0] - 16948u), 0u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    st32((c.r[2].w[0] - 16944u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B8Cu);  if (depth < kMaxDepth) unit_00A0(c, 266u, depth + 1u); else { c.pc = 0x003839E8u; return; } if (c.pc != 0x00272B8Cu) [[unlikely]] return; }
L_00272B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272BA8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 16948u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00272C20; } }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_00272BF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C14u);  if (depth < kMaxDepth) unit_0041(c, 255u, depth + 1u); else { c.pc = 0x00206030u; return; } if (c.pc != 0x00272C14u) [[unlikely]] return; }
L_00272C14:
    set32(c.r[3], ld32((c.r[16].w[0] - 16948u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272BF8u | kUnwind; return; } goto L_00272BF8; } }
L_00272C20:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C34u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00272C34u) [[unlikely]] return; }
L_00272C34:
    set32(c.r[17], c.r[18].w[0] - 16936u);
    set32(c.r[7], ld32((c.r[18].w[0] - 16936u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C50u);  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x002721F8u; return; } if (c.pc != 0x00272C50u) [[unlikely]] return; }
L_00272C50:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C68u);  if (depth < kMaxDepth) unit_005C(c, 288u, depth + 1u); else { c.pc = 0x00272488u; return; } if (c.pc != 0x00272C68u) [[unlikely]] return; }
L_00272C68:
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C78u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x00272C78u) [[unlikely]] return; }
L_00272C78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C8Cu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00272C8Cu) [[unlikely]] return; }
L_00272C8C:
    set32(c.r[5], ld32((c.r[18].w[0] - 16936u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C9Cu);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x00272C9Cu) [[unlikely]] return; }
L_00272C9C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CA8u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x00272CA8u) [[unlikely]] return; }
L_00272CA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CBCu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00272CBCu) [[unlikely]] return; }
L_00272CBC:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CCCu);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x00272CCCu) [[unlikely]] return; }
L_00272CCC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CDCu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00272CDCu) [[unlikely]] return; }
L_00272CDC:
    set32(c.r[3], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[22].w[0] - 16948u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D3Cu);  if (depth < kMaxDepth) unit_005C(c, 340u, depth + 1u); else { c.pc = 0x00272BA8u; return; } if (c.pc != 0x00272D3Cu) [[unlikely]] return; }
L_00272D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272D50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[3].d[0] = ~(0ull | c.r[16].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272E00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23600u);
    set32(c.r[7], c.r[7].w[0] + 23696u);
    set32(c.r[5], c.r[5].w[0] + 23648u);
    set32(c.r[6], 0u + 98u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DC8u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00272DC8u) [[unlikely]] return; }
L_00272DC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23728u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DD8u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00272DD8u) [[unlikely]] return; }
L_00272DD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DE8u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00272DE8u) [[unlikely]] return; }
L_00272DE8:
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272DE8u | kUnwind; return; } goto L_00272DE8; } }
L_00272E00:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[16].w[0] + 364u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[16].w[0] + 376u);
    set32(c.r[5], c.r[16].w[0] + 382u);
    set32(c.r[7], 0u + 255u);
    c.budget -= 10;
L_00272E28:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272E28u | kUnwind; return; } goto L_00272E28; } }
    set32(c.r[2], c.r[8].w[0] + 11u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 2;
L_00272E50:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272E50u | kUnwind; return; } goto L_00272E50; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 280u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 284u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 292u), 0u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 288u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 308u), 0u);
    st32((c.r[16].w[0] + 296u), 0u);
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 317u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 318u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 319u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 320u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 324u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 326u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 383u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EC0u);  if (depth < kMaxDepth) unit_0041(c, 295u, depth + 1u); else { c.pc = 0x00206690u; return; } if (c.pc != 0x00272EC0u) [[unlikely]] return; }
L_00272EC0:
    st32((c.r[16].w[0] + 304u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 256u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), 0u);
    st32((c.r[16].w[0] + 268u), 0u);
    st32((c.r[16].w[0] + 272u), 0u);
    st32((c.r[16].w[0] + 276u), 0u);
    set32(c.r[4], c.r[20].w[0] + 23768u);
    set32(c.r[5], c.r[22].w[0] + 23648u);
    set32(c.r[6], 0u + 148u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EF4u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00272EF4u) [[unlikely]] return; }
L_00272EF4:
    set32(c.r[4], c.r[21].w[0] + 23784u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F08u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00272F08u) [[unlikely]] return; }
L_00272F08:
    set32(c.r[4], c.r[23].w[0] + 23760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F14u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00272F14u) [[unlikely]] return; }
L_00272F14:
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
L_00272F48:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F9Cu);  if (depth < kMaxDepth) unit_0041(c, 310u, depth + 1u); else { c.pc = 0x00206A48u; return; } if (c.pc != 0x00272F9Cu) [[unlikely]] return; }
L_00272F9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00272FB4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00272FBC; } }
L_00272FB4:
    st32((c.r[16].w[0] + 292u), 0u);
    st32((c.r[16].w[0] + 300u), 0u);
    c.budget -= 2;
L_00272FBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(78ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24032u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_005C[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00272FE8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00273000; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00273378; } }
L_00273000:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273018u);  if (depth < kMaxDepth) unit_0041(c, 324u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x00273018u) [[unlikely]] return; }
L_00273018:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00273378; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027303Cu);  if (depth < kMaxDepth) unit_0041(c, 324u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x0027303Cu) [[unlikely]] return; }
L_0027303C:
    c.r[3].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    set32(c.r[4], 0u + 4u);
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_00273064; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00273074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273148; } }
L_00273064:
    set32(c.r[2], 0u + 40u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_00273074:
    set32(c.r[2], 0u + 70u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_00273084:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027309Cu);  if (depth < kMaxDepth) unit_0041(c, 324u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x0027309Cu) [[unlikely]] return; }
L_0027309C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002730B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273298; } }
L_002730B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 3;
L_002730BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730D4u);  if (depth < kMaxDepth) unit_0041(c, 326u, depth + 1u); else { c.pc = 0x00206E38u; return; } if (c.pc != 0x002730D4u) [[unlikely]] return; }
L_002730D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002732BC; } }
L_002730DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730ECu);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x002730ECu) [[unlikely]] return; }
L_002730EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273104; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 3;
L_00273104:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273114u);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x00273114u) [[unlikely]] return; }
L_00273114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273378; } }
    st32((c.r[16].w[0] + 292u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_00273128:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273140u);  if (depth < kMaxDepth) unit_0041(c, 321u, depth + 1u); else { c.pc = 0x00206BE0u; return; } if (c.pc != 0x00273140u) [[unlikely]] return; }
L_00273140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273158; } }
L_00273148:
    set32(c.r[2], 0u + 99u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_00273158:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[6], c.r[16].w[0] + 382u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027316Cu);  if (depth < kMaxDepth) unit_0041(c, 333u, depth + 1u); else { c.pc = 0x00206FB8u; return; } if (c.pc != 0x0027316Cu) [[unlikely]] return; }
L_0027316C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002731A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23824u);
    set32(c.r[5], c.r[5].w[0] + 23648u);
    set32(c.r[7], c.r[7].w[0] + 23872u);
    set32(c.r[6], 0u + 249u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273198u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00273198u) [[unlikely]] return; }
L_00273198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23880u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273200; } }
L_002731A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731C4u);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x002731C4u) [[unlikely]] return; }
L_002731C4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00273378; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23824u);
    set32(c.r[5], c.r[5].w[0] + 23648u);
    set32(c.r[7], c.r[7].w[0] + 23872u);
    set32(c.r[6], 0u + 255u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731F4u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x002731F4u) [[unlikely]] return; }
L_002731F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23928u);
    c.budget -= 3;
L_00273200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273208u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00273208u) [[unlikely]] return; }
L_00273208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273218u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00273218u) [[unlikely]] return; }
L_00273218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_00273220:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273230u);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x00273230u) [[unlikely]] return; }
L_00273230:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273248; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 3;
L_00273248:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273258u);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x00273258u) [[unlikely]] return; }
L_00273258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002732C8; } }
L_00273268:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273278u);  if (depth < kMaxDepth) unit_0041(c, 342u, depth + 1u); else { c.pc = 0x002071F0u; return; } if (c.pc != 0x00273278u) [[unlikely]] return; }
L_00273278:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273294; } }
    set32(c.r[2], 0u + 76u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_00273294:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00273298:
    set32(c.r[3], 0u + 99u);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_002732AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732BCu);  if (depth < kMaxDepth) unit_0041(c, 344u, depth + 1u); else { c.pc = 0x00207250u; return; } if (c.pc != 0x002732BCu) [[unlikely]] return; }
L_002732BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273378; } }
L_002732C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273378; } }
L_002732DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732ECu);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x002732ECu) [[unlikely]] return; }
L_002732EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273304; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 3;
L_00273304:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273314u);  if (depth < kMaxDepth) unit_0041(c, 318u, depth + 1u); else { c.pc = 0x00206B80u; return; } if (c.pc != 0x00273314u) [[unlikely]] return; }
L_00273314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273378; } }
    set32(c.r[2], 0u + 99u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23768u);
    set32(c.r[5], c.r[5].w[0] + 23648u);
    set32(c.r[6], 0u + 289u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273340u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00273340u) [[unlikely]] return; }
L_00273340:
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[4], c.r[4].w[0] + 23968u);
    set32(c.r[7], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027335Cu);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0027335Cu) [[unlikely]] return; }
L_0027335C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 23760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027336Cu);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0027336Cu) [[unlikely]] return; }
L_0027336C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 3;
L_00273378:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002733AC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002733AC; } }
    st8((c.r[16].w[0] + 315u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[16].w[0] + 314u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002735A8; } }
L_002733AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273438; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733D4u);  if (depth < kMaxDepth) unit_0041(c, 307u, depth + 1u); else { c.pc = 0x002069D0u; return; } if (c.pc != 0x002733D4u) [[unlikely]] return; }
L_002733D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002733E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002735A8; } }
L_002733E8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 288u));
    c.r[2].d[0] = ~(c.r[2].d[0] | c.r[4].d[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 264u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    st16((c.r[16].w[0] + 288u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 288u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    st32((c.r[16].w[0] + 268u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 256u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 20;
L_00273438:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027351C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 316u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 317u));
    set32(c.r[20], c.r[2].w[0] - 128u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 318u));
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 319u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 5u));
    set32(c.r[22], c.r[8].w[0] - 128u);
    set32(c.r[21], c.r[9].w[0] - 128u);
    set32(c.r[2], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[19], c.r[7].w[0] - 128u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 24));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    set32(c.r[4], c.r[22].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[21].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[20].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[19].w[0] - c.r[3].w[0]);
    c.budget -= 27;
    { const bool t = c.r[22].sd[0] >= 0; c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002734B8; } }
    set32(c.r[7], 0u - c.r[7].w[0]);
    c.budget -= 1;
L_002734B8:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0; c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002734C4; } }
    set32(c.r[8], 0u - c.r[8].w[0]);
    c.budget -= 1;
L_002734C4:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[9].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002734D0; } }
    set32(c.r[9], 0u - c.r[9].w[0]);
    c.budget -= 1;
L_002734D0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[10].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002734DC; } }
    set32(c.r[10], 0u - c.r[10].w[0]);
    c.budget -= 1;
L_002734DC:
    c.r[7].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[16].w[0] + 317u), static_cast<std::uint8_t>(c.r[21].w[0]));
    if (c.r[7].d[0] != 0) c.r[22].d[0] = 0ull;
    st8((c.r[16].w[0] + 318u), static_cast<std::uint8_t>(c.r[20].w[0]));
    if (c.r[8].d[0] != 0) c.r[21].d[0] = 0ull;
    st8((c.r[16].w[0] + 319u), static_cast<std::uint8_t>(c.r[19].w[0]));
    if (c.r[9].d[0] != 0) c.r[20].d[0] = 0ull;
    st16((c.r[16].w[0] + 320u), static_cast<std::uint16_t>(c.r[4].w[0]));
    if (c.r[10].d[0] != 0) c.r[19].d[0] = 0ull;
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 324u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 326u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
L_0027351C:
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[16].w[0] + 314u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[16].w[0] + 315u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027359C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027359C; } }
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[16].w[0] + 352u);
    set32(c.r[9], c.r[16].w[0] + 328u);
    set32(c.r[8], c.r[16].w[0] + 364u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.budget -= 6;
L_00273560:
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], c.r[11].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[10].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273560u | kUnwind; return; } goto L_00273560; } }
L_0027359C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 1u));
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    st32((c.r[16].w[0] + 296u), c.r[3].w[0]);
    c.budget -= 3;
L_002735A8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002735E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 300u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273620; } }
    c.r[2].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 284u)));
    set32(c.r[6], c.r[3].w[0] + 376u);
    st8((c.r[3].w[0] + 376u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 377u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273620u);  if (depth < kMaxDepth) unit_0041(c, 329u, depth + 1u); else { c.pc = 0x00206EF0u; return; } if (c.pc != 0x00273620u) [[unlikely]] return; }
L_00273620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273630:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[2].w[0] - 30432u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 24880u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[5], 0u + 21u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[24]);
    st32((c.r[29].w[0] + 216u), c.f[23]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[2].w[0] - 30432u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 20u), 0u);
    st32((c.r[19].w[0] + 32u), 0u);
    st32((c.r[19].w[0] + 36u), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 68u), 0u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736C8u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002736C8u) [[unlikely]] return; }
L_002736C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00273BEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[24] = c.r[1].w[0];
    set32(c.r[23], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9232ull;
    c.f[23] = c.r[1].w[0];
    set32(c.r[21], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[22] = c.r[1].w[0];
    set32(c.r[22], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[21] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 17;
L_00273718:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00273754; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[19].w[0] + 11296u);
    c.budget -= 3;
L_00273738:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273738u | kUnwind; return; } goto L_00273738; } }
L_00273754:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00273A50; } }
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027377C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[23].d[0];  if (t) { goto L_0027387C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273BD4; } }
L_0027377C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0027379C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00273A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273BD4; } }
L_0027379C:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737E0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002737E0u) [[unlikely]] return; }
L_002737E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 10912u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737FCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002737FCu) [[unlikely]] return; }
L_002737FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 52u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 10928u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 53u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 10932u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 54u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 10936u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273BD4; } }
L_0027387C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 52u));
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 53u));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 54u));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 52u));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 53u));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 54u));
    set32(c.r[3], c.r[2].w[0] >> 1);
    set32(c.r[5], c.r[6].w[0] >> 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[7].w[0] >> 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 67;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00273990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273990u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x00273990u) [[unlikely]] return; }
L_00273990:
    st32((c.r[16].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002739D4; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002739F4; } }
L_002739D4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 64u), c.f[24]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 68u), c.f[23]);
    c.budget -= 8;
L_002739F4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00273A2C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[23].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273A3C; } }
L_00273A2C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    c.budget -= 4;
L_00273A3C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273BD4; } }
L_00273A50:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[20], 0u + 80u);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 7728u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 7732u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 7736u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AD4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00273AD4u) [[unlikely]] return; }
L_00273AD4:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 7712u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AF0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00273AF0u) [[unlikely]] return; }
L_00273AF0:
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    fpu_div(c, 0u, c.f[0], c.f[21]);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 7768u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    fpu_div(c, 1u, c.f[1], c.f[21]);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 7772u), c.f[1]);
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 7768u));
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B44u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00273B44u) [[unlikely]] return; }
L_00273B44:
    st32((c.r[16].w[0] + 7776u), c.f[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 7772u));
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B64u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00273B64u) [[unlikely]] return; }
L_00273B64:
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273BA8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 7760u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 7764u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273BC8; } }
L_00273BA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 7760u), c.f[24]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 7764u), c.f[23]);
    c.budget -= 8;
L_00273BC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00273BD4:
    set32(c.r[4], c.r[30].w[0] + 24880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BE0u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00273BE0u) [[unlikely]] return; }
L_00273BE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273718u | kUnwind; return; } goto L_00273718; } }
L_00273BEC:
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
    c.f[24] = ld32((c.r[29].w[0] + 224u));
    c.f[23] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273C38:
    if (::decomp::hook_00273C38.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_00273C38, depth)) return; }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00273C64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00273C64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[3].w[0] - 30432u);
    st32((c.r[3].w[0] - 30432u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 6;
L_00273C64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C88u);  if (depth < kMaxDepth) unit_005C(c, 416u, depth + 1u); else { c.pc = 0x00273C38u; return; } if (c.pc != 0x00273C88u) [[unlikely]] return; }
L_00273C88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273C98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CB0u);  if (depth < kMaxDepth) unit_005C(c, 416u, depth + 1u); else { c.pc = 0x00273C38u; return; } if (c.pc != 0x00273CB0u) [[unlikely]] return; }
L_00273CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273CC0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00273CF4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00273CF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u - 5u);
    st32((c.r[3].w[0] - 18656u), 0u);
    set32(c.r[4], c.r[3].w[0] - 18656u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
L_00273CF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273D00:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[8], 0u - 2u);
    c.r[9].d[0] = 0ull + 0ull;
    if (c.r[5].d[0] != 0) c.r[9].d[0] = c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    if (c.r[6].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[5], 0u - 3u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[6], 0u - 5u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D68u);  if (depth < kMaxDepth) unit_005C(c, 421u, depth + 1u); else { c.pc = 0x00273CC0u; return; } if (c.pc != 0x00273D68u) [[unlikely]] return; }
L_00273D68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273D78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DB0u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00273DB0u) [[unlikely]] return; }
L_00273DB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] + 23824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DC0u);  if (depth < kMaxDepth) unit_0053(c, 36u, depth + 1u); else { c.pc = 0x0024C7F8u; return; } if (c.pc != 0x00273DC0u) [[unlikely]] return; }
L_00273DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DC8u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00273DC8u) [[unlikely]] return; }
L_00273DC8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00273DE4; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[3].w[0] + 13348u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 13352u), c.r[2].w[0]);
    c.budget -= 5;
L_00273DE4:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[3].w[0] + 23004u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00273E18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E10u);  if (depth < kMaxDepth) unit_005D(c, 103u, depth + 1u); else { c.pc = 0x00275598u; return; } if (c.pc != 0x00273E10u) [[unlikely]] return; }
L_00273E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273E28; } }
L_00273E18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E28u);  if (depth < kMaxDepth) unit_005D(c, 103u, depth + 1u); else { c.pc = 0x00275598u; return; } if (c.pc != 0x00273E28u) [[unlikely]] return; }
L_00273E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] - 18496u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] - 16600u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E58u);  if (depth < kMaxDepth) unit_005D(c, 5u, depth + 1u); else { c.pc = 0x00274050u; return; } if (c.pc != 0x00273E58u) [[unlikely]] return; }
L_00273E58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273EA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273EA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E80u);  if (depth < kMaxDepth) unit_005D(c, 104u, depth + 1u); else { c.pc = 0x002755A8u; return; } if (c.pc != 0x00273E80u) [[unlikely]] return; }
L_00273E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E90u);  if (depth < kMaxDepth) unit_005D(c, 98u, depth + 1u); else { c.pc = 0x002754B8u; return; } if (c.pc != 0x00273E90u) [[unlikely]] return; }
L_00273E90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EA0u);  if (depth < kMaxDepth) unit_005D(c, 102u, depth + 1u); else { c.pc = 0x00275540u; return; } if (c.pc != 0x00273EA0u) [[unlikely]] return; }
L_00273EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273F44; } }
L_00273EA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00273F44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273F04; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EDCu);  if (depth < kMaxDepth) unit_005D(c, 104u, depth + 1u); else { c.pc = 0x002755A8u; return; } if (c.pc != 0x00273EDCu) [[unlikely]] return; }
L_00273EDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EECu);  if (depth < kMaxDepth) unit_005D(c, 98u, depth + 1u); else { c.pc = 0x002754B8u; return; } if (c.pc != 0x00273EECu) [[unlikely]] return; }
L_00273EEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EFCu);  if (depth < kMaxDepth) unit_005D(c, 102u, depth + 1u); else { c.pc = 0x00275540u; return; } if (c.pc != 0x00273EFCu) [[unlikely]] return; }
L_00273EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273F44; } }
L_00273F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273F44; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F24u);  if (depth < kMaxDepth) unit_005D(c, 104u, depth + 1u); else { c.pc = 0x002755A8u; return; } if (c.pc != 0x00273F24u) [[unlikely]] return; }
L_00273F24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F34u);  if (depth < kMaxDepth) unit_005D(c, 98u, depth + 1u); else { c.pc = 0x002754B8u; return; } if (c.pc != 0x00273F34u) [[unlikely]] return; }
L_00273F34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F44u);  if (depth < kMaxDepth) unit_005D(c, 102u, depth + 1u); else { c.pc = 0x00275540u; return; } if (c.pc != 0x00273F44u) [[unlikely]] return; }
L_00273F44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16596u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00273F74; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F74u);  if (depth < kMaxDepth) unit_0041(c, 259u, depth + 1u); else { c.pc = 0x002060C8u; return; } if (c.pc != 0x00273F74u) [[unlikely]] return; }
L_00273F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F7Cu);  if (depth < kMaxDepth) unit_0041(c, 266u, depth + 1u); else { c.pc = 0x00206258u; return; } if (c.pc != 0x00273F7Cu) [[unlikely]] return; }
L_00273F7C:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 19232u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 34u));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00273FB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FA8u);  if (depth < kMaxDepth) unit_005D(c, 97u, depth + 1u); else { c.pc = 0x002754A8u; return; } if (c.pc != 0x00273FA8u) [[unlikely]] return; }
L_00273FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273FC0; } }
L_00273FB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 49u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FC0u);  if (depth < kMaxDepth) unit_005D(c, 97u, depth + 1u); else { c.pc = 0x002754A8u; return; } if (c.pc != 0x00273FC0u) [[unlikely]] return; }
L_00273FC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FCCu);  if (depth < kMaxDepth) unit_005D(c, 56u, depth + 1u); else { c.pc = 0x00274D68u; return; } if (c.pc != 0x00273FCCu) [[unlikely]] return; }
L_00273FCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FD8u);  if (depth < kMaxDepth) unit_005D(c, 57u, depth + 1u); else { c.pc = 0x00274EB8u; return; } if (c.pc != 0x00273FD8u) [[unlikely]] return; }
L_00273FD8:
    set32(c.r[2], ld32((c.r[18].w[0] - 16596u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005D(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19772u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 19776u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274004u);  if (depth < kMaxDepth) unit_005D(c, 88u, depth + 1u); else { c.pc = 0x002753C0u; return; } if (c.pc != 0x00274004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_005D(c, 2u, depth);
}

}
