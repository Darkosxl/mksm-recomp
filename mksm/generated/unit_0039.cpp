#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_001E6EC8;
extern ps2::DecompFn hook_001E6EF0;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_0039[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0,
    0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 386, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
};

void unit_0039(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E4000;
    case 2u: goto L_001E4010;
    case 3u: goto L_001E4038;
    case 4u: goto L_001E4044;
    case 5u: goto L_001E4060;
    case 6u: goto L_001E4078;
    case 7u: goto L_001E4088;
    case 8u: goto L_001E4094;
    case 9u: goto L_001E40B0;
    case 10u: goto L_001E40C8;
    case 11u: goto L_001E40E0;
    case 12u: goto L_001E4104;
    case 13u: goto L_001E4170;
    case 14u: goto L_001E41C0;
    case 15u: goto L_001E41F8;
    case 16u: goto L_001E4200;
    case 17u: goto L_001E4208;
    case 18u: goto L_001E4280;
    case 19u: goto L_001E4290;
    case 20u: goto L_001E42D0;
    case 21u: goto L_001E4308;
    case 22u: goto L_001E4360;
    case 23u: goto L_001E4374;
    case 24u: goto L_001E4390;
    case 25u: goto L_001E43B8;
    case 26u: goto L_001E43D0;
    case 27u: goto L_001E43F0;
    case 28u: goto L_001E4410;
    case 29u: goto L_001E4440;
    case 30u: goto L_001E446C;
    case 31u: goto L_001E4480;
    case 32u: goto L_001E4494;
    case 33u: goto L_001E44AC;
    case 34u: goto L_001E44B8;
    case 35u: goto L_001E44C8;
    case 36u: goto L_001E44E0;
    case 37u: goto L_001E4510;
    case 38u: goto L_001E4534;
    case 39u: goto L_001E4544;
    case 40u: goto L_001E4550;
    case 41u: goto L_001E4558;
    case 42u: goto L_001E45BC;
    case 43u: goto L_001E45D0;
    case 44u: goto L_001E45E4;
    case 45u: goto L_001E45F8;
    case 46u: goto L_001E4620;
    case 47u: goto L_001E4628;
    case 48u: goto L_001E4634;
    case 49u: goto L_001E463C;
    case 50u: goto L_001E4644;
    case 51u: goto L_001E4680;
    case 52u: goto L_001E46DC;
    case 53u: goto L_001E46F8;
    case 54u: goto L_001E4704;
    case 55u: goto L_001E4710;
    case 56u: goto L_001E471C;
    case 57u: goto L_001E472C;
    case 58u: goto L_001E4744;
    case 59u: goto L_001E4748;
    case 60u: goto L_001E4750;
    case 61u: goto L_001E4760;
    case 62u: goto L_001E47C0;
    case 63u: goto L_001E4800;
    case 64u: goto L_001E4810;
    case 65u: goto L_001E4820;
    case 66u: goto L_001E4830;
    case 67u: goto L_001E4840;
    case 68u: goto L_001E4858;
    case 69u: goto L_001E48A8;
    case 70u: goto L_001E48F8;
    case 71u: goto L_001E4910;
    case 72u: goto L_001E4920;
    case 73u: goto L_001E4944;
    case 74u: goto L_001E4968;
    case 75u: goto L_001E4978;
    case 76u: goto L_001E4998;
    case 77u: goto L_001E49A8;
    case 78u: goto L_001E49C8;
    case 79u: goto L_001E49EC;
    case 80u: goto L_001E4A00;
    case 81u: goto L_001E4A60;
    case 82u: goto L_001E4AB0;
    case 83u: goto L_001E4AC0;
    case 84u: goto L_001E4AD0;
    case 85u: goto L_001E4AE0;
    case 86u: goto L_001E4B00;
    case 87u: goto L_001E4B08;
    case 88u: goto L_001E4B14;
    case 89u: goto L_001E4B1C;
    case 90u: goto L_001E4B24;
    case 91u: goto L_001E4B48;
    case 92u: goto L_001E4B58;
    case 93u: goto L_001E4B70;
    case 94u: goto L_001E4B80;
    case 95u: goto L_001E4B98;
    case 96u: goto L_001E4BC0;
    case 97u: goto L_001E4BDC;
    case 98u: goto L_001E4BF0;
    case 99u: goto L_001E4C00;
    case 100u: goto L_001E4C28;
    case 101u: goto L_001E4C48;
    case 102u: goto L_001E4CA0;
    case 103u: goto L_001E4CA8;
    case 104u: goto L_001E4CC0;
    case 105u: goto L_001E4CF4;
    case 106u: goto L_001E4D04;
    case 107u: goto L_001E4D14;
    case 108u: goto L_001E4D28;
    case 109u: goto L_001E4D3C;
    case 110u: goto L_001E4D90;
    case 111u: goto L_001E4DA0;
    case 112u: goto L_001E4DC8;
    case 113u: goto L_001E4E04;
    case 114u: goto L_001E4E20;
    case 115u: goto L_001E4E48;
    case 116u: goto L_001E4E68;
    case 117u: goto L_001E4E88;
    case 118u: goto L_001E4E90;
    case 119u: goto L_001E4EB8;
    case 120u: goto L_001E4ED0;
    case 121u: goto L_001E4F4C;
    case 122u: goto L_001E4F74;
    case 123u: goto L_001E4F90;
    case 124u: goto L_001E4FB4;
    case 125u: goto L_001E4FF4;
    case 126u: goto L_001E5018;
    case 127u: goto L_001E5038;
    case 128u: goto L_001E5054;
    case 129u: goto L_001E509C;
    case 130u: goto L_001E50B0;
    case 131u: goto L_001E50D4;
    case 132u: goto L_001E5114;
    case 133u: goto L_001E5138;
    case 134u: goto L_001E5158;
    case 135u: goto L_001E516C;
    case 136u: goto L_001E5174;
    case 137u: goto L_001E519C;
    case 138u: goto L_001E51C8;
    case 139u: goto L_001E51E4;
    case 140u: goto L_001E51EC;
    case 141u: goto L_001E5200;
    case 142u: goto L_001E521C;
    case 143u: goto L_001E522C;
    case 144u: goto L_001E5240;
    case 145u: goto L_001E5278;
    case 146u: goto L_001E5284;
    case 147u: goto L_001E529C;
    case 148u: goto L_001E52E0;
    case 149u: goto L_001E5320;
    case 150u: goto L_001E5348;
    case 151u: goto L_001E5354;
    case 152u: goto L_001E5388;
    case 153u: goto L_001E53C4;
    case 154u: goto L_001E53E8;
    case 155u: goto L_001E53F4;
    case 156u: goto L_001E540C;
    case 157u: goto L_001E5440;
    case 158u: goto L_001E5450;
    case 159u: goto L_001E5478;
    case 160u: goto L_001E54C0;
    case 161u: goto L_001E54CC;
    case 162u: goto L_001E54E4;
    case 163u: goto L_001E5520;
    case 164u: goto L_001E5528;
    case 165u: goto L_001E5564;
    case 166u: goto L_001E5588;
    case 167u: goto L_001E55B0;
    case 168u: goto L_001E55E0;
    case 169u: goto L_001E5600;
    case 170u: goto L_001E5614;
    case 171u: goto L_001E563C;
    case 172u: goto L_001E5664;
    case 173u: goto L_001E568C;
    case 174u: goto L_001E56A8;
    case 175u: goto L_001E56D8;
    case 176u: goto L_001E573C;
    case 177u: goto L_001E5748;
    case 178u: goto L_001E5760;
    case 179u: goto L_001E5780;
    case 180u: goto L_001E57A8;
    case 181u: goto L_001E5808;
    case 182u: goto L_001E5858;
    case 183u: goto L_001E5880;
    case 184u: goto L_001E5898;
    case 185u: goto L_001E58B4;
    case 186u: goto L_001E58E8;
    case 187u: goto L_001E5900;
    case 188u: goto L_001E591C;
    case 189u: goto L_001E5954;
    case 190u: goto L_001E5968;
    case 191u: goto L_001E5970;
    case 192u: goto L_001E5994;
    case 193u: goto L_001E59A8;
    case 194u: goto L_001E59D4;
    case 195u: goto L_001E59E0;
    case 196u: goto L_001E59F8;
    case 197u: goto L_001E5A1C;
    case 198u: goto L_001E5A30;
    case 199u: goto L_001E5A3C;
    case 200u: goto L_001E5A48;
    case 201u: goto L_001E5A60;
    case 202u: goto L_001E5A80;
    case 203u: goto L_001E5A90;
    case 204u: goto L_001E5AA8;
    case 205u: goto L_001E5AC0;
    case 206u: goto L_001E5AD0;
    case 207u: goto L_001E5AE8;
    case 208u: goto L_001E5AF0;
    case 209u: goto L_001E5AF8;
    case 210u: goto L_001E5B18;
    case 211u: goto L_001E5B3C;
    case 212u: goto L_001E5B54;
    case 213u: goto L_001E5B78;
    case 214u: goto L_001E5BB0;
    case 215u: goto L_001E5BC4;
    case 216u: goto L_001E5C14;
    case 217u: goto L_001E5C28;
    case 218u: goto L_001E5C50;
    case 219u: goto L_001E5C70;
    case 220u: goto L_001E5C80;
    case 221u: goto L_001E5CA8;
    case 222u: goto L_001E5CD0;
    case 223u: goto L_001E5CF0;
    case 224u: goto L_001E5D2C;
    case 225u: goto L_001E5D54;
    case 226u: goto L_001E5D78;
    case 227u: goto L_001E5D9C;
    case 228u: goto L_001E5DD8;
    case 229u: goto L_001E5DF8;
    case 230u: goto L_001E5E04;
    case 231u: goto L_001E5E18;
    case 232u: goto L_001E5E30;
    case 233u: goto L_001E5E8C;
    case 234u: goto L_001E5EA8;
    case 235u: goto L_001E5EB4;
    case 236u: goto L_001E5EC4;
    case 237u: goto L_001E5ED8;
    case 238u: goto L_001E5F18;
    case 239u: goto L_001E5F34;
    case 240u: goto L_001E5F44;
    case 241u: goto L_001E5F70;
    case 242u: goto L_001E5F90;
    case 243u: goto L_001E5FC8;
    case 244u: goto L_001E6030;
    case 245u: goto L_001E604C;
    case 246u: goto L_001E605C;
    case 247u: goto L_001E6074;
    case 248u: goto L_001E60A0;
    case 249u: goto L_001E60E4;
    case 250u: goto L_001E60F4;
    case 251u: goto L_001E6104;
    case 252u: goto L_001E6114;
    case 253u: goto L_001E612C;
    case 254u: goto L_001E613C;
    case 255u: goto L_001E614C;
    case 256u: goto L_001E615C;
    case 257u: goto L_001E6170;
    case 258u: goto L_001E61B8;
    case 259u: goto L_001E61C8;
    case 260u: goto L_001E61E0;
    case 261u: goto L_001E6208;
    case 262u: goto L_001E6228;
    case 263u: goto L_001E6244;
    case 264u: goto L_001E6290;
    case 265u: goto L_001E62AC;
    case 266u: goto L_001E62BC;
    case 267u: goto L_001E62D4;
    case 268u: goto L_001E6300;
    case 269u: goto L_001E6374;
    case 270u: goto L_001E6380;
    case 271u: goto L_001E6390;
    case 272u: goto L_001E6398;
    case 273u: goto L_001E63A0;
    case 274u: goto L_001E63B0;
    case 275u: goto L_001E63C0;
    case 276u: goto L_001E63D8;
    case 277u: goto L_001E63E8;
    case 278u: goto L_001E6448;
    case 279u: goto L_001E6460;
    case 280u: goto L_001E6470;
    case 281u: goto L_001E6480;
    case 282u: goto L_001E64B0;
    case 283u: goto L_001E64C4;
    case 284u: goto L_001E651C;
    case 285u: goto L_001E6768;
    case 286u: goto L_001E67B0;
    case 287u: goto L_001E67C0;
    case 288u: goto L_001E6804;
    case 289u: goto L_001E6814;
    case 290u: goto L_001E6824;
    case 291u: goto L_001E6834;
    case 292u: goto L_001E684C;
    case 293u: goto L_001E685C;
    case 294u: goto L_001E686C;
    case 295u: goto L_001E687C;
    case 296u: goto L_001E68B8;
    case 297u: goto L_001E68D0;
    case 298u: goto L_001E68E0;
    case 299u: goto L_001E6908;
    case 300u: goto L_001E6918;
    case 301u: goto L_001E6920;
    case 302u: goto L_001E6938;
    case 303u: goto L_001E6948;
    case 304u: goto L_001E6958;
    case 305u: goto L_001E6974;
    case 306u: goto L_001E6984;
    case 307u: goto L_001E6998;
    case 308u: goto L_001E69A8;
    case 309u: goto L_001E69D0;
    case 310u: goto L_001E6A40;
    case 311u: goto L_001E6AB0;
    case 312u: goto L_001E6AC0;
    case 313u: goto L_001E6AD8;
    case 314u: goto L_001E6AE8;
    case 315u: goto L_001E6B14;
    case 316u: goto L_001E6B38;
    case 317u: goto L_001E6B54;
    case 318u: goto L_001E6B68;
    case 319u: goto L_001E6B84;
    case 320u: goto L_001E6B98;
    case 321u: goto L_001E6BB4;
    case 322u: goto L_001E6BC8;
    case 323u: goto L_001E6BE4;
    case 324u: goto L_001E6BF8;
    case 325u: goto L_001E6C14;
    case 326u: goto L_001E6C28;
    case 327u: goto L_001E6C4C;
    case 328u: goto L_001E6C64;
    case 329u: goto L_001E6C74;
    case 330u: goto L_001E6CA0;
    case 331u: goto L_001E6CC8;
    case 332u: goto L_001E6CF4;
    case 333u: goto L_001E6D08;
    case 334u: goto L_001E6D30;
    case 335u: goto L_001E6D3C;
    case 336u: goto L_001E6D50;
    case 337u: goto L_001E6D5C;
    case 338u: goto L_001E6D88;
    case 339u: goto L_001E6DB8;
    case 340u: goto L_001E6DD8;
    case 341u: goto L_001E6DE8;
    case 342u: goto L_001E6E28;
    case 343u: goto L_001E6E50;
    case 344u: goto L_001E6E84;
    case 345u: goto L_001E6EA8;
    case 346u: goto L_001E6EB8;
    case 347u: goto L_001E6EC8;
    case 348u: goto L_001E6EDC;
    case 349u: goto L_001E6EF0;
    case 350u: goto L_001E6F14;
    case 351u: goto L_001E6F30;
    case 352u: goto L_001E6F50;
    case 353u: goto L_001E6F70;
    case 354u: goto L_001E6FA4;
    case 355u: goto L_001E6FB4;
    case 356u: goto L_001E6FDC;
    case 357u: goto L_001E7034;
    case 358u: goto L_001E7098;
    case 359u: goto L_001E70D4;
    case 360u: goto L_001E70F8;
    case 361u: goto L_001E7138;
    case 362u: goto L_001E7170;
    case 363u: goto L_001E71A0;
    case 364u: goto L_001E7204;
    case 365u: goto L_001E7240;
    case 366u: goto L_001E7290;
    case 367u: goto L_001E7298;
    case 368u: goto L_001E72B0;
    case 369u: goto L_001E72CC;
    case 370u: goto L_001E7304;
    case 371u: goto L_001E7328;
    case 372u: goto L_001E7370;
    case 373u: goto L_001E7378;
    case 374u: goto L_001E7380;
    case 375u: goto L_001E73A0;
    case 376u: goto L_001E7430;
    case 377u: goto L_001E7468;
    case 378u: goto L_001E7490;
    case 379u: goto L_001E74E0;
    case 380u: goto L_001E7568;
    case 381u: goto L_001E759C;
    case 382u: goto L_001E75CC;
    case 383u: goto L_001E7604;
    case 384u: goto L_001E765C;
    case 385u: goto L_001E766C;
    case 386u: goto L_001E7670;
    case 387u: goto L_001E7680;
    case 388u: goto L_001E7690;
    case 389u: goto L_001E769C;
    case 390u: goto L_001E76D0;
    case 391u: goto L_001E76FC;
    case 392u: goto L_001E7714;
    case 393u: goto L_001E7724;
    case 394u: goto L_001E77B0;
    case 395u: goto L_001E7898;
    case 396u: goto L_001E78AC;
    case 397u: goto L_001E796C;
    case 398u: goto L_001E797C;
    case 399u: goto L_001E7998;
    case 400u: goto L_001E7A58;
    case 401u: goto L_001E7AC4;
    case 402u: goto L_001E7AD4;
    case 403u: goto L_001E7B10;
    case 404u: goto L_001E7B80;
    case 405u: goto L_001E7B90;
    case 406u: goto L_001E7BA8;
    case 407u: goto L_001E7C00;
    case 408u: goto L_001E7C80;
    case 409u: goto L_001E7CE8;
    case 410u: goto L_001E7D0C;
    case 411u: goto L_001E7D34;
    case 412u: goto L_001E7D5C;
    case 413u: goto L_001E7D8C;
    case 414u: goto L_001E7DF8;
    case 415u: goto L_001E7E30;
    case 416u: goto L_001E7E40;
    case 417u: goto L_001E7E68;
    case 418u: goto L_001E7E80;
    case 419u: goto L_001E7E90;
    case 420u: goto L_001E7EE8;
    case 421u: goto L_001E7F30;
    case 422u: goto L_001E7F60;
    case 423u: goto L_001E7F98;
    case 424u: goto L_001E7FE8;
    default: bad_entry(c, 0x001E4000u); return;
    }
L_001E4000:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 14960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4038u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E4038u) [[unlikely]] return; }
L_001E4038:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4044u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001E4044u) [[unlikely]] return; }
L_001E4044:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4060u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E4060u) [[unlikely]] return; }
L_001E4060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4078; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4078u);  if (depth < kMaxDepth) unit_0037(c, 309u, depth + 1u); else { c.pc = 0x001DE638u; return; } if (c.pc != 0x001E4078u) [[unlikely]] return; }
L_001E4078:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4088u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E4088u) [[unlikely]] return; }
L_001E4088:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4094u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001E4094u) [[unlikely]] return; }
L_001E4094:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E40B0u) [[unlikely]] return; }
L_001E40B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E40C8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40C8u);  if (depth < kMaxDepth) unit_0037(c, 309u, depth + 1u); else { c.pc = 0x001DE638u; return; } if (c.pc != 0x001E40C8u) [[unlikely]] return; }
L_001E40C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E40E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[17].w[0] + 12224u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4104u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E4104u) [[unlikely]] return; }
L_001E4104:
    c.r[5].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[3], c.r[17].w[0] + 16u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 28ull;
    set32(c.r[2], c.r[2].w[0] + 168u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 144u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ~(0ull | c.r[4].d[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + 12224u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[5].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = c.r[4].d[0] & 28ull;
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E41DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41C0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E41C0u) [[unlikely]] return; }
L_001E41C0:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E41E0; } }
L_001E41DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E41E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E41F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4208:
    set32(c.r[2], c.r[4].w[0] - 41u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E4270; } }
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E4274; } }
L_001E4270:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E4274:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4290u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001E4290u) [[unlikely]] return; }
L_001E4290:
    set32(c.r[4], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 13636u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 13624u), 0u);
    st32((c.r[6].w[0] + 13628u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 13632u), 0u);
    st32((c.r[3].w[0] + 13656u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E42D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 13648u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 13652u), 0u);
    st32((c.r[6].w[0] + 13640u), 0u);
    st32((c.r[7].w[0] + 13644u), 0u);
    st32((c.r[4].w[0] + 13660u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49260000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 43342ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 13640u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E4344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0E860000u);
    c.r[2].d[0] = c.r[2].d[0] | 54174ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E4344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x33E60000u);
    c.r[2].d[0] = c.r[2].d[0] | 64046ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4350; } }
L_001E4344:
    set32(c.r[3], ld32((c.r[5].w[0] + 13640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 13660u), c.r[3].w[0]);
    c.budget -= 3;
L_001E4350:
    st32((c.r[5].w[0] + 13640u), c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4374u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E4374u) [[unlikely]] return; }
L_001E4374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E43A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4390u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x001E4390u) [[unlikely]] return; }
L_001E4390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E43DC; } }
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E43DC; } }
L_001E43A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43B8u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x001E43B8u) [[unlikely]] return; }
L_001E43B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E43C4; } }
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E43C4:
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43D0u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x001E43D0u) [[unlikely]] return; }
L_001E43D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E43DC; } }
    st8((c.r[16].w[0] + 13364u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E43DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E43F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].d[0] = 0ull | 39744ull;
    c.r[3].d[0] = c.r[3].d[0] | 2816ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_001E4410:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4428; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4428; } }
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 1;
L_001E4428:
    set32(c.r[4], c.r[4].w[0] + 13248u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4410u | kUnwind; return; } goto L_001E4410; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E446Cu);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x001E446Cu) [[unlikely]] return; }
L_001E446C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001E44F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[19], c.r[2].w[0] - 22920u);
    c.budget -= 2;
L_001E4480:
    set32(c.r[16], c.r[17].w[0] + 10u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4494u);  if (depth < kMaxDepth) unit_0086(c, 280u, depth + 1u); else { c.pc = 0x0031B7E0u; return; } if (c.pc != 0x001E4494u) [[unlikely]] return; }
L_001E4494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E44D0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44ACu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001E44ACu) [[unlikely]] return; }
L_001E44AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44B8u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001E44B8u) [[unlikely]] return; }
L_001E44B8:
    c.r[4].d[0] = c.r[2].d[0] | 1024ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44C8u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001E44C8u) [[unlikely]] return; }
L_001E44C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E44E0; } }
L_001E44D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44E0u);  if (depth < kMaxDepth) unit_0086(c, 295u, depth + 1u); else { c.pc = 0x0031B9F0u; return; } if (c.pc != 0x001E44E0u) [[unlikely]] return; }
L_001E44E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4480u | kUnwind; return; } goto L_001E4480; } }
L_001E44F0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 22944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4534u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001E4534u) [[unlikely]] return; }
L_001E4534:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4544u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001E4544u) [[unlikely]] return; }
L_001E4544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4550u);  if (depth < kMaxDepth) unit_0086(c, 42u, depth + 1u); else { c.pc = 0x00318570u; return; } if (c.pc != 0x001E4550u) [[unlikely]] return; }
L_001E4550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4558u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001E4558u) [[unlikely]] return; }
L_001E4558:
    set32(c.r[3], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[2].w[0] + 13648u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    st32((c.r[6].w[0] + 13624u), 0u);
    st32((c.r[7].w[0] + 13628u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 13632u), 0u);
    st32((c.r[9].w[0] + 13636u), c.r[3].w[0]);
    st32((c.r[10].w[0] + 13656u), 0u);
    st32((c.r[11].w[0] + 13652u), 0u);
    st32((c.r[12].w[0] + 13640u), 0u);
    st32((c.r[13].w[0] + 13644u), 0u);
    st32((c.r[5].w[0] + 13660u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45BCu);  if (depth < kMaxDepth) unit_0087(c, 11u, depth + 1u); else { c.pc = 0x0031C1A0u; return; } if (c.pc != 0x001E45BCu) [[unlikely]] return; }
L_001E45BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E45D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45E4u);  if (depth < kMaxDepth) unit_0037(c, 462u, depth + 1u); else { c.pc = 0x001DF0F8u; return; } if (c.pc != 0x001E45E4u) [[unlikely]] return; }
L_001E45E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E45F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[3].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 10;
L_001E4620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4628u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001E4628u) [[unlikely]] return; }
L_001E4628:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4634u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E4634u) [[unlikely]] return; }
L_001E4634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E463Cu);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001E463Cu) [[unlikely]] return; }
L_001E463C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4644u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001E4644u) [[unlikely]] return; }
L_001E4644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4620u | kUnwind; return; } goto L_001E4620; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0] + 14664u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4680:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[18].w[0] + 24040u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] - 26388u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 22612u), c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46DCu);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001E46DCu) [[unlikely]] return; }
L_001E46DC:
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4710; } }
    c.budget -= 1;
L_001E46F8:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4704u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E4704u) [[unlikely]] return; }
L_001E4704:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4710u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001E4710u) [[unlikely]] return; }
L_001E4710:
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E471Cu);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001E471Cu) [[unlikely]] return; }
L_001E471C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E46F8u | kUnwind; return; } goto L_001E46F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E472Cu);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x001E472Cu) [[unlikely]] return; }
L_001E472C:
    st32((c.r[17].w[0] - 26388u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001E4748; } }
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4744u);  if (depth < kMaxDepth) unit_0087(c, 11u, depth + 1u); else { c.pc = 0x0031C1A0u; return; } if (c.pc != 0x001E4744u) [[unlikely]] return; }
L_001E4744:
    c.budget -= 1;
L_001E4748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4750u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001E4750u) [[unlikely]] return; }
L_001E4750:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4760u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E4760u) [[unlikely]] return; }
L_001E4760:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4778; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4748u | kUnwind; return; } goto L_001E4748; } }
L_001E4778:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[21].w[0] + 19264u);
    st32((c.r[22].w[0] + 14664u), c.r[2].w[0]);
    st32((c.r[23].w[0] - 22612u), 0u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E47C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[5], 0u + 320u);
    set32(c.r[6], 0u + 362u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 32897ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4800:
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4810:
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4820:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4830:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4840:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 14244u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80630000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 14248u)));
    c.r[3].d[0] = c.r[3].d[0] | 35814ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E48A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 14252u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80630000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 14256u)));
    c.r[3].d[0] = c.r[3].d[0] | 35814ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E48F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 5u);
    c.budget -= 6;
L_001E4910:
    set32(c.r[4], 0u + 224u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4920u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001E4920u) [[unlikely]] return; }
L_001E4920:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.f[13] = c.f[12];
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4944u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001E4944u) [[unlikely]] return; }
L_001E4944:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4910u | kUnwind; return; } goto L_001E4910; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4968:
    set32(c.r[4], c.r[4].w[0] + 124u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
L_001E4978:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4978u | kUnwind; return; } goto L_001E4978; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4998:
    set32(c.r[4], c.r[4].w[0] + 252u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
L_001E49A8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E49A8u | kUnwind; return; } goto L_001E49A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E49C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 13496u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49ECu);  if (depth < kMaxDepth) unit_0038(c, 56u, depth + 1u); else { c.pc = 0x001E0448u; return; } if (c.pc != 0x001E49ECu) [[unlikely]] return; }
L_001E49EC:
    set32(c.r[18], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20668u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A00u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001E4A00u) [[unlikely]] return; }
L_001E4A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 14252u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80630000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 14256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 14236u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 14240u)));
    c.r[7].d[0] = c.r[7].d[0] | 35814ull;
    st32((c.r[17].w[0] + 13496u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A60u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001E4A60u) [[unlikely]] return; }
L_001E4A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    st32((c.r[17].w[0] + 13496u), c.r[3].w[0]);
    set32(c.r[4], 0u + 362u);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AC0u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x002FAF28u; return; } if (c.pc != 0x001E4AC0u) [[unlikely]] return; }
L_001E4AC0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AD0u);  if (depth < kMaxDepth) unit_0036(c, 477u, depth + 1u); else { c.pc = 0x001DB898u; return; } if (c.pc != 0x001E4AD0u) [[unlikely]] return; }
L_001E4AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4B1C; } }
L_001E4B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B08u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001E4B08u) [[unlikely]] return; }
L_001E4B08:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B14u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E4B14u) [[unlikely]] return; }
L_001E4B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B1Cu);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001E4B1Cu) [[unlikely]] return; }
L_001E4B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B24u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001E4B24u) [[unlikely]] return; }
L_001E4B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4B00u | kUnwind; return; } goto L_001E4B00; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4B48:
    c.r[2].d[0] = c.r[4].d[0] ^ 73ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4B58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B70u);  if (depth < kMaxDepth) unit_0039(c, 94u, depth + 1u); else { c.pc = 0x001E4B80u; return; } if (c.pc != 0x001E4B70u) [[unlikely]] return; }
L_001E4B70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12228u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B98u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E4B98u) [[unlikely]] return; }
L_001E4B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4BAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4BB0; } }
L_001E4BAC:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_001E4BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4BC0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BDCu);  if (depth < kMaxDepth) unit_0039(c, 98u, depth + 1u); else { c.pc = 0x001E4BF0u; return; } if (c.pc != 0x001E4BDCu) [[unlikely]] return; }
L_001E4BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C00u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E4C00u) [[unlikely]] return; }
L_001E4C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4C14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4C18; } }
L_001E4C14:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_001E4C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4C28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C48u);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x001E4C48u) [[unlikely]] return; }
L_001E4C48:
    set32(c.r[7], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 5032u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12736u);
    set32(c.r[6], ld32((c.r[8].w[0] + 18708u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 176u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CA0u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E4CA0u) [[unlikely]] return; }
L_001E4CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CA8u);  if (depth < kMaxDepth) unit_0034(c, 153u, depth + 1u); else { c.pc = 0x001D1A40u; return; } if (c.pc != 0x001E4CA8u) [[unlikely]] return; }
L_001E4CA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4CC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CF4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E4CF4u) [[unlikely]] return; }
L_001E4CF4:
    c.r[18].d[0] = c.r[2].d[0] | 1024ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D04u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x001E4D04u) [[unlikely]] return; }
L_001E4D04:
    set32(c.r[4], ld32((c.r[16].w[0] + 18708u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D14u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x001E4D14u) [[unlikely]] return; }
L_001E4D14:
    set32(c.r[3], ld32((c.r[16].w[0] + 18708u)));
    c.r[17].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[17].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D28u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001E4D28u) [[unlikely]] return; }
L_001E4D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E4D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D3Cu);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x001E4D3Cu) [[unlikely]] return; }
L_001E4D3C:
    set32(c.r[5], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 12736u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 5032u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 176u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D90u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E4D90u) [[unlikely]] return; }
L_001E4D90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E4DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DA0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001E4DA0u) [[unlikely]] return; }
L_001E4DA0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4DC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 5032u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[16].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E04u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001E4E04u) [[unlikely]] return; }
L_001E4E04:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E20u);  if (depth < kMaxDepth) unit_0057(c, 190u, depth + 1u); else { c.pc = 0x0025EB58u; return; } if (c.pc != 0x001E4E20u) [[unlikely]] return; }
L_001E4E20:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 696u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 2976u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[8], 0u + 6069u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E48u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001E4E48u) [[unlikely]] return; }
L_001E4E48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4E68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E88u);  if (depth < kMaxDepth) unit_0020(c, 150u, depth + 1u); else { c.pc = 0x00181F50u; return; } if (c.pc != 0x001E4E88u) [[unlikely]] return; }
L_001E4E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E90u);  if (depth < kMaxDepth) unit_0020(c, 153u, depth + 1u); else { c.pc = 0x00181FA0u; return; } if (c.pc != 0x001E4E90u) [[unlikely]] return; }
L_001E4E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 696u);
    set32(c.r[7], c.r[7].w[0] + 3000u);
    set32(c.r[8], 0u + 6082u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4EB8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001E4EB8u) [[unlikely]] return; }
L_001E4EB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E4F74; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001E4F74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 20704u));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[4].w[0] + 12738u);
    st32((c.r[2].w[0] + 5044u), c.r[6].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[4].w[0] + 12738u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 19912u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F4Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E4F4Cu) [[unlikely]] return; }
L_001E4F4C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] + 20072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F74u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E4F74u) [[unlikely]] return; }
L_001E4F74:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FB4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E4FB4u) [[unlikely]] return; }
L_001E4FB4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E5018; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001E4FE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5018; } }
L_001E4FE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FF4u);  if (depth < kMaxDepth) unit_0037(c, 459u, depth + 1u); else { c.pc = 0x001DEFF8u; return; } if (c.pc != 0x001E4FF4u) [[unlikely]] return; }
L_001E4FF4:
    set32(c.r[7], ld32((c.r[17].w[0] + 148u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5018u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001E5018u) [[unlikely]] return; }
L_001E5018:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5038:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5054u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E5054u) [[unlikely]] return; }
L_001E5054:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E509C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001E5080; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001E509C; } }
L_001E5080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    set32(c.r[5], 0u + 6u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E509Cu);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001E509Cu) [[unlikely]] return; }
L_001E509C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E50B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50D4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E50D4u) [[unlikely]] return; }
L_001E50D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E5138; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001E5100; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5138; } }
L_001E5100:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5114u);  if (depth < kMaxDepth) unit_0037(c, 459u, depth + 1u); else { c.pc = 0x001DEFF8u; return; } if (c.pc != 0x001E5114u) [[unlikely]] return; }
L_001E5114:
    set32(c.r[7], ld32((c.r[17].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5138u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001E5138u) [[unlikely]] return; }
L_001E5138:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5158:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E516Cu);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x001E516Cu) [[unlikely]] return; }
L_001E516C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5174u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E5174u) [[unlikely]] return; }
L_001E5174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E518C; } }
    set32(c.r[4], 0u + 133u);
    set32(c.r[16], 0u + 136u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5194; } }
L_001E518C:
    set32(c.r[4], 0u + 132u);
    set32(c.r[16], 0u + 135u);
    c.budget -= 2;
L_001E5194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E519Cu);  if (depth < kMaxDepth) unit_0075(c, 39u, depth + 1u); else { c.pc = 0x002D4710u; return; } if (c.pc != 0x001E519Cu) [[unlikely]] return; }
L_001E519C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 752u);
    set32(c.r[4], 0u + 134u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51C8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E51C8u) [[unlikely]] return; }
L_001E51C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[5], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51E4u);  if (depth < kMaxDepth) unit_0075(c, 43u, depth + 1u); else { c.pc = 0x002D4808u; return; } if (c.pc != 0x001E51E4u) [[unlikely]] return; }
L_001E51E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51ECu);  if (depth < kMaxDepth) unit_0034(c, 153u, depth + 1u); else { c.pc = 0x001D1A40u; return; } if (c.pc != 0x001E51ECu) [[unlikely]] return; }
L_001E51EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E521Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E521Cu) [[unlikely]] return; }
L_001E521C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E522Cu);  if (depth < kMaxDepth) unit_0081(c, 220u, depth + 1u); else { c.pc = 0x003068B8u; return; } if (c.pc != 0x001E522Cu) [[unlikely]] return; }
L_001E522C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E52B8; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
L_001E5278:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5284u);  if (depth < kMaxDepth) unit_007D(c, 220u, depth + 1u); else { c.pc = 0x002F7180u; return; } if (c.pc != 0x001E5284u) [[unlikely]] return; }
L_001E5284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E52A4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[19].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E529Cu);  if (depth < kMaxDepth) unit_0086(c, 271u, depth + 1u); else { c.pc = 0x0031B5E0u; return; } if (c.pc != 0x001E529Cu) [[unlikely]] return; }
L_001E529C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001E52A8; } }
L_001E52A4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E52A8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5278u | kUnwind; return; } goto L_001E5278; } }
L_001E52B8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E52E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 27020u);
    set32(c.r[18], 0u + 48u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 6;
L_001E5320:
    set32(c.r[2], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5354; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5348u);  if (depth < kMaxDepth) unit_0083(c, 12u, depth + 1u); else { c.pc = 0x0030C118u; return; } if (c.pc != 0x001E5348u) [[unlikely]] return; }
L_001E5348:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5354u);  if (depth < kMaxDepth) unit_0083(c, 12u, depth + 1u); else { c.pc = 0x0030C118u; return; } if (c.pc != 0x001E5354u) [[unlikely]] return; }
L_001E5354:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5320u | kUnwind; return; } goto L_001E5320; } }
L_001E5364:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5388:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53C4u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E53C4u) [[unlikely]] return; }
L_001E53C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], c.r[18].w[0] + 40u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5428; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
L_001E53E8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53F4u);  if (depth < kMaxDepth) unit_007D(c, 220u, depth + 1u); else { c.pc = 0x002F7180u; return; } if (c.pc != 0x001E53F4u) [[unlikely]] return; }
L_001E53F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5414; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[20].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E540Cu);  if (depth < kMaxDepth) unit_0086(c, 271u, depth + 1u); else { c.pc = 0x0031B5E0u; return; } if (c.pc != 0x001E540Cu) [[unlikely]] return; }
L_001E540C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001E5418; } }
L_001E5414:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E5418:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E53E8u | kUnwind; return; } goto L_001E53E8; } }
L_001E5428:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001E5450; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5440u);  if (depth < kMaxDepth) unit_0036(c, 477u, depth + 1u); else { c.pc = 0x001DB898u; return; } if (c.pc != 0x001E5440u) [[unlikely]] return; }
L_001E5440:
    set32(c.r[4], c.r[21].w[0] + 12224u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5450u);  if (depth < kMaxDepth) unit_0039(c, 159u, depth + 1u); else { c.pc = 0x001E5478u; return; } if (c.pc != 0x001E5450u) [[unlikely]] return; }
L_001E5450:
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
L_001E5478:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[19].w[0] + 40u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5500; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 4;
L_001E54C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54CCu);  if (depth < kMaxDepth) unit_007D(c, 220u, depth + 1u); else { c.pc = 0x002F7180u; return; } if (c.pc != 0x001E54CCu) [[unlikely]] return; }
L_001E54CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E54EC; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[20].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54E4u);  if (depth < kMaxDepth) unit_0086(c, 271u, depth + 1u); else { c.pc = 0x0031B5E0u; return; } if (c.pc != 0x001E54E4u) [[unlikely]] return; }
L_001E54E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001E54F0; } }
L_001E54EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E54F0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E54C0u | kUnwind; return; } goto L_001E54C0; } }
L_001E5500:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5564; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E5564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5520u);  if (depth < kMaxDepth) unit_0040(c, 44u, depth + 1u); else { c.pc = 0x00200880u; return; } if (c.pc != 0x001E5520u) [[unlikely]] return; }
L_001E5520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5528u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001E5528u) [[unlikely]] return; }
L_001E5528:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[5].w[0] + 13624u), 0u);
    set32(c.r[4], c.r[19].w[0] + 40u);
    st32((c.r[2].w[0] + 13636u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0] + 13628u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 13632u), 0u);
    st32((c.r[6].w[0] + 13656u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5564u);  if (depth < kMaxDepth) unit_0082(c, 151u, depth + 1u); else { c.pc = 0x0030AB68u; return; } if (c.pc != 0x001E5564u) [[unlikely]] return; }
L_001E5564:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5588:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55B0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E55B0u) [[unlikely]] return; }
L_001E55B0:
    set32(c.r[10], ld32((c.r[16].w[0] + 72u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[10], c.r[10].w[0] + 94u);
    set32(c.r[8], ld32((c.r[18].w[0] + 20668u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55E0u);  if (depth < kMaxDepth) unit_0034(c, 53u, depth + 1u); else { c.pc = 0x001D0B78u; return; } if (c.pc != 0x001E55E0u) [[unlikely]] return; }
L_001E55E0:
    set32(c.r[8], ld32((c.r[18].w[0] + 20668u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5600u);  if (depth < kMaxDepth) unit_0034(c, 38u, depth + 1u); else { c.pc = 0x001D0810u; return; } if (c.pc != 0x001E5600u) [[unlikely]] return; }
L_001E5600:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 94u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5614u);  if (depth < kMaxDepth) unit_0034(c, 127u, depth + 1u); else { c.pc = 0x001D1630u; return; } if (c.pc != 0x001E5614u) [[unlikely]] return; }
L_001E5614:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[8], c.r[8].w[0] + 22184u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E563Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E563Cu) [[unlikely]] return; }
L_001E563C:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[8], c.r[8].w[0] + 22368u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5664u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E5664u) [[unlikely]] return; }
L_001E5664:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 22616u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E568Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E568Cu) [[unlikely]] return; }
L_001E568C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E56A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 14260u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 19632u);
    set32(c.r[5], c.r[3].w[0] + 140u);
    c.budget -= 12;
L_001E56D8:
    set32(c.r[2], ld32((c.r[6].w[0] + 14260u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    ldl(c.r[7], (c.r[2].w[0] + 7u));
    ldr(c.r[7], (c.r[2].w[0]));
    ldl(c.r[8], (c.r[2].w[0] + 15u));
    ldr(c.r[8], (c.r[2].w[0] + 8u));
    ldl(c.r[9], (c.r[2].w[0] + 23u));
    ldr(c.r[9], (c.r[2].w[0] + 16u));
    set32(c.r[10], ld32((c.r[2].w[0] + 24u)));
    sdl(c.r[7], (c.r[3].w[0] + 7u));
    sdr(c.r[7], (c.r[3].w[0]));
    sdl(c.r[8], (c.r[3].w[0] + 15u));
    sdr(c.r[8], (c.r[3].w[0] + 8u));
    sdl(c.r[9], (c.r[3].w[0] + 23u));
    sdr(c.r[9], (c.r[3].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 28u);
    st32((c.r[3].w[0] + 24u), c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E56D8u | kUnwind; return; } goto L_001E56D8; } }
    set32(c.r[16], c.r[16].w[0] + 19632u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E573Cu);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x00229498u; return; } if (c.pc != 0x001E573Cu) [[unlikely]] return; }
L_001E573C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5748u);  if (depth < kMaxDepth) unit_0074(c, 95u, depth + 1u); else { c.pc = 0x002D11C8u; return; } if (c.pc != 0x001E5748u) [[unlikely]] return; }
L_001E5748:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5760:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 14264u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 25952u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 224u);
    c.budget -= 8;
L_001E5780:
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[8].w[0] + 14264u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5800; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[5].w[0] + 224u);
    c.budget -= 2;
L_001E57A8:
    ldl(c.r[9], (c.r[5].w[0] + 7u));
    ldr(c.r[9], (c.r[5].w[0]));
    ldl(c.r[10], (c.r[5].w[0] + 15u));
    ldr(c.r[10], (c.r[5].w[0] + 8u));
    ldl(c.r[11], (c.r[5].w[0] + 23u));
    ldr(c.r[11], (c.r[5].w[0] + 16u));
    ldl(c.r[12], (c.r[5].w[0] + 31u));
    ldr(c.r[12], (c.r[5].w[0] + 24u));
    sdl(c.r[9], (c.r[3].w[0] + 7u));
    sdr(c.r[9], (c.r[3].w[0]));
    sdl(c.r[10], (c.r[3].w[0] + 15u));
    sdr(c.r[10], (c.r[3].w[0] + 8u));
    sdl(c.r[11], (c.r[3].w[0] + 23u));
    sdr(c.r[11], (c.r[3].w[0] + 16u));
    sdl(c.r[12], (c.r[3].w[0] + 31u));
    sdr(c.r[12], (c.r[3].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E57A8u | kUnwind; return; } goto L_001E57A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5838; } }
L_001E5800:
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[5].w[0] + 224u);
    c.budget -= 2;
L_001E5808:
    c.r[9].d[0] = ld64((c.r[5].w[0]));
    c.r[10].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[11].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[12].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[9].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[11].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[12].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5808u | kUnwind; return; } goto L_001E5808; } }
L_001E5838:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5780u | kUnwind; return; } goto L_001E5780; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5858:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 44u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 14268u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28272u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5880u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001E5880u) [[unlikely]] return; }
L_001E5880:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5898:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58B4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E58B4u) [[unlikely]] return; }
L_001E58B4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E58E8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8176u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58E8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E58E8u) [[unlikely]] return; }
L_001E58E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E591Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E591Cu) [[unlikely]] return; }
L_001E591C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E5954; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[7], c.r[7].w[0] + 14168u);
    set32(c.r[8], c.r[8].w[0] - 31432u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5954u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E5954u) [[unlikely]] return; }
L_001E5954:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    set32(c.r[2], c.r[2].w[0] - 792u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5994u);  if (depth < kMaxDepth) unit_0033(c, 169u, depth + 1u); else { c.pc = 0x001CE380u; return; } if (c.pc != 0x001E5994u) [[unlikely]] return; }
L_001E5994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E59A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 816u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 760u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59D4u);  if (depth < kMaxDepth) unit_0058(c, 57u, depth + 1u); else { c.pc = 0x002608F0u; return; } if (c.pc != 0x001E59D4u) [[unlikely]] return; }
L_001E59D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59E0u);  if (depth < kMaxDepth) unit_0034(c, 30u, depth + 1u); else { c.pc = 0x001D0688u; return; } if (c.pc != 0x001E59E0u) [[unlikely]] return; }
L_001E59E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E59F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A1Cu);  if (depth < kMaxDepth) unit_008C(c, 101u, depth + 1u); else { c.pc = 0x00331418u; return; } if (c.pc != 0x001E5A1Cu) [[unlikely]] return; }
L_001E5A1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A30u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001E5A30u) [[unlikely]] return; }
L_001E5A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A3Cu);  if (depth < kMaxDepth) unit_008C(c, 46u, depth + 1u); else { c.pc = 0x00330D30u; return; } if (c.pc != 0x001E5A3Cu) [[unlikely]] return; }
L_001E5A3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A48u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0033C138u; return; } if (c.pc != 0x001E5A48u) [[unlikely]] return; }
L_001E5A48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
L_001E5A80:
    set32(c.r[4], c.r[18].w[0] - 14960u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A90u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E5A90u) [[unlikely]] return; }
L_001E5A90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AA8u);  if (depth < kMaxDepth) unit_0008(c, 62u, depth + 1u); else { c.pc = 0x00120BD0u; return; } if (c.pc != 0x001E5AA8u) [[unlikely]] return; }
L_001E5AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5AD0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AC0u);  if (depth < kMaxDepth) unit_0077(c, 154u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x001E5AC0u) [[unlikely]] return; }
L_001E5AC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AD0u);  if (depth < kMaxDepth) unit_0008(c, 43u, depth + 1u); else { c.pc = 0x001206A8u; return; } if (c.pc != 0x001E5AD0u) [[unlikely]] return; }
L_001E5AD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5A80u | kUnwind; return; } goto L_001E5A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AE8u);  if (depth < kMaxDepth) unit_007E(c, 94u, depth + 1u); else { c.pc = 0x002F8A60u; return; } if (c.pc != 0x001E5AE8u) [[unlikely]] return; }
L_001E5AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AF0u);  if (depth < kMaxDepth) unit_0008(c, 11u, depth + 1u); else { c.pc = 0x00120190u; return; } if (c.pc != 0x001E5AF0u) [[unlikely]] return; }
L_001E5AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AF8u);  if (depth < kMaxDepth) unit_0033(c, 47u, depth + 1u); else { c.pc = 0x001CC9C0u; return; } if (c.pc != 0x001E5AF8u) [[unlikely]] return; }
L_001E5AF8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5B18:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B3Cu);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E5B3Cu) [[unlikely]] return; }
L_001E5B3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5C28; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B54u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E5B54u) [[unlikely]] return; }
L_001E5B54:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E5C08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12224u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B78u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E5B78u) [[unlikely]] return; }
L_001E5B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5B8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5C04; } }
L_001E5B8C:
    set32(c.r[4], c.r[2].w[0] + 40u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5C00; } }
    set32(c.r[19], 0u + 1u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
L_001E5BB0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BC4u);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x001CFEB8u; return; } if (c.pc != 0x001E5BC4u) [[unlikely]] return; }
L_001E5BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001E5BD8; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5BDC; } }
L_001E5BD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E5BDC:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5C00; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5BB0u | kUnwind; return; } goto L_001E5BB0; } }
L_001E5C00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E5C04:
    set32(c.r[16], c.r[2].w[0] + 2u);
    c.budget -= 1;
L_001E5C08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C14u);  if (depth < kMaxDepth) unit_0082(c, 316u, depth + 1u); else { c.pc = 0x0030BEB8u; return; } if (c.pc != 0x001E5C14u) [[unlikely]] return; }
L_001E5C14:
    set32(c.r[4], c.r[20].w[0] - 5800u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C28u);  if (depth < kMaxDepth) unit_0043(c, 114u, depth + 1u); else { c.pc = 0x0020D9E8u; return; } if (c.pc != 0x001E5C28u) [[unlikely]] return; }
L_001E5C28:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5C50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 8;
L_001E5C70:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C80u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E5C80u) [[unlikely]] return; }
L_001E5C80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 640u)));
    st32((c.r[5].w[0] + 11516u), 0u);
    st32((c.r[5].w[0] + 11756u), 0u);
    st32((c.r[5].w[0] + 11836u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5CA8; } }
    set32(c.r[4], c.r[17].w[0] - 27328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CA8u);  if (depth < kMaxDepth) unit_0048(c, 74u, depth + 1u); else { c.pc = 0x00221160u; return; } if (c.pc != 0x001E5CA8u) [[unlikely]] return; }
L_001E5CA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5C70u | kUnwind; return; } goto L_001E5C70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22808u);
    set32(c.r[6], 0u + 320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CD0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001E5CD0u) [[unlikely]] return; }
L_001E5CD0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5CF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] - 14960u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D2Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E5D2Cu) [[unlikely]] return; }
L_001E5D2C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[16].w[0] + 13096u), c.r[19].w[0]);
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 612u), 0u);
    st16((c.r[16].w[0] + 11354u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D54u);  if (depth < kMaxDepth) unit_0008(c, 40u, depth + 1u); else { c.pc = 0x00120640u; return; } if (c.pc != 0x001E5D54u) [[unlikely]] return; }
L_001E5D54:
    set32(c.r[6], ld32((c.r[20].w[0] + 24436u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    st32((c.r[6].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D78u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E5D78u) [[unlikely]] return; }
L_001E5D78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[16].w[0] + 13096u), c.r[19].w[0]);
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 612u), 0u);
    st16((c.r[16].w[0] + 11354u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D9Cu);  if (depth < kMaxDepth) unit_0008(c, 40u, depth + 1u); else { c.pc = 0x00120640u; return; } if (c.pc != 0x001E5D9Cu) [[unlikely]] return; }
L_001E5D9C:
    set32(c.r[4], ld32((c.r[20].w[0] + 24436u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5DD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3024u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DF8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E5DF8u) [[unlikely]] return; }
L_001E5DF8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E04u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E5E04u) [[unlikely]] return; }
L_001E5E04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 9488u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E18u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E5E18u) [[unlikely]] return; }
L_001E5E18:
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5E30:
    set32(c.r[29], c.r[29].w[0] - 752u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[5].w[0] + 3024u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 592u), c.r[31].d[0]);
    set32(c.r[20], 0u - 1u);
    st32((c.r[29].w[0] + 736u), c.f[20]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E8Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E5E8Cu) [[unlikely]] return; }
L_001E5E8C:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3040u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EA8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E5EA8u) [[unlikely]] return; }
L_001E5EA8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EB4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E5EB4u) [[unlikely]] return; }
L_001E5EB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EC4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E5EC4u) [[unlikely]] return; }
L_001E5EC4:
    set32(c.r[4], ld32((c.r[21].w[0] + 9488u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5ED8u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E5ED8u) [[unlikely]] return; }
L_001E5ED8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_001E5F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[29].w[0] + 64u);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F18u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E5F18u) [[unlikely]] return; }
L_001E5F18:
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 196u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F34u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E5F34u) [[unlikely]] return; }
L_001E5F34:
    set32(c.r[4], ld32((c.r[21].w[0] + 9488u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F44u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E5F44u) [[unlikely]] return; }
L_001E5F44:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_001E5F90; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F70u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E5F70u) [[unlikely]] return; }
L_001E5F70:
    set32(c.r[23], 0u + 1u);
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 196u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F90u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E5F90u) [[unlikely]] return; }
L_001E5F90:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 592u));
    c.f[20] = ld32((c.r[29].w[0] + 736u));
    set32(c.r[29], c.r[29].w[0] + 752u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5FC8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6030u);  if (depth < kMaxDepth) unit_0089(c, 106u, depth + 1u); else { c.pc = 0x00325468u; return; } if (c.pc != 0x001E6030u) [[unlikely]] return; }
L_001E6030:
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E604Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E604Cu) [[unlikely]] return; }
L_001E604C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E605Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E605Cu) [[unlikely]] return; }
L_001E605C:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6074u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001E6074u) [[unlikely]] return; }
L_001E6074:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E60A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001E611C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E60D4; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E611C; } }
L_001E60D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60E4u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E60E4u) [[unlikely]] return; }
L_001E60E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60F4u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E60F4u) [[unlikely]] return; }
L_001E60F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6104u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E6104u) [[unlikely]] return; }
L_001E6104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6114u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E6114u) [[unlikely]] return; }
L_001E6114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E615C; } }
L_001E611C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E612Cu);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E612Cu) [[unlikely]] return; }
L_001E612C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E613Cu);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E613Cu) [[unlikely]] return; }
L_001E613C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E614Cu);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E614Cu) [[unlikely]] return; }
L_001E614C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E615Cu);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E615Cu) [[unlikely]] return; }
L_001E615C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st16((c.r[16].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61B8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E61B8u) [[unlikely]] return; }
L_001E61B8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61C8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E61C8u) [[unlikely]] return; }
L_001E61C8:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61E0u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001E61E0u) [[unlikely]] return; }
L_001E61E0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6208:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6228u);  if (depth < kMaxDepth) unit_0036(c, 411u, depth + 1u); else { c.pc = 0x001DAF70u; return; } if (c.pc != 0x001E6228u) [[unlikely]] return; }
L_001E6228:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6244u);  if (depth < kMaxDepth) unit_0038(c, 388u, depth + 1u); else { c.pc = 0x001E2878u; return; } if (c.pc != 0x001E6244u) [[unlikely]] return; }
L_001E6244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E62E4; } }
    c.f[3] = ld32((c.r[29].w[0]));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6290u);  if (depth < kMaxDepth) unit_0089(c, 106u, depth + 1u); else { c.pc = 0x00325468u; return; } if (c.pc != 0x001E6290u) [[unlikely]] return; }
L_001E6290:
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[17].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62ACu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E62ACu) [[unlikely]] return; }
L_001E62AC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62BCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E62BCu) [[unlikely]] return; }
L_001E62BC:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62D4u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001E62D4u) [[unlikely]] return; }
L_001E62D4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001E62E4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6300:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6368; } }
    c.r[2].d[0] = c.r[3].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6338; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6368; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6374; } }
L_001E6338:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6368; } }
    c.r[2].d[0] = c.r[3].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6374; } }
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6374; } }
    c.r[2].d[0] = c.r[3].sd[0] < 198ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6374; } }
L_001E6368:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6374:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6380:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E63A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E63B0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001E63B0u) [[unlikely]] return; }
L_001E63B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E63C0:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 13648u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E63D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E63E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 13640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49260000u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 43342ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E642C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0E860000u);
    c.r[2].d[0] = c.r[2].d[0] | 54174ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E642C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x33E60000u);
    c.r[2].d[0] = c.r[2].d[0] | 64046ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E6438; } }
L_001E642C:
    set32(c.r[3], ld32((c.r[6].w[0] + 13640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 13660u), c.r[3].w[0]);
    c.budget -= 3;
L_001E6438:
    st32((c.r[6].w[0] + 13640u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6448:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6460u);  if (depth < kMaxDepth) unit_0040(c, 40u, depth + 1u); else { c.pc = 0x002007E0u; return; } if (c.pc != 0x001E6460u) [[unlikely]] return; }
L_001E6460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6470:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64B0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E64B0u) [[unlikely]] return; }
L_001E64B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64C4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E64C4u) [[unlikely]] return; }
L_001E64C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 13200u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E64FC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] - 29684u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6508; } }
L_001E64FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29684u), 0u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_001E6508:
    set32(c.r[2], ld32((c.r[5].w[0] - 29684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E651Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E651Cu) [[unlikely]] return; }
L_001E651C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E65EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13172u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 13200u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E674C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E65A4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6574; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E65A4; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E65A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E65B0; } }
L_001E6574:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E65A4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E65B0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E65B0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 198ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E65B0; } }
L_001E65A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E65B4; } }
L_001E65B0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E65B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E674C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29700u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] - 29692u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6748; } }
L_001E65EC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 13200u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 13200u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 13172u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E668C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6670; } }
    c.r[2].d[0] = c.r[3].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6640; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6670; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E667C; } }
L_001E6640:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6670; } }
    c.r[2].d[0] = c.r[3].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E667C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E667C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 198ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E667C; } }
L_001E6670:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6680; } }
L_001E667C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6680:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6720; } }
L_001E668C:
    set32(c.r[2], ld32((c.r[16].w[0] + 13172u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E674C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6704; } }
    c.r[2].d[0] = c.r[3].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E66D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6704; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6710; } }
L_001E66D4:
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E6704; } }
    c.r[2].d[0] = c.r[3].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6710; } }
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6710; } }
    c.r[2].d[0] = c.r[3].sd[0] < 198ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6710; } }
L_001E6704:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6714; } }
L_001E6710:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6714:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E674C; } }
L_001E6720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29700u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] - 29692u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
L_001E6748:
    st32((c.r[6].w[0] - 29688u), c.r[3].w[0]);
    c.budget -= 1;
L_001E674C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6768:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[21], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[22], 0u - 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 18;
L_001E67B0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[23].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67C0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E67C0u) [[unlikely]] return; }
L_001E67C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001E687C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[21].d[0];  if (t) { goto L_001E67F0; } }
    st32((c.r[20].w[0] - 26392u), c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E67F4; } }
L_001E67F0:
    st32((c.r[20].w[0] - 26392u), c.r[18].w[0]);
    c.budget -= 1;
L_001E67F4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[21].d[0];  if (t) { goto L_001E683C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6804u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E6804u) [[unlikely]] return; }
L_001E6804:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6814u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E6814u) [[unlikely]] return; }
L_001E6814:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6824u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E6824u) [[unlikely]] return; }
L_001E6824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6834u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E6834u) [[unlikely]] return; }
L_001E6834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E687C; } }
L_001E683C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E684Cu);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E684Cu) [[unlikely]] return; }
L_001E684C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E685Cu);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001E685Cu) [[unlikely]] return; }
L_001E685C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E686Cu);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E686Cu) [[unlikely]] return; }
L_001E686C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E687Cu);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001E687Cu) [[unlikely]] return; }
L_001E687C:
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E67B0u | kUnwind; return; } goto L_001E67B0; } }
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
L_001E68B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68D0u);  if (depth < kMaxDepth) unit_0038(c, 477u, depth + 1u); else { c.pc = 0x001E3220u; return; } if (c.pc != 0x001E68D0u) [[unlikely]] return; }
L_001E68D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E68E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 300u);
    c.r[5].d[0] = c.r[5].d[0] | 34464ull;
    c.r[6].d[0] = c.r[6].d[0] | 34464ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6908u);  if (depth < kMaxDepth) unit_0049(c, 48u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x001E6908u) [[unlikely]] return; }
L_001E6908:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] - 116u), 0u);
    st32((c.r[3].w[0] + 19808u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6948u);  if (depth < kMaxDepth) unit_0039(c, 308u, depth + 1u); else { c.pc = 0x001E69A8u; return; } if (c.pc != 0x001E6948u) [[unlikely]] return; }
L_001E6948:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6958:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6974u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001E6974u) [[unlikely]] return; }
L_001E6974:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6984u);  if (depth < kMaxDepth) unit_0066(c, 220u, depth + 1u); else { c.pc = 0x0029A360u; return; } if (c.pc != 0x001E6984u) [[unlikely]] return; }
L_001E6984:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6998:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E69A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 20352u);
    set32(c.r[3], c.r[3].w[0] + 27032u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[4].w[0] - 22488u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 11256u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E69D0:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E69EC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6A30; } }
L_001E69EC:
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6A04; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6A30; } }
L_001E6A04:
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6A30; } }
    c.r[2].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6A28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6A30; } }
L_001E6A28:
    c.r[2].d[0] = c.r[4].d[0] >> 3;
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 2;
L_001E6A30:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6A40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 22008u);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21968u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[8], c.r[8].w[0] + 21888u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 21848u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[10], c.r[10].w[0] + 21928u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[7], 0u + 4u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[9], 0u + 1u);
    set32(c.r[11], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6AB0u);  if (depth < kMaxDepth) unit_0043(c, 149u, depth + 1u); else { c.pc = 0x0020E218u; return; } if (c.pc != 0x001E6AB0u) [[unlikely]] return; }
L_001E6AB0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20668u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6AC0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6AC0u) [[unlikely]] return; }
L_001E6AC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 20672u)));
    c.r[4].d[0] = c.r[4].d[0] | 1024ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6AD8u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6AD8u) [[unlikely]] return; }
L_001E6AD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20668u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6AE8u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6AE8u) [[unlikely]] return; }
L_001E6AE8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 4584u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B14u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001E6B14u) [[unlikely]] return; }
L_001E6B14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[3].w[0] + 20708u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6B38:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B54u);  if (depth < kMaxDepth) unit_0043(c, 174u, depth + 1u); else { c.pc = 0x0020E870u; return; } if (c.pc != 0x001E6B54u) [[unlikely]] return; }
L_001E6B54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6B68:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B84u);  if (depth < kMaxDepth) unit_0043(c, 175u, depth + 1u); else { c.pc = 0x0020E890u; return; } if (c.pc != 0x001E6B84u) [[unlikely]] return; }
L_001E6B84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6B98:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BB4u);  if (depth < kMaxDepth) unit_0043(c, 176u, depth + 1u); else { c.pc = 0x0020E8B0u; return; } if (c.pc != 0x001E6BB4u) [[unlikely]] return; }
L_001E6BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6BC8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BE4u);  if (depth < kMaxDepth) unit_0043(c, 177u, depth + 1u); else { c.pc = 0x0020E8D0u; return; } if (c.pc != 0x001E6BE4u) [[unlikely]] return; }
L_001E6BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6BF8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C14u);  if (depth < kMaxDepth) unit_0043(c, 178u, depth + 1u); else { c.pc = 0x0020E8F0u; return; } if (c.pc != 0x001E6C14u) [[unlikely]] return; }
L_001E6C14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6C28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20664u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C4Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6C4Cu) [[unlikely]] return; }
L_001E6C4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 20680u)));
    c.r[4].d[0] = c.r[4].d[0] | 1024ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C64u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6C64u) [[unlikely]] return; }
L_001E6C64:
    set32(c.r[4], ld32((c.r[17].w[0] + 20664u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C74u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6C74u) [[unlikely]] return; }
L_001E6C74:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 4608u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CA0u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001E6CA0u) [[unlikely]] return; }
L_001E6CA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 20712u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20712u)));
    set32(c.r[4], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] + 20712u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001E6CF4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CF4u);  if (depth < kMaxDepth) unit_0044(c, 13u, depth + 1u); else { c.pc = 0x00210A20u; return; } if (c.pc != 0x001E6CF4u) [[unlikely]] return; }
L_001E6CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6D08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 5800u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D30u);  if (depth < kMaxDepth) unit_0043(c, 175u, depth + 1u); else { c.pc = 0x0020E890u; return; } if (c.pc != 0x001E6D30u) [[unlikely]] return; }
L_001E6D30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D3Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6D3Cu) [[unlikely]] return; }
L_001E6D3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D50u);  if (depth < kMaxDepth) unit_0043(c, 176u, depth + 1u); else { c.pc = 0x0020E8B0u; return; } if (c.pc != 0x001E6D50u) [[unlikely]] return; }
L_001E6D50:
    c.r[4].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D5Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6D5Cu) [[unlikely]] return; }
L_001E6D5C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4624u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], 0u + 128u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D88u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001E6D88u) [[unlikely]] return; }
L_001E6D88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 20792u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 22044u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6DB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DD8u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6DD8u) [[unlikely]] return; }
L_001E6DD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DE8u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001E6DE8u) [[unlikely]] return; }
L_001E6DE8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 20792u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E6E38; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4624u);
    set32(c.r[7], 0u + 128u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E28u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001E6E28u) [[unlikely]] return; }
L_001E6E28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 20792u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 22044u), c.r[3].w[0]);
    c.budget -= 4;
L_001E6E38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[17].w[0] + 22044u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E6E8C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[16].w[0] + 20792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E84u);  if (depth < kMaxDepth) unit_0044(c, 13u, depth + 1u); else { c.pc = 0x00210A20u; return; } if (c.pc != 0x001E6E84u) [[unlikely]] return; }
L_001E6E84:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 20792u), c.r[2].w[0]);
    c.budget -= 2;
L_001E6E8C:
    st32((c.r[17].w[0] + 22044u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 22840u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6EB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22840u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6EC8:
    if (::decomp::hook_001E6EC8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_001E6EC8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 1660u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6EDCu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001E6EDCu) [[unlikely]] return; }
L_001E6EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6EF0:
    if (::decomp::hook_001E6EF0.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_001E6EF0, depth)) return; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 31396u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 22848u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6F14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 14184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0] + 14184u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6F50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0] + 14188u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6F70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_001E70D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FA4u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x001E6FA4u) [[unlikely]] return; }
L_001E6FA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FB4u);  if (depth < kMaxDepth) unit_008F(c, 13u, depth + 1u); else { c.pc = 0x0033C240u; return; } if (c.pc != 0x001E6FB4u) [[unlikely]] return; }
L_001E6FB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E70D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E6FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FDCu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x001E6FDCu) [[unlikely]] return; }
L_001E6FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6FF4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6FF8; } }
L_001E6FF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_001E6FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7010; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001E7010:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E7080; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 428u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E704C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7034u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x001E7034u) [[unlikely]] return; }
L_001E7034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E704C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7050; } }
L_001E704C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_001E7050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7078; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7078; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001E7078:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E70A0; } }
L_001E7080:
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E70D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7098u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x001E7098u) [[unlikely]] return; }
L_001E7098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E70D4; } }
L_001E70A0:
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 13192u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001E70D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E70D4u);  if (depth < kMaxDepth) unit_007F(c, 121u, depth + 1u); else { c.pc = 0x002FEBA0u; return; } if (c.pc != 0x001E70D4u) [[unlikely]] return; }
L_001E70D4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E70F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7144; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7148; } }
L_001E7138:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E71C4; } }
L_001E7144:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E7148:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E7224; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7170u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x001E7170u) [[unlikely]] return; }
L_001E7170:
    set32(c.r[3], c.r[16].w[0] + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 28528u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001E71C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_001E71A0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7138u | kUnwind; return; } goto L_001E7138; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E71A0u | kUnwind; return; } goto L_001E71A0; } }
L_001E71C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001E71C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001E7224; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E7204; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7204u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x001E7204u) [[unlikely]] return; }
L_001E7204:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_001E7224:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 10168u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00310000u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] - 1296u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 13248u);
    set32(c.r[7], 0u + 16384u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7290u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x001E7290u) [[unlikely]] return; }
L_001E7290:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 2;
L_001E7298:
    set32(c.r[4], c.r[18].w[0] + 10168u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E72B0u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x001E72B0u) [[unlikely]] return; }
L_001E72B0:
    st32((c.r[2].w[0] + 104u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] - 14960u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E72CCu);  if (depth < kMaxDepth) unit_0060(c, 250u, depth + 1u); else { c.pc = 0x00283B38u; return; } if (c.pc != 0x001E72CCu) [[unlikely]] return; }
L_001E72CC:
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7298u | kUnwind; return; } goto L_001E7298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 18704u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], c.r[4].w[0] + 10216u);
    set32(c.r[5], 0u + 500u);
    set32(c.r[6], 0u + 528u);
    set32(c.r[8], c.r[8].w[0] - 1392u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7304u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x001E7304u) [[unlikely]] return; }
L_001E7304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 17;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 2;
    c.r[5].d[0] = c.r[5].d[0] | 3ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 14208u);
    c.budget -= 9;
L_001E7328:
    set32(c.r[2], c.r[4].w[0] - 15u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7348; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7350; } }
L_001E7348:
    c.r[2].d[0] = ld64((c.r[3].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 2;
L_001E7350:
    st64((c.r[3].w[0] + 120u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 13248u);
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7328u | kUnwind; return; } goto L_001E7328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7370u);  if (depth < kMaxDepth) unit_006B(c, 212u, depth + 1u); else { c.pc = 0x002AF9C0u; return; } if (c.pc != 0x001E7370u) [[unlikely]] return; }
L_001E7370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7378u);  if (depth < kMaxDepth) unit_0082(c, 41u, depth + 1u); else { c.pc = 0x00309D30u; return; } if (c.pc != 0x001E7378u) [[unlikely]] return; }
L_001E7378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7380u);  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8078u; return; } if (c.pc != 0x001E7380u) [[unlikely]] return; }
L_001E7380:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E73A0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[23], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[23].w[0] + 13248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[18], 0u + 13248u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    set32(c.r[21], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[22], c.r[23].w[0] + 26496u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[20], 0u + 880u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 256u), c.f[28]);
    st32((c.r[29].w[0] + 248u), c.f[27]);
    st32((c.r[29].w[0] + 240u), c.f[26]);
    st32((c.r[29].w[0] + 232u), c.f[25]);
    st32((c.r[29].w[0] + 224u), c.f[24]);
    st32((c.r[29].w[0] + 216u), c.f[23]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 36;
L_001E7430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001E7494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7468u);  if (depth < kMaxDepth) unit_007D(c, 237u, depth + 1u); else { c.pc = 0x002F7410u; return; } if (c.pc != 0x001E7468u) [[unlikely]] return; }
L_001E7468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] - 4440u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7490u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x001E7490u) [[unlikely]] return; }
L_001E7490:
    st32((c.r[16].w[0] + 7700u), 0u);
    c.budget -= 1;
L_001E7494:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7430u | kUnwind; return; } goto L_001E7430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22504u)));
    set32(c.r[6], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10260u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[6].d[0] = c.r[6].d[0] << (c.r[3].w[0] & 63u);
    c.r[7].d[0] = c.r[7].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E7528; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001E74E0:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7504; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7518; } }
L_001E7504:
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7518; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001E7518:
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E74E0u | kUnwind; return; } goto L_001E74E0; } }
L_001E7528:
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    st16((c.r[19].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st16((c.r[22].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E75A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 5552u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7568u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E7568u) [[unlikely]] return; }
L_001E7568:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7584; } }
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[19].w[0] + 128u), c.f[0]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    c.budget -= 4;
L_001E7584:
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[0];
    st32((c.r[19].w[0] + 132u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E759Cu);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E759Cu) [[unlikely]] return; }
L_001E759C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E75CC; } }
L_001E75A4:
    st32((c.r[19].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    st32((c.r[19].w[0] + 136u), c.f[0]);
    st32((c.r[19].w[0] + 132u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75CCu);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E75CCu) [[unlikely]] return; }
L_001E75CC:
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E7628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 5552u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7604u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E7604u) [[unlikely]] return; }
L_001E7604:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E763C; } }
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[22].w[0] + 136u), c.f[0]);
    st32((c.r[22].w[0] + 128u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E763C; } }
L_001E7628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[22].w[0] + 128u), 0u);
    st32((c.r[22].w[0] + 136u), c.f[0]);
    c.budget -= 5;
L_001E763C:
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 11584u);
    st32((c.r[22].w[0] + 132u), c.f[0]);
    set32(c.r[16], 0u + 11u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E765Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001E765Cu) [[unlikely]] return; }
L_001E765C:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E766Cu);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E766Cu) [[unlikely]] return; }
L_001E766C:
    c.budget -= 1;
L_001E7670:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7680u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001E7680u) [[unlikely]] return; }
L_001E7680:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7690u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E7690u) [[unlikely]] return; }
L_001E7690:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E769Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001E769Cu) [[unlikely]] return; }
L_001E769C:
    st32((c.r[17].w[0] + 132u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7670u | kUnwind; return; } goto L_001E7670; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E77F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[17], 0u + 13248u);
    set32(c.r[21], c.r[18].w[0] + 13248u);
    set32(c.r[20], 0u - 1u);
    c.budget -= 6;
L_001E76D0:
    set32(c.r[16], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_001E76FC; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76FCu);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x001E76FCu) [[unlikely]] return; }
L_001E76FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E76D0u | kUnwind; return; } goto L_001E76D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7714u);  if (depth < kMaxDepth) unit_007B(c, 102u, depth + 1u); else { c.pc = 0x002ED5C0u; return; } if (c.pc != 0x001E7714u) [[unlikely]] return; }
L_001E7714:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7724u);  if (depth < kMaxDepth) unit_006E(c, 170u, depth + 1u); else { c.pc = 0x002BA420u; return; } if (c.pc != 0x001E7724u) [[unlikely]] return; }
L_001E7724:
    c.f[1] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] + 148u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E775C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7788; } }
L_001E775C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E778C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_001E7788:
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_001E778C:
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[20]);
    c.f[13] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E77B0u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x001E77B0u) [[unlikely]] return; }
L_001E77B0:
    c.f[1] = c.f[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    st32((c.r[22].w[0] + 148u), c.f[1]);
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E77D0; } }
    c.f[0] = fp::sub(c.f[1], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E77F0; } }
L_001E77D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E77F4; } }
    c.f[0] = fp::add(c.f[1], c.f[21]);
    c.budget -= 1;
L_001E77F0:
    st32((c.r[22].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_001E77F4:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 4976u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7958; } }
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[2] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E784C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7878; } }
L_001E784C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7878; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_001E7878:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[12];
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7898u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E7898u) [[unlikely]] return; }
L_001E7898:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E78ACu);  if (depth < kMaxDepth) unit_005B(c, 203u, depth + 1u); else { c.pc = 0x0026E1F0u; return; } if (c.pc != 0x001E78ACu) [[unlikely]] return; }
L_001E78AC:
    c.f[0] = ld32((c.r[22].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[1] = ld32((c.r[22].w[0] + 136u));
    set32(c.r[2], c.r[3].w[0] - 17840u);
    c.f[2] = ld32((c.r[19].w[0] + 128u));
    c.f[3] = ld32((c.r[19].w[0] + 136u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[5] = c.r[1].w[0];
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[12] = fp::add(c.f[20], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[12]));
    st32((c.r[2].w[0] + 148u), c.f[12]);
    st32((c.r[2].w[0] + 128u), c.f[1]);
    st32((c.r[2].w[0] + 136u), c.f[0]);
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7928; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7954; } }
L_001E7928:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7958; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_001E7954:
    st32((c.r[2].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_001E7958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 17840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E796Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001E796Cu) [[unlikely]] return; }
L_001E796C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E797Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001E797Cu) [[unlikely]] return; }
L_001E797C:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7998u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E7998u) [[unlikely]] return; }
L_001E7998:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14196u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E79C0; } }
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 14192u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 14196u), c.r[3].w[0]);
    c.budget -= 6;
L_001E79C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14204u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E79E8; } }
    c.f[0] = ld32((c.r[19].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 14200u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 14204u), c.r[3].w[0]);
    c.budget -= 6;
L_001E79E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[24] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[23] = c.r[1].w[0];
    set32(c.r[19], c.r[2].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[22] = c.r[1].w[0];
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EE50000u);
    c.r[1].d[0] = c.r[1].d[0] | 51450ull;
    c.f[28] = c.r[1].w[0];
    set32(c.r[18], 0u + 13248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[27] = c.r[1].w[0];
    set32(c.r[30], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[26] = c.r[1].w[0];
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[25] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 28;
L_001E7A58:
    set32(c.r[2], c.r[16].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_001E7B90; } }
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[28]);
    c.f[21] = fp::add(c.f[0], c.f[24]);
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[21]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7AA4; } }
    c.f[21] = fp::sub(c.f[21], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7AB8; } }
L_001E7AA4:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[27]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7AB8; } }
    c.f[21] = fp::add(c.f[21], c.f[23]);
    c.budget -= 1;
L_001E7AB8:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AC4u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x001E7AC4u) [[unlikely]] return; }
L_001E7AC4:
    c.f[12] = c.f[21];
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AD4u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x001E7AD4u) [[unlikely]] return; }
L_001E7AD4:
    c.f[2] = ld32((c.r[21].w[0] + 23024u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[23].w[0] + 14192u));
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[20] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = ld32((c.r[22].w[0] + 14200u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[12] = c.f[21];
    c.f[3] = fp::add(c.f[3], c.f[20]);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B10u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001E7B10u) [[unlikely]] return; }
L_001E7B10:
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[0] = ld32((c.r[20].w[0] + 23028u));
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[21]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7B40; } }
    c.f[21] = fp::sub(c.f[21], c.f[22]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7B54; } }
L_001E7B40:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7B54; } }
    c.f[21] = fp::add(c.f[21], c.f[22]);
    c.budget -= 1;
L_001E7B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 148u), c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B80u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x001E7B80u) [[unlikely]] return; }
L_001E7B80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B90u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x001E7B90u) [[unlikely]] return; }
L_001E7B90:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7A58u | kUnwind; return; } goto L_001E7A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7BA8u);  if (depth < kMaxDepth) unit_007B(c, 102u, depth + 1u); else { c.pc = 0x002ED5C0u; return; } if (c.pc != 0x001E7BA8u) [[unlikely]] return; }
L_001E7BA8:
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
    c.f[28] = ld32((c.r[29].w[0] + 256u));
    c.f[27] = ld32((c.r[29].w[0] + 248u));
    c.f[26] = ld32((c.r[29].w[0] + 240u));
    c.f[25] = ld32((c.r[29].w[0] + 232u));
    c.f[24] = ld32((c.r[29].w[0] + 224u));
    c.f[23] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7C00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22504u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[18].w[0] + 13248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[19], c.r[18].w[0] + 26496u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 24;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001E7CAC; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7C80; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7CAC; } }
L_001E7C80:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7CAC; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7C80u | kUnwind; return; } goto L_001E7C80; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001E7CAC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E7D64; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 5552u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CE8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E7CE8u) [[unlikely]] return; }
L_001E7CE8:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D0Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E7D0Cu) [[unlikely]] return; }
L_001E7D0C:
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = c.f[2];
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D34u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E7D34u) [[unlikely]] return; }
L_001E7D34:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[12] = c.f[1];
    st32((c.r[19].w[0] + 136u), c.f[2]);
    st32((c.r[19].w[0] + 128u), c.f[0]);
    st32((c.r[19].w[0] + 132u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D5Cu);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E7D5Cu) [[unlikely]] return; }
L_001E7D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7D8C; } }
L_001E7D64:
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D8Cu);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E7D8Cu) [[unlikely]] return; }
L_001E7D8C:
    set32(c.r[3], ld32((c.r[20].w[0] - 16464u)));
    set32(c.r[4], c.r[20].w[0] - 16464u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7DC4; } }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    c.budget -= 9;
L_001E7DC4:
    set32(c.r[2], 0u - 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[21].w[0] + 4976u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7DF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001E7E4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E7E4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], 0u + 19u);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 4;
L_001E7E30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E40u);  if (depth < kMaxDepth) unit_0089(c, 91u, depth + 1u); else { c.pc = 0x00325220u; return; } if (c.pc != 0x001E7E40u) [[unlikely]] return; }
L_001E7E40:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7E30u | kUnwind; return; } goto L_001E7E30; } }
L_001E7E4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7E68:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[2].w[0] + 27456u);
    c.budget -= 4;
L_001E7E90:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10000u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7EA8; } }
    st16((c.r[4].w[0] + 10000u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7EA8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10144u));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7EBC; } }
    st16((c.r[4].w[0] + 10144u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7EBC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 9985u));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7ED0; } }
    st8((c.r[4].w[0] + 9985u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7ED0:
    set32(c.r[4], c.r[4].w[0] + 13248u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7E90u | kUnwind; return; } goto L_001E7E90; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22504u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E7F14; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7F1C; } }
L_001E7F14:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_001E7F1C:
    c.r[4].d[0] = c.r[4].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_001E7F54; } }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_001E7F30:
    c.r[2].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7F44; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_001E7F44:
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7F30u | kUnwind; return; } goto L_001E7F30; } }
L_001E7F54:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 22504u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 10260u)));
    set32(c.r[8], 0u + 2u);
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], ld32((c.r[6].w[0] + 172u)));
    c.r[8].d[0] = c.r[8].d[0] << (c.r[2].w[0] & 63u);
    c.r[9].d[0] = c.r[9].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E7FDC; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001E7F98:
    c.r[3].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7FB8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7FCC; } }
L_001E7FB8:
    c.r[2].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7FCC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001E7FCC:
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7F98u | kUnwind; return; } goto L_001E7F98; } }
L_001E7FDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 22504u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_003A(c, 4u, depth); } }
    [[clang::musttail]] return unit_003A(c, 2u, depth);
}

}
